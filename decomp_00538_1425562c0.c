// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425562c0 FUN_1425562c0 body=283 status=ok
// SIG undefined FUN_1425562c0(void)

void FUN_1425562c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_1425562c0(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UCompositingMediaInput::StaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14256af50(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1425563e0 FUN_1425563e0 body=283 status=ok
// SIG undefined FUN_1425563e0(void)

void FUN_1425563e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c0))(plVar3);
    plVar5 = (longlong *)*plVar3;
    plVar3 = plVar5 + (int)plVar3[1];
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar4 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(lVar1 + 0x40) != 0) {
            FUN_1425563e0(*(longlong *)(lVar1 + 0x40),param_2,param_3,param_4);
          }
        }
        else {
          lVar4 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14256aeb0(lVar1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142556500 FUN_142556500 body=2188 status=ok
// SIG undefined FUN_142556500(void)

void FUN_142556500(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  longlong *local_40;
  
  local_98 = *(longlong **)(param_1 + 0x740);
  local_40 = local_98 + *(int *)(param_1 + 0x748);
  if (local_98 != local_40) {
    local_b8 = 0;
    uVar14 = 0;
    do {
      lVar15 = *local_98;
      if (lVar15 == 0) {
LAB_1425565a8:
        lVar7 = 0;
      }
      else {
        lVar7 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar7 = lVar15;
        if (!bVar6) goto LAB_1425565a8;
      }
      if (lVar15 == 0) {
LAB_1425565eb:
        lVar8 = 0;
      }
      else {
        lVar8 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar8 = lVar15;
        if (!bVar6) goto LAB_1425565eb;
      }
      if (lVar15 == 0) {
LAB_142556628:
        lVar15 = 0;
      }
      else {
        lVar9 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142556628;
      }
      local_cc = -1;
      local_d0 = 0x202ffff;
      local_d8 = uVar14;
      if (lVar7 == 0) {
        if (lVar8 == 0) {
          if (lVar15 != 0) {
            local_b0 = *(longlong **)(lVar15 + 0x100);
            local_a8 = local_b0 + 2;
            if (local_b0 == (longlong *)0x0) {
              local_b0 = (longlong *)(lVar15 + 0x90);
              local_a8 = (longlong *)(lVar15 + 0xa0);
            }
            if (param_4 != (longlong *)0x0) {
              plVar12 = (longlong *)*param_4;
              plVar10 = plVar12 + (longlong)(int)param_4[1] * 0xd;
              if (plVar12 != plVar10) {
                do {
                  if (*plVar12 == *(longlong *)(lVar15 + 0x40)) {
                    local_b0 = plVar12 + 2;
                    local_a8 = plVar12 + 4;
                    break;
                  }
                  plVar12 = plVar12 + 0xd;
                } while (plVar12 != plVar10);
              }
            }
            local_res8 = 0;
            if (0 < (int)local_b0[1]) {
              local_c0 = (longlong *)0x0;
              plVar12 = local_b0;
              do {
                if (*(longlong **)((longlong)local_c0 + *plVar12) != (longlong *)0x0) {
                  local_d0 = local_d0 & 0xffffff;
                  local_cc = local_res8;
                  plVar10 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c0 + *plVar12) + 0x2b0))();
                  if (plVar10 != (longlong *)0x0) {
                    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x2c0))(plVar10);
                    plVar10 = (longlong *)*plVar11;
                    plVar11 = plVar10 + (int)plVar11[1];
                    local_c8 = plVar10;
                    local_a0 = plVar11;
                    if (plVar10 != plVar11) {
                      do {
                        lVar15 = *plVar10;
                        if (lVar15 != 0) {
                          local_c8 = plVar10;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar12 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar12 != (longlong *)0x0)) {
                              plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                              plVar16 = (longlong *)*plVar12;
                              plVar12 = plVar16 + (int)plVar12[1];
                              for (; plVar16 != plVar12; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_142555d20(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UMaterialExpressionFontSampleParameter::
                                            GetPrivateStaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_80 = *(undefined8 *)(lVar15 + 0x50);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_75 = local_d0._3_1_;
                                      local_74 = local_cc;
                                      local_78 = 0xffff;
                                      local_76 = 2;
                                      FUN_141f08a10(param_2,&local_80);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x5c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x60);
                                        uVar5 = *(undefined4 *)(lVar15 + 100);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x58);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar11 = local_a0;
                                plVar10 = local_c8;
                              }
                            }
                          }
                          else {
                            lVar7 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_70 = *(undefined8 *)(lVar15 + 0x50);
                              iVar2 = *(int *)(param_2 + 8);
                              local_68 = 0xffff;
                              local_65 = local_d0._3_1_;
                              local_64 = local_cc;
                              local_66 = 2;
                              FUN_141f08a10(param_2,&local_70);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x5c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x60);
                                uVar5 = *(undefined4 *)(lVar15 + 100);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x58);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar10 = plVar10 + 1;
                        plVar12 = local_b0;
                        local_c8 = plVar10;
                      } while (plVar10 != plVar11);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c0 = local_c0 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)plVar12[1]);
            }
            local_res8 = 0;
            if (0 < (int)local_a8[1]) {
              local_c8 = (longlong *)0x0;
              do {
                if (*(longlong **)((longlong)local_c8 + *local_a8) != (longlong *)0x0) {
                  local_d0 = CONCAT13(1,(undefined3)local_d0);
                  local_cc = local_res8;
                  plVar12 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c8 + *local_a8) + 0x2b0))()
                  ;
                  if (plVar12 != (longlong *)0x0) {
                    puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                    plVar12 = (longlong *)*puVar13;
                    plVar10 = plVar12 + *(int *)(puVar13 + 1);
                    local_c0 = plVar12;
                    local_a0 = plVar10;
                    if (plVar12 != plVar10) {
                      do {
                        lVar15 = *plVar12;
                        if (lVar15 != 0) {
                          local_c0 = plVar12;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar11 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar11 != (longlong *)0x0)) {
                              plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                              plVar16 = (longlong *)*plVar11;
                              plVar11 = plVar16 + (int)plVar11[1];
                              for (; plVar16 != plVar11; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_142555d20(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UMaterialExpressionFontSampleParameter::
                                            GetPrivateStaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_60 = *(undefined8 *)(lVar15 + 0x50);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_55 = local_d0._3_1_;
                                      local_54 = local_cc;
                                      local_58 = 0xffff;
                                      local_56 = 2;
                                      FUN_141f08a10(param_2,&local_60);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x5c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x60);
                                        uVar5 = *(undefined4 *)(lVar15 + 100);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x58);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar10 = local_a0;
                                plVar12 = local_c0;
                              }
                            }
                          }
                          else {
                            lVar7 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_50 = *(undefined8 *)(lVar15 + 0x50);
                              iVar2 = *(int *)(param_2 + 8);
                              local_48 = 0xffff;
                              local_45 = local_d0._3_1_;
                              local_44 = local_cc;
                              local_46 = 2;
                              FUN_141f08a10(param_2,&local_50);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x5c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x60);
                                uVar5 = *(undefined4 *)(lVar15 + 100);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x58);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar12 = plVar12 + 1;
                        local_c0 = plVar12;
                      } while (plVar12 != plVar10);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c8 = local_c8 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)local_a8[1]);
            }
          }
        }
        else if (*(longlong *)(lVar8 + 0x40) != 0) {
          FUN_142555d20(*(longlong *)(lVar8 + 0x40),param_2,param_3,&local_d8);
        }
      }
      else {
        local_90 = *(undefined8 *)(lVar7 + 0x50);
        iVar2 = *(int *)(param_2 + 8);
        local_84 = 0xffffffff;
        local_88 = 0x202ffff;
        FUN_141f08a10(param_2,&local_90);
        if (iVar2 != *(int *)(param_2 + 8)) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          uVar3 = *(undefined4 *)(lVar7 + 0x5c);
          uVar4 = *(undefined4 *)(lVar7 + 0x60);
          uVar5 = *(undefined4 *)(lVar7 + 100);
          puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(lVar7 + 0x58);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_98 = local_98 + 1;
    } while (local_98 != local_40);
  }
  return;
}



// FUNCTION 142556d90 FUN_142556d90 body=2102 status=ok
// SIG undefined FUN_142556d90(void)

void FUN_142556d90(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  int local_res8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_40;
  
  local_98 = *(longlong **)(param_1 + 0x740);
  local_40 = local_98 + *(int *)(param_1 + 0x748);
  if (local_98 != local_40) {
    local_b0 = 0;
    uVar13 = 0;
    do {
      lVar14 = *local_98;
      if (lVar14 == 0) {
LAB_142556e38:
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar7 = lVar14;
        if (!bVar6) goto LAB_142556e38;
      }
      if (lVar14 == 0) {
LAB_142556e7b:
        lVar8 = 0;
      }
      else {
        lVar8 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar8 = lVar14;
        if (!bVar6) goto LAB_142556e7b;
      }
      if (lVar14 == 0) {
LAB_142556eb8:
        lVar14 = 0;
      }
      else {
        lVar9 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142556eb8;
      }
      local_b4 = -1;
      local_b8 = 0x202ffff;
      local_c0 = uVar13;
      if (lVar7 == 0) {
        if (lVar8 == 0) {
          if (lVar14 != 0) {
            local_a8 = *(longlong **)(lVar14 + 0x100);
            local_a0 = local_a8 + 2;
            if (local_a8 == (longlong *)0x0) {
              local_a8 = (longlong *)(lVar14 + 0x90);
              local_a0 = (longlong *)(lVar14 + 0xa0);
            }
            if (param_4 != (longlong *)0x0) {
              plVar11 = (longlong *)*param_4;
              plVar10 = plVar11 + (longlong)(int)param_4[1] * 0xd;
              if (plVar11 != plVar10) {
                do {
                  if (*plVar11 == *(longlong *)(lVar14 + 0x40)) {
                    local_a8 = plVar11 + 2;
                    local_a0 = plVar11 + 4;
                    break;
                  }
                  plVar11 = plVar11 + 0xd;
                } while (plVar11 != plVar10);
              }
            }
            local_res8 = 0;
            if (0 < (int)local_a8[1]) {
              local_c8 = 0;
              plVar11 = local_a8;
              do {
                if (*(longlong **)(local_c8 + *plVar11) != (longlong *)0x0) {
                  local_b8 = local_b8 & 0xffffff;
                  local_b4 = local_res8;
                  plVar10 = (longlong *)
                            (**(code **)(**(longlong **)(local_c8 + *plVar11) + 0x2b0))();
                  if (plVar10 != (longlong *)0x0) {
                    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2c0))(plVar10);
                    plVar12 = (longlong *)*plVar10;
                    plVar10 = plVar12 + (int)plVar10[1];
                    for (; plVar12 != plVar10; plVar12 = plVar12 + 1) {
                      lVar14 = *plVar12;
                      if (lVar14 != 0) {
                        lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                          bVar6 = false;
                        }
                        else {
                          bVar6 = true;
                        }
                        if (bVar6) {
                          if ((*(longlong **)(lVar14 + 0x40) != (longlong *)0x0) &&
                             (plVar11 = (longlong *)
                                        (**(code **)(**(longlong **)(lVar14 + 0x40) + 0x2b0))(),
                             plVar11 != (longlong *)0x0)) {
                            plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                            plVar15 = (longlong *)*plVar11;
                            plVar11 = plVar15 + (int)plVar11[1];
                            for (; plVar15 != plVar11; plVar15 = plVar15 + 1) {
                              lVar14 = *plVar15;
                              if (lVar14 != 0) {
                                lVar7 = UMaterialExpressionMaterialFunctionCall::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) <
                                     *(int *)(lVar7 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                  bVar6 = false;
                                }
                                else {
                                  bVar6 = true;
                                }
                                if (bVar6) {
                                  if (*(longlong *)(lVar14 + 0x40) != 0) {
                                    FUN_142555e40(*(longlong *)(lVar14 + 0x40),param_2,param_3,
                                                  &local_c0);
                                  }
                                }
                                else {
                                  lVar7 = FUN_1429af6e0();
                                  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    local_80 = *(undefined8 *)(lVar14 + 0x40);
                                    iVar2 = *(int *)(param_2 + 8);
                                    local_78 = 0x202ffff;
                                    local_74 = 0xffffffff;
                                    FUN_141f08a10(param_2,&local_80);
                                    if (iVar2 != *(int *)(param_2 + 8)) {
                                      iVar2 = (int)param_3[1];
                                      *(int *)(param_3 + 1) = iVar2 + 1;
                                      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                  (param_3,iVar2);
                                      }
                                      uVar3 = *(undefined4 *)(lVar14 + 0x4c);
                                      uVar4 = *(undefined4 *)(lVar14 + 0x50);
                                      uVar5 = *(undefined4 *)(lVar14 + 0x54);
                                      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                      *puVar1 = *(undefined4 *)(lVar14 + 0x48);
                                      puVar1[1] = uVar3;
                                      puVar1[2] = uVar4;
                                      puVar1[3] = uVar5;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          lVar7 = FUN_1429af6e0();
                          if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            local_70 = *(undefined8 *)(lVar14 + 0x40);
                            iVar2 = *(int *)(param_2 + 8);
                            local_64 = 0xffffffff;
                            local_68 = 0x202ffff;
                            FUN_141f08a10(param_2,&local_70);
                            if (iVar2 != *(int *)(param_2 + 8)) {
                              iVar2 = (int)param_3[1];
                              *(int *)(param_3 + 1) = iVar2 + 1;
                              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                              }
                              uVar3 = *(undefined4 *)(lVar14 + 0x4c);
                              uVar4 = *(undefined4 *)(lVar14 + 0x50);
                              uVar5 = *(undefined4 *)(lVar14 + 0x54);
                              puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                              *puVar1 = *(undefined4 *)(lVar14 + 0x48);
                              puVar1[1] = uVar3;
                              puVar1[2] = uVar4;
                              puVar1[3] = uVar5;
                            }
                          }
                        }
                      }
                      plVar11 = local_a8;
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c8 = local_c8 + 8;
                uVar13 = local_b0;
              } while (local_res8 < (int)plVar11[1]);
            }
            local_res8 = 0;
            if (0 < (int)local_a0[1]) {
              local_d0 = 0;
              do {
                if (*(longlong **)(local_d0 + *local_a0) != (longlong *)0x0) {
                  local_b8 = CONCAT13(1,(undefined3)local_b8);
                  local_b4 = local_res8;
                  plVar11 = (longlong *)
                            (**(code **)(**(longlong **)(local_d0 + *local_a0) + 0x2b0))();
                  if (plVar11 != (longlong *)0x0) {
                    plVar10 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                    plVar11 = (longlong *)*plVar10;
                    plVar10 = plVar11 + (int)plVar10[1];
                    for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
                      lVar14 = *plVar11;
                      if (lVar14 != 0) {
                        lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90))
                           || (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                                (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                          bVar6 = false;
                        }
                        else {
                          bVar6 = true;
                        }
                        if (bVar6) {
                          if ((*(longlong **)(lVar14 + 0x40) != (longlong *)0x0) &&
                             (plVar12 = (longlong *)
                                        (**(code **)(**(longlong **)(lVar14 + 0x40) + 0x2b0))(),
                             plVar12 != (longlong *)0x0)) {
                            plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                            plVar15 = (longlong *)*plVar12;
                            plVar12 = plVar15 + (int)plVar12[1];
                            for (; plVar15 != plVar12; plVar15 = plVar15 + 1) {
                              lVar14 = *plVar15;
                              if (lVar14 != 0) {
                                lVar7 = UMaterialExpressionMaterialFunctionCall::
                                        GetPrivateStaticClass();
                                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) <
                                     *(int *)(lVar7 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                  bVar6 = false;
                                }
                                else {
                                  bVar6 = true;
                                }
                                if (bVar6) {
                                  if (*(longlong *)(lVar14 + 0x40) != 0) {
                                    FUN_142555e40(*(longlong *)(lVar14 + 0x40),param_2,param_3,
                                                  &local_c0);
                                  }
                                }
                                else {
                                  lVar7 = FUN_1429af6e0();
                                  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    local_60 = *(undefined8 *)(lVar14 + 0x40);
                                    iVar2 = *(int *)(param_2 + 8);
                                    local_58 = 0x202ffff;
                                    local_54 = 0xffffffff;
                                    FUN_141f08a10(param_2,&local_60);
                                    if (iVar2 != *(int *)(param_2 + 8)) {
                                      iVar2 = (int)param_3[1];
                                      *(int *)(param_3 + 1) = iVar2 + 1;
                                      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                  (param_3,iVar2);
                                      }
                                      uVar3 = *(undefined4 *)(lVar14 + 0x4c);
                                      uVar4 = *(undefined4 *)(lVar14 + 0x50);
                                      uVar5 = *(undefined4 *)(lVar14 + 0x54);
                                      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                      *puVar1 = *(undefined4 *)(lVar14 + 0x48);
                                      puVar1[1] = uVar3;
                                      puVar1[2] = uVar4;
                                      puVar1[3] = uVar5;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          lVar7 = FUN_1429af6e0();
                          if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            local_50 = *(undefined8 *)(lVar14 + 0x40);
                            iVar2 = *(int *)(param_2 + 8);
                            local_44 = 0xffffffff;
                            local_48 = 0x202ffff;
                            FUN_141f08a10(param_2,&local_50);
                            if (iVar2 != *(int *)(param_2 + 8)) {
                              iVar2 = (int)param_3[1];
                              *(int *)(param_3 + 1) = iVar2 + 1;
                              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                              }
                              uVar3 = *(undefined4 *)(lVar14 + 0x4c);
                              uVar4 = *(undefined4 *)(lVar14 + 0x50);
                              uVar5 = *(undefined4 *)(lVar14 + 0x54);
                              puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                              *puVar1 = *(undefined4 *)(lVar14 + 0x48);
                              puVar1[1] = uVar3;
                              puVar1[2] = uVar4;
                              puVar1[3] = uVar5;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_d0 = local_d0 + 8;
                uVar13 = local_b0;
              } while (local_res8 < (int)local_a0[1]);
            }
          }
        }
        else if (*(longlong *)(lVar8 + 0x40) != 0) {
          FUN_142555e40(*(longlong *)(lVar8 + 0x40),param_2,param_3,&local_c0);
        }
      }
      else {
        local_90 = *(undefined8 *)(lVar7 + 0x40);
        iVar2 = *(int *)(param_2 + 8);
        local_84 = 0xffffffff;
        local_88 = 0x202ffff;
        FUN_141f08a10(param_2,&local_90);
        if (iVar2 != *(int *)(param_2 + 8)) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          uVar3 = *(undefined4 *)(lVar7 + 0x4c);
          uVar4 = *(undefined4 *)(lVar7 + 0x50);
          uVar5 = *(undefined4 *)(lVar7 + 0x54);
          puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(lVar7 + 0x48);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_98 = local_98 + 1;
    } while (local_98 != local_40);
  }
  return;
}



// FUNCTION 1425575d0 FUN_1425575d0 body=2188 status=ok
// SIG undefined FUN_1425575d0(void)

void FUN_1425575d0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  longlong *local_40;
  
  local_98 = *(longlong **)(param_1 + 0x740);
  local_40 = local_98 + *(int *)(param_1 + 0x748);
  if (local_98 != local_40) {
    local_b8 = 0;
    uVar14 = 0;
    do {
      lVar15 = *local_98;
      if (lVar15 == 0) {
LAB_142557678:
        lVar7 = 0;
      }
      else {
        lVar7 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar7 = lVar15;
        if (!bVar6) goto LAB_142557678;
      }
      if (lVar15 == 0) {
LAB_1425576bb:
        lVar8 = 0;
      }
      else {
        lVar8 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar8 = lVar15;
        if (!bVar6) goto LAB_1425576bb;
      }
      if (lVar15 == 0) {
LAB_1425576f8:
        lVar15 = 0;
      }
      else {
        lVar9 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1425576f8;
      }
      local_cc = -1;
      local_d0 = 0x202ffff;
      local_d8 = uVar14;
      if (lVar7 == 0) {
        if (lVar8 == 0) {
          if (lVar15 != 0) {
            local_b0 = *(longlong **)(lVar15 + 0x100);
            local_a8 = local_b0 + 2;
            if (local_b0 == (longlong *)0x0) {
              local_b0 = (longlong *)(lVar15 + 0x90);
              local_a8 = (longlong *)(lVar15 + 0xa0);
            }
            if (param_4 != (longlong *)0x0) {
              plVar12 = (longlong *)*param_4;
              plVar10 = plVar12 + (longlong)(int)param_4[1] * 0xd;
              if (plVar12 != plVar10) {
                do {
                  if (*plVar12 == *(longlong *)(lVar15 + 0x40)) {
                    local_b0 = plVar12 + 2;
                    local_a8 = plVar12 + 4;
                    break;
                  }
                  plVar12 = plVar12 + 0xd;
                } while (plVar12 != plVar10);
              }
            }
            local_res8 = 0;
            if (0 < (int)local_b0[1]) {
              local_c0 = (longlong *)0x0;
              plVar12 = local_b0;
              do {
                if (*(longlong **)((longlong)local_c0 + *plVar12) != (longlong *)0x0) {
                  local_d0 = local_d0 & 0xffffff;
                  local_cc = local_res8;
                  plVar10 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c0 + *plVar12) + 0x2b0))();
                  if (plVar10 != (longlong *)0x0) {
                    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x2c0))(plVar10);
                    plVar10 = (longlong *)*plVar11;
                    plVar11 = plVar10 + (int)plVar11[1];
                    local_c8 = plVar10;
                    local_a0 = plVar11;
                    if (plVar10 != plVar11) {
                      do {
                        lVar15 = *plVar10;
                        if (lVar15 != 0) {
                          local_c8 = plVar10;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar12 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar12 != (longlong *)0x0)) {
                              plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                              plVar16 = (longlong *)*plVar12;
                              plVar12 = plVar16 + (int)plVar12[1];
                              for (; plVar16 != plVar12; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_142555f60(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UMaterialExpressionScalarParameter::
                                            GetPrivateStaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_80 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_75 = local_d0._3_1_;
                                      local_74 = local_cc;
                                      local_78 = 0xffff;
                                      local_76 = 2;
                                      FUN_141f08a10(param_2,&local_80);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar11 = local_a0;
                                plVar10 = local_c8;
                              }
                            }
                          }
                          else {
                            lVar7 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_70 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_68 = 0xffff;
                              local_65 = local_d0._3_1_;
                              local_64 = local_cc;
                              local_66 = 2;
                              FUN_141f08a10(param_2,&local_70);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar10 = plVar10 + 1;
                        plVar12 = local_b0;
                        local_c8 = plVar10;
                      } while (plVar10 != plVar11);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c0 = local_c0 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)plVar12[1]);
            }
            local_res8 = 0;
            if (0 < (int)local_a8[1]) {
              local_c8 = (longlong *)0x0;
              do {
                if (*(longlong **)((longlong)local_c8 + *local_a8) != (longlong *)0x0) {
                  local_d0 = CONCAT13(1,(undefined3)local_d0);
                  local_cc = local_res8;
                  plVar12 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c8 + *local_a8) + 0x2b0))()
                  ;
                  if (plVar12 != (longlong *)0x0) {
                    puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                    plVar12 = (longlong *)*puVar13;
                    plVar10 = plVar12 + *(int *)(puVar13 + 1);
                    local_c0 = plVar12;
                    local_a0 = plVar10;
                    if (plVar12 != plVar10) {
                      do {
                        lVar15 = *plVar12;
                        if (lVar15 != 0) {
                          local_c0 = plVar12;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar11 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar11 != (longlong *)0x0)) {
                              plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                              plVar16 = (longlong *)*plVar11;
                              plVar11 = plVar16 + (int)plVar11[1];
                              for (; plVar16 != plVar11; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_142555f60(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UMaterialExpressionScalarParameter::
                                            GetPrivateStaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_60 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_55 = local_d0._3_1_;
                                      local_54 = local_cc;
                                      local_58 = 0xffff;
                                      local_56 = 2;
                                      FUN_141f08a10(param_2,&local_60);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar10 = local_a0;
                                plVar12 = local_c0;
                              }
                            }
                          }
                          else {
                            lVar7 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_50 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_48 = 0xffff;
                              local_45 = local_d0._3_1_;
                              local_44 = local_cc;
                              local_46 = 2;
                              FUN_141f08a10(param_2,&local_50);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar12 = plVar12 + 1;
                        local_c0 = plVar12;
                      } while (plVar12 != plVar10);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c8 = local_c8 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)local_a8[1]);
            }
          }
        }
        else if (*(longlong *)(lVar8 + 0x40) != 0) {
          FUN_142555f60(*(longlong *)(lVar8 + 0x40),param_2,param_3,&local_d8);
        }
      }
      else {
        local_90 = *(undefined8 *)(lVar7 + 0x40);
        iVar2 = *(int *)(param_2 + 8);
        local_84 = 0xffffffff;
        local_88 = 0x202ffff;
        FUN_141f08a10(param_2,&local_90);
        if (iVar2 != *(int *)(param_2 + 8)) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          uVar3 = *(undefined4 *)(lVar7 + 0x4c);
          uVar4 = *(undefined4 *)(lVar7 + 0x50);
          uVar5 = *(undefined4 *)(lVar7 + 0x54);
          puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(lVar7 + 0x48);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_98 = local_98 + 1;
    } while (local_98 != local_40);
  }
  return;
}



// FUNCTION 142557e60 FUN_142557e60 body=2188 status=ok
// SIG undefined FUN_142557e60(void)

void FUN_142557e60(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  longlong *local_40;
  
  local_98 = *(longlong **)(param_1 + 0x740);
  local_40 = local_98 + *(int *)(param_1 + 0x748);
  if (local_98 != local_40) {
    local_b8 = 0;
    uVar14 = 0;
    do {
      lVar15 = *local_98;
      if (lVar15 == 0) {
LAB_142557f08:
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_1429b47b0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar7 = lVar15;
        if (!bVar6) goto LAB_142557f08;
      }
      if (lVar15 == 0) {
LAB_142557f4b:
        lVar8 = 0;
      }
      else {
        lVar8 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar8 = lVar15;
        if (!bVar6) goto LAB_142557f4b;
      }
      if (lVar15 == 0) {
LAB_142557f88:
        lVar15 = 0;
      }
      else {
        lVar9 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142557f88;
      }
      local_cc = -1;
      local_d0 = 0x202ffff;
      local_d8 = uVar14;
      if (lVar7 == 0) {
        if (lVar8 == 0) {
          if (lVar15 != 0) {
            local_b0 = *(longlong **)(lVar15 + 0x100);
            local_a8 = local_b0 + 2;
            if (local_b0 == (longlong *)0x0) {
              local_b0 = (longlong *)(lVar15 + 0x90);
              local_a8 = (longlong *)(lVar15 + 0xa0);
            }
            if (param_4 != (longlong *)0x0) {
              plVar12 = (longlong *)*param_4;
              plVar10 = plVar12 + (longlong)(int)param_4[1] * 0xd;
              if (plVar12 != plVar10) {
                do {
                  if (*plVar12 == *(longlong *)(lVar15 + 0x40)) {
                    local_b0 = plVar12 + 2;
                    local_a8 = plVar12 + 4;
                    break;
                  }
                  plVar12 = plVar12 + 0xd;
                } while (plVar12 != plVar10);
              }
            }
            local_res8 = 0;
            if (0 < (int)local_b0[1]) {
              local_c0 = (longlong *)0x0;
              plVar12 = local_b0;
              do {
                if (*(longlong **)((longlong)local_c0 + *plVar12) != (longlong *)0x0) {
                  local_d0 = local_d0 & 0xffffff;
                  local_cc = local_res8;
                  plVar10 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c0 + *plVar12) + 0x2b0))();
                  if (plVar10 != (longlong *)0x0) {
                    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x2c0))(plVar10);
                    plVar10 = (longlong *)*plVar11;
                    plVar11 = plVar10 + (int)plVar11[1];
                    local_c8 = plVar10;
                    local_a0 = plVar11;
                    if (plVar10 != plVar11) {
                      do {
                        lVar15 = *plVar10;
                        if (lVar15 != 0) {
                          local_c8 = plVar10;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar12 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar12 != (longlong *)0x0)) {
                              plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                              plVar16 = (longlong *)*plVar12;
                              plVar12 = plVar16 + (int)plVar12[1];
                              for (; plVar16 != plVar12; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_142556080(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = FUN_1429b47b0();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_80 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_75 = local_d0._3_1_;
                                      local_74 = local_cc;
                                      local_78 = 0xffff;
                                      local_76 = 2;
                                      FUN_141f08a10(param_2,&local_80);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar11 = local_a0;
                                plVar10 = local_c8;
                              }
                            }
                          }
                          else {
                            lVar7 = FUN_1429b47b0();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_70 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_68 = 0xffff;
                              local_65 = local_d0._3_1_;
                              local_64 = local_cc;
                              local_66 = 2;
                              FUN_141f08a10(param_2,&local_70);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar10 = plVar10 + 1;
                        plVar12 = local_b0;
                        local_c8 = plVar10;
                      } while (plVar10 != plVar11);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c0 = local_c0 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)plVar12[1]);
            }
            local_res8 = 0;
            if (0 < (int)local_a8[1]) {
              local_c8 = (longlong *)0x0;
              do {
                if (*(longlong **)((longlong)local_c8 + *local_a8) != (longlong *)0x0) {
                  local_d0 = CONCAT13(1,(undefined3)local_d0);
                  local_cc = local_res8;
                  plVar12 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c8 + *local_a8) + 0x2b0))()
                  ;
                  if (plVar12 != (longlong *)0x0) {
                    puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                    plVar12 = (longlong *)*puVar13;
                    plVar10 = plVar12 + *(int *)(puVar13 + 1);
                    local_c0 = plVar12;
                    local_a0 = plVar10;
                    if (plVar12 != plVar10) {
                      do {
                        lVar15 = *plVar12;
                        if (lVar15 != 0) {
                          local_c0 = plVar12;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar11 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar11 != (longlong *)0x0)) {
                              plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                              plVar16 = (longlong *)*plVar11;
                              plVar11 = plVar16 + (int)plVar11[1];
                              for (; plVar16 != plVar11; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_142556080(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = FUN_1429b47b0();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_60 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_55 = local_d0._3_1_;
                                      local_54 = local_cc;
                                      local_58 = 0xffff;
                                      local_56 = 2;
                                      FUN_141f08a10(param_2,&local_60);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar10 = local_a0;
                                plVar12 = local_c0;
                              }
                            }
                          }
                          else {
                            lVar7 = FUN_1429b47b0();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_50 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_48 = 0xffff;
                              local_45 = local_d0._3_1_;
                              local_44 = local_cc;
                              local_46 = 2;
                              FUN_141f08a10(param_2,&local_50);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar12 = plVar12 + 1;
                        local_c0 = plVar12;
                      } while (plVar12 != plVar10);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c8 = local_c8 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)local_a8[1]);
            }
          }
        }
        else if (*(longlong *)(lVar8 + 0x40) != 0) {
          FUN_142556080(*(longlong *)(lVar8 + 0x40),param_2,param_3,&local_d8);
        }
      }
      else {
        local_90 = *(undefined8 *)(lVar7 + 0x40);
        iVar2 = *(int *)(param_2 + 8);
        local_84 = 0xffffffff;
        local_88 = 0x202ffff;
        FUN_141f08a10(param_2,&local_90);
        if (iVar2 != *(int *)(param_2 + 8)) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          uVar3 = *(undefined4 *)(lVar7 + 0x4c);
          uVar4 = *(undefined4 *)(lVar7 + 0x50);
          uVar5 = *(undefined4 *)(lVar7 + 0x54);
          puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(lVar7 + 0x48);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_98 = local_98 + 1;
    } while (local_98 != local_40);
  }
  return;
}



// FUNCTION 1425586f0 FUN_1425586f0 body=2188 status=ok
// SIG undefined FUN_1425586f0(void)

void FUN_1425586f0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  longlong *local_40;
  
  local_98 = *(longlong **)(param_1 + 0x740);
  local_40 = local_98 + *(int *)(param_1 + 0x748);
  if (local_98 != local_40) {
    local_b8 = 0;
    uVar14 = 0;
    do {
      lVar15 = *local_98;
      if (lVar15 == 0) {
LAB_142558798:
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_1429b4960();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar7 = lVar15;
        if (!bVar6) goto LAB_142558798;
      }
      if (lVar15 == 0) {
LAB_1425587db:
        lVar8 = 0;
      }
      else {
        lVar8 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar8 = lVar15;
        if (!bVar6) goto LAB_1425587db;
      }
      if (lVar15 == 0) {
LAB_142558818:
        lVar15 = 0;
      }
      else {
        lVar9 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142558818;
      }
      local_cc = -1;
      local_d0 = 0x202ffff;
      local_d8 = uVar14;
      if (lVar7 == 0) {
        if (lVar8 == 0) {
          if (lVar15 != 0) {
            local_b0 = *(longlong **)(lVar15 + 0x100);
            local_a8 = local_b0 + 2;
            if (local_b0 == (longlong *)0x0) {
              local_b0 = (longlong *)(lVar15 + 0x90);
              local_a8 = (longlong *)(lVar15 + 0xa0);
            }
            if (param_4 != (longlong *)0x0) {
              plVar12 = (longlong *)*param_4;
              plVar10 = plVar12 + (longlong)(int)param_4[1] * 0xd;
              if (plVar12 != plVar10) {
                do {
                  if (*plVar12 == *(longlong *)(lVar15 + 0x40)) {
                    local_b0 = plVar12 + 2;
                    local_a8 = plVar12 + 4;
                    break;
                  }
                  plVar12 = plVar12 + 0xd;
                } while (plVar12 != plVar10);
              }
            }
            local_res8 = 0;
            if (0 < (int)local_b0[1]) {
              local_c0 = (longlong *)0x0;
              plVar12 = local_b0;
              do {
                if (*(longlong **)((longlong)local_c0 + *plVar12) != (longlong *)0x0) {
                  local_d0 = local_d0 & 0xffffff;
                  local_cc = local_res8;
                  plVar10 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c0 + *plVar12) + 0x2b0))();
                  if (plVar10 != (longlong *)0x0) {
                    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x2c0))(plVar10);
                    plVar10 = (longlong *)*plVar11;
                    plVar11 = plVar10 + (int)plVar11[1];
                    local_c8 = plVar10;
                    local_a0 = plVar11;
                    if (plVar10 != plVar11) {
                      do {
                        lVar15 = *plVar10;
                        if (lVar15 != 0) {
                          local_c8 = plVar10;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar12 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar12 != (longlong *)0x0)) {
                              plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                              plVar16 = (longlong *)*plVar12;
                              plVar12 = plVar16 + (int)plVar12[1];
                              for (; plVar16 != plVar12; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_1425561a0(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = FUN_1429b4960();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_80 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_75 = local_d0._3_1_;
                                      local_74 = local_cc;
                                      local_78 = 0xffff;
                                      local_76 = 2;
                                      FUN_141f08a10(param_2,&local_80);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar11 = local_a0;
                                plVar10 = local_c8;
                              }
                            }
                          }
                          else {
                            lVar7 = FUN_1429b4960();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_70 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_68 = 0xffff;
                              local_65 = local_d0._3_1_;
                              local_64 = local_cc;
                              local_66 = 2;
                              FUN_141f08a10(param_2,&local_70);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar10 = plVar10 + 1;
                        plVar12 = local_b0;
                        local_c8 = plVar10;
                      } while (plVar10 != plVar11);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c0 = local_c0 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)plVar12[1]);
            }
            local_res8 = 0;
            if (0 < (int)local_a8[1]) {
              local_c8 = (longlong *)0x0;
              do {
                if (*(longlong **)((longlong)local_c8 + *local_a8) != (longlong *)0x0) {
                  local_d0 = CONCAT13(1,(undefined3)local_d0);
                  local_cc = local_res8;
                  plVar12 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c8 + *local_a8) + 0x2b0))()
                  ;
                  if (plVar12 != (longlong *)0x0) {
                    puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                    plVar12 = (longlong *)*puVar13;
                    plVar10 = plVar12 + *(int *)(puVar13 + 1);
                    local_c0 = plVar12;
                    local_a0 = plVar10;
                    if (plVar12 != plVar10) {
                      do {
                        lVar15 = *plVar12;
                        if (lVar15 != 0) {
                          local_c0 = plVar12;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar11 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar11 != (longlong *)0x0)) {
                              plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                              plVar16 = (longlong *)*plVar11;
                              plVar11 = plVar16 + (int)plVar11[1];
                              for (; plVar16 != plVar11; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_1425561a0(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = FUN_1429b4960();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_60 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_55 = local_d0._3_1_;
                                      local_54 = local_cc;
                                      local_58 = 0xffff;
                                      local_56 = 2;
                                      FUN_141f08a10(param_2,&local_60);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar10 = local_a0;
                                plVar12 = local_c0;
                              }
                            }
                          }
                          else {
                            lVar7 = FUN_1429b4960();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_50 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_48 = 0xffff;
                              local_45 = local_d0._3_1_;
                              local_44 = local_cc;
                              local_46 = 2;
                              FUN_141f08a10(param_2,&local_50);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar12 = plVar12 + 1;
                        local_c0 = plVar12;
                      } while (plVar12 != plVar10);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c8 = local_c8 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)local_a8[1]);
            }
          }
        }
        else if (*(longlong *)(lVar8 + 0x40) != 0) {
          FUN_1425561a0(*(longlong *)(lVar8 + 0x40),param_2,param_3,&local_d8);
        }
      }
      else {
        local_90 = *(undefined8 *)(lVar7 + 0x40);
        iVar2 = *(int *)(param_2 + 8);
        local_84 = 0xffffffff;
        local_88 = 0x202ffff;
        FUN_141f08a10(param_2,&local_90);
        if (iVar2 != *(int *)(param_2 + 8)) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          uVar3 = *(undefined4 *)(lVar7 + 0x4c);
          uVar4 = *(undefined4 *)(lVar7 + 0x50);
          uVar5 = *(undefined4 *)(lVar7 + 0x54);
          puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(lVar7 + 0x48);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_98 = local_98 + 1;
    } while (local_98 != local_40);
  }
  return;
}



