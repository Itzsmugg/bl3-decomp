// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142aed830 FUN_142aed830 body=369 status=ok
// SIG undefined FUN_142aed830(void)

void FUN_142aed830(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar2 = *(int *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
    plVar9 = (longlong *)0x0;
    lVar6 = *(longlong *)(param_1 + 0x2f0);
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      lVar6 = param_1 + 0x2e8;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U & (longlong)iVar2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x2b0);
      iVar7 = iVar3;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar6) != iVar2) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar6);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 != -1) {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
        while (iVar3 != -1) {
          plVar8 = (longlong *)((longlong)iVar3 * 0x20 + lVar6);
          if ((int)*plVar8 == iVar2) {
            if (iVar3 != -1) goto LAB_142aed901;
            break;
          }
          iVar3 = (int)plVar8[3];
        }
        plVar8 = plVar9;
LAB_142aed901:
        uVar5 = FUN_142afb290(*param_2);
        if ((((int)plVar8[2] != 0) && ((longlong *)plVar8[1] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)plVar8[1] + 0x18))(), cVar4 != '\0')) {
          if ((int)plVar8[2] != 0) {
            plVar9 = (longlong *)plVar8[1];
          }
          (**(code **)(*plVar9 + 0x40))(plVar9,param_2,uVar5,&local_18);
        }
        plVar9 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_10 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x2b0),*(undefined4 *)(*param_2 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142aed9b0 FUN_142aed9b0 body=2844 status=ok
// SIG undefined FUN_142aed9b0(void)

void FUN_142aed9b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_b8;
  undefined8 *puStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x2b8) == *(int *)(param_1 + 0x2e4)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x2f0);
      if (*(longlong *)(param_1 + 0x2f0) == 0) {
        lVar5 = param_1 + 0x2e8;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x2b0);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142aedabe:
          piVar7 = (int *)0x0;
LAB_142aedac0:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_68);
          plVar9 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_60 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar7 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x2b0),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142aedac0;
          goto LAB_142aedabe;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 == 200) {
      lVar5 = operator_new(0x20);
      if (lVar5 == 0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = (longlong *)FUN_142b1dc80(lVar5);
      }
      plStack_70 = (longlong *)operator_new(0x18);
      if (plStack_70 != (longlong *)0x0) {
        *(undefined4 *)(plStack_70 + 1) = 1;
        *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
        plStack_70[2] = (longlong)local_78;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      plVar9 = plStack_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))(local_78,param_4);
        plVar8 = (longlong *)(param_1 + 0x2b0);
        plVar9 = plStack_70;
        if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
          lVar5 = *(longlong *)(param_1 + 0x2f0);
          if (*(longlong *)(param_1 + 0x2f0) == 0) {
            lVar5 = param_1 + 0x2e8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_18 = local_78;
                  plStack_10 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x2b8) == *(int *)(param_1 + 0x2e4)) goto LAB_142aee3dc;
                  lVar5 = *(longlong *)(param_1 + 0x2f0);
                  if (*(longlong *)(param_1 + 0x2f0) == 0) {
                    lVar5 = param_1 + 0x2e8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142aee3dc;
                  goto LAB_142aee3c0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142aee43d;
      }
    }
    else if (iVar4 == 0x191) {
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_88 = (longlong *)0x0;
      }
      else {
        local_88 = (longlong *)FUN_142b1dd10(lVar5);
      }
      plStack_80 = (longlong *)operator_new(0x18);
      if (plStack_80 != (longlong *)0x0) {
        *(undefined4 *)(plStack_80 + 1) = 1;
        *plStack_80 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
        plStack_80[2] = (longlong)local_88;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
      plVar9 = plStack_80;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))(local_88,param_4);
        plVar8 = (longlong *)(param_1 + 0x2b0);
        plVar9 = plStack_80;
        if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
          lVar5 = *(longlong *)(param_1 + 0x2f0);
          if (*(longlong *)(param_1 + 0x2f0) == 0) {
            lVar5 = param_1 + 0x2e8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_28 = local_88;
                  plStack_20 = plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x2b8) == *(int *)(param_1 + 0x2e4)) goto LAB_142aee20c;
                  lVar5 = *(longlong *)(param_1 + 0x2f0);
                  if (*(longlong *)(param_1 + 0x2f0) == 0) {
                    lVar5 = param_1 + 0x2e8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142aee20c;
                  goto LAB_142aee1f0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142aee43d;
      }
    }
    else if (iVar4 == 0x193) {
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_98 = (longlong *)0x0;
      }
      else {
        local_98 = (longlong *)FUN_142b1dd10(lVar5);
      }
      plStack_90 = (longlong *)operator_new(0x18);
      if (plStack_90 != (longlong *)0x0) {
        *(undefined4 *)(plStack_90 + 1) = 1;
        *plStack_90 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
        plStack_90[2] = (longlong)local_98;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
      plVar9 = plStack_90;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))(local_98,param_4);
        plVar8 = (longlong *)(param_1 + 0x2b0);
        plVar9 = plStack_90;
        if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
          lVar5 = *(longlong *)(param_1 + 0x2f0);
          if (*(longlong *)(param_1 + 0x2f0) == 0) {
            lVar5 = param_1 + 0x2e8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_38 = local_98;
                  plStack_30 = plStack_90;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x2b8) == *(int *)(param_1 + 0x2e4)) goto LAB_142aee03c;
                  lVar5 = *(longlong *)(param_1 + 0x2f0);
                  if (*(longlong *)(param_1 + 0x2f0) == 0) {
                    lVar5 = param_1 + 0x2e8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142aee03c;
                  goto LAB_142aee020;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142aee43d;
      }
    }
    else {
      if (iVar4 != 0x1ad) {
        if (iVar4 == 500) {
          lVar5 = operator_new(0x38);
          if (lVar5 == 0) {
            local_b8 = (longlong *)0x0;
          }
          else {
            local_b8 = (longlong *)FUN_142b1dd10(lVar5);
          }
          puStack_b0 = (undefined8 *)operator_new(0x18);
          if (puStack_b0 != (undefined8 *)0x0) {
            *(undefined4 *)(puStack_b0 + 1) = 1;
            *puStack_b0 = &PTR_FUN_143f3f2e0;
            *(undefined4 *)((longlong)puStack_b0 + 0xc) = 1;
            puStack_b0[2] = local_b8;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
            plVar9 = (longlong *)(param_1 + 0x2b0);
            if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
              lVar5 = *(longlong *)(param_1 + 0x2f0);
              if (*(longlong *)(param_1 + 0x2f0) == 0) {
                lVar5 = param_1 + 0x2e8;
              }
              iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                       (longlong)*(int *)(*param_2 + 8)) * 4);
              if (iVar4 != -1) {
                while (*(int *)((longlong)iVar4 * 0x20 + *plVar9) != *(int *)(*param_2 + 8)) {
                  iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
                  if (iVar4 == -1) {
                    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                              (&local_b8);
                    return;
                  }
                }
                if (iVar4 != -1) {
                  local_58 = local_b8;
                  puStack_50 = puStack_b0;
                  if (puStack_b0 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puStack_b0 + 1) = *(int *)(puStack_b0 + 1) + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
                    lVar5 = *(longlong *)(param_1 + 0x2f0);
                    if (*(longlong *)(param_1 + 0x2f0) == 0) {
                      lVar5 = param_1 + 0x2e8;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 != -1) {
                      do {
                        piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
                        if (*piVar7 == *(int *)(*param_2 + 8)) {
                          if (iVar4 != -1) goto LAB_142aedcc1;
                          break;
                        }
                        iVar4 = piVar7[6];
                      } while (iVar4 != -1);
                    }
                  }
                  piVar7 = (int *)0x0;
LAB_142aedcc1:
                  FUN_142abcb30(piVar7 + 2,param_2,500,&local_58);
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_58);
                  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
                }
              }
            }
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
            return;
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
        }
        goto LAB_142aee4a4;
      }
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_a8 = (longlong *)0x0;
      }
      else {
        local_a8 = (longlong *)FUN_142b1dd10(lVar5);
      }
      plStack_a0 = (longlong *)operator_new(0x18);
      if (plStack_a0 != (longlong *)0x0) {
        *(undefined4 *)(plStack_a0 + 1) = 1;
        *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
        plStack_a0[2] = (longlong)local_a8;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
      plVar9 = plStack_a0;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
        plVar8 = (longlong *)(param_1 + 0x2b0);
        plVar9 = plStack_a0;
        if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
          lVar5 = *(longlong *)(param_1 + 0x2f0);
          if (*(longlong *)(param_1 + 0x2f0) == 0) {
            lVar5 = param_1 + 0x2e8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_48 = local_a8;
                  plStack_40 = plStack_a0;
                  if (plStack_a0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x2b8) == *(int *)(param_1 + 0x2e4)) goto LAB_142aede6c;
                  lVar5 = *(longlong *)(param_1 + 0x2f0);
                  if (*(longlong *)(param_1 + 0x2f0) == 0) {
                    lVar5 = param_1 + 0x2e8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x2f8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142aede6c;
                  goto LAB_142aede50;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142aee43d;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar7 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_142aee4a4:
  FUN_142aed830(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aee3c0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aee3de;
      break;
    }
  }
LAB_142aee3dc:
  piVar7 = (int *)0x0;
LAB_142aee3de:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_18);
  plVar9 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_70;
  goto LAB_142aee43d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aee020:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aee03e;
      break;
    }
  }
LAB_142aee03c:
  piVar7 = (int *)0x0;
LAB_142aee03e:
  FUN_142abcb30(piVar7 + 2,param_2,0x193,&local_38);
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_90;
  goto LAB_142aee43d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aede50:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aede6e;
      break;
    }
  }
LAB_142aede6c:
  piVar7 = (int *)0x0;
LAB_142aede6e:
  FUN_142abcb30(piVar7 + 2,param_2,0x1ad,&local_48);
  plVar9 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_a0;
  goto LAB_142aee43d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aee1f0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aee20e;
      break;
    }
  }
LAB_142aee20c:
  piVar7 = (int *)0x0;
LAB_142aee20e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_28);
  plVar9 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_80;
LAB_142aee43d:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142aee4d0 FUN_142aee4d0 body=369 status=ok
// SIG undefined FUN_142aee4d0(void)

void FUN_142aee4d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar2 = *(int *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
    plVar9 = (longlong *)0x0;
    lVar6 = *(longlong *)(param_1 + 0x430);
    if (*(longlong *)(param_1 + 0x430) == 0) {
      lVar6 = param_1 + 0x428;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x438) - 1U & (longlong)iVar2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x3f0);
      iVar7 = iVar3;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar6) != iVar2) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar6);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 != -1) {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
        while (iVar3 != -1) {
          plVar8 = (longlong *)((longlong)iVar3 * 0x20 + lVar6);
          if ((int)*plVar8 == iVar2) {
            if (iVar3 != -1) goto LAB_142aee5a1;
            break;
          }
          iVar3 = (int)plVar8[3];
        }
        plVar8 = plVar9;
LAB_142aee5a1:
        uVar5 = FUN_142afb290(*param_2);
        if ((((int)plVar8[2] != 0) && ((longlong *)plVar8[1] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)plVar8[1] + 0x18))(), cVar4 != '\0')) {
          if ((int)plVar8[2] != 0) {
            plVar9 = (longlong *)plVar8[1];
          }
          (**(code **)(*plVar9 + 0x40))(plVar9,param_2,uVar5,&local_18);
        }
        plVar9 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_10 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x3f0),*(undefined4 *)(*param_2 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142aee650 FUN_142aee650 body=3289 status=ok
// SIG undefined FUN_142aee650(void)

void FUN_142aee650(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong lStack_20;
  longlong *local_18;
  undefined8 *puStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x3f8) == *(int *)(param_1 + 0x424)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x430);
      if (*(longlong *)(param_1 + 0x430) == 0) {
        lVar5 = param_1 + 0x428;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x3f0);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142aee75e:
          piVar7 = (int *)0x0;
LAB_142aee760:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_78);
          plVar10 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_70 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar7 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x3f0),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142aee760;
          goto LAB_142aee75e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 < 0x195) {
      if (iVar4 == 0x194) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_a8 = (longlong *)0x0;
        }
        else {
          local_a8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_a0 = (longlong *)operator_new(0x18);
        if (plStack_a0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_a0 + 1) = 1;
          *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
          plStack_a0[2] = (longlong)local_a8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
        plVar10 = plStack_a0;
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
          plVar9 = (longlong *)(param_1 + 0x3f0);
          plVar10 = plStack_a0;
          if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
            lVar5 = *(longlong *)(param_1 + 0x430);
            if (*(longlong *)(param_1 + 0x430) == 0) {
              lVar5 = param_1 + 0x428;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_38 = local_a8;
                    plStack_30 = plStack_a0;
                    if (plStack_a0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x3f8) == *(int *)(param_1 + 0x424)) goto LAB_142aeef4c;
                    lVar5 = *(longlong *)(param_1 + 0x430);
                    if (*(longlong *)(param_1 + 0x430) == 0) {
                      lVar5 = param_1 + 0x428;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aeef4c;
                    goto LAB_142aeef30;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aeed5d;
        }
      }
      else if (iVar4 == 200) {
        lVar5 = operator_new(0x58);
        if (lVar5 == 0) {
          local_b8 = (longlong *)0x0;
        }
        else {
          local_b8 = (longlong *)FUN_142b21520(lVar5);
        }
        plStack_b0 = (longlong *)operator_new(0x18);
        if (plStack_b0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_b0 + 1) = 1;
          *plStack_b0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_b0 + 0xc) = 1;
          plStack_b0[2] = (longlong)local_b8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
        plVar10 = plStack_b0;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
          plVar9 = (longlong *)(param_1 + 0x3f0);
          plVar10 = plStack_b0;
          if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
            lVar5 = *(longlong *)(param_1 + 0x430);
            if (*(longlong *)(param_1 + 0x430) == 0) {
              lVar5 = param_1 + 0x428;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_48 = local_b8;
                    plStack_40 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x3f8) == *(int *)(param_1 + 0x424)) goto LAB_142aeecfc;
                    lVar5 = *(longlong *)(param_1 + 0x430);
                    if (*(longlong *)(param_1 + 0x430) == 0) {
                      lVar5 = param_1 + 0x428;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aeecfc;
                    goto LAB_142aeece0;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aeed5d;
        }
      }
      else if (iVar4 == 0x191) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_c8 = (longlong *)0x0;
        }
        else {
          local_c8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_c0 = (longlong *)operator_new(0x18);
        if (plStack_c0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_c0 + 1) = 1;
          *plStack_c0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_c0 + 0xc) = 1;
          plStack_c0[2] = (longlong)local_c8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
        plVar10 = plStack_c0;
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))(local_c8,param_4);
          plVar9 = (longlong *)(param_1 + 0x3f0);
          plVar10 = plStack_c0;
          if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
            lVar5 = *(longlong *)(param_1 + 0x430);
            if (*(longlong *)(param_1 + 0x430) == 0) {
              lVar5 = param_1 + 0x428;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_58 = local_c8;
                    plStack_50 = plStack_c0;
                    if (plStack_c0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x3f8) == *(int *)(param_1 + 0x424)) goto LAB_142aeeb2c;
                    lVar5 = *(longlong *)(param_1 + 0x430);
                    if (*(longlong *)(param_1 + 0x430) == 0) {
                      lVar5 = param_1 + 0x428;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aeeb2c;
                    goto LAB_142aeeb10;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aeed5d;
        }
      }
      else {
        if (iVar4 != 0x193) goto LAB_142aef301;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_d8 = (longlong *)0x0;
        }
        else {
          local_d8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_d0 = (longlong *)operator_new(0x18);
        if (plStack_d0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_d0 + 1) = 1;
          *plStack_d0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_d0 + 0xc) = 1;
          plStack_d0[2] = (longlong)local_d8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
        plVar10 = plStack_d0;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,param_4);
          plVar9 = (longlong *)(param_1 + 0x3f0);
          plVar10 = plStack_d0;
          if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
            lVar5 = *(longlong *)(param_1 + 0x430);
            if (*(longlong *)(param_1 + 0x430) == 0) {
              lVar5 = param_1 + 0x428;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_68 = local_d8;
                    plStack_60 = plStack_d0;
                    if (plStack_d0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x3f8) == *(int *)(param_1 + 0x424)) goto LAB_142aee95c;
                    lVar5 = *(longlong *)(param_1 + 0x430);
                    if (*(longlong *)(param_1 + 0x430) == 0) {
                      lVar5 = param_1 + 0x428;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aee95c;
                    goto LAB_142aee940;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aeed5d;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar7 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    else {
      if (iVar4 == 0x1a6) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_88 = (longlong *)0x0;
        }
        else {
          local_88 = (longlong *)FUN_142b1dd10(lVar5);
        }
        puStack_80 = (undefined8 *)operator_new(0x18);
        if (puStack_80 != (undefined8 *)0x0) {
          *(undefined4 *)(puStack_80 + 1) = 1;
          *puStack_80 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puStack_80 + 0xc) = 1;
          puStack_80[2] = local_88;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))(local_88,param_4);
          plVar10 = (longlong *)(param_1 + 0x3f0);
          if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
            lVar5 = *(longlong *)(param_1 + 0x430);
            if (*(longlong *)(param_1 + 0x430) == 0) {
              lVar5 = param_1 + 0x428;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_88);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_18 = local_88;
                puStack_10 = puStack_80;
                if (puStack_80 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puStack_80 + 1) = *(int *)(puStack_80 + 1) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
                  lVar5 = *(longlong *)(param_1 + 0x430);
                  if (*(longlong *)(param_1 + 0x430) == 0) {
                    lVar5 = param_1 + 0x428;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142aef2c0;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142aef2c0:
                FUN_142abcb30(piVar7 + 2,param_2,0x1a6,&local_18);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_18)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_88);
          return;
        }
        pplVar8 = &local_88;
      }
      else {
        if (iVar4 != 500) goto LAB_142aef301;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_98 = (longlong *)0x0;
        }
        else {
          local_98 = (longlong *)FUN_142b1dd10(lVar5);
        }
        lStack_90 = FUN_1404f6ae0(local_98);
        SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))(local_98,param_4);
          plVar10 = (longlong *)(param_1 + 0x3f0);
          if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
            lVar5 = *(longlong *)(param_1 + 0x430);
            if (*(longlong *)(param_1 + 0x430) == 0) {
              lVar5 = param_1 + 0x428;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_98);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_28 = local_98;
                lStack_20 = lStack_90;
                if (lStack_90 != 0) {
                  LOCK();
                  *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
                  lVar5 = *(longlong *)(param_1 + 0x430);
                  if (*(longlong *)(param_1 + 0x430) == 0) {
                    lVar5 = param_1 + 0x428;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x438) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142aef111;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142aef111:
                FUN_142abcb30(piVar7 + 2,param_2,500,&local_28);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_28)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_98);
          return;
        }
        pplVar8 = &local_98;
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(pplVar8);
    }
  }
LAB_142aef301:
  FUN_142aee4d0(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aeef30:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aeef4e;
      break;
    }
  }
LAB_142aeef4c:
  piVar7 = (int *)0x0;
LAB_142aeef4e:
  FUN_142abcb30(piVar7 + 2,param_2,0x194,&local_38);
  plVar10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_a0;
  goto LAB_142aeed5d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aeeb10:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aeeb2e;
      break;
    }
  }
LAB_142aeeb2c:
  piVar7 = (int *)0x0;
LAB_142aeeb2e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_58);
  plVar10 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_c0;
  goto LAB_142aeed5d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aee940:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aee95e;
      break;
    }
  }
LAB_142aee95c:
  piVar7 = (int *)0x0;
LAB_142aee95e:
  FUN_142abcb30(piVar7 + 2,param_2,0x193,&local_68);
  plVar10 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_d0;
  goto LAB_142aeed5d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aeece0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aeecfe;
      break;
    }
  }
LAB_142aeecfc:
  piVar7 = (int *)0x0;
LAB_142aeecfe:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_48);
  plVar10 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_b0;
LAB_142aeed5d:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 142aef330 FUN_142aef330 body=369 status=ok
// SIG undefined FUN_142aef330(void)

void FUN_142aef330(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar2 = *(int *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
    plVar9 = (longlong *)0x0;
    lVar6 = *(longlong *)(param_1 + 0x520);
    if (*(longlong *)(param_1 + 0x520) == 0) {
      lVar6 = param_1 + 0x518;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x528) - 1U & (longlong)iVar2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x4e0);
      iVar7 = iVar3;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar6) != iVar2) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar6);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 != -1) {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
        while (iVar3 != -1) {
          plVar8 = (longlong *)((longlong)iVar3 * 0x20 + lVar6);
          if ((int)*plVar8 == iVar2) {
            if (iVar3 != -1) goto LAB_142aef401;
            break;
          }
          iVar3 = (int)plVar8[3];
        }
        plVar8 = plVar9;
LAB_142aef401:
        uVar5 = FUN_142afb290(*param_2);
        if ((((int)plVar8[2] != 0) && ((longlong *)plVar8[1] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)plVar8[1] + 0x18))(), cVar4 != '\0')) {
          if ((int)plVar8[2] != 0) {
            plVar9 = (longlong *)plVar8[1];
          }
          (**(code **)(*plVar9 + 0x40))(plVar9,param_2,uVar5,&local_18);
        }
        plVar9 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_10 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x4e0),*(undefined4 *)(*param_2 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142aef4b0 FUN_142aef4b0 body=3289 status=ok
// SIG undefined FUN_142aef4b0(void)

void FUN_142aef4b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong lStack_20;
  longlong *local_18;
  undefined8 *puStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x4e8) == *(int *)(param_1 + 0x514)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x520);
      if (*(longlong *)(param_1 + 0x520) == 0) {
        lVar5 = param_1 + 0x518;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x4e0);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142aef5be:
          piVar7 = (int *)0x0;
LAB_142aef5c0:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_78);
          plVar10 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_70 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar7 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x4e0),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142aef5c0;
          goto LAB_142aef5be;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 < 0x195) {
      if (iVar4 == 0x194) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_a8 = (longlong *)0x0;
        }
        else {
          local_a8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_a0 = (longlong *)operator_new(0x18);
        if (plStack_a0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_a0 + 1) = 1;
          *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
          plStack_a0[2] = (longlong)local_a8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
        plVar10 = plStack_a0;
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
          plVar9 = (longlong *)(param_1 + 0x4e0);
          plVar10 = plStack_a0;
          if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
            lVar5 = *(longlong *)(param_1 + 0x520);
            if (*(longlong *)(param_1 + 0x520) == 0) {
              lVar5 = param_1 + 0x518;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_38 = local_a8;
                    plStack_30 = plStack_a0;
                    if (plStack_a0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x4e8) == *(int *)(param_1 + 0x514)) goto LAB_142aefdac;
                    lVar5 = *(longlong *)(param_1 + 0x520);
                    if (*(longlong *)(param_1 + 0x520) == 0) {
                      lVar5 = param_1 + 0x518;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aefdac;
                    goto LAB_142aefd90;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aefbbd;
        }
      }
      else if (iVar4 == 0xcc) {
        lVar5 = operator_new(0x58);
        if (lVar5 == 0) {
          local_b8 = (longlong *)0x0;
        }
        else {
          local_b8 = (longlong *)FUN_142b0d9a0(lVar5);
        }
        plStack_b0 = (longlong *)operator_new(0x18);
        if (plStack_b0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_b0 + 1) = 1;
          *plStack_b0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_b0 + 0xc) = 1;
          plStack_b0[2] = (longlong)local_b8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
        plVar10 = plStack_b0;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
          plVar9 = (longlong *)(param_1 + 0x4e0);
          plVar10 = plStack_b0;
          if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
            lVar5 = *(longlong *)(param_1 + 0x520);
            if (*(longlong *)(param_1 + 0x520) == 0) {
              lVar5 = param_1 + 0x518;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_48 = local_b8;
                    plStack_40 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x4e8) == *(int *)(param_1 + 0x514)) goto LAB_142aefb5c;
                    lVar5 = *(longlong *)(param_1 + 0x520);
                    if (*(longlong *)(param_1 + 0x520) == 0) {
                      lVar5 = param_1 + 0x518;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aefb5c;
                    goto LAB_142aefb40;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aefbbd;
        }
      }
      else if (iVar4 == 0x191) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_c8 = (longlong *)0x0;
        }
        else {
          local_c8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_c0 = (longlong *)operator_new(0x18);
        if (plStack_c0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_c0 + 1) = 1;
          *plStack_c0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_c0 + 0xc) = 1;
          plStack_c0[2] = (longlong)local_c8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
        plVar10 = plStack_c0;
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))(local_c8,param_4);
          plVar9 = (longlong *)(param_1 + 0x4e0);
          plVar10 = plStack_c0;
          if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
            lVar5 = *(longlong *)(param_1 + 0x520);
            if (*(longlong *)(param_1 + 0x520) == 0) {
              lVar5 = param_1 + 0x518;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_58 = local_c8;
                    plStack_50 = plStack_c0;
                    if (plStack_c0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x4e8) == *(int *)(param_1 + 0x514)) goto LAB_142aef98c;
                    lVar5 = *(longlong *)(param_1 + 0x520);
                    if (*(longlong *)(param_1 + 0x520) == 0) {
                      lVar5 = param_1 + 0x518;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aef98c;
                    goto LAB_142aef970;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aefbbd;
        }
      }
      else {
        if (iVar4 != 0x193) goto LAB_142af0161;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_d8 = (longlong *)0x0;
        }
        else {
          local_d8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_d0 = (longlong *)operator_new(0x18);
        if (plStack_d0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_d0 + 1) = 1;
          *plStack_d0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_d0 + 0xc) = 1;
          plStack_d0[2] = (longlong)local_d8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
        plVar10 = plStack_d0;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,param_4);
          plVar9 = (longlong *)(param_1 + 0x4e0);
          plVar10 = plStack_d0;
          if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
            lVar5 = *(longlong *)(param_1 + 0x520);
            if (*(longlong *)(param_1 + 0x520) == 0) {
              lVar5 = param_1 + 0x518;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_68 = local_d8;
                    plStack_60 = plStack_d0;
                    if (plStack_d0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x4e8) == *(int *)(param_1 + 0x514)) goto LAB_142aef7bc;
                    lVar5 = *(longlong *)(param_1 + 0x520);
                    if (*(longlong *)(param_1 + 0x520) == 0) {
                      lVar5 = param_1 + 0x518;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142aef7bc;
                    goto LAB_142aef7a0;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142aefbbd;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar7 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    else {
      if (iVar4 == 0x1a6) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_88 = (longlong *)0x0;
        }
        else {
          local_88 = (longlong *)FUN_142b1dd10(lVar5);
        }
        puStack_80 = (undefined8 *)operator_new(0x18);
        if (puStack_80 != (undefined8 *)0x0) {
          *(undefined4 *)(puStack_80 + 1) = 1;
          *puStack_80 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puStack_80 + 0xc) = 1;
          puStack_80[2] = local_88;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))(local_88,param_4);
          plVar10 = (longlong *)(param_1 + 0x4e0);
          if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
            lVar5 = *(longlong *)(param_1 + 0x520);
            if (*(longlong *)(param_1 + 0x520) == 0) {
              lVar5 = param_1 + 0x518;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_88);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_18 = local_88;
                puStack_10 = puStack_80;
                if (puStack_80 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puStack_80 + 1) = *(int *)(puStack_80 + 1) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
                  lVar5 = *(longlong *)(param_1 + 0x520);
                  if (*(longlong *)(param_1 + 0x520) == 0) {
                    lVar5 = param_1 + 0x518;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142af0120;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142af0120:
                FUN_142abcb30(piVar7 + 2,param_2,0x1a6,&local_18);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_18)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_88);
          return;
        }
        pplVar8 = &local_88;
      }
      else {
        if (iVar4 != 500) goto LAB_142af0161;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_98 = (longlong *)0x0;
        }
        else {
          local_98 = (longlong *)FUN_142b1dd10(lVar5);
        }
        lStack_90 = FUN_1404f6ae0(local_98);
        SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))(local_98,param_4);
          plVar10 = (longlong *)(param_1 + 0x4e0);
          if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
            lVar5 = *(longlong *)(param_1 + 0x520);
            if (*(longlong *)(param_1 + 0x520) == 0) {
              lVar5 = param_1 + 0x518;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_98);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_28 = local_98;
                lStack_20 = lStack_90;
                if (lStack_90 != 0) {
                  LOCK();
                  *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x4e8) != *(int *)(param_1 + 0x514)) {
                  lVar5 = *(longlong *)(param_1 + 0x520);
                  if (*(longlong *)(param_1 + 0x520) == 0) {
                    lVar5 = param_1 + 0x518;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x528) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142aeff71;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142aeff71:
                FUN_142abcb30(piVar7 + 2,param_2,500,&local_28);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_28)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_98);
          return;
        }
        pplVar8 = &local_98;
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(pplVar8);
    }
  }
LAB_142af0161:
  FUN_142aef330(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aefd90:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aefdae;
      break;
    }
  }
LAB_142aefdac:
  piVar7 = (int *)0x0;
LAB_142aefdae:
  FUN_142abcb30(piVar7 + 2,param_2,0x194,&local_38);
  plVar10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_a0;
  goto LAB_142aefbbd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aef970:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aef98e;
      break;
    }
  }
LAB_142aef98c:
  piVar7 = (int *)0x0;
LAB_142aef98e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_58);
  plVar10 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_c0;
  goto LAB_142aefbbd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aef7a0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aef7be;
      break;
    }
  }
LAB_142aef7bc:
  piVar7 = (int *)0x0;
LAB_142aef7be:
  FUN_142abcb30(piVar7 + 2,param_2,0x193,&local_68);
  plVar10 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_d0;
  goto LAB_142aefbbd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142aefb40:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142aefb5e;
      break;
    }
  }
LAB_142aefb5c:
  piVar7 = (int *)0x0;
LAB_142aefb5e:
  FUN_142abcb30(piVar7 + 2,param_2,0xcc,&local_48);
  plVar10 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_b0;
LAB_142aefbbd:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 142af0190 FUN_142af0190 body=369 status=ok
// SIG undefined FUN_142af0190(void)

void FUN_142af0190(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar2 = *(int *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
    plVar9 = (longlong *)0x0;
    lVar6 = *(longlong *)(param_1 + 0x570);
    if (*(longlong *)(param_1 + 0x570) == 0) {
      lVar6 = param_1 + 0x568;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x578) - 1U & (longlong)iVar2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x530);
      iVar7 = iVar3;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar6) != iVar2) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar6);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 != -1) {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
        while (iVar3 != -1) {
          plVar8 = (longlong *)((longlong)iVar3 * 0x20 + lVar6);
          if ((int)*plVar8 == iVar2) {
            if (iVar3 != -1) goto LAB_142af0261;
            break;
          }
          iVar3 = (int)plVar8[3];
        }
        plVar8 = plVar9;
LAB_142af0261:
        uVar5 = FUN_142afb290(*param_2);
        if ((((int)plVar8[2] != 0) && ((longlong *)plVar8[1] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)plVar8[1] + 0x18))(), cVar4 != '\0')) {
          if ((int)plVar8[2] != 0) {
            plVar9 = (longlong *)plVar8[1];
          }
          (**(code **)(*plVar9 + 0x40))(plVar9,param_2,uVar5,&local_18);
        }
        plVar9 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_10 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x530),*(undefined4 *)(*param_2 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142af0310 FUN_142af0310 body=3289 status=ok
// SIG undefined FUN_142af0310(void)

void FUN_142af0310(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong lStack_20;
  longlong *local_18;
  undefined8 *puStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x538) == *(int *)(param_1 + 0x564)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x570);
      if (*(longlong *)(param_1 + 0x570) == 0) {
        lVar5 = param_1 + 0x568;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x530);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142af041e:
          piVar7 = (int *)0x0;
LAB_142af0420:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_78);
          plVar10 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_70 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar7 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x530),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142af0420;
          goto LAB_142af041e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 < 0x194) {
      if (iVar4 == 0x193) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_a8 = (longlong *)0x0;
        }
        else {
          local_a8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_a0 = (longlong *)operator_new(0x18);
        if (plStack_a0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_a0 + 1) = 1;
          *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
          plStack_a0[2] = (longlong)local_a8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
        plVar10 = plStack_a0;
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
          plVar9 = (longlong *)(param_1 + 0x530);
          plVar10 = plStack_a0;
          if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
            lVar5 = *(longlong *)(param_1 + 0x570);
            if (*(longlong *)(param_1 + 0x570) == 0) {
              lVar5 = param_1 + 0x568;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_38 = local_a8;
                    plStack_30 = plStack_a0;
                    if (plStack_a0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x538) == *(int *)(param_1 + 0x564)) goto LAB_142af0c0c;
                    lVar5 = *(longlong *)(param_1 + 0x570);
                    if (*(longlong *)(param_1 + 0x570) == 0) {
                      lVar5 = param_1 + 0x568;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af0c0c;
                    goto LAB_142af0bf0;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af0a1d;
        }
      }
      else if (iVar4 == 200) {
        lVar5 = operator_new(0x28);
        if (lVar5 == 0) {
          local_b8 = (longlong *)0x0;
        }
        else {
          local_b8 = (longlong *)FUN_142b21c70(lVar5);
        }
        plStack_b0 = (longlong *)operator_new(0x18);
        if (plStack_b0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_b0 + 1) = 1;
          *plStack_b0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_b0 + 0xc) = 1;
          plStack_b0[2] = (longlong)local_b8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
        plVar10 = plStack_b0;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
          plVar9 = (longlong *)(param_1 + 0x530);
          plVar10 = plStack_b0;
          if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
            lVar5 = *(longlong *)(param_1 + 0x570);
            if (*(longlong *)(param_1 + 0x570) == 0) {
              lVar5 = param_1 + 0x568;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_48 = local_b8;
                    plStack_40 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x538) == *(int *)(param_1 + 0x564)) goto LAB_142af09bc;
                    lVar5 = *(longlong *)(param_1 + 0x570);
                    if (*(longlong *)(param_1 + 0x570) == 0) {
                      lVar5 = param_1 + 0x568;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af09bc;
                    goto LAB_142af09a0;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af0a1d;
        }
      }
      else if (iVar4 == 400) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_c8 = (longlong *)0x0;
        }
        else {
          local_c8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_c0 = (longlong *)operator_new(0x18);
        if (plStack_c0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_c0 + 1) = 1;
          *plStack_c0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_c0 + 0xc) = 1;
          plStack_c0[2] = (longlong)local_c8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
        plVar10 = plStack_c0;
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))(local_c8,param_4);
          plVar9 = (longlong *)(param_1 + 0x530);
          plVar10 = plStack_c0;
          if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
            lVar5 = *(longlong *)(param_1 + 0x570);
            if (*(longlong *)(param_1 + 0x570) == 0) {
              lVar5 = param_1 + 0x568;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_58 = local_c8;
                    plStack_50 = plStack_c0;
                    if (plStack_c0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x538) == *(int *)(param_1 + 0x564)) goto LAB_142af07ec;
                    lVar5 = *(longlong *)(param_1 + 0x570);
                    if (*(longlong *)(param_1 + 0x570) == 0) {
                      lVar5 = param_1 + 0x568;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af07ec;
                    goto LAB_142af07d0;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af0a1d;
        }
      }
      else {
        if (iVar4 != 0x191) goto LAB_142af0fc1;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_d8 = (longlong *)0x0;
        }
        else {
          local_d8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_d0 = (longlong *)operator_new(0x18);
        if (plStack_d0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_d0 + 1) = 1;
          *plStack_d0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_d0 + 0xc) = 1;
          plStack_d0[2] = (longlong)local_d8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
        plVar10 = plStack_d0;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,param_4);
          plVar9 = (longlong *)(param_1 + 0x530);
          plVar10 = plStack_d0;
          if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
            lVar5 = *(longlong *)(param_1 + 0x570);
            if (*(longlong *)(param_1 + 0x570) == 0) {
              lVar5 = param_1 + 0x568;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_68 = local_d8;
                    plStack_60 = plStack_d0;
                    if (plStack_d0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x538) == *(int *)(param_1 + 0x564)) goto LAB_142af061c;
                    lVar5 = *(longlong *)(param_1 + 0x570);
                    if (*(longlong *)(param_1 + 0x570) == 0) {
                      lVar5 = param_1 + 0x568;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af061c;
                    goto LAB_142af0600;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af0a1d;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar7 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    else {
      if (iVar4 == 0x1a6) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_88 = (longlong *)0x0;
        }
        else {
          local_88 = (longlong *)FUN_142b1dd10(lVar5);
        }
        puStack_80 = (undefined8 *)operator_new(0x18);
        if (puStack_80 != (undefined8 *)0x0) {
          *(undefined4 *)(puStack_80 + 1) = 1;
          *puStack_80 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puStack_80 + 0xc) = 1;
          puStack_80[2] = local_88;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))(local_88,param_4);
          plVar10 = (longlong *)(param_1 + 0x530);
          if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
            lVar5 = *(longlong *)(param_1 + 0x570);
            if (*(longlong *)(param_1 + 0x570) == 0) {
              lVar5 = param_1 + 0x568;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_88);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_18 = local_88;
                puStack_10 = puStack_80;
                if (puStack_80 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puStack_80 + 1) = *(int *)(puStack_80 + 1) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
                  lVar5 = *(longlong *)(param_1 + 0x570);
                  if (*(longlong *)(param_1 + 0x570) == 0) {
                    lVar5 = param_1 + 0x568;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142af0f80;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142af0f80:
                FUN_142abcb30(piVar7 + 2,param_2,0x1a6,&local_18);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_18)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_88);
          return;
        }
        pplVar8 = &local_88;
      }
      else {
        if (iVar4 != 500) goto LAB_142af0fc1;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_98 = (longlong *)0x0;
        }
        else {
          local_98 = (longlong *)FUN_142b1dd10(lVar5);
        }
        lStack_90 = FUN_1404f6ae0(local_98);
        SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))(local_98,param_4);
          plVar10 = (longlong *)(param_1 + 0x530);
          if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
            lVar5 = *(longlong *)(param_1 + 0x570);
            if (*(longlong *)(param_1 + 0x570) == 0) {
              lVar5 = param_1 + 0x568;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_98);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_28 = local_98;
                lStack_20 = lStack_90;
                if (lStack_90 != 0) {
                  LOCK();
                  *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x538) != *(int *)(param_1 + 0x564)) {
                  lVar5 = *(longlong *)(param_1 + 0x570);
                  if (*(longlong *)(param_1 + 0x570) == 0) {
                    lVar5 = param_1 + 0x568;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x578) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142af0dd1;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142af0dd1:
                FUN_142abcb30(piVar7 + 2,param_2,500,&local_28);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_28)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_98);
          return;
        }
        pplVar8 = &local_98;
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(pplVar8);
    }
  }
LAB_142af0fc1:
  FUN_142af0190(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af0bf0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af0c0e;
      break;
    }
  }
LAB_142af0c0c:
  piVar7 = (int *)0x0;
LAB_142af0c0e:
  FUN_142abcb30(piVar7 + 2,param_2,0x193,&local_38);
  plVar10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_a0;
  goto LAB_142af0a1d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af07d0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af07ee;
      break;
    }
  }
LAB_142af07ec:
  piVar7 = (int *)0x0;
LAB_142af07ee:
  FUN_142abcb30(piVar7 + 2,param_2,400,&local_58);
  plVar10 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_c0;
  goto LAB_142af0a1d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af0600:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af061e;
      break;
    }
  }
LAB_142af061c:
  piVar7 = (int *)0x0;
LAB_142af061e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_68);
  plVar10 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_d0;
  goto LAB_142af0a1d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af09a0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af09be;
      break;
    }
  }
LAB_142af09bc:
  piVar7 = (int *)0x0;
LAB_142af09be:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_48);
  plVar10 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_b0;
LAB_142af0a1d:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 142af0ff0 FUN_142af0ff0 body=369 status=ok
// SIG undefined FUN_142af0ff0(void)

void FUN_142af0ff0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar2 = *(int *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
    plVar9 = (longlong *)0x0;
    lVar6 = *(longlong *)(param_1 + 0x6b0);
    if (*(longlong *)(param_1 + 0x6b0) == 0) {
      lVar6 = param_1 + 0x6a8;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U & (longlong)iVar2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x670);
      iVar7 = iVar3;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar6) != iVar2) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar6);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 != -1) {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
        while (iVar3 != -1) {
          plVar8 = (longlong *)((longlong)iVar3 * 0x20 + lVar6);
          if ((int)*plVar8 == iVar2) {
            if (iVar3 != -1) goto LAB_142af10c1;
            break;
          }
          iVar3 = (int)plVar8[3];
        }
        plVar8 = plVar9;
LAB_142af10c1:
        uVar5 = FUN_142afb290(*param_2);
        if ((((int)plVar8[2] != 0) && ((longlong *)plVar8[1] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)plVar8[1] + 0x18))(), cVar4 != '\0')) {
          if ((int)plVar8[2] != 0) {
            plVar9 = (longlong *)plVar8[1];
          }
          (**(code **)(*plVar9 + 0x40))(plVar9,param_2,uVar5,&local_18);
        }
        plVar9 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_10 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x670),*(undefined4 *)(*param_2 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142af1170 FUN_142af1170 body=3289 status=ok
// SIG undefined FUN_142af1170(void)

void FUN_142af1170(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong lStack_20;
  longlong *local_18;
  undefined8 *puStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x678) == *(int *)(param_1 + 0x6a4)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x6b0);
      if (*(longlong *)(param_1 + 0x6b0) == 0) {
        lVar5 = param_1 + 0x6a8;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x670);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142af127e:
          piVar7 = (int *)0x0;
LAB_142af1280:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_78);
          plVar10 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_70 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar7 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x670),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142af1280;
          goto LAB_142af127e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 < 0x195) {
      if (iVar4 == 0x194) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_a8 = (longlong *)0x0;
        }
        else {
          local_a8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_a0 = (longlong *)operator_new(0x18);
        if (plStack_a0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_a0 + 1) = 1;
          *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
          plStack_a0[2] = (longlong)local_a8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
        plVar10 = plStack_a0;
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
          plVar9 = (longlong *)(param_1 + 0x670);
          plVar10 = plStack_a0;
          if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
            lVar5 = *(longlong *)(param_1 + 0x6b0);
            if (*(longlong *)(param_1 + 0x6b0) == 0) {
              lVar5 = param_1 + 0x6a8;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_38 = local_a8;
                    plStack_30 = plStack_a0;
                    if (plStack_a0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x678) == *(int *)(param_1 + 0x6a4)) goto LAB_142af1a6c;
                    lVar5 = *(longlong *)(param_1 + 0x6b0);
                    if (*(longlong *)(param_1 + 0x6b0) == 0) {
                      lVar5 = param_1 + 0x6a8;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af1a6c;
                    goto LAB_142af1a50;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af187d;
        }
      }
      else if (iVar4 == 0xcc) {
        lVar5 = operator_new(0x58);
        if (lVar5 == 0) {
          local_b8 = (longlong *)0x0;
        }
        else {
          local_b8 = (longlong *)FUN_142b0d9a0(lVar5);
        }
        plStack_b0 = (longlong *)operator_new(0x18);
        if (plStack_b0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_b0 + 1) = 1;
          *plStack_b0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_b0 + 0xc) = 1;
          plStack_b0[2] = (longlong)local_b8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
        plVar10 = plStack_b0;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
          plVar9 = (longlong *)(param_1 + 0x670);
          plVar10 = plStack_b0;
          if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
            lVar5 = *(longlong *)(param_1 + 0x6b0);
            if (*(longlong *)(param_1 + 0x6b0) == 0) {
              lVar5 = param_1 + 0x6a8;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_48 = local_b8;
                    plStack_40 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x678) == *(int *)(param_1 + 0x6a4)) goto LAB_142af181c;
                    lVar5 = *(longlong *)(param_1 + 0x6b0);
                    if (*(longlong *)(param_1 + 0x6b0) == 0) {
                      lVar5 = param_1 + 0x6a8;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af181c;
                    goto LAB_142af1800;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af187d;
        }
      }
      else if (iVar4 == 0x191) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_c8 = (longlong *)0x0;
        }
        else {
          local_c8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_c0 = (longlong *)operator_new(0x18);
        if (plStack_c0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_c0 + 1) = 1;
          *plStack_c0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_c0 + 0xc) = 1;
          plStack_c0[2] = (longlong)local_c8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
        plVar10 = plStack_c0;
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))(local_c8,param_4);
          plVar9 = (longlong *)(param_1 + 0x670);
          plVar10 = plStack_c0;
          if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
            lVar5 = *(longlong *)(param_1 + 0x6b0);
            if (*(longlong *)(param_1 + 0x6b0) == 0) {
              lVar5 = param_1 + 0x6a8;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_58 = local_c8;
                    plStack_50 = plStack_c0;
                    if (plStack_c0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x678) == *(int *)(param_1 + 0x6a4)) goto LAB_142af164c;
                    lVar5 = *(longlong *)(param_1 + 0x6b0);
                    if (*(longlong *)(param_1 + 0x6b0) == 0) {
                      lVar5 = param_1 + 0x6a8;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af164c;
                    goto LAB_142af1630;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af187d;
        }
      }
      else {
        if (iVar4 != 0x193) goto LAB_142af1e21;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_d8 = (longlong *)0x0;
        }
        else {
          local_d8 = (longlong *)FUN_142b1dd10(lVar5);
        }
        plStack_d0 = (longlong *)operator_new(0x18);
        if (plStack_d0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_d0 + 1) = 1;
          *plStack_d0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_d0 + 0xc) = 1;
          plStack_d0[2] = (longlong)local_d8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
        plVar10 = plStack_d0;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,param_4);
          plVar9 = (longlong *)(param_1 + 0x670);
          plVar10 = plStack_d0;
          if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
            lVar5 = *(longlong *)(param_1 + 0x6b0);
            if (*(longlong *)(param_1 + 0x6b0) == 0) {
              lVar5 = param_1 + 0x6a8;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_68 = local_d8;
                    plStack_60 = plStack_d0;
                    if (plStack_d0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x678) == *(int *)(param_1 + 0x6a4)) goto LAB_142af147c;
                    lVar5 = *(longlong *)(param_1 + 0x6b0);
                    if (*(longlong *)(param_1 + 0x6b0) == 0) {
                      lVar5 = param_1 + 0x6a8;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142af147c;
                    goto LAB_142af1460;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142af187d;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar7 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    else {
      if (iVar4 == 0x1a6) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_88 = (longlong *)0x0;
        }
        else {
          local_88 = (longlong *)FUN_142b1dd10(lVar5);
        }
        puStack_80 = (undefined8 *)operator_new(0x18);
        if (puStack_80 != (undefined8 *)0x0) {
          *(undefined4 *)(puStack_80 + 1) = 1;
          *puStack_80 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puStack_80 + 0xc) = 1;
          puStack_80[2] = local_88;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))(local_88,param_4);
          plVar10 = (longlong *)(param_1 + 0x670);
          if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
            lVar5 = *(longlong *)(param_1 + 0x6b0);
            if (*(longlong *)(param_1 + 0x6b0) == 0) {
              lVar5 = param_1 + 0x6a8;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_88);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_18 = local_88;
                puStack_10 = puStack_80;
                if (puStack_80 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puStack_80 + 1) = *(int *)(puStack_80 + 1) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
                  lVar5 = *(longlong *)(param_1 + 0x6b0);
                  if (*(longlong *)(param_1 + 0x6b0) == 0) {
                    lVar5 = param_1 + 0x6a8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142af1de0;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142af1de0:
                FUN_142abcb30(piVar7 + 2,param_2,0x1a6,&local_18);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_18)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_88);
          return;
        }
        pplVar8 = &local_88;
      }
      else {
        if (iVar4 != 500) goto LAB_142af1e21;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_98 = (longlong *)0x0;
        }
        else {
          local_98 = (longlong *)FUN_142b1dd10(lVar5);
        }
        lStack_90 = FUN_1404f6ae0(local_98);
        SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))(local_98,param_4);
          plVar10 = (longlong *)(param_1 + 0x670);
          if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
            lVar5 = *(longlong *)(param_1 + 0x6b0);
            if (*(longlong *)(param_1 + 0x6b0) == 0) {
              lVar5 = param_1 + 0x6a8;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_98);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_28 = local_98;
                lStack_20 = lStack_90;
                if (lStack_90 != 0) {
                  LOCK();
                  *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
                  lVar5 = *(longlong *)(param_1 + 0x6b0);
                  if (*(longlong *)(param_1 + 0x6b0) == 0) {
                    lVar5 = param_1 + 0x6a8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142af1c31;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142af1c31:
                FUN_142abcb30(piVar7 + 2,param_2,500,&local_28);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_28)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_98);
          return;
        }
        pplVar8 = &local_98;
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(pplVar8);
    }
  }
LAB_142af1e21:
  FUN_142af0ff0(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af1a50:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af1a6e;
      break;
    }
  }
LAB_142af1a6c:
  piVar7 = (int *)0x0;
LAB_142af1a6e:
  FUN_142abcb30(piVar7 + 2,param_2,0x194,&local_38);
  plVar10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_a0;
  goto LAB_142af187d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af1630:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af164e;
      break;
    }
  }
LAB_142af164c:
  piVar7 = (int *)0x0;
LAB_142af164e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_58);
  plVar10 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_c0;
  goto LAB_142af187d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af1460:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af147e;
      break;
    }
  }
LAB_142af147c:
  piVar7 = (int *)0x0;
LAB_142af147e:
  FUN_142abcb30(piVar7 + 2,param_2,0x193,&local_68);
  plVar10 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_d0;
  goto LAB_142af187d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142af1800:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142af181e;
      break;
    }
  }
LAB_142af181c:
  piVar7 = (int *)0x0;
LAB_142af181e:
  FUN_142abcb30(piVar7 + 2,param_2,0xcc,&local_48);
  plVar10 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_b0;
LAB_142af187d:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 142af1e50 FUN_142af1e50 body=369 status=ok
// SIG undefined FUN_142af1e50(void)

void FUN_142af1e50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar2 = *(int *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
    plVar9 = (longlong *)0x0;
    lVar6 = *(longlong *)(param_1 + 0x700);
    if (*(longlong *)(param_1 + 0x700) == 0) {
      lVar6 = param_1 + 0x6f8;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x708) - 1U & (longlong)iVar2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x6c0);
      iVar7 = iVar3;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar6) != iVar2) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar6);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 != -1) {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
        while (iVar3 != -1) {
          plVar8 = (longlong *)((longlong)iVar3 * 0x20 + lVar6);
          if ((int)*plVar8 == iVar2) {
            if (iVar3 != -1) goto LAB_142af1f21;
            break;
          }
          iVar3 = (int)plVar8[3];
        }
        plVar8 = plVar9;
LAB_142af1f21:
        uVar5 = FUN_142afb290(*param_2);
        if ((((int)plVar8[2] != 0) && ((longlong *)plVar8[1] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)plVar8[1] + 0x18))(), cVar4 != '\0')) {
          if ((int)plVar8[2] != 0) {
            plVar9 = (longlong *)plVar8[1];
          }
          (**(code **)(*plVar9 + 0x40))(plVar9,param_2,uVar5,&local_18);
        }
        plVar9 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_10 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x6c0),*(undefined4 *)(*param_2 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142af1fd0 FUN_142af1fd0 body=3754 status=ok
// SIG undefined FUN_142af1fd0(void)

void FUN_142af1fd0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  longlong **pplVar9;
  longlong *plVar10;
  int local_res8 [2];
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong lStack_c0;
  longlong *local_b8;
  longlong lStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong lStack_40;
  longlong *local_38;
  longlong lStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  uVar2 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  iVar3 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar3 == 0x130) {
      iVar3 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x6c8) == *(int *)(param_1 + 0x6f4)) {
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0x700);
      if (*(longlong *)(param_1 + 0x700) == 0) {
        lVar4 = param_1 + 0x6f8;
      }
      iVar1 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U & (longlong)iVar3) * 4);
      if (iVar1 == -1) {
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0x6c0);
      iVar7 = iVar1;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar4) != iVar3) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar4);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 == -1) {
        return;
      }
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      do {
        if (iVar1 == -1) {
LAB_142af20de:
          piVar8 = (int *)0x0;
LAB_142af20e1:
          FUN_142abcb30(piVar8 + 2,param_2,0x130,&local_98);
          plVar5 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_90 + 1;
            lVar4 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar8 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x6c0),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar8 = (int *)((longlong)iVar1 * 0x20 + lVar4);
        if (*piVar8 == iVar3) {
          if (iVar1 != -1) goto LAB_142af20e1;
          goto LAB_142af20de;
        }
        iVar1 = piVar8[6];
      } while( true );
    }
    if (iVar3 < 0x194) {
      if (iVar3 == 0x193) {
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b1dd10(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_d0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_d0 = plVar6;
        }
        local_d8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar5,plVar5);
        plVar5 = plStack_d0;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,param_4);
          plVar6 = (longlong *)(param_1 + 0x6c0);
          plVar5 = plStack_d0;
          if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
            lVar4 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar4 = param_1 + 0x6f8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_58 = local_d8;
                    plStack_50 = plStack_d0;
                    if (plStack_d0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x6c8) == *(int *)(param_1 + 0x6f4)) goto LAB_142af290c;
                    lVar4 = *(longlong *)(param_1 + 0x700);
                    if (*(longlong *)(param_1 + 0x700) == 0) {
                      lVar4 = param_1 + 0x6f8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142af290c;
                    goto LAB_142af28f0;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142af270f;
        }
      }
      else if (iVar3 == 0xca) {
        lVar4 = operator_new(0x58);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b0d9a0(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_e0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_e0 = plVar6;
        }
        local_e8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_e8,plVar5,plVar5);
        plVar5 = plStack_e0;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x10))(local_e8,param_4);
          plVar6 = (longlong *)(param_1 + 0x6c0);
          plVar5 = plStack_e0;
          if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
            lVar4 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar4 = param_1 + 0x6f8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_68 = local_e8;
                    plStack_60 = plStack_e0;
                    if (plStack_e0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x6c8) == *(int *)(param_1 + 0x6f4)) goto LAB_142af26ac;
                    lVar4 = *(longlong *)(param_1 + 0x700);
                    if (*(longlong *)(param_1 + 0x700) == 0) {
                      lVar4 = param_1 + 0x6f8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142af26ac;
                    goto LAB_142af2690;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142af270f;
        }
      }
      else if (iVar3 == 400) {
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b1dd10(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_f0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_f0 = plVar6;
        }
        local_f8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar5,plVar5);
        plVar5 = plStack_f0;
        if (local_f8 != (longlong *)0x0) {
          (**(code **)(*local_f8 + 0x10))(local_f8,param_4);
          plVar6 = (longlong *)(param_1 + 0x6c0);
          plVar5 = plStack_f0;
          if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
            lVar4 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar4 = param_1 + 0x6f8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_78 = local_f8;
                    plStack_70 = plStack_f0;
                    if (plStack_f0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x6c8) == *(int *)(param_1 + 0x6f4)) goto LAB_142af24cc;
                    lVar4 = *(longlong *)(param_1 + 0x700);
                    if (*(longlong *)(param_1 + 0x700) == 0) {
                      lVar4 = param_1 + 0x6f8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142af24cc;
                    goto LAB_142af24b0;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142af270f;
        }
      }
      else {
        if (iVar3 != 0x191) goto LAB_142af2e52;
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b1dd10(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_100 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_100 = plVar6;
        }
        local_108 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_108,plVar5,plVar5);
        plVar5 = plStack_100;
        if (local_108 != (longlong *)0x0) {
          (**(code **)(*local_108 + 0x10))(local_108,param_4);
          plVar6 = (longlong *)(param_1 + 0x6c0);
          plVar5 = plStack_100;
          if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
            lVar4 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar4 = param_1 + 0x6f8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_88 = local_108;
                    plStack_80 = plStack_100;
                    if (plStack_100 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x6c8) == *(int *)(param_1 + 0x6f4)) goto LAB_142af22ec;
                    lVar4 = *(longlong *)(param_1 + 0x700);
                    if (*(longlong *)(param_1 + 0x700) == 0) {
                      lVar4 = param_1 + 0x6f8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142af22ec;
                    goto LAB_142af22d0;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142af270f;
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar5 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar8 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    else {
      if (iVar3 == 0x194) {
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b1dd10(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_a0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_a0 = plVar6;
        }
        local_a8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar5,plVar5);
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
          plVar5 = (longlong *)(param_1 + 0x6c0);
          if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
            lVar4 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar4 = param_1 + 0x6f8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              while (*(int *)((longlong)iVar3 * 0x20 + *plVar5) != *(int *)(*param_2 + 8)) {
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar5);
                if (iVar3 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_a8);
                  return;
                }
              }
              if (iVar3 != -1) {
                local_28 = local_a8;
                plStack_20 = plStack_a0;
                if (plStack_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
                  lVar4 = *(longlong *)(param_1 + 0x700);
                  if (*(longlong *)(param_1 + 0x700) == 0) {
                    lVar4 = param_1 + 0x6f8;
                  }
                  iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar3 != -1) {
                    do {
                      plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *plVar5);
                      if ((int)*plVar6 == *(int *)(*param_2 + 8)) {
                        if (iVar3 != -1) goto LAB_142af2e11;
                        break;
                      }
                      iVar3 = (int)plVar6[3];
                    } while (iVar3 != -1);
                  }
                }
                plVar6 = plVar10;
LAB_142af2e11:
                FUN_142abcb30(plVar6 + 1,param_2,0x194,&local_28);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_28)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar5,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a8);
          return;
        }
        pplVar9 = &local_a8;
      }
      else if (iVar3 == 0x1a6) {
        lVar4 = operator_new(0x38);
        plVar5 = (longlong *)0x0;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b1dd10(lVar4);
        }
        lStack_b0 = FUN_1404f6ae0(plVar5);
        local_b8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar5,plVar5);
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
          plVar5 = (longlong *)(param_1 + 0x6c0);
          if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
            lVar4 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar4 = param_1 + 0x6f8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              while (*(int *)((longlong)iVar3 * 0x20 + *plVar5) != *(int *)(*param_2 + 8)) {
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar5);
                if (iVar3 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_b8);
                  return;
                }
              }
              if (iVar3 != -1) {
                local_38 = local_b8;
                lStack_30 = lStack_b0;
                if (lStack_b0 != 0) {
                  LOCK();
                  *(int *)(lStack_b0 + 8) = *(int *)(lStack_b0 + 8) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
                  lVar4 = *(longlong *)(param_1 + 0x700);
                  if (*(longlong *)(param_1 + 0x700) == 0) {
                    lVar4 = param_1 + 0x6f8;
                  }
                  iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar3 != -1) {
                    do {
                      plVar10 = (longlong *)((longlong)iVar3 * 0x20 + *plVar5);
                      if ((int)*plVar10 == *(int *)(*param_2 + 8)) {
                        if (iVar3 != -1) goto LAB_142af2c51;
                        break;
                      }
                      iVar3 = (int)plVar10[3];
                    } while (iVar3 != -1);
                  }
                }
                plVar10 = (longlong *)0x0;
LAB_142af2c51:
                FUN_142abcb30(plVar10 + 1,param_2,0x1a6,&local_38);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_38)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar5,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
          return;
        }
        pplVar9 = &local_b8;
      }
      else {
        if (iVar3 != 500) goto LAB_142af2e52;
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b1dd10(lVar4);
        }
        lStack_c0 = FUN_1404f6ae0(plVar5);
        local_c8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_c8,plVar5,plVar5);
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))(local_c8,param_4);
          plVar5 = (longlong *)(param_1 + 0x6c0);
          if (*(int *)(param_1 + 0x6c8) != *(int *)(param_1 + 0x6f4)) {
            lVar4 = *(longlong *)(param_1 + 0x700);
            if (*(longlong *)(param_1 + 0x700) == 0) {
              lVar4 = param_1 + 0x6f8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x708) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              while (*(int *)((longlong)iVar3 * 0x20 + *plVar5) != *(int *)(*param_2 + 8)) {
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar5);
                if (iVar3 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_c8);
                  return;
                }
              }
              if (iVar3 != -1) {
                local_48 = local_c8;
                lStack_40 = lStack_c0;
                if (lStack_c0 != 0) {
                  LOCK();
                  *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
                  UNLOCK();
                }
                FUN_140d2ceb0(plVar5,local_res8,*(undefined4 *)(*param_2 + 8));
                if (local_res8[0] != -1) {
                  plVar10 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar5);
                }
                FUN_142abcb30(plVar10 + 1,param_2,500,&local_48);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_48)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar5,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_c8);
          return;
        }
        pplVar9 = &local_c8;
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(pplVar9);
    }
  }
LAB_142af2e52:
  FUN_142af1e50(param_1,param_2);
  return;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142af28f0:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142af290f;
      break;
    }
  }
LAB_142af290c:
  plVar5 = plVar10;
LAB_142af290f:
  FUN_142abcb30(plVar5 + 1,param_2,0x193,&local_58);
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_50 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_d0;
  goto LAB_142af270f;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142af24b0:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142af24cf;
      break;
    }
  }
LAB_142af24cc:
  plVar5 = plVar10;
LAB_142af24cf:
  FUN_142abcb30(plVar5 + 1,param_2,400,&local_78);
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_70 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_f0;
  goto LAB_142af270f;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142af22d0:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142af22ef;
      break;
    }
  }
LAB_142af22ec:
  plVar5 = plVar10;
LAB_142af22ef:
  FUN_142abcb30(plVar5 + 1,param_2,0x191,&local_88);
  plVar5 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_80 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_100;
  goto LAB_142af270f;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142af2690:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142af26af;
      break;
    }
  }
LAB_142af26ac:
  plVar5 = plVar10;
LAB_142af26af:
  FUN_142abcb30(plVar5 + 1,param_2,0xca,&local_68);
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_60 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_e0;
LAB_142af270f:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142af2e80 FUN_142af2e80 body=39 status=ok
// SIG undefined FUN_142af2e80(void)

void FUN_142af2e80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1456790d0;
    return;
  }
  return;
}



// FUNCTION 142af2eb0 FUN_142af2eb0 body=2711 status=ok
// SIG undefined FUN_142af2eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142af2ffa) */
/* WARNING: Removing unreachable block (ram,0x000142af3006) */
/* WARNING: Removing unreachable block (ram,0x000142af301e) */
/* WARNING: Removing unreachable block (ram,0x000142af302d) */

int FUN_142af2eb0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                 longlong *param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong **pplVar15;
  int *piVar16;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  int *local_290;
  undefined8 local_288;
  int *local_280;
  undefined8 local_278;
  int local_270 [2];
  longlong *local_268;
  undefined8 local_260;
  longlong *local_258 [2];
  undefined2 *local_248;
  int local_240;
  longlong *local_238;
  longlong *local_230;
  longlong local_228;
  longlong *local_220;
  longlong local_218 [5];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  longlong local_1e0 [2];
  undefined2 *local_1d0;
  int local_1c8;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int *local_1a0;
  undefined8 local_198;
  longlong local_190 [2];
  longlong local_180 [2];
  longlong local_170 [2];
  longlong local_160 [2];
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  longlong local_110 [3];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  lVar7 = *param_7;
  plVar9 = param_7;
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    plVar9 = (longlong *)(param_1 + 8);
  }
  plVar9 = (longlong *)plVar9[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_1f0._0_4_ = (undefined4)lVar7;
  local_1f0._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_1e8._0_4_ = SUB84(plVar9,0);
  uStack_1e8._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_1e8._4_4_;
  uStack_60 = (undefined4)uStack_1e8;
  uStack_64 = local_1f0._4_4_;
  local_68 = (undefined4)local_1f0;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_230 = param_7;
  local_260 = param_6;
  local_268 = param_5;
  local_298 = param_4;
  local_238 = param_3;
  local_218[4] = param_1;
  local_1b8 = param_2;
  local_f8 = lVar7;
  plStack_f0 = plVar9;
  local_c0 = FUN_142abcbb0(L"DELETE");
  local_218[0] = 0;
  local_218[1] = 0x38;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218,0);
  FGenericPlatformString::Memcpy
            (local_218[0],L"/v1/client/{title}/lobbies/{lobby_id}/members/{user_id}",0x70);
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  FUN_142abaf10(&local_248,local_1e0,local_218);
  if (local_1e0[0] != 0) {
    FMemory::Free();
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FString::FString(local_140,param_3);
  puVar5 = (undefined8 *)FUN_142accce0(local_180,uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  FString::ReplaceInline(&local_248,L"{title}",puVar11,1);
  if (local_180[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FString::FString(local_130,param_4);
  puVar5 = (undefined8 *)FUN_142accce0(local_170,uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  FString::ReplaceInline(&local_248,L"{lobby_id}",puVar11,1);
  if (local_170[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FString::FString(local_120,param_5);
  puVar5 = (undefined8 *)FUN_142accce0(local_160,uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  FString::ReplaceInline(&local_248,L"{user_id}",puVar11,1);
  if (local_160[0] != 0) {
    FMemory::Free();
  }
  local_288 = 1;
  local_290 = (int *)0x0;
  iVar3 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_290,0);
  piVar12 = local_290;
  *local_290 = iVar3;
  if ((int)local_288 == 0) {
LAB_142af325a:
    uStack_e4 = 2;
    local_280 = (int *)0x0;
    local_278 = 1;
    iVar3 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_280,0);
    piVar16 = local_280;
    *local_280 = iVar3;
    if ((int)local_278 == 0) {
LAB_142af33b6:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142af33c0:
      local_218[3] = 0xc;
      local_218[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218 + 2,0);
      FGenericPlatformString::Memcpy(local_218[2],L"EndpointUrl",0x18);
      FUN_142afb430(lVar7,local_1e0 + 2,local_218 + 2);
      if (local_218[2] != 0) {
        FMemory::Free();
      }
      if (local_1c8 < 2) {
        if (local_1d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (piVar16 != (int *)0x0) {
          FMemory::Free(piVar16);
        }
        if (piVar12 != (int *)0x0) {
          FMemory::Free(piVar12);
        }
        if (local_248 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_1404f9010(&local_f8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar9 + 1;
          lVar7 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar12 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        if (*local_238 != 0) {
          FMemory::Free();
        }
        if (*local_298 != 0) {
          FMemory::Free();
        }
        if (*local_268 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
        plVar9 = (longlong *)local_230[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar9 + 1;
          lVar7 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar12 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        return 0;
      }
      puVar11 = &DAT_143f3eda8;
      if (local_240 != 0) {
        puVar11 = local_248;
      }
      puVar13 = &DAT_143f3eda8;
      if (local_1c8 != 0) {
        puVar13 = local_1d0;
      }
      FString::PrintfImpl(local_190,L"%ls%ls",puVar13,puVar11);
      local_1b0 = FUN_142aef4b0;
      uStack_1a8 = 0;
      plVar6 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_218[4] + 0x20,local_150);
      plVar14 = (longlong *)plVar6[1];
      lVar7 = *plVar6;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        piVar12 = local_290;
        piVar16 = local_280;
      }
      plVar6 = (longlong *)FMemory::Realloc(0,0x40);
      local_258[0] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar6[1] = lVar7;
        plVar6[2] = (longlong)plVar14;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
          UNLOCK();
          piVar12 = local_290;
          piVar16 = local_280;
        }
        *(undefined4 *)(plVar6 + 3) = (undefined4)local_1b0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = local_1b0._4_4_;
        *(undefined4 *)(plVar6 + 4) = uStack_1a8;
        *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_1a4;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[6] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar14 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_258[0];
        piVar12 = local_290;
        piVar16 = local_280;
        if ((int)lVar7 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar12 = (int *)((longlong)plVar14 + 0xc);
          iVar3 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          plVar6 = local_258[0];
          piVar12 = local_290;
          piVar16 = local_280;
          if (iVar3 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            plVar6 = local_258[0];
            piVar12 = local_290;
            piVar16 = local_280;
          }
        }
      }
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_148 + 1;
        lVar7 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        plVar6 = local_258[0];
        piVar12 = local_290;
        piVar16 = local_280;
        if ((int)lVar7 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar12 = (int *)((longlong)local_148 + 0xc);
          iVar3 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          plVar6 = local_258[0];
          piVar12 = local_290;
          piVar16 = local_280;
          if (iVar3 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
            plVar6 = local_258[0];
            piVar12 = local_290;
            piVar16 = local_280;
          }
        }
      }
      lVar7 = operator_new(0x170);
      if (lVar7 == 0) {
        local_228 = 0;
      }
      else {
        local_228 = FUN_142af8bf0(lVar7);
      }
      plVar14 = (longlong *)0x0;
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *(undefined4 *)(plVar8 + 1) = 1;
        *plVar8 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        plVar8[2] = local_228;
        plVar14 = plVar8;
      }
      local_220 = plVar14;
      SharedPointerInternals::EnableSharedFromThis(&local_228,local_228,local_228);
      lVar7 = local_228;
      plVar14 = (longlong *)(local_228 + 0x88);
      if (plVar14 != local_110) {
        if (*plVar14 != 0) {
          FMemory::Free();
        }
        *plVar14 = 0;
        *(undefined8 *)(lVar7 + 0x90) = 0;
      }
      lVar7 = local_228;
      pplVar15 = (longlong **)(local_228 + 0x130);
      if (local_258 != pplVar15) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(local_228 + 0x138) != 0) &&
             (plVar14 = *pplVar15, plVar14 != (longlong *)0x0)) {
            (**(code **)(*plVar14 + 0x28))(plVar14,0);
            if (*pplVar15 != (longlong *)0x0) {
              plVar14 = (longlong *)FMemory::Realloc(*pplVar15,0,0);
              *pplVar15 = plVar14;
            }
            *(undefined4 *)(lVar7 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x30))(plVar6,pplVar15);
        }
      }
      FString::operator=(local_228 + 0x20,local_1b8);
      local_270[0] = (*DAT_146b2ac98)(&local_f8,local_190,&local_228);
      if (local_270[0] != 0) {
        local_1a0 = local_270;
        local_198 = local_260;
        FUN_142ab70b0(local_218[4] + 0x4e0,local_1c0,&local_1a0,0);
      }
      plVar14 = local_220;
      iVar3 = local_270[0];
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_220 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_258[0];
        piVar12 = local_290;
        piVar16 = local_280;
        if ((int)lVar7 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar12 = (int *)((longlong)plVar14 + 0xc);
          iVar1 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          plVar6 = local_258[0];
          piVar12 = local_290;
          piVar16 = local_280;
          if (iVar1 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            plVar6 = local_258[0];
            piVar12 = local_290;
            piVar16 = local_280;
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        local_258[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
        if (local_258[0] != (longlong *)0x0) {
          FMemory::Free(local_258[0]);
        }
      }
      if (local_190[0] != 0) {
        FMemory::Free();
      }
      if (local_1d0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (piVar16 != (int *)0x0) {
        FMemory::Free(piVar16);
      }
      if (piVar12 != (int *)0x0) {
        FMemory::Free(piVar12);
      }
      if (local_248 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404f9010(&local_f8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar9 + 1;
        lVar7 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar12 = (int *)((longlong)plVar9 + 0xc);
          iVar1 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (*local_238 != 0) {
        FMemory::Free();
      }
      if (*local_298 != 0) {
        FMemory::Free();
      }
      if (*local_268 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
      plVar9 = (longlong *)local_230[1];
      if (plVar9 == (longlong *)0x0) {
        return iVar3;
      }
      LOCK();
      plVar14 = plVar9 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return iVar3;
      }
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar12 = (int *)((longlong)plVar9 + 0xc);
      iVar1 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar3;
      }
      (**(code **)(*plVar9 + 8))(plVar9,1);
      return iVar3;
    }
    for (piVar10 = local_280; piVar2 = local_280, piVar10 != local_280 + (int)local_278;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_280 >> 2) != -1) goto LAB_142af33b6;
        break;
      }
    }
    do {
      if (piVar2 == local_280 + (int)local_278) goto LAB_142af32e9;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_280 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142af33c0;
        }
        goto LAB_142af32e9;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar16 = local_290; piVar16 != local_290 + (int)local_288; piVar16 = piVar16 + 1) {
    if (*piVar16 == 2) {
      if ((int)((longlong)piVar16 - (longlong)local_290 >> 2) != -1) goto LAB_142af325a;
      break;
    }
  }
  if (local_290 != (int *)0x0) {
    FMemory::Free(local_290);
  }
  if (local_248 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar12 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *param_3;
LAB_142af3353:
  if (lVar7 != 0) {
    FMemory::Free();
  }
  if (*local_298 != 0) {
    FMemory::Free();
  }
  if (*local_268 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_230);
  return 0;
LAB_142af32e9:
  if (local_280 != (int *)0x0) {
    FMemory::Free(local_280);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  if (local_248 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar12 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *local_238;
  goto LAB_142af3353;
}



// FUNCTION 142af3950 FUN_142af3950 body=2380 status=ok
// SIG undefined FUN_142af3950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142af3a7d) */
/* WARNING: Removing unreachable block (ram,0x000142af3a89) */
/* WARNING: Removing unreachable block (ram,0x000142af3aa1) */

int FUN_142af3950(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,longlong *param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  undefined2 *puVar11;
  longlong **pplVar12;
  undefined2 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_258 [32];
  int *local_238;
  undefined8 local_230;
  int *local_228;
  undefined8 local_220;
  int local_218 [2];
  undefined8 local_210;
  longlong *local_208 [2];
  longlong *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  undefined2 *local_1d8;
  int local_1d0;
  longlong local_1c8 [5];
  undefined8 local_1a0;
  undefined8 uStack_198;
  longlong local_190 [2];
  undefined2 *local_180;
  int local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int *local_148;
  undefined8 local_140;
  longlong local_138 [2];
  longlong local_128 [2];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [16];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  lVar7 = *param_6;
  plVar9 = param_6;
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    plVar9 = (longlong *)(param_1 + 8);
  }
  plVar9 = (longlong *)plVar9[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_1a0._0_4_ = (undefined4)lVar7;
  local_1a0._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_198._0_4_ = SUB84(plVar9,0);
  uStack_198._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_198._4_4_;
  uStack_60 = (undefined4)uStack_198;
  uStack_64 = local_1a0._4_4_;
  local_68 = (undefined4)local_1a0;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  local_1f0 = param_6;
  local_210 = param_5;
  local_1f8 = param_3;
  local_1c8[4] = param_1;
  local_168 = param_4;
  local_160 = param_2;
  local_f8 = lVar7;
  plStack_f0 = plVar9;
  local_c0 = FUN_142abcbb0(L"POST");
  local_1c8[0] = 0;
  local_1c8[1] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8[0],L"/v1/client/{title}/search/lobbies",0x44);
  local_190[0] = 0;
  local_190[1] = 0;
  FUN_142abaf10(&local_1d8,local_190,local_1c8);
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FString::FString(local_108,param_3);
  puVar5 = (undefined8 *)FUN_142accce0(local_128,uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  FString::ReplaceInline(&local_1d8,L"{title}",puVar11,1);
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  local_238 = (int *)0x0;
  local_230 = 1;
  iVar3 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_238,0);
  piVar15 = local_238;
  *local_238 = iVar3;
  if ((int)local_230 == 0) {
LAB_142af3c35:
    uStack_e4 = 2;
    local_228 = (int *)0x0;
    local_220 = 1;
    iVar3 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_228,0);
    piVar14 = local_228;
    *local_228 = iVar3;
    if ((int)local_220 == 0) {
LAB_142af3d66:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142af3d6d:
      local_1c8[3] = 0xc;
      local_1c8[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 2,0);
      FGenericPlatformString::Memcpy(local_1c8[2],L"EndpointUrl",0x18);
      FUN_142afb430(lVar7,local_190 + 2,local_1c8 + 2);
      if (local_1c8[2] != 0) {
        FMemory::Free();
      }
      if (local_178 < 2) {
        if (local_180 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (piVar14 != (int *)0x0) {
          FMemory::Free(piVar14);
        }
        if (piVar15 != (int *)0x0) {
          FMemory::Free(piVar15);
        }
        if (local_1d8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_1404f9010(&local_f8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar15 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        if (*local_1f8 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_210);
        plVar9 = (longlong *)local_1f0[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar15 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        return 0;
      }
      puVar11 = &DAT_143f3eda8;
      if (local_1d0 != 0) {
        puVar11 = local_1d8;
      }
      puVar13 = &DAT_143f3eda8;
      if (local_178 != 0) {
        puVar13 = local_180;
      }
      FString::PrintfImpl(local_138,L"%ls%ls",puVar13,puVar11);
      local_158 = FUN_142af0310;
      uStack_150 = 0;
      plVar6 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1c8[4] + 0x20,local_118);
      plVar8 = (longlong *)plVar6[1];
      lVar7 = *plVar6;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        piVar14 = local_228;
        piVar15 = local_238;
      }
      plVar6 = (longlong *)FMemory::Realloc(0,0x40);
      local_208[0] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar6[1] = lVar7;
        plVar6[2] = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          piVar14 = local_228;
          piVar15 = local_238;
        }
        *(undefined4 *)(plVar6 + 3) = (undefined4)local_158;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = local_158._4_4_;
        *(undefined4 *)(plVar6 + 4) = uStack_150;
        *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_14c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[6] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_208[0];
        piVar14 = local_228;
        piVar15 = local_238;
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar15 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_208[0];
          piVar14 = local_228;
          piVar15 = local_238;
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            plVar6 = local_208[0];
            piVar14 = local_228;
            piVar15 = local_238;
          }
        }
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_110 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar6 = local_208[0];
        piVar14 = local_228;
        piVar15 = local_238;
        if ((int)lVar7 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar15 = (int *)((longlong)local_110 + 0xc);
          iVar3 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_208[0];
          piVar14 = local_228;
          piVar15 = local_238;
          if (iVar3 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            plVar6 = local_208[0];
            piVar14 = local_228;
            piVar15 = local_238;
          }
        }
      }
      lVar7 = operator_new(0x170);
      if (lVar7 == 0) {
        local_1e8 = 0;
      }
      else {
        local_1e8 = FUN_142af8bf0(lVar7);
      }
      local_1e0 = (longlong *)operator_new(0x18);
      if (local_1e0 != (longlong *)0x0) {
        *(undefined4 *)(local_1e0 + 1) = 1;
        *local_1e0 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1e0 + 0xc) = 1;
        local_1e0[2] = local_1e8;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_1e8,local_1e8,local_1e8);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_1e8 + 0x88,local_168);
      lVar7 = local_1e8;
      pplVar12 = (longlong **)(local_1e8 + 0x130);
      if (local_208 != pplVar12) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(local_1e8 + 0x138) != 0) && (plVar8 = *pplVar12, plVar8 != (longlong *)0x0))
          {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            if (*pplVar12 != (longlong *)0x0) {
              plVar8 = (longlong *)FMemory::Realloc(*pplVar12,0,0);
              *pplVar12 = plVar8;
            }
            *(undefined4 *)(lVar7 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x30))(plVar6,pplVar12);
        }
      }
      FString::operator=(local_1e8 + 0x20,local_160);
      local_218[0] = (*DAT_146b2ac98)(&local_f8,local_138,&local_1e8);
      if (local_218[0] != 0) {
        local_148 = local_218;
        local_140 = local_210;
        FUN_142ab70b0(local_1c8[4] + 0x530,local_170,&local_148,0);
      }
      plVar8 = local_1e0;
      iVar3 = local_218[0];
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1e0 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_208[0];
        piVar14 = local_228;
        piVar15 = local_238;
        if ((int)lVar7 == 1) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar15 = (int *)((longlong)plVar8 + 0xc);
          iVar1 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_208[0];
          piVar14 = local_228;
          piVar15 = local_238;
          if (iVar1 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            plVar6 = local_208[0];
            piVar14 = local_228;
            piVar15 = local_238;
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        local_208[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
        if (local_208[0] != (longlong *)0x0) {
          FMemory::Free(local_208[0]);
        }
      }
      if (local_138[0] != 0) {
        FMemory::Free();
      }
      if (local_180 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (piVar14 != (int *)0x0) {
        FMemory::Free(piVar14);
      }
      if (piVar15 != (int *)0x0) {
        FMemory::Free(piVar15);
      }
      if (local_1d8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404f9010(&local_f8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar15 = (int *)((longlong)plVar9 + 0xc);
          iVar1 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (*local_1f8 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_210);
      plVar9 = (longlong *)local_1f0[1];
      if (plVar9 == (longlong *)0x0) {
        return iVar3;
      }
      LOCK();
      plVar8 = plVar9 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return iVar3;
      }
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar1 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar3;
      }
      (**(code **)(*plVar9 + 8))(plVar9,1);
      return iVar3;
    }
    for (piVar10 = local_228; piVar2 = local_228, piVar10 != local_228 + (int)local_220;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_228 >> 2) != -1) goto LAB_142af3d66;
        break;
      }
    }
    do {
      if (piVar2 == local_228 + (int)local_220) goto LAB_142af3cc2;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_228 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142af3d6d;
        }
        goto LAB_142af3cc2;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar14 = local_238; piVar14 != local_238 + (int)local_230; piVar14 = piVar14 + 1) {
    if (*piVar14 == 2) {
      if ((int)((longlong)piVar14 - (longlong)local_238 >> 2) != -1) goto LAB_142af3c35;
      break;
    }
  }
  if (local_238 != (int *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_1d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *param_3;
LAB_142af3d29:
  if (lVar7 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_210);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1f0);
  return 0;
LAB_142af3cc2:
  if (local_228 != (int *)0x0) {
    FMemory::Free(local_228);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (local_1d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *local_1f8;
  goto LAB_142af3d29;
}



// FUNCTION 142af42a0 FUN_142af42a0 body=783 status=ok
// SIG undefined FUN_142af42a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142af42a0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 *param_6)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *_Dst;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined4 local_210;
  int *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  _Dst = (undefined2 *)0x0;
  iVar12 = 0;
  iVar14 = 0;
  local_218 = param_6;
  local_208 = (int *)0x0;
  local_200 = 1;
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1d0 = param_4;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208,0);
  piVar15 = local_208;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  *local_208 = iVar5;
  if ((int)local_200 != 0) {
    for (piVar10 = local_208; piVar3 = local_208, piVar10 != local_208 + (int)local_200;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_208 >> 2) != -1) goto LAB_142af439e;
        break;
      }
    }
    do {
      puVar11 = (undefined2 *)0x0;
      iVar12 = 0;
      if (piVar3 == local_208 + (int)local_200) goto LAB_142af43da;
      if (*piVar3 == 1) {
        puVar11 = (undefined2 *)0x0;
        puVar16 = _Dst;
        iVar12 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_208 >> 2) != -1) goto LAB_142af43ee;
        goto LAB_142af43da;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142af439e:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_4,local_1b8);
  puVar11 = _Dst;
  if (&local_1f8 != ppuVar7) {
    puVar11 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar12 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_1f8 = puVar11;
    local_1f0 = iVar12;
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
LAB_142af43da:
  iVar14 = iVar12;
  puVar16 = puVar11;
  if (iVar14 == 0) {
LAB_142af43ee:
    puVar11 = &DAT_143f3eda8;
  }
  local_21c = 0;
  local_228 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar11);
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar13) != '\0');
  puVar11 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar11 = puVar16;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar11);
  iVar12 = (int)lVar13;
  _Src = *(void **)(lVar8 + 0x88);
  local_220 = iVar12;
  if (0 < iVar12) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_228,0);
    _Dst = local_228;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_218;
  local_1c8 = *local_218;
  local_1c0 = local_218[1];
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
    piVar15 = local_208;
    puVar16 = local_1f8;
  }
  local_218 = (undefined8 *)0x0;
  local_210 = 0;
  if (((param_5 != &local_218) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar2 = *param_5, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_218);
  }
  plVar2 = local_1e8;
  uVar9 = FString::FString(local_1a8,local_1e8);
  local_230 = &local_1c8;
  local_238 = &local_218;
  uVar6 = FUN_142af3950(local_1d8,local_1e0,uVar9,&local_228);
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  FUN_142b22b30(local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar15 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142af45b0 FUN_142af45b0 body=8 status=ok
// SIG undefined FUN_142af45b0(void)

void FUN_142af45b0(undefined8 param_1)

{
  DAT_146b2ac98 = param_1;
  return;
}



// FUNCTION 142af45c0 FUN_142af45c0 body=8 status=ok
// SIG undefined FUN_142af45c0(void)

void FUN_142af45c0(undefined8 param_1)

{
  DAT_146b2aca0 = param_1;
  return;
}



// FUNCTION 142af45d0 SetOverrideProjectDir body=122 status=ok
// SIG undefined SetOverrideProjectDir(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FGenericPlatformMisc::SetOverrideProjectDir(undefined8 *param_1)

{
  void *_Src;
  longlong lVar1;
  
  if ((void **)param_1 != &DAT_146b2acd0) {
    _DAT_146b2acd8 = *(int *)(param_1 + 1);
    lVar1 = (longlong)_DAT_146b2acd8;
    _Src = (void *)*param_1;
    if ((_DAT_146b2acd8 == 0) && (DAT_146b2acdc == 0)) {
      DAT_146b2acdc = _DAT_146b2acd8;
      return;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146b2acd0,_DAT_146b2acd8);
    ::_guard_xfg_dispatch_icall_nop(DAT_146b2acd0,_Src,lVar1 * 2);
  }
  return;
}



// FUNCTION 142af4650 FUN_142af4650 body=2565 status=ok
// SIG undefined FUN_142af4650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142af479a) */
/* WARNING: Removing unreachable block (ram,0x000142af47a6) */
/* WARNING: Removing unreachable block (ram,0x000142af47be) */
/* WARNING: Removing unreachable block (ram,0x000142af47cd) */

int FUN_142af4650(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                 undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong **pplVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_288 [32];
  longlong *local_268;
  int *local_260;
  undefined8 local_258;
  int *local_250;
  undefined8 local_248;
  int local_240 [2];
  undefined8 local_238;
  longlong *local_230 [2];
  undefined2 *local_220;
  int local_218;
  longlong *local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  longlong local_1f0 [5];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [2];
  undefined2 *local_1a8;
  int local_1a0;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int *local_170;
  undefined8 local_168;
  longlong local_160 [2];
  longlong local_150 [2];
  longlong local_140 [2];
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [24];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  lVar7 = *param_7;
  plVar9 = param_7;
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    plVar9 = (longlong *)(param_1 + 8);
  }
  plVar9 = (longlong *)plVar9[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_1c8._0_4_ = (undefined4)lVar7;
  local_1c8._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_1c0._0_4_ = SUB84(plVar9,0);
  uStack_1c0._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_1c0._4_4_;
  uStack_60 = (undefined4)uStack_1c0;
  uStack_64 = local_1c8._4_4_;
  local_68 = (undefined4)local_1c8;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_190 = param_5;
  uStack_1c0 = 0;
  local_1c8 = 0;
  local_208 = param_7;
  local_238 = param_6;
  local_268 = param_4;
  local_210 = param_3;
  local_1f0[4] = param_1;
  local_188 = param_2;
  local_f8 = lVar7;
  plStack_f0 = plVar9;
  local_c0 = FUN_142abcbb0(&DAT_145650bb8);
  local_1f0[0] = 0;
  local_1f0[1] = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f0,0);
  FGenericPlatformString::Memcpy(local_1f0[0],L"/v2/client/{title}/lobbies/{lobby_id}",0x4c);
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  FUN_142abaf10(&local_220,local_1b8,local_1f0);
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
  if (local_1f0[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FString::FString(local_120,param_3);
  puVar5 = (undefined8 *)FUN_142accce0(local_150,uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  FString::ReplaceInline(&local_220,L"{title}",puVar11,1);
  if (local_150[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FString::FString(local_110,param_4);
  puVar5 = (undefined8 *)FUN_142accce0(local_140,uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  FString::ReplaceInline(&local_220,L"{lobby_id}",puVar11,1);
  if (local_140[0] != 0) {
    FMemory::Free();
  }
  local_260 = (int *)0x0;
  local_258 = 1;
  iVar3 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_260,0);
  piVar15 = local_260;
  *local_260 = iVar3;
  if ((int)local_258 == 0) {
LAB_142af49a9:
    uStack_e4 = 2;
    local_250 = (int *)0x0;
    local_248 = 1;
    iVar3 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_250,0);
    piVar14 = local_250;
    *local_250 = iVar3;
    if ((int)local_248 == 0) {
LAB_142af4af5:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142af4aff:
      local_1f0[3] = 0xc;
      local_1f0[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f0 + 2,0);
      FGenericPlatformString::Memcpy(local_1f0[2],L"EndpointUrl",0x18);
      FUN_142afb430(lVar7,local_1b8 + 2,local_1f0 + 2);
      if (local_1f0[2] != 0) {
        FMemory::Free();
      }
      if (local_1a0 < 2) {
        if (local_1a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (piVar14 != (int *)0x0) {
          FMemory::Free(piVar14);
        }
        if (piVar15 != (int *)0x0) {
          FMemory::Free(piVar15);
        }
        if (local_220 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_1404f9010(&local_f8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar15 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        if (*local_210 != 0) {
          FMemory::Free();
        }
        if (*local_268 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_238);
        plVar9 = (longlong *)local_208[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar15 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        return 0;
      }
      puVar11 = &DAT_143f3eda8;
      if (local_218 != 0) {
        puVar11 = local_220;
      }
      puVar12 = &DAT_143f3eda8;
      if (local_1a0 != 0) {
        puVar12 = local_1a8;
      }
      FString::PrintfImpl(local_160,L"%ls%ls",puVar12,puVar11);
      local_180 = FUN_142af1170;
      uStack_178 = 0;
      plVar6 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1f0[4] + 0x20,local_130);
      plVar8 = (longlong *)plVar6[1];
      lVar7 = *plVar6;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        piVar14 = local_250;
        piVar15 = local_260;
      }
      plVar6 = (longlong *)FMemory::Realloc(0,0x40);
      local_230[0] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar6[1] = lVar7;
        plVar6[2] = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          piVar14 = local_250;
          piVar15 = local_260;
        }
        *(undefined4 *)(plVar6 + 3) = (undefined4)local_180;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = local_180._4_4_;
        *(undefined4 *)(plVar6 + 4) = uStack_178;
        *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_174;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[6] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_230[0];
        piVar14 = local_250;
        piVar15 = local_260;
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar15 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_230[0];
          piVar14 = local_250;
          piVar15 = local_260;
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            plVar6 = local_230[0];
            piVar14 = local_250;
            piVar15 = local_260;
          }
        }
      }
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_128 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar6 = local_230[0];
        piVar14 = local_250;
        piVar15 = local_260;
        if ((int)lVar7 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar15 = (int *)((longlong)local_128 + 0xc);
          iVar3 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_230[0];
          piVar14 = local_250;
          piVar15 = local_260;
          if (iVar3 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
            plVar6 = local_230[0];
            piVar14 = local_250;
            piVar15 = local_260;
          }
        }
      }
      lVar7 = operator_new(0x170);
      if (lVar7 == 0) {
        local_200 = 0;
      }
      else {
        local_200 = FUN_142af8bf0(lVar7);
      }
      local_1f8 = (longlong *)operator_new(0x18);
      if (local_1f8 != (longlong *)0x0) {
        *(undefined4 *)(local_1f8 + 1) = 1;
        *local_1f8 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1f8 + 0xc) = 1;
        local_1f8[2] = local_200;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_200,local_200,local_200);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_200 + 0x88,local_190);
      lVar7 = local_200;
      pplVar13 = (longlong **)(local_200 + 0x130);
      if (local_230 != pplVar13) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(local_200 + 0x138) != 0) && (plVar8 = *pplVar13, plVar8 != (longlong *)0x0))
          {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            if (*pplVar13 != (longlong *)0x0) {
              plVar8 = (longlong *)FMemory::Realloc(*pplVar13,0,0);
              *pplVar13 = plVar8;
            }
            *(undefined4 *)(lVar7 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x30))(plVar6,pplVar13);
        }
      }
      FString::operator=(local_200 + 0x20,local_188);
      local_240[0] = (*DAT_146b2ac98)(&local_f8,local_160,&local_200);
      if (local_240[0] != 0) {
        local_170 = local_240;
        local_168 = local_238;
        FUN_142ab70b0(local_1f0[4] + 0x670,local_198,&local_170,0);
      }
      plVar8 = local_1f8;
      iVar3 = local_240[0];
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1f8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_230[0];
        piVar14 = local_250;
        piVar15 = local_260;
        if ((int)lVar7 == 1) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar15 = (int *)((longlong)plVar8 + 0xc);
          iVar1 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_230[0];
          piVar14 = local_250;
          piVar15 = local_260;
          if (iVar1 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            plVar6 = local_230[0];
            piVar14 = local_250;
            piVar15 = local_260;
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        local_230[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
        if (local_230[0] != (longlong *)0x0) {
          FMemory::Free(local_230[0]);
        }
      }
      if (local_160[0] != 0) {
        FMemory::Free();
      }
      if (local_1a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (piVar14 != (int *)0x0) {
        FMemory::Free(piVar14);
      }
      if (piVar15 != (int *)0x0) {
        FMemory::Free(piVar15);
      }
      if (local_220 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404f9010(&local_f8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar15 = (int *)((longlong)plVar9 + 0xc);
          iVar1 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (*local_210 != 0) {
        FMemory::Free();
      }
      if (*local_268 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_238);
      plVar9 = (longlong *)local_208[1];
      if (plVar9 == (longlong *)0x0) {
        return iVar3;
      }
      LOCK();
      plVar8 = plVar9 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return iVar3;
      }
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar1 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar3;
      }
      (**(code **)(*plVar9 + 8))(plVar9,1);
      return iVar3;
    }
    for (piVar10 = local_250; piVar2 = local_250, piVar10 != local_250 + (int)local_248;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_250 >> 2) != -1) goto LAB_142af4af5;
        break;
      }
    }
    do {
      if (piVar2 == local_250 + (int)local_248) goto LAB_142af4a39;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_250 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142af4aff;
        }
        goto LAB_142af4a39;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar14 = local_260; piVar14 != local_260 + (int)local_258; piVar14 = piVar14 + 1) {
    if (*piVar14 == 2) {
      if ((int)((longlong)piVar14 - (longlong)local_260 >> 2) != -1) goto LAB_142af49a9;
      break;
    }
  }
  if (local_260 != (int *)0x0) {
    FMemory::Free(local_260);
  }
  if (local_220 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *param_3;
LAB_142af4aa4:
  if (lVar7 != 0) {
    FMemory::Free();
  }
  if (*local_268 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_238);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_208);
  return 0;
LAB_142af4a39:
  if (local_250 != (int *)0x0) {
    FMemory::Free(local_250);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (local_220 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *local_210;
  goto LAB_142af4aa4;
}



// FUNCTION 142af5060 FUN_142af5060 body=828 status=ok
// SIG undefined FUN_142af5060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142af5060(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined8 **param_6,undefined8 *param_7)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *_Dst;
  int iVar15;
  int *piVar16;
  undefined2 *puVar17;
  undefined1 auStack_288 [32];
  undefined2 **local_268;
  undefined8 **local_260;
  undefined8 *local_258;
  undefined2 *local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 *local_238;
  undefined4 local_230;
  int *local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined2 *local_208;
  int local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong local_1d0 [2];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [24];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  _Dst = (undefined2 *)0x0;
  iVar13 = 0;
  iVar15 = 0;
  local_1e8 = param_5;
  local_238 = param_7;
  local_228 = (int *)0x0;
  local_220 = 1;
  local_218 = param_3;
  local_210 = param_4;
  local_1f8 = param_2;
  local_1f0 = param_1;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_228,0);
  piVar16 = local_228;
  local_208 = (undefined2 *)0x0;
  local_200 = 0;
  *local_228 = iVar5;
  if ((int)local_220 != 0) {
    for (piVar11 = local_228; piVar3 = local_228, piVar11 != local_228 + (int)local_220;
        piVar11 = piVar11 + 1) {
      if (*piVar11 == 2) {
        if ((int)((longlong)piVar11 - (longlong)local_228 >> 2) != -1) goto LAB_142af515f;
        break;
      }
    }
    do {
      puVar12 = (undefined2 *)0x0;
      iVar13 = 0;
      if (piVar3 == local_228 + (int)local_220) goto LAB_142af5198;
      if (*piVar3 == 1) {
        puVar12 = (undefined2 *)0x0;
        puVar17 = _Dst;
        iVar13 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_228 >> 2) != -1) goto LAB_142af51ac;
        goto LAB_142af5198;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142af515f:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_5,local_1d0);
  puVar12 = _Dst;
  if (&local_208 != ppuVar7) {
    puVar12 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar13 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_208 = puVar12;
    local_200 = iVar13;
  }
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
LAB_142af5198:
  iVar15 = iVar13;
  puVar17 = puVar12;
  if (iVar15 == 0) {
LAB_142af51ac:
    puVar12 = &DAT_143f3eda8;
  }
  local_23c = 0;
  local_248 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar12);
  lVar14 = -1;
  do {
    lVar14 = lVar14 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar14) != '\0');
  puVar12 = &DAT_143f3eda8;
  if (iVar15 != 0) {
    puVar12 = puVar17;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar12);
  iVar13 = (int)lVar14;
  _Src = *(void **)(lVar8 + 0x88);
  local_240 = iVar13;
  if (0 < iVar13) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_248,0);
    _Dst = local_248;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar13);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_238;
  local_1e0 = *local_238;
  local_1d8 = local_238[1];
  if (local_1d8 != 0) {
    LOCK();
    *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
    UNLOCK();
    piVar16 = local_228;
    puVar17 = local_208;
  }
  local_238 = (undefined8 *)0x0;
  local_230 = 0;
  if (((param_6 != &local_238) && (*(int *)(param_6 + 1) != 0)) &&
     (plVar2 = *param_6, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_238);
  }
  uVar9 = FString::FString(local_1c0,local_210);
  uVar10 = FString::FString(local_1b0,local_218);
  local_258 = &local_1e0;
  local_260 = &local_238;
  local_268 = &local_248;
  uVar6 = FUN_142af4650(local_1f0,local_1f8,uVar10,uVar9);
  if (local_248 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (*local_218 != 0) {
    FMemory::Free();
  }
  if (*local_210 != 0) {
    FMemory::Free();
  }
  FUN_142b22e20(local_1e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar16 = (int *)((longlong)plVar2 + 0xc);
      iVar13 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142af53a0 FUN_142af53a0 body=2380 status=ok
// SIG undefined FUN_142af53a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142af54cd) */
/* WARNING: Removing unreachable block (ram,0x000142af54d9) */
/* WARNING: Removing unreachable block (ram,0x000142af54f1) */

int FUN_142af53a0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,longlong *param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  undefined2 *puVar11;
  longlong **pplVar12;
  undefined2 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_258 [32];
  int *local_238;
  undefined8 local_230;
  int *local_228;
  undefined8 local_220;
  int local_218 [2];
  undefined8 local_210;
  longlong *local_208 [2];
  longlong *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  undefined2 *local_1d8;
  int local_1d0;
  longlong local_1c8 [5];
  undefined8 local_1a0;
  undefined8 uStack_198;
  longlong local_190 [2];
  undefined2 *local_180;
  int local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int *local_148;
  undefined8 local_140;
  longlong local_138 [2];
  longlong local_128 [2];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_108 [16];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  lVar7 = *param_6;
  plVar9 = param_6;
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    plVar9 = (longlong *)(param_1 + 8);
  }
  plVar9 = (longlong *)plVar9[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_1a0._0_4_ = (undefined4)lVar7;
  local_1a0._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  uStack_198._0_4_ = SUB84(plVar9,0);
  uStack_198._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_198._4_4_;
  uStack_60 = (undefined4)uStack_198;
  uStack_64 = local_1a0._4_4_;
  local_68 = (undefined4)local_1a0;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  local_1f0 = param_6;
  local_210 = param_5;
  local_1f8 = param_3;
  local_1c8[4] = param_1;
  local_168 = param_4;
  local_160 = param_2;
  local_f8 = lVar7;
  plStack_f0 = plVar9;
  local_c0 = FUN_142abcbb0(&DAT_145655b88);
  local_1c8[0] = 0;
  local_1c8[1] = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8[0],L"/v1/client/{title}/user/presence",0x42);
  local_190[0] = 0;
  local_190[1] = 0;
  FUN_142abaf10(&local_1d8,local_190,local_1c8);
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FString::FString(local_108,param_3);
  puVar5 = (undefined8 *)FUN_142accce0(local_128,uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  FString::ReplaceInline(&local_1d8,L"{title}",puVar11,1);
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  local_238 = (int *)0x0;
  local_230 = 1;
  iVar3 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_238,0);
  piVar15 = local_238;
  *local_238 = iVar3;
  if ((int)local_230 == 0) {
LAB_142af5685:
    uStack_e4 = 2;
    local_228 = (int *)0x0;
    local_220 = 1;
    iVar3 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_228,0);
    piVar14 = local_228;
    *local_228 = iVar3;
    if ((int)local_220 == 0) {
LAB_142af57b6:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142af57bd:
      local_1c8[3] = 0xc;
      local_1c8[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 2,0);
      FGenericPlatformString::Memcpy(local_1c8[2],L"EndpointUrl",0x18);
      FUN_142afb430(lVar7,local_190 + 2,local_1c8 + 2);
      if (local_1c8[2] != 0) {
        FMemory::Free();
      }
      if (local_178 < 2) {
        if (local_180 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (piVar14 != (int *)0x0) {
          FMemory::Free(piVar14);
        }
        if (piVar15 != (int *)0x0) {
          FMemory::Free(piVar15);
        }
        if (local_1d8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_1404f9010(&local_f8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar15 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        if (*local_1f8 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_210);
        plVar9 = (longlong *)local_1f0[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar9 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar15 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        return 0;
      }
      puVar11 = &DAT_143f3eda8;
      if (local_1d0 != 0) {
        puVar11 = local_1d8;
      }
      puVar13 = &DAT_143f3eda8;
      if (local_178 != 0) {
        puVar13 = local_180;
      }
      FString::PrintfImpl(local_138,L"%ls%ls",puVar13,puVar11);
      local_158 = FUN_142af1fd0;
      uStack_150 = 0;
      plVar6 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1c8[4] + 0x20,local_118);
      plVar8 = (longlong *)plVar6[1];
      lVar7 = *plVar6;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        piVar14 = local_228;
        piVar15 = local_238;
      }
      plVar6 = (longlong *)FMemory::Realloc(0,0x40);
      local_208[0] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar6[1] = lVar7;
        plVar6[2] = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          piVar14 = local_228;
          piVar15 = local_238;
        }
        *(undefined4 *)(plVar6 + 3) = (undefined4)local_158;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = local_158._4_4_;
        *(undefined4 *)(plVar6 + 4) = uStack_150;
        *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_14c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[6] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_208[0];
        piVar14 = local_228;
        piVar15 = local_238;
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar15 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_208[0];
          piVar14 = local_228;
          piVar15 = local_238;
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            plVar6 = local_208[0];
            piVar14 = local_228;
            piVar15 = local_238;
          }
        }
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_110 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar6 = local_208[0];
        piVar14 = local_228;
        piVar15 = local_238;
        if ((int)lVar7 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar15 = (int *)((longlong)local_110 + 0xc);
          iVar3 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_208[0];
          piVar14 = local_228;
          piVar15 = local_238;
          if (iVar3 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            plVar6 = local_208[0];
            piVar14 = local_228;
            piVar15 = local_238;
          }
        }
      }
      lVar7 = operator_new(0x170);
      if (lVar7 == 0) {
        local_1e8 = 0;
      }
      else {
        local_1e8 = FUN_142af8bf0(lVar7);
      }
      local_1e0 = (longlong *)operator_new(0x18);
      if (local_1e0 != (longlong *)0x0) {
        *(undefined4 *)(local_1e0 + 1) = 1;
        *local_1e0 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1e0 + 0xc) = 1;
        local_1e0[2] = local_1e8;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_1e8,local_1e8,local_1e8);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_1e8 + 0x88,local_168);
      lVar7 = local_1e8;
      pplVar12 = (longlong **)(local_1e8 + 0x130);
      if (local_208 != pplVar12) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(local_1e8 + 0x138) != 0) && (plVar8 = *pplVar12, plVar8 != (longlong *)0x0))
          {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            if (*pplVar12 != (longlong *)0x0) {
              plVar8 = (longlong *)FMemory::Realloc(*pplVar12,0,0);
              *pplVar12 = plVar8;
            }
            *(undefined4 *)(lVar7 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x30))(plVar6,pplVar12);
        }
      }
      FString::operator=(local_1e8 + 0x20,local_160);
      local_218[0] = (*DAT_146b2ac98)(&local_f8,local_138,&local_1e8);
      if (local_218[0] != 0) {
        local_148 = local_218;
        local_140 = local_210;
        FUN_142ab70b0(local_1c8[4] + 0x6c0,local_170,&local_148,0);
      }
      plVar8 = local_1e0;
      iVar3 = local_218[0];
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1e0 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_208[0];
        piVar14 = local_228;
        piVar15 = local_238;
        if ((int)lVar7 == 1) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar15 = (int *)((longlong)plVar8 + 0xc);
          iVar1 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          plVar6 = local_208[0];
          piVar14 = local_228;
          piVar15 = local_238;
          if (iVar1 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            plVar6 = local_208[0];
            piVar14 = local_228;
            piVar15 = local_238;
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        local_208[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
        if (local_208[0] != (longlong *)0x0) {
          FMemory::Free(local_208[0]);
        }
      }
      if (local_138[0] != 0) {
        FMemory::Free();
      }
      if (local_180 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (piVar14 != (int *)0x0) {
        FMemory::Free(piVar14);
      }
      if (piVar15 != (int *)0x0) {
        FMemory::Free(piVar15);
      }
      if (local_1d8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404f9010(&local_f8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar15 = (int *)((longlong)plVar9 + 0xc);
          iVar1 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (*local_1f8 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_210);
      plVar9 = (longlong *)local_1f0[1];
      if (plVar9 == (longlong *)0x0) {
        return iVar3;
      }
      LOCK();
      plVar8 = plVar9 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return iVar3;
      }
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar1 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar3;
      }
      (**(code **)(*plVar9 + 8))(plVar9,1);
      return iVar3;
    }
    for (piVar10 = local_228; piVar2 = local_228, piVar10 != local_228 + (int)local_220;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_228 >> 2) != -1) goto LAB_142af57b6;
        break;
      }
    }
    do {
      if (piVar2 == local_228 + (int)local_220) goto LAB_142af5712;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_228 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142af57bd;
        }
        goto LAB_142af5712;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar14 = local_238; piVar14 != local_238 + (int)local_230; piVar14 = piVar14 + 1) {
    if (*piVar14 == 2) {
      if ((int)((longlong)piVar14 - (longlong)local_238 >> 2) != -1) goto LAB_142af5685;
      break;
    }
  }
  if (local_238 != (int *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_1d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *param_3;
LAB_142af5779:
  if (lVar7 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_210);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1f0);
  return 0;
LAB_142af5712:
  if (local_228 != (int *)0x0) {
    FMemory::Free(local_228);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (local_1d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar15 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar7 = *local_1f8;
  goto LAB_142af5779;
}



// FUNCTION 142af5cf0 FUN_142af5cf0 body=783 status=ok
// SIG undefined FUN_142af5cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142af5cf0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 *param_6)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *_Dst;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined4 local_210;
  int *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  _Dst = (undefined2 *)0x0;
  iVar12 = 0;
  iVar14 = 0;
  local_218 = param_6;
  local_208 = (int *)0x0;
  local_200 = 1;
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1d0 = param_4;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208,0);
  piVar15 = local_208;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  *local_208 = iVar5;
  if ((int)local_200 != 0) {
    for (piVar10 = local_208; piVar3 = local_208, piVar10 != local_208 + (int)local_200;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_208 >> 2) != -1) goto LAB_142af5dee;
        break;
      }
    }
    do {
      puVar11 = (undefined2 *)0x0;
      iVar12 = 0;
      if (piVar3 == local_208 + (int)local_200) goto LAB_142af5e2a;
      if (*piVar3 == 1) {
        puVar11 = (undefined2 *)0x0;
        puVar16 = _Dst;
        iVar12 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_208 >> 2) != -1) goto LAB_142af5e3e;
        goto LAB_142af5e2a;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142af5dee:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_4,local_1b8);
  puVar11 = _Dst;
  if (&local_1f8 != ppuVar7) {
    puVar11 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar12 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_1f8 = puVar11;
    local_1f0 = iVar12;
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
LAB_142af5e2a:
  iVar14 = iVar12;
  puVar16 = puVar11;
  if (iVar14 == 0) {
LAB_142af5e3e:
    puVar11 = &DAT_143f3eda8;
  }
  local_21c = 0;
  local_228 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar11);
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar13) != '\0');
  puVar11 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar11 = puVar16;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar11);
  iVar12 = (int)lVar13;
  _Src = *(void **)(lVar8 + 0x88);
  local_220 = iVar12;
  if (0 < iVar12) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_228,0);
    _Dst = local_228;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_218;
  local_1c8 = *local_218;
  local_1c0 = local_218[1];
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
    piVar15 = local_208;
    puVar16 = local_1f8;
  }
  local_218 = (undefined8 *)0x0;
  local_210 = 0;
  if (((param_5 != &local_218) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar2 = *param_5, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_218);
  }
  plVar2 = local_1e8;
  uVar9 = FString::FString(local_1a8,local_1e8);
  local_230 = &local_1c8;
  local_238 = &local_218;
  uVar6 = FUN_142af53a0(local_1d8,local_1e0,uVar9,&local_228);
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  FUN_142b22f00(local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar15 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142af6000 FUN_142af6000 body=308 status=ok
// SIG undefined FUN_142af6000(void)

undefined8 * FUN_142af6000(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x580);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_142ade8d0(lVar3,0);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_1 = plVar4;
  param_1[1] = plVar6;
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_1;
        }
      }
      plVar6 = (longlong *)param_1[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
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
  }
  return param_1;
}



// FUNCTION 142af6140 FUN_142af6140 body=607 status=ok
// SIG undefined FUN_142af6140(void)

undefined8 * FUN_142af6140(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x1c0);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ace0,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_145679128;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x1f] = 0;
    *(undefined4 *)(plVar4 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x104) = 0;
    plVar4[0x22] = 0;
    *(undefined4 *)(plVar4 + 0x23) = 0;
    plVar4[0x24] = 0;
    plVar4[0x25] = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(undefined4 *)(plVar4 + 0x2a) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x154) = 0;
    plVar4[0x2c] = 0;
    *(undefined4 *)(plVar4 + 0x2d) = 0;
    plVar4[0x2e] = 0;
    plVar4[0x2f] = 0;
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    *(undefined4 *)(plVar4 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x1a4) = 0;
    plVar4[0x36] = 0;
    *(undefined4 *)(plVar4 + 0x37) = 0;
    FUN_142b06470(plVar4[1],&DAT_14563f14c);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142af63a0 FUN_142af63a0 body=308 status=ok
// SIG undefined FUN_142af63a0(void)

undefined8 * FUN_142af63a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x760);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_142adece0(lVar3,0);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_1 = plVar4;
  param_1[1] = plVar6;
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_1;
        }
      }
      plVar6 = (longlong *)param_1[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
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
  }
  return param_1;
}



// FUNCTION 142af64e0 FUN_142af64e0 body=1998 status=ok
// SIG undefined FUN_142af64e0(void)

undefined8 * FUN_142af64e0(undefined8 *param_1,undefined8 param_2)

{
  FUN_142ab7f60(param_1,DAT_146b2ad08,param_2);
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1456ac6f0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x80,0,0);
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x8a,0,0);
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x94,0,0);
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x9e,0,0);
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xa8,0,0);
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xb2,0,0);
  *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xbc,0,0);
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xc6,0,0);
  *(undefined4 *)(param_1 + 0xca) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xd0,0,0);
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xda,0,0);
  *(undefined4 *)(param_1 + 0xde) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xe4,0,0);
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xee,0,0);
  *(undefined4 *)(param_1 + 0xf2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xf8,0,0);
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x102,0,0);
  *(undefined4 *)(param_1 + 0x106) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x10c,0,0);
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x884) = 0;
  param_1[0x112] = 0;
  *(undefined4 *)(param_1 + 0x113) = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x116,0,0);
  *(undefined4 *)(param_1 + 0x11a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8d4) = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x120,0,0);
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0;
  param_1[0x126] = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x12a,0,0);
  *(undefined4 *)(param_1 + 0x12e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x134,0,0);
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0;
  param_1[0x13a] = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x13e,0,0);
  *(undefined4 *)(param_1 + 0x142) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa14) = 0;
  param_1[0x144] = 0;
  *(undefined4 *)(param_1 + 0x145) = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x148,0,0);
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa64) = 0;
  param_1[0x14e] = 0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  FUN_142b06470(param_1[1],&DAT_14567e664);
  return param_1;
}



// FUNCTION 142af6cb0 FStatData body=14 status=ok
// SIG undefined FStatData(void)

undefined8 * FStatData::FStatData(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc0550;
  return param_1;
}



// FUNCTION 142af6cc0 FUN_142af6cc0 body=1292 status=ok
// SIG undefined FUN_142af6cc0(void)

void FUN_142af6cc0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__1456ac6f0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  if (param_1[0x14e] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x146);
  *(undefined4 *)(param_1 + 0x145) = 0;
  if (param_1[0x144] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13b) = 0;
  if (param_1[0x13a] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x132);
  *(undefined4 *)(param_1 + 0x131) = 0;
  if (param_1[0x130] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x127) = 0;
  if (param_1[0x126] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x11e);
  *(undefined4 *)(param_1 + 0x11d) = 0;
  if (param_1[0x11c] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x113) = 0;
  if (param_1[0x112] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10a);
  *(undefined4 *)(param_1 + 0x109) = 0;
  if (param_1[0x108] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xff) = 0;
  if (param_1[0xfe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xf6);
  *(undefined4 *)(param_1 + 0xf5) = 0;
  if (param_1[0xf4] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xeb) = 0;
  if (param_1[0xea] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xe2);
  *(undefined4 *)(param_1 + 0xe1) = 0;
  if (param_1[0xe0] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd7) = 0;
  if (param_1[0xd6] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xce);
  *(undefined4 *)(param_1 + 0xcd) = 0;
  if (param_1[0xcc] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xc3) = 0;
  if (param_1[0xc2] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xba);
  *(undefined4 *)(param_1 + 0xb9) = 0;
  if (param_1[0xb8] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xaf) = 0;
  if (param_1[0xae] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if (param_1[0xa4] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (param_1[0x9a] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x91) = 0;
  if (param_1[0x90] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (param_1[0x86] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x7e);
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (param_1[0x7c] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x73) = 0;
  if (param_1[0x72] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x6a);
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (param_1[0x68] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x56);
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 142af71d0 ~FJsonSerializable body=11 status=ok
// SIG undefined ~FJsonSerializable(void)

void FJsonSerializable::~FJsonSerializable(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc0550;
  return;
}



// FUNCTION 142af71e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FD3D12Adapter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142af6cc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa80);
  }
  return param_1;
}



// FUNCTION 142af7220 FUN_142af7220 body=208 status=ok
// SIG undefined FUN_142af7220(void)

undefined8 * FUN_142af7220(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456ac708;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af72f0 FUN_142af72f0 body=208 status=ok
// SIG undefined FUN_142af72f0(void)

undefined8 * FUN_142af72f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456ac720;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af73c0 FUN_142af73c0 body=208 status=ok
// SIG undefined FUN_142af73c0(void)

undefined8 * FUN_142af73c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456ac738;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af7490 Accept body=16 status=ok
// SIG undefined Accept(void)

void FLadderPlayerMode::Accept(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142af749c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return;
}



// FUNCTION 142af74a0 FUN_142af74a0 body=53 status=ok
// SIG undefined FUN_142af74a0(void)

void FUN_142af74a0(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res8 [4];
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,local_res8);
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*param_2 + 0x10))(param_2,local_res8[0]);
  return;
}



// FUNCTION 142af7560 FUN_142af7560 body=233 status=ok
// SIG undefined FUN_142af7560(void)

void FUN_142af7560(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  uVar4 = FUN_142afb290(*param_2);
  iVar1 = *(int *)(*param_2 + 8);
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar5 = param_1 + 0x68;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)iVar1) * 4);
    if (iVar2 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar1) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 != -1) {
        while (iVar2 != -1) {
          piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
          if (*piVar7 == iVar1) {
            if (iVar2 != -1) goto LAB_142af7620;
            break;
          }
          iVar2 = piVar7[6];
        }
        piVar7 = (int *)0x0;
LAB_142af7620:
        TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
                  (piVar7 + 2,param_2,uVar4);
        TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
      }
    }
  }
  return;
}



// FUNCTION 142af7650 FUN_142af7650 body=2233 status=ok
// SIG undefined FUN_142af7650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142af7759) */
/* WARNING: Removing unreachable block (ram,0x000142af7765) */
/* WARNING: Removing unreachable block (ram,0x000142af777d) */

int FUN_142af7650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  undefined1 auStack_228 [32];
  int *local_208;
  undefined8 local_200;
  int *local_1f8;
  undefined8 local_1f0;
  int local_1e8 [2];
  undefined8 local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong *local_1c0 [2];
  longlong local_1b0 [6];
  undefined2 *local_180;
  int local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined2 *local_158;
  int local_150;
  undefined1 local_144 [4];
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int *local_118;
  undefined8 local_110;
  longlong local_108 [2];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  lVar5 = *param_5;
  plVar9 = param_5;
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    plVar9 = (longlong *)(param_1 + 8);
  }
  plVar9 = (longlong *)plVar9[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_168._0_4_ = (undefined4)lVar5;
  local_168._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_160._0_4_ = SUB84(plVar9,0);
  uStack_160._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_160._4_4_;
  uStack_60 = (undefined4)uStack_160;
  uStack_64 = local_168._4_4_;
  local_68 = (undefined4)local_168;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_160 = 0;
  local_168 = 0;
  local_1d8 = param_5;
  local_1e0 = param_4;
  local_140 = param_3;
  local_138 = param_2;
  local_130 = param_1;
  local_f8 = lVar5;
  plStack_f0 = plVar9;
  local_c0 = FUN_142abcbb0(L"POST");
  local_1b0[2] = 0;
  local_1b0[3] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b0 + 2,0);
  FGenericPlatformString::Memcpy(local_1b0[2],L"/v1/bundles",0x18);
  local_1b0[0] = 0;
  local_1b0[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b0,0);
  FGenericPlatformString::Memcpy(local_1b0[0],&DAT_14567d82c,4);
  FUN_142abaf10(local_1b0 + 6,local_1b0,local_1b0 + 2);
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  if (local_1b0[2] != 0) {
    FMemory::Free();
  }
  local_208 = (int *)0x0;
  local_200 = 1;
  iVar3 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208,0);
  piVar13 = local_208;
  *local_208 = iVar3;
  if ((int)local_200 == 0) {
LAB_142af7893:
    uStack_e4 = 2;
    local_1f8 = (int *)0x0;
    local_1f0 = 1;
    iVar3 = FUN_142abcd70(L"text/plain");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
    piVar15 = local_1f8;
    *local_1f8 = iVar3;
    if ((int)local_1f0 != 0) {
      for (piVar14 = local_1f8; piVar2 = local_1f8, piVar14 != local_1f8 + (int)local_1f0;
          piVar14 = piVar14 + 1) {
        if (*piVar14 == 2) {
          if ((int)((longlong)piVar14 - (longlong)local_1f8 >> 2) != -1) goto LAB_142af79b4;
          break;
        }
      }
      do {
        if (piVar2 == local_1f8 + (int)local_1f0) goto LAB_142af7922;
        if (*piVar2 == 1) {
          if ((int)((longlong)piVar2 - (longlong)local_1f8 >> 2) != -1) {
            _local_e8 = CONCAT44(uStack_e4,1);
            goto LAB_142af79bb;
          }
          goto LAB_142af7922;
        }
        piVar2 = piVar2 + 1;
      } while( true );
    }
LAB_142af79b4:
    _local_e8 = CONCAT44(uStack_e4,2);
LAB_142af79bb:
    local_1b0[5] = 0xc;
    local_1b0[4] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b0 + 4,0);
    FGenericPlatformString::Memcpy(local_1b0[4],L"EndpointUrl",0x18);
    FUN_142afb430(lVar5,&local_158,local_1b0 + 4);
    if (local_1b0[4] != 0) {
      FMemory::Free();
    }
    if (local_150 < 2) {
      if (local_158 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (piVar15 != (int *)0x0) {
        FMemory::Free(piVar15);
      }
      if (piVar13 != (int *)0x0) {
        FMemory::Free(piVar13);
      }
      if (local_180 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404f9010(&local_f8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar13 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1e0);
      plVar9 = (longlong *)local_1d8[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar13 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      return 0;
    }
    puVar12 = &DAT_143f3eda8;
    if (local_178 != 0) {
      puVar12 = local_180;
    }
    puVar11 = &DAT_143f3eda8;
    if (local_150 != 0) {
      puVar11 = local_158;
    }
    FString::PrintfImpl(local_108,L"%ls%ls",puVar11,puVar12);
    plVar4 = *(longlong **)(param_1 + 0x28);
    local_128 = FUN_142af7560;
    uStack_120 = 0;
    local_170 = 0;
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar16 = iVar3 == 0;
      if (bVar16) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar7 = (longlong *)0x0, piVar13 = local_208, piVar15 = local_1f8, !bVar16) {
        LOCK();
        bVar16 = iVar3 == (int)plVar4[1];
        if (bVar16) {
          *(int *)(plVar4 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar16) {
          plVar7 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            local_170 = *(longlong *)(param_1 + 0x20);
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar4 + 1;
            lVar5 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar13 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar13;
              *piVar13 = *piVar13 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            plVar7 = plVar4;
            piVar13 = local_208;
            piVar15 = local_1f8;
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar16 = iVar3 == 0;
        if (bVar16) {
          *(int *)(plVar4 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x40);
    local_1c0[0] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f9e980;
      plVar4[1] = local_170;
      plVar4[2] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        piVar13 = local_208;
        piVar15 = local_1f8;
      }
      *(undefined4 *)(plVar4 + 3) = (undefined4)local_128;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = local_128._4_4_;
      *(undefined4 *)(plVar4 + 4) = uStack_120;
      *(undefined4 *)((longlong)plVar4 + 0x24) = uStack_11c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[6] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f9e9c8;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        piVar13 = (int *)((longlong)plVar7 + 0xc);
        LOCK();
        iVar3 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      piVar14 = (int *)((longlong)plVar7 + 0xc);
      LOCK();
      plVar4 = plVar7 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      piVar13 = local_208;
      plVar4 = local_1c0[0];
      piVar15 = local_1f8;
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        iVar3 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        piVar13 = local_208;
        plVar4 = local_1c0[0];
        piVar15 = local_1f8;
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          piVar13 = local_208;
          plVar4 = local_1c0[0];
          piVar15 = local_1f8;
        }
      }
    }
    lVar5 = operator_new(0x170);
    if (lVar5 == 0) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = FUN_142af8bf0(lVar5);
    }
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_1455345d0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = local_1d0;
      plVar7 = plVar6;
    }
    local_1c8 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_1d0,local_1d0,local_1d0);
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(local_1d0 + 0x88,local_140);
    lVar5 = local_1d0;
    pplVar10 = (longlong **)(local_1d0 + 0x130);
    if (local_1c0 != pplVar10) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(local_1d0 + 0x138) != 0) && (plVar7 = *pplVar10, plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          if (*pplVar10 != (longlong *)0x0) {
            plVar7 = (longlong *)FMemory::Realloc(*pplVar10,0,0);
            *pplVar10 = plVar7;
          }
          *(undefined4 *)(lVar5 + 0x138) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,pplVar10);
      }
    }
    FString::operator=(local_1d0 + 0x20,local_138);
    pcVar8 = (code *)FUN_142ae7d40();
    local_1e8[0] = (*pcVar8)(&local_f8,local_108,&local_1d0);
    if (local_1e8[0] != 0) {
      local_118 = local_1e8;
      local_110 = local_1e0;
      FUN_142ab70b0(local_130 + 0x30,local_144,&local_118,0);
    }
    plVar7 = local_1c8;
    iVar3 = local_1e8[0];
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1c8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      piVar13 = local_208;
      plVar4 = local_1c0[0];
      piVar15 = local_1f8;
      if ((int)lVar5 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar13 = (int *)((longlong)plVar7 + 0xc);
        iVar1 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        piVar13 = local_208;
        plVar4 = local_1c0[0];
        piVar15 = local_1f8;
        if (iVar1 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          piVar13 = local_208;
          plVar4 = local_1c0[0];
          piVar15 = local_1f8;
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      local_1c0[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
      if (local_1c0[0] != (longlong *)0x0) {
        FMemory::Free(local_1c0[0]);
      }
    }
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    if (local_158 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (piVar15 != (int *)0x0) {
      FMemory::Free(piVar15);
    }
    if (piVar13 != (int *)0x0) {
      FMemory::Free(piVar13);
    }
    if (local_180 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_1404f9010(&local_f8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar13 = (int *)((longlong)plVar9 + 0xc);
        iVar1 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1e0);
    plVar9 = (longlong *)local_1d8[1];
    if (plVar9 == (longlong *)0x0) {
      return iVar3;
    }
    LOCK();
    plVar4 = plVar9 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return iVar3;
    }
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar13 = (int *)((longlong)plVar9 + 0xc);
    iVar1 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar1 != 1) {
      return iVar3;
    }
    (**(code **)(*plVar9 + 8))(plVar9,1);
    return iVar3;
  }
  for (piVar15 = local_208; piVar15 != local_208 + (int)local_200; piVar15 = piVar15 + 1) {
    if (*piVar15 == 2) {
      if ((int)((longlong)piVar15 - (longlong)local_208 >> 2) != -1) goto LAB_142af7893;
      break;
    }
  }
LAB_142af792f:
  if (piVar13 != (int *)0x0) {
    FMemory::Free(piVar13);
  }
  if (local_180 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar13 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1e0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1d8);
  return 0;
LAB_142af7922:
  if (local_1f8 != (int *)0x0) {
    FMemory::Free(local_1f8);
  }
  goto LAB_142af792f;
}



// FUNCTION 142af7f10 FUN_142af7f10 body=709 status=ok
// SIG undefined FUN_142af7f10(void)

undefined8 * FUN_142af7f10(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  
  plVar6 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 8))(param_1,&local_48);
  if (local_48 != 0) {
    plVar4 = (longlong *)operator_new(0x40);
    plVar7 = plVar6;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0xa8);
      if (plVar5 != (longlong *)0x0) {
        FArchive::FArchive(plVar5);
        plVar5[0x12] = 0;
        plVar5[0x14] = 0;
        *plVar5 = (longlong)&PTR_FUN_143f4a100;
        plVar5[0x13] = (longlong)(plVar4 + 5);
        FArchive::SetIsSaving(plVar5,1);
        FArchive::SetIsPersistent(plVar5,0);
        plVar7 = plVar5;
      }
      plVar4[1] = (longlong)plVar7;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      *plVar4 = (longlong)&PTR__scalar_deleting_destructor__143f607b8;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = (longlong)param_2;
      plVar7 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar7;
      plVar6 = plVar4;
    }
    local_78 = plVar7;
    plStack_70 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_78,plVar7,plVar7);
    plVar6 = plStack_70;
    local_58 = local_78;
    plStack_50 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_70 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_70)(plStack_70);
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
    plVar6 = plStack_40;
    local_38 = local_48;
    plStack_30 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    local_60 = (longlong *)FUN_1404a9830(&local_38);
    local_68 = local_60 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
    FUN_1404a9a60(&local_68,&local_58,1);
    plVar7 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    plVar6 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_50 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_40 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plStack_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142af81e0 FUN_142af81e0 body=374 status=ok
// SIG undefined FUN_142af81e0(void)

longlong * FUN_142af81e0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = *param_2;
  lVar9 = (longlong)(int)param_2[1] * 0x10 + lVar8;
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0x10) {
    plVar5 = (longlong *)operator_new(0x20);
    plVar7 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 0;
      *plVar5 = (longlong)&PTR_AsObject_143f605c8;
      FString::FString(plVar5 + 2,lVar8);
      *(undefined4 *)(plVar5 + 1) = 2;
      plVar7 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    local_30 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f60d18;
      plVar5[2] = (longlong)plVar7;
      local_30 = plVar5;
    }
    local_38 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_38,plVar7,plVar7);
    plVar5 = local_30;
    plVar7 = local_38;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
    }
    plVar4 = local_30;
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
    *puVar6 = plVar7;
    puVar6[1] = plVar5;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142af8360 operator<<<float,3,0> body=33 status=ok
// SIG undefined operator<<<float,3,0>(void)

undefined8 Chaos::operator<<<float,3,0>(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1);
  return param_1;
}



// FUNCTION 142af8390 FUN_142af8390 body=308 status=ok
// SIG undefined FUN_142af8390(void)

undefined8 * FUN_142af8390(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0xa80);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_142af64e0(lVar3,0);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_1 = plVar4;
  param_1[1] = plVar6;
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_1;
        }
      }
      plVar6 = (longlong *)param_1[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
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
  }
  return param_1;
}



// FUNCTION 142af84d0 FUN_142af84d0 body=398 status=ok
// SIG undefined FUN_142af84d0(void)

undefined8 * FUN_142af84d0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad10,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456ac708;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],&DAT_14567d5fc);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142af8660 FUN_142af8660 body=398 status=ok
// SIG undefined FUN_142af8660(void)

undefined8 * FUN_142af8660(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad18,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456ac720;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],&DAT_14567dcd4);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142af87f0 FUN_142af87f0 body=398 status=ok
// SIG undefined FUN_142af87f0(void)

undefined8 * FUN_142af87f0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad20,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456ac738;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],&DAT_14567d6c4);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142af8980 FUN_142af8980 body=615 status=ok
// SIG undefined FUN_142af8980(void)

undefined8 * FUN_142af8980(undefined8 *param_1,undefined8 param_2)

{
  FUN_142ab7f60(param_1,DAT_146b2ada8,param_2);
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_1456e2d40;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  FUN_142b06470(param_1[1],&DAT_1456b3664);
  return param_1;
}



// FUNCTION 142af8bf0 FUN_142af8bf0 body=281 status=ok
// SIG undefined FUN_142af8bf0(void)

undefined4 * FUN_142af8bf0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[2] = DAT_1466860e8;
  DAT_1466860e8 = DAT_1466860e8 + 1;
  return param_1;
}



// FUNCTION 142af8d10 FUN_142af8d10 body=87 status=ok
// SIG undefined FUN_142af8d10(void)

undefined8 *
FUN_142af8d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  FString::FString(param_1 + 2,param_4);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 142af8d70 FUN_142af8d70 body=487 status=ok
// SIG undefined FUN_142af8d70(void)

void FUN_142af8d70(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2d40;
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (param_1[0x68] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  if (param_1[0x5e] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x56);
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (param_1[0x54] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 142af8f60 FUN_142af8f60 body=208 status=ok
// SIG undefined FUN_142af8f60(void)

undefined8 * FUN_142af8f60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2c20;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af9030 FUN_142af9030 body=311 status=ok
// SIG undefined FUN_142af9030(void)

undefined8 * FUN_142af9030(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2c38;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 142af9170 FUN_142af9170 body=276 status=ok
// SIG undefined FUN_142af9170(void)

undefined8 * FUN_142af9170(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2c50;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142af9290 FUN_142af9290 body=208 status=ok
// SIG undefined FUN_142af9290(void)

undefined8 * FUN_142af9290(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2c68;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af9360 FUN_142af9360 body=241 status=ok
// SIG undefined FUN_142af9360(void)

undefined8 * FUN_142af9360(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2c80;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142af9460 FUN_142af9460 body=381 status=ok
// SIG undefined FUN_142af9460(void)

undefined8 * FUN_142af9460(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2c98;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 142af95e0 FUN_142af95e0 body=208 status=ok
// SIG undefined FUN_142af95e0(void)

undefined8 * FUN_142af95e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2cb0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af96b0 FUN_142af96b0 body=208 status=ok
// SIG undefined FUN_142af96b0(void)

undefined8 * FUN_142af96b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2cc8;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af9780 FUN_142af9780 body=241 status=ok
// SIG undefined FUN_142af9780(void)

undefined8 * FUN_142af9780(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2ce0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142af9880 FUN_142af9880 body=381 status=ok
// SIG undefined FUN_142af9880(void)

undefined8 * FUN_142af9880(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2cf8;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 142af9a00 FUN_142af9a00 body=241 status=ok
// SIG undefined FUN_142af9a00(void)

undefined8 * FUN_142af9a00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2d10;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142af9b00 FUN_142af9b00 body=208 status=ok
// SIG undefined FUN_142af9b00(void)

undefined8 * FUN_142af9b00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1456e2d28;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 6);
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = &PTR_FUN_145534538;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142af9bd0 FUN_142af9bd0 body=52 status=ok
// SIG undefined FUN_142af9bd0(void)

undefined8 FUN_142af9bd0(undefined8 param_1,ulonglong param_2)

{
  FUN_142af8d70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 142af9c10 FUN_142af9c10 body=159 status=ok
// SIG undefined FUN_142af9c10(void)

void FUN_142af9c10(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x1e) != &local_18) {
    *(undefined8 *)(param_1 + 0x1e) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_10);
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
      *param_1 = 8;
      return;
    }
  }
  *param_1 = 8;
  return;
}



// FUNCTION 142af9cb0 FUN_142af9cb0 body=83 status=ok
// SIG undefined FUN_142af9cb0(void)

void FUN_142af9cb0(longlong *param_1,longlong param_2)

{
  FString::operator=(param_1 + 2,param_2 + 0x10);
  if (*param_1 == DAT_146b2ad18) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Reset(param_1 + 7);
  }
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>(param_1 + 7,param_2 + 0x38);
  return;
}



// FUNCTION 142af9d10 FUN_142af9d10 body=450 status=ok
// SIG undefined FUN_142af9d10(void)

undefined4 FUN_142af9d10(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x60);
  local_68 = 0;
  uStack_64 = 1;
  puStack_30 = (uint *)(param_1 + 0x48);
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar8 = puStack_30;
    }
    uVar3 = *puVar8;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar4) goto LAB_142af9dcf;
      uVar3 = puVar8[lVar7 + 1];
    }
    uStack_64 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
    if (iVar2 < local_58._4_4_) {
LAB_142af9dcf:
      local_58._4_4_ = iVar2;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar4 = local_58._4_4_ < iVar2;
  local_40 = plVar1;
  local_58 = puStack_30;
  if (bVar4) {
    do {
      iVar2 = iStack_4c;
      if (*(int *)(param_2 + 8) < 2) {
LAB_142af9e5b:
        lVar7 = *plVar1;
        iVar6 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar6);
        }
        FString::FString((longlong)iVar6 * 0x10 + *param_3,lVar7 + (longlong)iVar2 * 0x28);
      }
      else {
        cVar5 = FString::StartsWith(*plVar1 + (longlong)iStack_4c * 0x28,param_2,1);
        if (cVar5 != '\0') goto LAB_142af9e5b;
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return (int)param_3[1];
}



// FUNCTION 142af9ee0 FUN_142af9ee0 body=4120 status=ok
// SIG undefined FUN_142af9ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142afa043) */
/* WARNING: Removing unreachable block (ram,0x000142afa050) */
/* WARNING: Removing unreachable block (ram,0x000142afa069) */
/* WARNING: Removing unreachable block (ram,0x000142afa078) */
/* WARNING: Type propagation algorithm not settling */

int FUN_142af9ee0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                 longlong *param_5,longlong *param_6,undefined8 param_7,longlong *param_8,
                 longlong param_9,longlong *param_10)

{
  void *_Dst;
  undefined8 ******_Src;
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *******pppppppuVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  code *pcVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *******pppppppuVar17;
  longlong **pplVar18;
  int *piVar19;
  undefined2 *puVar20;
  int *piVar21;
  int *piVar22;
  bool bVar23;
  undefined1 auStack_378 [32];
  undefined2 local_358;
  undefined4 *local_348;
  undefined8 local_340;
  int *local_338;
  undefined8 local_330;
  int *local_328;
  undefined8 local_320;
  int local_318 [2];
  longlong *local_310;
  undefined2 *local_308;
  int local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  void *local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  undefined8 *******local_2d0;
  undefined8 local_2c8;
  int local_2c0 [2];
  longlong local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  longlong *local_298 [2];
  longlong local_288 [8];
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  longlong local_220 [2];
  undefined1 local_210 [4];
  undefined1 local_20c [4];
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  longlong *local_1f0;
  undefined4 **local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  int *local_1d0;
  undefined8 local_1c8;
  longlong local_1c0 [2];
  longlong local_1b0 [2];
  longlong local_1a0 [2];
  longlong local_190 [2];
  longlong local_180 [2];
  longlong local_170 [2];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  longlong local_110 [3];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  local_2b8 = *param_10;
  plVar15 = param_10;
  if (local_2b8 == 0) {
    local_2b8 = *(longlong *)(param_1 + 8);
    plVar15 = (longlong *)(param_1 + 8);
  }
  plVar15 = (longlong *)plVar15[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_230._0_4_ = (undefined4)local_2b8;
  local_230._4_4_ = (undefined4)((ulonglong)local_2b8 >> 0x20);
  uStack_228._0_4_ = SUB84(plVar15,0);
  uStack_228._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_228._4_4_;
  uStack_60 = (undefined4)uStack_228;
  uStack_64 = local_230._4_4_;
  local_68 = (undefined4)local_230;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_228 = 0;
  local_230 = 0;
  local_248 = param_8;
  local_2a0 = param_10;
  local_2f0 = param_7;
  local_2f8 = param_5;
  local_310 = param_6;
  local_2b0 = param_4;
  local_2a8 = param_1;
  local_240 = param_2;
  local_238 = param_3;
  local_f8 = local_2b8;
  plStack_f0 = plVar15;
  local_c0 = FUN_142abcbb0(&DAT_1456b7908);
  local_288[6] = 0;
  local_288[7] = 0x3e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_288 + 6,0);
  FGenericPlatformString::Memcpy
            (local_288[6],L"/articles/{title}/{platform}/{service}/{language}/{territory}",0x7c);
  local_288[4] = 0;
  local_288[5] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_288 + 4,0);
  FGenericPlatformString::Memcpy(local_288[4],L"/api/v2",0x10);
  FUN_142abaf10(&local_308,local_288 + 4,local_288 + 6);
  if (local_288[4] != 0) {
    FMemory::Free();
  }
  if (local_288[6] != 0) {
    FMemory::Free();
  }
  uVar8 = FString::FString(local_160,param_2);
  puVar9 = (undefined8 *)FUN_142accce0(local_1b0,uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar9;
  }
  FString::ReplaceInline(&local_308,L"{title}",puVar20,1);
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  uVar8 = FString::FString(local_150,param_3);
  puVar9 = (undefined8 *)FUN_142accce0(local_1a0,uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar9;
  }
  FString::ReplaceInline(&local_308,L"{platform}",puVar20,1);
  if (local_1a0[0] != 0) {
    FMemory::Free();
  }
  uVar8 = FString::FString(local_140,param_4);
  puVar9 = (undefined8 *)FUN_142accce0(local_190,uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar9;
  }
  FString::ReplaceInline(&local_308,L"{service}",puVar20,1);
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  uVar8 = FString::FString(local_130,param_5);
  puVar9 = (undefined8 *)FUN_142accce0(local_180,uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar9;
  }
  FString::ReplaceInline(&local_308,L"{language}",puVar20,1);
  if (local_180[0] != 0) {
    FMemory::Free();
  }
  uVar8 = FString::FString(local_120,local_310);
  puVar9 = (undefined8 *)FUN_142accce0(local_170,uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar9;
  }
  FString::ReplaceInline(&local_308,L"{territory}",puVar20,1);
  if (local_170[0] != 0) {
    FMemory::Free();
  }
  local_330 = 1;
  local_338 = (int *)0x0;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_338,0);
  piVar22 = local_338;
  *local_338 = iVar5;
  if ((int)local_330 == 0) {
LAB_142afa3ad:
    uStack_e4 = 2;
    local_328 = (int *)0x0;
    local_320 = 1;
    iVar5 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_328,0);
    piVar21 = local_328;
    *local_328 = iVar5;
    if ((int)local_320 != 0) {
      for (piVar19 = local_328; piVar1 = local_328, piVar19 != local_328 + (int)local_320;
          piVar19 = piVar19 + 1) {
        if (*piVar19 == 2) {
          if ((int)((longlong)piVar19 - (longlong)local_328 >> 2) != -1) goto LAB_142afa52c;
          break;
        }
      }
      do {
        if (piVar1 == local_328 + (int)local_320) goto LAB_142afa442;
        if (*piVar1 == 1) {
          if ((int)((longlong)piVar1 - (longlong)local_328 >> 2) != -1) {
            _local_e8 = CONCAT44(uStack_e4,1);
            goto LAB_142afa536;
          }
          goto LAB_142afa442;
        }
        piVar1 = piVar1 + 1;
      } while( true );
    }
LAB_142afa52c:
    _local_e8 = CONCAT44(uStack_e4,2);
LAB_142afa536:
    local_220[1] = 0xc;
    local_220[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_220,0);
    lVar3 = local_220[0];
    FGenericPlatformString::Memcpy(local_220[0],L"EndpointUrl",0x18);
    lVar12 = local_2b8;
    local_2d0 = (undefined8 *******)0x0;
    local_2c8 = 0;
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(local_2b8 + 0x38,local_2c0,local_220);
    if (local_2c0[0] == -1) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(lVar12 + 0x38) + (longlong)local_2c0[0] * 0x28;
    }
    pppppppuVar17 = (undefined8 *******)0x0;
    pppppppuVar10 = (undefined8 *******)(lVar12 + 0x10);
    if (lVar12 == 0) {
      pppppppuVar10 = pppppppuVar17;
    }
    iVar5 = 0;
    if ((pppppppuVar10 != (undefined8 *******)0x0) &&
       (iVar5 = 0, &local_2d0 != (undefined8 ********)pppppppuVar10)) {
      iVar5 = *(int *)(pppppppuVar10 + 1);
      _Src = *pppppppuVar10;
      local_2c8 = CONCAT44(local_2c8._4_4_,iVar5);
      if (iVar5 == 0) {
        pppppppuVar17 = (undefined8 *******)0x0;
        iVar5 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2d0,iVar5,0);
        pppppppuVar17 = local_2d0;
        _guard_xfg_dispatch_icall_nop(local_2d0,_Src,(longlong)iVar5 * 2);
        iVar5 = (int)local_2c8;
      }
    }
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
    if (iVar5 < 2) {
      if (pppppppuVar17 != (undefined8 *******)0x0) {
        FMemory::Free(pppppppuVar17);
      }
      if (piVar21 != (int *)0x0) {
        FMemory::Free(piVar21);
      }
      if (piVar22 != (int *)0x0) {
        FMemory::Free(piVar22);
      }
      if (local_308 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar11 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_f0 + 1;
        lVar12 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar22 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar15 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar22 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      if (*local_240 != 0) {
        FMemory::Free();
      }
      if (*local_238 != 0) {
        FMemory::Free();
      }
      if (*local_2b0 != 0) {
        FMemory::Free();
      }
      if (*local_2f8 != 0) {
        FMemory::Free();
      }
      if (*local_310 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2f0);
      plVar15 = (longlong *)local_2a0[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar15 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar22 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      return 0;
    }
    puVar20 = &DAT_143f3eda8;
    if (local_300 != 0) {
      puVar20 = local_308;
    }
    pppppppuVar10 = (undefined8 *******)&DAT_143f3eda8;
    if (iVar5 != 0) {
      pppppppuVar10 = pppppppuVar17;
    }
    FString::PrintfImpl(local_1c0,L"%ls%ls",pppppppuVar10,puVar20);
    local_200 = FUN_142afc840;
    uStack_1f8 = 0;
    local_2e8 = (void *)0x0;
    plVar11 = *(longlong **)(local_2a8 + 0x28);
    plVar13 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar23 = iVar5 == 0;
      if (bVar23) {
        *(int *)(plVar11 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar13 = (longlong *)0x0, piVar21 = local_328, piVar22 = local_338, !bVar23) {
        LOCK();
        bVar23 = iVar5 == (int)plVar11[1];
        if (bVar23) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar23) {
          plVar13 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            local_2e8 = *(void **)(local_2a8 + 0x20);
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            plVar13 = plVar11 + 1;
            lVar12 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar22 = (int *)((longlong)plVar11 + 0xc);
              iVar5 = *piVar22;
              *piVar22 = *piVar22 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            plVar13 = plVar11;
            piVar21 = local_328;
            piVar22 = local_338;
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar23 = iVar5 == 0;
        if (bVar23) {
          *(int *)(plVar11 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar11 = (longlong *)FMemory::Realloc(0,0x40);
    local_298[0] = plVar11;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_GetPoolName_143f9e980;
      plVar11[1] = (longlong)local_2e8;
      plVar11[2] = (longlong)plVar13;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        piVar21 = local_328;
        piVar22 = local_338;
      }
      *(undefined4 *)(plVar11 + 3) = (undefined4)local_200;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = local_200._4_4_;
      *(undefined4 *)(plVar11 + 4) = uStack_1f8;
      *(undefined4 *)((longlong)plVar11 + 0x24) = uStack_1f4;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar11[6] = lVar12;
      *plVar11 = (longlong)&PTR_GetPoolName_143f9e9c8;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        piVar22 = (int *)((longlong)plVar13 + 0xc);
        LOCK();
        iVar5 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      piVar19 = (int *)((longlong)plVar13 + 0xc);
      LOCK();
      plVar11 = plVar13 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      piVar21 = local_328;
      piVar22 = local_338;
      plVar11 = local_298[0];
      if ((int)lVar12 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        iVar5 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        piVar21 = local_328;
        piVar22 = local_338;
        plVar11 = local_298[0];
        if (iVar5 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          piVar21 = local_328;
          piVar22 = local_338;
          plVar11 = local_298[0];
        }
      }
    }
    lVar12 = operator_new(0x170);
    if (lVar12 == 0) {
      local_2e0 = 0;
    }
    else {
      local_2e0 = FUN_142af8bf0(lVar12);
    }
    plVar16 = (longlong *)0x0;
    plVar13 = (longlong *)operator_new(0x18);
    local_2d8 = plVar16;
    if (plVar13 != (longlong *)0x0) {
      *(undefined4 *)(plVar13 + 1) = 1;
      *plVar13 = (longlong)&PTR_FUN_1455345d0;
      *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
      plVar13[2] = local_2e0;
      local_2d8 = plVar13;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_2e0,local_2e0,local_2e0);
    lVar12 = local_2e0;
    plVar13 = (longlong *)(local_2e0 + 0x88);
    if (plVar13 != local_110) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      *plVar13 = 0;
      *(undefined8 *)(lVar12 + 0x90) = 0;
    }
    lVar12 = local_2e0;
    pplVar18 = (longlong **)(local_2e0 + 0x130);
    if (local_298 != pplVar18) {
      if (plVar11 == (longlong *)0x0) {
        if ((*(int *)(local_2e0 + 0x138) != 0) && (plVar13 = *pplVar18, plVar13 != (longlong *)0x0))
        {
          (**(code **)(*plVar13 + 0x28))(plVar13,0);
          if (*pplVar18 != (longlong *)0x0) {
            plVar13 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
            *pplVar18 = plVar13;
          }
          *(undefined4 *)(lVar12 + 0x138) = 0;
        }
      }
      else {
        (**(code **)(*plVar11 + 0x30))(plVar11,pplVar18);
      }
    }
    lVar12 = local_2e0;
    if (*(undefined **)(local_2e0 + 0x20) != &DAT_1456af904) {
      *(undefined4 *)(local_2e0 + 0x28) = 0;
      if (*(int *)(local_2e0 + 0x2c) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_2e0 + 0x20,0);
        plVar16 = (longlong *)(ulonglong)*(uint *)(lVar12 + 0x28);
      }
      *(int *)(lVar12 + 0x28) = (int)plVar16;
      if (*(int *)(lVar12 + 0x2c) < (int)plVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar12 + 0x20);
      }
    }
    plVar13 = local_248;
    if ((local_c0 == 1) || (local_c0 == 4)) {
      if (1 < (int)local_248[1]) {
        local_348 = (undefined4 *)0x0;
        local_340 = 0;
        cVar4 = FString::StartsWith(local_248,&DAT_1456af9c4,1);
        if (((cVar4 == '\0') &&
            (cVar4 = FString::StartsWith(plVar13,&DAT_1456b8580,1), cVar4 == '\0')) &&
           (local_348 != &DAT_1456afa84)) {
          iVar5 = local_340._4_4_;
          if (local_340._4_4_ != 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_348,2);
            iVar5 = local_340._4_4_;
          }
          iVar6 = (int)local_340 + 2;
          local_340 = CONCAT44(local_340._4_4_,iVar6);
          if (iVar5 < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348);
          }
          *local_348 = 0x22;
        }
        uVar2 = local_340;
        iVar5 = (int)plVar13[1] + -1;
        local_2e8 = (void *)*plVar13;
        if ((int)plVar13[1] == 0) {
          iVar5 = 0;
        }
        if (iVar5 != 0) {
          iVar6 = (int)local_340;
          lVar12 = (longlong)(int)local_340;
          iVar7 = (uint)((int)local_340 == 0) + (int)local_340 + iVar5;
          local_340 = CONCAT44(local_340._4_4_,iVar7);
          if (local_340._4_4_ < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,uVar2 & 0xffffffff);
          }
          _Dst = (void *)((longlong)local_348 + (lVar12 - (ulonglong)(iVar6 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,local_2e8,(longlong)iVar5 * 2);
          *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
          plVar13 = local_248;
        }
        cVar4 = FString::EndsWith(plVar13,&DAT_1456afb44,1);
        uVar2 = local_340;
        if (cVar4 == '\0') {
          iVar5 = (int)local_340;
          lVar12 = (longlong)(int)local_340;
          iVar6 = (2 - (uint)((int)local_340 != 0)) + (int)local_340;
          local_340 = CONCAT44(local_340._4_4_,iVar6);
          if (local_340._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,uVar2 & 0xffffffff);
          }
          puVar20 = (undefined2 *)((longlong)local_348 + (lVar12 - (ulonglong)(iVar5 != 0)) * 2);
          *puVar20 = 0x22;
          puVar20[1] = 0;
        }
        local_288[0] = 0;
        local_288[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_288,0);
        local_358 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_288[0],0xe,"If-None-Match");
        local_1f0 = local_288;
        local_1e8 = &local_348;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  (local_2e0 + 0xc0,local_210,&local_1f0,0);
        if (local_288[0] != 0) {
          FMemory::Free();
        }
        if (local_348 != (undefined4 *)0x0) {
          FMemory::Free();
        }
      }
      if (1 < *(int *)(param_9 + 8)) {
        local_288[2] = 0;
        local_288[3] = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_288 + 2,0);
        local_358 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_288[2],0x12,"If-Modified-Since");
        local_1d8 = param_9;
        local_1e0 = local_288 + 2;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                  (local_2e0 + 0xc0,local_20c,&local_1e0,0);
        if (local_288[2] != 0) {
          FMemory::Free();
        }
      }
    }
    pcVar14 = (code *)FUN_142ae7d40();
    local_318[0] = (*pcVar14)(&local_f8,local_1c0,&local_2e0);
    if (local_318[0] != 0) {
      local_1d0 = local_318;
      local_1c8 = local_2f0;
      FUN_142ab70b0(local_2a8 + 0x30,local_208,&local_1d0,0);
    }
    plVar13 = local_2d8;
    iVar5 = local_318[0];
    if (local_2d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_2d8 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      piVar21 = local_328;
      piVar22 = local_338;
      plVar11 = local_298[0];
      if ((int)lVar12 == 1) {
        (**(code **)*local_2d8)(local_2d8);
        LOCK();
        piVar22 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        piVar21 = local_328;
        piVar22 = local_338;
        plVar11 = local_298[0];
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          piVar21 = local_328;
          piVar22 = local_338;
          plVar11 = local_298[0];
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      local_298[0] = (longlong *)FMemory::Realloc(plVar11,0,0);
      if (local_298[0] != (longlong *)0x0) {
        FMemory::Free(local_298[0]);
      }
    }
    if (local_1c0[0] != 0) {
      FMemory::Free();
    }
    if (local_2d0 != (undefined8 *******)0x0) {
      FMemory::Free(local_2d0);
    }
    if (piVar21 != (int *)0x0) {
      FMemory::Free(piVar21);
    }
    if (piVar22 != (int *)0x0) {
      FMemory::Free(piVar22);
    }
    if (local_308 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_1404f9010(&local_f8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar15 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar22 = (int *)((longlong)plVar15 + 0xc);
        iVar6 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    if (*local_240 != 0) {
      FMemory::Free();
    }
    if (*local_238 != 0) {
      FMemory::Free();
    }
    if (*local_2b0 != 0) {
      FMemory::Free();
    }
    if (*local_2f8 != 0) {
      FMemory::Free();
    }
    if (*local_310 != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2f0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2a0);
    return iVar5;
  }
  for (piVar21 = local_338; piVar21 != local_338 + (int)local_330; piVar21 = piVar21 + 1) {
    if (*piVar21 == 2) {
      if ((int)((longlong)piVar21 - (longlong)local_338 >> 2) != -1) goto LAB_142afa3ad;
      break;
    }
  }
  if (local_338 != (int *)0x0) {
    FMemory::Free(local_338);
  }
  if (local_308 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar22 = (int *)((longlong)plVar15 + 0xc);
      iVar5 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  lVar12 = *param_4;
LAB_142afa4ca:
  if (lVar12 != 0) {
    FMemory::Free();
  }
  if (*local_2f8 != 0) {
    FMemory::Free();
  }
  if (*local_310 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2f0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2a0);
  return 0;
LAB_142afa442:
  if (local_328 != (int *)0x0) {
    FMemory::Free(local_328);
  }
  if (piVar22 != (int *)0x0) {
    FMemory::Free(piVar22);
  }
  if (local_308 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar15 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar22 = (int *)((longlong)plVar15 + 0xc);
      iVar5 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  lVar12 = *local_2b0;
  goto LAB_142afa4ca;
}



// FUNCTION 142afaf00 FUN_142afaf00 body=533 status=ok
// SIG undefined FUN_142afaf00(void)

undefined1 FUN_142afaf00(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  wint_t *pwVar6;
  undefined2 *puVar7;
  longlong local_28 [3];
  int local_10;
  
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_142afc750(param_1,local_28 + 2,param_2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if ((local_10 != 0) && (local_10 != 1)) {
    pwVar6 = &DAT_1456b8f50;
    do {
      wVar1 = *(wint_t *)(local_28[2] + -0x1456b8f50 + (longlong)pwVar6);
      if ((wVar1 == 0) && (*pwVar6 == 0)) goto LAB_142afb0ee;
      if (wVar1 != *pwVar6) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar6);
        if (wVar1 != wVar2) goto LAB_142afafa4;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
  goto LAB_142afb0fa;
LAB_142afafa4:
  if (wVar1 != wVar2) {
    pwVar6 = &DAT_1456b8f60;
    do {
      wVar1 = *(wint_t *)(local_28[2] + -0x1456b8f60 + (longlong)pwVar6);
      if ((wVar1 == 0) && (*pwVar6 == 0)) break;
      if (wVar1 != *pwVar6) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar6);
        if (wVar1 != wVar2) goto LAB_142afaff4;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
  goto LAB_142afb0ee;
LAB_142afaff4:
  if (wVar1 != wVar2) {
    pwVar6 = &DAT_1456b00e4;
    do {
      wVar1 = *(wint_t *)(local_28[2] + -0x1456b00e4 + (longlong)pwVar6);
      if ((wVar1 == 0) && (*pwVar6 == 0)) break;
      if (wVar1 != *pwVar6) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar6);
        if (wVar1 != wVar2) goto LAB_142afb044;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
  goto LAB_142afb0ee;
LAB_142afb0e0:
  if (wVar1 != wVar2) {
    param_3 = 0;
    goto LAB_142afb0fa;
  }
  goto LAB_142afb0ee;
LAB_142afb044:
  if (wVar1 != wVar2) {
    puVar4 = (undefined8 *)FText::ToString(&DAT_1468e2308);
    puVar7 = &DAT_143f3eda8;
    if (*(int *)(puVar4 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar4;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(local_28[2],puVar5);
    if (iVar3 != 0) {
      puVar4 = (undefined8 *)FText::ToString(&DAT_1468e22d8);
      if (*(int *)(puVar4 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar4;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(local_28[2],puVar7);
      if (iVar3 != 0) {
        pwVar6 = &DAT_1456aff9c;
        do {
          wVar1 = *(wint_t *)(local_28[2] + -0x1456aff9c + (longlong)pwVar6);
          if ((wVar1 == 0) && (*pwVar6 == 0)) break;
          if (wVar1 != *pwVar6) {
            wVar1 = towlower(wVar1);
            wVar2 = towlower(*pwVar6);
            if (wVar1 != wVar2) goto LAB_142afb0e0;
          }
          pwVar6 = pwVar6 + 1;
        } while( true );
      }
    }
  }
LAB_142afb0ee:
  param_3 = 1;
LAB_142afb0fa:
  if (local_28[2] != 0) {
    FMemory::Free(local_28[2]);
  }
  return param_3;
}



// FUNCTION 142afb1f0 FUN_142afb1f0 body=154 status=ok
// SIG undefined FUN_142afb1f0(void)

undefined8
FUN_142afb1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong local_48 [2];
  wchar_t *local_38;
  int local_30;
  
  uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_142afc750(param_1,&local_38,param_2,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  fVar3 = (float)param_3;
  if ((local_30 != 0) && (local_30 != 1)) {
    dVar1 = _wtof(local_38);
    fVar2 = (float)dVar1;
    fVar3 = (float)param_4;
    uVar4 = (int)((ulonglong)param_4 >> 0x20);
    if (((float)param_4 <= fVar2) && (uVar4 = 0, fVar3 = fVar2, param_5 <= fVar2)) {
      fVar3 = param_5;
    }
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return CONCAT44(uVar4,fVar3);
}



// FUNCTION 142afb290 FUN_142afb290 body=251 status=ok
// SIG undefined FUN_142afb290(void)

undefined4 FUN_142afb290(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  bVar8 = false;
  plVar6 = *(longlong **)(param_1 + 0x78);
  if (plVar6 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0xa8))(plVar6,local_28);
    bVar8 = true;
    if (*plVar6 != 0) {
      bVar3 = true;
      goto LAB_142afb2d2;
    }
  }
  bVar3 = false;
LAB_142afb2d2:
  if ((bVar8) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  if (bVar3) {
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa8))
                       (*(longlong **)(param_1 + 0x78),local_18);
    uVar5 = (**(code **)(*(longlong *)*puVar7 + 0x40))();
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 142afb390 FUN_142afb390 body=157 status=ok
// SIG undefined FUN_142afb390(void)

int FUN_142afb390(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  wchar_t *_Str;
  wchar_t *local_28;
  int local_20;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_142afc750(param_1,&local_28,param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (((local_20 != 0) && (local_20 != 1)) && (cVar1 = FString::IsNumeric(&local_28), cVar1 != '\0')
     ) {
    _Str = L"";
    if (local_20 != 0) {
      _Str = local_28;
    }
    iVar2 = _wtoi(_Str);
    param_3 = param_4;
    if ((param_4 <= iVar2) && (param_3 = param_5, iVar2 < param_5)) {
      param_3 = iVar2;
    }
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_3;
}



// FUNCTION 142afb430 FUN_142afb430 body=113 status=ok
// SIG undefined FUN_142afb430(void)

undefined8 * FUN_142afb430(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res8);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    FString::operator=(param_2);
  }
  return param_2;
}



// FUNCTION 142afb4b0 FUN_142afb4b0 body=4000 status=ok
// SIG undefined FUN_142afb4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142afb606) */
/* WARNING: Removing unreachable block (ram,0x000142afb613) */
/* WARNING: Removing unreachable block (ram,0x000142afb62c) */
/* WARNING: Type propagation algorithm not settling */

int FUN_142afb4b0(longlong param_1,void *param_2,longlong *param_3,undefined4 param_4,
                 longlong *param_5,undefined8 param_6,undefined8 *param_7,longlong param_8,
                 longlong *param_9)

{
  void *_Dst;
  undefined8 ******_Src;
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *******pppppppuVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  code *pcVar15;
  longlong *plVar16;
  int *piVar17;
  longlong lVar18;
  undefined8 *******pppppppuVar19;
  longlong **pplVar20;
  undefined2 *puVar21;
  int *piVar22;
  int *piVar23;
  undefined1 auStack_3d8 [32];
  undefined2 *local_3b8;
  undefined4 *local_3a8;
  undefined8 local_3a0;
  uint local_398 [2];
  longlong *local_390;
  int *local_388;
  undefined8 local_380;
  undefined8 local_378;
  longlong *local_370;
  longlong *local_368;
  int *local_360;
  undefined8 local_358;
  undefined8 *******local_350;
  undefined8 local_348;
  undefined2 *local_340;
  int local_338;
  int local_330 [2];
  longlong *local_328;
  longlong *local_320;
  int local_318;
  void *local_310;
  longlong local_308 [11];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  longlong local_2a0 [3];
  code *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 *local_278;
  longlong *local_270;
  longlong local_268 [2];
  undefined2 *local_258;
  int local_250;
  longlong local_248;
  int local_240;
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  undefined1 local_230 [4];
  undefined1 local_22c [4];
  undefined1 local_228 [8];
  longlong local_220;
  int local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined4 **local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  uint *local_1d0;
  undefined8 local_1c8;
  longlong local_1c0 [2];
  longlong local_1b0 [3];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  longlong local_158 [2];
  longlong local_148;
  longlong *plStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  int local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  local_288 = (code *)*param_9;
  plVar16 = param_9;
  if (local_288 == (code *)0x0) {
    local_288 = *(code **)(param_1 + 8);
    plVar16 = (longlong *)(param_1 + 8);
  }
  plVar16 = (longlong *)plVar16[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_2b0._0_4_ = SUB84(local_288,0);
  local_2b0._4_4_ = (undefined4)((ulonglong)local_288 >> 0x20);
  uStack_2a8._0_4_ = SUB84(plVar16,0);
  uStack_2a8._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
  uStack_134 = 0;
  local_138 = 0;
  uStack_5c = uStack_2a8._4_4_;
  uStack_60 = (undefined4)uStack_2a8;
  uStack_64 = local_2b0._4_4_;
  local_68 = (undefined4)local_2b0;
  local_c0 = 0;
  local_c8 = 0;
  local_d4 = 0;
  local_d8 = 0xffffffff;
  local_e0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_10c = 1;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_278 = param_7;
  uStack_2a8 = 0;
  local_2b0 = 0;
  local_328 = param_9;
  local_378 = param_6;
  local_390 = param_5;
  local_310 = param_2;
  local_308[10] = param_1;
  local_270 = param_3;
  local_148 = (longlong)local_288;
  plStack_140 = plVar16;
  local_110 = FUN_142abcbb0(&DAT_1456ad8e8);
  local_308[4] = 0;
  local_308[5] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_308 + 4,0);
  FGenericPlatformString::Memcpy(local_308[4],L"/v1/client/{title}/puzzles",0x36);
  local_268[0] = 0;
  local_268[1] = 0;
  FUN_142abaf10(&local_340,local_268,local_308 + 4);
  if (local_268[0] != 0) {
    FMemory::Free();
  }
  if (local_308[4] != 0) {
    FMemory::Free();
  }
  uVar8 = FString::FString(local_178,param_3);
  puVar9 = (undefined8 *)FUN_142accce0(local_1b0,uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*puVar9;
  }
  FString::ReplaceInline(&local_340,L"{title}",puVar21,1);
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  local_360 = (int *)0x0;
  local_358 = 1;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_360,0);
  piVar22 = local_360;
  *local_360 = iVar5;
  if ((int)local_358 != 0) {
    for (piVar23 = local_360; piVar23 != local_360 + (int)local_358; piVar23 = piVar23 + 1) {
      if (*piVar23 == 2) {
        if ((int)((longlong)piVar23 - (longlong)local_360 >> 2) != -1) goto LAB_142afb7db;
        break;
      }
    }
    if (local_360 != (int *)0x0) {
      FMemory::Free(local_360);
    }
    if (local_340 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_1404f9010(&local_148);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar16 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar22 = (int *)((longlong)plVar16 + 0xc);
        iVar5 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    if (*param_3 != 0) {
      FMemory::Free();
    }
    lVar11 = *param_5;
    goto LAB_142afbc42;
  }
LAB_142afb7db:
  uStack_134 = 2;
  local_388 = (int *)0x0;
  local_380 = 1;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_388,0);
  piVar23 = local_388;
  *local_388 = iVar5;
  if ((int)local_380 != 0) {
    for (piVar17 = local_388; piVar1 = local_388, piVar17 != local_388 + (int)local_380;
        piVar17 = piVar17 + 1) {
      if (*piVar17 == 2) {
        if ((int)((longlong)piVar17 - (longlong)local_388 >> 2) != -1) goto LAB_142afb90e;
        break;
      }
    }
    do {
      if (piVar1 == local_388 + (int)local_380) goto LAB_142afb872;
      if (*piVar1 == 1) {
        if ((int)((longlong)piVar1 - (longlong)local_388 >> 2) != -1) {
          local_138 = 1;
          goto LAB_142afb918;
        }
        goto LAB_142afb872;
      }
      piVar1 = piVar1 + 1;
    } while( true );
  }
LAB_142afb90e:
  local_138 = 2;
LAB_142afb918:
  local_88 = 0xffffffff;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_142acccc0(&local_248,param_4);
  if (local_240 < 2) {
    if (local_248 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
    if (piVar23 != (int *)0x0) {
      FMemory::Free(piVar23);
    }
    if (piVar22 != (int *)0x0) {
      FMemory::Free(piVar22);
    }
    if (local_340 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_c0 = 0;
    if (local_c8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_108);
    if (local_120 != 0) {
      FMemory::Free();
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
    plVar14 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_140 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar22 = (int *)((longlong)plVar14 + 0xc);
        iVar5 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar16 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar22 = (int *)((longlong)plVar16 + 0xc);
        iVar5 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    if (*param_3 != 0) {
      FMemory::Free();
    }
    if (*local_390 != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_378);
    plVar16 = (longlong *)local_328[1];
    if (plVar16 == (longlong *)0x0) {
      return 0;
    }
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return 0;
    }
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar22 = (int *)((longlong)plVar16 + 0xc);
    iVar5 = *piVar22;
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return 0;
    }
    (**(code **)(*plVar16 + 8))(plVar16,1);
    return 0;
  }
  local_308[8] = 0;
  local_308[9] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_308 + 8,0);
  FGenericPlatformString::Memcpy(local_308[8],L"difficulty",0x16);
  local_210 = local_308 + 8;
  local_208 = &local_248;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(&local_b8,local_238,&local_210,0);
  if (local_308[8] != 0) {
    FMemory::Free();
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  uVar8 = FString::FString(local_168,local_390);
  FUN_142accce0(&local_220,uVar8);
  if (1 < local_218) {
    local_308[2] = 0;
    local_308[3] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_308 + 2,0);
    FGenericPlatformString::Memcpy(local_308[2],L"puzzle_id",0x14);
    local_200 = local_308 + 2;
    local_1f8 = &local_220;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(&local_b8,local_234,&local_200,0);
    if (local_308[2] != 0) {
      FMemory::Free();
    }
  }
  if (local_220 != 0) {
    FMemory::Free();
  }
  FUN_142aba9c0(local_268 + 2,&local_b8);
  local_2a0[0] = 0;
  local_2a0[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2a0,0);
  lVar11 = local_2a0[0];
  FGenericPlatformString::Memcpy(local_2a0[0],L"EndpointUrl",0x18);
  pcVar15 = local_288;
  local_350 = (undefined8 *******)0x0;
  local_348 = 0;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong)local_288 + 0x38,local_330,local_2a0);
  if (local_330[0] == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(longlong *)((longlong)pcVar15 + 0x38) + (longlong)local_330[0] * 0x28;
  }
  pppppppuVar19 = (undefined8 *******)0x0;
  pppppppuVar10 = (undefined8 *******)(lVar18 + 0x10);
  if (lVar18 == 0) {
    pppppppuVar10 = pppppppuVar19;
  }
  iVar5 = 0;
  if ((pppppppuVar10 != (undefined8 *******)0x0) &&
     (iVar5 = 0, &local_350 != (undefined8 ********)pppppppuVar10)) {
    iVar5 = *(int *)(pppppppuVar10 + 1);
    _Src = *pppppppuVar10;
    local_348 = CONCAT44(local_348._4_4_,iVar5);
    if (iVar5 == 0) {
      pppppppuVar19 = (undefined8 *******)0x0;
      iVar5 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_350,iVar5,0);
      pppppppuVar19 = local_350;
      _guard_xfg_dispatch_icall_nop(local_350,_Src,(longlong)iVar5 * 2);
      iVar5 = (int)local_348;
    }
  }
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  if (iVar5 < 2) {
    if (pppppppuVar19 != (undefined8 *******)0x0) {
      FMemory::Free(pppppppuVar19);
    }
    if (local_258 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
    if (piVar23 != (int *)0x0) {
      FMemory::Free(piVar23);
    }
    if (piVar22 != (int *)0x0) {
      FMemory::Free(piVar22);
    }
    if (local_340 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_1404f9010(&local_148);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar16 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar22 = (int *)((longlong)plVar16 + 0xc);
        iVar5 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    if (*local_270 != 0) {
      FMemory::Free();
    }
    lVar11 = *local_390;
    goto LAB_142afbc42;
  }
  local_3b8 = &DAT_143f3eda8;
  if (local_250 != 0) {
    local_3b8 = local_258;
  }
  puVar21 = &DAT_143f3eda8;
  if (local_338 != 0) {
    puVar21 = local_340;
  }
  pppppppuVar10 = (undefined8 *******)&DAT_143f3eda8;
  if (iVar5 != 0) {
    pppppppuVar10 = pppppppuVar19;
  }
  FString::PrintfImpl(local_1c0,L"%ls%ls%ls",pppppppuVar10,puVar21);
  local_288 = FUN_142afcc00;
  plVar14 = (longlong *)0x0;
  uStack_280 = 0;
  local_198 = 0x42afcc00;
  uStack_194 = 1;
  uStack_190 = 0;
  uStack_18c = uStack_27c;
  uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_308[10] + 0x20,local_188);
  FUN_1404f5700(&local_320,uVar8,&local_198);
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_180 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    piVar22 = local_360;
    piVar23 = local_388;
    if ((int)lVar11 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar22 = (int *)((longlong)local_180 + 0xc);
      iVar5 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      piVar22 = local_360;
      piVar23 = local_388;
      if (iVar5 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
        piVar22 = local_360;
        piVar23 = local_388;
      }
    }
  }
  lVar11 = operator_new(0x170);
  plVar12 = plVar14;
  if (lVar11 != 0) {
    plVar12 = (longlong *)FUN_142af8bf0(lVar11);
  }
  plVar13 = (longlong *)operator_new(0x18);
  if (plVar13 != (longlong *)0x0) {
    *(undefined4 *)(plVar13 + 1) = 1;
    *plVar13 = (longlong)&PTR_FUN_1455345d0;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    plVar13[2] = (longlong)plVar12;
    plVar14 = plVar13;
  }
  local_370 = plVar12;
  local_368 = plVar14;
  SharedPointerInternals::EnableSharedFromThis(&local_370,plVar12,plVar12);
  plVar14 = local_370;
  plVar12 = local_370 + 0x11;
  if (plVar12 != local_158) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    *plVar12 = 0;
    plVar14[0x12] = 0;
  }
  plVar12 = local_320;
  plVar14 = local_370;
  pplVar20 = (longlong **)(local_370 + 0x26);
  if (&local_320 != pplVar20) {
    if ((local_318 == 0) || (local_320 == (longlong *)0x0)) {
      if (((int)local_370[0x27] != 0) && (plVar13 = *pplVar20, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar20 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar20,0,0);
          *pplVar20 = plVar13;
        }
        *(undefined4 *)(plVar14 + 0x27) = 0;
      }
    }
    else {
      (**(code **)(*local_320 + 0x30))(local_320,pplVar20);
    }
  }
  FString::operator=(local_370 + 4,local_310);
  puVar9 = local_278;
  if ((local_110 == 1) || (local_110 == 4)) {
    if (1 < *(int *)(local_278 + 1)) {
      local_3a8 = (undefined4 *)0x0;
      local_3a0 = 0;
      cVar4 = FString::StartsWith(local_278,&DAT_1456ad374,1);
      if (((cVar4 == '\0') && (cVar4 = FString::StartsWith(puVar9,&DAT_1456ae470,1), cVar4 == '\0'))
         && (local_3a8 != &DAT_1456ad3dc)) {
        iVar5 = local_3a0._4_4_;
        if (local_3a0._4_4_ != 2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3a8,2);
          iVar5 = local_3a0._4_4_;
        }
        iVar6 = (int)local_3a0 + 2;
        local_3a0 = CONCAT44(local_3a0._4_4_,iVar6);
        if (iVar5 < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8);
        }
        *local_3a8 = 0x22;
      }
      uVar2 = local_3a0;
      iVar5 = *(int *)(puVar9 + 1) + -1;
      local_310 = (void *)*puVar9;
      if (*(int *)(puVar9 + 1) == 0) {
        iVar5 = 0;
      }
      if (iVar5 != 0) {
        iVar6 = (int)local_3a0;
        lVar11 = (longlong)(int)local_3a0;
        iVar7 = (uint)((int)local_3a0 == 0) + (int)local_3a0 + iVar5;
        local_3a0 = CONCAT44(local_3a0._4_4_,iVar7);
        if (local_3a0._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,uVar2 & 0xffffffff);
        }
        _Dst = (void *)((longlong)local_3a8 + (lVar11 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,local_310,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
        puVar9 = local_278;
      }
      cVar4 = FString::EndsWith(puVar9,&DAT_1456ad4fc,1);
      uVar2 = local_3a0;
      if (cVar4 == '\0') {
        iVar5 = (int)local_3a0;
        lVar11 = (longlong)(int)local_3a0;
        iVar6 = (2 - (uint)((int)local_3a0 != 0)) + (int)local_3a0;
        local_3a0 = CONCAT44(local_3a0._4_4_,iVar6);
        if (local_3a0._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,uVar2 & 0xffffffff);
        }
        puVar21 = (undefined2 *)((longlong)local_3a8 + (lVar11 - (ulonglong)(iVar5 != 0)) * 2);
        *puVar21 = 0x22;
        puVar21[1] = 0;
      }
      local_308[6] = 0;
      local_308[7] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_308 + 6,0);
      local_3b8 = (undefined2 *)CONCAT62(local_3b8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_308[6],0xe,"If-None-Match");
      local_1e8 = &local_3a8;
      local_1f0 = local_308 + 6;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                (local_370 + 0x18,local_230,&local_1f0,0);
      if (local_308[6] != 0) {
        FMemory::Free();
      }
      if (local_3a8 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
    if (1 < *(int *)(param_8 + 8)) {
      local_308[0] = 0;
      local_308[1] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_308,0);
      local_3b8 = (undefined2 *)CONCAT62(local_3b8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_308[0],0x12,"If-Modified-Since");
      local_1e0 = local_308;
      local_1d8 = param_8;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                (local_370 + 0x18,local_228,&local_1e0,0);
      if (local_308[0] != 0) {
        FMemory::Free();
      }
    }
  }
  pcVar15 = (code *)FUN_142ae7d40();
  local_398[0] = (*pcVar15)(&local_148,local_1c0,&local_370);
  if (local_398[0] != 0) {
    local_1d0 = local_398;
    local_1c8 = local_378;
    FUN_142ab70b0(local_308[10] + 0x30,local_22c,&local_1d0,0);
  }
  plVar14 = local_368;
  uVar3 = local_398[0];
  if (local_368 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_368 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    piVar22 = local_360;
    piVar23 = local_388;
    plVar12 = local_320;
    if ((int)lVar11 == 1) {
      (**(code **)*local_368)(local_368);
      LOCK();
      piVar22 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      piVar22 = local_360;
      piVar23 = local_388;
      plVar12 = local_320;
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
        piVar22 = local_360;
        piVar23 = local_388;
        plVar12 = local_320;
      }
    }
  }
  if (local_318 != 0) {
    if (plVar12 == (longlong *)0x0) goto LAB_142afc1c1;
    (**(code **)(*plVar12 + 0x28))(plVar12,0);
    plVar12 = (longlong *)FMemory::Realloc(plVar12,0,0);
    local_320 = plVar12;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
LAB_142afc1c1:
  if (local_1c0[0] != 0) {
    FMemory::Free();
  }
  if (local_350 != (undefined8 *******)0x0) {
    FMemory::Free(local_350);
  }
  if (local_258 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_b8);
  if (piVar23 != (int *)0x0) {
    FMemory::Free(piVar23);
  }
  if (piVar22 != (int *)0x0) {
    FMemory::Free(piVar22);
  }
  if (local_340 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_148);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar22 = (int *)((longlong)plVar16 + 0xc);
      iVar5 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (*local_270 != 0) {
    FMemory::Free();
  }
  if (*local_390 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_378);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_328);
  return uVar3;
LAB_142afb872:
  if (local_388 != (int *)0x0) {
    FMemory::Free(local_388);
  }
  if (piVar22 != (int *)0x0) {
    FMemory::Free(piVar22);
  }
  if (local_340 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_148);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar22 = (int *)((longlong)plVar16 + 0xc);
      iVar5 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  lVar11 = *local_390;
LAB_142afbc42:
  if (lVar11 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_378);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_328);
  return 0;
}



// FUNCTION 142afc450 FUN_142afc450 body=25 status=ok
// SIG undefined FUN_142afc450(void)

undefined8 FUN_142afc450(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142afc45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa0))();
    return uVar1;
  }
  return 2;
}



// FUNCTION 142afc470 FUN_142afc470 body=522 status=ok
// SIG undefined FUN_142afc470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142afc470(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  size_t _Size;
  longlong lVar5;
  short *psVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [32];
  short *local_168;
  int local_160;
  int local_15c;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_160 = *(int *)(param_1 + 0xa0);
  _Size = (size_t)local_160;
  _Src = *(void **)(param_1 + 0x98);
  psVar6 = (short *)0x0;
  local_168 = (short *)0x0;
  if (local_160 == 0) {
    local_15c = 0;
    iVar4 = local_160;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_168,local_160,0);
    psVar6 = local_168;
    _guard_xfg_dispatch_icall_nop(local_168,_Src,_Size);
    iVar4 = local_160;
  }
  local_160 = iVar4 + 1;
  if (local_15c < local_160) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_168,iVar4);
    psVar6 = local_168;
  }
  local_58 = (short *)0x0;
  lVar5 = -1;
  *(undefined1 *)((longlong)iVar4 + (longlong)psVar6) = 0;
  if (psVar6 == (short *)0x0) {
    local_50 = (short *)0x0;
    local_48 = 0;
    goto LAB_142afc5eb;
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar8 = uVar7;
    uVar7 = uVar8 + 1;
  } while (*(char *)((longlong)psVar6 + uVar7) != '\0');
  local_168 = (short *)((ulonglong)local_168 & 0xffffffff00000000);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_168,0x7fffffff,psVar6,uVar7 & 0xffffffff);
  local_48 = (int)local_168;
  uVar1 = (int)local_168 + 1;
  if (uVar1 < 0x81) {
    if (local_58 != (short *)0x0) {
      lVar3 = 0;
LAB_142afc593:
      local_58 = (short *)FMemory::Realloc(local_58,lVar3,0);
    }
  }
  else if ((local_58 != (short *)0x0) || (uVar1 != 0)) {
    lVar3 = (longlong)(int)uVar1 * 2;
    goto LAB_142afc593;
  }
  local_168 = local_158;
  if (local_58 != (short *)0x0) {
    local_168 = local_58;
  }
  local_50 = local_168;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_168,uVar1,psVar6,(int)uVar8 + 2);
LAB_142afc5eb:
  psVar2 = local_50;
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (local_50[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    *(int *)(param_2 + 1) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar2,(longlong)iVar4 * 2);
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  if (psVar6 != (short *)0x0) {
    FMemory::Free(psVar6);
  }
  return param_2;
}



// FUNCTION 142afc750 FUN_142afc750 body=240 status=ok
// SIG undefined FUN_142afc750(void)

undefined8 *
FUN_142afc750(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *****_Src;
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  undefined4 uVar3;
  undefined8 ******ppppppuVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined8 *****local_28;
  int local_20;
  undefined4 local_1c;
  
  ppppppuVar4 = (undefined8 ******)0x0;
  local_28 = (undefined8 ******)0x0;
  uVar3 = 0;
  local_1c = 0;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res8);
  ppppppuVar2 = ppppppuVar4;
  if (local_res8[0] != -1) {
    ppppppuVar2 = (undefined8 ******)
                  (*(longlong *)(param_1 + 0x38) + (longlong)local_res8[0] * 0x28);
  }
  ppppppuVar1 = ppppppuVar2 + 2;
  if (ppppppuVar2 == (undefined8 ******)0x0) {
    ppppppuVar1 = ppppppuVar4;
  }
  if ((ppppppuVar1 != (undefined8 ******)0x0) && (&local_28 != ppppppuVar1)) {
    local_20 = *(int *)(ppppppuVar1 + 1);
    lVar5 = (longlong)local_20;
    _Src = *ppppppuVar1;
    if (local_20 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      ppppppuVar4 = (undefined8 ******)local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 * 2);
      uVar3 = local_1c;
    }
    if ((local_20 != 0) && (0 < local_20 + -1)) {
      *param_2 = ppppppuVar4;
      *(int *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      return param_2;
    }
  }
  FString::FString(param_2,param_4);
  if (ppppppuVar4 != (undefined8 ******)0x0) {
    FMemory::Free(ppppppuVar4);
  }
  return param_2;
}



// FUNCTION 142afc840 FUN_142afc840 body=954 status=ok
// SIG undefined FUN_142afc840(void)

void FUN_142afc840(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar4 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar4;
  iVar5 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar5 == 0x130) {
      iVar5 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) {
        return;
      }
      lVar6 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar6 = param_1 + 0x68;
      }
      iVar2 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)iVar5) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar6 = *(longlong *)(param_1 + 0x30);
      iVar7 = iVar2;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar6) != iVar5) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar6);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 == -1) {
        return;
      }
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142afc93e:
          piVar8 = (int *)0x0;
LAB_142afc940:
          FUN_142abcb30(piVar8 + 2,param_2,0x130,&local_28);
          plVar3 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_20 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_20)(plStack_20);
              LOCK();
              piVar8 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar8 = (int *)((longlong)iVar2 * 0x20 + lVar6);
        if (*piVar8 == iVar5) {
          if (iVar2 != -1) goto LAB_142afc940;
          goto LAB_142afc93e;
        }
        iVar2 = piVar8[6];
      } while( true );
    }
    if (iVar5 == 200) {
      lVar6 = operator_new(0x40);
      if (lVar6 == 0) {
        local_38 = (longlong *)0x0;
      }
      else {
        local_38 = (longlong *)FUN_142b21a80(lVar6);
      }
      plStack_30 = (longlong *)operator_new(0x18);
      if (plStack_30 != (longlong *)0x0) {
        *(undefined4 *)(plStack_30 + 1) = 1;
        *plStack_30 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_30 + 0xc) = 1;
        plStack_30[2] = (longlong)local_38;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
      plVar3 = plStack_30;
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))(local_38,param_4);
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar6 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar6 = param_1 + 0x68;
          }
          iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar5 != -1) {
            do {
              if (*(int *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar5 != -1) {
                  local_18 = local_38;
                  plStack_10 = plStack_30;
                  if (plStack_30 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142afcb0c;
                  lVar6 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar6 = param_1 + 0x68;
                  }
                  iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar5 == -1) goto LAB_142afcb0c;
                  goto LAB_142afcaf0;
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar5 != -1);
          }
        }
        goto LAB_142afcb6c;
      }
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar8 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  FUN_142abf8f0(param_1,param_2);
  return;
  while (iVar5 = piVar8[6], iVar5 != -1) {
LAB_142afcaf0:
    piVar8 = (int *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar8 == *(int *)(*param_2 + 8)) {
      if (iVar5 != -1) goto LAB_142afcb0e;
      break;
    }
  }
LAB_142afcb0c:
  piVar8 = (int *)0x0;
LAB_142afcb0e:
  FUN_142abcb30(piVar8 + 2,param_2,200,&local_18);
  plVar3 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar8 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
LAB_142afcb6c:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar8 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142afcc00 FUN_142afcc00 body=2829 status=ok
// SIG undefined FUN_142afcc00(void)

void FUN_142afcc00(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *local_b8;
  undefined8 *puStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar5 = param_1 + 0x68;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142afccfe:
          piVar7 = (int *)0x0;
LAB_142afcd00:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_68);
          plVar8 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_60 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar7 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142afcd00;
          goto LAB_142afccfe;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 == 200) {
      lVar5 = operator_new(0x108);
      if (lVar5 == 0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = (longlong *)FUN_142b21570(lVar5);
      }
      plStack_70 = (longlong *)operator_new(0x18);
      if (plStack_70 != (longlong *)0x0) {
        *(undefined4 *)(plStack_70 + 1) = 1;
        *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
        plStack_70[2] = (longlong)local_78;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      plVar8 = plStack_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))(local_78,param_4);
        plVar8 = plStack_70;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_18 = local_78;
                  plStack_10 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142afd61c;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142afd61c;
                  goto LAB_142afd600;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142afd67e;
      }
    }
    else if (iVar4 == 400) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_88 = (longlong *)0x0;
      }
      else {
        local_88 = (longlong *)FUN_142b21310(lVar5);
      }
      plStack_80 = (longlong *)operator_new(0x18);
      if (plStack_80 != (longlong *)0x0) {
        *(undefined4 *)(plStack_80 + 1) = 1;
        *plStack_80 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
        plStack_80[2] = (longlong)local_88;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
      plVar8 = plStack_80;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))(local_88,param_4);
        plVar8 = plStack_80;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_28 = local_88;
                  plStack_20 = plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142afd44c;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142afd44c;
                  goto LAB_142afd430;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142afd67e;
      }
    }
    else if (iVar4 == 0x191) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_98 = (longlong *)0x0;
      }
      else {
        local_98 = (longlong *)FUN_142b21310(lVar5);
      }
      plStack_90 = (longlong *)operator_new(0x18);
      if (plStack_90 != (longlong *)0x0) {
        *(undefined4 *)(plStack_90 + 1) = 1;
        *plStack_90 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
        plStack_90[2] = (longlong)local_98;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
      plVar8 = plStack_90;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))(local_98,param_4);
        plVar8 = plStack_90;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_38 = local_98;
                  plStack_30 = plStack_90;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142afd27c;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142afd27c;
                  goto LAB_142afd260;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142afd67e;
      }
    }
    else {
      if (iVar4 != 0x193) {
        if (iVar4 == 500) {
          lVar5 = operator_new(0x30);
          if (lVar5 == 0) {
            local_b8 = (longlong *)0x0;
          }
          else {
            local_b8 = (longlong *)FUN_142b21310(lVar5);
          }
          puStack_b0 = (undefined8 *)operator_new(0x18);
          if (puStack_b0 != (undefined8 *)0x0) {
            *(undefined4 *)(puStack_b0 + 1) = 1;
            *puStack_b0 = &PTR_FUN_143f3f2e0;
            *(undefined4 *)((longlong)puStack_b0 + 0xc) = 1;
            puStack_b0[2] = local_b8;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
            if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
              lVar5 = *(longlong *)(param_1 + 0x70);
              if (*(longlong *)(param_1 + 0x70) == 0) {
                lVar5 = param_1 + 0x68;
              }
              iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                       (longlong)*(int *)(*param_2 + 8)) * 4);
              if (iVar4 != -1) {
                while (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) !=
                       *(int *)(*param_2 + 8)) {
                  iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
                  if (iVar4 == -1) {
                    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                              (&local_b8);
                    return;
                  }
                }
                if (iVar4 != -1) {
                  local_58 = local_b8;
                  puStack_50 = puStack_b0;
                  if (puStack_b0 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puStack_b0 + 1) = *(int *)(puStack_b0 + 1) + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
                    lVar5 = *(longlong *)(param_1 + 0x70);
                    if (*(longlong *)(param_1 + 0x70) == 0) {
                      lVar5 = param_1 + 0x68;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 != -1) {
                      do {
                        piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
                        if (*piVar7 == *(int *)(*param_2 + 8)) {
                          if (iVar4 != -1) goto LAB_142afcf00;
                          break;
                        }
                        iVar4 = piVar7[6];
                      } while (iVar4 != -1);
                    }
                  }
                  piVar7 = (int *)0x0;
LAB_142afcf00:
                  FUN_142abcb30(piVar7 + 2,param_2,500,&local_58);
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_58);
                  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
                }
              }
            }
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
            return;
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
        }
        goto LAB_142afd6e5;
      }
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_a8 = (longlong *)0x0;
      }
      else {
        local_a8 = (longlong *)FUN_142b21310(lVar5);
      }
      plStack_a0 = (longlong *)operator_new(0x18);
      if (plStack_a0 != (longlong *)0x0) {
        *(undefined4 *)(plStack_a0 + 1) = 1;
        *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
        plStack_a0[2] = (longlong)local_a8;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
      plVar8 = plStack_a0;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
        plVar8 = plStack_a0;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_48 = local_a8;
                  plStack_40 = plStack_a0;
                  if (plStack_a0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142afd0ac;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142afd0ac;
                  goto LAB_142afd090;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142afd67e;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar7 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_142afd6e5:
  FUN_142abf8f0(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afd600:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afd61e;
      break;
    }
  }
LAB_142afd61c:
  piVar7 = (int *)0x0;
LAB_142afd61e:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_18);
  plVar8 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_70;
  goto LAB_142afd67e;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afd260:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afd27e;
      break;
    }
  }
LAB_142afd27c:
  piVar7 = (int *)0x0;
LAB_142afd27e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_38);
  plVar8 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_90;
  goto LAB_142afd67e;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afd090:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afd0ae;
      break;
    }
  }
LAB_142afd0ac:
  piVar7 = (int *)0x0;
LAB_142afd0ae:
  FUN_142abcb30(piVar7 + 2,param_2,0x193,&local_48);
  plVar8 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_a0;
  goto LAB_142afd67e;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afd430:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afd44e;
      break;
    }
  }
LAB_142afd44c:
  piVar7 = (int *)0x0;
LAB_142afd44e:
  FUN_142abcb30(piVar7 + 2,param_2,400,&local_28);
  plVar8 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_80;
LAB_142afd67e:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142afd710 FUN_142afd710 body=1916 status=ok
// SIG undefined FUN_142afd710(void)

void FUN_142afd710(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar5 = param_1 + 0xb8;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x80);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142afd81e:
          piVar7 = (int *)0x0;
LAB_142afd820:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_48);
          plVar9 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_40 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_40)(plStack_40);
              LOCK();
              piVar7 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x80),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142afd820;
          goto LAB_142afd81e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 == 200) {
      lVar5 = operator_new(0x18);
      if (lVar5 == 0) {
        local_58 = (longlong *)0x0;
      }
      else {
        local_58 = (longlong *)FTickAnimationPlayers::FTickAnimationPlayers(lVar5);
      }
      plStack_50 = (longlong *)operator_new(0x18);
      if (plStack_50 != (longlong *)0x0) {
        *(undefined4 *)(plStack_50 + 1) = 1;
        *plStack_50 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_50 + 0xc) = 1;
        plStack_50[2] = (longlong)local_58;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
      plVar9 = plStack_50;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))(local_58,param_4);
        plVar8 = (longlong *)(param_1 + 0x80);
        plVar9 = plStack_50;
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar5 = param_1 + 0xb8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_18 = local_58;
                  plStack_10 = plStack_50;
                  if (plStack_50 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_142afdd9c;
                  lVar5 = *(longlong *)(param_1 + 0xc0);
                  if (*(longlong *)(param_1 + 0xc0) == 0) {
                    lVar5 = param_1 + 0xb8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142afdd9c;
                  goto LAB_142afdd80;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142afddfd;
      }
    }
    else if (iVar4 == 0x191) {
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)FUN_142b21cf0(lVar5);
      }
      plStack_60 = (longlong *)operator_new(0x18);
      if (plStack_60 != (longlong *)0x0) {
        *(undefined4 *)(plStack_60 + 1) = 1;
        *plStack_60 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
        plStack_60[2] = (longlong)local_68;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
      plVar9 = plStack_60;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))(local_68,param_4);
        plVar8 = (longlong *)(param_1 + 0x80);
        plVar9 = plStack_60;
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar5 = param_1 + 0xb8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_28 = local_68;
                  plStack_20 = plStack_60;
                  if (plStack_60 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_142afdbcc;
                  lVar5 = *(longlong *)(param_1 + 0xc0);
                  if (*(longlong *)(param_1 + 0xc0) == 0) {
                    lVar5 = param_1 + 0xb8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142afdbcc;
                  goto LAB_142afdbb0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142afddfd;
      }
    }
    else {
      if (iVar4 != 500) goto LAB_142afde64;
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = (longlong *)FUN_142b21cf0(lVar5);
      }
      plStack_70 = (longlong *)operator_new(0x18);
      if (plStack_70 != (longlong *)0x0) {
        *(undefined4 *)(plStack_70 + 1) = 1;
        *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
        plStack_70[2] = (longlong)local_78;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      plVar9 = plStack_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))(local_78,param_4);
        plVar8 = (longlong *)(param_1 + 0x80);
        plVar9 = plStack_70;
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar5 = param_1 + 0xb8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_38 = local_78;
                  plStack_30 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_142afd9fc;
                  lVar5 = *(longlong *)(param_1 + 0xc0);
                  if (*(longlong *)(param_1 + 0xc0) == 0) {
                    lVar5 = param_1 + 0xb8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142afd9fc;
                  goto LAB_142afd9e0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142afddfd;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar7 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_142afde64:
  FUN_142ac0580(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afdd80:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afdd9e;
      break;
    }
  }
LAB_142afdd9c:
  piVar7 = (int *)0x0;
LAB_142afdd9e:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_18);
  plVar9 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_50;
  goto LAB_142afddfd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afdbb0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afdbce;
      break;
    }
  }
LAB_142afdbcc:
  piVar7 = (int *)0x0;
LAB_142afdbce:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_28);
  plVar9 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_60;
  goto LAB_142afddfd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afd9e0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afd9fe;
      break;
    }
  }
LAB_142afd9fc:
  piVar7 = (int *)0x0;
LAB_142afd9fe:
  FUN_142abcb30(piVar7 + 2,param_2,500,&local_38);
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_70;
LAB_142afddfd:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142afde90 FUN_142afde90 body=3289 status=ok
// SIG undefined FUN_142afde90(void)

void FUN_142afde90(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong lStack_20;
  longlong *local_18;
  undefined8 *puStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x128) == *(int *)(param_1 + 0x154)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x160);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        lVar5 = param_1 + 0x158;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x120);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142afdf9e:
          piVar7 = (int *)0x0;
LAB_142afdfa0:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_78);
          plVar10 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_70 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar7 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x120),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142afdfa0;
          goto LAB_142afdf9e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 < 0x1a7) {
      if (iVar4 == 0x1a6) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_a8 = (longlong *)0x0;
        }
        else {
          local_a8 = (longlong *)FUN_142b21cf0(lVar5);
        }
        plStack_a0 = (longlong *)operator_new(0x18);
        if (plStack_a0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_a0 + 1) = 1;
          *plStack_a0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_a0 + 0xc) = 1;
          plStack_a0[2] = (longlong)local_a8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
        plVar10 = plStack_a0;
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
          plVar9 = (longlong *)(param_1 + 0x120);
          plVar10 = plStack_a0;
          if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
            lVar5 = *(longlong *)(param_1 + 0x160);
            if (*(longlong *)(param_1 + 0x160) == 0) {
              lVar5 = param_1 + 0x158;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_38 = local_a8;
                    plStack_30 = plStack_a0;
                    if (plStack_a0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x128) == *(int *)(param_1 + 0x154)) goto LAB_142afe78c;
                    lVar5 = *(longlong *)(param_1 + 0x160);
                    if (*(longlong *)(param_1 + 0x160) == 0) {
                      lVar5 = param_1 + 0x158;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142afe78c;
                    goto LAB_142afe770;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142afe59d;
        }
      }
      else if (iVar4 == 0xc9) {
        lVar5 = operator_new(0x20);
        if (lVar5 == 0) {
          local_b8 = (longlong *)0x0;
        }
        else {
          local_b8 = (longlong *)FUN_142b21260(lVar5);
        }
        plStack_b0 = (longlong *)operator_new(0x18);
        if (plStack_b0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_b0 + 1) = 1;
          *plStack_b0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_b0 + 0xc) = 1;
          plStack_b0[2] = (longlong)local_b8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
        plVar10 = plStack_b0;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
          plVar9 = (longlong *)(param_1 + 0x120);
          plVar10 = plStack_b0;
          if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
            lVar5 = *(longlong *)(param_1 + 0x160);
            if (*(longlong *)(param_1 + 0x160) == 0) {
              lVar5 = param_1 + 0x158;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_48 = local_b8;
                    plStack_40 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x128) == *(int *)(param_1 + 0x154)) goto LAB_142afe53c;
                    lVar5 = *(longlong *)(param_1 + 0x160);
                    if (*(longlong *)(param_1 + 0x160) == 0) {
                      lVar5 = param_1 + 0x158;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142afe53c;
                    goto LAB_142afe520;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142afe59d;
        }
      }
      else if (iVar4 == 400) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_c8 = (longlong *)0x0;
        }
        else {
          local_c8 = (longlong *)FUN_142b21cf0(lVar5);
        }
        plStack_c0 = (longlong *)operator_new(0x18);
        if (plStack_c0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_c0 + 1) = 1;
          *plStack_c0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_c0 + 0xc) = 1;
          plStack_c0[2] = (longlong)local_c8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
        plVar10 = plStack_c0;
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))(local_c8,param_4);
          plVar9 = (longlong *)(param_1 + 0x120);
          plVar10 = plStack_c0;
          if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
            lVar5 = *(longlong *)(param_1 + 0x160);
            if (*(longlong *)(param_1 + 0x160) == 0) {
              lVar5 = param_1 + 0x158;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_58 = local_c8;
                    plStack_50 = plStack_c0;
                    if (plStack_c0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x128) == *(int *)(param_1 + 0x154)) goto LAB_142afe36c;
                    lVar5 = *(longlong *)(param_1 + 0x160);
                    if (*(longlong *)(param_1 + 0x160) == 0) {
                      lVar5 = param_1 + 0x158;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142afe36c;
                    goto LAB_142afe350;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142afe59d;
        }
      }
      else {
        if (iVar4 != 0x191) goto LAB_142afeb41;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_d8 = (longlong *)0x0;
        }
        else {
          local_d8 = (longlong *)FUN_142b21cf0(lVar5);
        }
        plStack_d0 = (longlong *)operator_new(0x18);
        if (plStack_d0 != (longlong *)0x0) {
          *(undefined4 *)(plStack_d0 + 1) = 1;
          *plStack_d0 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plStack_d0 + 0xc) = 1;
          plStack_d0[2] = (longlong)local_d8;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
        plVar10 = plStack_d0;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,param_4);
          plVar9 = (longlong *)(param_1 + 0x120);
          plVar10 = plStack_d0;
          if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
            lVar5 = *(longlong *)(param_1 + 0x160);
            if (*(longlong *)(param_1 + 0x160) == 0) {
              lVar5 = param_1 + 0x158;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              do {
                if (*(int *)((longlong)iVar4 * 0x20 + *plVar9) == *(int *)(*param_2 + 8)) {
                  if (iVar4 != -1) {
                    local_68 = local_d8;
                    plStack_60 = plStack_d0;
                    if (plStack_d0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x128) == *(int *)(param_1 + 0x154)) goto LAB_142afe19c;
                    lVar5 = *(longlong *)(param_1 + 0x160);
                    if (*(longlong *)(param_1 + 0x160) == 0) {
                      lVar5 = param_1 + 0x158;
                    }
                    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar4 == -1) goto LAB_142afe19c;
                    goto LAB_142afe180;
                  }
                  break;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar9);
              } while (iVar4 != -1);
            }
          }
          goto LAB_142afe59d;
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar7 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    else {
      if (iVar4 == 0x1ad) {
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_88 = (longlong *)0x0;
        }
        else {
          local_88 = (longlong *)FUN_142b21cf0(lVar5);
        }
        puStack_80 = (undefined8 *)operator_new(0x18);
        if (puStack_80 != (undefined8 *)0x0) {
          *(undefined4 *)(puStack_80 + 1) = 1;
          *puStack_80 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puStack_80 + 0xc) = 1;
          puStack_80[2] = local_88;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))(local_88,param_4);
          plVar10 = (longlong *)(param_1 + 0x120);
          if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
            lVar5 = *(longlong *)(param_1 + 0x160);
            if (*(longlong *)(param_1 + 0x160) == 0) {
              lVar5 = param_1 + 0x158;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_88);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_18 = local_88;
                puStack_10 = puStack_80;
                if (puStack_80 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puStack_80 + 1) = *(int *)(puStack_80 + 1) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
                  lVar5 = *(longlong *)(param_1 + 0x160);
                  if (*(longlong *)(param_1 + 0x160) == 0) {
                    lVar5 = param_1 + 0x158;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142afeb00;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142afeb00:
                FUN_142abcb30(piVar7 + 2,param_2,0x1ad,&local_18);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_18)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_88);
          return;
        }
        pplVar8 = &local_88;
      }
      else {
        if (iVar4 != 0x1f7) goto LAB_142afeb41;
        lVar5 = operator_new(0x38);
        if (lVar5 == 0) {
          local_98 = (longlong *)0x0;
        }
        else {
          local_98 = (longlong *)FUN_142b21cf0(lVar5);
        }
        lStack_90 = FUN_1404f6ae0(local_98);
        SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
        if (local_98 != (longlong *)0x0) {
          (**(code **)(*local_98 + 0x10))(local_98,param_4);
          plVar10 = (longlong *)(param_1 + 0x120);
          if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
            lVar5 = *(longlong *)(param_1 + 0x160);
            if (*(longlong *)(param_1 + 0x160) == 0) {
              lVar5 = param_1 + 0x158;
            }
            iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar4 != -1) {
              while (*(int *)((longlong)iVar4 * 0x20 + *plVar10) != *(int *)(*param_2 + 8)) {
                iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar10);
                if (iVar4 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_98);
                  return;
                }
              }
              if (iVar4 != -1) {
                local_28 = local_98;
                lStack_20 = lStack_90;
                if (lStack_90 != 0) {
                  LOCK();
                  *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
                  lVar5 = *(longlong *)(param_1 + 0x160);
                  if (*(longlong *)(param_1 + 0x160) == 0) {
                    lVar5 = param_1 + 0x158;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x168) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 != -1) {
                    do {
                      piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar10);
                      if (*piVar7 == *(int *)(*param_2 + 8)) {
                        if (iVar4 != -1) goto LAB_142afe951;
                        break;
                      }
                      iVar4 = piVar7[6];
                    } while (iVar4 != -1);
                  }
                }
                piVar7 = (int *)0x0;
LAB_142afe951:
                FUN_142abcb30(piVar7 + 2,param_2,0x1f7,&local_28);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_28)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar10,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_98);
          return;
        }
        pplVar8 = &local_98;
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(pplVar8);
    }
  }
LAB_142afeb41:
  FUN_142ac1960(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afe770:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afe78e;
      break;
    }
  }
LAB_142afe78c:
  piVar7 = (int *)0x0;
LAB_142afe78e:
  FUN_142abcb30(piVar7 + 2,param_2,0x1a6,&local_38);
  plVar10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_a0;
  goto LAB_142afe59d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afe350:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afe36e;
      break;
    }
  }
LAB_142afe36c:
  piVar7 = (int *)0x0;
LAB_142afe36e:
  FUN_142abcb30(piVar7 + 2,param_2,400,&local_58);
  plVar10 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_c0;
  goto LAB_142afe59d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afe180:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afe19e;
      break;
    }
  }
LAB_142afe19c:
  piVar7 = (int *)0x0;
LAB_142afe19e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_68);
  plVar10 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_d0;
  goto LAB_142afe59d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142afe520:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar9);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142afe53e;
      break;
    }
  }
LAB_142afe53c:
  piVar7 = (int *)0x0;
LAB_142afe53e:
  FUN_142abcb30(piVar7 + 2,param_2,0xc9,&local_48);
  plVar10 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar9,*(undefined4 *)(*param_2 + 8));
  plVar10 = plStack_b0;
LAB_142afe59d:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 142afeb70 FUN_142afeb70 body=3754 status=ok
// SIG undefined FUN_142afeb70(void)

void FUN_142afeb70(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  longlong **pplVar9;
  longlong *plVar10;
  int local_res8 [2];
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong lStack_c0;
  longlong *local_b8;
  longlong lStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong lStack_40;
  longlong *local_38;
  longlong lStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  uVar2 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  iVar3 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar3 == 0x130) {
      iVar3 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) {
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0x1b0);
      if (*(longlong *)(param_1 + 0x1b0) == 0) {
        lVar4 = param_1 + 0x1a8;
      }
      iVar1 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U & (longlong)iVar3) * 4);
      if (iVar1 == -1) {
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0x170);
      iVar7 = iVar1;
      while (*(int *)((longlong)iVar7 * 0x20 + lVar4) != iVar3) {
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar4);
        if (iVar7 == -1) {
          return;
        }
      }
      if (iVar7 == -1) {
        return;
      }
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      do {
        if (iVar1 == -1) {
LAB_142afec7e:
          piVar8 = (int *)0x0;
LAB_142afec81:
          FUN_142abcb30(piVar8 + 2,param_2,0x130,&local_98);
          plVar5 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_90 + 1;
            lVar4 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar8 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x170),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar8 = (int *)((longlong)iVar1 * 0x20 + lVar4);
        if (*piVar8 == iVar3) {
          if (iVar1 != -1) goto LAB_142afec81;
          goto LAB_142afec7e;
        }
        iVar1 = piVar8[6];
      } while( true );
    }
    if (iVar3 < 0x194) {
      if (iVar3 == 0x193) {
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b21cf0(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_d0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_d0 = plVar6;
        }
        local_d8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar5,plVar5);
        plVar5 = plStack_d0;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,param_4);
          plVar6 = (longlong *)(param_1 + 0x170);
          plVar5 = plStack_d0;
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
            lVar4 = *(longlong *)(param_1 + 0x1b0);
            if (*(longlong *)(param_1 + 0x1b0) == 0) {
              lVar4 = param_1 + 0x1a8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_58 = local_d8;
                    plStack_50 = plStack_d0;
                    if (plStack_d0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142aff4ac;
                    lVar4 = *(longlong *)(param_1 + 0x1b0);
                    if (*(longlong *)(param_1 + 0x1b0) == 0) {
                      lVar4 = param_1 + 0x1a8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142aff4ac;
                    goto LAB_142aff490;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142aff2af;
        }
      }
      else if (iVar3 == 200) {
        lVar4 = operator_new(0x28);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b21b40(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_e0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_e0 = plVar6;
        }
        local_e8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_e8,plVar5,plVar5);
        plVar5 = plStack_e0;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x10))(local_e8,param_4);
          plVar6 = (longlong *)(param_1 + 0x170);
          plVar5 = plStack_e0;
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
            lVar4 = *(longlong *)(param_1 + 0x1b0);
            if (*(longlong *)(param_1 + 0x1b0) == 0) {
              lVar4 = param_1 + 0x1a8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_68 = local_e8;
                    plStack_60 = plStack_e0;
                    if (plStack_e0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142aff24c;
                    lVar4 = *(longlong *)(param_1 + 0x1b0);
                    if (*(longlong *)(param_1 + 0x1b0) == 0) {
                      lVar4 = param_1 + 0x1a8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142aff24c;
                    goto LAB_142aff230;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142aff2af;
        }
      }
      else if (iVar3 == 400) {
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b21cf0(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_f0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_f0 = plVar6;
        }
        local_f8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar5,plVar5);
        plVar5 = plStack_f0;
        if (local_f8 != (longlong *)0x0) {
          (**(code **)(*local_f8 + 0x10))(local_f8,param_4);
          plVar6 = (longlong *)(param_1 + 0x170);
          plVar5 = plStack_f0;
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
            lVar4 = *(longlong *)(param_1 + 0x1b0);
            if (*(longlong *)(param_1 + 0x1b0) == 0) {
              lVar4 = param_1 + 0x1a8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_78 = local_f8;
                    plStack_70 = plStack_f0;
                    if (plStack_f0 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142aff06c;
                    lVar4 = *(longlong *)(param_1 + 0x1b0);
                    if (*(longlong *)(param_1 + 0x1b0) == 0) {
                      lVar4 = param_1 + 0x1a8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142aff06c;
                    goto LAB_142aff050;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142aff2af;
        }
      }
      else {
        if (iVar3 != 0x191) goto LAB_142aff9f2;
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b21cf0(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_100 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_100 = plVar6;
        }
        local_108 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_108,plVar5,plVar5);
        plVar5 = plStack_100;
        if (local_108 != (longlong *)0x0) {
          (**(code **)(*local_108 + 0x10))(local_108,param_4);
          plVar6 = (longlong *)(param_1 + 0x170);
          plVar5 = plStack_100;
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
            lVar4 = *(longlong *)(param_1 + 0x1b0);
            if (*(longlong *)(param_1 + 0x1b0) == 0) {
              lVar4 = param_1 + 0x1a8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)((longlong)iVar3 * 0x20 + *plVar6) == *(int *)(*param_2 + 8)) {
                  if (iVar3 != -1) {
                    local_88 = local_108;
                    plStack_80 = plStack_100;
                    if (plStack_100 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
                      UNLOCK();
                    }
                    if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142afee8c;
                    lVar4 = *(longlong *)(param_1 + 0x1b0);
                    if (*(longlong *)(param_1 + 0x1b0) == 0) {
                      lVar4 = param_1 + 0x1a8;
                    }
                    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                             (longlong)*(int *)(*param_2 + 8)) * 4);
                    if (iVar3 == -1) goto LAB_142afee8c;
                    goto LAB_142afee70;
                  }
                  break;
                }
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar6);
              } while (iVar3 != -1);
            }
          }
          goto LAB_142aff2af;
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar5 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar8 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    else {
      if (iVar3 == 0x194) {
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b21cf0(lVar4);
        }
        plVar6 = (longlong *)operator_new(0x18);
        plStack_a0 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
          *(int *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)plVar5;
          plStack_a0 = plVar6;
        }
        local_a8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar5,plVar5);
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x10))(local_a8,param_4);
          plVar5 = (longlong *)(param_1 + 0x170);
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
            lVar4 = *(longlong *)(param_1 + 0x1b0);
            if (*(longlong *)(param_1 + 0x1b0) == 0) {
              lVar4 = param_1 + 0x1a8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              while (*(int *)((longlong)iVar3 * 0x20 + *plVar5) != *(int *)(*param_2 + 8)) {
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar5);
                if (iVar3 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_a8);
                  return;
                }
              }
              if (iVar3 != -1) {
                local_28 = local_a8;
                plStack_20 = plStack_a0;
                if (plStack_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
                  lVar4 = *(longlong *)(param_1 + 0x1b0);
                  if (*(longlong *)(param_1 + 0x1b0) == 0) {
                    lVar4 = param_1 + 0x1a8;
                  }
                  iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar3 != -1) {
                    do {
                      plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *plVar5);
                      if ((int)*plVar6 == *(int *)(*param_2 + 8)) {
                        if (iVar3 != -1) goto LAB_142aff9b1;
                        break;
                      }
                      iVar3 = (int)plVar6[3];
                    } while (iVar3 != -1);
                  }
                }
                plVar6 = plVar10;
LAB_142aff9b1:
                FUN_142abcb30(plVar6 + 1,param_2,0x194,&local_28);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_28)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar5,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a8);
          return;
        }
        pplVar9 = &local_a8;
      }
      else if (iVar3 == 500) {
        lVar4 = operator_new(0x38);
        plVar5 = (longlong *)0x0;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b21cf0(lVar4);
        }
        lStack_b0 = FUN_1404f6ae0(plVar5);
        local_b8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar5,plVar5);
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,param_4);
          plVar5 = (longlong *)(param_1 + 0x170);
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
            lVar4 = *(longlong *)(param_1 + 0x1b0);
            if (*(longlong *)(param_1 + 0x1b0) == 0) {
              lVar4 = param_1 + 0x1a8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              while (*(int *)((longlong)iVar3 * 0x20 + *plVar5) != *(int *)(*param_2 + 8)) {
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar5);
                if (iVar3 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_b8);
                  return;
                }
              }
              if (iVar3 != -1) {
                local_38 = local_b8;
                lStack_30 = lStack_b0;
                if (lStack_b0 != 0) {
                  LOCK();
                  *(int *)(lStack_b0 + 8) = *(int *)(lStack_b0 + 8) + 1;
                  UNLOCK();
                }
                if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
                  lVar4 = *(longlong *)(param_1 + 0x1b0);
                  if (*(longlong *)(param_1 + 0x1b0) == 0) {
                    lVar4 = param_1 + 0x1a8;
                  }
                  iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar3 != -1) {
                    do {
                      plVar10 = (longlong *)((longlong)iVar3 * 0x20 + *plVar5);
                      if ((int)*plVar10 == *(int *)(*param_2 + 8)) {
                        if (iVar3 != -1) goto LAB_142aff7f1;
                        break;
                      }
                      iVar3 = (int)plVar10[3];
                    } while (iVar3 != -1);
                  }
                }
                plVar10 = (longlong *)0x0;
LAB_142aff7f1:
                FUN_142abcb30(plVar10 + 1,param_2,500,&local_38);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_38)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar5,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b8);
          return;
        }
        pplVar9 = &local_b8;
      }
      else {
        if (iVar3 != 0x1f7) goto LAB_142aff9f2;
        lVar4 = operator_new(0x38);
        plVar10 = (longlong *)0x0;
        plVar5 = plVar10;
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142b21cf0(lVar4);
        }
        lStack_c0 = FUN_1404f6ae0(plVar5);
        local_c8 = plVar5;
        SharedPointerInternals::EnableSharedFromThis(&local_c8,plVar5,plVar5);
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))(local_c8,param_4);
          plVar5 = (longlong *)(param_1 + 0x170);
          if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
            lVar4 = *(longlong *)(param_1 + 0x1b0);
            if (*(longlong *)(param_1 + 0x1b0) == 0) {
              lVar4 = param_1 + 0x1a8;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                     (longlong)*(int *)(*param_2 + 8)) * 4);
            if (iVar3 != -1) {
              while (*(int *)((longlong)iVar3 * 0x20 + *plVar5) != *(int *)(*param_2 + 8)) {
                iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *plVar5);
                if (iVar3 == -1) {
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (&local_c8);
                  return;
                }
              }
              if (iVar3 != -1) {
                local_48 = local_c8;
                lStack_40 = lStack_c0;
                if (lStack_c0 != 0) {
                  LOCK();
                  *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
                  UNLOCK();
                }
                FUN_140d2ceb0(plVar5,local_res8,*(undefined4 *)(*param_2 + 8));
                if (local_res8[0] != -1) {
                  plVar10 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar5);
                }
                FUN_142abcb30(plVar10 + 1,param_2,0x1f7,&local_48);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_48)
                ;
                TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                ::Remove(plVar5,*(undefined4 *)(*param_2 + 8));
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_c8);
          return;
        }
        pplVar9 = &local_c8;
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(pplVar9);
    }
  }
LAB_142aff9f2:
  FUN_142ae8a90(param_1,param_2);
  return;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142aff490:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142aff4af;
      break;
    }
  }
LAB_142aff4ac:
  plVar5 = plVar10;
LAB_142aff4af:
  FUN_142abcb30(plVar5 + 1,param_2,0x193,&local_58);
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_50 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_d0;
  goto LAB_142aff2af;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142aff050:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142aff06f;
      break;
    }
  }
LAB_142aff06c:
  plVar5 = plVar10;
LAB_142aff06f:
  FUN_142abcb30(plVar5 + 1,param_2,400,&local_78);
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_70 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_f0;
  goto LAB_142aff2af;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142afee70:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142afee8f;
      break;
    }
  }
LAB_142afee8c:
  plVar5 = plVar10;
LAB_142afee8f:
  FUN_142abcb30(plVar5 + 1,param_2,0x191,&local_88);
  plVar5 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_80 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_100;
  goto LAB_142aff2af;
  while (iVar3 = (int)plVar5[3], iVar3 != -1) {
LAB_142aff230:
    plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
    if ((int)*plVar5 == *(int *)(*param_2 + 8)) {
      if (iVar3 != -1) goto LAB_142aff24f;
      break;
    }
  }
LAB_142aff24c:
  plVar5 = plVar10;
LAB_142aff24f:
  FUN_142abcb30(plVar5 + 1,param_2,200,&local_68);
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_60 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar6,*(undefined4 *)(*param_2 + 8));
  plVar5 = plStack_e0;
LAB_142aff2af:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar8 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142affa20 FUN_142affa20 body=2396 status=ok
// SIG undefined FUN_142affa20(void)

void FUN_142affa20(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 500)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar5 = param_1 + 0x1f8;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x1c0);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142affb2e:
          piVar7 = (int *)0x0;
LAB_142affb30:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_58);
          plVar9 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_50 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar7 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x1c0),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142affb30;
          goto LAB_142affb2e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 == 200) {
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)FUN_142b21bb0(lVar5);
      }
      plStack_60 = (longlong *)operator_new(0x18);
      if (plStack_60 != (longlong *)0x0) {
        *(undefined4 *)(plStack_60 + 1) = 1;
        *plStack_60 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
        plStack_60[2] = (longlong)local_68;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
      plVar9 = plStack_60;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))(local_68,param_4);
        plVar8 = (longlong *)(param_1 + 0x1c0);
        plVar9 = plStack_60;
        if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
          lVar5 = *(longlong *)(param_1 + 0x200);
          if (*(longlong *)(param_1 + 0x200) == 0) {
            lVar5 = param_1 + 0x1f8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_18 = local_68;
                  plStack_10 = plStack_60;
                  if (plStack_60 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 500)) goto LAB_142b0028c;
                  lVar5 = *(longlong *)(param_1 + 0x200);
                  if (*(longlong *)(param_1 + 0x200) == 0) {
                    lVar5 = param_1 + 0x1f8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b0028c;
                  goto LAB_142b00270;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b002ed;
      }
    }
    else if (iVar4 == 0x191) {
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = (longlong *)FUN_142b21cf0(lVar5);
      }
      plStack_70 = (longlong *)operator_new(0x18);
      if (plStack_70 != (longlong *)0x0) {
        *(undefined4 *)(plStack_70 + 1) = 1;
        *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
        plStack_70[2] = (longlong)local_78;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      plVar9 = plStack_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))(local_78,param_4);
        plVar8 = (longlong *)(param_1 + 0x1c0);
        plVar9 = plStack_70;
        if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
          lVar5 = *(longlong *)(param_1 + 0x200);
          if (*(longlong *)(param_1 + 0x200) == 0) {
            lVar5 = param_1 + 0x1f8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_28 = local_78;
                  plStack_20 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 500)) goto LAB_142b000bc;
                  lVar5 = *(longlong *)(param_1 + 0x200);
                  if (*(longlong *)(param_1 + 0x200) == 0) {
                    lVar5 = param_1 + 0x1f8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b000bc;
                  goto LAB_142b000a0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b002ed;
      }
    }
    else if (iVar4 == 500) {
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_88 = (longlong *)0x0;
      }
      else {
        local_88 = (longlong *)FUN_142b21cf0(lVar5);
      }
      plStack_80 = (longlong *)operator_new(0x18);
      if (plStack_80 != (longlong *)0x0) {
        *(undefined4 *)(plStack_80 + 1) = 1;
        *plStack_80 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
        plStack_80[2] = (longlong)local_88;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
      plVar9 = plStack_80;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))(local_88,param_4);
        plVar8 = (longlong *)(param_1 + 0x1c0);
        plVar9 = plStack_80;
        if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
          lVar5 = *(longlong *)(param_1 + 0x200);
          if (*(longlong *)(param_1 + 0x200) == 0) {
            lVar5 = param_1 + 0x1f8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_38 = local_88;
                  plStack_30 = plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 500)) goto LAB_142affeec;
                  lVar5 = *(longlong *)(param_1 + 0x200);
                  if (*(longlong *)(param_1 + 0x200) == 0) {
                    lVar5 = param_1 + 0x1f8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142affeec;
                  goto LAB_142affed0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b002ed;
      }
    }
    else {
      if (iVar4 != 0x1f7) goto LAB_142b00354;
      lVar5 = operator_new(0x38);
      if (lVar5 == 0) {
        local_98 = (longlong *)0x0;
      }
      else {
        local_98 = (longlong *)FUN_142b21cf0(lVar5);
      }
      plStack_90 = (longlong *)operator_new(0x18);
      if (plStack_90 != (longlong *)0x0) {
        *(undefined4 *)(plStack_90 + 1) = 1;
        *plStack_90 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
        plStack_90[2] = (longlong)local_98;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
      plVar9 = plStack_90;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))(local_98,param_4);
        plVar8 = (longlong *)(param_1 + 0x1c0);
        plVar9 = plStack_90;
        if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
          lVar5 = *(longlong *)(param_1 + 0x200);
          if (*(longlong *)(param_1 + 0x200) == 0) {
            lVar5 = param_1 + 0x1f8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_48 = local_98;
                  plStack_40 = plStack_90;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 500)) goto LAB_142affd1c;
                  lVar5 = *(longlong *)(param_1 + 0x200);
                  if (*(longlong *)(param_1 + 0x200) == 0) {
                    lVar5 = param_1 + 0x1f8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x208) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142affd1c;
                  goto LAB_142affd00;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b002ed;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar7 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_142b00354:
  FUN_142ae9bb0(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b00270:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b0028e;
      break;
    }
  }
LAB_142b0028c:
  piVar7 = (int *)0x0;
LAB_142b0028e:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_18);
  plVar9 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_60;
  goto LAB_142b002ed;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142affed0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142affeee;
      break;
    }
  }
LAB_142affeec:
  piVar7 = (int *)0x0;
LAB_142affeee:
  FUN_142abcb30(piVar7 + 2,param_2,500,&local_38);
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_80;
  goto LAB_142b002ed;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142affd00:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142affd1e;
      break;
    }
  }
LAB_142affd1c:
  piVar7 = (int *)0x0;
LAB_142affd1e:
  FUN_142abcb30(piVar7 + 2,param_2,0x1f7,&local_48);
  plVar9 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_90;
  goto LAB_142b002ed;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b000a0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b000be;
      break;
    }
  }
LAB_142b000bc:
  piVar7 = (int *)0x0;
LAB_142b000be:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_28);
  plVar9 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_70;
LAB_142b002ed:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142b00380 FUN_142b00380 body=2396 status=ok
// SIG undefined FUN_142b00380(void)

void FUN_142b00380(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x1b0);
      if (*(longlong *)(param_1 + 0x1b0) == 0) {
        lVar5 = param_1 + 0x1a8;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x170);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142b0048e:
          piVar7 = (int *)0x0;
LAB_142b00490:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_58);
          plVar9 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_50 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar7 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x170),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142b00490;
          goto LAB_142b0048e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 == 200) {
      lVar5 = operator_new(0x28);
      if (lVar5 == 0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)FUN_142b217e0(lVar5);
      }
      plStack_60 = (longlong *)operator_new(0x18);
      if (plStack_60 != (longlong *)0x0) {
        *(undefined4 *)(plStack_60 + 1) = 1;
        *plStack_60 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
        plStack_60[2] = (longlong)local_68;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
      plVar9 = plStack_60;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))(local_68,param_4);
        plVar8 = (longlong *)(param_1 + 0x170);
        plVar9 = plStack_60;
        if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
          lVar5 = *(longlong *)(param_1 + 0x1b0);
          if (*(longlong *)(param_1 + 0x1b0) == 0) {
            lVar5 = param_1 + 0x1a8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_18 = local_68;
                  plStack_10 = plStack_60;
                  if (plStack_60 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142b00bec;
                  lVar5 = *(longlong *)(param_1 + 0x1b0);
                  if (*(longlong *)(param_1 + 0x1b0) == 0) {
                    lVar5 = param_1 + 0x1a8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b00bec;
                  goto LAB_142b00bd0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b00c4d;
      }
    }
    else if (iVar4 == 400) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = (longlong *)FUN_142b212c0(lVar5);
      }
      plStack_70 = (longlong *)operator_new(0x18);
      if (plStack_70 != (longlong *)0x0) {
        *(undefined4 *)(plStack_70 + 1) = 1;
        *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
        plStack_70[2] = (longlong)local_78;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      plVar9 = plStack_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))(local_78,param_4);
        plVar8 = (longlong *)(param_1 + 0x170);
        plVar9 = plStack_70;
        if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
          lVar5 = *(longlong *)(param_1 + 0x1b0);
          if (*(longlong *)(param_1 + 0x1b0) == 0) {
            lVar5 = param_1 + 0x1a8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_28 = local_78;
                  plStack_20 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142b00a1c;
                  lVar5 = *(longlong *)(param_1 + 0x1b0);
                  if (*(longlong *)(param_1 + 0x1b0) == 0) {
                    lVar5 = param_1 + 0x1a8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b00a1c;
                  goto LAB_142b00a00;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b00c4d;
      }
    }
    else if (iVar4 == 0x191) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_88 = (longlong *)0x0;
      }
      else {
        local_88 = (longlong *)FUN_142b212c0(lVar5);
      }
      plStack_80 = (longlong *)operator_new(0x18);
      if (plStack_80 != (longlong *)0x0) {
        *(undefined4 *)(plStack_80 + 1) = 1;
        *plStack_80 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
        plStack_80[2] = (longlong)local_88;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
      plVar9 = plStack_80;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))(local_88,param_4);
        plVar8 = (longlong *)(param_1 + 0x170);
        plVar9 = plStack_80;
        if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
          lVar5 = *(longlong *)(param_1 + 0x1b0);
          if (*(longlong *)(param_1 + 0x1b0) == 0) {
            lVar5 = param_1 + 0x1a8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_38 = local_88;
                  plStack_30 = plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142b0084c;
                  lVar5 = *(longlong *)(param_1 + 0x1b0);
                  if (*(longlong *)(param_1 + 0x1b0) == 0) {
                    lVar5 = param_1 + 0x1a8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b0084c;
                  goto LAB_142b00830;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b00c4d;
      }
    }
    else {
      if (iVar4 != 0x194) goto LAB_142b00cb4;
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_98 = (longlong *)0x0;
      }
      else {
        local_98 = (longlong *)FUN_142b212c0(lVar5);
      }
      plStack_90 = (longlong *)operator_new(0x18);
      if (plStack_90 != (longlong *)0x0) {
        *(undefined4 *)(plStack_90 + 1) = 1;
        *plStack_90 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
        plStack_90[2] = (longlong)local_98;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
      plVar9 = plStack_90;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))(local_98,param_4);
        plVar8 = (longlong *)(param_1 + 0x170);
        plVar9 = plStack_90;
        if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
          lVar5 = *(longlong *)(param_1 + 0x1b0);
          if (*(longlong *)(param_1 + 0x1b0) == 0) {
            lVar5 = param_1 + 0x1a8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_48 = local_98;
                  plStack_40 = plStack_90;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) goto LAB_142b0067c;
                  lVar5 = *(longlong *)(param_1 + 0x1b0);
                  if (*(longlong *)(param_1 + 0x1b0) == 0) {
                    lVar5 = param_1 + 0x1a8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b0067c;
                  goto LAB_142b00660;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b00c4d;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar7 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_142b00cb4:
  FUN_142ae8a90(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b00bd0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b00bee;
      break;
    }
  }
LAB_142b00bec:
  piVar7 = (int *)0x0;
LAB_142b00bee:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_18);
  plVar9 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_60;
  goto LAB_142b00c4d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b00830:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b0084e;
      break;
    }
  }
LAB_142b0084c:
  piVar7 = (int *)0x0;
LAB_142b0084e:
  FUN_142abcb30(piVar7 + 2,param_2,0x191,&local_38);
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_80;
  goto LAB_142b00c4d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b00660:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b0067e;
      break;
    }
  }
LAB_142b0067c:
  piVar7 = (int *)0x0;
LAB_142b0067e:
  FUN_142abcb30(piVar7 + 2,param_2,0x194,&local_48);
  plVar9 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_90;
  goto LAB_142b00c4d;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b00a00:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b00a1e;
      break;
    }
  }
LAB_142b00a1c:
  piVar7 = (int *)0x0;
LAB_142b00a1e:
  FUN_142abcb30(piVar7 + 2,param_2,400,&local_28);
  plVar9 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_70;
LAB_142b00c4d:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142b00ce0 FUN_142b00ce0 body=2381 status=ok
// SIG undefined FUN_142b00ce0(void)

void FUN_142b00ce0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar5 = param_1 + 0x68;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142b00dde:
          piVar7 = (int *)0x0;
LAB_142b00de0:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_58);
          plVar8 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar7 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142b00de0;
          goto LAB_142b00dde;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 == 200) {
      lVar5 = operator_new(0x18);
      if (lVar5 == 0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)FTickAnimationPlayers::FTickAnimationPlayers(lVar5);
      }
      plStack_60 = (longlong *)operator_new(0x18);
      if (plStack_60 != (longlong *)0x0) {
        *(undefined4 *)(plStack_60 + 1) = 1;
        *plStack_60 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
        plStack_60[2] = (longlong)local_68;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
      plVar8 = plStack_60;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))(local_68,param_4);
        plVar8 = plStack_60;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_18 = local_68;
                  plStack_10 = plStack_60;
                  if (plStack_60 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142b0153c;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b0153c;
                  goto LAB_142b01520;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b0159e;
      }
    }
    else if (iVar4 == 400) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = (longlong *)FUN_142b21d50(lVar5);
      }
      plStack_70 = (longlong *)operator_new(0x18);
      if (plStack_70 != (longlong *)0x0) {
        *(undefined4 *)(plStack_70 + 1) = 1;
        *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
        plStack_70[2] = (longlong)local_78;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      plVar8 = plStack_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))(local_78,param_4);
        plVar8 = plStack_70;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_28 = local_78;
                  plStack_20 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142b0136c;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b0136c;
                  goto LAB_142b01350;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b0159e;
      }
    }
    else if (iVar4 == 0x1a6) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_88 = (longlong *)0x0;
      }
      else {
        local_88 = (longlong *)FUN_142b21d50(lVar5);
      }
      plStack_80 = (longlong *)operator_new(0x18);
      if (plStack_80 != (longlong *)0x0) {
        *(undefined4 *)(plStack_80 + 1) = 1;
        *plStack_80 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
        plStack_80[2] = (longlong)local_88;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
      plVar8 = plStack_80;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))(local_88,param_4);
        plVar8 = plStack_80;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_38 = local_88;
                  plStack_30 = plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142b0119c;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b0119c;
                  goto LAB_142b01180;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b0159e;
      }
    }
    else {
      if (iVar4 != 500) goto LAB_142b01605;
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_98 = (longlong *)0x0;
      }
      else {
        local_98 = (longlong *)FUN_142b21d50(lVar5);
      }
      plStack_90 = (longlong *)operator_new(0x18);
      if (plStack_90 != (longlong *)0x0) {
        *(undefined4 *)(plStack_90 + 1) = 1;
        *plStack_90 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
        plStack_90[2] = (longlong)local_98;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
      plVar8 = plStack_90;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))(local_98,param_4);
        plVar8 = plStack_90;
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar5 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar5 = param_1 + 0x68;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30)) ==
                  *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_48 = local_98;
                  plStack_40 = plStack_90;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) goto LAB_142b00fcc;
                  lVar5 = *(longlong *)(param_1 + 0x70);
                  if (*(longlong *)(param_1 + 0x70) == 0) {
                    lVar5 = param_1 + 0x68;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b00fcc;
                  goto LAB_142b00fb0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x30));
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b0159e;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar7 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_142b01605:
  FUN_142abf8f0(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b01520:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b0153e;
      break;
    }
  }
LAB_142b0153c:
  piVar7 = (int *)0x0;
LAB_142b0153e:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_18);
  plVar8 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_60;
  goto LAB_142b0159e;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b01180:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b0119e;
      break;
    }
  }
LAB_142b0119c:
  piVar7 = (int *)0x0;
LAB_142b0119e:
  FUN_142abcb30(piVar7 + 2,param_2,0x1a6,&local_38);
  plVar8 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_80;
  goto LAB_142b0159e;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b00fb0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b00fce;
      break;
    }
  }
LAB_142b00fcc:
  piVar7 = (int *)0x0;
LAB_142b00fce:
  FUN_142abcb30(piVar7 + 2,param_2,500,&local_48);
  plVar8 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_90;
  goto LAB_142b0159e;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b01350:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b0136e;
      break;
    }
  }
LAB_142b0136c:
  piVar7 = (int *)0x0;
LAB_142b0136e:
  FUN_142abcb30(piVar7 + 2,param_2,400,&local_28);
  plVar8 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x30,*(undefined4 *)(*param_2 + 8));
  plVar8 = plStack_70;
LAB_142b0159e:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142b01630 FUN_142b01630 body=2396 status=ok
// SIG undefined FUN_142b01630(void)

void FUN_142b01630(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  uVar3 = FUN_142abc930(param_4);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  iVar4 = FUN_142afb290(*param_2);
  if ((*(char *)(param_1 + 0x18) == '\0') && (*param_4 != 0)) {
    if (iVar4 == 0x130) {
      iVar4 = *(int *)(*param_2 + 8);
      if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar5 = param_1 + 0xb8;
      }
      iVar2 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)iVar4) * 4);
      if (iVar2 == -1) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x80);
      iVar6 = iVar2;
      while (*(int *)((longlong)iVar6 * 0x20 + lVar5) != iVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar5);
        if (iVar6 == -1) {
          return;
        }
      }
      if (iVar6 == -1) {
        return;
      }
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      do {
        if (iVar2 == -1) {
LAB_142b0173e:
          piVar7 = (int *)0x0;
LAB_142b01740:
          FUN_142abcb30(piVar7 + 2,param_2,0x130,&local_58);
          plVar9 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar8 = plStack_50 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar7 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x80),*(undefined4 *)(*param_2 + 8));
          return;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x20 + lVar5);
        if (*piVar7 == iVar4) {
          if (iVar2 != -1) goto LAB_142b01740;
          goto LAB_142b0173e;
        }
        iVar2 = piVar7[6];
      } while( true );
    }
    if (iVar4 == 200) {
      lVar5 = operator_new(0x20);
      if (lVar5 == 0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)FUN_142b213b0(lVar5);
      }
      plStack_60 = (longlong *)operator_new(0x18);
      if (plStack_60 != (longlong *)0x0) {
        *(undefined4 *)(plStack_60 + 1) = 1;
        *plStack_60 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
        plStack_60[2] = (longlong)local_68;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
      plVar9 = plStack_60;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))(local_68,param_4);
        plVar8 = (longlong *)(param_1 + 0x80);
        plVar9 = plStack_60;
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar5 = param_1 + 0xb8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_18 = local_68;
                  plStack_10 = plStack_60;
                  if (plStack_60 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_142b01e9c;
                  lVar5 = *(longlong *)(param_1 + 0xc0);
                  if (*(longlong *)(param_1 + 0xc0) == 0) {
                    lVar5 = param_1 + 0xb8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b01e9c;
                  goto LAB_142b01e80;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b01efd;
      }
    }
    else if (iVar4 == 400) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_78 = (longlong *)0x0;
      }
      else {
        local_78 = (longlong *)FUN_142b21d50(lVar5);
      }
      plStack_70 = (longlong *)operator_new(0x18);
      if (plStack_70 != (longlong *)0x0) {
        *(undefined4 *)(plStack_70 + 1) = 1;
        *plStack_70 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = 1;
        plStack_70[2] = (longlong)local_78;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
      plVar9 = plStack_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))(local_78,param_4);
        plVar8 = (longlong *)(param_1 + 0x80);
        plVar9 = plStack_70;
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar5 = param_1 + 0xb8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_28 = local_78;
                  plStack_20 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_142b01ccc;
                  lVar5 = *(longlong *)(param_1 + 0xc0);
                  if (*(longlong *)(param_1 + 0xc0) == 0) {
                    lVar5 = param_1 + 0xb8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b01ccc;
                  goto LAB_142b01cb0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b01efd;
      }
    }
    else if (iVar4 == 0x1a6) {
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_88 = (longlong *)0x0;
      }
      else {
        local_88 = (longlong *)FUN_142b21d50(lVar5);
      }
      plStack_80 = (longlong *)operator_new(0x18);
      if (plStack_80 != (longlong *)0x0) {
        *(undefined4 *)(plStack_80 + 1) = 1;
        *plStack_80 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
        plStack_80[2] = (longlong)local_88;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
      plVar9 = plStack_80;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))(local_88,param_4);
        plVar8 = (longlong *)(param_1 + 0x80);
        plVar9 = plStack_80;
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar5 = param_1 + 0xb8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_38 = local_88;
                  plStack_30 = plStack_80;
                  if (plStack_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_142b01afc;
                  lVar5 = *(longlong *)(param_1 + 0xc0);
                  if (*(longlong *)(param_1 + 0xc0) == 0) {
                    lVar5 = param_1 + 0xb8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b01afc;
                  goto LAB_142b01ae0;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b01efd;
      }
    }
    else {
      if (iVar4 != 500) goto LAB_142b01f64;
      lVar5 = operator_new(0x30);
      if (lVar5 == 0) {
        local_98 = (longlong *)0x0;
      }
      else {
        local_98 = (longlong *)FUN_142b21d50(lVar5);
      }
      plStack_90 = (longlong *)operator_new(0x18);
      if (plStack_90 != (longlong *)0x0) {
        *(undefined4 *)(plStack_90 + 1) = 1;
        *plStack_90 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plStack_90 + 0xc) = 1;
        plStack_90[2] = (longlong)local_98;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
      plVar9 = plStack_90;
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))(local_98,param_4);
        plVar8 = (longlong *)(param_1 + 0x80);
        plVar9 = plStack_90;
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar5 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar5 = param_1 + 0xb8;
          }
          iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                   (longlong)*(int *)(*param_2 + 8)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(int *)((longlong)iVar4 * 0x20 + *plVar8) == *(int *)(*param_2 + 8)) {
                if (iVar4 != -1) {
                  local_48 = local_98;
                  plStack_40 = plStack_90;
                  if (plStack_90 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
                    UNLOCK();
                  }
                  if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_142b0192c;
                  lVar5 = *(longlong *)(param_1 + 0xc0);
                  if (*(longlong *)(param_1 + 0xc0) == 0) {
                    lVar5 = param_1 + 0xb8;
                  }
                  iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 200) - 1U &
                                           (longlong)*(int *)(*param_2 + 8)) * 4);
                  if (iVar4 == -1) goto LAB_142b0192c;
                  goto LAB_142b01910;
                }
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar8);
            } while (iVar4 != -1);
          }
        }
        goto LAB_142b01efd;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar7 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_142b01f64:
  FUN_142ac0580(param_1,param_2);
  return;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b01e80:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b01e9e;
      break;
    }
  }
LAB_142b01e9c:
  piVar7 = (int *)0x0;
LAB_142b01e9e:
  FUN_142abcb30(piVar7 + 2,param_2,200,&local_18);
  plVar9 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_60;
  goto LAB_142b01efd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b01ae0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b01afe;
      break;
    }
  }
LAB_142b01afc:
  piVar7 = (int *)0x0;
LAB_142b01afe:
  FUN_142abcb30(piVar7 + 2,param_2,0x1a6,&local_38);
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_80;
  goto LAB_142b01efd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b01910:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b0192e;
      break;
    }
  }
LAB_142b0192c:
  piVar7 = (int *)0x0;
LAB_142b0192e:
  FUN_142abcb30(piVar7 + 2,param_2,500,&local_48);
  plVar9 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_90;
  goto LAB_142b01efd;
  while (iVar4 = piVar7[6], iVar4 != -1) {
LAB_142b01cb0:
    piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar8);
    if (*piVar7 == *(int *)(*param_2 + 8)) {
      if (iVar4 != -1) goto LAB_142b01cce;
      break;
    }
  }
LAB_142b01ccc:
  piVar7 = (int *)0x0;
LAB_142b01cce:
  FUN_142abcb30(piVar7 + 2,param_2,400,&local_28);
  plVar9 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
  ::Remove(plVar8,*(undefined4 *)(*param_2 + 8));
  plVar9 = plStack_70;
LAB_142b01efd:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142b01f90 FUN_142b01f90 body=41 status=ok
// SIG undefined FUN_142b01f90(void)

undefined8 FUN_142b01f90(longlong param_1)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa0))();
    if (iVar1 == 4) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b01fc0 FUN_142b01fc0 body=3429 status=ok
// SIG undefined FUN_142b01fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b02100) */
/* WARNING: Removing unreachable block (ram,0x000142b0210d) */
/* WARNING: Removing unreachable block (ram,0x000142b02126) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_142b01fc0(longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5,longlong param_6,longlong *param_7)

{
  void *_Dst;
  undefined8 ******_Src;
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *******pppppppuVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  code *pcVar15;
  longlong *plVar16;
  int *piVar17;
  undefined8 *******pppppppuVar18;
  longlong *plVar19;
  longlong **pplVar20;
  undefined2 *puVar21;
  int *piVar22;
  int *piVar23;
  undefined1 auStack_2d8 [32];
  undefined2 local_2b8;
  undefined4 *local_2a8;
  undefined8 local_2a0;
  int *local_298;
  undefined8 local_290;
  int *local_288;
  undefined8 local_280;
  uint local_278 [2];
  longlong local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong *local_258 [2];
  undefined8 *******local_248;
  undefined8 local_240;
  int local_238 [2];
  void *local_230;
  undefined2 *local_228;
  int local_220;
  longlong local_218 [6];
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8 [4];
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  undefined1 local_180 [8];
  longlong *local_178;
  undefined4 **local_170;
  longlong *local_168;
  longlong local_160;
  uint *local_158;
  undefined8 local_150;
  longlong local_148 [2];
  longlong local_138 [2];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [16];
  longlong local_108 [2];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_1e8 = (code *)*param_7;
  plVar16 = param_7;
  if (local_1e8 == (code *)0x0) {
    local_1e8 = *(code **)(param_1 + 8);
    plVar16 = (longlong *)(param_1 + 8);
  }
  plVar16 = (longlong *)plVar16[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1b8._0_4_ = SUB84(local_1e8,0);
  local_1b8._4_4_ = (undefined4)((ulonglong)local_1e8 >> 0x20);
  uStack_1b0._0_4_ = SUB84(plVar16,0);
  uStack_1b0._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_1b0._4_4_;
  uStack_60 = (undefined4)uStack_1b0;
  uStack_64 = local_1b8._4_4_;
  local_68 = (undefined4)local_1b8;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = param_7;
  local_1d8 = param_5;
  local_260 = param_4;
  local_230 = param_2;
  local_1d0 = param_1;
  local_1c8 = param_3;
  local_f8 = (longlong)local_1e8;
  plStack_f0 = plVar16;
  local_c0 = FUN_142abcbb0(&DAT_1456c8578);
  local_218[0] = 0;
  local_218[1] = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218,0);
  FGenericPlatformString::Memcpy(local_218[0],L"/v1/client/{title}/players/item_trade/ignored",0x5c)
  ;
  local_1a8[2] = 0;
  local_1a8[3] = 0;
  FUN_142abaf10(&local_228,local_1a8 + 2,local_218);
  if (local_1a8[2] != 0) {
    FMemory::Free();
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  uVar9 = FString::FString(local_118,param_3);
  puVar10 = (undefined8 *)FUN_142accce0(local_138,uVar9);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*puVar10;
  }
  FString::ReplaceInline(&local_228,L"{title}",puVar21,1);
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  local_298 = (int *)0x0;
  local_290 = 1;
  iVar6 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_298,0);
  piVar22 = local_298;
  *local_298 = iVar6;
  if ((int)local_290 == 0) {
LAB_142b02273:
    uStack_e4 = 2;
    local_288 = (int *)0x0;
    local_280 = 1;
    iVar6 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_288,0);
    piVar23 = local_288;
    *local_288 = iVar6;
    if ((int)local_280 == 0) {
LAB_142b023ba:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b023c4:
      local_1a8[1] = 0xc;
      local_1a8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8,0);
      lVar4 = local_1a8[0];
      FGenericPlatformString::Memcpy(local_1a8[0],L"EndpointUrl",0x18);
      lVar13 = (longlong)local_1e8;
      local_248 = (undefined8 *******)0x0;
      local_240 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1e8 + 0x38,local_238,local_1a8);
      if (local_238[0] == -1) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(lVar13 + 0x38) + (longlong)local_238[0] * 0x28;
      }
      pppppppuVar18 = (undefined8 *******)0x0;
      pppppppuVar11 = (undefined8 *******)(lVar13 + 0x10);
      if (lVar13 == 0) {
        pppppppuVar11 = pppppppuVar18;
      }
      iVar6 = 0;
      if ((pppppppuVar11 != (undefined8 *******)0x0) &&
         (iVar6 = 0, &local_248 != (undefined8 ********)pppppppuVar11)) {
        iVar6 = *(int *)(pppppppuVar11 + 1);
        _Src = *pppppppuVar11;
        local_240 = CONCAT44(local_240._4_4_,iVar6);
        if (iVar6 == 0) {
          pppppppuVar18 = (undefined8 *******)0x0;
          iVar6 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,iVar6,0);
          pppppppuVar18 = local_248;
          _guard_xfg_dispatch_icall_nop(local_248,_Src,(longlong)iVar6 * 2);
          iVar6 = (int)local_240;
        }
      }
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
      if (iVar6 < 2) {
        if (pppppppuVar18 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar18);
        }
        if (piVar23 != (int *)0x0) {
          FMemory::Free(piVar23);
        }
        if (piVar22 != (int *)0x0) {
          FMemory::Free(piVar22);
        }
        if (local_228 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar19 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_f0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar22 = (int *)((longlong)plVar19 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar19 + 8))(plVar19,1);
            }
          }
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar16 + 1;
          lVar13 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar22 = (int *)((longlong)plVar16 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        if (*local_1c8 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
        plVar16 = (longlong *)local_1c0[1];
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar16 + 1;
          lVar13 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar22 = (int *)((longlong)plVar16 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        return 0;
      }
      puVar21 = &DAT_143f3eda8;
      if (local_220 != 0) {
        puVar21 = local_228;
      }
      pppppppuVar11 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar6 != 0) {
        pppppppuVar11 = pppppppuVar18;
      }
      FString::PrintfImpl(local_148,L"%ls%ls",pppppppuVar11,puVar21);
      local_1e8 = FUN_142afd710;
      uStack_1e0 = 0;
      plVar12 = (longlong *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1d0 + 0x20,local_128);
      plVar19 = (longlong *)plVar12[1];
      lVar13 = *plVar12;
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
      }
      plVar12 = (longlong *)FMemory::Realloc(0,0x40);
      local_258[0] = plVar12;
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar12[1] = lVar13;
        plVar12[2] = (longlong)plVar19;
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
        }
        *(undefined4 *)(plVar12 + 3) = (undefined4)local_1e8;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = local_1e8._4_4_;
        *(undefined4 *)(plVar12 + 4) = uStack_1e0;
        *(undefined4 *)((longlong)plVar12 + 0x24) = uStack_1dc;
        lVar13 = FDelegateHandle::GenerateNewID();
        plVar12[6] = lVar13;
        *plVar12 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar19 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
        plVar12 = local_258[0];
        if ((int)lVar13 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar22 = (int *)((longlong)plVar19 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
          plVar12 = local_258[0];
          if (iVar6 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
            piVar22 = local_298;
            piVar23 = local_288;
            plVar12 = local_258[0];
          }
        }
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_120 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
        plVar12 = local_258[0];
        if ((int)lVar13 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar22 = (int *)((longlong)local_120 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
          plVar12 = local_258[0];
          if (iVar6 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
            piVar22 = local_298;
            piVar23 = local_288;
            plVar12 = local_258[0];
          }
        }
      }
      lVar13 = operator_new(0x170);
      if (lVar13 == 0) {
        local_270 = 0;
      }
      else {
        local_270 = FUN_142af8bf0(lVar13);
      }
      plVar19 = (longlong *)0x0;
      plVar14 = (longlong *)operator_new(0x18);
      if (plVar14 != (longlong *)0x0) {
        *(undefined4 *)(plVar14 + 1) = 1;
        *plVar14 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
        plVar14[2] = local_270;
        plVar19 = plVar14;
      }
      local_268 = plVar19;
      SharedPointerInternals::EnableSharedFromThis(&local_270,local_270,local_270);
      lVar13 = local_270;
      plVar19 = (longlong *)(local_270 + 0x88);
      if (plVar19 != local_108) {
        if (*plVar19 != 0) {
          FMemory::Free();
        }
        *plVar19 = 0;
        *(undefined8 *)(lVar13 + 0x90) = 0;
      }
      lVar13 = local_270;
      pplVar20 = (longlong **)(local_270 + 0x130);
      if (local_258 != pplVar20) {
        if (plVar12 == (longlong *)0x0) {
          if ((*(int *)(local_270 + 0x138) != 0) &&
             (plVar19 = *pplVar20, plVar19 != (longlong *)0x0)) {
            (**(code **)(*plVar19 + 0x28))(plVar19,0);
            if (*pplVar20 != (longlong *)0x0) {
              plVar19 = (longlong *)FMemory::Realloc(*pplVar20,0,0);
              *pplVar20 = plVar19;
            }
            *(undefined4 *)(lVar13 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar12 + 0x30))(plVar12,pplVar20);
        }
      }
      FString::operator=(local_270 + 0x20,local_230);
      puVar10 = local_1d8;
      if ((local_c0 == 1) || (local_c0 == 4)) {
        if (1 < *(int *)(local_1d8 + 1)) {
          local_2a8 = (undefined4 *)0x0;
          local_2a0 = 0;
          cVar5 = FString::StartsWith(local_1d8,&DAT_1456b2a34,1);
          if (((cVar5 == '\0') &&
              (cVar5 = FString::StartsWith(puVar10,&DAT_1456c8d08,1), cVar5 == '\0')) &&
             (local_2a8 != &DAT_1456b2a64)) {
            iVar6 = local_2a0._4_4_;
            if (local_2a0._4_4_ != 2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2a8,2);
              iVar6 = local_2a0._4_4_;
            }
            iVar7 = (int)local_2a0 + 2;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar7);
            if (iVar6 < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8);
            }
            *local_2a8 = 0x22;
          }
          uVar2 = local_2a0;
          iVar6 = *(int *)(puVar10 + 1) + -1;
          local_230 = (void *)*puVar10;
          if (*(int *)(puVar10 + 1) == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            iVar7 = (int)local_2a0;
            lVar13 = (longlong)(int)local_2a0;
            iVar8 = (uint)((int)local_2a0 == 0) + iVar6 + (int)local_2a0;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar8);
            if (local_2a0._4_4_ < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,uVar2 & 0xffffffff);
            }
            _Dst = (void *)((longlong)local_2a8 + (lVar13 - (ulonglong)(iVar7 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,local_230,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
            puVar10 = local_1d8;
          }
          cVar5 = FString::EndsWith(puVar10,&DAT_1456b2a94,1);
          uVar2 = local_2a0;
          if (cVar5 == '\0') {
            iVar6 = (int)local_2a0;
            lVar13 = (longlong)(int)local_2a0;
            iVar7 = (2 - (uint)((int)local_2a0 != 0)) + (int)local_2a0;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar7);
            if (local_2a0._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,uVar2 & 0xffffffff);
            }
            puVar21 = (undefined2 *)((longlong)local_2a8 + (lVar13 - (ulonglong)(iVar6 != 0)) * 2);
            *puVar21 = 0x22;
            puVar21[1] = 0;
          }
          local_218[2] = 0;
          local_218[3] = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218 + 2,0);
          local_2b8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_218[2],0xe,"If-None-Match");
          local_178 = local_218 + 2;
          local_170 = &local_2a8;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (local_270 + 0xc0,local_188,&local_178,0);
          if (local_218[2] != 0) {
            FMemory::Free();
          }
          if (local_2a8 != (undefined4 *)0x0) {
            FMemory::Free();
          }
        }
        if (1 < *(int *)(param_6 + 8)) {
          local_218[4] = 0;
          local_218[5] = 0x12;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218 + 4,0);
          local_2b8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_218[4],0x12,"If-Modified-Since");
          local_168 = local_218 + 4;
          local_160 = param_6;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (local_270 + 0xc0,local_184,&local_168,0);
          if (local_218[4] != 0) {
            FMemory::Free();
          }
        }
      }
      pcVar15 = (code *)FUN_142ae7d40();
      local_278[0] = (*pcVar15)(&local_f8,local_148,&local_270);
      if (local_278[0] != 0) {
        local_158 = local_278;
        local_150 = local_260;
        FUN_142ab70b0(local_1d0 + 0x80,local_180,&local_158,0);
      }
      plVar19 = local_268;
      uVar3 = local_278[0];
      if (local_268 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_268 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
        plVar12 = local_258[0];
        if ((int)lVar13 == 1) {
          (**(code **)*local_268)(local_268);
          LOCK();
          piVar22 = (int *)((longlong)plVar19 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
          plVar12 = local_258[0];
          if (iVar6 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
            piVar22 = local_298;
            piVar23 = local_288;
            plVar12 = local_258[0];
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        local_258[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
        if (local_258[0] != (longlong *)0x0) {
          FMemory::Free(local_258[0]);
        }
      }
      if (local_148[0] != 0) {
        FMemory::Free();
      }
      if (local_248 != (undefined8 *******)0x0) {
        FMemory::Free(local_248);
      }
      if (piVar23 != (int *)0x0) {
        FMemory::Free(piVar23);
      }
      if (piVar22 != (int *)0x0) {
        FMemory::Free(piVar22);
      }
      if (local_228 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar19 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_f0 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar22 = (int *)((longlong)plVar19 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar16 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar22 = (int *)((longlong)plVar16 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      if (*local_1c8 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
      plVar16 = (longlong *)local_1c0[1];
      if (plVar16 == (longlong *)0x0) {
        return uVar3;
      }
      LOCK();
      plVar19 = plVar16 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 != 1) {
        return uVar3;
      }
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar22 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar6 != 1) {
        return uVar3;
      }
      (**(code **)(*plVar16 + 8))(plVar16,1);
      return uVar3;
    }
    for (piVar17 = local_288; piVar1 = local_288, piVar17 != local_288 + (int)local_280;
        piVar17 = piVar17 + 1) {
      if (*piVar17 == 2) {
        if ((int)((longlong)piVar17 - (longlong)local_288 >> 2) != -1) goto LAB_142b023ba;
        break;
      }
    }
    do {
      if (piVar1 == local_288 + (int)local_280) goto LAB_142b02312;
      if (*piVar1 == 1) {
        if ((int)((longlong)piVar1 - (longlong)local_288 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b023c4;
        }
        goto LAB_142b02312;
      }
      piVar1 = piVar1 + 1;
    } while( true );
  }
  for (piVar23 = local_298; piVar23 != local_298 + (int)local_290; piVar23 = piVar23 + 1) {
    if (*piVar23 == 2) {
      if ((int)((longlong)piVar23 - (longlong)local_298 >> 2) != -1) goto LAB_142b02273;
      break;
    }
  }
LAB_142b0231f:
  if (piVar22 != (int *)0x0) {
    FMemory::Free(piVar22);
  }
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar16 + 1;
    lVar13 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar22 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_7);
  return 0;
LAB_142b02312:
  if (local_288 != (int *)0x0) {
    FMemory::Free(local_288);
  }
  goto LAB_142b0231f;
}



// FUNCTION 142b02d30 FUN_142b02d30 body=2674 status=ok
// SIG undefined FUN_142b02d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b02e69) */
/* WARNING: Removing unreachable block (ram,0x000142b02e75) */
/* WARNING: Removing unreachable block (ram,0x000142b02e8d) */
/* WARNING: Type propagation algorithm not settling */

int FUN_142b02d30(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined8 ******_Src;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 *******pppppppuVar14;
  undefined2 *puVar15;
  int *piVar16;
  longlong **pplVar17;
  int *piVar18;
  undefined1 auStack_268 [32];
  int *local_248;
  undefined8 local_240;
  int *local_238;
  undefined8 local_230;
  int local_228 [2];
  undefined8 local_220;
  longlong *local_218 [2];
  undefined8 *******local_208;
  undefined8 local_200;
  int local_1f8 [2];
  longlong local_1f0;
  longlong *local_1e8;
  undefined2 *local_1e0;
  int local_1d8;
  longlong local_1d0 [2];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188 [4];
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  int *local_150;
  undefined8 local_148;
  longlong local_140 [2];
  longlong local_130 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [24];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1c0 = (code *)*param_6;
  plVar12 = param_6;
  if (local_1c0 == (code *)0x0) {
    local_1c0 = *(code **)(param_1 + 8);
    plVar12 = (longlong *)(param_1 + 8);
  }
  plVar12 = (longlong *)plVar12[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_198._0_4_ = SUB84(local_1c0,0);
  local_198._4_4_ = (undefined4)((ulonglong)local_1c0 >> 0x20);
  uStack_190._0_4_ = SUB84(plVar12,0);
  uStack_190._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_190._4_4_;
  uStack_60 = (undefined4)uStack_190;
  uStack_64 = local_198._4_4_;
  local_68 = (undefined4)local_198;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_190 = 0;
  local_198 = 0;
  local_1a0 = param_6;
  local_220 = param_5;
  local_1b0 = param_1;
  local_1a8 = param_3;
  local_160 = param_4;
  local_158 = param_2;
  local_f8 = (longlong)local_1c0;
  plStack_f0 = plVar12;
  local_c0 = FUN_142abcbb0(L"POST");
  local_1d0[0] = 0;
  local_1d0[1] = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0,0);
  FGenericPlatformString::Memcpy(local_1d0[0],L"/v2/client/{title}/players/item_trade",0x4c);
  local_188[2] = 0;
  local_188[3] = 0;
  FUN_142abaf10(&local_1e0,local_188 + 2,local_1d0);
  if (local_188[2] != 0) {
    FMemory::Free();
  }
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FString::FString(local_110,param_3);
  puVar6 = (undefined8 *)FUN_142accce0(local_130,uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar6;
  }
  FString::ReplaceInline(&local_1e0,L"{title}",puVar15,1);
  if (local_130[0] != 0) {
    FMemory::Free();
  }
  local_248 = (int *)0x0;
  local_240 = 1;
  iVar4 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_248,0);
  piVar16 = local_248;
  *local_248 = iVar4;
  if ((int)local_240 == 0) {
LAB_142b02fca:
    uStack_e4 = 2;
    local_238 = (int *)0x0;
    local_230 = 1;
    iVar4 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_238,0);
    piVar18 = local_238;
    *local_238 = iVar4;
    if ((int)local_230 == 0) {
LAB_142b030f9:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b03103:
      local_188[1] = 0xc;
      local_188[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
      lVar3 = local_188[0];
      FGenericPlatformString::Memcpy(local_188[0],L"EndpointUrl",0x18);
      lVar9 = (longlong)local_1c0;
      local_208 = (undefined8 *******)0x0;
      local_200 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1c0 + 0x38,local_1f8,local_188);
      if (local_1f8[0] == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x38) + (longlong)local_1f8[0] * 0x28;
      }
      pppppppuVar14 = (undefined8 *******)0x0;
      pppppppuVar7 = (undefined8 *******)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      iVar4 = 0;
      if ((pppppppuVar7 != (undefined8 *******)0x0) &&
         (iVar4 = 0, &local_208 != (undefined8 ********)pppppppuVar7)) {
        iVar4 = *(int *)(pppppppuVar7 + 1);
        _Src = *pppppppuVar7;
        local_200 = CONCAT44(local_200._4_4_,iVar4);
        if (iVar4 == 0) {
          pppppppuVar14 = (undefined8 *******)0x0;
          iVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,iVar4,0);
          pppppppuVar14 = local_208;
          _guard_xfg_dispatch_icall_nop(local_208,_Src,(longlong)iVar4 * 2);
          iVar4 = (int)local_200;
        }
      }
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
      if (iVar4 < 2) {
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar14);
        }
        if (piVar18 != (int *)0x0) {
          FMemory::Free(piVar18);
        }
        if (piVar16 != (int *)0x0) {
          FMemory::Free(piVar16);
        }
        if (local_1e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar10 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_f0 + 1;
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar16 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (*local_1a8 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
        plVar12 = (longlong *)local_1a0[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        return 0;
      }
      puVar15 = &DAT_143f3eda8;
      if (local_1d8 != 0) {
        puVar15 = local_1e0;
      }
      pppppppuVar7 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar4 != 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      FString::PrintfImpl(local_140,L"%ls%ls",pppppppuVar7,puVar15);
      local_1c0 = FUN_142afde90;
      uStack_1b8 = 0;
      plVar8 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1b0 + 0x20,local_120);
      plVar10 = (longlong *)plVar8[1];
      lVar9 = *plVar8;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        piVar16 = local_248;
        piVar18 = local_238;
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x40);
      local_218[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar8[1] = lVar9;
        plVar8[2] = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          piVar16 = local_248;
          piVar18 = local_238;
        }
        *(undefined4 *)(plVar8 + 3) = (undefined4)local_1c0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = local_1c0._4_4_;
        *(undefined4 *)(plVar8 + 4) = uStack_1b8;
        *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_1b4;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[6] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_118 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar16 = (int *)((longlong)local_118 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      lVar9 = operator_new(0x170);
      if (lVar9 == 0) {
        local_1f0 = 0;
      }
      else {
        local_1f0 = FUN_142af8bf0(lVar9);
      }
      local_1e8 = (longlong *)operator_new(0x18);
      if (local_1e8 != (longlong *)0x0) {
        *(undefined4 *)(local_1e8 + 1) = 1;
        *local_1e8 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1e8 + 0xc) = 1;
        local_1e8[2] = local_1f0;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_1f0,local_1f0,local_1f0);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_1f0 + 0x88,local_160);
      lVar9 = local_1f0;
      pplVar17 = (longlong **)(local_1f0 + 0x130);
      if (local_218 != pplVar17) {
        if (plVar8 == (longlong *)0x0) {
          if ((*(int *)(local_1f0 + 0x138) != 0) &&
             (plVar10 = *pplVar17, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            if (*pplVar17 != (longlong *)0x0) {
              plVar10 = (longlong *)FMemory::Realloc(*pplVar17,0,0);
              *pplVar17 = plVar10;
            }
            *(undefined4 *)(lVar9 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,pplVar17);
        }
      }
      FString::operator=(local_1f0 + 0x20,local_158);
      pcVar11 = (code *)FUN_142ae7d40();
      local_228[0] = (*pcVar11)(&local_f8,local_140,&local_1f0);
      if (local_228[0] != 0) {
        local_150 = local_228;
        local_148 = local_220;
        FUN_142ab70b0(local_1b0 + 0x120,local_168,&local_150,0);
      }
      plVar10 = local_1e8;
      iVar4 = local_228[0];
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1e8 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        local_218[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
        if (local_218[0] != (longlong *)0x0) {
          FMemory::Free(local_218[0]);
        }
      }
      if (local_140[0] != 0) {
        FMemory::Free();
      }
      if (local_208 != (undefined8 *******)0x0) {
        FMemory::Free(local_208);
      }
      if (piVar18 != (int *)0x0) {
        FMemory::Free(piVar18);
      }
      if (piVar16 != (int *)0x0) {
        FMemory::Free(piVar16);
      }
      if (local_1e0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar10 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_f0 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar16 = (int *)((longlong)plVar12 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (*local_1a8 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
      plVar12 = (longlong *)local_1a0[1];
      if (plVar12 == (longlong *)0x0) {
        return iVar4;
      }
      LOCK();
      plVar10 = plVar12 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 != 1) {
        return iVar4;
      }
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar1 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar4;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return iVar4;
    }
    for (piVar13 = local_238; piVar2 = local_238, piVar13 != local_238 + (int)local_230;
        piVar13 = piVar13 + 1) {
      if (*piVar13 == 2) {
        if ((int)((longlong)piVar13 - (longlong)local_238 >> 2) != -1) goto LAB_142b030f9;
        break;
      }
    }
    do {
      if (piVar2 == local_238 + (int)local_230) goto LAB_142b03059;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_238 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b03103;
        }
        goto LAB_142b03059;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar18 = local_248; piVar18 != local_248 + (int)local_240; piVar18 = piVar18 + 1) {
    if (*piVar18 == 2) {
      if ((int)((longlong)piVar18 - (longlong)local_248 >> 2) != -1) goto LAB_142b02fca;
      break;
    }
  }
LAB_142b03066:
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (local_1e0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_6);
  return 0;
LAB_142b03059:
  if (local_238 != (int *)0x0) {
    FMemory::Free(local_238);
  }
  goto LAB_142b03066;
}



// FUNCTION 142b037b0 FUN_142b037b0 body=783 status=ok
// SIG undefined FUN_142b037b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142b037b0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 *param_6)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *_Dst;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined4 local_210;
  int *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  _Dst = (undefined2 *)0x0;
  iVar12 = 0;
  iVar14 = 0;
  local_218 = param_6;
  local_208 = (int *)0x0;
  local_200 = 1;
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1d0 = param_4;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208,0);
  piVar15 = local_208;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  *local_208 = iVar5;
  if ((int)local_200 != 0) {
    for (piVar10 = local_208; piVar3 = local_208, piVar10 != local_208 + (int)local_200;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_208 >> 2) != -1) goto LAB_142b038ae;
        break;
      }
    }
    do {
      puVar11 = (undefined2 *)0x0;
      iVar12 = 0;
      if (piVar3 == local_208 + (int)local_200) goto LAB_142b038ea;
      if (*piVar3 == 1) {
        puVar11 = (undefined2 *)0x0;
        puVar16 = _Dst;
        iVar12 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_208 >> 2) != -1) goto LAB_142b038fe;
        goto LAB_142b038ea;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142b038ae:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_4,local_1b8);
  puVar11 = _Dst;
  if (&local_1f8 != ppuVar7) {
    puVar11 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar12 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_1f8 = puVar11;
    local_1f0 = iVar12;
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
LAB_142b038ea:
  iVar14 = iVar12;
  puVar16 = puVar11;
  if (iVar14 == 0) {
LAB_142b038fe:
    puVar11 = &DAT_143f3eda8;
  }
  local_21c = 0;
  local_228 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar11);
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar13) != '\0');
  puVar11 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar11 = puVar16;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar11);
  iVar12 = (int)lVar13;
  _Src = *(void **)(lVar8 + 0x88);
  local_220 = iVar12;
  if (0 < iVar12) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_228,0);
    _Dst = local_228;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_218;
  local_1c8 = *local_218;
  local_1c0 = local_218[1];
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
    piVar15 = local_208;
    puVar16 = local_1f8;
  }
  local_218 = (undefined8 *)0x0;
  local_210 = 0;
  if (((param_5 != &local_218) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar2 = *param_5, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_218);
  }
  plVar2 = local_1e8;
  uVar9 = FString::FString(local_1a8,local_1e8);
  local_230 = &local_1c8;
  local_238 = &local_218;
  uVar6 = FUN_142b02d30(local_1d8,local_1e0,uVar9,&local_228);
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  FUN_142b22870(local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar15 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142b03ac0 FUN_142b03ac0 body=2837 status=ok
// SIG undefined FUN_142b03ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b03c0f) */
/* WARNING: Removing unreachable block (ram,0x000142b03c1b) */
/* WARNING: Removing unreachable block (ram,0x000142b03c33) */
/* WARNING: Type propagation algorithm not settling */

int FUN_142b03ac0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                 undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  undefined8 ******_Src;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 *******pppppppuVar14;
  undefined2 *puVar15;
  int *piVar16;
  longlong **pplVar17;
  int *piVar18;
  undefined1 auStack_288 [32];
  int *local_268;
  undefined8 local_260;
  int *local_258;
  undefined8 local_250;
  int local_248 [2];
  undefined8 local_240;
  longlong *local_238 [2];
  undefined8 *******local_228;
  undefined8 local_220;
  undefined2 *local_218;
  int local_210;
  int local_208 [2];
  longlong *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong local_1e8 [2];
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0 [4];
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  int *local_168;
  undefined8 local_160;
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_1d8 = (code *)*param_7;
  plVar12 = param_7;
  if (local_1d8 == (code *)0x0) {
    local_1d8 = *(code **)(param_1 + 8);
    plVar12 = (longlong *)(param_1 + 8);
  }
  plVar12 = (longlong *)plVar12[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_1b0._0_4_ = SUB84(local_1d8,0);
  local_1b0._4_4_ = (undefined4)((ulonglong)local_1d8 >> 0x20);
  uStack_1a8._0_4_ = SUB84(plVar12,0);
  uStack_1a8._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_1a8._4_4_;
  uStack_60 = (undefined4)uStack_1a8;
  uStack_64 = local_1b0._4_4_;
  local_68 = (undefined4)local_1b0;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_178 = param_5;
  uStack_1a8 = 0;
  local_1b0 = 0;
  local_200 = param_7;
  local_240 = param_6;
  local_1c8 = param_1;
  local_1c0 = param_3;
  local_1b8 = param_4;
  local_170 = param_2;
  local_f8 = (longlong)local_1d8;
  plStack_f0 = plVar12;
  local_c0 = FUN_142abcbb0(&DAT_1456d0270);
  local_1e8[0] = 0;
  local_1e8[1] = 0x33;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy
            (local_1e8[0],L"/v1/client/{title}/players/item_trade/{trade_guid}",0x66);
  local_1a0[2] = 0;
  local_1a0[3] = 0;
  FUN_142abaf10(&local_218,local_1a0 + 2,local_1e8);
  if (local_1a0[2] != 0) {
    FMemory::Free();
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FString::FString(local_118,param_3);
  puVar6 = (undefined8 *)FUN_142accce0(local_148,uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar6;
  }
  FString::ReplaceInline(&local_218,L"{title}",puVar15,1);
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FString::FString(local_108,param_4);
  puVar6 = (undefined8 *)FUN_142accce0(local_138,uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar6;
  }
  FString::ReplaceInline(&local_218,L"{trade_guid}",puVar15,1);
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  local_268 = (int *)0x0;
  local_260 = 1;
  iVar4 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_268,0);
  piVar16 = local_268;
  *local_268 = iVar4;
  if ((int)local_260 == 0) {
LAB_142b03dc3:
    uStack_e4 = 2;
    local_258 = (int *)0x0;
    local_250 = 1;
    iVar4 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_258,0);
    piVar18 = local_258;
    *local_258 = iVar4;
    if ((int)local_250 == 0) {
LAB_142b03f05:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b03f0f:
      local_1a0[1] = 0xc;
      local_1a0[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0,0);
      lVar3 = local_1a0[0];
      FGenericPlatformString::Memcpy(local_1a0[0],L"EndpointUrl",0x18);
      lVar9 = (longlong)local_1d8;
      local_228 = (undefined8 *******)0x0;
      local_220 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1d8 + 0x38,local_208,local_1a0);
      if (local_208[0] == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x38) + (longlong)local_208[0] * 0x28;
      }
      pppppppuVar14 = (undefined8 *******)0x0;
      pppppppuVar7 = (undefined8 *******)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      iVar4 = 0;
      if ((pppppppuVar7 != (undefined8 *******)0x0) &&
         (iVar4 = 0, &local_228 != (undefined8 ********)pppppppuVar7)) {
        iVar4 = *(int *)(pppppppuVar7 + 1);
        _Src = *pppppppuVar7;
        local_220 = CONCAT44(local_220._4_4_,iVar4);
        if (iVar4 == 0) {
          pppppppuVar14 = (undefined8 *******)0x0;
          iVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,iVar4,0);
          pppppppuVar14 = local_228;
          _guard_xfg_dispatch_icall_nop(local_228,_Src,(longlong)iVar4 * 2);
          iVar4 = (int)local_220;
        }
      }
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
      if (iVar4 < 2) {
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar14);
        }
        if (piVar18 != (int *)0x0) {
          FMemory::Free(piVar18);
        }
        if (piVar16 != (int *)0x0) {
          FMemory::Free(piVar16);
        }
        if (local_218 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar10 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_f0 + 1;
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar16 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (*local_1c0 != 0) {
          FMemory::Free();
        }
        if (*local_1b8 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_240);
        plVar12 = (longlong *)local_200[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        return 0;
      }
      puVar15 = &DAT_143f3eda8;
      if (local_210 != 0) {
        puVar15 = local_218;
      }
      pppppppuVar7 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar4 != 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      FString::PrintfImpl(local_158,L"%ls%ls",pppppppuVar7,puVar15);
      local_1d8 = FUN_142afeb70;
      uStack_1d0 = 0;
      plVar8 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1c8 + 0x20,local_128);
      plVar10 = (longlong *)plVar8[1];
      lVar9 = *plVar8;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        piVar16 = local_268;
        piVar18 = local_258;
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x40);
      local_238[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar8[1] = lVar9;
        plVar8[2] = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          piVar16 = local_268;
          piVar18 = local_258;
        }
        *(undefined4 *)(plVar8 + 3) = (undefined4)local_1d8;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = local_1d8._4_4_;
        *(undefined4 *)(plVar8 + 4) = uStack_1d0;
        *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_1cc;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[6] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_238[0];
        piVar16 = local_268;
        piVar18 = local_258;
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_238[0];
          piVar16 = local_268;
          piVar18 = local_258;
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_238[0];
            piVar16 = local_268;
            piVar18 = local_258;
          }
        }
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_120 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar8 = local_238[0];
        piVar16 = local_268;
        piVar18 = local_258;
        if ((int)lVar9 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar16 = (int *)((longlong)local_120 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_238[0];
          piVar16 = local_268;
          piVar18 = local_258;
          if (iVar4 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
            plVar8 = local_238[0];
            piVar16 = local_268;
            piVar18 = local_258;
          }
        }
      }
      lVar9 = operator_new(0x170);
      if (lVar9 == 0) {
        local_1f8 = 0;
      }
      else {
        local_1f8 = FUN_142af8bf0(lVar9);
      }
      local_1f0 = (longlong *)operator_new(0x18);
      if (local_1f0 != (longlong *)0x0) {
        *(undefined4 *)(local_1f0 + 1) = 1;
        *local_1f0 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1f0 + 0xc) = 1;
        local_1f0[2] = local_1f8;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_1f8,local_1f8,local_1f8);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_1f8 + 0x88,local_178);
      lVar9 = local_1f8;
      pplVar17 = (longlong **)(local_1f8 + 0x130);
      if (local_238 != pplVar17) {
        if (plVar8 == (longlong *)0x0) {
          if ((*(int *)(local_1f8 + 0x138) != 0) &&
             (plVar10 = *pplVar17, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            if (*pplVar17 != (longlong *)0x0) {
              plVar10 = (longlong *)FMemory::Realloc(*pplVar17,0,0);
              *pplVar17 = plVar10;
            }
            *(undefined4 *)(lVar9 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,pplVar17);
        }
      }
      FString::operator=(local_1f8 + 0x20,local_170);
      pcVar11 = (code *)FUN_142ae7d40();
      local_248[0] = (*pcVar11)(&local_f8,local_158,&local_1f8);
      if (local_248[0] != 0) {
        local_168 = local_248;
        local_160 = local_240;
        FUN_142ab70b0(local_1c8 + 0x170,local_180,&local_168,0);
      }
      plVar10 = local_1f0;
      iVar4 = local_248[0];
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1f0 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_238[0];
        piVar16 = local_268;
        piVar18 = local_258;
        if ((int)lVar9 == 1) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_238[0];
          piVar16 = local_268;
          piVar18 = local_258;
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_238[0];
            piVar16 = local_268;
            piVar18 = local_258;
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        local_238[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
        if (local_238[0] != (longlong *)0x0) {
          FMemory::Free(local_238[0]);
        }
      }
      if (local_158[0] != 0) {
        FMemory::Free();
      }
      if (local_228 != (undefined8 *******)0x0) {
        FMemory::Free(local_228);
      }
      if (piVar18 != (int *)0x0) {
        FMemory::Free(piVar18);
      }
      if (piVar16 != (int *)0x0) {
        FMemory::Free(piVar16);
      }
      if (local_218 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar10 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_f0 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar16 = (int *)((longlong)plVar12 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (*local_1c0 != 0) {
        FMemory::Free();
      }
      if (*local_1b8 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_240);
      plVar12 = (longlong *)local_200[1];
      if (plVar12 == (longlong *)0x0) {
        return iVar4;
      }
      LOCK();
      plVar10 = plVar12 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 != 1) {
        return iVar4;
      }
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar1 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar4;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return iVar4;
    }
    for (piVar13 = local_258; piVar2 = local_258, piVar13 != local_258 + (int)local_250;
        piVar13 = piVar13 + 1) {
      if (*piVar13 == 2) {
        if ((int)((longlong)piVar13 - (longlong)local_258 >> 2) != -1) goto LAB_142b03f05;
        break;
      }
    }
    do {
      if (piVar2 == local_258 + (int)local_250) goto LAB_142b03e52;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_258 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b03f0f;
        }
        goto LAB_142b03e52;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar18 = local_268; piVar18 != local_268 + (int)local_260; piVar18 = piVar18 + 1) {
    if (*piVar18 == 2) {
      if ((int)((longlong)piVar18 - (longlong)local_268 >> 2) != -1) goto LAB_142b03dc3;
      break;
    }
  }
LAB_142b03e5f:
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (local_218 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_240);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_200);
  return 0;
LAB_142b03e52:
  if (local_258 != (int *)0x0) {
    FMemory::Free(local_258);
  }
  goto LAB_142b03e5f;
}



// FUNCTION 142b045e0 FUN_142b045e0 body=828 status=ok
// SIG undefined FUN_142b045e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142b045e0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined8 **param_6,undefined8 *param_7)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *_Dst;
  int iVar15;
  int *piVar16;
  undefined2 *puVar17;
  undefined1 auStack_288 [32];
  undefined2 **local_268;
  undefined8 **local_260;
  undefined8 *local_258;
  undefined2 *local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 *local_238;
  undefined4 local_230;
  int *local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined2 *local_208;
  int local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong local_1d0 [2];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [24];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  _Dst = (undefined2 *)0x0;
  iVar13 = 0;
  iVar15 = 0;
  local_1e8 = param_5;
  local_238 = param_7;
  local_228 = (int *)0x0;
  local_220 = 1;
  local_218 = param_3;
  local_210 = param_4;
  local_1f8 = param_2;
  local_1f0 = param_1;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_228,0);
  piVar16 = local_228;
  local_208 = (undefined2 *)0x0;
  local_200 = 0;
  *local_228 = iVar5;
  if ((int)local_220 != 0) {
    for (piVar11 = local_228; piVar3 = local_228, piVar11 != local_228 + (int)local_220;
        piVar11 = piVar11 + 1) {
      if (*piVar11 == 2) {
        if ((int)((longlong)piVar11 - (longlong)local_228 >> 2) != -1) goto LAB_142b046df;
        break;
      }
    }
    do {
      puVar12 = (undefined2 *)0x0;
      iVar13 = 0;
      if (piVar3 == local_228 + (int)local_220) goto LAB_142b04718;
      if (*piVar3 == 1) {
        puVar12 = (undefined2 *)0x0;
        puVar17 = _Dst;
        iVar13 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_228 >> 2) != -1) goto LAB_142b0472c;
        goto LAB_142b04718;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142b046df:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_5,local_1d0);
  puVar12 = _Dst;
  if (&local_208 != ppuVar7) {
    puVar12 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar13 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_208 = puVar12;
    local_200 = iVar13;
  }
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
LAB_142b04718:
  iVar15 = iVar13;
  puVar17 = puVar12;
  if (iVar15 == 0) {
LAB_142b0472c:
    puVar12 = &DAT_143f3eda8;
  }
  local_23c = 0;
  local_248 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar12);
  lVar14 = -1;
  do {
    lVar14 = lVar14 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar14) != '\0');
  puVar12 = &DAT_143f3eda8;
  if (iVar15 != 0) {
    puVar12 = puVar17;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar12);
  iVar13 = (int)lVar14;
  _Src = *(void **)(lVar8 + 0x88);
  local_240 = iVar13;
  if (0 < iVar13) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_248,0);
    _Dst = local_248;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar13);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_238;
  local_1e0 = *local_238;
  local_1d8 = local_238[1];
  if (local_1d8 != 0) {
    LOCK();
    *(int *)(local_1d8 + 8) = *(int *)(local_1d8 + 8) + 1;
    UNLOCK();
    piVar16 = local_228;
    puVar17 = local_208;
  }
  local_238 = (undefined8 *)0x0;
  local_230 = 0;
  if (((param_6 != &local_238) && (*(int *)(param_6 + 1) != 0)) &&
     (plVar2 = *param_6, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_238);
  }
  uVar9 = FString::FString(local_1c0,local_210);
  uVar10 = FString::FString(local_1b0,local_218);
  local_258 = &local_1e0;
  local_260 = &local_238;
  local_268 = &local_248;
  uVar6 = FUN_142b03ac0(local_1f0,local_1f8,uVar10,uVar9);
  if (local_248 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (*local_218 != 0) {
    FMemory::Free();
  }
  if (*local_210 != 0) {
    FMemory::Free();
  }
  FUN_142b22930(local_1e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar16 = (int *)((longlong)plVar2 + 0xc);
      iVar13 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142b04920 FUN_142b04920 body=3432 status=ok
// SIG undefined FUN_142b04920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b04a60) */
/* WARNING: Removing unreachable block (ram,0x000142b04a6d) */
/* WARNING: Removing unreachable block (ram,0x000142b04a86) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_142b04920(longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5,longlong param_6,longlong *param_7)

{
  void *_Dst;
  undefined8 ******_Src;
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *******pppppppuVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  code *pcVar15;
  longlong *plVar16;
  int *piVar17;
  undefined8 *******pppppppuVar18;
  longlong *plVar19;
  longlong **pplVar20;
  undefined2 *puVar21;
  int *piVar22;
  int *piVar23;
  undefined1 auStack_2d8 [32];
  undefined2 local_2b8;
  undefined4 *local_2a8;
  undefined8 local_2a0;
  int *local_298;
  undefined8 local_290;
  int *local_288;
  undefined8 local_280;
  uint local_278 [2];
  longlong local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong *local_258 [2];
  undefined8 *******local_248;
  undefined8 local_240;
  int local_238 [2];
  void *local_230;
  undefined2 *local_228;
  int local_220;
  longlong local_218 [6];
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8 [4];
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  undefined1 local_180 [8];
  longlong *local_178;
  undefined4 **local_170;
  longlong *local_168;
  longlong local_160;
  uint *local_158;
  undefined8 local_150;
  longlong local_148 [2];
  longlong local_138 [2];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_118 [16];
  longlong local_108 [2];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_1e8 = (code *)*param_7;
  plVar16 = param_7;
  if (local_1e8 == (code *)0x0) {
    local_1e8 = *(code **)(param_1 + 8);
    plVar16 = (longlong *)(param_1 + 8);
  }
  plVar16 = (longlong *)plVar16[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_1b8._0_4_ = SUB84(local_1e8,0);
  local_1b8._4_4_ = (undefined4)((ulonglong)local_1e8 >> 0x20);
  uStack_1b0._0_4_ = SUB84(plVar16,0);
  uStack_1b0._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_1b0._4_4_;
  uStack_60 = (undefined4)uStack_1b0;
  uStack_64 = local_1b8._4_4_;
  local_68 = (undefined4)local_1b8;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = param_7;
  local_1d8 = param_5;
  local_260 = param_4;
  local_230 = param_2;
  local_1d0 = param_1;
  local_1c8 = param_3;
  local_f8 = (longlong)local_1e8;
  plStack_f0 = plVar16;
  local_c0 = FUN_142abcbb0(&DAT_1456d4308);
  local_218[0] = 0;
  local_218[1] = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218,0);
  FGenericPlatformString::Memcpy(local_218[0],L"/v1/client/{title}/players/item_trade",0x4c);
  local_1a8[2] = 0;
  local_1a8[3] = 0;
  FUN_142abaf10(&local_228,local_1a8 + 2,local_218);
  if (local_1a8[2] != 0) {
    FMemory::Free();
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  uVar9 = FString::FString(local_118,param_3);
  puVar10 = (undefined8 *)FUN_142accce0(local_138,uVar9);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*puVar10;
  }
  FString::ReplaceInline(&local_228,L"{title}",puVar21,1);
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  local_298 = (int *)0x0;
  local_290 = 1;
  iVar6 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_298,0);
  piVar22 = local_298;
  *local_298 = iVar6;
  if ((int)local_290 == 0) {
LAB_142b04bd3:
    uStack_e4 = 2;
    local_288 = (int *)0x0;
    local_280 = 1;
    iVar6 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_288,0);
    piVar23 = local_288;
    *local_288 = iVar6;
    if ((int)local_280 == 0) {
LAB_142b04d1a:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b04d24:
      local_1a8[1] = 0xc;
      local_1a8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a8,0);
      lVar4 = local_1a8[0];
      FGenericPlatformString::Memcpy(local_1a8[0],L"EndpointUrl",0x18);
      lVar13 = (longlong)local_1e8;
      local_248 = (undefined8 *******)0x0;
      local_240 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1e8 + 0x38,local_238,local_1a8);
      if (local_238[0] == -1) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(lVar13 + 0x38) + (longlong)local_238[0] * 0x28;
      }
      pppppppuVar18 = (undefined8 *******)0x0;
      pppppppuVar11 = (undefined8 *******)(lVar13 + 0x10);
      if (lVar13 == 0) {
        pppppppuVar11 = pppppppuVar18;
      }
      iVar6 = 0;
      if ((pppppppuVar11 != (undefined8 *******)0x0) &&
         (iVar6 = 0, &local_248 != (undefined8 ********)pppppppuVar11)) {
        iVar6 = *(int *)(pppppppuVar11 + 1);
        _Src = *pppppppuVar11;
        local_240 = CONCAT44(local_240._4_4_,iVar6);
        if (iVar6 == 0) {
          pppppppuVar18 = (undefined8 *******)0x0;
          iVar6 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,iVar6,0);
          pppppppuVar18 = local_248;
          _guard_xfg_dispatch_icall_nop(local_248,_Src,(longlong)iVar6 * 2);
          iVar6 = (int)local_240;
        }
      }
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
      if (iVar6 < 2) {
        if (pppppppuVar18 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar18);
        }
        if (piVar23 != (int *)0x0) {
          FMemory::Free(piVar23);
        }
        if (piVar22 != (int *)0x0) {
          FMemory::Free(piVar22);
        }
        if (local_228 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar19 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_f0 + 1;
          lVar13 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar22 = (int *)((longlong)plVar19 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar19 + 8))(plVar19,1);
            }
          }
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar16 + 1;
          lVar13 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar22 = (int *)((longlong)plVar16 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        if (*local_1c8 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
        plVar16 = (longlong *)local_1c0[1];
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar16 + 1;
          lVar13 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar22 = (int *)((longlong)plVar16 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        return 0;
      }
      puVar21 = &DAT_143f3eda8;
      if (local_220 != 0) {
        puVar21 = local_228;
      }
      pppppppuVar11 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar6 != 0) {
        pppppppuVar11 = pppppppuVar18;
      }
      FString::PrintfImpl(local_148,L"%ls%ls",pppppppuVar11,puVar21);
      local_1e8 = FUN_142affa20;
      uStack_1e0 = 0;
      plVar12 = (longlong *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1d0 + 0x20,local_128);
      plVar19 = (longlong *)plVar12[1];
      lVar13 = *plVar12;
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
      }
      plVar12 = (longlong *)FMemory::Realloc(0,0x40);
      local_258[0] = plVar12;
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar12[1] = lVar13;
        plVar12[2] = (longlong)plVar19;
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
        }
        *(undefined4 *)(plVar12 + 3) = (undefined4)local_1e8;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = local_1e8._4_4_;
        *(undefined4 *)(plVar12 + 4) = uStack_1e0;
        *(undefined4 *)((longlong)plVar12 + 0x24) = uStack_1dc;
        lVar13 = FDelegateHandle::GenerateNewID();
        plVar12[6] = lVar13;
        *plVar12 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar19 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
        plVar12 = local_258[0];
        if ((int)lVar13 == 1) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar22 = (int *)((longlong)plVar19 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
          plVar12 = local_258[0];
          if (iVar6 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
            piVar22 = local_298;
            piVar23 = local_288;
            plVar12 = local_258[0];
          }
        }
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_120 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
        plVar12 = local_258[0];
        if ((int)lVar13 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar22 = (int *)((longlong)local_120 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
          plVar12 = local_258[0];
          if (iVar6 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
            piVar22 = local_298;
            piVar23 = local_288;
            plVar12 = local_258[0];
          }
        }
      }
      lVar13 = operator_new(0x170);
      if (lVar13 == 0) {
        local_270 = 0;
      }
      else {
        local_270 = FUN_142af8bf0(lVar13);
      }
      plVar19 = (longlong *)0x0;
      plVar14 = (longlong *)operator_new(0x18);
      if (plVar14 != (longlong *)0x0) {
        *(undefined4 *)(plVar14 + 1) = 1;
        *plVar14 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
        plVar14[2] = local_270;
        plVar19 = plVar14;
      }
      local_268 = plVar19;
      SharedPointerInternals::EnableSharedFromThis(&local_270,local_270,local_270);
      lVar13 = local_270;
      plVar19 = (longlong *)(local_270 + 0x88);
      if (plVar19 != local_108) {
        if (*plVar19 != 0) {
          FMemory::Free();
        }
        *plVar19 = 0;
        *(undefined8 *)(lVar13 + 0x90) = 0;
      }
      lVar13 = local_270;
      pplVar20 = (longlong **)(local_270 + 0x130);
      if (local_258 != pplVar20) {
        if (plVar12 == (longlong *)0x0) {
          if ((*(int *)(local_270 + 0x138) != 0) &&
             (plVar19 = *pplVar20, plVar19 != (longlong *)0x0)) {
            (**(code **)(*plVar19 + 0x28))(plVar19,0);
            if (*pplVar20 != (longlong *)0x0) {
              plVar19 = (longlong *)FMemory::Realloc(*pplVar20,0,0);
              *pplVar20 = plVar19;
            }
            *(undefined4 *)(lVar13 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar12 + 0x30))(plVar12,pplVar20);
        }
      }
      FString::operator=(local_270 + 0x20,local_230);
      puVar10 = local_1d8;
      if ((local_c0 == 1) || (local_c0 == 4)) {
        if (1 < *(int *)(local_1d8 + 1)) {
          local_2a8 = (undefined4 *)0x0;
          local_2a0 = 0;
          cVar5 = FString::StartsWith(local_1d8,&DAT_1456b4f3c,1);
          if (((cVar5 == '\0') &&
              (cVar5 = FString::StartsWith(puVar10,&DAT_1456d5048,1), cVar5 == '\0')) &&
             (local_2a8 != &DAT_1456b500c)) {
            iVar6 = local_2a0._4_4_;
            if (local_2a0._4_4_ != 2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2a8,2);
              iVar6 = local_2a0._4_4_;
            }
            iVar7 = (int)local_2a0 + 2;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar7);
            if (iVar6 < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8);
            }
            *local_2a8 = 0x22;
          }
          uVar2 = local_2a0;
          iVar6 = *(int *)(puVar10 + 1) + -1;
          local_230 = (void *)*puVar10;
          if (*(int *)(puVar10 + 1) == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            iVar7 = (int)local_2a0;
            lVar13 = (longlong)(int)local_2a0;
            iVar8 = (uint)((int)local_2a0 == 0) + iVar6 + (int)local_2a0;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar8);
            if (local_2a0._4_4_ < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,uVar2 & 0xffffffff);
            }
            _Dst = (void *)((longlong)local_2a8 + (lVar13 - (ulonglong)(iVar7 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,local_230,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
            puVar10 = local_1d8;
          }
          cVar5 = FString::EndsWith(puVar10,&DAT_1456b518c,1);
          uVar2 = local_2a0;
          if (cVar5 == '\0') {
            iVar6 = (int)local_2a0;
            lVar13 = (longlong)(int)local_2a0;
            iVar7 = (2 - (uint)((int)local_2a0 != 0)) + (int)local_2a0;
            local_2a0 = CONCAT44(local_2a0._4_4_,iVar7);
            if (local_2a0._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,uVar2 & 0xffffffff);
            }
            puVar21 = (undefined2 *)((longlong)local_2a8 + (lVar13 - (ulonglong)(iVar6 != 0)) * 2);
            *puVar21 = 0x22;
            puVar21[1] = 0;
          }
          local_218[2] = 0;
          local_218[3] = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218 + 2,0);
          local_2b8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_218[2],0xe,"If-None-Match");
          local_178 = local_218 + 2;
          local_170 = &local_2a8;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (local_270 + 0xc0,local_188,&local_178,0);
          if (local_218[2] != 0) {
            FMemory::Free();
          }
          if (local_2a8 != (undefined4 *)0x0) {
            FMemory::Free();
          }
        }
        if (1 < *(int *)(param_6 + 8)) {
          local_218[4] = 0;
          local_218[5] = 0x12;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218 + 4,0);
          local_2b8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_218[4],0x12,"If-Modified-Since");
          local_168 = local_218 + 4;
          local_160 = param_6;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (local_270 + 0xc0,local_184,&local_168,0);
          if (local_218[4] != 0) {
            FMemory::Free();
          }
        }
      }
      pcVar15 = (code *)FUN_142ae7d40();
      local_278[0] = (*pcVar15)(&local_f8,local_148,&local_270);
      if (local_278[0] != 0) {
        local_158 = local_278;
        local_150 = local_260;
        FUN_142ab70b0(local_1d0 + 0x1c0,local_180,&local_158,0);
      }
      plVar19 = local_268;
      uVar3 = local_278[0];
      if (local_268 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_268 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        piVar22 = local_298;
        piVar23 = local_288;
        plVar12 = local_258[0];
        if ((int)lVar13 == 1) {
          (**(code **)*local_268)(local_268);
          LOCK();
          piVar22 = (int *)((longlong)plVar19 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar22 = local_298;
          piVar23 = local_288;
          plVar12 = local_258[0];
          if (iVar6 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
            piVar22 = local_298;
            piVar23 = local_288;
            plVar12 = local_258[0];
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        local_258[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
        if (local_258[0] != (longlong *)0x0) {
          FMemory::Free(local_258[0]);
        }
      }
      if (local_148[0] != 0) {
        FMemory::Free();
      }
      if (local_248 != (undefined8 *******)0x0) {
        FMemory::Free(local_248);
      }
      if (piVar23 != (int *)0x0) {
        FMemory::Free(piVar23);
      }
      if (piVar22 != (int *)0x0) {
        FMemory::Free(piVar22);
      }
      if (local_228 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar19 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_f0 + 1;
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar22 = (int *)((longlong)plVar19 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar16 + 1;
        lVar13 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar22 = (int *)((longlong)plVar16 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      if (*local_1c8 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
      plVar16 = (longlong *)local_1c0[1];
      if (plVar16 == (longlong *)0x0) {
        return uVar3;
      }
      LOCK();
      plVar19 = plVar16 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 != 1) {
        return uVar3;
      }
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar22 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar6 != 1) {
        return uVar3;
      }
      (**(code **)(*plVar16 + 8))(plVar16,1);
      return uVar3;
    }
    for (piVar17 = local_288; piVar1 = local_288, piVar17 != local_288 + (int)local_280;
        piVar17 = piVar17 + 1) {
      if (*piVar17 == 2) {
        if ((int)((longlong)piVar17 - (longlong)local_288 >> 2) != -1) goto LAB_142b04d1a;
        break;
      }
    }
    do {
      if (piVar1 == local_288 + (int)local_280) goto LAB_142b04c72;
      if (*piVar1 == 1) {
        if ((int)((longlong)piVar1 - (longlong)local_288 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b04d24;
        }
        goto LAB_142b04c72;
      }
      piVar1 = piVar1 + 1;
    } while( true );
  }
  for (piVar23 = local_298; piVar23 != local_298 + (int)local_290; piVar23 = piVar23 + 1) {
    if (*piVar23 == 2) {
      if ((int)((longlong)piVar23 - (longlong)local_298 >> 2) != -1) goto LAB_142b04bd3;
      break;
    }
  }
LAB_142b04c7f:
  if (piVar22 != (int *)0x0) {
    FMemory::Free(piVar22);
  }
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar16 + 1;
    lVar13 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar22 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_260);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_7);
  return 0;
LAB_142b04c72:
  if (local_288 != (int *)0x0) {
    FMemory::Free(local_288);
  }
  goto LAB_142b04c7f;
}



// FUNCTION 142b05690 FUN_142b05690 body=3314 status=ok
// SIG undefined FUN_142b05690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b057c7) */
/* WARNING: Removing unreachable block (ram,0x000142b057d4) */
/* WARNING: Removing unreachable block (ram,0x000142b057ed) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_142b05690(longlong param_1,void *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,longlong *param_6)

{
  void *_Dst;
  undefined8 ******_Src;
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *******pppppppuVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  code *pcVar13;
  longlong *plVar14;
  int *piVar15;
  undefined8 *******pppppppuVar16;
  longlong *plVar17;
  longlong **pplVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  int *piVar21;
  int *piVar22;
  undefined1 auStack_2b8 [32];
  undefined2 local_298;
  undefined4 *local_288;
  undefined8 local_280;
  int *local_278;
  undefined8 local_270;
  int *local_268;
  undefined8 local_260;
  uint local_258 [2];
  longlong local_250;
  longlong *local_248;
  longlong *local_240 [2];
  undefined8 *******local_230;
  undefined8 local_228;
  int local_220 [2];
  undefined8 local_218;
  void *local_210;
  longlong local_208 [8];
  undefined2 *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180 [2];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined4 **local_158;
  longlong *local_150;
  longlong local_148;
  uint *local_140;
  undefined8 local_138;
  longlong local_130 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  longlong local_110 [3];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_1b8 = (code *)*param_6;
  plVar14 = param_6;
  if (local_1b8 == (code *)0x0) {
    local_1b8 = *(code **)(param_1 + 8);
    plVar14 = (longlong *)(param_1 + 8);
  }
  plVar14 = (longlong *)plVar14[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_190._0_4_ = SUB84(local_1b8,0);
  local_190._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
  uStack_188._0_4_ = SUB84(plVar14,0);
  uStack_188._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_188._4_4_;
  uStack_60 = (undefined4)uStack_188;
  uStack_64 = local_190._4_4_;
  local_68 = (undefined4)local_190;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  local_198 = param_6;
  local_218 = param_3;
  local_210 = param_2;
  local_1a8 = param_4;
  local_1a0 = param_1;
  local_f8 = (longlong)local_1b8;
  plStack_f0 = plVar14;
  local_c0 = FUN_142abcbb0(&DAT_1456ac830);
  local_208[2] = 0;
  local_208[3] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_208 + 2,0);
  FGenericPlatformString::Memcpy(local_208[2],L"/v2_0/qos_servers",0x24);
  local_208[0] = 0;
  local_208[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_208,0);
  FGenericPlatformString::Memcpy(local_208[0],&DAT_1456ac7b4,4);
  FUN_142abaf10(local_208 + 8,local_208,local_208 + 2);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_208[2] != 0) {
    FMemory::Free();
  }
  local_278 = (int *)0x0;
  local_270 = 1;
  iVar6 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_278,0);
  piVar22 = local_278;
  *local_278 = iVar6;
  if ((int)local_270 == 0) {
LAB_142b05909:
    uStack_e4 = 2;
    local_268 = (int *)0x0;
    local_260 = 1;
    iVar6 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_268,0);
    piVar21 = local_268;
    *local_268 = iVar6;
    if ((int)local_260 == 0) {
LAB_142b05a3b:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b05a45:
      local_180[1] = 0xc;
      local_180[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_180,0);
      lVar4 = local_180[0];
      FGenericPlatformString::Memcpy(local_180[0],L"EndpointUrl",0x18);
      lVar11 = (longlong)local_1b8;
      local_230 = (undefined8 *******)0x0;
      local_228 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1b8 + 0x38,local_220,local_180);
      if (local_220[0] == -1) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x38) + (longlong)local_220[0] * 0x28;
      }
      pppppppuVar16 = (undefined8 *******)0x0;
      pppppppuVar9 = (undefined8 *******)(lVar11 + 0x10);
      if (lVar11 == 0) {
        pppppppuVar9 = pppppppuVar16;
      }
      iVar6 = 0;
      if ((pppppppuVar9 != (undefined8 *******)0x0) &&
         (iVar6 = 0, &local_230 != (undefined8 ********)pppppppuVar9)) {
        iVar6 = *(int *)(pppppppuVar9 + 1);
        _Src = *pppppppuVar9;
        local_228 = CONCAT44(local_228._4_4_,iVar6);
        if (iVar6 == 0) {
          pppppppuVar16 = (undefined8 *******)0x0;
          iVar6 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_230,iVar6,0);
          pppppppuVar16 = local_230;
          _guard_xfg_dispatch_icall_nop(local_230,_Src,(longlong)iVar6 * 2);
          iVar6 = (int)local_228;
        }
      }
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
      if (iVar6 < 2) {
        if (pppppppuVar16 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar16);
        }
        if (piVar21 != (int *)0x0) {
          FMemory::Free(piVar21);
        }
        if (piVar22 != (int *)0x0) {
          FMemory::Free(piVar22);
        }
        if (local_1c8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar17 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_f0 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar22 = (int *)((longlong)plVar17 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar14 + 1;
          lVar11 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar22 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_218);
        plVar14 = (longlong *)local_198[1];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar14 + 1;
          lVar11 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar22 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar22;
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        return 0;
      }
      puVar20 = &DAT_143f3eda8;
      if (local_1c0 != 0) {
        puVar20 = local_1c8;
      }
      pppppppuVar9 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar6 != 0) {
        pppppppuVar9 = pppppppuVar16;
      }
      FString::PrintfImpl(local_130,L"%ls%ls",pppppppuVar9,puVar20);
      local_1b8 = FUN_142b00380;
      uStack_1b0 = 0;
      plVar10 = (longlong *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1a0 + 0x20,local_120);
      plVar17 = (longlong *)plVar10[1];
      lVar11 = *plVar10;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        piVar21 = local_268;
        piVar22 = local_278;
      }
      plVar10 = (longlong *)FMemory::Realloc(0,0x40);
      local_240[0] = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar10[1] = lVar11;
        plVar10[2] = (longlong)plVar17;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
          UNLOCK();
          piVar21 = local_268;
          piVar22 = local_278;
        }
        *(undefined4 *)(plVar10 + 3) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = local_1b8._4_4_;
        *(undefined4 *)(plVar10 + 4) = uStack_1b0;
        *(undefined4 *)((longlong)plVar10 + 0x24) = uStack_1ac;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[6] = lVar11;
        *plVar10 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar17 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        piVar21 = local_268;
        piVar22 = local_278;
        plVar10 = local_240[0];
        if ((int)lVar11 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar22 = (int *)((longlong)plVar17 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar21 = local_268;
          piVar22 = local_278;
          plVar10 = local_240[0];
          if (iVar6 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
            piVar21 = local_268;
            piVar22 = local_278;
            plVar10 = local_240[0];
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_118 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        piVar21 = local_268;
        piVar22 = local_278;
        plVar10 = local_240[0];
        if ((int)lVar11 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar22 = (int *)((longlong)local_118 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar21 = local_268;
          piVar22 = local_278;
          plVar10 = local_240[0];
          if (iVar6 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
            piVar21 = local_268;
            piVar22 = local_278;
            plVar10 = local_240[0];
          }
        }
      }
      lVar11 = operator_new(0x170);
      if (lVar11 == 0) {
        local_250 = 0;
      }
      else {
        local_250 = FUN_142af8bf0(lVar11);
      }
      plVar17 = (longlong *)0x0;
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 != (longlong *)0x0) {
        *(undefined4 *)(plVar12 + 1) = 1;
        *plVar12 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
        plVar12[2] = local_250;
        plVar17 = plVar12;
      }
      local_248 = plVar17;
      SharedPointerInternals::EnableSharedFromThis(&local_250,local_250,local_250);
      lVar11 = local_250;
      plVar17 = (longlong *)(local_250 + 0x88);
      if (plVar17 != local_110) {
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        *plVar17 = 0;
        *(undefined8 *)(lVar11 + 0x90) = 0;
      }
      lVar11 = local_250;
      pplVar18 = (longlong **)(local_250 + 0x130);
      if (local_240 != pplVar18) {
        if (plVar10 == (longlong *)0x0) {
          if ((*(int *)(local_250 + 0x138) != 0) &&
             (plVar17 = *pplVar18, plVar17 != (longlong *)0x0)) {
            (**(code **)(*plVar17 + 0x28))(plVar17,0);
            if (*pplVar18 != (longlong *)0x0) {
              plVar17 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
              *pplVar18 = plVar17;
            }
            *(undefined4 *)(lVar11 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar10 + 0x30))(plVar10,pplVar18);
        }
      }
      FString::operator=(local_250 + 0x20,local_210);
      puVar19 = local_1a8;
      if ((local_c0 == 1) || (local_c0 == 4)) {
        if (1 < *(int *)(local_1a8 + 1)) {
          local_288 = (undefined4 *)0x0;
          local_280 = 0;
          cVar5 = FString::StartsWith(local_1a8,&DAT_1456ac85c,1);
          if (((cVar5 == '\0') &&
              (cVar5 = FString::StartsWith(puVar19,&DAT_1456ad1d8,1), cVar5 == '\0')) &&
             (local_288 != &DAT_1456ac884)) {
            iVar6 = local_280._4_4_;
            if (local_280._4_4_ != 2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_288,2);
              iVar6 = local_280._4_4_;
            }
            iVar7 = (int)local_280 + 2;
            local_280 = CONCAT44(local_280._4_4_,iVar7);
            if (iVar6 < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288);
            }
            *local_288 = 0x22;
          }
          uVar2 = local_280;
          iVar6 = *(int *)(puVar19 + 1) + -1;
          local_210 = (void *)*puVar19;
          if (*(int *)(puVar19 + 1) == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            iVar7 = (int)local_280;
            lVar11 = (longlong)(int)local_280;
            iVar8 = (uint)((int)local_280 == 0) + (int)local_280 + iVar6;
            local_280 = CONCAT44(local_280._4_4_,iVar8);
            if (local_280._4_4_ < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,uVar2 & 0xffffffff);
            }
            _Dst = (void *)((longlong)local_288 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,local_210,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)_Dst + (longlong)iVar6 * 2) = 0;
            puVar19 = local_1a8;
          }
          cVar5 = FString::EndsWith(puVar19,&DAT_1456acb04,1);
          uVar2 = local_280;
          if (cVar5 == '\0') {
            iVar6 = (int)local_280;
            lVar11 = (longlong)(int)local_280;
            iVar7 = (2 - (uint)((int)local_280 != 0)) + (int)local_280;
            local_280 = CONCAT44(local_280._4_4_,iVar7);
            if (local_280._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,uVar2 & 0xffffffff);
            }
            puVar20 = (undefined2 *)((longlong)local_288 + (lVar11 - (ulonglong)(iVar6 != 0)) * 2);
            *puVar20 = 0x22;
            puVar20[1] = 0;
          }
          local_208[4] = 0;
          local_208[5] = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_208 + 4,0);
          local_298 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_208[4],0xe,"If-None-Match");
          local_160 = local_208 + 4;
          local_158 = &local_288;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (local_250 + 0xc0,local_170,&local_160,0);
          if (local_208[4] != 0) {
            FMemory::Free();
          }
          if (local_288 != (undefined4 *)0x0) {
            FMemory::Free();
          }
        }
        if (1 < *(int *)(param_5 + 8)) {
          local_208[6] = 0;
          local_208[7] = 0x12;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_208 + 6,0);
          local_298 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_208[6],0x12,"If-Modified-Since");
          local_150 = local_208 + 6;
          local_148 = param_5;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (local_250 + 0xc0,local_16c,&local_150,0);
          if (local_208[6] != 0) {
            FMemory::Free();
          }
        }
      }
      pcVar13 = (code *)FUN_142ae7d40();
      local_258[0] = (*pcVar13)(&local_f8,local_130,&local_250);
      if (local_258[0] != 0) {
        local_140 = local_258;
        local_138 = local_218;
        FUN_142ab70b0(local_1a0 + 0x170,local_168,&local_140,0);
      }
      plVar17 = local_248;
      uVar3 = local_258[0];
      if (local_248 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_248 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        piVar21 = local_268;
        piVar22 = local_278;
        plVar10 = local_240[0];
        if ((int)lVar11 == 1) {
          (**(code **)*local_248)(local_248);
          LOCK();
          piVar22 = (int *)((longlong)plVar17 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          piVar21 = local_268;
          piVar22 = local_278;
          plVar10 = local_240[0];
          if (iVar6 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
            piVar21 = local_268;
            piVar22 = local_278;
            plVar10 = local_240[0];
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        local_240[0] = (longlong *)FMemory::Realloc(plVar10,0,0);
        if (local_240[0] != (longlong *)0x0) {
          FMemory::Free(local_240[0]);
        }
      }
      if (local_130[0] != 0) {
        FMemory::Free();
      }
      if (local_230 != (undefined8 *******)0x0) {
        FMemory::Free(local_230);
      }
      if (piVar21 != (int *)0x0) {
        FMemory::Free(piVar21);
      }
      if (piVar22 != (int *)0x0) {
        FMemory::Free(piVar22);
      }
      if (local_1c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar17 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_f0 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar22 = (int *)((longlong)plVar17 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        lVar11 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar22 = (int *)((longlong)plVar14 + 0xc);
          iVar6 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_218);
      plVar14 = (longlong *)local_198[1];
      if (plVar14 == (longlong *)0x0) {
        return uVar3;
      }
      LOCK();
      plVar17 = plVar14 + 1;
      lVar11 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar11 != 1) {
        return uVar3;
      }
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar22 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar6 != 1) {
        return uVar3;
      }
      (**(code **)(*plVar14 + 8))(plVar14,1);
      return uVar3;
    }
    for (piVar15 = local_268; piVar1 = local_268, piVar15 != local_268 + (int)local_260;
        piVar15 = piVar15 + 1) {
      if (*piVar15 == 2) {
        if ((int)((longlong)piVar15 - (longlong)local_268 >> 2) != -1) goto LAB_142b05a3b;
        break;
      }
    }
    do {
      if (piVar1 == local_268 + (int)local_260) goto LAB_142b059a2;
      if (*piVar1 == 1) {
        if ((int)((longlong)piVar1 - (longlong)local_268 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b05a45;
        }
        goto LAB_142b059a2;
      }
      piVar1 = piVar1 + 1;
    } while( true );
  }
  for (piVar21 = local_278; piVar21 != local_278 + (int)local_270; piVar21 = piVar21 + 1) {
    if (*piVar21 == 2) {
      if ((int)((longlong)piVar21 - (longlong)local_278 >> 2) != -1) goto LAB_142b05909;
      break;
    }
  }
LAB_142b059af:
  if (piVar22 != (int *)0x0) {
    FMemory::Free(piVar22);
  }
  if (local_1c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar11 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar22 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_6);
  return 0;
LAB_142b059a2:
  if (local_268 != (int *)0x0) {
    FMemory::Free(local_268);
  }
  goto LAB_142b059af;
}



// FUNCTION 142b06390 FUN_142b06390 body=211 status=ok
// SIG undefined FUN_142b06390(void)

void FUN_142b06390(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  puVar5 = &DAT_143f3eda8;
  local_38 = 0;
  local_30 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  local_res10 = param_2;
  puVar2 = (undefined8 *)FName::ToString(&local_res10,&local_28);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar2;
  }
  uVar3 = FUN_142ae8a80();
  cVar1 = FConfigCacheIni::GetString(DAT_1468b6148,puVar5,puVar4,&local_38,uVar3);
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if ((cVar1 != '\0') && (1 < (int)local_30)) {
    local_20 = &local_38;
    local_28 = param_3;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              (param_1 + 0x38,local_res18,&local_28,0);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b06470 FUN_142b06470 body=1947 status=ok
// SIG undefined FUN_142b06470(void)

void FUN_142b06470(longlong *param_1,short *param_2)

{
  undefined8 ***_Src;
  uint uVar1;
  undefined8 ***pppuVar2;
  wint_t wVar3;
  wint_t wVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  wchar_t *pwVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  wint_t *pwVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuVar15;
  int iVar16;
  undefined8 ***pppuVar17;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 ***local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 ***local_58;
  undefined8 local_50;
  undefined8 ***local_48;
  undefined8 ***local_40;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar10 < DAT_146b2adb8) && (_Init_thread_header(&DAT_146b2adb8), DAT_146b2adb8 == -1)) {
    FName::FName(&DAT_146b2adb0,L"ArchwayTMS",1);
    _Init_thread_footer(&DAT_146b2adb8);
  }
  if ((*piVar10 < DAT_146b2adc8) && (_Init_thread_header(&DAT_146b2adc8), DAT_146b2adc8 == -1)) {
    FName::FName(&DAT_146b2adc0,L"DiscoveryTMS",1);
    _Init_thread_footer(&DAT_146b2adc8);
  }
  ppppuVar6 = (undefined8 ****)0x0;
  iVar16 = 0;
  lVar11 = DAT_146b2adb0;
  if ((*param_1 != DAT_146b2ac50) && (lVar11 = 0, *param_1 == DAT_146b2ac88)) {
    lVar11 = DAT_146b2adc0;
  }
  local_res8 = 0;
  ppppuVar7 = ppppuVar6;
  if (lVar11 != 0) {
    local_58 = (undefined8 ***)0x0;
    local_50 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"EndpointUrl",0x18);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_58 = (undefined8 ***)0x0;
    local_50 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"MaxRetryAttempts",0x22);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_58 = (undefined8 ***)0x0;
    local_50 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"HttpTimeout",0x18);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_58 = (undefined8 ***)0x0;
    local_50 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"BaseRetrySeconds",0x22);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_58 = (undefined8 ***)0x0;
    local_50 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"RetryMultiplier",0x20);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_58 = (undefined8 ***)0x0;
    local_50 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"FirstAttemptDelay",0x24);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_58 = (undefined8 ***)0x0;
    local_50 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"RetryJitter",0x18);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_58 = (undefined8 ***)0x0;
    local_50 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"SupportsCompression",0x28);
    FUN_142b06390(param_1,lVar11,&local_58);
    if (local_58 != (undefined8 ***)0x0) {
      FMemory::Free();
    }
    local_48 = (undefined8 ***)0x0;
    local_40 = (undefined8 ***)0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pppuVar17 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"Environment",0x18);
    local_58 = (undefined8 ****)0x0;
    local_50 = 0;
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 7,&local_res8,&local_48);
    if ((int)local_res8 != -1) {
      ppppuVar7 = (undefined8 ****)(param_1[7] + (longlong)(int)local_res8 * 0x28);
    }
    ppppuVar5 = ppppuVar7 + 2;
    if (ppppuVar7 == (undefined8 ****)0x0) {
      ppppuVar5 = ppppuVar6;
    }
    ppppuVar14 = ppppuVar6;
    if ((ppppuVar5 == (undefined8 ****)0x0) || (&local_58 == ppppuVar5)) {
LAB_142b06819:
      iVar16 = 0;
      ppppuVar7 = ppppuVar6;
      if (ppppuVar14 != (undefined8 ****)0x0) {
        FMemory::Free(ppppuVar14);
        ppppuVar7 = (undefined8 ****)0x0;
      }
    }
    else {
      iVar16 = *(int *)(ppppuVar5 + 1);
      pppuVar15 = *ppppuVar5;
      local_50 = CONCAT44(local_50._4_4_,iVar16);
      if (iVar16 == 0) {
        ppppuVar14 = (undefined8 ****)0x0;
        iVar16 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar16,0);
        ppppuVar14 = (undefined8 ****)local_58;
        _guard_xfg_dispatch_icall_nop(local_58,pppuVar15,(longlong)iVar16 * 2);
        iVar16 = (int)local_50;
      }
      if ((iVar16 == 0) || (ppppuVar7 = ppppuVar14, iVar16 + -1 < 1)) goto LAB_142b06819;
    }
    if (pppuVar17 != (undefined8 ***)0x0) {
      FMemory::Free(pppuVar17);
    }
    if (iVar16 < 2) {
      local_58 = (undefined8 ****)0x0;
      local_50 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"Environment",0x18);
      FUN_142b06390(param_1,lVar11,&local_58);
      if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
        FMemory::Free();
      }
    }
  }
  pppuVar15 = (undefined8 ***)0x0;
  local_48 = (undefined8 ***)0x0;
  pppuVar17 = pppuVar15;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (param_2[lVar11] != 0);
    uVar9 = (int)lVar11 + 1;
    local_40 = (undefined8 ***)(ulonglong)uVar9;
    uVar1 = uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar1 = (uint)local_40;
    }
    pppuVar17 = local_48;
    pppuVar15 = (undefined8 ***)(ulonglong)uVar1;
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar9 * 2);
  }
  local_48 = (undefined8 ****)0x0;
  local_40 = (undefined8 ***)&DAT_0000000c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  pppuVar2 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"EndpointUrl",0x18);
  local_58 = (undefined8 ****)0x0;
  param_1 = param_1 + 7;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_res10 = param_1;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1,&local_res8,&local_48);
  if ((int)local_res8 == -1) {
    lVar11 = 0;
  }
  else {
    lVar11 = *param_1 + (longlong)(int)local_res8 * 0x28;
  }
  ppppuVar6 = (undefined8 ****)0x0;
  ppppuVar5 = (undefined8 ****)(lVar11 + 0x10);
  if (lVar11 == 0) {
    ppppuVar5 = ppppuVar6;
  }
  if ((ppppuVar5 == (undefined8 ****)0x0) || (&local_58 == ppppuVar5)) {
LAB_142b069c0:
    local_68 = (undefined8 ****)0x0;
    iVar13 = (int)pppuVar15;
    local_60 = iVar13;
    if (iVar13 == 0) {
      local_5c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,pppuVar15,0);
      _guard_xfg_dispatch_icall_nop(local_68,pppuVar17,(longlong)iVar13 * 2);
    }
    if (ppppuVar6 != (undefined8 ****)0x0) {
      FMemory::Free(ppppuVar6);
    }
  }
  else {
    local_50._0_4_ = *(int *)(ppppuVar5 + 1);
    lVar11 = (longlong)(int)local_50;
    _Src = *ppppuVar5;
    if ((int)local_50 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,(int)local_50,0);
      ppppuVar6 = (undefined8 ****)local_58;
      _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar11 * 2);
    }
    if (((int)local_50 == 0) || ((int)local_50 + -1 < 1)) goto LAB_142b069c0;
    local_5c = local_50._4_4_;
    local_68 = ppppuVar6;
    local_60 = (int)local_50;
  }
  if ((undefined8 ****)pppuVar2 != (undefined8 ****)0x0) {
    FMemory::Free(pppuVar2);
  }
  if (pppuVar17 != (undefined8 ***)0x0) {
    FMemory::Free(pppuVar17);
  }
  if (iVar16 < 2) {
    ppppuVar6 = (undefined8 ****)FUN_142ae8a30(&local_48);
    if (&local_58 != ppppuVar6) {
      if (ppppuVar7 != (undefined8 ****)0x0) {
        FMemory::Free(ppppuVar7);
      }
      ppppuVar7 = (undefined8 ****)*ppppuVar6;
      *ppppuVar6 = (undefined8 ***)0x0;
      iVar16 = *(int *)(ppppuVar6 + 1);
      ppppuVar6[1] = (undefined8 ***)0x0;
    }
    if ((undefined8 ****)local_48 != (undefined8 ****)0x0) {
      FMemory::Free();
    }
  }
  if ((1 < local_60) && (1 < iVar16)) {
    pwVar12 = &DAT_1456b82e0;
    ppppuVar6 = (undefined8 ****)&DAT_143f3eda8;
    if (iVar16 != 0) {
      ppppuVar6 = ppppuVar7;
    }
    do {
      wVar3 = *(wint_t *)((longlong)pwVar12 + (longlong)(ppppuVar6 + -0x28ad705c));
      if ((wVar3 == 0) && (*pwVar12 == 0)) {
        pwVar8 = L"-%ENV%";
        ppppuVar6 = (undefined8 ****)&DAT_1456af844;
        goto LAB_142b06adf;
      }
      if (wVar3 != *pwVar12) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar12);
        if (wVar3 != wVar4) goto LAB_142b06ad2;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
LAB_142b06b52:
  if ((undefined8 ****)local_68 != (undefined8 ****)0x0) {
    FMemory::Free();
  }
  if (ppppuVar7 != (undefined8 ****)0x0) {
    FMemory::Free(ppppuVar7);
  }
  return;
LAB_142b06ad2:
  pwVar8 = L"%ENV%";
  ppppuVar6 = (undefined8 ****)&DAT_143f3eda8;
  if (iVar16 != 0) {
    ppppuVar6 = ppppuVar7;
  }
LAB_142b06adf:
  FString::ReplaceInline(&local_68,pwVar8,ppppuVar6,1);
  local_50._0_4_ = 0xc;
  local_50._4_4_ = 0;
  local_58 = (undefined8 ****)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"EndpointUrl",0x18);
  local_48 = &local_58;
  local_40 = &local_68;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>(local_res10,&local_res8,&local_48,0)
  ;
  if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
    FMemory::Free();
  }
  goto LAB_142b06b52;
}



// FUNCTION 142b06c10 FUN_142b06c10 body=33 status=ok
// SIG undefined FUN_142b06c10(void)

void FUN_142b06c10(longlong param_1)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>(param_1 + 0x38);
  FUN_142b06470(param_1,0);
  return;
}



// FUNCTION 142b06c40 FUN_142b06c40 body=11 status=ok
// SIG undefined FUN_142b06c40(void)

void FUN_142b06c40(undefined4 *param_1)

{
  *param_1 = 4;
  FUN_142b06c50();
  return;
}



// FUNCTION 142b06c50 FUN_142b06c50 body=135 status=ok
// SIG undefined FUN_142b06c50(void)

void FUN_142b06c50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x78) != &local_18) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,&local_10);
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



// FUNCTION 142b06ce0 FUN_142b06ce0 body=279 status=ok
// SIG undefined FUN_142b06ce0(void)

undefined8 FUN_142b06ce0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  LARGE_INTEGER local_res8;
  
  param_1[0x2a] = param_1[0x2a] + 1;
  iVar1 = param_1[0x2a];
  if ((int)param_1[0x2c] < iVar1) {
    return 0;
  }
  fVar4 = (float)param_1[0x2d];
  *param_1 = 1;
  fVar3 = (float)FGenericPlatformMath::SRand();
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar4,(float)(iVar1 + -1));
  iVar1 = param_1[0x2e];
  iVar2 = param_1[0x2b];
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x18) =
       (double)(int)(fVar4 * (float)iVar2 + (float)iVar1 * fVar3) +
       (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  FUN_142b06c50(param_1);
  return 1;
}



// FUNCTION 142b06e00 SetEndBone body=8 status=ok
// SIG undefined SetEndBone(void)

void FIKRigPoleSolver::SetEndBone(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  return;
}



// FUNCTION 142b06e10 FUN_142b06e10 body=44 status=ok
// SIG undefined FUN_142b06e10(void)

void FUN_142b06e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
            (param_1 + 0xc0,local_res8,&local_18,0);
  return;
}



// FUNCTION 142b06e40 AddUserId body=41 status=ok
// SIG undefined AddUserId(void)

void TSocialQuery<TSharedRef<FUniqueNetId_const_,0>,TSharedPtr<FOnlineUser,0>_const_&>::AddUserId
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
            (param_1 + 0x38,local_res8,&local_18,0);
  return;
}



// FUNCTION 142b06e70 FUN_142b06e70 body=3987 status=ok
// SIG undefined FUN_142b06e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b06e70(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  void *pvVar1;
  wchar_t *_Src;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  longlong lVar23;
  undefined2 **ppuVar24;
  uint uVar25;
  undefined2 *puVar26;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined2 *local_318;
  undefined8 local_310;
  undefined2 **local_308;
  undefined2 **local_300;
  undefined2 *local_2f8;
  undefined8 local_2f0;
  uint local_2e8;
  int local_2e4;
  undefined2 **local_2e0;
  undefined2 **local_2d8;
  wchar_t *local_2d0;
  uint local_2c8;
  undefined4 local_2c4;
  undefined2 *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  uint *local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined2 *local_280;
  int local_278;
  undefined2 *local_270;
  int local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  uint *local_248;
  int local_240;
  undefined8 *local_238;
  longlong local_230 [3];
  undefined **local_218 [18];
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined1 local_168 [128];
  longlong local_e8;
  void *local_e0;
  undefined1 local_c8 [112];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  iVar14 = *(int *)(param_2 + 1);
  if (1 < iVar14) {
    uVar17 = iVar14 - 1;
    if (iVar14 == 0) {
      uVar17 = 0;
    }
    if ((int)uVar17 < 0x41) {
      local_2f8 = (undefined2 *)0x0;
      local_2f0 = (ulonglong)uVar17;
      local_250 = param_1;
      local_238 = param_3;
      if (0 < (int)uVar17) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_2f8);
      }
      puVar11 = local_2f8;
      _guard_xfg_dispatch_icall_nop(local_2f8,0,(longlong)(int)uVar17);
      iVar14 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar14 = 0;
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*param_2;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_168,puVar13);
      _guard_xfg_dispatch_icall_nop(puVar11,local_e0,(longlong)iVar14);
      if (local_e8 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(local_c8,0,0x70);
      SHA256_Init(local_c8);
      uVar12 = 0;
      local_290 = 0x20;
      local_298 = (undefined8 *)0x0;
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_298,0);
      local_2b0 = (uint *)0x0;
      iVar14 = 0;
      local_2e4 = 0;
      local_2e0 = (undefined2 **)0x0;
      *local_298 = 0;
      local_298[1] = 0;
      local_298[2] = 0;
      local_298[3] = 0;
      local_260 = 0;
      local_258 = 0;
      FArchive::FArchive(local_218);
      local_188 = 0;
      local_218[0] = &PTR_FUN_143f4a100;
      local_180 = &local_260;
      local_178 = 0;
      FArchive::SetIsSaving(local_218,1);
      FArchive::SetIsPersistent(local_218,0);
      lVar23 = -1;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (PTR_s_hawk_1_payload_146686100[lVar5] != '\0');
      FMemoryWriter::Serialize(local_218,PTR_s_hawk_1_payload_146686100,(longlong)(int)lVar5);
      FMemoryWriter::Serialize(local_218,&DAT_1456aede4,1);
      if (*(int *)(param_1 + 0x48) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = *(undefined2 **)(param_1 + 0x40);
        iVar14 = *(int *)(param_1 + 0x48) + -1;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_168,puVar11);
      FMemoryWriter::Serialize(local_218,local_e0,(longlong)iVar14);
      if (local_e8 != 0) {
        FMemory::Free();
      }
      FMemoryWriter::Serialize(local_218,&DAT_1456aeecc,1);
      FMemoryWriter::Serialize
                (local_218,*(undefined8 *)(param_1 + 0x88),(longlong)*(int *)(param_1 + 0x90));
      FMemoryWriter::Serialize(local_218,&DAT_1456aefac,1);
      FUN_143ce80e0(local_260,(longlong)(int)local_258,local_298);
      plVar6 = (longlong *)FBase64::Encode(&local_308,&local_298);
      if (local_230 != plVar6) {
        local_2b0 = (uint *)*plVar6;
        *plVar6 = 0;
        local_2e4 = (int)plVar6[1];
        plVar6[1] = 0;
      }
      if (local_308 != (undefined2 **)0x0) {
        FMemory::Free();
      }
      lVar5 = -1;
      do {
        lVar15 = lVar5;
        lVar5 = lVar15 + 1;
      } while (PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_1466860f0[lVar5] != '\0');
      local_2a8 = (undefined8 *)0x0;
      local_2a0 = 0x20;
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
      *local_2a8 = 0;
      local_2a8[1] = 0;
      local_2a8[2] = 0;
      local_2a8[3] = 0;
      uVar21 = uVar12;
      if (0 < (int)local_2a0) {
        do {
          if ((int)lVar5 < 1) {
            iVar14 = 0;
          }
          else {
            iVar2 = rand();
            iVar14 = (int)lVar15;
            iVar2 = (int)((float)iVar2 * 3.051851e-05 * (float)(int)lVar5);
            if (iVar2 <= iVar14) {
              iVar14 = iVar2;
            }
          }
          uVar17 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar17;
          *(undefined *)(uVar21 + (longlong)local_2a8) =
               PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_1466860f0[iVar14];
          uVar21 = uVar21 + 1;
        } while ((int)uVar17 < (int)local_2a0);
      }
      FBase64::Encode(&local_270,&local_2a8);
      FDateTime::UtcNow(&local_288);
      local_288 = local_288 + *param_4;
      local_320 = 0;
      local_328 = (uint *)((ulonglong)local_328._4_4_ << 0x20);
      local_330 = (uint *)((ulonglong)local_330._4_4_ << 0x20);
      local_338 = (undefined2 *)((ulonglong)local_338._4_4_ << 0x20);
      plVar6 = (longlong *)FDateTime::FDateTime(&local_2e0,0x7b2,1);
      lVar5 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_288 - *plVar6),8) +
              (local_288 - *plVar6);
      FString::PrintfImpl(&local_280,L"%llu",(lVar5 >> 0x17) - (lVar5 >> 0x3f));
      local_2c8 = *(uint *)(param_1 + 0x18);
      lVar5 = (longlong)(int)local_2c8;
      local_2d0 = (wchar_t *)0x0;
      pvVar1 = *(void **)(param_1 + 0x10);
      if (local_2c8 == 0) {
        local_2c4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2d0,local_2c8,0);
        _guard_xfg_dispatch_icall_nop(local_2d0,pvVar1,lVar5 * 2);
      }
      local_308 = (undefined2 **)0x0;
      local_300 = (undefined2 **)0x8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
      FGenericPlatformString::Memcpy(local_308,L"http://",0x10);
      FString::RemoveFromStart(&local_2d0,&local_308,1);
      if (local_308 != (undefined2 **)0x0) {
        FMemory::Free();
      }
      local_308 = (undefined2 **)0x0;
      local_300 = (undefined2 **)0x9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
      FGenericPlatformString::Memcpy(local_308,L"https://",0x12);
      FString::RemoveFromStart(&local_2d0,&local_308,1);
      if (local_308 != (undefined2 **)0x0) {
        FMemory::Free();
      }
      _Src = local_2d0;
      lVar5 = (longlong)(int)local_2c8;
      local_2d8 = (undefined2 **)0x0;
      local_308 = (undefined2 **)0x0;
      uVar17 = 0;
      local_2e0 = (undefined2 **)0x0;
      local_2e8 = 0;
      for (pwVar16 = local_2d0; pwVar16 != local_2d0 + lVar5; pwVar16 = pwVar16 + 1) {
        if (*pwVar16 == L'/') {
          uVar19 = (uint)((longlong)pwVar16 - (longlong)local_2d0 >> 1);
          if (uVar19 != 0xffffffff) {
            if (local_2c8 == 0) {
              pwVar16 = L"";
              uVar25 = uVar17;
            }
            else {
              pwVar16 = local_2d0;
              uVar25 = local_2c8 - 1;
            }
            uVar3 = uVar17;
            if ((-1 < (int)uVar19) && (uVar3 = uVar25, (int)uVar19 < (int)uVar25)) {
              uVar3 = uVar19;
            }
            local_2d8 = (undefined2 **)0x0;
            local_308 = (undefined2 **)0x0;
            uVar25 = uVar3 + 1;
            if (uVar3 == 0) {
              uVar25 = uVar17;
            }
            local_300 = (undefined2 **)(ulonglong)uVar25;
            if (0 < (int)uVar25) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308);
              uVar25 = (uint)local_300;
              local_2d8 = local_308;
              if (0 < (int)(uint)local_300) {
                wcsncpy((wchar_t *)local_308,pwVar16,(longlong)(int)uVar3);
                *(wchar_t *)((longlong)local_2d8 + (longlong)(int)uVar3 * 2) = L'\0';
              }
            }
            uVar3 = uVar19 + 0x7fffffff;
            uVar10 = 0;
            uVar17 = local_2c8 - 1;
            if (local_2c8 == 0) {
              uVar17 = uVar10;
            }
            if (uVar19 < uVar17) {
              uVar17 = uVar19;
            }
            uVar19 = local_2c8 - 1;
            if (local_2c8 == 0) {
              uVar19 = uVar10;
            }
            uVar20 = uVar17;
            if ((uVar17 <= uVar3) && (uVar20 = uVar19, uVar3 < uVar19)) {
              uVar20 = uVar3;
            }
            local_2e0 = (undefined2 **)0x0;
            local_308 = (undefined2 **)0x0;
            pwVar16 = L"";
            if (local_2c8 != 0) {
              pwVar16 = local_2d0;
            }
            iVar14 = uVar20 - uVar17;
            local_2e8 = iVar14 + 1;
            if (iVar14 == 0) {
              local_2e8 = uVar10;
            }
            local_300 = (undefined2 **)(ulonglong)local_2e8;
            if (0 < (int)local_2e8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
              ppuVar24 = local_308;
              local_2e0 = local_308;
              local_2e8 = (uint)local_300;
              if (0 < (int)(uint)local_300) {
                wcsncpy((wchar_t *)local_308,pwVar16 + (int)uVar17,(longlong)iVar14);
                *(wchar_t *)((longlong)ppuVar24 + (longlong)iVar14 * 2) = L'\0';
              }
            }
            goto LAB_142b0739f;
          }
          break;
        }
      }
      local_300 = (undefined2 **)(ulonglong)local_2c8;
      uVar25 = 0;
      if (local_2c8 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_308,local_2c8,0);
        local_2d8 = local_308;
        _guard_xfg_dispatch_icall_nop(local_308,_Src,lVar5 * 2);
        uVar25 = (uint)local_300;
      }
LAB_142b0739f:
      local_310 = 0xf;
      local_318 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
      puVar11 = local_318;
      FGenericPlatformString::Memcpy(local_318,L"hawk.1.header\n",0x1e);
      puVar13 = local_280;
      uVar12 = local_310;
      iVar14 = 0;
      if (local_278 != 0) {
        iVar14 = local_278 + -1;
      }
      if (iVar14 != 0) {
        iVar2 = (int)local_310;
        lVar5 = (longlong)(int)local_310;
        iVar4 = (uint)((int)local_310 == 0) + iVar14 + (int)local_310;
        local_310 = CONCAT44(local_310._4_4_,iVar4);
        if (local_310._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,uVar12 & 0xffffffff);
          puVar11 = local_318;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar11 + (lVar5 - (ulonglong)(iVar2 != 0)),puVar13,(longlong)iVar14 * 2);
        (puVar11 + (lVar5 - (ulonglong)(iVar2 != 0)))[iVar14] = 0;
      }
      iVar14 = (int)local_310;
      lVar5 = (longlong)(int)local_310;
      iVar2 = (2 - (uint)((int)local_310 != 0)) + (int)local_310;
      if (local_310._4_4_ < iVar2) {
        uVar12 = local_310 & 0xffffffff;
        local_310._0_4_ = iVar2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,uVar12);
        puVar11 = local_318;
        iVar2 = (int)local_310;
      }
      puVar13 = local_270;
      lVar5 = lVar5 - (ulonglong)(iVar14 != 0);
      puVar11[lVar5] = 10;
      puVar11[lVar5 + 1] = 0;
      if (local_268 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = local_268 + -1;
      }
      iVar4 = iVar2;
      if (iVar14 != 0) {
        local_310._0_4_ = iVar14 + (uint)(iVar2 == 0) + iVar2;
        if (local_310._4_4_ < (int)local_310) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar2);
          puVar11 = local_318;
        }
        iVar4 = (int)local_310;
        _guard_xfg_dispatch_icall_nop
                  (puVar11 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)),puVar13,
                   (longlong)iVar14 * 2);
        (puVar11 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)))[iVar14] = 0;
      }
      iVar14 = (2 - (uint)(iVar4 != 0)) + iVar4;
      local_310 = CONCAT44(local_310._4_4_,iVar14);
      if (local_310._4_4_ < iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar4);
        puVar11 = local_318;
        iVar14 = (int)local_310;
      }
      lVar5 = (longlong)iVar4 - (ulonglong)(iVar4 != 0);
      puVar11[lVar5] = 10;
      puVar11[lVar5 + 1] = 0;
      switch(*(undefined4 *)(local_250 + 4)) {
      case 0:
        pwVar16 = L"Post";
        break;
      case 1:
        pwVar16 = L"Get";
        break;
      case 2:
        pwVar16 = L"Put";
        break;
      case 3:
        pwVar16 = L"Delete";
        break;
      case 4:
        pwVar16 = L"Head";
        break;
      case 5:
        pwVar16 = L"Patch";
        break;
      default:
        pwVar16 = L"";
      }
      local_308 = (undefined2 **)0x0;
      local_300 = (undefined2 **)0x0;
      if (*pwVar16 != L'\0') {
        do {
          lVar23 = lVar23 + 1;
        } while (pwVar16[lVar23] != L'\0');
        uVar17 = (int)lVar23 + 1;
        local_300 = (undefined2 **)(ulonglong)uVar17;
        if (0 < (int)uVar17) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
        }
        FGenericPlatformString::Memcpy(local_308,pwVar16,(longlong)(int)uVar17 * 2);
      }
      puVar7 = (undefined8 *)FString::ToLower(&local_308);
      pvVar1 = (void *)*puVar7;
      iVar2 = *(int *)(puVar7 + 1) + -1;
      if (*(int *)(puVar7 + 1) == 0) {
        iVar2 = 0;
      }
      iVar4 = iVar14;
      if (iVar2 != 0) {
        iVar4 = iVar2 + (uint)(iVar14 == 0) + iVar14;
        local_310 = CONCAT44(local_310._4_4_,iVar4);
        if (local_310._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar14);
          puVar11 = local_318;
          iVar4 = (int)local_310;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar11 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)),pvVar1,
                   (longlong)iVar2 * 2);
        (puVar11 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)))[iVar2] = 0;
      }
      if (local_230[0] != 0) {
        FMemory::Free();
      }
      if (local_308 != (undefined2 **)0x0) {
        FMemory::Free();
      }
      iVar14 = (2 - (uint)(iVar4 != 0)) + iVar4;
      if (local_310._4_4_ < iVar14) {
        local_310._0_4_ = iVar14;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318);
        puVar11 = local_318;
        iVar14 = (int)local_310;
      }
      lVar23 = (longlong)(int)local_2e8;
      lVar5 = (longlong)iVar4 - (ulonglong)(iVar4 != 0);
      puVar11[lVar5] = 10;
      puVar11[lVar5 + 1] = 0;
      iVar2 = iVar14;
      if ((local_2e8 != 0) && (local_2e8 - 1 != 0)) {
        local_310._0_4_ = (local_2e8 - 1) + (uint)(iVar14 == 0) + iVar14;
        if (local_310._4_4_ < (int)local_310) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar14);
          puVar11 = local_318;
        }
        iVar2 = (int)local_310;
        _guard_xfg_dispatch_icall_nop
                  (puVar11 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)),local_2e0,lVar23 * 2 - 2)
        ;
        (puVar11 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)))[lVar23 + -1] = 0;
      }
      local_310._0_4_ = (2 - (uint)(iVar2 != 0)) + iVar2;
      iVar14 = (int)local_310;
      if (local_310._4_4_ < (int)local_310) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318);
        puVar11 = local_318;
        iVar14 = (int)local_310;
      }
      lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
      puVar11[lVar5] = 10;
      puVar11[lVar5 + 1] = 0;
      ppuVar24 = local_2d8;
      if ((uVar25 != 0) && (iVar2 = uVar25 - 1, iVar2 != 0)) {
        local_310._0_4_ = iVar2 + (uint)(iVar14 == 0) + iVar14;
        if (local_310._4_4_ < (int)local_310) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar14);
          puVar11 = local_318;
        }
        ppuVar24 = local_2d8;
        iVar4 = (int)local_310;
        _guard_xfg_dispatch_icall_nop
                  (puVar11 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)),local_2d8,
                   (longlong)iVar2 * 2);
        (puVar11 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)))[iVar2] = 0;
        iVar14 = iVar4;
      }
      local_310._0_4_ = (6 - (uint)(iVar14 != 0)) + iVar14;
      iVar2 = (int)local_310;
      if (local_310._4_4_ < (int)local_310) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318);
        puVar11 = local_318;
        iVar2 = (int)local_310;
      }
      lVar5 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
      *(undefined8 *)(puVar11 + lVar5) = 0x3300340034000a;
      puVar11[lVar5 + 4] = 10;
      puVar11[lVar5 + 5] = 0;
      iVar14 = iVar2;
      if ((local_2e4 != 0) && (iVar4 = local_2e4 + -1, iVar4 != 0)) {
        local_310._0_4_ = iVar2 + (uint)(iVar2 == 0) + iVar4;
        if (local_310._4_4_ < (int)local_310) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar2);
          puVar11 = local_318;
        }
        iVar14 = (int)local_310;
        _guard_xfg_dispatch_icall_nop
                  (puVar11 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)),local_2b0,
                   (longlong)iVar4 * 2);
        (puVar11 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)))[iVar4] = 0;
      }
      iVar2 = (3 - (uint)(iVar14 != 0)) + iVar14;
      local_310 = CONCAT44(local_310._4_4_,iVar2);
      if (local_310._4_4_ < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar14);
        puVar11 = local_318;
        iVar2 = (int)local_310;
      }
      lVar5 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
      *(undefined4 *)(puVar11 + lVar5) = 0xa000a;
      puVar11[lVar5 + 2] = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
        puVar13 = &DAT_143f3eda8;
      }
      else {
        iVar2 = iVar2 + -1;
        puVar13 = puVar11;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_168,puVar13);
      puVar7 = local_298;
      local_2e8 = 0;
      uVar8 = EVP_sha256();
      puVar13 = local_2f8;
      local_328 = &local_2e8;
      local_330 = (uint *)0x0;
      local_338 = (undefined2 *)(longlong)iVar2;
      puVar9 = (undefined8 *)HMAC(uVar8,local_2f8,local_2f0 & 0xffffffff,local_e0);
      if (puVar9 != (undefined8 *)0x0) {
        uVar8 = puVar9[1];
        *puVar7 = *puVar9;
        puVar7[1] = uVar8;
        uVar8 = puVar9[3];
        puVar7[2] = puVar9[2];
        puVar7[3] = uVar8;
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
      if (puVar11 != (undefined2 *)0x0) {
        FMemory::Free(puVar11);
      }
      if (local_2e0 != (undefined2 **)0x0) {
        FMemory::Free(local_2e0);
      }
      if (ppuVar24 != (undefined2 **)0x0) {
        FMemory::Free(ppuVar24);
      }
      if (local_2d0 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      lVar5 = local_250;
      puVar7 = (undefined8 *)(local_250 + 0x20);
      if (1 < *(int *)(local_238 + 1)) {
        puVar7 = local_238;
      }
      puVar11 = (undefined2 *)0x0;
      local_2f8 = (undefined2 *)0x0;
      iVar14 = *(int *)(puVar7 + 1);
      pvVar1 = (void *)*puVar7;
      local_2f0 = CONCAT44(local_2f0._4_4_,iVar14);
      iVar2 = 0;
      if (iVar14 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2f8,iVar14,0);
        puVar11 = local_2f8;
        _guard_xfg_dispatch_icall_nop(local_2f8,pvVar1,(longlong)iVar14 * 2);
        iVar2 = (int)local_2f0;
      }
      FBase64::Encode(&local_248,&local_298);
      puVar18 = local_2b0;
      local_2c0 = (undefined2 *)0x0;
      local_330 = (uint *)&DAT_143f3eda8;
      if (local_2e4 < 2) {
        if (local_240 != 0) {
          local_330 = local_248;
        }
        local_338 = &DAT_143f3eda8;
        if (local_268 != 0) {
          local_338 = local_270;
        }
        puVar22 = &DAT_143f3eda8;
        if (local_278 != 0) {
          puVar22 = local_280;
        }
        puVar26 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar26 = puVar11;
        }
        FString::PrintfImpl(&local_2f8,L"Hawk id=\"%s\", ts=\"%s\", nonce=\"%s\", mac=\"%s\"",
                            puVar26,puVar22);
        puVar18 = local_2b0;
        if (local_2c0 != (undefined2 *)0x0) {
          FMemory::Free();
          puVar18 = local_2b0;
        }
      }
      else {
        local_328 = (uint *)&DAT_143f3eda8;
        if (local_240 != 0) {
          local_328 = local_248;
        }
        if (local_2e4 != 0) {
          local_330 = local_2b0;
        }
        local_338 = &DAT_143f3eda8;
        if (local_268 != 0) {
          local_338 = local_270;
        }
        puVar22 = &DAT_143f3eda8;
        if (local_278 != 0) {
          puVar22 = local_280;
        }
        puVar26 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar26 = puVar11;
        }
        FString::PrintfImpl(&local_2f8,
                            L"Hawk id=\"%s\", ts=\"%s\", nonce=\"%s\", hash=\"%s\", mac=\"%s\"",
                            puVar26,puVar22);
        if (local_2c0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      local_2c0 = local_2f8;
      local_2b8 = (int)local_2f0;
      local_2b4 = local_2f0._4_4_;
      local_2f0 = 0xe;
      *(undefined1 *)(lVar5 + 0x168) = 1;
      local_2f8 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
      FGenericPlatformString::Memcpy(local_2f8,L"Authorization",0x1c);
      local_308 = &local_2f8;
      local_300 = &local_2c0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                (lVar5 + 0xc0,&local_2e4,&local_308,0);
      if (local_2f8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_2c0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_248 != (uint *)0x0) {
        FMemory::Free();
      }
      if (puVar11 != (undefined2 *)0x0) {
        FMemory::Free(puVar11);
      }
      if (local_280 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_270 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_2a8 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_218);
      if (local_260 != 0) {
        FMemory::Free();
      }
      if (puVar18 != (uint *)0x0) {
        FMemory::Free(puVar18);
      }
      if (local_298 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (puVar13 != (undefined2 *)0x0) {
        FMemory::Free(puVar13);
      }
    }
  }
  return;
}



// FUNCTION 142b07e20 FUN_142b07e20 body=1211 status=ok
// SIG undefined FUN_142b07e20(void)

undefined4 FUN_142b07e20(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  LARGE_INTEGER local_res8;
  longlong local_118;
  longlong *local_110;
  longlong local_108 [12];
  int local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FString::TrimStartInline(param_1 + 4);
  FString::TrimEndInline(param_1 + 4);
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x1a) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  plVar8 = (longlong *)FHttpModule::Get();
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8,local_60);
  local_110 = (longlong *)plVar8[1];
  local_118 = *plVar8;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)(param_1 + 0x1e);
  if (plVar8 != &local_118) {
    *plVar8 = local_118;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_110);
  }
  plVar3 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (*plVar8 != 0) {
    local_108[0] = 0;
    local_108[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
    FGenericPlatformString::Memcpy(local_108[0],L"Content-Type",0x1a);
    (**(code **)(*(longlong *)*plVar8 + 0x68))((longlong *)*plVar8,local_108,param_1 + 0x10);
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    if (0 < (int)param_1[0x24]) {
      (**(code **)(*(longlong *)*plVar8 + 0x58))((longlong *)*plVar8,param_1 + 0x22);
    }
    local_88 = (longlong *)(param_1 + 0x30);
    uStack_a4 = 1;
    iVar4 = param_1[0x3a];
    puStack_a0 = param_1 + 0x34;
    local_a8 = 0;
    uVar11 = 0;
    uStack_94 = 0;
    if (iVar4 != 0) {
      puVar12 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar12 = puStack_a0;
      }
      uVar5 = *puVar12;
      local_a8 = 0;
      while (uVar5 == 0) {
        lVar10 = (longlong)local_a8;
        uVar11 = uVar11 + 0x20;
        iVar9 = local_a8 + 1;
        uStack_94 = (ulonglong)uVar11 << 0x20;
        bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar9;
        if (bVar6) goto LAB_142b0806f;
        uVar5 = puVar12[lVar10 + 1];
      }
      uStack_a4 = -uVar5 & uVar5;
      iVar9 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iVar9 = (uVar11 - iVar9) + 0x1f;
      uStack_94._4_4_ = (undefined4)((ulonglong)uStack_94 >> 0x20);
      uStack_94 = CONCAT44(uStack_94._4_4_,iVar9);
      if (iVar4 < iVar9) {
LAB_142b0806f:
        uStack_94 = CONCAT44(uStack_94._4_4_,iVar4);
      }
    }
    local_98 = 0xffffffff;
    uStack_80 = CONCAT44(uStack_a4,local_a8);
    uStack_38 = 0xffffffff;
    iStack_34 = (int)uStack_94;
    uStack_30 = uStack_94._4_4_;
    uStack_2c = uStack_8c;
    uStack_70 = CONCAT44((int)uStack_94,0xffffffff);
    local_68 = uStack_94._4_4_;
    uStack_64 = uStack_8c;
    iVar9 = (int)uStack_94;
    local_78 = puStack_a0;
    local_50 = local_88;
    uStack_48 = uStack_80;
    puStack_40 = puStack_a0;
    if ((int)uStack_94 < iVar4) {
      do {
        lVar10 = *local_88 + (longlong)iVar9 * 0x28;
        (**(code **)(*(longlong *)*plVar8 + 0x68))((longlong *)*plVar8,lVar10,lVar10 + 0x10);
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        iVar9 = uStack_70._4_4_;
      } while (uStack_70._4_4_ < (int)local_78[6]);
    }
    (**(code **)(*(longlong *)*plVar8 + 0x50))((longlong *)*plVar8,param_1 + 4);
    iVar4 = param_1[1];
    if (iVar4 == 0) {
      local_108[10] = 0;
      local_108[0xb] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 10,0);
      FGenericPlatformString::Memcpy(local_108[10],L"POST",10);
      (**(code **)(*(longlong *)*plVar8 + 0x48))((longlong *)*plVar8,local_108 + 10);
      lVar10 = local_108[10];
    }
    else if (iVar4 == 1) {
      local_108[8] = 0;
      local_108[9] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 8,0);
      FGenericPlatformString::Memcpy(local_108[8],&DAT_1456ae920,8);
      (**(code **)(*(longlong *)*plVar8 + 0x48))((longlong *)*plVar8,local_108 + 8);
      lVar10 = local_108[8];
    }
    else if (iVar4 == 2) {
      local_108[6] = 0;
      local_108[7] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 6,0);
      FGenericPlatformString::Memcpy(local_108[6],&DAT_1456ae918,8);
      (**(code **)(*(longlong *)*plVar8 + 0x48))((longlong *)*plVar8,local_108 + 6);
      lVar10 = local_108[6];
    }
    else if (iVar4 == 3) {
      local_108[4] = 0;
      local_108[5] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 4,0);
      FGenericPlatformString::Memcpy(local_108[4],L"DELETE",0xe);
      (**(code **)(*(longlong *)*plVar8 + 0x48))((longlong *)*plVar8,local_108 + 4);
      lVar10 = local_108[4];
    }
    else {
      if (iVar4 != 5) goto LAB_142b082b5;
      local_108[2] = 0;
      local_108[3] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 2,0);
      FGenericPlatformString::Memcpy(local_108[2],L"PATCH",0xc);
      (**(code **)(*(longlong *)*plVar8 + 0x48))((longlong *)*plVar8,local_108 + 2);
      lVar10 = local_108[2];
    }
    if (lVar10 != 0) {
      FMemory::Free();
    }
    cVar7 = (**(code **)(*(longlong *)*plVar8 + 0x78))();
    if (cVar7 != '\0') {
      *param_1 = 2;
      return param_1[2];
    }
  }
LAB_142b082b5:
  FUN_142af9c10(param_1);
  return 0;
}



// FUNCTION 142b082e0 FUN_142b082e0 body=2671 status=ok
// SIG undefined FUN_142b082e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b08419) */
/* WARNING: Removing unreachable block (ram,0x000142b08425) */
/* WARNING: Removing unreachable block (ram,0x000142b0843d) */
/* WARNING: Type propagation algorithm not settling */

int FUN_142b082e0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined8 ******_Src;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 *******pppppppuVar14;
  undefined2 *puVar15;
  int *piVar16;
  longlong **pplVar17;
  int *piVar18;
  undefined1 auStack_268 [32];
  int *local_248;
  undefined8 local_240;
  int *local_238;
  undefined8 local_230;
  int local_228 [2];
  undefined8 local_220;
  longlong *local_218 [2];
  undefined8 *******local_208;
  undefined8 local_200;
  int local_1f8 [2];
  longlong local_1f0;
  longlong *local_1e8;
  undefined2 *local_1e0;
  int local_1d8;
  longlong local_1d0 [2];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188 [4];
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  int *local_150;
  undefined8 local_148;
  longlong local_140 [2];
  longlong local_130 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [24];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1c0 = (code *)*param_6;
  plVar12 = param_6;
  if (local_1c0 == (code *)0x0) {
    local_1c0 = *(code **)(param_1 + 8);
    plVar12 = (longlong *)(param_1 + 8);
  }
  plVar12 = (longlong *)plVar12[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_198._0_4_ = SUB84(local_1c0,0);
  local_198._4_4_ = (undefined4)((ulonglong)local_1c0 >> 0x20);
  uStack_190._0_4_ = SUB84(plVar12,0);
  uStack_190._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_190._4_4_;
  uStack_60 = (undefined4)uStack_190;
  uStack_64 = local_198._4_4_;
  local_68 = (undefined4)local_198;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_190 = 0;
  local_198 = 0;
  local_1a0 = param_6;
  local_220 = param_5;
  local_1b0 = param_1;
  local_1a8 = param_3;
  local_160 = param_4;
  local_158 = param_2;
  local_f8 = (longlong)local_1c0;
  plStack_f0 = plVar12;
  local_c0 = FUN_142abcbb0(L"POST");
  local_1d0[0] = 0;
  local_1d0[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0,0);
  FGenericPlatformString::Memcpy(local_1d0[0],L"/v1/client/{title}/puzzles",0x36);
  local_188[2] = 0;
  local_188[3] = 0;
  FUN_142abaf10(&local_1e0,local_188 + 2,local_1d0);
  if (local_188[2] != 0) {
    FMemory::Free();
  }
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FString::FString(local_110,param_3);
  puVar6 = (undefined8 *)FUN_142accce0(local_130,uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar6;
  }
  FString::ReplaceInline(&local_1e0,L"{title}",puVar15,1);
  if (local_130[0] != 0) {
    FMemory::Free();
  }
  local_248 = (int *)0x0;
  local_240 = 1;
  iVar4 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_248,0);
  piVar16 = local_248;
  *local_248 = iVar4;
  if ((int)local_240 == 0) {
LAB_142b0857a:
    uStack_e4 = 2;
    local_238 = (int *)0x0;
    local_230 = 1;
    iVar4 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_238,0);
    piVar18 = local_238;
    *local_238 = iVar4;
    if ((int)local_230 == 0) {
LAB_142b086a9:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b086b3:
      local_188[1] = 0xc;
      local_188[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
      lVar3 = local_188[0];
      FGenericPlatformString::Memcpy(local_188[0],L"EndpointUrl",0x18);
      lVar9 = (longlong)local_1c0;
      local_208 = (undefined8 *******)0x0;
      local_200 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1c0 + 0x38,local_1f8,local_188);
      if (local_1f8[0] == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x38) + (longlong)local_1f8[0] * 0x28;
      }
      pppppppuVar14 = (undefined8 *******)0x0;
      pppppppuVar7 = (undefined8 *******)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      iVar4 = 0;
      if ((pppppppuVar7 != (undefined8 *******)0x0) &&
         (iVar4 = 0, &local_208 != (undefined8 ********)pppppppuVar7)) {
        iVar4 = *(int *)(pppppppuVar7 + 1);
        _Src = *pppppppuVar7;
        local_200 = CONCAT44(local_200._4_4_,iVar4);
        if (iVar4 == 0) {
          pppppppuVar14 = (undefined8 *******)0x0;
          iVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,iVar4,0);
          pppppppuVar14 = local_208;
          _guard_xfg_dispatch_icall_nop(local_208,_Src,(longlong)iVar4 * 2);
          iVar4 = (int)local_200;
        }
      }
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
      if (iVar4 < 2) {
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar14);
        }
        if (piVar18 != (int *)0x0) {
          FMemory::Free(piVar18);
        }
        if (piVar16 != (int *)0x0) {
          FMemory::Free(piVar16);
        }
        if (local_1e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar10 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_f0 + 1;
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar16 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (*local_1a8 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
        plVar12 = (longlong *)local_1a0[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        return 0;
      }
      puVar15 = &DAT_143f3eda8;
      if (local_1d8 != 0) {
        puVar15 = local_1e0;
      }
      pppppppuVar7 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar4 != 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      FString::PrintfImpl(local_140,L"%ls%ls",pppppppuVar7,puVar15);
      local_1c0 = FUN_142aec520;
      uStack_1b8 = 0;
      plVar8 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1b0 + 0x20,local_120);
      plVar10 = (longlong *)plVar8[1];
      lVar9 = *plVar8;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        piVar16 = local_248;
        piVar18 = local_238;
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x40);
      local_218[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar8[1] = lVar9;
        plVar8[2] = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          piVar16 = local_248;
          piVar18 = local_238;
        }
        *(undefined4 *)(plVar8 + 3) = (undefined4)local_1c0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = local_1c0._4_4_;
        *(undefined4 *)(plVar8 + 4) = uStack_1b8;
        *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_1b4;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[6] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_118 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar16 = (int *)((longlong)local_118 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      lVar9 = operator_new(0x170);
      if (lVar9 == 0) {
        local_1f0 = 0;
      }
      else {
        local_1f0 = FUN_142af8bf0(lVar9);
      }
      local_1e8 = (longlong *)operator_new(0x18);
      if (local_1e8 != (longlong *)0x0) {
        *(undefined4 *)(local_1e8 + 1) = 1;
        *local_1e8 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1e8 + 0xc) = 1;
        local_1e8[2] = local_1f0;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_1f0,local_1f0,local_1f0);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_1f0 + 0x88,local_160);
      lVar9 = local_1f0;
      pplVar17 = (longlong **)(local_1f0 + 0x130);
      if (local_218 != pplVar17) {
        if (plVar8 == (longlong *)0x0) {
          if ((*(int *)(local_1f0 + 0x138) != 0) &&
             (plVar10 = *pplVar17, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            if (*pplVar17 != (longlong *)0x0) {
              plVar10 = (longlong *)FMemory::Realloc(*pplVar17,0,0);
              *pplVar17 = plVar10;
            }
            *(undefined4 *)(lVar9 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,pplVar17);
        }
      }
      FString::operator=(local_1f0 + 0x20,local_158);
      pcVar11 = (code *)FUN_142ae7d40();
      local_228[0] = (*pcVar11)(&local_f8,local_140,&local_1f0);
      if (local_228[0] != 0) {
        local_150 = local_228;
        local_148 = local_220;
        FUN_142ab70b0(local_1b0 + 0x80,local_168,&local_150,0);
      }
      plVar10 = local_1e8;
      iVar4 = local_228[0];
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1e8 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        local_218[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
        if (local_218[0] != (longlong *)0x0) {
          FMemory::Free(local_218[0]);
        }
      }
      if (local_140[0] != 0) {
        FMemory::Free();
      }
      if (local_208 != (undefined8 *******)0x0) {
        FMemory::Free(local_208);
      }
      if (piVar18 != (int *)0x0) {
        FMemory::Free(piVar18);
      }
      if (piVar16 != (int *)0x0) {
        FMemory::Free(piVar16);
      }
      if (local_1e0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar10 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_f0 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar16 = (int *)((longlong)plVar12 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (*local_1a8 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
      plVar12 = (longlong *)local_1a0[1];
      if (plVar12 == (longlong *)0x0) {
        return iVar4;
      }
      LOCK();
      plVar10 = plVar12 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 != 1) {
        return iVar4;
      }
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar1 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar4;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return iVar4;
    }
    for (piVar13 = local_238; piVar2 = local_238, piVar13 != local_238 + (int)local_230;
        piVar13 = piVar13 + 1) {
      if (*piVar13 == 2) {
        if ((int)((longlong)piVar13 - (longlong)local_238 >> 2) != -1) goto LAB_142b086a9;
        break;
      }
    }
    do {
      if (piVar2 == local_238 + (int)local_230) goto LAB_142b08609;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_238 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b086b3;
        }
        goto LAB_142b08609;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar18 = local_248; piVar18 != local_248 + (int)local_240; piVar18 = piVar18 + 1) {
    if (*piVar18 == 2) {
      if ((int)((longlong)piVar18 - (longlong)local_248 >> 2) != -1) goto LAB_142b0857a;
      break;
    }
  }
LAB_142b08616:
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (local_1e0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_6);
  return 0;
LAB_142b08609:
  if (local_238 != (int *)0x0) {
    FMemory::Free(local_238);
  }
  goto LAB_142b08616;
}



// FUNCTION 142b08d50 FUN_142b08d50 body=783 status=ok
// SIG undefined FUN_142b08d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142b08d50(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 *param_6)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *_Dst;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined4 local_210;
  int *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  _Dst = (undefined2 *)0x0;
  iVar12 = 0;
  iVar14 = 0;
  local_218 = param_6;
  local_208 = (int *)0x0;
  local_200 = 1;
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1d0 = param_4;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208,0);
  piVar15 = local_208;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  *local_208 = iVar5;
  if ((int)local_200 != 0) {
    for (piVar10 = local_208; piVar3 = local_208, piVar10 != local_208 + (int)local_200;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_208 >> 2) != -1) goto LAB_142b08e4e;
        break;
      }
    }
    do {
      puVar11 = (undefined2 *)0x0;
      iVar12 = 0;
      if (piVar3 == local_208 + (int)local_200) goto LAB_142b08e8a;
      if (*piVar3 == 1) {
        puVar11 = (undefined2 *)0x0;
        puVar16 = _Dst;
        iVar12 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_208 >> 2) != -1) goto LAB_142b08e9e;
        goto LAB_142b08e8a;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142b08e4e:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_4,local_1b8);
  puVar11 = _Dst;
  if (&local_1f8 != ppuVar7) {
    puVar11 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar12 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_1f8 = puVar11;
    local_1f0 = iVar12;
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
LAB_142b08e8a:
  iVar14 = iVar12;
  puVar16 = puVar11;
  if (iVar14 == 0) {
LAB_142b08e9e:
    puVar11 = &DAT_143f3eda8;
  }
  local_21c = 0;
  local_228 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar11);
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar13) != '\0');
  puVar11 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar11 = puVar16;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar11);
  iVar12 = (int)lVar13;
  _Src = *(void **)(lVar8 + 0x88);
  local_220 = iVar12;
  if (0 < iVar12) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_228,0);
    _Dst = local_228;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_218;
  local_1c8 = *local_218;
  local_1c0 = local_218[1];
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
    piVar15 = local_208;
    puVar16 = local_1f8;
  }
  local_218 = (undefined8 *)0x0;
  local_210 = 0;
  if (((param_5 != &local_218) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar2 = *param_5, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_218);
  }
  plVar2 = local_1e8;
  uVar9 = FString::FString(local_1a8,local_1e8);
  local_230 = &local_1c8;
  local_238 = &local_218;
  uVar6 = FUN_142b082e0(local_1d8,local_1e0,uVar9,&local_228);
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  FUN_142b22c80(local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar15 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142b09060 FUN_142b09060 body=2712 status=ok
// SIG undefined FUN_142b09060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b09199) */
/* WARNING: Removing unreachable block (ram,0x000142b091a5) */
/* WARNING: Removing unreachable block (ram,0x000142b091bd) */
/* WARNING: Type propagation algorithm not settling */

int FUN_142b09060(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined8 ******_Src;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 *******pppppppuVar14;
  undefined2 *puVar15;
  int *piVar16;
  longlong **pplVar17;
  int *piVar18;
  undefined1 auStack_268 [32];
  int *local_248;
  undefined8 local_240;
  int *local_238;
  undefined8 local_230;
  int local_228 [2];
  undefined8 local_220;
  longlong *local_218 [2];
  undefined8 *******local_208;
  undefined8 local_200;
  int local_1f8 [2];
  longlong local_1f0;
  longlong *local_1e8;
  undefined2 *local_1e0;
  int local_1d8;
  longlong local_1d0 [4];
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178 [2];
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  int *local_150;
  undefined8 local_148;
  longlong local_140 [2];
  longlong local_130 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [24];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1b0 = (code *)*param_6;
  plVar12 = param_6;
  if (local_1b0 == (code *)0x0) {
    local_1b0 = *(code **)(param_1 + 8);
    plVar12 = (longlong *)(param_1 + 8);
  }
  plVar12 = (longlong *)plVar12[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_188._0_4_ = SUB84(local_1b0,0);
  local_188._4_4_ = (undefined4)((ulonglong)local_1b0 >> 0x20);
  uStack_180._0_4_ = SUB84(plVar12,0);
  uStack_180._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_180._4_4_;
  uStack_60 = (undefined4)uStack_180;
  uStack_64 = local_188._4_4_;
  local_68 = (undefined4)local_188;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_180 = 0;
  local_188 = 0;
  local_190 = param_6;
  local_220 = param_5;
  local_1a0 = param_1;
  local_198 = param_3;
  local_160 = param_4;
  local_158 = param_2;
  local_f8 = (longlong)local_1b0;
  plStack_f0 = plVar12;
  local_c0 = FUN_142abcbb0(L"POST");
  local_1d0[2] = 0;
  local_1d0[3] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 2,0);
  FGenericPlatformString::Memcpy(local_1d0[2],L"/client/{title}/users/events",0x3a);
  local_1d0[0] = 0;
  local_1d0[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0,0);
  FGenericPlatformString::Memcpy(local_1d0[0],&DAT_1456d10c8,8);
  FUN_142abaf10(&local_1e0,local_1d0,local_1d0 + 2);
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
  if (local_1d0[2] != 0) {
    FMemory::Free();
  }
  uVar5 = FString::FString(local_110,param_3);
  puVar6 = (undefined8 *)FUN_142accce0(local_130,uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar6;
  }
  FString::ReplaceInline(&local_1e0,L"{title}",puVar15,1);
  if (local_130[0] != 0) {
    FMemory::Free();
  }
  local_248 = (int *)0x0;
  local_240 = 1;
  iVar4 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_248,0);
  piVar16 = local_248;
  *local_248 = iVar4;
  if ((int)local_240 == 0) {
LAB_142b09322:
    uStack_e4 = 2;
    local_238 = (int *)0x0;
    local_230 = 1;
    iVar4 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_238,0);
    piVar18 = local_238;
    *local_238 = iVar4;
    if ((int)local_230 == 0) {
LAB_142b09452:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b0945c:
      local_178[1] = 0xc;
      local_178[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178,0);
      lVar3 = local_178[0];
      FGenericPlatformString::Memcpy(local_178[0],L"EndpointUrl",0x18);
      lVar9 = (longlong)local_1b0;
      local_208 = (undefined8 *******)0x0;
      local_200 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1b0 + 0x38,local_1f8,local_178);
      if (local_1f8[0] == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x38) + (longlong)local_1f8[0] * 0x28;
      }
      pppppppuVar14 = (undefined8 *******)0x0;
      pppppppuVar7 = (undefined8 *******)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      iVar4 = 0;
      if ((pppppppuVar7 != (undefined8 *******)0x0) &&
         (iVar4 = 0, &local_208 != (undefined8 ********)pppppppuVar7)) {
        iVar4 = *(int *)(pppppppuVar7 + 1);
        _Src = *pppppppuVar7;
        local_200 = CONCAT44(local_200._4_4_,iVar4);
        if (iVar4 == 0) {
          pppppppuVar14 = (undefined8 *******)0x0;
          iVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,iVar4,0);
          pppppppuVar14 = local_208;
          _guard_xfg_dispatch_icall_nop(local_208,_Src,(longlong)iVar4 * 2);
          iVar4 = (int)local_200;
        }
      }
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
      if (iVar4 < 2) {
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar14);
        }
        if (piVar18 != (int *)0x0) {
          FMemory::Free(piVar18);
        }
        if (piVar16 != (int *)0x0) {
          FMemory::Free(piVar16);
        }
        if (local_1e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar10 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_f0 + 1;
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar16 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (*local_198 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
        plVar12 = (longlong *)local_190[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        return 0;
      }
      puVar15 = &DAT_143f3eda8;
      if (local_1d8 != 0) {
        puVar15 = local_1e0;
      }
      pppppppuVar7 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar4 != 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      FString::PrintfImpl(local_140,L"%ls%ls",pppppppuVar7,puVar15);
      local_1b0 = FUN_142b00ce0;
      uStack_1a8 = 0;
      plVar8 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1a0 + 0x20,local_120);
      plVar10 = (longlong *)plVar8[1];
      lVar9 = *plVar8;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        piVar16 = local_248;
        piVar18 = local_238;
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x40);
      local_218[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar8[1] = lVar9;
        plVar8[2] = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          piVar16 = local_248;
          piVar18 = local_238;
        }
        *(undefined4 *)(plVar8 + 3) = (undefined4)local_1b0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = local_1b0._4_4_;
        *(undefined4 *)(plVar8 + 4) = uStack_1a8;
        *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_1a4;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[6] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_118 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar16 = (int *)((longlong)local_118 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      lVar9 = operator_new(0x170);
      if (lVar9 == 0) {
        local_1f0 = 0;
      }
      else {
        local_1f0 = FUN_142af8bf0(lVar9);
      }
      local_1e8 = (longlong *)operator_new(0x18);
      if (local_1e8 != (longlong *)0x0) {
        *(undefined4 *)(local_1e8 + 1) = 1;
        *local_1e8 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1e8 + 0xc) = 1;
        local_1e8[2] = local_1f0;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_1f0,local_1f0,local_1f0);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_1f0 + 0x88,local_160);
      lVar9 = local_1f0;
      pplVar17 = (longlong **)(local_1f0 + 0x130);
      if (local_218 != pplVar17) {
        if (plVar8 == (longlong *)0x0) {
          if ((*(int *)(local_1f0 + 0x138) != 0) &&
             (plVar10 = *pplVar17, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            if (*pplVar17 != (longlong *)0x0) {
              plVar10 = (longlong *)FMemory::Realloc(*pplVar17,0,0);
              *pplVar17 = plVar10;
            }
            *(undefined4 *)(lVar9 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,pplVar17);
        }
      }
      FString::operator=(local_1f0 + 0x20,local_158);
      pcVar11 = (code *)FUN_142ae7d40();
      local_228[0] = (*pcVar11)(&local_f8,local_140,&local_1f0);
      if (local_228[0] != 0) {
        local_150 = local_228;
        local_148 = local_220;
        FUN_142ab70b0(local_1a0 + 0x30,local_168,&local_150,0);
      }
      plVar10 = local_1e8;
      iVar4 = local_228[0];
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1e8 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        local_218[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
        if (local_218[0] != (longlong *)0x0) {
          FMemory::Free(local_218[0]);
        }
      }
      if (local_140[0] != 0) {
        FMemory::Free();
      }
      if (local_208 != (undefined8 *******)0x0) {
        FMemory::Free(local_208);
      }
      if (piVar18 != (int *)0x0) {
        FMemory::Free(piVar18);
      }
      if (piVar16 != (int *)0x0) {
        FMemory::Free(piVar16);
      }
      if (local_1e0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar10 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_f0 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar16 = (int *)((longlong)plVar12 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (*local_198 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
      plVar12 = (longlong *)local_190[1];
      if (plVar12 == (longlong *)0x0) {
        return iVar4;
      }
      LOCK();
      plVar10 = plVar12 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 != 1) {
        return iVar4;
      }
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar1 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar4;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return iVar4;
    }
    for (piVar13 = local_238; piVar2 = local_238, piVar13 != local_238 + (int)local_230;
        piVar13 = piVar13 + 1) {
      if (*piVar13 == 2) {
        if ((int)((longlong)piVar13 - (longlong)local_238 >> 2) != -1) goto LAB_142b09452;
        break;
      }
    }
    do {
      if (piVar2 == local_238 + (int)local_230) goto LAB_142b093b2;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_238 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b0945c;
        }
        goto LAB_142b093b2;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar18 = local_248; piVar18 != local_248 + (int)local_240; piVar18 = piVar18 + 1) {
    if (*piVar18 == 2) {
      if ((int)((longlong)piVar18 - (longlong)local_248 >> 2) != -1) goto LAB_142b09322;
      break;
    }
  }
LAB_142b093bf:
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (local_1e0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_6);
  return 0;
LAB_142b093b2:
  if (local_238 != (int *)0x0) {
    FMemory::Free(local_238);
  }
  goto LAB_142b093bf;
}



// FUNCTION 142b09b00 FUN_142b09b00 body=783 status=ok
// SIG undefined FUN_142b09b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142b09b00(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 *param_6)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *_Dst;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined4 local_210;
  int *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  _Dst = (undefined2 *)0x0;
  iVar12 = 0;
  iVar14 = 0;
  local_218 = param_6;
  local_208 = (int *)0x0;
  local_200 = 1;
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1d0 = param_4;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208,0);
  piVar15 = local_208;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  *local_208 = iVar5;
  if ((int)local_200 != 0) {
    for (piVar10 = local_208; piVar3 = local_208, piVar10 != local_208 + (int)local_200;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_208 >> 2) != -1) goto LAB_142b09bfe;
        break;
      }
    }
    do {
      puVar11 = (undefined2 *)0x0;
      iVar12 = 0;
      if (piVar3 == local_208 + (int)local_200) goto LAB_142b09c3a;
      if (*piVar3 == 1) {
        puVar11 = (undefined2 *)0x0;
        puVar16 = _Dst;
        iVar12 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_208 >> 2) != -1) goto LAB_142b09c4e;
        goto LAB_142b09c3a;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142b09bfe:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_4,local_1b8);
  puVar11 = _Dst;
  if (&local_1f8 != ppuVar7) {
    puVar11 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar12 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_1f8 = puVar11;
    local_1f0 = iVar12;
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
LAB_142b09c3a:
  iVar14 = iVar12;
  puVar16 = puVar11;
  if (iVar14 == 0) {
LAB_142b09c4e:
    puVar11 = &DAT_143f3eda8;
  }
  local_21c = 0;
  local_228 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar11);
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar13) != '\0');
  puVar11 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar11 = puVar16;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar11);
  iVar12 = (int)lVar13;
  _Src = *(void **)(lVar8 + 0x88);
  local_220 = iVar12;
  if (0 < iVar12) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_228,0);
    _Dst = local_228;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_218;
  local_1c8 = *local_218;
  local_1c0 = local_218[1];
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
    piVar15 = local_208;
    puVar16 = local_1f8;
  }
  local_218 = (undefined8 *)0x0;
  local_210 = 0;
  if (((param_5 != &local_218) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar2 = *param_5, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_218);
  }
  plVar2 = local_1e8;
  uVar9 = FString::FString(local_1a8,local_1e8);
  local_230 = &local_1c8;
  local_238 = &local_218;
  uVar6 = FUN_142b09060(local_1d8,local_1e0,uVar9,&local_228);
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  FUN_142b225d0(local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar15 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142b09e10 FUN_142b09e10 body=2712 status=ok
// SIG undefined FUN_142b09e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142b09f49) */
/* WARNING: Removing unreachable block (ram,0x000142b09f55) */
/* WARNING: Removing unreachable block (ram,0x000142b09f6d) */
/* WARNING: Type propagation algorithm not settling */

int FUN_142b09e10(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined8 ******_Src;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *******pppppppuVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 *******pppppppuVar14;
  undefined2 *puVar15;
  int *piVar16;
  longlong **pplVar17;
  int *piVar18;
  undefined1 auStack_268 [32];
  int *local_248;
  undefined8 local_240;
  int *local_238;
  undefined8 local_230;
  int local_228 [2];
  undefined8 local_220;
  longlong *local_218 [2];
  undefined8 *******local_208;
  undefined8 local_200;
  int local_1f8 [2];
  longlong local_1f0;
  longlong *local_1e8;
  undefined2 *local_1e0;
  int local_1d8;
  longlong local_1d0 [4];
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178 [2];
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  int *local_150;
  undefined8 local_148;
  longlong local_140 [2];
  longlong local_130 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [24];
  longlong local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1b0 = (code *)*param_6;
  plVar12 = param_6;
  if (local_1b0 == (code *)0x0) {
    local_1b0 = *(code **)(param_1 + 8);
    plVar12 = (longlong *)(param_1 + 8);
  }
  plVar12 = (longlong *)plVar12[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_188._0_4_ = SUB84(local_1b0,0);
  local_188._4_4_ = (undefined4)((ulonglong)local_1b0 >> 0x20);
  uStack_180._0_4_ = SUB84(plVar12,0);
  uStack_180._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
  uStack_e4 = 0;
  local_e8 = 0;
  uStack_5c = uStack_180._4_4_;
  uStack_60 = (undefined4)uStack_180;
  uStack_64 = local_188._4_4_;
  local_68 = (undefined4)local_188;
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_bc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_180 = 0;
  local_188 = 0;
  local_190 = param_6;
  local_220 = param_5;
  local_1a0 = param_1;
  local_198 = param_3;
  local_160 = param_4;
  local_158 = param_2;
  local_f8 = (longlong)local_1b0;
  plStack_f0 = plVar12;
  local_c0 = FUN_142abcbb0(L"POST");
  local_1d0[2] = 0;
  local_1d0[3] = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0 + 2,0);
  FGenericPlatformString::Memcpy(local_1d0[2],L"/client/{title}/users/events/fetch",0x46);
  local_1d0[0] = 0;
  local_1d0[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d0,0);
  FGenericPlatformString::Memcpy(local_1d0[0],&DAT_1456d6ae8,8);
  FUN_142abaf10(&local_1e0,local_1d0,local_1d0 + 2);
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
  if (local_1d0[2] != 0) {
    FMemory::Free();
  }
  uVar5 = FString::FString(local_110,param_3);
  puVar6 = (undefined8 *)FUN_142accce0(local_130,uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar6;
  }
  FString::ReplaceInline(&local_1e0,L"{title}",puVar15,1);
  if (local_130[0] != 0) {
    FMemory::Free();
  }
  local_248 = (int *)0x0;
  local_240 = 1;
  iVar4 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_248,0);
  piVar16 = local_248;
  *local_248 = iVar4;
  if ((int)local_240 == 0) {
LAB_142b0a0d2:
    uStack_e4 = 2;
    local_238 = (int *)0x0;
    local_230 = 1;
    iVar4 = FUN_142abcd70(L"application/json");
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_238,0);
    piVar18 = local_238;
    *local_238 = iVar4;
    if ((int)local_230 == 0) {
LAB_142b0a202:
      _local_e8 = CONCAT44(uStack_e4,2);
LAB_142b0a20c:
      local_178[1] = 0xc;
      local_178[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_178,0);
      lVar3 = local_178[0];
      FGenericPlatformString::Memcpy(local_178[0],L"EndpointUrl",0x18);
      lVar9 = (longlong)local_1b0;
      local_208 = (undefined8 *******)0x0;
      local_200 = 0;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId((longlong)local_1b0 + 0x38,local_1f8,local_178);
      if (local_1f8[0] == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x38) + (longlong)local_1f8[0] * 0x28;
      }
      pppppppuVar14 = (undefined8 *******)0x0;
      pppppppuVar7 = (undefined8 *******)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      iVar4 = 0;
      if ((pppppppuVar7 != (undefined8 *******)0x0) &&
         (iVar4 = 0, &local_208 != (undefined8 ********)pppppppuVar7)) {
        iVar4 = *(int *)(pppppppuVar7 + 1);
        _Src = *pppppppuVar7;
        local_200 = CONCAT44(local_200._4_4_,iVar4);
        if (iVar4 == 0) {
          pppppppuVar14 = (undefined8 *******)0x0;
          iVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,iVar4,0);
          pppppppuVar14 = local_208;
          _guard_xfg_dispatch_icall_nop(local_208,_Src,(longlong)iVar4 * 2);
          iVar4 = (int)local_200;
        }
      }
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
      if (iVar4 < 2) {
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          FMemory::Free(pppppppuVar14);
        }
        if (piVar18 != (int *)0x0) {
          FMemory::Free(piVar18);
        }
        if (piVar16 != (int *)0x0) {
          FMemory::Free(piVar16);
        }
        if (local_1e0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        plVar10 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_f0 + 1;
          lVar9 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar16 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (*local_198 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
        plVar12 = (longlong *)local_190[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar16 = (int *)((longlong)plVar12 + 0xc);
            iVar4 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        return 0;
      }
      puVar15 = &DAT_143f3eda8;
      if (local_1d8 != 0) {
        puVar15 = local_1e0;
      }
      pppppppuVar7 = (undefined8 *******)&DAT_143f3eda8;
      if (iVar4 != 0) {
        pppppppuVar7 = pppppppuVar14;
      }
      FString::PrintfImpl(local_140,L"%ls%ls",pppppppuVar7,puVar15);
      local_1b0 = FUN_142b01630;
      uStack_1a8 = 0;
      plVar8 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_1a0 + 0x20,local_120);
      plVar10 = (longlong *)plVar8[1];
      lVar9 = *plVar8;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        piVar16 = local_248;
        piVar18 = local_238;
      }
      plVar8 = (longlong *)FMemory::Realloc(0,0x40);
      local_218[0] = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e980;
        plVar8[1] = lVar9;
        plVar8[2] = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          piVar16 = local_248;
          piVar18 = local_238;
        }
        *(undefined4 *)(plVar8 + 3) = (undefined4)local_1b0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = local_1b0._4_4_;
        *(undefined4 *)(plVar8 + 4) = uStack_1a8;
        *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_1a4;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[6] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_143f9e9c8;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_118 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar16 = (int *)((longlong)local_118 + 0xc);
          iVar4 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar4 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      lVar9 = operator_new(0x170);
      if (lVar9 == 0) {
        local_1f0 = 0;
      }
      else {
        local_1f0 = FUN_142af8bf0(lVar9);
      }
      local_1e8 = (longlong *)operator_new(0x18);
      if (local_1e8 != (longlong *)0x0) {
        *(undefined4 *)(local_1e8 + 1) = 1;
        *local_1e8 = (longlong)&PTR_FUN_1455345d0;
        *(undefined4 *)((longlong)local_1e8 + 0xc) = 1;
        local_1e8[2] = local_1f0;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_1f0,local_1f0,local_1f0);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (local_1f0 + 0x88,local_160);
      lVar9 = local_1f0;
      pplVar17 = (longlong **)(local_1f0 + 0x130);
      if (local_218 != pplVar17) {
        if (plVar8 == (longlong *)0x0) {
          if ((*(int *)(local_1f0 + 0x138) != 0) &&
             (plVar10 = *pplVar17, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            if (*pplVar17 != (longlong *)0x0) {
              plVar10 = (longlong *)FMemory::Realloc(*pplVar17,0,0);
              *pplVar17 = plVar10;
            }
            *(undefined4 *)(lVar9 + 0x138) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x30))(plVar8,pplVar17);
        }
      }
      FString::operator=(local_1f0 + 0x20,local_158);
      pcVar11 = (code *)FUN_142ae7d40();
      local_228[0] = (*pcVar11)(&local_f8,local_140,&local_1f0);
      if (local_228[0] != 0) {
        local_150 = local_228;
        local_148 = local_220;
        FUN_142ab70b0(local_1a0 + 0x80,local_168,&local_150,0);
      }
      plVar10 = local_1e8;
      iVar4 = local_228[0];
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1e8 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_218[0];
        piVar16 = local_248;
        piVar18 = local_238;
        if ((int)lVar9 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          plVar8 = local_218[0];
          piVar16 = local_248;
          piVar18 = local_238;
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            plVar8 = local_218[0];
            piVar16 = local_248;
            piVar18 = local_238;
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        local_218[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
        if (local_218[0] != (longlong *)0x0) {
          FMemory::Free(local_218[0]);
        }
      }
      if (local_140[0] != 0) {
        FMemory::Free();
      }
      if (local_208 != (undefined8 *******)0x0) {
        FMemory::Free(local_208);
      }
      if (piVar18 != (int *)0x0) {
        FMemory::Free(piVar18);
      }
      if (piVar16 != (int *)0x0) {
        FMemory::Free(piVar16);
      }
      if (local_1e0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      plVar10 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_f0 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar16 = (int *)((longlong)plVar10 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar16 = (int *)((longlong)plVar12 + 0xc);
          iVar1 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (*local_198 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
      plVar12 = (longlong *)local_190[1];
      if (plVar12 == (longlong *)0x0) {
        return iVar4;
      }
      LOCK();
      plVar10 = plVar12 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 != 1) {
        return iVar4;
      }
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar1 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar1 != 1) {
        return iVar4;
      }
      (**(code **)(*plVar12 + 8))(plVar12,1);
      return iVar4;
    }
    for (piVar13 = local_238; piVar2 = local_238, piVar13 != local_238 + (int)local_230;
        piVar13 = piVar13 + 1) {
      if (*piVar13 == 2) {
        if ((int)((longlong)piVar13 - (longlong)local_238 >> 2) != -1) goto LAB_142b0a202;
        break;
      }
    }
    do {
      if (piVar2 == local_238 + (int)local_230) goto LAB_142b0a162;
      if (*piVar2 == 1) {
        if ((int)((longlong)piVar2 - (longlong)local_238 >> 2) != -1) {
          _local_e8 = CONCAT44(uStack_e4,1);
          goto LAB_142b0a20c;
        }
        goto LAB_142b0a162;
      }
      piVar2 = piVar2 + 1;
    } while( true );
  }
  for (piVar18 = local_248; piVar18 != local_248 + (int)local_240; piVar18 = piVar18 + 1) {
    if (*piVar18 == 2) {
      if ((int)((longlong)piVar18 - (longlong)local_248 >> 2) != -1) goto LAB_142b0a0d2;
      break;
    }
  }
LAB_142b0a16f:
  if (piVar16 != (int *)0x0) {
    FMemory::Free(piVar16);
  }
  if (local_1e0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1404f9010(&local_f8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_220);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_6);
  return 0;
LAB_142b0a162:
  if (local_238 != (int *)0x0) {
    FMemory::Free(local_238);
  }
  goto LAB_142b0a16f;
}



// FUNCTION 142b0a8b0 FUN_142b0a8b0 body=783 status=ok
// SIG undefined FUN_142b0a8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_142b0a8b0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 *param_6)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 **ppuVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *_Dst;
  int iVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  int local_220;
  undefined4 local_21c;
  undefined8 *local_218;
  undefined4 local_210;
  int *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  int local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  _Dst = (undefined2 *)0x0;
  iVar12 = 0;
  iVar14 = 0;
  local_218 = param_6;
  local_208 = (int *)0x0;
  local_200 = 1;
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1d0 = param_4;
  iVar5 = FUN_142abcd70(L"application/json");
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_208,0);
  piVar15 = local_208;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  *local_208 = iVar5;
  if ((int)local_200 != 0) {
    for (piVar10 = local_208; piVar3 = local_208, piVar10 != local_208 + (int)local_200;
        piVar10 = piVar10 + 1) {
      if (*piVar10 == 2) {
        if ((int)((longlong)piVar10 - (longlong)local_208 >> 2) != -1) goto LAB_142b0a9ae;
        break;
      }
    }
    do {
      puVar11 = (undefined2 *)0x0;
      iVar12 = 0;
      if (piVar3 == local_208 + (int)local_200) goto LAB_142b0a9ea;
      if (*piVar3 == 1) {
        puVar11 = (undefined2 *)0x0;
        puVar16 = _Dst;
        iVar12 = 0;
        if ((int)((longlong)piVar3 - (longlong)local_208 >> 2) != -1) goto LAB_142b0a9fe;
        goto LAB_142b0a9ea;
      }
      piVar3 = piVar3 + 1;
    } while( true );
  }
LAB_142b0a9ae:
  ppuVar7 = (undefined2 **)FUN_142af7f10(param_4,local_1b8);
  puVar11 = _Dst;
  if (&local_1f8 != ppuVar7) {
    puVar11 = *ppuVar7;
    *ppuVar7 = (undefined2 *)0x0;
    iVar12 = *(int *)(ppuVar7 + 1);
    ppuVar7[1] = (undefined2 *)0x0;
    local_1f8 = puVar11;
    local_1f0 = iVar12;
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
LAB_142b0a9ea:
  iVar14 = iVar12;
  puVar16 = puVar11;
  if (iVar14 == 0) {
LAB_142b0a9fe:
    puVar11 = &DAT_143f3eda8;
  }
  local_21c = 0;
  local_228 = (undefined2 *)0x0;
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar11);
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (*(char *)(*(longlong *)(lVar8 + 0x88) + lVar13) != '\0');
  puVar11 = &DAT_143f3eda8;
  if (iVar14 != 0) {
    puVar11 = puVar16;
  }
  lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar11);
  iVar12 = (int)lVar13;
  _Src = *(void **)(lVar8 + 0x88);
  local_220 = iVar12;
  if (0 < iVar12) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_228,0);
    _Dst = local_228;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  puVar4 = local_218;
  local_1c8 = *local_218;
  local_1c0 = local_218[1];
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
    piVar15 = local_208;
    puVar16 = local_1f8;
  }
  local_218 = (undefined8 *)0x0;
  local_210 = 0;
  if (((param_5 != &local_218) && (*(int *)(param_5 + 1) != 0)) &&
     (plVar2 = *param_5, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_218);
  }
  plVar2 = local_1e8;
  uVar9 = FString::FString(local_1a8,local_1e8);
  local_230 = &local_1c8;
  local_238 = &local_218;
  uVar6 = FUN_142b09e10(local_1d8,local_1e0,uVar9,&local_228);
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (piVar15 != (int *)0x0) {
    FMemory::Free(piVar15);
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  FUN_142b22750(local_1d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  plVar2 = (longlong *)puVar4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar15 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142b0abc0 FUN_142b0abc0 body=398 status=ok
// SIG undefined FUN_142b0abc0(void)

undefined8 * FUN_142b0abc0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad40,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2c20;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],L"https://news-%ENV%.services.gearboxsoftware.com");
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0ad50 FUN_142b0ad50 body=554 status=ok
// SIG undefined FUN_142b0ad50(void)

undefined8 * FUN_142b0ad50(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x170);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad48,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2c38;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x1f] = 0;
    *(undefined4 *)(plVar4 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x104) = 0;
    plVar4[0x22] = 0;
    *(undefined4 *)(plVar4 + 0x23) = 0;
    plVar4[0x24] = 0;
    plVar4[0x25] = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(undefined4 *)(plVar4 + 0x2a) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x154) = 0;
    plVar4[0x2c] = 0;
    *(undefined4 *)(plVar4 + 0x2d) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b3724);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0af80 FUN_142b0af80 body=501 status=ok
// SIG undefined FUN_142b0af80(void)

undefined8 * FUN_142b0af80(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x120);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad50,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2c50;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x1f] = 0;
    *(undefined4 *)(plVar4 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x104) = 0;
    plVar4[0x22] = 0;
    *(undefined4 *)(plVar4 + 0x23) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456afeec);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0b180 FUN_142b0b180 body=398 status=ok
// SIG undefined FUN_142b0b180(void)

undefined8 * FUN_142b0b180(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad58,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2c68;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b3484);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0b310 FUN_142b0b310 body=448 status=ok
// SIG undefined FUN_142b0b310(void)

undefined8 * FUN_142b0b310(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0xd0);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad60,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2c80;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b803c);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0b4d0 FUN_142b0b4d0 body=660 status=ok
// SIG undefined FUN_142b0b4d0(void)

undefined8 * FUN_142b0b4d0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x210);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad68,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2c98;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x1f] = 0;
    *(undefined4 *)(plVar4 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x104) = 0;
    plVar4[0x22] = 0;
    *(undefined4 *)(plVar4 + 0x23) = 0;
    plVar4[0x24] = 0;
    plVar4[0x25] = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(undefined4 *)(plVar4 + 0x2a) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x154) = 0;
    plVar4[0x2c] = 0;
    *(undefined4 *)(plVar4 + 0x2d) = 0;
    plVar4[0x2e] = 0;
    plVar4[0x2f] = 0;
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    *(undefined4 *)(plVar4 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x1a4) = 0;
    plVar4[0x36] = 0;
    *(undefined4 *)(plVar4 + 0x37) = 0;
    plVar4[0x38] = 0;
    plVar4[0x39] = 0;
    plVar4[0x3c] = 0;
    plVar4[0x3d] = 0;
    *(undefined4 *)(plVar4 + 0x3e) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 500) = 0;
    plVar4[0x40] = 0;
    *(undefined4 *)(plVar4 + 0x41) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b16e4);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0b770 FUN_142b0b770 body=398 status=ok
// SIG undefined FUN_142b0b770(void)

undefined8 * FUN_142b0b770(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad70,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2cb0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],L"https://discovery-%ENV%.services.gearboxsoftware.com");
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0b900 FUN_142b0b900 body=398 status=ok
// SIG undefined FUN_142b0b900(void)

undefined8 * FUN_142b0b900(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad78,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2cc8;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b7784);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0ba90 FUN_142b0ba90 body=448 status=ok
// SIG undefined FUN_142b0ba90(void)

undefined8 * FUN_142b0ba90(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0xd0);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad88,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2ce0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456ad8e4);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0bc50 FUN_142b0bc50 body=660 status=ok
// SIG undefined FUN_142b0bc50(void)

undefined8 * FUN_142b0bc50(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x210);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad90,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2cf8;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x1f] = 0;
    *(undefined4 *)(plVar4 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x104) = 0;
    plVar4[0x22] = 0;
    *(undefined4 *)(plVar4 + 0x23) = 0;
    plVar4[0x24] = 0;
    plVar4[0x25] = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(undefined4 *)(plVar4 + 0x2a) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x154) = 0;
    plVar4[0x2c] = 0;
    *(undefined4 *)(plVar4 + 0x2d) = 0;
    plVar4[0x2e] = 0;
    plVar4[0x2f] = 0;
    plVar4[0x32] = 0;
    plVar4[0x33] = 0;
    *(undefined4 *)(plVar4 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x1a4) = 0;
    plVar4[0x36] = 0;
    *(undefined4 *)(plVar4 + 0x37) = 0;
    plVar4[0x38] = 0;
    plVar4[0x39] = 0;
    plVar4[0x3c] = 0;
    plVar4[0x3d] = 0;
    *(undefined4 *)(plVar4 + 0x3e) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 500) = 0;
    plVar4[0x40] = 0;
    *(undefined4 *)(plVar4 + 0x41) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b0494);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0bef0 FUN_142b0bef0 body=448 status=ok
// SIG undefined FUN_142b0bef0(void)

undefined8 * FUN_142b0bef0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0xd0);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ad98,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2d10;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xb4) = 0;
    plVar4[0x18] = 0;
    *(undefined4 *)(plVar4 + 0x19) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b3624);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0c0b0 FUN_142b0c0b0 body=398 status=ok
// SIG undefined FUN_142b0c0b0(void)

undefined8 * FUN_142b0c0b0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x80);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_142ab7f60(plVar4,DAT_146b2ada0,0);
    plVar4[4] = 0;
    plVar4[5] = 0;
    *plVar4 = (longlong)&PTR_FUN_1456e2d28;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    plVar4[0xe] = 0;
    *(undefined4 *)(plVar4 + 0xf) = 0;
    FUN_142b06470(plVar4[1],&DAT_1456b5e3c);
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          *piVar1 = 0;
          iVar3 = 0;
        }
        UNLOCK();
        if (0 < iVar3) {
          return param_1;
        }
      }
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
  return param_1;
}



// FUNCTION 142b0c240 FUN_142b0c240 body=308 status=ok
// SIG undefined FUN_142b0c240(void)

undefined8 * FUN_142b0c240(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x350);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_142af8980(lVar3,0);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_1 = plVar4;
  param_1[1] = plVar6;
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_1;
        }
      }
      plVar6 = (longlong *)param_1[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
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
  }
  return param_1;
}



// FUNCTION 142b0c380 FUN_142b0c380 body=386 status=ok
// SIG undefined FUN_142b0c380(void)

undefined8 FUN_142b0c380(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar3 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x10 + lVar3;
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x10) {
    FStatData::FStatData(&local_78);
    local_78 = &PTR_FUN_14571ebd0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    local_70 = 0;
    local_68 = 0;
    local_30 = 0;
    cVar2 = FUN_142af74a0(lVar3,&local_78);
    if (cVar2 != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x60 + *param_2);
      *puVar4 = &PTR_FUN_14571ebd0;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_70;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_70._4_4_;
      *(undefined4 *)(puVar4 + 2) = local_68;
      FString::FString(puVar4 + 3,&local_60);
      FString::FString(puVar4 + 5,&local_50);
      FString::FString(puVar4 + 7,&local_40);
      *(undefined1 *)(puVar4 + 9) = local_30;
      FString::FString(puVar4 + 10,&local_28);
    }
    local_78 = &PTR_FUN_14571ebd0;
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    FJsonSerializable::~FJsonSerializable(&local_78);
  }
  return 1;
}



// FUNCTION 142b0c510 FUN_142b0c510 body=353 status=ok
// SIG undefined FUN_142b0c510(void)

undefined8 FUN_142b0c510(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined **local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar3 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x10 + lVar3;
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x10) {
    FStatData::FStatData(&local_68);
    local_68 = &PTR_FUN_14571ebf0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_60 = 0;
    cVar2 = FUN_142af74a0(lVar3,&local_68);
    if (cVar2 != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x50 + *param_2);
      *puVar4 = &PTR_FUN_14571ebf0;
      *(undefined4 *)(puVar4 + 1) = local_60;
      FString::FString(puVar4 + 2,&local_58);
      FString::FString(puVar4 + 4,&local_48);
      FString::FString(puVar4 + 6,&local_38);
      FString::FString(puVar4 + 8,&local_28);
    }
    local_68 = &PTR_FUN_14571ebf0;
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    FJsonSerializable::~FJsonSerializable(&local_68);
  }
  return 1;
}



// FUNCTION 142b0c680 FUN_142b0c680 body=238 status=ok
// SIG undefined FUN_142b0c680(void)

undefined8 FUN_142b0c680(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  void *local_28;
  ulonglong local_20;
  
  lVar5 = *param_1;
  lVar6 = (longlong)(int)param_1[1] * 0x10 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    local_28 = (void *)0x0;
    local_20 = 0;
    cVar2 = FTextInspector::GetDisplayString(lVar5,&local_28);
    if (cVar2 != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      _Src = local_28;
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      *puVar3 = 0;
      lVar4 = (longlong)(int)local_20;
      *(int *)(puVar3 + 1) = (int)local_20;
      if ((int)local_20 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,local_20 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,lVar4 * 2);
      }
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 142b0c770 FUN_142b0c770 body=229 status=ok
// SIG undefined FUN_142b0c770(void)

undefined8 FUN_142b0c770(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  
  lVar5 = *param_1;
  lVar6 = (longlong)(int)param_1[1] * 0x10 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
    FStatData::FStatData(&local_38);
    local_38 = &PTR__scalar_deleting_destructor__14571ead0;
    local_30 = 0;
    local_28 = 0;
    cVar4 = FUN_142af74a0(lVar5,&local_38);
    if (cVar4 != '\0') {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar1 = (longlong)iVar2 * 3 + 1;
      *(undefined ***)(lVar3 + -8 + lVar1 * 8) = &PTR__scalar_deleting_destructor__14571ead0;
      FString::FString(lVar3 + lVar1 * 8,&local_30);
    }
    local_38 = &PTR__scalar_deleting_destructor__14571ead0;
    if (local_30 != 0) {
      FMemory::Free();
    }
    FJsonSerializable::~FJsonSerializable(&local_38);
  }
  return 1;
}



// FUNCTION 142b0c860 FUN_142b0c860 body=330 status=ok
// SIG undefined FUN_142b0c860(void)

undefined8 FUN_142b0c860(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar4 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    FStatData::FStatData(&local_68);
    local_68 = &PTR_FUN_14571ed10;
    local_60 = 0;
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_50 = 0;
    local_28 = 0;
    cVar3 = FUN_142af74a0(lVar4,&local_68);
    if (cVar3 != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined ***)(lVar2 + (longlong)iVar1 * 0x48) = &PTR_FUN_14571ed10;
      lVar2 = lVar2 + (longlong)iVar1 * 0x48;
      FString::FString(lVar2 + 8,&local_60);
      *(undefined1 *)(lVar2 + 0x18) = local_50;
      FString::FString(lVar2 + 0x20,&local_48);
      FString::FString(lVar2 + 0x30,&local_38);
      *(undefined4 *)(lVar2 + 0x40) = local_28;
    }
    local_68 = &PTR_FUN_14571ed10;
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    FJsonSerializable::~FJsonSerializable(&local_68);
  }
  return 1;
}



// FUNCTION 142b0c9b0 FUN_142b0c9b0 body=504 status=ok
// SIG undefined FUN_142b0c9b0(void)

longlong * FUN_142b0c9b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x30 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x30) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b0cbb0 FUN_142b0cbb0 body=504 status=ok
// SIG undefined FUN_142b0cbb0(void)

longlong * FUN_142b0cbb0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x60 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x60) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b0cdb0 FUN_142b0cdb0 body=504 status=ok
// SIG undefined FUN_142b0cdb0(void)

longlong * FUN_142b0cdb0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x50 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x50) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b0cfb0 FUN_142b0cfb0 body=489 status=ok
// SIG undefined FUN_142b0cfb0(void)

longlong * FUN_142b0cfb0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = *param_2;
  lVar2 = lVar8 + (longlong)(int)param_2[1] * 0x28;
  for (; lVar8 != lVar2; lVar8 = lVar8 + 0x28) {
    Chaos::operator<<<float,3,0>(&local_38,lVar8);
    if (local_38 != 0) {
      plVar5 = (longlong *)operator_new(0x20);
      plVar7 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 0;
        *plVar5 = (longlong)&PTR_AsObject_143f606d8;
        plVar5[2] = local_38;
        plVar5[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar5 + 1) = 6;
        plVar7 = plVar5;
      }
      plVar5 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        *plVar5 = (longlong)&PTR_FUN_143f60d18;
        plVar5[2] = (longlong)plVar7;
        local_40 = plVar5;
      }
      local_48 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar7,plVar7);
      plVar5 = local_40;
      plVar7 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar3 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
        }
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_1);
        *puVar6 = plVar7;
        puVar6[1] = plVar5;
      }
      plVar7 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b0d1a0 FUN_142b0d1a0 body=489 status=ok
// SIG undefined FUN_142b0d1a0(void)

longlong * FUN_142b0d1a0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = *param_2;
  lVar2 = lVar8 + (longlong)(int)param_2[1] * 0x18;
  for (; lVar8 != lVar2; lVar8 = lVar8 + 0x18) {
    Chaos::operator<<<float,3,0>(&local_38,lVar8);
    if (local_38 != 0) {
      plVar5 = (longlong *)operator_new(0x20);
      plVar7 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 0;
        *plVar5 = (longlong)&PTR_AsObject_143f606d8;
        plVar5[2] = local_38;
        plVar5[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar5 + 1) = 6;
        plVar7 = plVar5;
      }
      plVar5 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        *plVar5 = (longlong)&PTR_FUN_143f60d18;
        plVar5[2] = (longlong)plVar7;
        local_40 = plVar5;
      }
      local_48 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar7,plVar7);
      plVar5 = local_40;
      plVar7 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar3 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
        }
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_1);
        *puVar6 = plVar7;
        puVar6[1] = plVar5;
      }
      plVar7 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b0d390 FUN_142b0d390 body=489 status=ok
// SIG undefined FUN_142b0d390(void)

longlong * FUN_142b0d390(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = *param_2;
  lVar2 = lVar8 + (longlong)(int)param_2[1] * 0x48;
  for (; lVar8 != lVar2; lVar8 = lVar8 + 0x48) {
    Chaos::operator<<<float,3,0>(&local_38,lVar8);
    if (local_38 != 0) {
      plVar5 = (longlong *)operator_new(0x20);
      plVar7 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 0;
        *plVar5 = (longlong)&PTR_AsObject_143f606d8;
        plVar5[2] = local_38;
        plVar5[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar5 + 1) = 6;
        plVar7 = plVar5;
      }
      plVar5 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        *plVar5 = (longlong)&PTR_FUN_143f60d18;
        plVar5[2] = (longlong)plVar7;
        local_40 = plVar5;
      }
      local_48 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar7,plVar7);
      plVar5 = local_40;
      plVar7 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar3 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
        }
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_1);
        *puVar6 = plVar7;
        puVar6[1] = plVar5;
      }
      plVar7 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b0d580 FUN_142b0d580 body=494 status=ok
// SIG undefined FUN_142b0d580(void)

longlong * FUN_142b0d580(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0xb0 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0xb0) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b0d770 FUN_142b0d770 body=54 status=ok
// SIG undefined FUN_142b0d770(void)

undefined8 * FUN_142b0d770(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ea90;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0d7b0 FUN_142b0d7b0 body=51 status=ok
// SIG undefined FUN_142b0d7b0(void)

undefined8 * FUN_142b0d7b0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eab0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b0d7f0 FUN_142b0d7f0 body=54 status=ok
// SIG undefined FUN_142b0d7f0(void)

undefined8 * FUN_142b0d7f0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eaf0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0d830 FUN_142b0d830 body=147 status=ok
// SIG undefined FUN_142b0d830(void)

undefined8 * FUN_142b0d830(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eb30;
  param_1[1] = 0;
  param_1[2] = 0;
  FStatData::FStatData(param_1 + 4);
  param_1[4] = &PTR_FUN_14571eb10;
  param_1[5] = 0;
  param_1[6] = 0;
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
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 142b0d8d0 FUN_142b0d8d0 body=88 status=ok
// SIG undefined FUN_142b0d8d0(void)

undefined8 * FUN_142b0d8d0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eb70;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_14571eb50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142b0d930 FUN_142b0d930 body=46 status=ok
// SIG undefined FUN_142b0d930(void)

undefined8 * FUN_142b0d930(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eb90;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0d960 FUN_142b0d960 body=51 status=ok
// SIG undefined FUN_142b0d960(void)

undefined8 * FUN_142b0d960(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eb50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b0d9a0 FUN_142b0d9a0 body=68 status=ok
// SIG undefined FUN_142b0d9a0(void)

undefined8 * FUN_142b0d9a0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ebb0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 142b0d9f0 FUN_142b0d9f0 body=51 status=ok
// SIG undefined FUN_142b0d9f0(void)

undefined8 * FUN_142b0d9f0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f190;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b0da30 FUN_142b0da30 body=51 status=ok
// SIG undefined FUN_142b0da30(void)

undefined8 * FUN_142b0da30(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ec10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b0da70 FWheelSetup body=46 status=ok
// SIG undefined FWheelSetup(void)

undefined8 * FWheelSetup::FWheelSetup(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ec30;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 142b0daa0 FUN_142b0daa0 body=87 status=ok
// SIG undefined FUN_142b0daa0(void)

undefined8 * FUN_142b0daa0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ec70;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR__scalar_deleting_destructor__14571ec50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 142b0db00 FUN_142b0db00 body=39 status=ok
// SIG undefined FUN_142b0db00(void)

undefined8 * FUN_142b0db00(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__14571ec90;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142b0db30 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__14571ecb0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0db60 FUN_142b0db60 body=43 status=ok
// SIG undefined FUN_142b0db60(void)

undefined8 * FUN_142b0db60(undefined8 *param_1)

{
  FStatData::FStatData();
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14571ecd0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 142b0db90 FUN_142b0db90 body=51 status=ok
// SIG undefined FUN_142b0db90(void)

undefined8 * FUN_142b0db90(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ecf0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b0dbd0 FUN_142b0dbd0 body=77 status=ok
// SIG undefined FUN_142b0dbd0(void)

undefined8 * FUN_142b0dbd0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ed30;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 142b0dc20 FUN_142b0dc20 body=72 status=ok
// SIG undefined FUN_142b0dc20(void)

undefined8 * FUN_142b0dc20(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ed70;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR__scalar_deleting_destructor__14571ed50;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 142b0dc70 FUN_142b0dc70 body=54 status=ok
// SIG undefined FUN_142b0dc70(void)

undefined8 * FUN_142b0dc70(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ed90;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0dcb0 FUN_142b0dcb0 body=59 status=ok
// SIG undefined FUN_142b0dcb0(void)

undefined8 * FUN_142b0dcb0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571edb0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142b0dcf0 FUN_142b0dcf0 body=80 status=ok
// SIG undefined FUN_142b0dcf0(void)

undefined8 * FUN_142b0dcf0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571edf0;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR__scalar_deleting_destructor__14571edd0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 142b0dd40 FUN_142b0dd40 body=46 status=ok
// SIG undefined FUN_142b0dd40(void)

undefined8 * FUN_142b0dd40(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ee10;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0dd70 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__14571edd0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0dda0 FUN_142b0dda0 body=215 status=ok
// SIG undefined FUN_142b0dda0(void)

undefined8 * FUN_142b0dda0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14571f1d0;
  FString::FString(param_1 + 1,param_2 + 8);
  FString::FString(param_1 + 3,param_2 + 0x18);
  FString::FString(param_1 + 5,param_2 + 0x28);
  param_1[7] = 0;
  iVar2 = *(int *)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 7,iVar2,0);
    puVar1 = (undefined8 *)param_1[7];
    lVar3 = lVar3 + 0x18;
    do {
      *puVar1 = &PTR_FUN_14571f1b0;
      FString::FString(puVar1 + 1,lVar3 + -0x10);
      FString::FString(puVar1 + 3,lVar3);
      lVar3 = lVar3 + 0x28;
      puVar1 = puVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}



// FUNCTION 142b0de80 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f1f0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0deb0 FUN_142b0deb0 body=205 status=ok
// SIG undefined FUN_142b0deb0(void)

undefined8 * FUN_142b0deb0(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14571ee90;
  FString::FString(param_1 + 1,param_2 + 8);
  FString::FString(param_1 + 3,param_2 + 0x18);
  FString::FString(param_1 + 5,param_2 + 0x28);
  param_1[7] = &PTR_FUN_14571ee50;
  FString::FString(param_1 + 8,param_2 + 0x40);
  FString::FString(param_1 + 10,param_2 + 0x50);
  param_1[0xc] = &PTR_FUN_14571ee30;
  FString::FString(param_1 + 0xd,param_2 + 0x68);
  FString::FString(param_1 + 0xf,param_2 + 0x78);
  param_1[0x11] = &PTR_FUN_14571ee70;
  FString::FString(param_1 + 0x12,param_2 + 0x90);
  FString::FString(param_1 + 0x14,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 142b0df80 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eeb0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0dfb0 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571eed0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0dfe0 FUN_142b0dfe0 body=135 status=ok
// SIG undefined FUN_142b0dfe0(void)

undefined8 * FUN_142b0dfe0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ef10;
  FStatData::FStatData(param_1 + 2);
  param_1[2] = &PTR_FUN_14571eb10;
  param_1[3] = 0;
  param_1[4] = 0;
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
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0e070 FUN_142b0e070 body=96 status=ok
// SIG undefined FUN_142b0e070(void)

undefined8 * FUN_142b0e070(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ef50;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_14571ef30;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 142b0e0d0 FUN_142b0e0d0 body=182 status=ok
// SIG undefined FUN_142b0e0d0(void)

undefined8 * FUN_142b0e0d0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ef70;
  param_1[2] = 0;
  param_1[3] = 0;
  FStatData::FStatData(param_1 + 5);
  param_1[5] = &PTR_FUN_14571eb10;
  param_1[6] = 0;
  param_1[7] = 0;
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
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 142b0e190 FUN_142b0e190 body=51 status=ok
// SIG undefined FUN_142b0e190(void)

undefined8 * FUN_142b0e190(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ef30;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b0e1d0 FUN_142b0e1d0 body=104 status=ok
// SIG undefined FUN_142b0e1d0(void)

undefined8 * FUN_142b0e1d0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571efb0;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_14571ef90;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 142b0e240 FUN_142b0e240 body=135 status=ok
// SIG undefined FUN_142b0e240(void)

undefined8 * FUN_142b0e240(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571efd0;
  FStatData::FStatData(param_1 + 2);
  param_1[2] = &PTR_FUN_14571eb10;
  param_1[3] = 0;
  param_1[4] = 0;
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
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0e2d0 FPBDRigidSpringConstraints body=67 status=ok
// SIG undefined FPBDRigidSpringConstraints(void)

undefined8 * Chaos::FPBDRigidSpringConstraints::FPBDRigidSpringConstraints(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571ef90;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142b0e320 FUN_142b0e320 body=80 status=ok
// SIG undefined FUN_142b0e320(void)

undefined8 * FUN_142b0e320(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f010;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_14571eff0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 142b0e370 FUN_142b0e370 body=46 status=ok
// SIG undefined FUN_142b0e370(void)

undefined8 * FUN_142b0e370(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f030;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0e3a0 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__14571ed50;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0e3d0 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_144530c38;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0e400 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f070;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0e430 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0f68;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0e460 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f0b0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b0e490 FUN_142b0e490 body=96 status=ok
// SIG undefined FUN_142b0e490(void)

undefined8 * FUN_142b0e490(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0fa8;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_143fc0f88;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 142b0e4f0 FPBDRigidSpringConstraints body=67 status=ok
// SIG undefined FPBDRigidSpringConstraints(void)

undefined8 * Chaos::FPBDRigidSpringConstraints::FPBDRigidSpringConstraints(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0f88;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142b0e540 FUN_142b0e540 body=46 status=ok
// SIG undefined FUN_142b0e540(void)

undefined8 * FUN_142b0e540(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f0f0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0e570 FUN_142b0e570 body=54 status=ok
// SIG undefined FUN_142b0e570(void)

undefined8 * FUN_142b0e570(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__14571f110;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b0e5b0 FUN_142b0e5b0 body=88 status=ok
// SIG undefined FUN_142b0e5b0(void)

undefined8 * FUN_142b0e5b0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f150;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_14571f130;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142b0e610 FUN_142b0e610 body=372 status=ok
// SIG undefined FUN_142b0e610(void)

undefined8 * FUN_142b0e610(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_14571f170;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FStatData::FStatData(param_1 + 0xd);
  param_1[0xd] = &PTR_FUN_14571eb10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  FStatData::FStatData(param_1 + 0x1b);
  param_1[0x1b] = &PTR_FUN_14571eef0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 142b0e790 FUN_142b0e790 body=138 status=ok
// SIG undefined FUN_142b0e790(void)

void FUN_142b0e790(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571ea90;
      if (puVar1[4] != 0) {
        FMemory::Free();
      }
      if (puVar1[2] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0e820 FUN_142b0e820 body=166 status=ok
// SIG undefined FUN_142b0e820(void)

void FUN_142b0e820(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571ebd0;
      if (puVar1[10] != 0) {
        FMemory::Free();
      }
      if (puVar1[7] != 0) {
        FMemory::Free();
      }
      if (puVar1[5] != 0) {
        FMemory::Free();
      }
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0e8d0 FUN_142b0e8d0 body=166 status=ok
// SIG undefined FUN_142b0e8d0(void)

void FUN_142b0e8d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571ebf0;
      if (puVar1[8] != 0) {
        FMemory::Free();
      }
      if (puVar1[6] != 0) {
        FMemory::Free();
      }
      if (puVar1[4] != 0) {
        FMemory::Free();
      }
      if (puVar1[2] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0e980 FUN_142b0e980 body=138 status=ok
// SIG undefined FUN_142b0e980(void)

void FUN_142b0e980(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571f1b0;
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0ea10 FUN_142b0ea10 body=124 status=ok
// SIG undefined FUN_142b0ea10(void)

void FUN_142b0ea10(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__14571ead0;
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0ea90 FUN_142b0ea90 body=161 status=ok
// SIG undefined FUN_142b0ea90(void)

void FUN_142b0ea90(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571f1d0;
      FUN_142b0e980(puVar1 + 7);
      if (puVar1[5] != 0) {
        FMemory::Free();
      }
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0eb40 FUN_142b0eb40 body=152 status=ok
// SIG undefined FUN_142b0eb40(void)

void FUN_142b0eb40(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571ed10;
      if (puVar1[6] != 0) {
        FMemory::Free();
      }
      if (puVar1[4] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0ebe0 FUN_142b0ebe0 body=138 status=ok
// SIG undefined FUN_142b0ebe0(void)

void FUN_142b0ebe0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571f050;
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0ec70 FUN_142b0ec70 body=138 status=ok
// SIG undefined FUN_142b0ec70(void)

void FUN_142b0ec70(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571f0d0;
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0ed00 FUN_142b0ed00 body=138 status=ok
// SIG undefined FUN_142b0ed00(void)

void FUN_142b0ed00(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14571f090;
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142b0ed90 FUN_142b0ed90 body=60 status=ok
// SIG undefined FUN_142b0ed90(void)

void FUN_142b0ed90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ea90;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0edd0 FUN_142b0edd0 body=55 status=ok
// SIG undefined FUN_142b0edd0(void)

void FUN_142b0edd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571eab0;
  FUN_142b0e790(param_1 + 3);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0ee10 FUN_142b0ee10 body=116 status=ok
// SIG undefined FUN_142b0ee10(void)

void FUN_142b0ee10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571eb10;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0ee90 FUN_142b0ee90 body=103 status=ok
// SIG undefined FUN_142b0ee90(void)

void FUN_142b0ee90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571eb70;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_14571eb50;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0ef00 ~FClothingSimulationContextCommon body=60 status=ok
// SIG undefined ~FClothingSimulationContextCommon(void)

void FClothingSimulationContextCommon::~FClothingSimulationContextCommon(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571eb50;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0ef40 ~FPBDSuspensionConstraints body=88 status=ok
// SIG undefined ~FPBDSuspensionConstraints(void)

void Chaos::FPBDSuspensionConstraints::~FPBDSuspensionConstraints(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ebf0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0efa0 FUN_142b0efa0 body=46 status=ok
// SIG undefined FUN_142b0efa0(void)

void FUN_142b0efa0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ecb0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0efd0 ~FClothingSimulationContextCommon body=60 status=ok
// SIG undefined ~FClothingSimulationContextCommon(void)

void FClothingSimulationContextCommon::~FClothingSimulationContextCommon(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ecf0;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f010 FUN_142b0f010 body=75 status=ok
// SIG undefined FUN_142b0f010(void)

void FUN_142b0f010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ed70;
  param_1[1] = &PTR__scalar_deleting_destructor__14571ed50;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f060 FUN_142b0f060 body=74 status=ok
// SIG undefined FUN_142b0f060(void)

void FUN_142b0f060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571edb0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f0b0 FUN_142b0f0b0 body=89 status=ok
// SIG undefined FUN_142b0f0b0(void)

void FUN_142b0f0b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571edf0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR__scalar_deleting_destructor__14571edd0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f110 FUN_142b0f110 body=46 status=ok
// SIG undefined FUN_142b0f110(void)

void FUN_142b0f110(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571edd0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f140 FUN_142b0f140 body=239 status=ok
// SIG undefined FUN_142b0f140(void)

void FUN_142b0f140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ee90;
  param_1[0x11] = &PTR_FUN_14571ee70;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 0x11);
  param_1[0xc] = &PTR_FUN_14571ee30;
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 0xc);
  param_1[7] = &PTR_FUN_14571ee50;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 7);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f230 FUN_142b0f230 body=101 status=ok
// SIG undefined FUN_142b0f230(void)

void FUN_142b0f230(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14571eeb0;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f2a0 ~FPBDSuspensionConstraints body=102 status=ok
// SIG undefined ~FPBDSuspensionConstraints(void)

void Chaos::FPBDSuspensionConstraints::~FPBDSuspensionConstraints(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571eef0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f310 FUN_142b0f310 body=117 status=ok
// SIG undefined FUN_142b0f310(void)

void FUN_142b0f310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ef50;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_14571ef30;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f390 ~FClothingSimulationContextCommon body=60 status=ok
// SIG undefined ~FClothingSimulationContextCommon(void)

void FClothingSimulationContextCommon::~FClothingSimulationContextCommon(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ef30;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f3d0 FUN_142b0f3d0 body=131 status=ok
// SIG undefined FUN_142b0f3d0(void)

void FUN_142b0f3d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571efb0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_14571ef90;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f460 ~FPBDRigidSpringConstraints body=88 status=ok
// SIG undefined ~FPBDRigidSpringConstraints(void)

void Chaos::FPBDRigidSpringConstraints::~FPBDRigidSpringConstraints(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14571ef90;
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f4c0 FUN_142b0f4c0 body=46 status=ok
// SIG undefined FUN_142b0f4c0(void)

void FUN_142b0f4c0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ed50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f4f0 FUN_142b0f4f0 body=101 status=ok
// SIG undefined FUN_142b0f4f0(void)

void FUN_142b0f4f0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144530c38;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f560 FUN_142b0f560 body=101 status=ok
// SIG undefined FUN_142b0f560(void)

void FUN_142b0f560(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143fc0f68;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f5d0 FUN_142b0f5d0 body=41 status=ok
// SIG undefined FUN_142b0f5d0(void)

void FUN_142b0f5d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc0fa8;
  FUN_142b0f600(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f600 FUN_142b0f600 body=143 status=ok
// SIG undefined FUN_142b0f600(void)

void FUN_142b0f600(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143fc0f88;
  iVar2 = *(int *)(param_1 + 8);
  plVar1 = (longlong *)param_1[7];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[7];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b0f690 FUN_142b0f690 body=94 status=ok
// SIG undefined FUN_142b0f690(void)

undefined8 * FUN_142b0f690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ea90;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b0f6f0 FUN_142b0f6f0 body=89 status=ok
// SIG undefined FUN_142b0f6f0(void)

undefined8 * FUN_142b0f6f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571eab0;
  FUN_142b0e790(param_1 + 3);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b0f750 FUN_142b0f750 body=89 status=ok
// SIG undefined FUN_142b0f750(void)

undefined8 * FUN_142b0f750(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571eaf0;
  FUN_142b0ea10(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b0f7b0 FUN_142b0f7b0 body=52 status=ok
// SIG undefined FUN_142b0f7b0(void)

undefined8 FUN_142b0f7b0(undefined8 param_1,ulonglong param_2)

{
  FUN_142b0ee10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142b0f7f0 FUN_142b0f7f0 body=83 status=ok
// SIG undefined FUN_142b0f7f0(void)

undefined8 * FUN_142b0f7f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571eb30;
  FUN_142b0ee10(param_1 + 4);
  FUN_142b0ea10(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142b0f850 FUN_142b0f850 body=138 status=ok
// SIG undefined FUN_142b0f850(void)

undefined8 * FUN_142b0f850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571eb70;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_14571eb50;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b0f8e0 FUN_142b0f8e0 body=74 status=ok
// SIG undefined FUN_142b0f8e0(void)

undefined8 * FUN_142b0f8e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571eb90;
  FUN_142b0ea10(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b0f930 FUN_142b0f930 body=94 status=ok
// SIG undefined FUN_142b0f930(void)

undefined8 * FUN_142b0f930(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571eb50;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b0f990 FUN_142b0f990 body=136 status=ok
// SIG undefined FUN_142b0f990(void)

undefined8 * FUN_142b0f990(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ebb0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  FUN_1404af4a0(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142b0fa20 FUN_142b0fa20 body=122 status=ok
// SIG undefined FUN_142b0fa20(void)

undefined8 * FUN_142b0fa20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ebd0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142b0faa0 FUN_142b0faa0 body=94 status=ok
// SIG undefined FUN_142b0faa0(void)

undefined8 * FUN_142b0faa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f190;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b0fb00 FUN_142b0fb00 body=122 status=ok
// SIG undefined FUN_142b0fb00(void)

undefined8 * FUN_142b0fb00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ebf0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142b0fb80 FUN_142b0fb80 body=89 status=ok
// SIG undefined FUN_142b0fb80(void)

undefined8 * FUN_142b0fb80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ec10;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  FUN_142b0e8d0(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b0fbe0 FUN_142b0fbe0 body=94 status=ok
// SIG undefined FUN_142b0fbe0(void)

undefined8 * FUN_142b0fbe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f1b0;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b0fc40 FUN_142b0fc40 body=80 status=ok
// SIG undefined FUN_142b0fc40(void)

undefined8 * FUN_142b0fc40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ec30;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b0fc90 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ead0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b0fce0 FUN_142b0fce0 body=124 status=ok
// SIG undefined FUN_142b0fce0(void)

undefined8 * FUN_142b0fce0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ec70;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR__scalar_deleting_destructor__14571ec50;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b0fd60 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FClothingSimulationCommon::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ec90;
  FJsonSerializable::~FJsonSerializable();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142b0fda0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ec50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b0fdf0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ecb0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b0fe40 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkVirtualAcoustics::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ecd0;
  FJsonSerializable::~FJsonSerializable();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b0fe80 FUN_142b0fe80 body=94 status=ok
// SIG undefined FUN_142b0fe80(void)

undefined8 * FUN_142b0fe80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ecf0;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b0fee0 FUN_142b0fee0 body=107 status=ok
// SIG undefined FUN_142b0fee0(void)

undefined8 * FUN_142b0fee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ed30;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  FUN_142b0ea10(param_1 + 6);
  FUN_142b0eb40(param_1 + 4);
  FUN_142b0e820(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142b0ff50 FUN_142b0ff50 body=110 status=ok
// SIG undefined FUN_142b0ff50(void)

undefined8 * FUN_142b0ff50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ed70;
  param_1[1] = &PTR__scalar_deleting_destructor__14571ed50;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b0ffc0 FUN_142b0ffc0 body=89 status=ok
// SIG undefined FUN_142b0ffc0(void)

undefined8 * FUN_142b0ffc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ed90;
  FUN_142b0ea10(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b10020 FUN_142b10020 body=108 status=ok
// SIG undefined FUN_142b10020(void)

undefined8 * FUN_142b10020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571edb0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b10090 FUN_142b10090 body=124 status=ok
// SIG undefined FUN_142b10090(void)

undefined8 * FUN_142b10090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571edf0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR__scalar_deleting_destructor__14571edd0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b10110 FUN_142b10110 body=74 status=ok
// SIG undefined FUN_142b10110(void)

undefined8 * FUN_142b10110(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ee10;
  FUN_142b0ea10(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b10160 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571edd0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b101b0 FUN_142b101b0 body=117 status=ok
// SIG undefined FUN_142b101b0(void)

undefined8 * FUN_142b101b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f1d0;
  FUN_142b0e980(param_1 + 7);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b10230 FUN_142b10230 body=74 status=ok
// SIG undefined FUN_142b10230(void)

undefined8 * FUN_142b10230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f1f0;
  FUN_142b0ea90(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b10280 FUN_142b10280 body=52 status=ok
// SIG undefined FUN_142b10280(void)

undefined8 FUN_142b10280(undefined8 param_1,ulonglong param_2)

{
  FUN_142b0f140();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142b102c0 FUN_142b102c0 body=94 status=ok
// SIG undefined FUN_142b102c0(void)

undefined8 * FUN_142b102c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ee30;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b10320 FUN_142b10320 body=94 status=ok
// SIG undefined FUN_142b10320(void)

undefined8 * FUN_142b10320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ee50;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}