// FUNCTION 142558f80 FUN_142558f80 body=2228 status=ok
// SIG undefined FUN_142558f80(void)

void FUN_142558f80(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  longlong *local_40;
  
  local_98 = *(longlong **)(param_1 + 0x740);
  local_40 = local_98 + *(int *)(param_1 + 0x748);
  if (local_98 != local_40) {
    local_b8 = 0;
    uVar14 = 0;
    do {
      lVar15 = *local_98;
      if (lVar15 == 0) {
LAB_142559028:
        lVar7 = 0;
      }
      else {
        lVar7 = UCompositingMediaInput::StaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar7 = lVar15;
        if (!bVar6) goto LAB_142559028;
      }
      if (lVar15 == 0) {
LAB_14255906b:
        lVar8 = 0;
      }
      else {
        lVar8 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar8 = lVar15;
        if (!bVar6) goto LAB_14255906b;
      }
      if (lVar15 == 0) {
LAB_1425590a8:
        lVar15 = 0;
      }
      else {
        lVar9 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1425590a8;
      }
      local_cc = -1;
      local_d0 = 0x202ffff;
      local_d8 = uVar14;
      if (lVar7 == 0) {
        if (lVar8 == 0) {
          if (lVar15 != 0) {
            local_b0 = *(longlong **)(lVar15 + 0x100);
            local_a8 = local_b0 + 2;
            if (local_b0 == (longlong *)0x0) {
              local_b0 = (longlong *)(lVar15 + 0x90);
              local_a8 = (longlong *)(lVar15 + 0xa0);
            }
            if (param_4 != (longlong *)0x0) {
              plVar12 = (longlong *)*param_4;
              plVar10 = plVar12 + (longlong)(int)param_4[1] * 0xd;
              if (plVar12 != plVar10) {
                do {
                  if (*plVar12 == *(longlong *)(lVar15 + 0x40)) {
                    local_b0 = plVar12 + 2;
                    local_a8 = plVar12 + 4;
                    break;
                  }
                  plVar12 = plVar12 + 0xd;
                } while (plVar12 != plVar10);
              }
            }
            local_res8 = 0;
            if (0 < (int)local_b0[1]) {
              local_c0 = (longlong *)0x0;
              plVar12 = local_b0;
              do {
                if (*(longlong **)((longlong)local_c0 + *plVar12) != (longlong *)0x0) {
                  local_d0 = local_d0 & 0xffffff;
                  local_cc = local_res8;
                  plVar10 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c0 + *plVar12) + 0x2b0))();
                  if (plVar10 != (longlong *)0x0) {
                    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x2c0))(plVar10);
                    plVar10 = (longlong *)*plVar11;
                    plVar11 = plVar10 + (int)plVar11[1];
                    local_c8 = plVar10;
                    local_a0 = plVar11;
                    if (plVar10 != plVar11) {
                      do {
                        lVar15 = *plVar10;
                        if (lVar15 != 0) {
                          local_c8 = plVar10;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar12 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar12 != (longlong *)0x0)) {
                              plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                              plVar16 = (longlong *)*plVar12;
                              plVar12 = plVar16 + (int)plVar12[1];
                              for (; plVar16 != plVar12; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_1425562c0(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UCompositingMediaInput::StaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_80 = *(undefined8 *)(lVar15 + 0x1b8);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_75 = local_d0._3_1_;
                                      local_74 = local_cc;
                                      local_78 = 0xffff;
                                      local_76 = 2;
                                      FUN_141f08a10(param_2,&local_80);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x1c4);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x1c8);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x1cc);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x1c0);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar11 = local_a0;
                                plVar10 = local_c8;
                              }
                            }
                          }
                          else {
                            lVar7 = UCompositingMediaInput::StaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_70 = *(undefined8 *)(lVar15 + 0x1b8);
                              iVar2 = *(int *)(param_2 + 8);
                              local_68 = 0xffff;
                              local_65 = local_d0._3_1_;
                              local_64 = local_cc;
                              local_66 = 2;
                              FUN_141f08a10(param_2,&local_70);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x1c4);
                                uVar4 = *(undefined4 *)(lVar15 + 0x1c8);
                                uVar5 = *(undefined4 *)(lVar15 + 0x1cc);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x1c0);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar10 = plVar10 + 1;
                        plVar12 = local_b0;
                        local_c8 = plVar10;
                      } while (plVar10 != plVar11);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c0 = local_c0 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)plVar12[1]);
            }
            local_res8 = 0;
            if (0 < (int)local_a8[1]) {
              local_c8 = (longlong *)0x0;
              do {
                if (*(longlong **)((longlong)local_c8 + *local_a8) != (longlong *)0x0) {
                  local_d0 = CONCAT13(1,(undefined3)local_d0);
                  local_cc = local_res8;
                  plVar12 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c8 + *local_a8) + 0x2b0))()
                  ;
                  if (plVar12 != (longlong *)0x0) {
                    puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                    plVar12 = (longlong *)*puVar13;
                    plVar10 = plVar12 + *(int *)(puVar13 + 1);
                    local_c0 = plVar12;
                    local_a0 = plVar10;
                    if (plVar12 != plVar10) {
                      do {
                        lVar15 = *plVar12;
                        if (lVar15 != 0) {
                          local_c0 = plVar12;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar11 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar11 != (longlong *)0x0)) {
                              plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                              plVar16 = (longlong *)*plVar11;
                              plVar11 = plVar16 + (int)plVar11[1];
                              for (; plVar16 != plVar11; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_1425562c0(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UCompositingMediaInput::StaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_60 = *(undefined8 *)(lVar15 + 0x1b8);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_55 = local_d0._3_1_;
                                      local_54 = local_cc;
                                      local_58 = 0xffff;
                                      local_56 = 2;
                                      FUN_141f08a10(param_2,&local_60);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x1c4);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x1c8);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x1cc);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x1c0);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar10 = local_a0;
                                plVar12 = local_c0;
                              }
                            }
                          }
                          else {
                            lVar7 = UCompositingMediaInput::StaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_50 = *(undefined8 *)(lVar15 + 0x1b8);
                              iVar2 = *(int *)(param_2 + 8);
                              local_48 = 0xffff;
                              local_45 = local_d0._3_1_;
                              local_44 = local_cc;
                              local_46 = 2;
                              FUN_141f08a10(param_2,&local_50);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x1c4);
                                uVar4 = *(undefined4 *)(lVar15 + 0x1c8);
                                uVar5 = *(undefined4 *)(lVar15 + 0x1cc);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x1c0);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar12 = plVar12 + 1;
                        local_c0 = plVar12;
                      } while (plVar12 != plVar10);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c8 = local_c8 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)local_a8[1]);
            }
          }
        }
        else if (*(longlong *)(lVar8 + 0x40) != 0) {
          FUN_1425562c0(*(longlong *)(lVar8 + 0x40),param_2,param_3,&local_d8);
        }
      }
      else {
        local_90 = *(undefined8 *)(lVar7 + 0x1b8);
        iVar2 = *(int *)(param_2 + 8);
        local_84 = 0xffffffff;
        local_88 = 0x202ffff;
        FUN_141f08a10(param_2,&local_90);
        if (iVar2 != *(int *)(param_2 + 8)) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          uVar3 = *(undefined4 *)(lVar7 + 0x1c4);
          uVar4 = *(undefined4 *)(lVar7 + 0x1c8);
          uVar5 = *(undefined4 *)(lVar7 + 0x1cc);
          puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(lVar7 + 0x1c0);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_98 = local_98 + 1;
    } while (local_98 != local_40);
  }
  return;
}



// FUNCTION 142559840 FUN_142559840 body=2188 status=ok
// SIG undefined FUN_142559840(void)

void FUN_142559840(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int local_res8;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  int local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  longlong *local_40;
  
  local_98 = *(longlong **)(param_1 + 0x740);
  local_40 = local_98 + *(int *)(param_1 + 0x748);
  if (local_98 != local_40) {
    local_b8 = 0;
    uVar14 = 0;
    do {
      lVar15 = *local_98;
      if (lVar15 == 0) {
LAB_1425598e8:
        lVar7 = 0;
      }
      else {
        lVar7 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar7 = lVar15;
        if (!bVar6) goto LAB_1425598e8;
      }
      if (lVar15 == 0) {
LAB_14255992b:
        lVar8 = 0;
      }
      else {
        lVar8 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar8 = lVar15;
        if (!bVar6) goto LAB_14255992b;
      }
      if (lVar15 == 0) {
LAB_142559968:
        lVar15 = 0;
      }
      else {
        lVar9 = FUN_1429af6e0();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142559968;
      }
      local_cc = -1;
      local_d0 = 0x202ffff;
      local_d8 = uVar14;
      if (lVar7 == 0) {
        if (lVar8 == 0) {
          if (lVar15 != 0) {
            local_b0 = *(longlong **)(lVar15 + 0x100);
            local_a8 = local_b0 + 2;
            if (local_b0 == (longlong *)0x0) {
              local_b0 = (longlong *)(lVar15 + 0x90);
              local_a8 = (longlong *)(lVar15 + 0xa0);
            }
            if (param_4 != (longlong *)0x0) {
              plVar12 = (longlong *)*param_4;
              plVar10 = plVar12 + (longlong)(int)param_4[1] * 0xd;
              if (plVar12 != plVar10) {
                do {
                  if (*plVar12 == *(longlong *)(lVar15 + 0x40)) {
                    local_b0 = plVar12 + 2;
                    local_a8 = plVar12 + 4;
                    break;
                  }
                  plVar12 = plVar12 + 0xd;
                } while (plVar12 != plVar10);
              }
            }
            local_res8 = 0;
            if (0 < (int)local_b0[1]) {
              local_c0 = (longlong *)0x0;
              plVar12 = local_b0;
              do {
                if (*(longlong **)((longlong)local_c0 + *plVar12) != (longlong *)0x0) {
                  local_d0 = local_d0 & 0xffffff;
                  local_cc = local_res8;
                  plVar10 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c0 + *plVar12) + 0x2b0))();
                  if (plVar10 != (longlong *)0x0) {
                    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x2c0))(plVar10);
                    plVar10 = (longlong *)*plVar11;
                    plVar11 = plVar10 + (int)plVar11[1];
                    local_c8 = plVar10;
                    local_a0 = plVar11;
                    if (plVar10 != plVar11) {
                      do {
                        lVar15 = *plVar10;
                        if (lVar15 != 0) {
                          local_c8 = plVar10;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar12 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar12 != (longlong *)0x0)) {
                              plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                              plVar16 = (longlong *)*plVar12;
                              plVar12 = plVar16 + (int)plVar12[1];
                              for (; plVar16 != plVar12; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_1425563e0(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UMaterialExpressionVectorParameter::
                                            GetPrivateStaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_80 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_75 = local_d0._3_1_;
                                      local_74 = local_cc;
                                      local_78 = 0xffff;
                                      local_76 = 2;
                                      FUN_141f08a10(param_2,&local_80);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar11 = local_a0;
                                plVar10 = local_c8;
                              }
                            }
                          }
                          else {
                            lVar7 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_70 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_68 = 0xffff;
                              local_65 = local_d0._3_1_;
                              local_64 = local_cc;
                              local_66 = 2;
                              FUN_141f08a10(param_2,&local_70);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar10 = plVar10 + 1;
                        plVar12 = local_b0;
                        local_c8 = plVar10;
                      } while (plVar10 != plVar11);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c0 = local_c0 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)plVar12[1]);
            }
            local_res8 = 0;
            if (0 < (int)local_a8[1]) {
              local_c8 = (longlong *)0x0;
              do {
                if (*(longlong **)((longlong)local_c8 + *local_a8) != (longlong *)0x0) {
                  local_d0 = CONCAT13(1,(undefined3)local_d0);
                  local_cc = local_res8;
                  plVar12 = (longlong *)
                            (**(code **)(**(longlong **)((longlong)local_c8 + *local_a8) + 0x2b0))()
                  ;
                  if (plVar12 != (longlong *)0x0) {
                    puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x2c0))(plVar12);
                    plVar12 = (longlong *)*puVar13;
                    plVar10 = plVar12 + *(int *)(puVar13 + 1);
                    local_c0 = plVar12;
                    local_a0 = plVar10;
                    if (plVar12 != plVar10) {
                      do {
                        lVar15 = *plVar12;
                        if (lVar15 != 0) {
                          local_c0 = plVar12;
                          lVar7 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                               *(int *)(lVar7 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                            bVar6 = false;
                          }
                          else {
                            bVar6 = true;
                          }
                          if (bVar6) {
                            if ((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                               (plVar11 = (longlong *)
                                          (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x2b0))(),
                               plVar11 != (longlong *)0x0)) {
                              plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2c0))(plVar11);
                              plVar16 = (longlong *)*plVar11;
                              plVar11 = plVar16 + (int)plVar11[1];
                              for (; plVar16 != plVar11; plVar16 = plVar16 + 1) {
                                lVar15 = *plVar16;
                                if (lVar15 != 0) {
                                  lVar7 = UMaterialExpressionMaterialFunctionCall::
                                          GetPrivateStaticClass();
                                  if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                       *(int *)(lVar7 + 0x90)) ||
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                    bVar6 = false;
                                  }
                                  else {
                                    bVar6 = true;
                                  }
                                  if (bVar6) {
                                    if (*(longlong *)(lVar15 + 0x40) != 0) {
                                      FUN_1425563e0(*(longlong *)(lVar15 + 0x40),param_2,param_3,
                                                    &local_d8);
                                    }
                                  }
                                  else {
                                    lVar7 = UMaterialExpressionVectorParameter::
                                            GetPrivateStaticClass();
                                    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                         *(int *)(lVar7 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                      bVar6 = false;
                                    }
                                    else {
                                      bVar6 = true;
                                    }
                                    if (bVar6) {
                                      local_60 = *(undefined8 *)(lVar15 + 0x40);
                                      iVar2 = *(int *)(param_2 + 8);
                                      local_55 = local_d0._3_1_;
                                      local_54 = local_cc;
                                      local_58 = 0xffff;
                                      local_56 = 2;
                                      FUN_141f08a10(param_2,&local_60);
                                      if (iVar2 != *(int *)(param_2 + 8)) {
                                        iVar2 = (int)param_3[1];
                                        *(int *)(param_3 + 1) = iVar2 + 1;
                                        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow
                                                    (param_3,iVar2);
                                        }
                                        uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                        uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                        uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                        *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                        puVar1[1] = uVar3;
                                        puVar1[2] = uVar4;
                                        puVar1[3] = uVar5;
                                      }
                                    }
                                  }
                                }
                                plVar10 = local_a0;
                                plVar12 = local_c0;
                              }
                            }
                          }
                          else {
                            lVar7 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
                            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) <
                                 *(int *)(lVar7 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                            }
                            if (bVar6) {
                              local_50 = *(undefined8 *)(lVar15 + 0x40);
                              iVar2 = *(int *)(param_2 + 8);
                              local_48 = 0xffff;
                              local_45 = local_d0._3_1_;
                              local_44 = local_cc;
                              local_46 = 2;
                              FUN_141f08a10(param_2,&local_50);
                              if (iVar2 != *(int *)(param_2 + 8)) {
                                iVar2 = (int)param_3[1];
                                *(int *)(param_3 + 1) = iVar2 + 1;
                                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
                                }
                                uVar3 = *(undefined4 *)(lVar15 + 0x4c);
                                uVar4 = *(undefined4 *)(lVar15 + 0x50);
                                uVar5 = *(undefined4 *)(lVar15 + 0x54);
                                puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
                                *puVar1 = *(undefined4 *)(lVar15 + 0x48);
                                puVar1[1] = uVar3;
                                puVar1[2] = uVar4;
                                puVar1[3] = uVar5;
                              }
                            }
                          }
                        }
                        plVar12 = plVar12 + 1;
                        local_c0 = plVar12;
                      } while (plVar12 != plVar10);
                    }
                  }
                }
                local_res8 = local_res8 + 1;
                local_c8 = local_c8 + 1;
                uVar14 = local_b8;
              } while (local_res8 < (int)local_a8[1]);
            }
          }
        }
        else if (*(longlong *)(lVar8 + 0x40) != 0) {
          FUN_1425563e0(*(longlong *)(lVar8 + 0x40),param_2,param_3,&local_d8);
        }
      }
      else {
        local_90 = *(undefined8 *)(lVar7 + 0x40);
        iVar2 = *(int *)(param_2 + 8);
        local_84 = 0xffffffff;
        local_88 = 0x202ffff;
        FUN_141f08a10(param_2,&local_90);
        if (iVar2 != *(int *)(param_2 + 8)) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
          }
          uVar3 = *(undefined4 *)(lVar7 + 0x4c);
          uVar4 = *(undefined4 *)(lVar7 + 0x50);
          uVar5 = *(undefined4 *)(lVar7 + 0x54);
          puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
          *puVar1 = *(undefined4 *)(lVar7 + 0x48);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_98 = local_98 + 1;
    } while (local_98 != local_40);
  }
  return;
}



// FUNCTION 14255a0d0 FUN_14255a0d0 body=414 status=ok
// SIG undefined FUN_14255a0d0(void)

undefined8 FUN_14255a0d0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *local_38;
  undefined8 local_30;
  
  *param_3 = 0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar5 != (longlong *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_38);
    uVar2 = local_30;
    lVar10 = (longlong)(int)local_30;
    for (puVar7 = local_38; puVar7 != local_38 + lVar10; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar5) {
        if ((int)((longlong)puVar7 - (longlong)local_38 >> 3) != -1) goto LAB_14255a18a;
        break;
      }
    }
    iVar4 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar4);
    if (local_30._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_38,uVar2 & 0xffffffff);
    }
    local_38[lVar10] = plVar5;
LAB_14255a18a:
    puVar7 = local_38 + (int)local_30;
    for (puVar9 = local_38; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      plVar1 = (longlong *)*puVar9;
      plVar5 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1);
      plVar8 = (longlong *)*plVar5;
      plVar5 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          lVar6 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar10 + 0x40) == *param_2)) {
            *param_3 = lVar10;
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = plVar1;
            }
            if (local_38 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return 0;
}



// FUNCTION 14255a270 FUN_14255a270 body=414 status=ok
// SIG undefined FUN_14255a270(void)

undefined8 FUN_14255a270(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *local_38;
  undefined8 local_30;
  
  *param_3 = 0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar5 != (longlong *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_38);
    uVar2 = local_30;
    lVar10 = (longlong)(int)local_30;
    for (puVar7 = local_38; puVar7 != local_38 + lVar10; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar5) {
        if ((int)((longlong)puVar7 - (longlong)local_38 >> 3) != -1) goto LAB_14255a32a;
        break;
      }
    }
    iVar4 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar4);
    if (local_30._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_38,uVar2 & 0xffffffff);
    }
    local_38[lVar10] = plVar5;
LAB_14255a32a:
    puVar7 = local_38 + (int)local_30;
    for (puVar9 = local_38; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      plVar1 = (longlong *)*puVar9;
      plVar5 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1);
      plVar8 = (longlong *)*plVar5;
      plVar5 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          lVar6 = FUN_1429b47b0();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar10 + 0x40) == *param_2)) {
            *param_3 = lVar10;
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = plVar1;
            }
            if (local_38 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return 0;
}



// FUNCTION 14255a410 FUN_14255a410 body=414 status=ok
// SIG undefined FUN_14255a410(void)

undefined8 FUN_14255a410(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *local_38;
  undefined8 local_30;
  
  *param_3 = 0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar5 != (longlong *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_38);
    uVar2 = local_30;
    lVar10 = (longlong)(int)local_30;
    for (puVar7 = local_38; puVar7 != local_38 + lVar10; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar5) {
        if ((int)((longlong)puVar7 - (longlong)local_38 >> 3) != -1) goto LAB_14255a4ca;
        break;
      }
    }
    iVar4 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar4);
    if (local_30._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_38,uVar2 & 0xffffffff);
    }
    local_38[lVar10] = plVar5;
LAB_14255a4ca:
    puVar7 = local_38 + (int)local_30;
    for (puVar9 = local_38; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      plVar1 = (longlong *)*puVar9;
      plVar5 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1);
      plVar8 = (longlong *)*plVar5;
      plVar5 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          lVar6 = FUN_1429b4960();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar10 + 0x40) == *param_2)) {
            *param_3 = lVar10;
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = plVar1;
            }
            if (local_38 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return 0;
}



// FUNCTION 14255a5b0 FUN_14255a5b0 body=414 status=ok
// SIG undefined FUN_14255a5b0(void)

undefined8 FUN_14255a5b0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *local_38;
  undefined8 local_30;
  
  *param_3 = 0;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar5 != (longlong *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_38);
    uVar2 = local_30;
    lVar10 = (longlong)(int)local_30;
    for (puVar7 = local_38; puVar7 != local_38 + lVar10; puVar7 = puVar7 + 1) {
      if ((longlong *)*puVar7 == plVar5) {
        if ((int)((longlong)puVar7 - (longlong)local_38 >> 3) != -1) goto LAB_14255a66a;
        break;
      }
    }
    iVar4 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar4);
    if (local_30._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_38,uVar2 & 0xffffffff);
    }
    local_38[lVar10] = plVar5;
LAB_14255a66a:
    puVar7 = local_38 + (int)local_30;
    for (puVar9 = local_38; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      plVar1 = (longlong *)*puVar9;
      plVar5 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1);
      plVar8 = (longlong *)*plVar5;
      plVar5 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          lVar6 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar10 + 0x40) == *param_2)) {
            *param_3 = lVar10;
            if (param_4 != (undefined8 *)0x0) {
              *param_4 = plVar1;
            }
            if (local_38 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return 0;
}



// FUNCTION 14255a750 FUN_14255a750 body=1078 status=ok
// SIG undefined FUN_14255a750(void)

undefined8 FUN_14255a750(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  plVar11 = *(longlong **)(param_1 + 0x740);
  plVar1 = plVar11 + *(int *)(param_1 + 0x748);
  bVar17 = plVar11 == plVar1;
LAB_14255a780:
  do {
    if (bVar17) {
      return 0;
    }
    lVar15 = *plVar11;
    if (lVar15 == 0) {
LAB_14255a807:
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1429b4af0();
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        return 1;
      }
      lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      lVar5 = lVar15;
      if (!bVar17) goto LAB_14255a807;
    }
    if (lVar15 == 0) {
LAB_14255a845:
      lVar15 = 0;
    }
    else {
      lVar6 = FUN_1429af6e0();
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (!bVar17) goto LAB_14255a845;
    }
    if (lVar5 == 0) {
      if (lVar15 != 0) {
        plVar7 = *(longlong **)(lVar15 + 0x100);
        plVar12 = plVar7;
        if (plVar7 == (longlong *)0x0) {
          plVar12 = (longlong *)(lVar15 + 0x90);
        }
        plVar8 = (longlong *)*plVar12;
        plVar16 = plVar7 + 2;
        if (plVar7 == (longlong *)0x0) {
          plVar16 = (longlong *)(lVar15 + 0xa0);
        }
        plVar12 = plVar8 + (int)plVar12[1];
        for (; plVar8 != plVar12; plVar8 = plVar8 + 1) {
          if (((longlong *)*plVar8 != (longlong *)0x0) &&
             (plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x2b8))(),
             plVar7 != (longlong *)0x0)) {
            local_58 = (undefined8 *)0x0;
            local_50 = 0;
            (**(code **)(*plVar7 + 0x2a0))(plVar7,&local_58);
            uVar2 = local_50;
            lVar15 = (longlong)(int)local_50;
            for (puVar9 = local_58; puVar9 != local_58 + lVar15; puVar9 = puVar9 + 1) {
              if ((longlong *)*puVar9 == plVar7) {
                if ((int)((longlong)puVar9 - (longlong)local_58 >> 3) != -1) goto LAB_14255a955;
                break;
              }
            }
            iVar4 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar4);
            if (local_50._4_4_ < iVar4) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_58,uVar2 & 0xffffffff);
            }
            local_58[lVar15] = plVar7;
LAB_14255a955:
            puVar9 = local_58 + (int)local_50;
            for (puVar14 = local_58; puVar14 != puVar9; puVar14 = puVar14 + 1) {
              plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar14 + 0x2c0))();
              plVar13 = (longlong *)*plVar7;
              plVar7 = plVar13 + (int)plVar7[1];
              for (; plVar13 != plVar7; plVar13 = plVar13 + 1) {
                lVar15 = *plVar13;
                if (lVar15 != 0) {
                  lVar5 = FUN_1429b4af0();
                  lVar15 = *(longlong *)(lVar15 + 0x10);
                  if ((*(int *)(lVar15 + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar15 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                      lVar5 + 0x88)) {
                    bVar17 = false;
                  }
                  else {
                    bVar17 = true;
                  }
                  puVar10 = local_58;
                  if (bVar17) goto LAB_14255ab5e;
                }
              }
            }
            if (local_58 != (undefined8 *)0x0) {
              FMemory::Free(local_58);
            }
          }
        }
        plVar7 = (longlong *)*plVar16;
        plVar12 = plVar7 + (int)plVar16[1];
        for (; plVar7 != plVar12; plVar7 = plVar7 + 1) {
          if (((longlong *)*plVar7 != (longlong *)0x0) &&
             (plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar7 + 0x2b8))(),
             plVar8 != (longlong *)0x0)) {
            local_48 = (undefined8 *)0x0;
            local_40 = 0;
            (**(code **)(*plVar8 + 0x2a0))(plVar8,&local_48);
            uVar2 = local_40;
            lVar15 = (longlong)(int)local_40;
            for (puVar9 = local_48; puVar9 != local_48 + lVar15; puVar9 = puVar9 + 1) {
              if ((longlong *)*puVar9 == plVar8) {
                if ((int)((longlong)puVar9 - (longlong)local_48 >> 3) != -1) goto LAB_14255aaa4;
                break;
              }
            }
            iVar4 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar4);
            if (local_40._4_4_ < iVar4) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_48,uVar2 & 0xffffffff);
            }
            local_48[lVar15] = plVar8;
LAB_14255aaa4:
            puVar9 = local_48 + (int)local_40;
            for (puVar14 = local_48; puVar14 != puVar9; puVar14 = puVar14 + 1) {
              plVar8 = (longlong *)(**(code **)(*(longlong *)*puVar14 + 0x2c0))();
              plVar16 = (longlong *)*plVar8;
              plVar8 = plVar16 + (int)plVar8[1];
              for (; plVar16 != plVar8; plVar16 = plVar16 + 1) {
                lVar15 = *plVar16;
                if (lVar15 != 0) {
                  lVar5 = FUN_1429b4af0();
                  lVar15 = *(longlong *)(lVar15 + 0x10);
                  if ((*(int *)(lVar15 + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar15 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                      lVar5 + 0x88)) {
                    bVar17 = false;
                  }
                  else {
                    bVar17 = true;
                  }
                  puVar10 = local_48;
                  if (bVar17) {
LAB_14255ab5e:
                    if (puVar10 != (undefined8 *)0x0) {
                      FMemory::Free();
                    }
                    return 1;
                  }
                }
              }
            }
            if (local_48 != (undefined8 *)0x0) {
              FMemory::Free(local_48);
            }
          }
        }
      }
LAB_14255ab43:
      plVar11 = plVar11 + 1;
      bVar17 = plVar11 == plVar1;
      goto LAB_14255a780;
    }
    if (*(longlong *)(lVar5 + 0x40) == 0) goto LAB_14255ab43;
    cVar3 = FUN_14255ab90();
    if (cVar3 != '\0') {
      return 1;
    }
    plVar11 = plVar11 + 1;
    bVar17 = plVar11 == plVar1;
  } while( true );
}



// FUNCTION 14255ab90 FUN_14255ab90 body=370 status=ok
// SIG undefined FUN_14255ab90(void)

undefined8 FUN_14255ab90(longlong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *local_18;
  undefined8 local_10;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar4 != (longlong *)0x0) {
    local_18 = (undefined8 *)0x0;
    local_10 = 0;
    (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_18);
    uVar1 = local_10;
    lVar9 = (longlong)(int)local_10;
    for (puVar6 = local_18; puVar6 != local_18 + lVar9; puVar6 = puVar6 + 1) {
      if ((longlong *)*puVar6 == plVar4) {
        if ((int)((longlong)puVar6 - (longlong)local_18 >> 3) != -1) goto LAB_14255ac3a;
        break;
      }
    }
    iVar3 = (int)local_10 + 1;
    local_10 = CONCAT44(local_10._4_4_,iVar3);
    if (local_10._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_18,uVar1 & 0xffffffff);
    }
    local_18[lVar9] = plVar4;
LAB_14255ac3a:
    puVar6 = local_18 + (int)local_10;
    for (puVar8 = local_18; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x2c0))();
      plVar7 = (longlong *)*plVar4;
      plVar4 = plVar7 + (int)plVar4[1];
      for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        lVar9 = *plVar7;
        if (lVar9 != 0) {
          lVar5 = FUN_1429b4af0();
          lVar9 = *(longlong *)(lVar9 + 0x10);
          if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
              lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (local_18 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return 0;
}



// FUNCTION 14255ad10 FUN_14255ad10 body=186 status=ok
// SIG undefined FUN_14255ad10(void)

longlong * FUN_14255ad10(longlong *param_1,short *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  FUN_141785db0();
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_14179acf0(&local_18,1);
  lVar2 = FUN_142555390(&local_18);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    FUN_14178ab20(param_2);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14255add0 FUN_14255add0 body=344 status=ok
// SIG undefined FUN_14255add0(void)

undefined8 * FUN_14255add0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1450fa0c8;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x459c4000;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(byte *)((longlong)param_1 + 0x4a1) = *(byte *)((longlong)param_1 + 0x4a1) & 0xfe;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf3 | 3;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StaticMeshComponent0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_146aefc58);
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 0;
  FUN_1423974f0(param_1[0x8b],0);
  *(byte *)(param_1[0x8b] + 0x2f1) = *(byte *)(param_1[0x8b] + 0x2f1) & 0xef;
  *(byte *)(param_1[0x8b] + 0x2f2) = *(byte *)(param_1[0x8b] + 0x2f2) & 0xfe;
  *(byte *)(param_1[0x8b] + 0x2f1) = *(byte *)(param_1[0x8b] + 0x2f1) & 0x7f;
  *(byte *)(param_1[0x8b] + 0x2ef) = *(byte *)(param_1[0x8b] + 0x2ef) & 0xbf;
  *(byte *)(param_1[0x8b] + 0x2ee) = *(byte *)(param_1[0x8b] + 0x2ee) | 1;
  *(byte *)((longlong)param_1 + 0x4a1) = *(byte *)((longlong)param_1 + 0x4a1) & 0xf5;
  param_1[0x2d] = param_1[0x8b];
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x94) = 1;
  return param_1;
}



// FUNCTION 14255af30 FUN_14255af30 body=148 status=ok
// SIG undefined FUN_14255af30(void)

undefined8 *
FUN_14255af30(undefined8 *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  
  FUN_14257e0d0(param_6,param_3,param_4,param_5,param_6);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__1450fa058;
  param_1[0x27] = param_2;
  bVar1 = (**(code **)(*param_2 + 0x278))(param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xdf;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | (bVar1 & 1) << 5;
  bVar1 = (**(code **)(*param_2 + 0x280))(param_2);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xbf;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | (bVar1 & 1) << 6;
  return param_1;
}



// FUNCTION 14255afd0 FLightComponentMapBuildData body=172 status=ok
// SIG undefined FLightComponentMapBuildData(void)

undefined4 *
FLightComponentMapBuildData::FLightComponentMapBuildData(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar5;
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  uVar2 = param_2[0x11];
  uVar3 = param_2[0x12];
  uVar4 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar8 = param_2[0x18];
  puVar7 = *(undefined2 **)(param_2 + 0x16);
  param_1[0x18] = iVar8;
  if (iVar8 == 0) {
    param_1[0x19] = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 0x16,iVar8,0);
    puVar6 = *(undefined2 **)(param_1 + 0x16);
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return param_1;
}



// FUNCTION 14255b080 FMaterialResource body=53 status=ok
// SIG undefined FMaterialResource(void)

undefined8 * FMaterialResource::FMaterialResource(undefined8 *param_1)

{
  param_1[1] = 0;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffffc;
  *param_1 = &PTR_FUN_144eef6b8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14255b0c0 FMeshMapBuildData body=207 status=ok
// SIG undefined FMeshMapBuildData(void)

longlong * FMeshMapBuildData::FMeshMapBuildData(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  }
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar3,(longlong)iVar1 << 4);
  }
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[4],pvVar3,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 14255b190 FUN_14255b190 body=632 status=ok
// SIG undefined FUN_14255b190(void)

undefined4 * FUN_14255b190(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if (iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 10,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  pvVar2 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if (iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x10,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar2 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if (iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x14,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x14),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = param_2[0x1a];
  pvVar2 = *(void **)(param_2 + 0x18);
  param_1[0x1a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x18,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  pvVar2 = *(void **)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1c,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x1c),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = param_2[0x22];
  pvVar2 = *(void **)(param_2 + 0x20);
  param_1[0x22] = iVar1;
  if (iVar1 == 0) {
    param_1[0x23] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x20,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x20),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  iVar1 = param_2[0x26];
  pvVar2 = *(void **)(param_2 + 0x24);
  param_1[0x26] = iVar1;
  if (iVar1 == 0) {
    param_1[0x27] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x24,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x24),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  return param_1;
}



// FUNCTION 14255b410 FUN_14255b410 body=77 status=ok
// SIG undefined FUN_14255b410(void)

undefined8 * FUN_14255b410(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  param_1[2] = 0;
  param_1[1] = 0;
  puVar1 = (undefined8 *)FDateTime::Now(local_res8);
  *param_1 = *puVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 14255b460 UMapBuildDataRegistry body=307 status=ok
// SIG undefined UMapBuildDataRegistry(void)

undefined8 * UMapBuildDataRegistry::UMapBuildDataRegistry(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450fa7b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 5) = 4;
  return param_1;
}



// FUNCTION 14255b5a0 FUN_14255b5a0 body=1610 status=ok
// SIG undefined FUN_14255b5a0(void)

undefined8 * FUN_14255b5a0(undefined8 *param_1)

{
  UMaterialInterface::UMaterialInterface();
  *param_1 = &PTR_FUN_1450f9ae8;
  param_1[5] = &PTR_LAB_1450fa010;
  param_1[6] = &PTR_LAB_1450fa028;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined1 *)(param_1 + 0x107) = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)((longlong)param_1 + 0x141) = 0;
  *(undefined2 *)((longlong)param_1 + 0x143) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6d5) = 0;
  *(uint *)(param_1 + 0xe1) = *(uint *)(param_1 + 0xe1) & 0xfffdffff;
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xdb) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0x40000000;
  param_1[0xdd] = 0x41200000;
  *(undefined4 *)(param_1 + 0xde) = 0x41f00000;
  *(undefined8 *)((longlong)param_1 + 0x6f4) = 0x3f553f7d3f800000;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0x3f8000003f16872b;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0x42c80000;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(uint *)(param_1 + 0xee) = *(uint *)(param_1 + 0xee) & 0xffffffef;
  *(uint *)(param_1 + 0xee) = *(uint *)(param_1 + 0xee) | 0x20;
  *(uint *)((longlong)param_1 + 0x714) = *(uint *)((longlong)param_1 + 0x714) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x714) = *(uint *)((longlong)param_1 + 0x714) | 2;
  *(uint *)((longlong)param_1 + 0x71c) = *(uint *)((longlong)param_1 + 0x71c) | 2;
  *(uint *)(param_1 + 0xd9) = *(uint *)(param_1 + 0xd9) & 0xffffffe1 | 1;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  *(uint *)(param_1 + 0xe1) = *(uint *)(param_1 + 0xe1) & 0xf7ffffff | 0x40000008;
  *(undefined1 *)(param_1 + 0xef) = 0;
  *(uint *)(param_1 + 0xe1) = *(uint *)(param_1 + 0xe1) & 0xffffffcf;
  *(uint *)(param_1 + 0xd9) = *(uint *)(param_1 + 0xd9) & 0xffffff3f;
  *(uint *)((longlong)param_1 + 0x71c) = *(uint *)((longlong)param_1 + 0x71c) & 0xffffffe7;
  *(uint *)(param_1 + 0xee) = *(uint *)(param_1 + 0xee) & 0xfffffef3 | 0x80;
  *(undefined4 *)((longlong)param_1 + 0x77c) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0;
  return param_1;
}



// FUNCTION 14255bbf0 UMaterialExpression body=33 status=ok
// SIG undefined UMaterialExpression(void)

undefined8 * UMaterialExpression::UMaterialExpression(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14413f3e0;
  return param_1;
}



// FUNCTION 14255bc20 FUN_14255bc20 body=179 status=ok
// SIG undefined FUN_14255bc20(void)

undefined8 * FUN_14255bc20(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdd00) {
    _Init_thread_header(&DAT_146afdd00);
    if (DAT_146afdd00 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdce8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb06a0);
      _Init_thread_footer(&DAT_146afdd00);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255bce0 FUN_14255bce0 body=231 status=ok
// SIG undefined FUN_14255bce0(void)

undefined8 * FUN_14255bce0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd208) {
    _Init_thread_header(&DAT_146afd208);
    if (DAT_146afd208 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd1f0,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb06f0);
      _Init_thread_footer(&DAT_146afd208);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  return param_1;
}



// FUNCTION 14255bdd0 FUN_14255bdd0 body=213 status=ok
// SIG undefined FUN_14255bdd0(void)

undefined8 * FUN_14255bdd0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe188) {
    _Init_thread_header(&DAT_146afe188);
    if (DAT_146afe188 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe170,L"Logic",L"MaterialExpression",L"Logic");
      atexit(FUN_143eb0740);
      _Init_thread_footer(&DAT_146afe188);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255beb0 FUN_14255beb0 body=192 status=ok
// SIG undefined FUN_14255beb0(void)

undefined8 * FUN_14255beb0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142562ef0();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145102078;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdff0) {
    _Init_thread_header(&DAT_146afdff0);
    if (DAT_146afdff0 == -1) {
      FUN_14255ad10(&DAT_146afdfe0,L"/Engine/EngineResources/DefaultTexture");
      FName::FName(&DAT_146afdfe8,&DAT_143f3edc8,1);
      _Init_thread_footer(&DAT_146afdff0);
    }
  }
  param_1[8] = DAT_146afdfe0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f000000;
  param_1[0x37] = DAT_146afdfe8;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 3;
  return param_1;
}



// FUNCTION 14255bf70 FUN_14255bf70 body=246 status=ok
// SIG undefined FUN_14255bf70(void)

undefined8 * FUN_14255bf70(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd938) {
    _Init_thread_header(&DAT_146afd938);
    if (DAT_146afd938 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd908,L"Math",L"MaterialExpression",L"Math");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd920,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb0790);
      _Init_thread_footer(&DAT_146afd938);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c070 FUN_14255c070 body=179 status=ok
// SIG undefined FUN_14255c070(void)

undefined8 * FUN_14255c070(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd840) {
    _Init_thread_header(&DAT_146afd840);
    if (DAT_146afd840 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd828,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0820);
      _Init_thread_footer(&DAT_146afd840);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c130 FUN_14255c130 body=179 status=ok
// SIG undefined FUN_14255c130(void)

undefined8 * FUN_14255c130(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd860) {
    _Init_thread_header(&DAT_146afd860);
    if (DAT_146afd860 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd848,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0870);
      _Init_thread_footer(&DAT_146afd860);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c1f0 FUN_14255c1f0 body=179 status=ok
// SIG undefined FUN_14255c1f0(void)

undefined8 * FUN_14255c1f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd800) {
    _Init_thread_header(&DAT_146afd800);
    if (DAT_146afd800 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd7e8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb08c0);
      _Init_thread_footer(&DAT_146afd800);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c2b0 FUN_14255c2b0 body=179 status=ok
// SIG undefined FUN_14255c2b0(void)

undefined8 * FUN_14255c2b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd820) {
    _Init_thread_header(&DAT_146afd820);
    if (DAT_146afd820 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd808,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0910);
      _Init_thread_footer(&DAT_146afd820);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c370 FUN_14255c370 body=213 status=ok
// SIG undefined FUN_14255c370(void)

undefined8 * FUN_14255c370(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd8c0) {
    _Init_thread_header(&DAT_146afd8c0);
    if (DAT_146afd8c0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd8a8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0960);
      _Init_thread_footer(&DAT_146afd8c0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c450 FUN_14255c450 body=213 status=ok
// SIG undefined FUN_14255c450(void)

undefined8 * FUN_14255c450(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd8e0) {
    _Init_thread_header(&DAT_146afd8e0);
    if (DAT_146afd8e0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd8c8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb09b0);
      _Init_thread_footer(&DAT_146afd8e0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c530 FUN_14255c530 body=179 status=ok
// SIG undefined FUN_14255c530(void)

undefined8 * FUN_14255c530(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd880) {
    _Init_thread_header(&DAT_146afd880);
    if (DAT_146afd880 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd868,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0a00);
      _Init_thread_footer(&DAT_146afd880);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c5f0 FUN_14255c5f0 body=179 status=ok
// SIG undefined FUN_14255c5f0(void)

undefined8 * FUN_14255c5f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd8a0) {
    _Init_thread_header(&DAT_146afd8a0);
    if (DAT_146afd8a0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd888,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0a50);
      _Init_thread_footer(&DAT_146afd8a0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c6b0 FUN_14255c6b0 body=57 status=ok
// SIG undefined FUN_14255c6b0(void)

undefined8 * FUN_14255c6b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14255c6f0 FUN_14255c6f0 body=155 status=ok
// SIG undefined FUN_14255c6f0(void)

undefined8 * FUN_14255c6f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe050) {
    _Init_thread_header(&DAT_146afe050);
    if (DAT_146afe050 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe038,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb0aa0);
      _Init_thread_footer(&DAT_146afe050);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c790 FUN_14255c790 body=155 status=ok
// SIG undefined FUN_14255c790(void)

undefined8 * FUN_14255c790(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe030) {
    _Init_thread_header(&DAT_146afe030);
    if (DAT_146afe030 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe018,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb0af0);
      _Init_thread_footer(&DAT_146afe030);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c830 FUN_14255c830 body=57 status=ok
// SIG undefined FUN_14255c830(void)

undefined8 * FUN_14255c830(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450fe088;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14255c870 FUN_14255c870 body=179 status=ok
// SIG undefined FUN_14255c870(void)

undefined8 * FUN_14255c870(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdf78) {
    _Init_thread_header(&DAT_146afdf78);
    if (DAT_146afdf78 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdf60,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb0b40);
      _Init_thread_footer(&DAT_146afdf78);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255c930 FUN_14255c930 body=274 status=ok
// SIG undefined FUN_14255c930(void)

undefined8 * FUN_14255c930(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fe378;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd9b8) {
    _Init_thread_header(&DAT_146afd9b8);
    if (DAT_146afd9b8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd9a0,L"Material Attributes",L"MaterialExpression",L"MaterialAttributes");
      atexit(FUN_143eb0b90);
      _Init_thread_footer(&DAT_146afd9b8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255ca50 FUN_14255ca50 body=61 status=ok
// SIG undefined FUN_14255ca50(void)

undefined8 * FUN_14255ca50(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450fe618;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14255ca90 FUN_14255ca90 body=276 status=ok
// SIG undefined FUN_14255ca90(void)

undefined8 * FUN_14255ca90(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fe8b8;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd900) {
    _Init_thread_header(&DAT_146afd900);
    if (DAT_146afd900 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd8e8,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb0be0);
      _Init_thread_footer(&DAT_146afd900);
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0x3d4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f000000;
  return param_1;
}



// FUNCTION 14255cbb0 FUN_14255cbb0 body=188 status=ok
// SIG undefined FUN_14255cbb0(void)

undefined8 * FUN_14255cbb0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd720) {
    _Init_thread_header(&DAT_146afd720);
    if (DAT_146afd720 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd6f0,L"Vectors",L"MaterialExpression",L"Vectors");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd708,L"Coordinates",L"MaterialExpression",L"Coordinates");
      atexit(FUN_143eb0c30);
      _Init_thread_footer(&DAT_146afd720);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255cc70 FUN_14255cc70 body=155 status=ok
// SIG undefined FUN_14255cc70(void)

undefined8 * FUN_14255cc70(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd6e8) {
    _Init_thread_header(&DAT_146afd6e8);
    if (DAT_146afd6e8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd6d0,L"Vectors",L"MaterialExpression",L"Vectors");
      atexit(FUN_143eb0cc0);
      _Init_thread_footer(&DAT_146afd6e8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255cd10 FUN_14255cd10 body=179 status=ok
// SIG undefined FUN_14255cd10(void)

undefined8 * FUN_14255cd10(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afda30) {
    _Init_thread_header(&DAT_146afda30);
    if (DAT_146afda30 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afda18,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0d10);
      _Init_thread_footer(&DAT_146afda30);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255cdd0 FUN_14255cdd0 body=202 status=ok
// SIG undefined FUN_14255cdd0(void)

undefined8 * FUN_14255cdd0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142560c90();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450feb58;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdb48) {
    _Init_thread_header(&DAT_146afdb48);
    if (DAT_146afdb48 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdb30,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb0d60);
      _Init_thread_footer(&DAT_146afdb48);
    }
  }
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 14255cea0 FUN_14255cea0 body=253 status=ok
// SIG undefined FUN_14255cea0(void)

undefined8 * FUN_14255cea0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450ffdc0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe168) {
    _Init_thread_header(&DAT_146afe168);
    if (DAT_146afe168 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe150,L"Logic",L"MaterialExpression",L"Logic");
      atexit(FUN_143eb0db0);
      _Init_thread_footer(&DAT_146afe168);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255cfa0 FUN_14255cfa0 body=278 status=ok
// SIG undefined FUN_14255cfa0(void)

undefined8 * FUN_14255cfa0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fee00;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd560) {
    _Init_thread_header(&DAT_146afd560);
    if (DAT_146afd560 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd548,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb0e00);
      _Init_thread_footer(&DAT_146afd560);
    }
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  return param_1;
}



// FUNCTION 14255d0c0 FUN_14255d0c0 body=57 status=ok
// SIG undefined FUN_14255d0c0(void)

undefined8 * FUN_14255d0c0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1451030b0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14255d100 FUN_14255d100 body=47 status=ok
// SIG undefined FUN_14255d100(void)

undefined8 * FUN_14255d100(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450faa28;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14255d130 FUN_14255d130 body=183 status=ok
// SIG undefined FUN_14255d130(void)

undefined8 * FUN_14255d130(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  FUN_141781840();
  uVar7 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fd5f0;
  param_1[9] = 0;
  param_1[10] = 0;
  pvVar6 = ThreadLocalStoragePointer;
  uVar5 = DAT_1464aa6cc;
  uVar4 = DAT_1464aa6c8;
  uVar3 = DAT_1464aa6c4;
  uVar2 = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0xd) = 0x12;
  lVar1 = *(longlong *)((longlong)pvVar6 + uVar7 * 8);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 100) = uVar5;
  if (*(int *)(lVar1 + 0x38) < DAT_146afdd60) {
    _Init_thread_header(&DAT_146afdd60);
    if (DAT_146afdd60 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdd48,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb0e50);
      _Init_thread_footer(&DAT_146afdd60);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d1f0 FUN_14255d1f0 body=213 status=ok
// SIG undefined FUN_14255d1f0(void)

undefined8 * FUN_14255d1f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe148) {
    _Init_thread_header(&DAT_146afe148);
    if (DAT_146afe148 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe130,L"Logic",L"MaterialExpression",L"Logic");
      atexit(FUN_143eb0ea0);
      _Init_thread_footer(&DAT_146afe148);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d2d0 FUN_14255d2d0 body=212 status=ok
// SIG undefined FUN_14255d2d0(void)

undefined8 * FUN_14255d2d0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd688) {
    _Init_thread_header(&DAT_146afd688);
    if (DAT_146afd688 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd658,L"Math",L"MaterialExpression",L"Math");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd670,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb0ef0);
      _Init_thread_footer(&DAT_146afd688);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d3b0 FUN_14255d3b0 body=188 status=ok
// SIG undefined FUN_14255d3b0(void)

undefined8 * FUN_14255d3b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450c6cf8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd4d0) {
    _Init_thread_header(&DAT_146afd4d0);
    if (DAT_146afd4d0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd4a0,L"Constants",L"MaterialExpression",L"Constants");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd4b8,L"Vectors",L"MaterialExpression",L"Vectors");
      atexit(FUN_143eb0f80);
      _Init_thread_footer(&DAT_146afd4d0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d470 FUN_14255d470 body=188 status=ok
// SIG undefined FUN_14255d470(void)

undefined8 * FUN_14255d470(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fd350;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd508) {
    _Init_thread_header(&DAT_146afd508);
    if (DAT_146afd508 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd4d8,L"Constants",L"MaterialExpression",L"Constants");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd4f0,L"Vectors",L"MaterialExpression",L"Vectors");
      atexit(FUN_143eb1010);
      _Init_thread_footer(&DAT_146afd508);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d530 FUN_14255d530 body=188 status=ok
// SIG undefined FUN_14255d530(void)

undefined8 * FUN_14255d530(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fd350;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd540) {
    _Init_thread_header(&DAT_146afd540);
    if (DAT_146afd540 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd510,L"Constants",L"MaterialExpression",L"Constants");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd528,L"Vectors",L"MaterialExpression",L"Vectors");
      atexit(FUN_143eb10a0);
      _Init_thread_footer(&DAT_146afd540);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d5f0 FUN_14255d5f0 body=155 status=ok
// SIG undefined FUN_14255d5f0(void)

undefined8 * FUN_14255d5f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450c6cf8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd498) {
    _Init_thread_header(&DAT_146afd498);
    if (DAT_146afd498 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd480,L"Constants",L"MaterialExpression",L"Constants");
      atexit(FUN_143eb1130);
      _Init_thread_footer(&DAT_146afd498);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d690 FUN_14255d690 body=186 status=ok
// SIG undefined FUN_14255d690(void)

undefined8 * FUN_14255d690(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afddf8) {
    _Init_thread_header(&DAT_146afddf8);
    if (DAT_146afddf8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdde0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1180);
      _Init_thread_footer(&DAT_146afddf8);
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f000000;
  return param_1;
}



// FUNCTION 14255d750 FUN_14255d750 body=193 status=ok
// SIG undefined FUN_14255d750(void)

undefined8 * FUN_14255d750(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd7c0) {
    _Init_thread_header(&DAT_146afd7c0);
    if (DAT_146afd7c0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd7a8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb11d0);
      _Init_thread_footer(&DAT_146afd7c0);
      *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  return param_1;
}



// FUNCTION 14255d820 FUN_14255d820 body=246 status=ok
// SIG undefined FUN_14255d820(void)

undefined8 * FUN_14255d820(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd650) {
    _Init_thread_header(&DAT_146afd650);
    if (DAT_146afd650 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd620,L"Math",L"MaterialExpression",L"Math");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd638,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb1220);
      _Init_thread_footer(&DAT_146afd650);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255d920 UMaterialExpressionCurveAtlasRowParameter body=75 status=ok
// SIG undefined UMaterialExpressionCurveAtlasRowParameter(void)

undefined8 *
UMaterialExpressionCurveAtlasRowParameter::UMaterialExpressionCurveAtlasRowParameter
          (undefined8 *param_1)

{
  FUN_142560c90();
  *param_1 = &PTR_FUN_1450fd890;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 14255d970 FUN_14255d970 body=412 status=ok
// SIG undefined FUN_14255d970(void)

undefined8 * FUN_14255d970(undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_res8;
  
  FUN_141781840();
  iVar6 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450ff0a0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((wchar_t *)param_1[0xb] != L"Custom") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,7);
    iVar2 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar2 + 7;
    if (*(int *)((longlong)param_1 + 100) < iVar2 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    puVar3 = (undefined8 *)param_1[0xb];
    *puVar3 = 0x74007300750043;
    *(undefined4 *)(puVar3 + 1) = 0x6d006f;
    *(undefined2 *)((longlong)puVar3 + 0xc) = 0;
  }
  if ((undefined4 *)param_1[8] != &DAT_1450f245c) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,2);
      iVar6 = *(int *)(param_1 + 9);
    }
    *(int *)(param_1 + 9) = iVar6 + 2;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar6 + 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8);
    }
    *(undefined4 *)param_1[8] = 0x31;
  }
  *(undefined1 *)(param_1 + 10) = 2;
  iVar6 = *(int *)(param_1 + 0xe);
  *(int *)(param_1 + 0xe) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0x74) < iVar6 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xd,iVar6);
  }
  lVar4 = param_1[0xd];
  lVar5 = (longlong)iVar6 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = 0;
  ((undefined8 *)(lVar5 + lVar4))[1] = 0;
  puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = 0;
  FName::FName(&local_res8,&DAT_1450f24fc,1);
  *(undefined8 *)param_1[0xd] = local_res8;
  return param_1;
}



// FUNCTION 14255db10 FUN_14255db10 body=970 status=ok
// SIG undefined FUN_14255db10(void)

undefined8 * FUN_14255db10(undefined8 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_14255d970();
  uVar5 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450ff340;
  pvVar3 = ThreadLocalStoragePointer;
  iVar9 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar3 + uVar5 * 8) + 0x38) < DAT_146afde18) {
    _Init_thread_header(&DAT_146afde18);
    if (DAT_146afde18 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afde00,L"Custom",L"MaterialExpression",L"Custom");
      atexit(FUN_143eb12b0);
      _Init_thread_footer(&DAT_146afde18);
    }
  }
  if ((wchar_t *)param_1[0xb] != L"CustomGBX") {
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar8 = iVar9;
    if (*(int *)((longlong)param_1 + 100) != 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,10);
      iVar8 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar8 + 10;
    if (*(int *)((longlong)param_1 + 100) < iVar8 + 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb);
    }
    builtin_wcsncpy((wchar_t *)param_1[0xb],L"CustomGBX",10);
  }
  if ((undefined4 *)param_1[8] != &DAT_1450f2624) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,2);
      iVar9 = *(int *)(param_1 + 9);
    }
    *(int *)(param_1 + 9) = iVar9 + 2;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar9 + 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8);
    }
    *(undefined4 *)param_1[8] = 0x31;
  }
  *(undefined1 *)(param_1 + 10) = 2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x74)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xd,0);
  }
  iVar9 = *(int *)(param_1 + 0xe);
  uStack_50 = 0;
  uStack_30 = 0;
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  *(int *)(param_1 + 0xe) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0x74) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xd,iVar9);
  }
  lVar2 = param_1[0xd];
  lVar6 = (longlong)iVar9 * 0x38;
  *(undefined8 *)(lVar6 + lVar2) = local_58;
  ((undefined8 *)(lVar6 + lVar2))[1] = uStack_50;
  puVar7 = (undefined8 *)(lVar6 + 0x10 + lVar2);
  *puVar7 = local_48;
  puVar7[1] = uStack_40;
  puVar1 = (undefined4 *)(lVar6 + 0x20 + lVar2);
  *puVar1 = (undefined4)uStack_38;
  puVar1[1] = uStack_38._4_4_;
  puVar1[2] = (undefined4)uStack_30;
  puVar1[3] = uStack_30._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar2) = local_28;
  FName::FName(&local_res8,&DAT_1450f26b4,1);
  local_68 = 0;
  local_60 = 10;
  *(undefined8 *)param_1[0xd] = local_res8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar4 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"OutParam1",0x14);
  iVar9 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf,iVar9);
  }
  puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + param_1[0xf]);
  local_68 = 0;
  *puVar7 = uVar4;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
  local_60 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar4 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"OutParam2",0x14);
  iVar9 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf,iVar9);
  }
  puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + param_1[0xf]);
  local_68 = 0;
  *puVar7 = uVar4;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
  local_60 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar4 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"OutParam3",0x14);
  iVar9 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf,iVar9);
  }
  puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + param_1[0xf]);
  local_68 = 0;
  *puVar7 = uVar4;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
  local_60 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar4 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"OutParam4",0x14);
  iVar9 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0x84) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf,iVar9);
  }
  puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + param_1[0xf]);
  *puVar7 = uVar4;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_60._4_4_;
  return param_1;
}



// FUNCTION 14255dee0 FUN_14255dee0 body=33 status=ok
// SIG undefined FUN_14255dee0(void)

undefined8 * FUN_14255dee0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450facc8;
  return param_1;
}



// FUNCTION 14255df10 FUN_14255df10 body=71 status=ok
// SIG undefined FUN_14255df10(void)

undefined8 * FUN_14255df10(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x43800000;
  return param_1;
}



// FUNCTION 14255df60 FUN_14255df60 body=179 status=ok
// SIG undefined FUN_14255df60(void)

undefined8 * FUN_14255df60(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe070) {
    _Init_thread_header(&DAT_146afe070);
    if (DAT_146afe070 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe058,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1300);
      _Init_thread_footer(&DAT_146afe070);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255e020 FUN_14255e020 body=111 status=ok
// SIG undefined FUN_14255e020(void)

undefined8 * FUN_14255e020(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450fdb48;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  return param_1;
}



// FUNCTION 14255e090 UMaterialExpressionDepthOfFieldFunction body=57 status=ok
// SIG undefined UMaterialExpressionDepthOfFieldFunction(void)

undefined8 *
UMaterialExpressionDepthOfFieldFunction::UMaterialExpressionDepthOfFieldFunction
          (undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14255e0d0 FUN_14255e0d0 body=179 status=ok
// SIG undefined FUN_14255e0d0(void)

undefined8 * FUN_14255e0d0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afddd8) {
    _Init_thread_header(&DAT_146afddd8);
    if (DAT_146afddd8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afddc0,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb1350);
      _Init_thread_footer(&DAT_146afddd8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255e190 FUN_14255e190 body=256 status=ok
// SIG undefined FUN_14255e190(void)

undefined8 * FUN_14255e190(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450ff5e0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdb08) {
    _Init_thread_header(&DAT_146afdb08);
    if (DAT_146afdb08 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdad8,L"Color",L"MaterialExpression",L"Color");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdaf0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb13a0);
      _Init_thread_footer(&DAT_146afdb08);
    }
  }
  param_1[0x14] = 0x3f170a3d3e99999a;
  param_1[0x15] = 0x3de147ae;
  return param_1;
}



// FUNCTION 14255e290 FUN_14255e290 body=213 status=ok
// SIG undefined FUN_14255e290(void)

undefined8 * FUN_14255e290(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdfd8) {
    _Init_thread_header(&DAT_146afdfd8);
    if (DAT_146afdfd8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdfc0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1430);
      _Init_thread_footer(&DAT_146afdfd8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255e370 FUN_14255e370 body=179 status=ok
// SIG undefined FUN_14255e370(void)

undefined8 * FUN_14255e370(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdfb8) {
    _Init_thread_header(&DAT_146afdfb8);
    if (DAT_146afdfb8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdfa0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1480);
      _Init_thread_footer(&DAT_146afdfb8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255e430 FUN_14255e430 body=179 status=ok
// SIG undefined FUN_14255e430(void)

undefined8 * FUN_14255e430(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdf98) {
    _Init_thread_header(&DAT_146afdf98);
    if (DAT_146afdf98 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdf80,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb14d0);
      _Init_thread_footer(&DAT_146afdf98);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255e4f0 FUN_14255e4f0 body=226 status=ok
// SIG undefined FUN_14255e4f0(void)

undefined8 * FUN_14255e4f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd420) {
    _Init_thread_header(&DAT_146afd420);
    if (DAT_146afd420 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd408,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1520);
      _Init_thread_footer(&DAT_146afd420);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x40000000;
  return param_1;
}



// FUNCTION 14255e5e0 FUN_14255e5e0 body=246 status=ok
// SIG undefined FUN_14255e5e0(void)

undefined8 * FUN_14255e5e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd618) {
    _Init_thread_header(&DAT_146afd618);
    if (DAT_146afd618 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd5e8,L"Math",L"MaterialExpression",L"Math");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd600,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb1570);
      _Init_thread_footer(&DAT_146afd618);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255e6e0 UMaterialExpressionDynamicParameter body=497 status=ok
// SIG undefined UMaterialExpressionDynamicParameter(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
UMaterialExpressionDynamicParameter::UMaterialExpressionDynamicParameter(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_141781840();
  local_20 = 7;
  local_28 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450fb070;
  param_1[8] = 0;
  param_1[9] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Param1",0xe);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar4 = uVar2;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Param2",0xe);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar4 = uVar2;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Param3",0xe);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  local_28 = 0;
  *puVar4 = uVar2;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Param4",0xe);
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[8]);
  *puVar4 = uVar2;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_20._4_4_;
  uVar3 = _DAT_1464aa6c8;
  uVar2 = _DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return param_1;
}



// FUNCTION 14255e8e0 FUN_14255e8e0 body=179 status=ok
// SIG undefined FUN_14255e8e0(void)

undefined8 * FUN_14255e8e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe0b0) {
    _Init_thread_header(&DAT_146afe0b0);
    if (DAT_146afe0b0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe098,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1600);
      _Init_thread_footer(&DAT_146afe0b0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255e9a0 FUN_14255e9a0 body=179 status=ok
// SIG undefined FUN_14255e9a0(void)

undefined8 * FUN_14255e9a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe090) {
    _Init_thread_header(&DAT_146afe090);
    if (DAT_146afe090 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe078,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1650);
      _Init_thread_footer(&DAT_146afe090);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255ea60 FUN_14255ea60 body=333 status=ok
// SIG undefined FUN_14255ea60(void)

undefined8 * FUN_14255ea60(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fb5b0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdbc8) {
    _Init_thread_header(&DAT_146afdbc8);
    if (DAT_146afdbc8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdbb0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb16a0);
      _Init_thread_footer(&DAT_146afdbc8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255ebb0 FUN_14255ebb0 body=179 status=ok
// SIG undefined FUN_14255ebb0(void)

undefined8 * FUN_14255ebb0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afda10) {
    _Init_thread_header(&DAT_146afda10);
    if (DAT_146afda10 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd9f8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb16f0);
      _Init_thread_footer(&DAT_146afda10);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255ec70 FUN_14255ec70 body=213 status=ok
// SIG undefined FUN_14255ec70(void)

undefined8 * FUN_14255ec70(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdab0) {
    _Init_thread_header(&DAT_146afdab0);
    if (DAT_146afdab0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afda98,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1740);
      _Init_thread_footer(&DAT_146afdab0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255ed50 FUN_14255ed50 body=33 status=ok
// SIG undefined FUN_14255ed50(void)

undefined8 * FUN_14255ed50(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450f7fa0;
  return param_1;
}



// FUNCTION 14255ed80 FUN_14255ed80 body=214 status=ok
// SIG undefined FUN_14255ed80(void)

undefined8 * FUN_14255ed80(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450f8240;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afddb8) {
    _Init_thread_header(&DAT_146afddb8);
    if (DAT_146afddb8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdd88,L"Font",L"MaterialExpression",L"Font");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdda0,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb1790);
      _Init_thread_footer(&DAT_146afddb8);
      *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
      return param_1;
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  return param_1;
}



// FUNCTION 14255ee60 FUN_14255ee60 body=179 status=ok
// SIG undefined FUN_14255ee60(void)

undefined8 * FUN_14255ee60(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdad0) {
    _Init_thread_header(&DAT_146afdad0);
    if (DAT_146afdad0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdab8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1820);
      _Init_thread_footer(&DAT_146afdad0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255ef20 FUN_14255ef20 body=266 status=ok
// SIG undefined FUN_14255ef20(void)

undefined8 * FUN_14255ef20(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fe8b8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdd80) {
    _Init_thread_header(&DAT_146afdd80);
    if (DAT_146afdd80 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdd68,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1870);
      _Init_thread_footer(&DAT_146afdd80);
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x15) = 0x3d23d70a;
  return param_1;
}



// FUNCTION 14255f030 FUN_14255f030 body=193 status=ok
// SIG undefined FUN_14255f030(void)

undefined8 * FUN_14255f030(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450ff880;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) | 1;
  *(undefined1 *)(param_1 + 0x13) = 2;
  FName::FName(local_res8,&DAT_1450f2244,1);
  param_1[0xe] = local_res8[0];
  return param_1;
}



// FUNCTION 14255f100 FUN_14255f100 body=119 status=ok
// SIG undefined FUN_14255f100(void)

undefined8 * FUN_14255f100(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450ffb20;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  FName::FName(local_res8,L"Result",1);
  param_1[8] = local_res8[0];
  return param_1;
}



// FUNCTION 14255f180 FUN_14255f180 body=253 status=ok
// SIG undefined FUN_14255f180(void)

undefined8 * FUN_14255f180(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450ffdc0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afde78) {
    _Init_thread_header(&DAT_146afde78);
    if (DAT_146afde78 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afde60,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb18c0);
      _Init_thread_footer(&DAT_146afde78);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255f280 FUN_14255f280 body=194 status=ok
// SIG undefined FUN_14255f280(void)

undefined8 * FUN_14255f280(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145100060;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd978) {
    _Init_thread_header(&DAT_146afd978);
    if (DAT_146afd978 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd960,L"Material Attributes",L"MaterialExpression",L"MaterialAttributes");
      atexit(FUN_143eb1910);
      _Init_thread_footer(&DAT_146afd978);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255f350 FUN_14255f350 body=346 status=ok
// SIG undefined FUN_14255f350(void)

undefined8 * FUN_14255f350(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145100300;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afdcc0) {
    _Init_thread_header(&DAT_146afdcc0);
    if (DAT_146afdcc0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdca8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1960);
      _Init_thread_footer(&DAT_146afdcc0);
    }
  }
  param_1[0x26] = 0x3727c5ac;
  return param_1;
}



// FUNCTION 14255f4b0 FUN_14255f4b0 body=179 status=ok
// SIG undefined FUN_14255f4b0(void)

undefined8 * FUN_14255f4b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe208) {
    _Init_thread_header(&DAT_146afe208);
    if (DAT_146afe208 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe1f0,L"Primitive",L"MaterialExpression",L"Primitive");
      atexit(FUN_143eb19b0);
      _Init_thread_footer(&DAT_146afe208);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255f570 FUN_14255f570 body=213 status=ok
// SIG undefined FUN_14255f570(void)

undefined8 * FUN_14255f570(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afde38) {
    _Init_thread_header(&DAT_146afde38);
    if (DAT_146afde38 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afde20,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1a00);
      _Init_thread_footer(&DAT_146afde38);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255f650 FUN_14255f650 body=317 status=ok
// SIG undefined FUN_14255f650(void)

undefined8 * FUN_14255f650(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fe8b8;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd478) {
    _Init_thread_header(&DAT_146afd478);
    if (DAT_146afd478 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd448,L"Math",L"MaterialExpression",L"Math");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd460,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1a50);
      _Init_thread_footer(&DAT_146afd478);
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f000000;
  return param_1;
}



// FUNCTION 14255f790 FUN_14255f790 body=179 status=ok
// SIG undefined FUN_14255f790(void)

undefined8 * FUN_14255f790(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdca0) {
    _Init_thread_header(&DAT_146afdca0);
    if (DAT_146afdca0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdc88,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1ae0);
      _Init_thread_footer(&DAT_146afdca0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255f850 FUN_14255f850 body=179 status=ok
// SIG undefined FUN_14255f850(void)

undefined8 * FUN_14255f850(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdc80) {
    _Init_thread_header(&DAT_146afdc80);
    if (DAT_146afdc80 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdc68,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1b30);
      _Init_thread_footer(&DAT_146afdc80);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255f910 FUN_14255f910 body=179 status=ok
// SIG undefined FUN_14255f910(void)

undefined8 * FUN_14255f910(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe0d0) {
    _Init_thread_header(&DAT_146afe0d0);
    if (DAT_146afe0d0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe0b8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1b80);
      _Init_thread_footer(&DAT_146afe0d0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255f9d0 FUN_14255f9d0 body=1373 status=ok
// SIG undefined FUN_14255f9d0(void)

undefined8 * FUN_14255f9d0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450fb850;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  uVar1 = (ulonglong)_tls_index;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd958) {
    _Init_thread_header(&DAT_146afd958);
    if (DAT_146afd958 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd940,L"Material Attributes",L"MaterialExpression",L"MaterialAttributes");
      atexit(FUN_143eb1bd0);
      _Init_thread_footer(&DAT_146afd958);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14255ff30 FUN_14255ff30 body=441 status=ok
// SIG undefined FUN_14255ff30(void)

undefined8 * FUN_14255ff30(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  ulonglong uVar7;
  
  FUN_141781840();
  plVar2 = param_1 + 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__1450f7d00;
  plVar1 = param_1 + 0x16;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *plVar2 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *plVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar3 = *(int *)(param_1 + 0x13);
  iVar6 = iVar3 + 1;
  *(int *)(param_1 + 0x13) = iVar6;
  if (*(int *)((longlong)param_1 + 0x9c) < iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = 0;
  iVar3 = *(int *)(param_1 + 0x17);
  *(int *)(param_1 + 0x17) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar3 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  pvVar5 = ThreadLocalStoragePointer;
  *(undefined1 *)((longlong)iVar3 + *plVar1) = 1;
  uVar7 = (ulonglong)_tls_index;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  lVar4 = *(longlong *)((longlong)pvVar5 + uVar7 * 8);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 0;
  if (*(int *)(lVar4 + 0x38) < DAT_146afd9f0) {
    _Init_thread_header(&DAT_146afd9f0);
    if (DAT_146afd9f0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd9c0,L"Material Attributes",L"MaterialExpression",L"MaterialAttributes");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd9d8,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb1c20);
      _Init_thread_footer(&DAT_146afd9f0);
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  return param_1;
}



// FUNCTION 1425600f0 FUN_1425600f0 body=59 status=ok
// SIG undefined FUN_1425600f0(void)

undefined8 * FUN_1425600f0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450f7a60;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0x202ffff;
  return param_1;
}



// FUNCTION 142560130 FUN_142560130 body=161 status=ok
// SIG undefined FUN_142560130(void)

undefined8 * FUN_142560130(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450ffb20;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  FName::FName(local_res8,L"Result",1);
  param_1[8] = local_res8[0];
  *param_1 = &PTR__scalar_deleting_destructor__1450ffb20;
  FName::FName(local_res8,L"Material Attributes",1);
  param_1[8] = local_res8[0];
  return param_1;
}



// FUNCTION 1425601e0 FUN_1425601e0 body=213 status=ok
// SIG undefined FUN_1425601e0(void)

undefined8 * FUN_1425601e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afde58) {
    _Init_thread_header(&DAT_146afde58);
    if (DAT_146afde58 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afde40,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1cb0);
      _Init_thread_footer(&DAT_146afde58);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425602c0 FUN_1425602c0 body=231 status=ok
// SIG undefined FUN_1425602c0(void)

undefined8 * FUN_1425602c0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd5c0) {
    _Init_thread_header(&DAT_146afd5c0);
    if (DAT_146afd5c0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd5a8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1d00);
      _Init_thread_footer(&DAT_146afd5c0);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425603b0 FUN_1425603b0 body=231 status=ok
// SIG undefined FUN_1425603b0(void)

undefined8 * FUN_1425603b0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd5a0) {
    _Init_thread_header(&DAT_146afd5a0);
    if (DAT_146afd5a0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd588,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1d50);
      _Init_thread_footer(&DAT_146afd5a0);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425604a0 FUN_1425604a0 body=231 status=ok
// SIG undefined FUN_1425604a0(void)

undefined8 * FUN_1425604a0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd400) {
    _Init_thread_header(&DAT_146afd400);
    if (DAT_146afd400 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd3e8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb1da0);
      _Init_thread_footer(&DAT_146afd400);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  return param_1;
}



// FUNCTION 142560590 FUN_142560590 body=300 status=ok
// SIG undefined FUN_142560590(void)

undefined8 * FUN_142560590(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1451005a0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdf38) {
    _Init_thread_header(&DAT_146afdf38);
    if (DAT_146afdf38 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdf20,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb1df0);
      _Init_thread_footer(&DAT_146afdf38);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 6;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x40000000;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) | 1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x200;
  return param_1;
}



// FUNCTION 1425606c0 FUN_1425606c0 body=212 status=ok
// SIG undefined FUN_1425606c0(void)

undefined8 * FUN_1425606c0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdc00) {
    _Init_thread_header(&DAT_146afdc00);
    if (DAT_146afdc00 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdbd0,L"Math",L"MaterialExpression",L"Math");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdbe8,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb1e40);
      _Init_thread_footer(&DAT_146afdc00);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425607a0 FUN_1425607a0 body=179 status=ok
// SIG undefined FUN_1425607a0(void)

undefined8 * FUN_1425607a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe1c8) {
    _Init_thread_header(&DAT_146afe1c8);
    if (DAT_146afe1c8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe1b0,L"Logic",L"MaterialExpression",L"Logic");
      atexit(FUN_143eb1ed0);
      _Init_thread_footer(&DAT_146afe1c8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142560860 FUN_142560860 body=188 status=ok
// SIG undefined FUN_142560860(void)

undefined8 * FUN_142560860(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe240) {
    _Init_thread_header(&DAT_146afe240);
    if (DAT_146afe240 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe210,L"Vectors",L"MaterialExpression",L"Vectors");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe228,L"Coordinates",L"MaterialExpression",L"Coordinates");
      atexit(FUN_143eb1f20);
      _Init_thread_footer(&DAT_146afe240);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142560920 FUN_142560920 body=188 status=ok
// SIG undefined FUN_142560920(void)

undefined8 * FUN_142560920(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe278) {
    _Init_thread_header(&DAT_146afe278);
    if (DAT_146afe278 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe248,L"Vectors",L"MaterialExpression",L"Vectors");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe260,L"Coordinates",L"MaterialExpression",L"Coordinates");
      atexit(FUN_143eb1fb0);
      _Init_thread_footer(&DAT_146afe278);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425609e0 FUN_1425609e0 body=179 status=ok
// SIG undefined FUN_1425609e0(void)

undefined8 * FUN_1425609e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdce0) {
    _Init_thread_header(&DAT_146afdce0);
    if (DAT_146afdce0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdcc8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb2040);
      _Init_thread_footer(&DAT_146afdce0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142560aa0 FUN_142560aa0 body=213 status=ok
// SIG undefined FUN_142560aa0(void)

undefined8 * FUN_142560aa0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe1a8) {
    _Init_thread_header(&DAT_146afe1a8);
    if (DAT_146afe1a8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe190,L"Logic",L"MaterialExpression",L"Logic");
      atexit(FUN_143eb2090);
      _Init_thread_footer(&DAT_146afe1a8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142560b80 FUN_142560b80 body=261 status=ok
// SIG undefined FUN_142560b80(void)

undefined8 * FUN_142560b80(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fe8b8;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd760) {
    _Init_thread_header(&DAT_146afd760);
    if (DAT_146afd760 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd748,L"Coordinates",L"MaterialExpression",L"Coordinates");
      atexit(FUN_143eb20e0);
      _Init_thread_footer(&DAT_146afd760);
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 142560c90 FUN_142560c90 body=181 status=ok
// SIG undefined FUN_142560c90(void)

undefined8 * FUN_142560c90(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450f84e8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdb28) {
    _Init_thread_header(&DAT_146afdb28);
    if (DAT_146afdb28 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdb10,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb2130);
      _Init_thread_footer(&DAT_146afdb28);
      *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
      return param_1;
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  return param_1;
}



// FUNCTION 142560d50 FUN_142560d50 body=188 status=ok
// SIG undefined FUN_142560d50(void)

undefined8 * FUN_142560d50(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe350) {
    _Init_thread_header(&DAT_146afe350);
    if (DAT_146afe350 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe320,L"Particles",L"MaterialExpression",L"Particles");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe338,L"Constants",L"MaterialExpression",L"Constants");
      atexit(FUN_143eb2180);
      _Init_thread_footer(&DAT_146afe350);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142560e10 FUN_142560e10 body=169 status=ok
// SIG undefined FUN_142560e10(void)

undefined8 * FUN_142560e10(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142562d20();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145101868;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdc20) {
    _Init_thread_header(&DAT_146afdc20);
    if (DAT_146afdc20 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdc08,L"Particles",L"MaterialExpression",L"Particles");
      atexit(FUN_143eb2210);
      _Init_thread_footer(&DAT_146afdc20);
      *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 1;
      return param_1;
    }
  }
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 1;
  return param_1;
}



// FUNCTION 142560ec0 FUN_142560ec0 body=233 status=ok
// SIG undefined FUN_142560ec0(void)

undefined8 * FUN_142560ec0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdc60) {
    _Init_thread_header(&DAT_146afdc60);
    if (DAT_146afdc60 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdc48,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb2260);
      _Init_thread_footer(&DAT_146afdc60);
      *(undefined4 *)(param_1 + 0x14) = 0x40000000;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  return param_1;
}



// FUNCTION 142560fb0 FUN_142560fb0 body=213 status=ok
// SIG undefined FUN_142560fb0(void)

undefined8 * FUN_142560fb0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdb88) {
    _Init_thread_header(&DAT_146afdb88);
    if (DAT_146afdb88 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdb70,L"Functions",L"MaterialExpression",L"Functions");
      atexit(FUN_143eb22b0);
      _Init_thread_footer(&DAT_146afdb88);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561090 FUN_142561090 body=155 status=ok
// SIG undefined FUN_142561090(void)

undefined8 * FUN_142561090(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450c6cf8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe1e8) {
    _Init_thread_header(&DAT_146afe1e8);
    if (DAT_146afe1e8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe1d0,L"Primitive",L"MaterialExpression",L"Primitive");
      atexit(FUN_143eb2300);
      _Init_thread_footer(&DAT_146afe1e8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561130 FUN_142561130 body=293 status=ok
// SIG undefined FUN_142561130(void)

undefined8 * FUN_142561130(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fb310;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdba8) {
    _Init_thread_header(&DAT_146afdba8);
    if (DAT_146afdba8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdb90,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb2350);
      _Init_thread_footer(&DAT_146afdba8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561260 FUN_142561260 body=179 status=ok
// SIG undefined FUN_142561260(void)

undefined8 * FUN_142561260(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe0f0) {
    _Init_thread_header(&DAT_146afe0f0);
    if (DAT_146afe0f0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe0d8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb23a0);
      _Init_thread_footer(&DAT_146afe0f0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561320 FUN_142561320 body=179 status=ok
// SIG undefined FUN_142561320(void)

undefined8 * FUN_142561320(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd740) {
    _Init_thread_header(&DAT_146afd740);
    if (DAT_146afd740 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd728,L"Vectors",L"MaterialExpression",L"Vectors");
      atexit(FUN_143eb23f0);
      _Init_thread_footer(&DAT_146afd740);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425613e0 FUN_1425613e0 body=179 status=ok
// SIG undefined FUN_1425613e0(void)

undefined8 * FUN_1425613e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afde98) {
    _Init_thread_header(&DAT_146afde98);
    if (DAT_146afde98 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afde80,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb2440);
      _Init_thread_footer(&DAT_146afde98);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425614a0 FUN_1425614a0 body=313 status=ok
// SIG undefined FUN_1425614a0(void)

undefined8 * FUN_1425614a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145100ae0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdeb8) {
    _Init_thread_header(&DAT_146afdeb8);
    if (DAT_146afdeb8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdea0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb2490);
      _Init_thread_footer(&DAT_146afdeb8);
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425615e0 FUN_1425615e0 body=246 status=ok
// SIG undefined FUN_1425615e0(void)

undefined8 * FUN_1425615e0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450ff5e0;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd780) {
    _Init_thread_header(&DAT_146afd780);
    if (DAT_146afd780 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd768,L"Coordinates",L"MaterialExpression",L"Coordinates");
      atexit(FUN_143eb24e0);
      _Init_thread_footer(&DAT_146afd780);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f000000;
  param_1[0x15] = 0x3e800000;
  return param_1;
}



// FUNCTION 1425616e0 FUN_1425616e0 body=179 status=ok
// SIG undefined FUN_1425616e0(void)

undefined8 * FUN_1425616e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afda50) {
    _Init_thread_header(&DAT_146afda50);
    if (DAT_146afda50 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afda38,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb2530);
      _Init_thread_footer(&DAT_146afda50);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425617a0 FUN_1425617a0 body=179 status=ok
// SIG undefined FUN_1425617a0(void)

undefined8 * FUN_1425617a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd580) {
    _Init_thread_header(&DAT_146afd580);
    if (DAT_146afd580 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd568,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb2580);
      _Init_thread_footer(&DAT_146afd580);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561860 FUN_142561860 body=33 status=ok
// SIG undefined FUN_142561860(void)

undefined8 * FUN_142561860(undefined8 *param_1)

{
  FUN_142560c90();
  *param_1 = &PTR_FUN_1450fbaf0;
  return param_1;
}



// FUNCTION 142561890 FUN_142561890 body=101 status=ok
// SIG undefined FUN_142561890(void)

undefined8 * FUN_142561890(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450fc858;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 142561900 FUN_142561900 body=104 status=ok
// SIG undefined FUN_142561900(void)

undefined8 * FUN_142561900(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145100d80;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 142561970 UMaterialExpressionSceneTexture body=60 status=ok
// SIG undefined UMaterialExpressionSceneTexture(void)

undefined8 * UMaterialExpressionSceneTexture::UMaterialExpressionSceneTexture(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145101020;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  return param_1;
}



// FUNCTION 1425619b0 FUN_1425619b0 body=173 status=ok
// SIG undefined FUN_1425619b0(void)

undefined8 * FUN_1425619b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145100840;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd998) {
    _Init_thread_header(&DAT_146afd998);
    if (DAT_146afd998 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd980,L"Material Attributes",L"MaterialExpression",L"MaterialAttributes");
      atexit(FUN_143eb25d0);
      _Init_thread_footer(&DAT_146afd998);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561a60 FUN_142561a60 body=179 status=ok
// SIG undefined FUN_142561a60(void)

undefined8 * FUN_142561a60(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afda90) {
    _Init_thread_header(&DAT_146afda90);
    if (DAT_146afda90 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afda78,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb2620);
      _Init_thread_footer(&DAT_146afda90);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561b20 FUN_142561b20 body=193 status=ok
// SIG undefined FUN_142561b20(void)

undefined8 * FUN_142561b20(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd7a0) {
    _Init_thread_header(&DAT_146afd7a0);
    if (DAT_146afd7a0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd788,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb2670);
      _Init_thread_footer(&DAT_146afd7a0);
      *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  return param_1;
}



// FUNCTION 142561bf0 FUN_142561bf0 body=213 status=ok
// SIG undefined FUN_142561bf0(void)

undefined8 * FUN_142561bf0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe2b8) {
    _Init_thread_header(&DAT_146afe2b8);
    if (DAT_146afe2b8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe2a0,L"Color",L"MaterialExpression",L"Color");
      atexit(FUN_143eb26c0);
      _Init_thread_footer(&DAT_146afe2b8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561cd0 FUN_142561cd0 body=185 status=ok
// SIG undefined FUN_142561cd0(void)

undefined8 * FUN_142561cd0(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  FUN_141781840();
  uVar2 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  pvVar1 = ThreadLocalStoragePointer;
  *(undefined2 *)(param_1 + 0xe) = 1;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x38) < DAT_146afe298) {
    _Init_thread_header(&DAT_146afe298);
    if (DAT_146afe298 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe280,L"Color",L"MaterialExpression",L"Color");
      atexit(FUN_143eb2710);
      _Init_thread_footer(&DAT_146afe298);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142561d90 FUN_142561d90 body=317 status=ok
// SIG undefined FUN_142561d90(void)

undefined8 * FUN_142561d90(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fe8b8;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afe128) {
    _Init_thread_header(&DAT_146afe128);
    if (DAT_146afe128 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe0f8,L"Math",L"MaterialExpression",L"Math");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe110,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb2760);
      _Init_thread_footer(&DAT_146afe128);
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f000000;
  return param_1;
}



// FUNCTION 142561ed0 FUN_142561ed0 body=268 status=ok
// SIG undefined FUN_142561ed0(void)

undefined8 * FUN_142561ed0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fe8b8;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afdef8) {
    _Init_thread_header(&DAT_146afdef8);
    if (DAT_146afdef8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdee0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb27f0);
      _Init_thread_footer(&DAT_146afdef8);
    }
  }
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 142561fe0 FUN_142561fe0 body=319 status=ok
// SIG undefined FUN_142561fe0(void)

undefined8 * FUN_142561fe0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fd0b0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe010) {
    _Init_thread_header(&DAT_146afe010);
    if (DAT_146afe010 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdff8,L"SpeedTree",L"MaterialExpression",L"SpeedTree");
      atexit(FUN_143eb2840);
      _Init_thread_footer(&DAT_146afe010);
    }
  }
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x102) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f666666;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 142562120 FUN_142562120 body=306 status=ok
// SIG undefined FUN_142562120(void)

undefined8 * FUN_142562120(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145100ae0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afded8) {
    _Init_thread_header(&DAT_146afded8);
    if (DAT_146afded8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdec0,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb2890);
      _Init_thread_footer(&DAT_146afded8);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x42c80000;
  return param_1;
}



// FUNCTION 142562260 FUN_142562260 body=64 status=ok
// SIG undefined FUN_142562260(void)

undefined8 * FUN_142562260(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425622a0 FUN_1425622a0 body=179 status=ok
// SIG undefined FUN_1425622a0(void)

undefined8 * FUN_1425622a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdc40) {
    _Init_thread_header(&DAT_146afdc40);
    if (DAT_146afdc40 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdc28,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb28e0);
      _Init_thread_footer(&DAT_146afdc40);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142562360 FUN_142562360 body=33 status=ok
// SIG undefined FUN_142562360(void)

undefined8 * FUN_142562360(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450c6cf8;
  return param_1;
}



// FUNCTION 142562390 FUN_142562390 body=33 status=ok
// SIG undefined FUN_142562390(void)

undefined8 * FUN_142562390(undefined8 *param_1)

{
  FUN_142560c90();
  *param_1 = &PTR_FUN_1450fbd98;
  return param_1;
}



// FUNCTION 1425623c0 FUN_1425623c0 body=185 status=ok
// SIG undefined FUN_1425623c0(void)

undefined8 * FUN_1425623c0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142560c90();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fc038;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd6a8) {
    _Init_thread_header(&DAT_146afd6a8);
    if (DAT_146afd6a8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd690,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb2930);
      _Init_thread_footer(&DAT_146afd6a8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142562480 FUN_142562480 body=256 status=ok
// SIG undefined FUN_142562480(void)

undefined8 * FUN_142562480(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1451012c0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdb68) {
    _Init_thread_header(&DAT_146afdb68);
    if (DAT_146afdb68 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdb50,L"Functions",L"MaterialExpression",L"Functions");
      atexit(FUN_143eb2980);
      _Init_thread_footer(&DAT_146afdb68);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142562580 UMaterialExpressionStaticSwitchParameter body=106 status=ok
// SIG undefined UMaterialExpressionStaticSwitchParameter(void)

undefined8 *
UMaterialExpressionStaticSwitchParameter::UMaterialExpressionStaticSwitchParameter
          (undefined8 *param_1)

{
  FUN_142560c90();
  *param_1 = &PTR_FUN_1450fc2d8;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 1425625f0 FUN_1425625f0 body=226 status=ok
// SIG undefined FUN_1425625f0(void)

undefined8 * FUN_1425625f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdb48;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd440) {
    _Init_thread_header(&DAT_146afd440);
    if (DAT_146afd440 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd428,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb29d0);
      _Init_thread_footer(&DAT_146afd440);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425626e0 FUN_1425626e0 body=193 status=ok
// SIG undefined FUN_1425626e0(void)

undefined8 * FUN_1425626e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd7e0) {
    _Init_thread_header(&DAT_146afd7e0);
    if (DAT_146afd7e0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd7c8,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb2a20);
      _Init_thread_footer(&DAT_146afd7e0);
      *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425627b0 FUN_1425627b0 body=57 status=ok
// SIG undefined FUN_1425627b0(void)

undefined8 * FUN_1425627b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145101560;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1425627f0 FUN_1425627f0 body=228 status=ok
// SIG undefined FUN_1425627f0(void)

undefined8 * FUN_1425627f0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450ff5e0;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146afdf18) {
    _Init_thread_header(&DAT_146afdf18);
    if (DAT_146afdf18 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdf00,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb2a70);
      _Init_thread_footer(&DAT_146afdf18);
    }
  }
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 1425628e0 UMaterialExpressionTextureBase body=37 status=ok
// SIG undefined UMaterialExpressionTextureBase(void)

undefined8 * UMaterialExpressionTextureBase::UMaterialExpressionTextureBase(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffe;
  *param_1 = &PTR_FUN_1450f8788;
  return param_1;
}



// FUNCTION 142562910 FUN_142562910 body=162 status=ok
// SIG undefined FUN_142562910(void)

undefined8 * FUN_142562910(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fd350;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd5e0) {
    _Init_thread_header(&DAT_146afd5e0);
    if (DAT_146afd5e0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd5c8,L"Coordinates",L"MaterialExpression",L"Coordinates");
      atexit(FUN_143eb2ac0);
      _Init_thread_footer(&DAT_146afd5e0);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  return param_1;
}



// FUNCTION 1425629c0 FUN_1425629c0 body=213 status=ok
// SIG undefined FUN_1425629c0(void)

undefined8 * FUN_1425629c0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fdde8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe370) {
    _Init_thread_header(&DAT_146afe370);
    if (DAT_146afe370 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe358,L"Texture",L"MaterialExpression",L"Texture");
      atexit(FUN_143eb2b10);
      _Init_thread_footer(&DAT_146afe370);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142562aa0 FUN_142562aa0 body=218 status=ok
// SIG undefined FUN_142562aa0(void)

undefined8 * FUN_142562aa0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffe;
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450f8788;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd2a8) {
    _Init_thread_header(&DAT_146afd2a8);
    if (DAT_146afd2a8 == -1) {
      FUN_14255ad10(&DAT_146afd270,L"/Engine/EngineResources/DefaultTexture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd278,L"Texture",L"MaterialExpression",L"Texture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd290,L"Functions",L"MaterialExpression",L"Functions");
      atexit(FUN_143eb2b60);
      _Init_thread_footer(&DAT_146afd2a8);
    }
  }
  param_1[8] = DAT_146afd270;
  return param_1;
}



// FUNCTION 142562b80 FUN_142562b80 body=214 status=ok
// SIG undefined FUN_142562b80(void)

undefined8 * FUN_142562b80(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142563090();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145101b08;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd268) {
    _Init_thread_header(&DAT_146afd268);
    if (DAT_146afd268 == -1) {
      FUN_14255ad10(&DAT_146afd230,L"/Engine/EngineResources/DefaultTexture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd238,L"Texture",L"MaterialExpression",L"Texture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd250,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb2bf0);
      _Init_thread_footer(&DAT_146afd268);
    }
  }
  param_1[8] = DAT_146afd230;
  return param_1;
}



// FUNCTION 142562c60 FUN_142562c60 body=187 status=ok
// SIG undefined FUN_142562c60(void)

undefined8 * FUN_142562c60(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd2c8) {
    _Init_thread_header(&DAT_146afd2c8);
    if (DAT_146afd2c8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd2b0,L"Texture",L"MaterialExpression",L"Texture");
      atexit(FUN_143eb2c80);
      _Init_thread_footer(&DAT_146afd2c8);
      *(undefined1 *)(param_1 + 0xe) = 0;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 142562d20 FUN_142562d20 body=462 status=ok
// SIG undefined FUN_142562d20(void)

undefined8 * FUN_142562d20(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffe;
  *param_1 = &PTR_FUN_1450f8a28;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pvVar2 = ThreadLocalStoragePointer;
  param_1[0x15] = 0;
  uVar3 = (ulonglong)_tls_index;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  if (*(int *)(lVar1 + 0x38) < DAT_146afd1e8) {
    _Init_thread_header(&DAT_146afd1e8);
    if (DAT_146afd1e8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd1d0,L"Texture",L"MaterialExpression",L"Texture");
      atexit(FUN_143eb2cd0);
      _Init_thread_footer(&DAT_146afd1e8);
    }
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(uint *)((longlong)param_1 + 0x1ac) = *(uint *)((longlong)param_1 + 0x1ac) | 1;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  return param_1;
}



// FUNCTION 142562ef0 FUN_142562ef0 body=214 status=ok
// SIG undefined FUN_142562ef0(void)

undefined8 * FUN_142562ef0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142563090();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145101dc0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd308) {
    _Init_thread_header(&DAT_146afd308);
    if (DAT_146afd308 == -1) {
      FUN_14255ad10(&DAT_146afd2d0,L"/Engine/EngineResources/DefaultTexture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd2d8,L"Texture",L"MaterialExpression",L"Texture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd2f0,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb2d20);
      _Init_thread_footer(&DAT_146afd308);
    }
  }
  param_1[8] = DAT_146afd2d0;
  return param_1;
}



// FUNCTION 142562fd0 FUN_142562fd0 body=192 status=ok
// SIG undefined FUN_142562fd0(void)

undefined8 * FUN_142562fd0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142563090();
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) | 2;
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145102b58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd3c0) {
    _Init_thread_header(&DAT_146afd3c0);
    if (DAT_146afd3c0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd390,L"Texture",L"MaterialExpression",L"Texture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd3a8,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb2db0);
      _Init_thread_footer(&DAT_146afd3c0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142563090 FUN_142563090 body=189 status=ok
// SIG undefined FUN_142563090(void)

undefined8 * FUN_142563090(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142562d20();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450f8cc8;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd228) {
    _Init_thread_header(&DAT_146afd228);
    if (DAT_146afd228 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd210,L"Obsolete",L"MaterialExpression",L"Obsolete");
      atexit(FUN_143eb2e40);
      _Init_thread_footer(&DAT_146afd228);
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 142563150 FUN_142563150 body=329 status=ok
// SIG undefined FUN_142563150(void)

undefined8 * FUN_142563150(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong local_18 [2];
  
  FUN_142563090();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1451025e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd348) {
    _Init_thread_header(&DAT_146afd348);
    if (DAT_146afd348 == -1) {
      FUN_141785db0(L"/Engine/EngineResources/DefaultTextureCube");
      local_18[1] = 0x2b;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"/Engine/EngineResources/DefaultTextureCube",0x56)
      ;
      FUN_14179acf0(local_18,1);
      DAT_146afd310 = FUN_142555630(local_18);
      if (DAT_146afd310 == 0) {
        FUN_14178ab20(L"/Engine/EngineResources/DefaultTextureCube");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd318,L"Texture",L"MaterialExpression",L"Texture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd330,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb2e90);
      _Init_thread_footer(&DAT_146afd348);
    }
  }
  param_1[8] = DAT_146afd310;
  return param_1;
}



// FUNCTION 1425632a0 FUN_1425632a0 body=169 status=ok
// SIG undefined FUN_1425632a0(void)

undefined8 * FUN_1425632a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_142562ef0();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__145102330;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd3e0) {
    _Init_thread_header(&DAT_146afd3e0);
    if (DAT_146afd3e0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd3c8,L"Particles",L"MaterialExpression",L"Particles");
      atexit(FUN_143eb2f20);
      _Init_thread_footer(&DAT_146afd3e0);
      *(uint *)(param_1 + 0x3b) = *(uint *)(param_1 + 0x3b) | 1;
      return param_1;
    }
  }
  *(uint *)(param_1 + 0x3b) = *(uint *)(param_1 + 0x3b) | 1;
  return param_1;
}



// FUNCTION 142563350 FUN_142563350 body=337 status=ok
// SIG undefined FUN_142563350(void)

undefined8 * FUN_142563350(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong local_18 [2];
  
  FUN_142563090();
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffd;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) | 4;
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1451028a0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd388) {
    _Init_thread_header(&DAT_146afd388);
    if (DAT_146afd388 == -1) {
      FUN_141785db0(L"/Engine/EngineResources/DefaultVolumeTexture");
      local_18[1] = 0x2d;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy
                (local_18[0],L"/Engine/EngineResources/DefaultVolumeTexture",0x5a);
      FUN_14179acf0(local_18,1);
      DAT_146afd350 = FUN_1425558d0(local_18);
      if (DAT_146afd350 == 0) {
        FUN_14178ab20(L"/Engine/EngineResources/DefaultVolumeTexture");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd358,L"Texture",L"MaterialExpression",L"Texture");
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd370,L"Parameters",L"MaterialExpression",L"Parameters");
      atexit(FUN_143eb2f70);
      _Init_thread_footer(&DAT_146afd388);
    }
  }
  param_1[8] = DAT_146afd350;
  return param_1;
}



// FUNCTION 1425634b0 FUN_1425634b0 body=159 status=ok
// SIG undefined FUN_1425634b0(void)

undefined8 * FUN_1425634b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450fd350;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afd6c8) {
    _Init_thread_header(&DAT_146afd6c8);
    if (DAT_146afd6c8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afd6b0,L"Constants",L"MaterialExpression",L"Constants");
      atexit(FUN_143eb3000);
      _Init_thread_footer(&DAT_146afd6c8);
    }
  }
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffd;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  return param_1;
}



// FUNCTION 142563550 FUN_142563550 body=191 status=ok
// SIG undefined FUN_142563550(void)

undefined8 * FUN_142563550(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdd20) {
    _Init_thread_header(&DAT_146afdd20);
    if (DAT_146afdd20 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdd08,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb3050);
      _Init_thread_footer(&DAT_146afdd20);
      *(undefined2 *)(param_1 + 0xe) = 0x200;
      return param_1;
    }
  }
  *(undefined2 *)(param_1 + 0xe) = 0x200;
  return param_1;
}



// FUNCTION 142563610 FUN_142563610 body=191 status=ok
// SIG undefined FUN_142563610(void)

undefined8 * FUN_142563610(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450fce10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdd40) {
    _Init_thread_header(&DAT_146afdd40);
    if (DAT_146afdd40 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdd28,L"VectorOps",L"MaterialExpression",L"VectorOps");
      atexit(FUN_143eb30a0);
      _Init_thread_footer(&DAT_146afdd40);
      *(undefined2 *)(param_1 + 0xe) = 0;
      return param_1;
    }
  }
  *(undefined2 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 1425636d0 FUN_1425636d0 body=179 status=ok
// SIG undefined FUN_1425636d0(void)

undefined8 * FUN_1425636d0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afda70) {
    _Init_thread_header(&DAT_146afda70);
    if (DAT_146afda70 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afda58,L"Math",L"MaterialExpression",L"Math");
      atexit(FUN_143eb30f0);
      _Init_thread_footer(&DAT_146afda70);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142563790 FUN_142563790 body=194 status=ok
// SIG undefined FUN_142563790(void)

undefined8 * FUN_142563790(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145102e10;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afdf58) {
    _Init_thread_header(&DAT_146afdf58);
    if (DAT_146afdf58 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afdf40,L"Utility",L"MaterialExpression",L"Utility");
      atexit(FUN_143eb3140);
      _Init_thread_footer(&DAT_146afdf58);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 300;
  return param_1;
}



// FUNCTION 142563860 FUN_142563860 body=72 status=ok
// SIG undefined FUN_142563860(void)

undefined8 * FUN_142563860(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450fc578;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff80000000;
  return param_1;
}



// FUNCTION 1425638b0 UMaterialExpressionShadingModel body=37 status=ok
// SIG undefined UMaterialExpressionShadingModel(void)

undefined8 * UMaterialExpressionShadingModel::UMaterialExpressionShadingModel(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450c6cf8;
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}



// FUNCTION 1425638e0 FUN_1425638e0 body=179 status=ok
// SIG undefined FUN_1425638e0(void)

undefined8 * FUN_1425638e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe2d8) {
    _Init_thread_header(&DAT_146afe2d8);
    if (DAT_146afe2d8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe2c0,L"Wind",L"MaterialExpression",L"Wind");
      atexit(FUN_143eb3190);
      _Init_thread_footer(&DAT_146afe2d8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1425639a0 FUN_1425639a0 body=155 status=ok
// SIG undefined FUN_1425639a0(void)

undefined8 * FUN_1425639a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe318) {
    _Init_thread_header(&DAT_146afe318);
    if (DAT_146afe318 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe300,L"Wind",L"MaterialExpression",L"Wind");
      atexit(FUN_143eb31e0);
      _Init_thread_footer(&DAT_146afe318);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142563a40 FUN_142563a40 body=155 status=ok
// SIG undefined FUN_142563a40(void)

undefined8 * FUN_142563a40(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146afe2f8) {
    _Init_thread_header(&DAT_146afe2f8);
    if (DAT_146afe2f8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146afe2e0,L"Wind",L"MaterialExpression",L"Wind");
      atexit(FUN_143eb3230);
      _Init_thread_footer(&DAT_146afe2f8);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142563ae0 UMaterialExpressionWorldPosition body=37 status=ok
// SIG undefined UMaterialExpressionWorldPosition(void)

undefined8 * UMaterialExpressionWorldPosition::UMaterialExpressionWorldPosition(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450c6cf8;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 142563b10 UMaterialFunction body=62 status=ok
// SIG undefined UMaterialFunction(void)

undefined8 * UMaterialFunction::UMaterialFunction(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450f97d0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 142563b50 UMaterialFunctionInstance body=112 status=ok
// SIG undefined UMaterialFunctionInstance(void)

undefined8 * UMaterialFunctionInstance::UMaterialFunctionInstance(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450fcaf8;
  *(undefined1 *)(param_1 + 7) = 0;
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
  return param_1;
}



// FUNCTION 142563bc0 USoundEffectPreset body=46 status=ok
// SIG undefined USoundEffectPreset(void)

undefined8 * USoundEffectPreset::USoundEffectPreset(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450f8f80;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 142563bf0 UMaterialFunctionMaterialLayer body=62 status=ok
// SIG undefined UMaterialFunctionMaterialLayer(void)

undefined8 * UMaterialFunctionMaterialLayer::UMaterialFunctionMaterialLayer(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1450f97d0;
  return param_1;
}



// FUNCTION 142563c30 UMaterialFunctionMaterialLayerBlendInstance body=33 status=ok
// SIG undefined UMaterialFunctionMaterialLayerBlendInstance(void)

undefined8 *
UMaterialFunctionMaterialLayerBlendInstance::UMaterialFunctionMaterialLayerBlendInstance
          (undefined8 *param_1)

{
  UMaterialFunctionInstance::UMaterialFunctionInstance();
  *param_1 = &PTR__scalar_deleting_destructor__1450fcaf8;
  return param_1;
}



// FUNCTION 142563c60 ~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> body=340 status=ok
// SIG undefined ~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>(void)

void FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::
     ~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450f7488;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  uVar6 = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 1,0);
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 3,0);
  }
  if (0 < (int)*(uint *)(param_1 + 10)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 10);
    do {
      puVar5 = (undefined8 *)param_1[9];
      if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
        puVar5 = param_1 + 8;
      }
      uVar4 = (longlong)*(int *)(param_1 + 10) - 1U & uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)((longlong)puVar5 + uVar4 * 4) = 0xffffffff;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 142563dc0 ~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> body=331 status=ok
// SIG undefined ~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>(void)

void FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::
     ~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_28 [2];
  
  *param_1 = &PTR__scalar_deleting_destructor__1450f7498;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  uVar7 = 0;
  plVar1 = param_1 + 0x11;
  param_1[0x10] = 0;
  if (plVar1 != local_28) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    param_1[0x12] = 0;
  }
  iVar2 = *(int *)(param_1 + 2);
  iVar3 = *(int *)((longlong)param_1 + 0x3c);
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (0 < (int)*(uint *)(param_1 + 10)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 10);
    do {
      uVar6 = (longlong)*(int *)(param_1 + 10) - 1U & uVar7;
      puVar5 = (undefined8 *)param_1[9];
      if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
        puVar5 = param_1 + 8;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)((longlong)puVar5 + uVar6 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (0 < iVar2 - iVar3) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 142563f10 ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator> body=137 status=ok
// SIG undefined ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(void)

void TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
     ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142563fa0 FUN_142563fa0 body=110 status=ok
// SIG undefined FUN_142563fa0(void)

void FUN_142563fa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_144eef6b8;
      FUN_14257f4c0(puVar1);
      puVar1 = puVar1 + 7;
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



// FUNCTION 142564010 ~FMeshMapBuildData body=90 status=ok
// SIG undefined ~FMeshMapBuildData(void)

void FMeshMapBuildData::~FMeshMapBuildData(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x38))();
    }
  }
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    piVar2 = (int *)((longlong)param_1 + 0x1c);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142564060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))();
      return;
    }
  }
  return;
}



// FUNCTION 142564070 FUN_142564070 body=138 status=ok
// SIG undefined FUN_142564070(void)

void FUN_142564070(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142564100 ~UMaterialFunctionInstance body=115 status=ok
// SIG undefined ~UMaterialFunctionInstance(void)

void UMaterialFunctionInstance::~UMaterialFunctionInstance(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142564180 ~UMaterialInterface body=101 status=ok
// SIG undefined ~UMaterialInterface(void)

void UMaterialInterface::~UMaterialInterface(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143f47c68;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fe0658;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1425641f0 FUN_1425641f0 body=412 status=ok
// SIG undefined FUN_1425641f0(void)

longlong * FUN_1425641f0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar10;
  int local_res8 [2];
  undefined8 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar10 = (undefined8 *)0x0;
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
          lVar7 = (longlong)(int)puVar10 * 0x10 + *param_2;
          uVar4 = FUN_140d66f10(param_1,lVar7);
          FUN_140d66f10(uVar4,lVar7 + 8);
          uVar8 = (int)puVar10 + 1;
          puVar10 = (undefined8 *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar9 = puVar10;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar6 = puVar10;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar6 = puVar5;
        }
        uVar4 = FUN_140d66f10(param_1,puVar6);
        FUN_140d66f10(uVar4,puVar6 + 1);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 142564390 FUN_142564390 body=389 status=ok
// SIG undefined FUN_142564390(void)

longlong * FUN_142564390(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  puVar6 = (undefined2 *)0x0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x800000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_140d25400(param_1,*param_2 + (longlong)(int)puVar6 * 2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined2 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined2 *)(*param_2 + (longlong)iVar3 * 2);
    puVar5 = puVar6;
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
      puVar5 = puVar1;
    }
    FUN_140d25400(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined2 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142564520 FUN_142564520 body=822 status=ok
// SIG undefined FUN_142564520(void)

longlong * FUN_142564520(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
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
        lVar9 = (longlong)local_3c * 0x20 + *local_58;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_141661f40(&local_68,lVar9);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        FUN_1426f6980(param_1,lVar9 + 0x10);
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
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
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
      puVar10 = (undefined8 *)((longlong)iVar5 * 0x20 + *param_2);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_141661f40(&local_68,puVar10);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      FUN_1426f6980(param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 142564860 FUN_142564860 body=822 status=ok
// SIG undefined FUN_142564860(void)

longlong * FUN_142564860(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
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
        lVar9 = (longlong)local_3c * 0x20 + *local_58;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_141661f40(&local_68,lVar9);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        FUN_1426f6a30(param_1,lVar9 + 0x10);
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
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
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
      puVar10 = (undefined8 *)((longlong)iVar5 * 0x20 + *param_2);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_141661f40(&local_68,puVar10);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      FUN_1426f6a30(param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 142564ba0 FUN_142564ba0 body=842 status=ok
// SIG undefined FUN_142564ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142564ba0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
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
            (param_1,(longlong)(int)param_2[1] * 0x90,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x90);
  iVar6 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar7 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar10 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar10[1] < (int *)*plVar10 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar10;
      *plVar10 = *plVar10 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar11 = (longlong)local_3c * 0x90 + *local_58;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_141661f40(&local_68,lVar11);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        FUN_1425655a0(param_1,lVar11 + 0x10);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar6 = 0;
  local_res8[0] = 0;
  if ((int *)plVar10[1] < (int *)*plVar10 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar10;
    *plVar10 = *plVar10 + 4;
  }
  TSparseArray<TSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar7 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar7)
          ;
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar7 = (int)param_2[6];
        iVar8 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar9 = *(int *)(*param_2 + 4 + (longlong)iVar7 * 0x90);
        *(int *)(param_2 + 6) = iVar9;
        *(int *)((longlong)param_2 + 0x34) = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar9 * 0x90) = 0xffffffff;
        }
      }
      plVar10 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar10 = param_2 + 2;
      }
      iVar9 = iVar7;
      if (iVar7 < 0) {
        iVar9 = iVar7 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar9 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
      puVar12 = (undefined8 *)((longlong)iVar7 * 0x90 + *param_2);
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined4 *)(puVar12 + 2) = 0xffffffff;
      uVar2 = _DAT_1464aa7d8;
      puVar12[4] = _DAT_1464aa7d0;
      puVar12[5] = uVar2;
      uVar2 = _DAT_1464aa7e8;
      puVar12[6] = _DAT_1464aa7e0;
      puVar12[7] = uVar2;
      uVar5 = uRam00000001464aa7fc;
      uVar4 = DAT_1464aa7f8;
      uVar3 = DAT_1464aa7f4;
      *(undefined4 *)(puVar12 + 8) = DAT_1464aa7f0;
      *(undefined4 *)((longlong)puVar12 + 0x44) = uVar3;
      *(undefined4 *)(puVar12 + 9) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar5;
      uVar5 = _DAT_1464aa80c;
      uVar4 = uRam00000001464aa808;
      uVar3 = uRam00000001464aa804;
      *(undefined4 *)(puVar12 + 10) = _DAT_1464aa800;
      *(undefined4 *)((longlong)puVar12 + 0x54) = uVar3;
      *(undefined4 *)(puVar12 + 0xb) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar5;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      *(undefined4 *)(puVar12 + 0x10) = 0xffffffff;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_141661f40(&local_68,puVar12);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      FUN_1425655a0(param_1,puVar12 + 2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 142564ef0 FUN_142564ef0 body=794 status=ok
// SIG undefined FUN_142564ef0(void)

longlong * FUN_142564ef0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
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
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        lVar2 = *local_58 + (longlong)local_3c * 0x48;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_141661f40(&local_68,lVar2);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        operator<<(param_1,lVar2 + 0x10);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
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
  TSparseArray<TSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar6 = *(int *)(*param_2 + 4 + (longlong)iVar4 * 0x48);
        *(int *)(param_2 + 6) = iVar6;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar6 * 0x48) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
      lVar7 = (longlong)iVar4;
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + lVar7 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar7 * 0x48) = 0;
      lVar2 = lVar2 + lVar7 * 0x48;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_141661f40(&local_68,lVar2);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      operator<<(param_1,lVar2 + 0x10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 142565210 FUN_142565210 body=906 status=ok
// SIG undefined FUN_142565210(void)

longlong * FUN_142565210(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
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
            (param_1,(longlong)(int)param_2[1] * 0xe0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xe0);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
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
        lVar6 = (longlong)local_3c * 0xe0 + *local_58;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_141661f40(&local_68,lVar6);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        FUN_142565780(param_1,lVar6 + 0x10);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
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
  FUN_142569bb0(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          FUN_140822570(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0xe0 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0xe0 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar3 * 0xe0 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0x3f800000;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0;
      puVar7[0x16] = 0;
      puVar7[0x17] = 0;
      puVar7[0x18] = 0;
      *(undefined1 *)(puVar7 + 0x19) = 0;
      puVar7[0x1a] = 0;
      *(undefined4 *)(puVar7 + 0x1b) = 0xffffffff;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_141661f40(&local_68,puVar7);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      FUN_142565780(param_1,puVar7 + 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1425655a0 FUN_1425655a0 body=283 status=ok
// SIG undefined FUN_1425655a0(void)

longlong * FUN_1425655a0(longlong *param_1,undefined4 *param_2)

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
  FUN_1408bd530(param_1,param_2 + 4);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x14,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x14,4);
    }
  }
  else {
    param_2[0x14] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x15,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x15,4);
    }
  }
  else {
    param_2[0x15] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_142564390(param_1,param_2 + 0x16);
  return param_1;
}



// FUNCTION 1425656c0 operator<< body=183 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_res8;
  
  local_res8 = *param_2;
  FUN_14253eb20(param_1,&local_res8);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar3 = (longlong *)*param_2;
    *param_2 = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 0x1c) = *(int *)(local_res8 + 0x1c) + 1;
    }
    if (plVar3 != (longlong *)0x0) {
      piVar1 = (int *)((longlong)plVar3 + 0x1c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
  }
  local_res8 = param_2[1];
  FUN_14276dcd0(param_1,&local_res8);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar3 = (longlong *)param_2[1];
    param_2[1] = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar2 = plVar3 + 3;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
  }
  FUN_140910980(param_1,param_2 + 2);
  FUN_142567df0(param_2 + 4,param_1,0);
  return param_1;
}



// FUNCTION 142565780 FUN_142565780 body=1933 status=ok
// SIG undefined FUN_142565780(void)

longlong * FUN_142565780(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong **local_40;
  longlong local_38 [4];
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0188);
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
  iVar3 = FArchive::CustomVer(param_1,&DAT_1464b0188);
  if (3 < iVar3) {
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
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 3,4);
      }
    }
    else {
      param_2[3] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  iVar3 = FArchive::CustomVer(param_1,&DAT_1464b0188);
  if (5 < iVar3) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 4,4);
      }
    }
    else {
      param_2[4] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  iVar3 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (0x15 < iVar3) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 5,4);
      }
    }
    else {
      param_2[5] = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd130) &&
     (_Init_thread_header(&DAT_146afd130), DAT_146afd130 == -1)) {
    FName::FName(&DAT_146afd128,L"FullHDR",1);
    _Init_thread_footer(&DAT_146afd130);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd140) &&
     (_Init_thread_header(&DAT_146afd140), DAT_146afd140 == -1)) {
    FName::FName(&DAT_146afd138,L"EncodedHDR",1);
    _Init_thread_footer(&DAT_146afd140);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd150) &&
     (_Init_thread_header(&DAT_146afd150), DAT_146afd150 == -1)) {
    FName::FName(&DAT_146afd148,L"DXT1",1);
    _Init_thread_footer(&DAT_146afd150);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd160) &&
     (_Init_thread_header(&DAT_146afd160), DAT_146afd160 == -1)) {
    FName::FName(&DAT_146afd158,L"DXT5",1);
    _Init_thread_footer(&DAT_146afd160);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd170) &&
     (_Init_thread_header(&DAT_146afd170), DAT_146afd170 == -1)) {
    FName::FName(&DAT_146afd168,&DAT_1450f43f0,1);
    _Init_thread_footer(&DAT_146afd170);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd180) &&
     (_Init_thread_header(&DAT_146afd180), DAT_146afd180 == -1)) {
    FName::FName(&DAT_146afd178,&DAT_1450f43f8,1);
    _Init_thread_footer(&DAT_146afd180);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd190) &&
     (_Init_thread_header(&DAT_146afd190), DAT_146afd190 == -1)) {
    FName::FName(&DAT_146afd188,L"BC6H",1);
    _Init_thread_footer(&DAT_146afd190);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146afd1a0) &&
     (_Init_thread_header(&DAT_146afd1a0), DAT_146afd1a0 == -1)) {
    FName::FName(&DAT_146afd198,&DAT_1450f4410,1);
    _Init_thread_footer(&DAT_146afd1a0);
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (((*(byte *)(param_1 + 5) & 2) != 0) &&
     (plVar4 = (longlong *)param_1[0xe], plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0xd0))(plVar4,&local_58);
  }
  iVar3 = FArchive::CustomVer(param_1,&DAT_1464b0188);
  if (iVar3 < 4) {
    if ((int)local_50 == 0) {
LAB_142565c32:
      FUN_140d25120(param_1,param_2 + 6);
    }
    else {
      for (plVar4 = local_58; plVar4 != local_58 + (int)local_50; plVar4 = plVar4 + 1) {
        if (*plVar4 == DAT_146afd128) goto LAB_142565c32;
      }
      local_48 = (longlong *)0x0;
      local_40 = (longlong **)0x0;
      FUN_140d25120(param_1,&local_48);
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_140d25120(param_1,local_38);
    iVar3 = FArchive::CustomVer(param_1,&DAT_1464b0188);
    if (2 < iVar3) {
      local_48 = (longlong *)0x0;
      local_40 = (longlong **)0x0;
      FUN_140d25120(param_1,&local_48);
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    local_40 = &local_58;
    local_48 = param_1;
    FUN_142565fe0(&local_48,param_2 + 6,param_2 + 10,0x3f800000,*param_2,param_2 + 0xe,10,
                  DAT_146afd188);
    FUN_142565fe0(&local_48,param_2 + 0x10,param_2 + 0x1c,0x3f800000,*param_2,param_2 + 0x28,10,
                  DAT_146afd158);
    FUN_142565fe0(&local_48,param_2 + 0x14,param_2 + 0x20,0x3f800000,*param_2,param_2 + 0x2a,10,
                  DAT_146afd148);
    if (((*(byte *)(param_1 + 5) & 2) != 0) && (param_1[0xe] != 0)) {
      param_2[0x1a] = 0;
      if (param_2[0x1b] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x18,0);
      }
      param_2[0x26] = 0;
      if (param_2[0x27] != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x24,0);
      }
      *(undefined8 *)(param_2 + 0x2c) = 0;
    }
    FUN_142565fe0(&local_48,param_2 + 0x18,param_2 + 0x24,0x3f800000,*param_2,param_2 + 0x2c,3,
                  DAT_146afd168);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(ulonglong *)(param_2 + 0x30) =
         (ulonglong)(uint)(param_2[0x27] + param_2[0x1b]) +
         (ulonglong)(uint)(param_2[0x23] + param_2[0x17]) +
         (ulonglong)(uint)(param_2[0x1f] + param_2[0x13]) +
         (ulonglong)(uint)(param_2[0xd] + param_2[9]);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142565f10 FUN_142565f10 body=207 status=ok
// SIG undefined FUN_142565f10(void)

longlong * FUN_142565f10(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_1408bd530();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x40,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x40,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x44,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x44,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x44) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_142564390(param_1,param_2 + 0x48);
  return param_1;
}



// FUNCTION 142565fe0 FUN_142565fe0 body=609 status=ok
// SIG undefined FUN_142565fe0(void)

void FUN_142565fe0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7,longlong param_8)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  long lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 local_res8;
  longlong local_38 [4];
  
  uVar4 = 0;
  iVar3 = (int)((longlong *)param_1[1])[1];
  if (iVar3 == 0) {
LAB_14256605b:
    FUN_140d25120(*param_1);
    iVar3 = FArchive::CustomVer(*param_1,&DAT_1464b0188);
    if (iVar3 < 7) {
      uVar6 = (ulonglong)(longlong)(int)param_2[1] >> 1;
      lVar2 = *param_2;
      if (uVar6 != 0) {
        do {
          if (*(short *)(lVar2 + uVar4 * 2) < 0) {
            *(undefined2 *)(lVar2 + uVar4 * 2) = 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
      }
    }
  }
  else {
    plVar7 = *(longlong **)param_1[1];
    plVar1 = plVar7 + iVar3;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if (*plVar7 == DAT_146afd128) goto LAB_14256605b;
    }
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_140d25120(*param_1,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  iVar3 = (int)((longlong *)param_1[1])[1];
  if (iVar3 == 0) {
LAB_142566108:
    if (((((*(byte *)(*param_1 + 0x28) & 2) != 0) && (*(longlong *)(*param_1 + 0x70) != 0)) &&
        (*(int *)(param_3 + 8) == 0)) && (0 < (int)param_2[1])) {
      lVar5 = (long)param_2;
      if (param_8 == DAT_146afd188) {
        AK::MemoryMgr::StartProfileThreadUsage(lVar5);
        *param_6 = param_8;
      }
      else if (param_8 == DAT_146afd168) {
        AK::MemoryMgr::StartProfileThreadUsage(lVar5);
        *param_6 = param_8;
      }
      else if (param_8 == DAT_146afd158) {
        AK::MemoryMgr::StartProfileThreadUsage(lVar5);
        *param_6 = param_8;
      }
      else if (param_8 == DAT_146afd148) {
        AK::MemoryMgr::StartProfileThreadUsage(lVar5);
        *param_6 = param_8;
      }
      else {
        local_res8 = 0;
        *param_6 = 0;
        *(undefined4 *)(param_3 + 8) = 0;
        if (0x7fffffff < *(uint *)(param_3 + 0xc)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3,0);
        }
      }
    }
    (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_6);
    FUN_140d25120(*param_1,param_3);
  }
  else {
    plVar7 = *(longlong **)param_1[1];
    plVar1 = plVar7 + iVar3;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_8) goto LAB_142566108;
    }
    local_res8 = 0;
    (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,&local_res8);
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_140d25120(*param_1,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142566260 FUN_142566260 body=97 status=ok
// SIG undefined FUN_142566260(void)

undefined8 * FUN_142566260(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450fdb38;
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



// FUNCTION 1425662d0 FUN_1425662d0 body=100 status=ok
// SIG undefined FUN_1425662d0(void)

undefined8 * FUN_1425662d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450fa0c8;
  if (param_1[0x92] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8f] != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 142566340 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FColoredMaterialRenderProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FMaterialRenderProxy::~FMaterialRenderProxy();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 142566380 FUN_142566380 body=52 status=ok
// SIG undefined FUN_142566380(void)

undefined8 FUN_142566380(undefined8 param_1,ulonglong param_2)

{
  FUN_14257f4c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1425663c0 `scalar_deleting_destructor' body=378 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMapBuildDataRegistry::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  FUN_142569bb0(param_1 + 0x170,0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x120,0);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FGuid,FMeshMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x30,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 142566540 FUN_142566540 body=371 status=ok
// SIG undefined FUN_142566540(void)

longlong FUN_142566540(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x870) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x860) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x840) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x828) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x820) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x820) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined4 *)(param_1 + 0x818) = 0;
  if (*(longlong *)(param_1 + 0x810) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2000);
  FUN_142563fa0(param_1 + 0x7c0);
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x728);
  plVar3 = *(longlong **)(param_1 + 0x720);
  if (iVar2 != 0) {
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 0x720);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  UMaterialInterface::~UMaterialInterface(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x880);
  }
  return param_1;
}



// FUNCTION 1425666c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCapsuleShadowingUpsamplePS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 142566700 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142566740 FUN_142566740 body=52 status=ok
// SIG undefined FUN_142566740(void)

undefined8 FUN_142566740(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142566780 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionComment::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1425667d0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionCustom::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142566840 FUN_142566840 body=171 status=ok
// SIG undefined FUN_142566840(void)

longlong FUN_142566840(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x80);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x78);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1425668f0 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionDynamicParameter::_scalar_deleting_destructor_
                   (longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142566970 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionFunctionInput::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1425669c0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionFunctionOutput::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142566a10 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAsyncActionChangePrimaryAssetBundles::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142566a60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWaterSplineComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x610);
  }
  return param_1;
}



// FUNCTION 142566aa0 `scalar_deleting_destructor' body=158 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionMaterialAttributeLayers::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 142566b40 FUN_142566b40 body=52 status=ok
// SIG undefined FUN_142566b40(void)

undefined8 FUN_142566b40(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142566b80 FUN_142566b80 body=52 status=ok
// SIG undefined FUN_142566b80(void)

undefined8 FUN_142566b80(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 142566bc0 FUN_142566bc0 body=52 status=ok
// SIG undefined FUN_142566bc0(void)

undefined8 FUN_142566bc0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 142566c00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UMaterialFunctionInstance::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~UMaterialFunctionInstance();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142566c40 FUN_142566c40 body=215 status=ok
// SIG undefined FUN_142566c40(void)

void FUN_142566c40(longlong param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 uStack_c;
  
  piVar2 = *(int **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  piVar6 = (int *)0x0;
  piVar4 = piVar2 + (longlong)iVar1 * 8;
  piVar3 = piVar6;
  if (piVar2 != piVar4) {
    do {
      if ((((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) &&
          (*(char *)((longlong)piVar2 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar3 = piVar2, piVar2[3] == param_2[3])) break;
      piVar2 = piVar2 + 8;
      piVar3 = piVar6;
    } while (piVar2 != piVar4);
  }
  piVar4 = piVar3 + 4;
  if (piVar3 == (int *)0x0) {
    piVar4 = piVar6;
  }
  if (piVar4 == (int *)0x0) {
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow((longlong *)(param_1 + 0x38),iVar1);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x20);
    *puVar5 = *(undefined8 *)param_2;
    *(short *)(puVar5 + 1) = (short)param_2[2];
    *(undefined1 *)((longlong)puVar5 + 10) = *(undefined1 *)((longlong)param_2 + 10);
    *(undefined1 *)((longlong)puVar5 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
    *(int *)((longlong)puVar5 + 0xc) = param_2[3];
    puVar5[2] = param_3;
    puVar5[3] = CONCAT44(uStack_c,param_4);
  }
  return;
}



// FUNCTION 142566d20 AddReferencedObjects body=59 status=ok
// SIG undefined AddReferencedObjects(void)

void FMeshMapBuildData::AddReferencedObjects(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return;
}



// FUNCTION 142566d60 AddReferencedObjects body=507 status=ok
// SIG undefined AddReferencedObjects(void)

void UMapBuildDataRegistry::AddReferencedObjects(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint *puVar11;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar8 = 0;
  if (param_1 != 0) {
    lVar6 = GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142566dc7;
  }
  param_1 = uVar8;
LAB_142566dc7:
  plVar10 = (longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x58);
  puStack_28 = (uint *)(param_1 + 0x40);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar11 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar11 = puStack_28;
    }
    uVar2 = *puVar11;
    uVar9 = uVar8;
    while (uVar2 == 0) {
      iVar5 = (int)uVar9;
      uStack_60 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)uStack_60;
      local_78 = iVar5 + 1;
      uVar9 = (ulonglong)local_78;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142566e6b;
      uVar2 = puVar11[(longlong)iVar5 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_142566e6b:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar10,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x58);
  local_48 = plVar10;
  local_38 = plVar10;
  local_10 = plVar10;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      lVar7 = (longlong)iStack_5c;
      lVar6 = *plVar10;
      plVar3 = *(longlong **)(lVar6 + 0x10 + lVar7 * 0x48);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      }
      plVar3 = *(longlong **)(lVar6 + lVar7 * 0x48 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FGuid,FMeshMapBuildData>,TDefaultMapHashableKeyFuncs<FGuid,FMeshMapBuildData,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142566f60 FUN_142566f60 body=181 status=ok
// SIG undefined FUN_142566f60(void)

void FUN_142566f60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res8 [2];
  int local_res18;
  int local_res1c;
  longlong *plVar3;
  
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  do {
    plVar3 = plVar6;
    local_res18 = (int)plVar4;
    do {
      local_res1c = (int)plVar3;
      TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 2000,local_res8,&local_res18);
      plVar5 = plVar6;
      if (local_res8[0] != -1) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 2000) + (longlong)local_res8[0] * 0x18);
      }
      plVar1 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar1 = plVar6;
      }
      if ((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0))
      {
        (**(code **)(*plVar1 + 0x338))(plVar1,param_2);
      }
      uVar2 = (int)plVar3 + 1;
      plVar3 = (longlong *)(ulonglong)uVar2;
    } while ((int)uVar2 < 4);
    uVar2 = (int)plVar4 + 1;
    plVar4 = (longlong *)(ulonglong)uVar2;
  } while ((int)uVar2 < 3);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142567020 FUN_142567020 body=205 status=ok
// SIG undefined FUN_142567020(void)

void FUN_142567020(longlong param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = (longlong)iVar1;
  piVar4 = *(int **)(param_1 + 8);
  piVar7 = (int *)0x0;
  piVar3 = piVar4 + lVar6 * 6;
  piVar5 = piVar7;
  if (piVar4 != piVar3) {
    do {
      if ((((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) &&
          (*(char *)((longlong)piVar4 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar5 = piVar4, piVar4[3] == param_2[3])) break;
      piVar4 = piVar4 + 6;
      piVar5 = piVar7;
    } while (piVar4 != piVar3);
  }
  piVar3 = piVar5 + 4;
  if (piVar5 == (int *)0x0) {
    piVar3 = piVar7;
  }
  if (piVar3 == (int *)0x0) {
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(lVar2 + lVar6 * 0x18) = *(undefined8 *)param_2;
    *(short *)(lVar2 + 8 + lVar6 * 0x18) = (short)param_2[2];
    *(undefined1 *)(lVar2 + 10 + lVar6 * 0x18) = *(undefined1 *)((longlong)param_2 + 10);
    *(undefined1 *)(lVar2 + 0xb + lVar6 * 0x18) = *(undefined1 *)((longlong)param_2 + 0xb);
    *(int *)(lVar2 + 0xc + lVar6 * 0x18) = param_2[3];
    *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) = param_3;
  }
  return;
}



// FUNCTION 1425670f0 FUN_1425670f0 body=209 status=ok
// SIG undefined FUN_1425670f0(void)

void FUN_1425670f0(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  piVar2 = *(int **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  piVar6 = (int *)0x0;
  piVar4 = piVar2 + (longlong)iVar1 * 6;
  piVar3 = piVar6;
  if (piVar2 != piVar4) {
    do {
      if ((((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) &&
          (*(char *)((longlong)piVar2 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar3 = piVar2, piVar2[3] == param_2[3])) break;
      piVar2 = piVar2 + 6;
      piVar3 = piVar6;
    } while (piVar2 != piVar4);
  }
  piVar4 = piVar3 + 4;
  if (piVar3 == (int *)0x0) {
    piVar4 = piVar6;
  }
  if (piVar4 == (int *)0x0) {
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x28),iVar1);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x18);
    *puVar5 = *(undefined8 *)param_2;
    *(short *)(puVar5 + 1) = (short)param_2[2];
    *(undefined1 *)((longlong)puVar5 + 10) = *(undefined1 *)((longlong)param_2 + 10);
    *(undefined1 *)((longlong)puVar5 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
    *(int *)((longlong)puVar5 + 0xc) = param_2[3];
    puVar5[2] = param_3;
  }
  return;
}



// FUNCTION 1425671d0 AddUninitialized body=220 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FGuid,FLightComponentMapBuildData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 1425672b0 FUN_1425672b0 body=219 status=ok
// SIG undefined FUN_1425672b0(void)

int * FUN_1425672b0(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      FUN_140822570(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0xe0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0xe0 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0xe0 + *param_1;
  return param_2;
}



// FUNCTION 142567390 FUN_142567390 body=213 status=ok
// SIG undefined FUN_142567390(void)

void FUN_142567390(longlong param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  piVar3 = *(int **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  piVar7 = (int *)0x0;
  piVar5 = piVar3 + (longlong)iVar1 * 8;
  piVar4 = piVar7;
  if (piVar3 != piVar5) {
    do {
      if ((((*piVar3 == *param_2) && (piVar3[1] == param_2[1])) &&
          (*(char *)((longlong)piVar3 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar4 = piVar3, piVar3[3] == param_2[3])) break;
      piVar3 = piVar3 + 8;
      piVar4 = piVar7;
    } while (piVar3 != piVar5);
  }
  piVar5 = piVar4 + 4;
  if (piVar4 == (int *)0x0) {
    piVar5 = piVar7;
  }
  if (piVar5 == (int *)0x0) {
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow((longlong *)(param_1 + 0x18),iVar1);
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0x20);
    *puVar6 = *(undefined8 *)param_2;
    *(short *)(puVar6 + 1) = (short)param_2[2];
    *(undefined1 *)((longlong)puVar6 + 10) = *(undefined1 *)((longlong)param_2 + 10);
    *(undefined1 *)((longlong)puVar6 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
    *(int *)((longlong)puVar6 + 0xc) = param_2[3];
    uVar2 = param_3[1];
    puVar6[2] = *param_3;
    puVar6[3] = uVar2;
  }
  return;
}



// FUNCTION 142567470 AllMaterialsCacheResourceShadersForRendering body=190 status=ok
// SIG undefined AllMaterialsCacheResourceShadersForRendering(void)

void UMaterial::AllMaterialsCacheResourceShadersForRendering(void)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar1 = ACineCameraActor::GetPrivateStaticClass();
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      FUN_142568af0(*(undefined8 *)(local_28 + (longlong)local_18 * 8),0);
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 142567530 AllocateResource body=81 status=ok
// SIG undefined AllocateResource(void)

undefined8 * UMaterial::AllocateResource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *(uint *)((longlong)puVar1 + 0x24) = *(uint *)((longlong)puVar1 + 0x24) & 0xfffffffc;
    *puVar1 = &PTR_FUN_144eef6b8;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 2;
    puVar1[5] = 0;
    puVar1[6] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142567590 FUN_142567590 body=682 status=ok
// SIG undefined FUN_142567590(void)

void FUN_142567590(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  plVar11 = (longlong *)0x0;
  plVar13 = plVar11;
  plVar14 = plVar11;
  if (0 < *(int *)(param_1 + 0x748)) {
    do {
      plVar6 = *(longlong **)((longlong)plVar14 + *(longlong *)(param_1 + 0x740));
      if (plVar6 == (longlong *)0x0) {
LAB_142567619:
        plVar9 = plVar11;
      }
      else {
        lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar9 = plVar6;
        if (!bVar1) goto LAB_142567619;
      }
      if (plVar6 == (longlong *)0x0) {
LAB_14256765a:
        plVar8 = plVar11;
      }
      else {
        lVar5 = FUN_1429af6e0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar8 = plVar6;
        if (!bVar1) goto LAB_14256765a;
      }
      if ((plVar9 == (longlong *)0x0) ||
         (plVar10 = (longlong *)plVar9[8], plVar10 == (longlong *)0x0)) {
        if (plVar8 != (longlong *)0x0) {
          local_38 = (longlong *)0x0;
          local_30 = 0;
          FUN_14256b930(plVar8,&local_38);
          plVar6 = (longlong *)
                   ((ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >>
                   3);
          if (local_38 + (int)local_30 < local_38) {
            plVar6 = plVar11;
          }
          plVar9 = local_38;
          plVar8 = local_38;
          plVar10 = plVar11;
          if (plVar6 != (longlong *)0x0) {
            do {
              (**(code **)(*(longlong *)*plVar8 + 0x2a8))((longlong *)*plVar8,param_2);
              plVar10 = (longlong *)((longlong)plVar10 + 1);
              plVar9 = local_38;
              plVar8 = plVar8 + 1;
            } while (plVar10 != plVar6);
          }
          goto LAB_1425677b0;
        }
        if (plVar6 != (longlong *)0x0) {
          uVar7 = (**(code **)(*plVar6 + 0x280))(plVar6);
          cVar3 = (**(code **)(*plVar6 + 0x288))(plVar6);
          if (cVar3 != '\0') {
            iVar4 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = uVar7;
          }
        }
      }
      else {
        local_48 = (longlong *)0x0;
        local_40 = 0;
        (**(code **)(*plVar10 + 0x2a0))(plVar10,&local_48);
        uVar2 = local_40;
        lVar5 = (longlong)(int)local_40;
        if (local_48 != local_48 + lVar5) {
          plVar6 = local_48;
          do {
            if (*plVar6 == plVar9[8]) {
              if ((int)((longlong)plVar6 - (longlong)local_48 >> 3) != -1) goto LAB_1425676f3;
              break;
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != local_48 + lVar5);
        }
        iVar4 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar4);
        if (local_40._4_4_ < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_48,uVar2 & 0xffffffff);
        }
        local_48[lVar5] = plVar9[8];
LAB_1425676f3:
        plVar6 = (longlong *)
                 ((ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3)
        ;
        if (local_48 + (int)local_40 < local_48) {
          plVar6 = plVar11;
        }
        plVar9 = local_48;
        plVar8 = local_48;
        plVar10 = plVar11;
        if (plVar6 != (longlong *)0x0) {
          do {
            (**(code **)(*(longlong *)*plVar8 + 0x2a8))((longlong *)*plVar8,param_2);
            plVar10 = (longlong *)((longlong)plVar10 + 1);
            plVar9 = local_48;
            plVar8 = plVar8 + 1;
          } while (plVar10 != plVar6);
        }
LAB_1425677b0:
        if (plVar9 != (longlong *)0x0) {
          FMemory::Free(plVar9);
        }
      }
      uVar12 = (int)plVar13 + 1;
      plVar13 = (longlong *)(ulonglong)uVar12;
      plVar14 = plVar14 + 1;
    } while ((int)uVar12 < *(int *)(param_1 + 0x748));
  }
  return;
}



// FUNCTION 142567840 FUN_142567840 body=171 status=ok
// SIG undefined FUN_142567840(void)

void FUN_142567840(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  plVar6 = *(longlong **)(param_1 + 0x58);
  uVar7 = (longlong)*(int *)(param_1 + 0x60) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x60) < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      plVar2 = (longlong *)*plVar6;
      if (plVar2 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar2 + 0x280))(plVar2);
        cVar3 = (**(code **)(*plVar2 + 0x288))(plVar2);
        if (cVar3 != '\0') {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
        }
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}



// FUNCTION 1425678f0 FUN_1425678f0 body=131 status=ok
// SIG undefined FUN_1425678f0(void)

void FUN_1425678f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2a8))();
  }
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x78) * 0x28;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + 0x10);
  }
  return;
}



// FUNCTION 142567980 AppendReferencedTextures body=83 status=ok
// SIG undefined AppendReferencedTextures(void)

void UMaterialFunctionInterface::AppendReferencedTextures(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x55,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::AppendReferencedTextures");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialFunctionInterface.h"
             ,0x55,L"Pure virtual not implemented (%s)",
             L"UMaterialFunctionInterface::AppendReferencedTextures");
  return;
}



// FUNCTION 1425679e0 FUN_1425679e0 body=796 status=ok
// SIG undefined FUN_1425679e0(void)

void FUN_1425679e0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_b8;
  undefined8 local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *local_48;
  
  uVar12 = 0;
  local_a8 = -1;
  local_b8 = 0;
  local_b0 = 0;
  uVar3 = UMaterialInterface::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_b8,1,0x10,0);
  do {
    local_a8 = local_a8 + 1;
    if ((int)local_b0 <= local_a8) break;
  } while (*(longlong *)(local_b8 + (longlong)local_a8 * 8) == 0);
  do {
    if ((local_a8 < 0) || ((int)local_b0 <= local_a8)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      if (local_b8 != 0) {
        FMemory::Free();
      }
      return;
    }
    uVar9 = *(ulonglong *)(local_b8 + (longlong)local_a8 * 8);
    if (uVar9 == 0) {
LAB_142567ac3:
      uVar7 = uVar12;
    }
    else {
      lVar4 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar7 = uVar9;
      if (!bVar2) goto LAB_142567ac3;
    }
    if (uVar9 == 0) {
LAB_142567b04:
      uVar9 = uVar12;
    }
    else {
      lVar4 = ACineCameraActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142567b04;
    }
    if (uVar7 == 0) {
      uVar7 = uVar12;
      if (uVar9 != 0) {
        do {
          uVar8 = uVar12;
          local_90 = (int)uVar7;
          do {
            local_8c = (int)uVar8;
            TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::FindId(uVar9 + 2000,local_res10,&local_90);
            if (((((local_res10[0] != -1) &&
                  (lVar4 = *(longlong *)(uVar9 + 2000) + (longlong)local_res10[0] * 0x18, lVar4 != 0
                  )) && (plVar6 = (longlong *)(lVar4 + 8), plVar6 != (longlong *)0x0)) &&
                ((lVar4 = *plVar6, lVar4 != 0 &&
                 (lVar4 = *(longlong *)(lVar4 + 8), local_70 = lVar4, lVar4 != 0)))) &&
               (piVar5 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                                ::FindId(param_1,local_88,lVar4), *piVar5 == -1)) {
              local_68 = FUN_142586ef0(lVar4);
              local_50 = &local_70;
              local_48 = &local_68;
              FUN_142554950(param_1,local_84,&local_50,0);
            }
            uVar10 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar10;
          } while ((int)uVar10 < 4);
          uVar10 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar10;
        } while ((int)uVar10 < 3);
      }
    }
    else if ((*(byte *)(uVar7 + 0x98) & 1) != 0) {
      local_a0 = 0;
      local_98 = 0;
      FUN_14258e4b0(uVar7,&local_a0);
      uVar9 = uVar12;
      uVar7 = uVar12;
      lVar4 = local_a0;
      iVar11 = (int)local_98;
      if (0 < (int)local_98) {
        do {
          lVar1 = *(longlong *)(uVar9 + lVar4);
          local_80 = lVar1;
          if ((lVar1 != 0) &&
             (piVar5 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                              ::FindId(param_1,local_res18,lVar1), *piVar5 == -1)) {
            local_78 = FUN_142586ef0(lVar1);
            local_60 = &local_80;
            local_58 = &local_78;
            FUN_142554950(param_1,local_res20,&local_60,0);
            lVar4 = local_a0;
            iVar11 = (int)local_98;
          }
          uVar10 = (int)uVar7 + 1;
          uVar9 = uVar9 + 8;
          uVar7 = (ulonglong)uVar10;
        } while ((int)uVar10 < iVar11);
      }
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    do {
      local_a8 = local_a8 + 1;
      if ((int)local_b0 <= local_a8) break;
    } while (*(longlong *)(local_b8 + (longlong)local_a8 * 8) == 0);
  } while( true );
}



// FUNCTION 142567d00 BeginDestroy body=43 status=ok
// SIG undefined BeginDestroy(void)

void UMapBuildDataRegistry::BeginDestroy(longlong param_1)

{
  FUN_1417502d0();
  ReleaseResources(param_1,0);
  FUN_141edede0(param_1 + 0x1c0,0);
  return;
}



// FUNCTION 142567d30 FUN_142567d30 body=87 status=ok
// SIG undefined FUN_142567d30(void)

void FUN_142567d30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  UMaterialInterface::BeginDestroy();
  plVar1 = (longlong *)(param_1 + 0x798);
  lVar2 = 3;
  do {
    if (*plVar1 != 0) {
      FUN_141edf360();
    }
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_141edede0(param_1 + 0x820,0);
  return;
}



// FUNCTION 142567d90 FUN_142567d90 body=90 status=ok
// SIG undefined FUN_142567d90(void)

void FUN_142567d90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FShaderParameter::Bind(param_1 + 8,param_2,L"SpeedTreeLODInfo",0);
  if (*(short *)(param_1 + 0xc) == 0) {
    cVar1 = FShaderParameterMap::ContainsParameterAllocation(param_2,L"SpeedTreeData");
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}



// FUNCTION 142567df0 FUN_142567df0 body=511 status=ok
// SIG undefined FUN_142567df0(void)

void FUN_142567df0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x10;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 4,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_1425641f0(param_2,param_1);
  }
  return;
}



// FUNCTION 142567ff0 FUN_142567ff0 body=86 status=ok
// SIG undefined FUN_142567ff0(void)

void FUN_142567ff0(longlong *param_1)

{
  if ((int)param_1[0x106] < 1) {
    *(undefined4 *)(param_1 + 0x106) = 0;
    if (*(int *)((longlong)param_1 + 0x834) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x105,0);
    }
    (**(code **)(*param_1 + 0x3a0))(param_1,param_1 + 0x105);
  }
  return;
}



// FUNCTION 142568050 FUN_142568050 body=944 status=ok
// SIG undefined FUN_142568050(void)

void FUN_142568050(longlong param_1,char param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  pcVar1 = (char *)(param_1 + 0x838);
  if ((*pcVar1 == '\0') || (param_2 != '\0')) {
    FUN_142575b50(pcVar1);
    *pcVar1 = '\x01';
    plVar10 = *(longlong **)(param_1 + 0x740);
    plVar5 = plVar10 + *(int *)(param_1 + 0x748);
    for (; plVar10 != plVar5; plVar10 = plVar10 + 1) {
      lVar8 = *plVar10;
      local_88 = 0;
      local_80 = 0x202ffff;
      local_7c = 0xffffffff;
      if (lVar8 == 0) {
LAB_1425682b2:
        lVar6 = 0;
LAB_1425682b4:
        if (lVar8 == 0) {
LAB_1425682ef:
          lVar8 = 0;
        }
        else {
          lVar7 = FUN_1429af6e0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1425682ef;
        }
        if (lVar6 == 0) {
          if (lVar8 != 0) {
            plVar2 = *(longlong **)(lVar8 + 0x100);
            plVar11 = plVar2 + 2;
            if (plVar2 == (longlong *)0x0) {
              plVar2 = (longlong *)(lVar8 + 0x90);
              plVar11 = (longlong *)(lVar8 + 0xa0);
            }
            iVar9 = 0;
            if (0 < (int)plVar2[1]) {
              lVar8 = 0;
              do {
                plVar3 = *(longlong **)(lVar8 + *plVar2);
                if (plVar3 != (longlong *)0x0) {
                  local_80 = local_80 & 0xffffff;
                  local_7c = iVar9;
                  (**(code **)(*plVar3 + 0x310))(plVar3,pcVar1,&local_88);
                }
                iVar9 = iVar9 + 1;
                lVar8 = lVar8 + 8;
              } while (iVar9 < (int)plVar2[1]);
            }
            iVar9 = 0;
            if (0 < (int)plVar11[1]) {
              lVar8 = 0;
              do {
                plVar2 = *(longlong **)(lVar8 + *plVar11);
                if (plVar2 != (longlong *)0x0) {
                  local_80 = CONCAT13(1,(undefined3)local_80);
                  local_7c = iVar9;
                  (**(code **)(*plVar2 + 0x310))(plVar2,pcVar1,&local_88);
                }
                iVar9 = iVar9 + 1;
                lVar8 = lVar8 + 8;
              } while (iVar9 < (int)plVar11[1]);
            }
          }
        }
        else {
          plVar2 = *(longlong **)(lVar6 + 0x40);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x310))(plVar2,pcVar1,&local_88);
          }
        }
      }
      else {
        lVar6 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_78 = *(undefined8 *)(lVar8 + 0x40);
          local_70 = 0x202ffff;
          local_6c = 0xffffffff;
          FUN_142567020(pcVar1,&local_78,*(undefined4 *)(lVar8 + 0x60));
        }
        else {
          lVar6 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            local_68 = *(undefined8 *)(lVar8 + 0x40);
            local_60 = 0x202ffff;
            local_5c = 0xffffffff;
            FUN_142567390(pcVar1,&local_68,lVar8 + 0x60);
          }
          else {
            lVar6 = UCompositingMediaInput::StaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              local_58 = *(undefined8 *)(lVar8 + 0x1b8);
              local_50 = 0x202ffff;
              local_4c = 0xffffffff;
              FUN_1425670f0(pcVar1,&local_58,*(undefined8 *)(lVar8 + 0x40));
            }
            else {
              lVar6 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) {
                lVar6 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                lVar6 = lVar8;
                if (!bVar4) goto LAB_1425682b2;
                goto LAB_1425682b4;
              }
              local_48 = *(undefined8 *)(lVar8 + 0x50);
              local_40 = 0x202ffff;
              local_3c = 0xffffffff;
              FUN_142566c40(pcVar1,&local_48,*(undefined8 *)(lVar8 + 0x40),
                            *(undefined4 *)(lVar8 + 0x48));
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142568400 FUN_142568400 body=292 status=ok
// SIG undefined FUN_142568400(void)

void FUN_142568400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = lVar1 + (longlong)*(int *)(param_1 + 0x58) * 0x28;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
    FUN_142567020(param_2,lVar1,*(undefined4 *)(lVar1 + 0x10));
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  lVar1 = (longlong)*(int *)(param_1 + 0x68) * 0x30 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_142567390(param_2,lVar2,lVar2 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar2 = lVar1 + (longlong)*(int *)(param_1 + 0x78) * 0x28;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
    FUN_1425670f0(param_2,lVar1,*(undefined8 *)(lVar1 + 0x10));
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar1 = (longlong)*(int *)(param_1 + 0x88) * 0x30 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_142566c40(param_2,lVar2,*(undefined8 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x18));
  }
  FUN_142568530(param_1,param_2,param_3);
  return;
}



// FUNCTION 142568530 FUN_142568530 body=685 status=ok
// SIG undefined FUN_142568530(void)

void FUN_142568530(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined4 local_1c;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2c0))(plVar4);
    plVar6 = (longlong *)*plVar4;
    plVar4 = plVar6 + (int)plVar4[1];
    for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
      lVar1 = *plVar6;
      if (lVar1 != 0) {
        lVar5 = UMaterialExpressionMaterialFunctionCall::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar2 = *(longlong **)(lVar1 + 0x40);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x310))(plVar2,param_2,param_3);
          }
        }
        else {
          lVar5 = UMaterialExpressionScalarParameter::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_58 = *(undefined8 *)(lVar1 + 0x40);
            local_4d = *(undefined1 *)(param_3 + 0xb);
            local_4c = *(undefined4 *)(param_3 + 0xc);
            local_50 = 0xffff;
            local_4e = 2;
            FUN_142567020(param_2,&local_58,*(undefined4 *)(lVar1 + 0x60));
          }
          else {
            lVar5 = UMaterialExpressionVectorParameter::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_48 = *(undefined8 *)(lVar1 + 0x40);
              local_3d = *(undefined1 *)(param_3 + 0xb);
              local_3c = *(undefined4 *)(param_3 + 0xc);
              local_40 = 0xffff;
              local_3e = 2;
              FUN_142567390(param_2,&local_48,lVar1 + 0x60);
            }
            else {
              lVar5 = UCompositingMediaInput::StaticClass();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                local_38 = *(undefined8 *)(lVar1 + 0x1b8);
                local_2d = *(undefined1 *)(param_3 + 0xb);
                local_2c = *(undefined4 *)(param_3 + 0xc);
                local_30 = 0xffff;
                local_2e = 2;
                FUN_1425670f0(param_2,&local_38,*(undefined8 *)(lVar1 + 0x40));
              }
              else {
                lVar5 = UMaterialExpressionFontSampleParameter::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  local_28 = *(undefined8 *)(lVar1 + 0x50);
                  local_1d = *(undefined1 *)(param_3 + 0xb);
                  local_1c = *(undefined4 *)(param_3 + 0xc);
                  local_20 = 0xffff;
                  local_1e = 2;
                  FUN_142566c40(param_2,&local_28,*(undefined8 *)(lVar1 + 0x40),
                                *(undefined4 *)(lVar1 + 0x48));
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


