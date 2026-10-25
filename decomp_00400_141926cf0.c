// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141926cf0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SRetainerWidget::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141924f70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 141926d40 FUN_141926d40 body=78 status=ok
// SIG undefined FUN_141926d40(void)

undefined8 FUN_141926d40(undefined8 param_1,ulonglong param_2)

{
  FUN_141925220();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 141926d90 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SDefaultMovieBorder::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141925600();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    ~SDefaultMovieBorder(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 141926de0 FUN_141926de0 body=637 status=ok
// SIG undefined FUN_141926de0(void)

void FUN_141926de0(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar2 = *(longlong **)(param_1 + 0x408);
  plVar12 = (longlong *)0x0;
  plVar11 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar2[1];
    bVar13 = iVar8 == 0;
    if (bVar13) {
      *(int *)(plVar2 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar11 = plVar12, !bVar13) {
      LOCK();
      bVar13 = iVar8 == (int)plVar2[1];
      if (bVar13) {
        *(int *)(plVar2 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar11 = plVar2;
        if ((plVar2 != (longlong *)0x0) && (lVar6 = *(longlong *)(param_1 + 0x400), lVar6 != 0)) {
          puVar9 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_58);
          uVar4 = *puVar9;
          plVar3 = (longlong *)puVar9[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_50 + 1;
            lVar5 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)local_50 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
          plVar10 = plVar3 + 1;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar10 = (int)*plVar10 + 1;
            UNLOCK();
          }
          local_78 = uVar4;
          local_70 = plVar3;
          FUN_1418dd780(lVar6,&local_78);
          plVar11 = plVar2;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar2[1];
      bVar13 = iVar8 == 0;
      if (bVar13) {
        *(int *)(plVar2 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  puVar9 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_48);
  plVar2 = (longlong *)puVar9[1];
  uVar4 = *puVar9;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (((*(int *)(param_1 + 0x478) != 0) && (*(longlong **)(param_1 + 0x470) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x470) + 0x18))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x478) != 0) {
      plVar12 = *(longlong **)(param_1 + 0x470);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_68 = uVar4;
    local_60 = plVar2;
    (**(code **)(*plVar12 + 0x40))(plVar12,&local_68,param_2);
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar2 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 141927060 Add body=123 status=ok
// SIG undefined Add(void)

int TPanelChildren<FSimpleSlot>::Add(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return -1;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 != 0) && (*(longlong *)(param_2 + 0x18) != lVar2)) {
    *(longlong *)(param_2 + 0x18) = lVar2;
    FUN_141802340();
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = param_2;
  return iVar1;
}



// FUNCTION 1419270e0 FUN_1419270e0 body=860 status=ok
// SIG undefined FUN_1419270e0(void)

void FUN_1419270e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float local_res8;
  float local_resc;
  undefined1 local_res10 [8];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined1 local_c8 [40];
  longlong local_a0;
  int local_98;
  int local_94;
  
  FUN_141922530(local_c8);
  puVar11 = *(undefined8 **)(param_2 + 0x10);
  puVar12 = puVar11 + (longlong)*(int *)(param_2 + 0x18) * 2;
  for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
    plVar9 = (longlong *)puVar11[1];
    uVar2 = *puVar11;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    lVar13 = (longlong)local_98;
    local_98 = local_98 + 1;
    local_f8 = uVar2;
    local_f0 = plVar9;
    if (local_94 < local_98) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_a0);
    }
    plVar4 = local_f0;
    puVar6 = (undefined8 *)(lVar13 * 0x30 + local_a0);
    *puVar6 = uVar2;
    puVar6[1] = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar9 = local_f0;
    }
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar9 + 1;
      lVar13 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_f0 + 8))();
        }
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar10 + 1;
  if (*(int *)(param_1 + 0x24) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x18,iVar10);
  }
  FTextLayout::FLineModel::FLineModel
            ((longlong)iVar10 * 0x70 + *(longlong *)(param_1 + 0x18),local_c8);
  FTextLayout::FLineModel::~FLineModel(local_c8);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    iVar10 = *(int *)(param_1 + 0x20) + -1;
    lVar13 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + *(longlong *)(param_1 + 0x18);
    FTextLayout::CalculateLineTextDirection(param_1,lVar13 + -0x70);
    if ((*(byte *)(lVar13 + -8) & 4) != 0) {
      FUN_141955bd0(*(longlong *)(lVar13 + -0x60) + 8);
      *(byte *)(lVar13 + -8) = *(byte *)(lVar13 + -8) & 0xfb;
    }
    FUN_14193a870(param_1,lVar13 + -0x70);
    puVar11 = *(undefined8 **)(lVar13 + -0x48);
    puVar12 = puVar11 + (longlong)*(int *)(lVar13 + -0x40) * 6;
    for (; puVar11 != puVar12; puVar11 = puVar11 + 6) {
      (**(code **)(*(longlong *)*puVar11 + 0x50))();
    }
    local_108 = (undefined8 *)0x0;
    iVar8 = *(int *)(param_1 + 0x30) + 1;
    local_100 = 0;
    fVar14 = (*(float *)(param_1 + 0x90) - (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x98))
             ) * *(float *)(param_1 + 0x8c);
    if (fVar14 <= 0.01) {
      fVar14 = 0.01;
    }
    FUN_14193d230(param_1,iVar10,fVar14,&local_108);
    fVar14 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x9c);
    fVar15 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x98);
    if (iVar8 < *(int *)(param_1 + 0x30)) {
      lVar7 = (longlong)iVar8 * 0x58;
      do {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if (*(int *)(lVar7 + 0x54 + lVar3) == iVar10) {
          *(float *)(lVar7 + 0x30 + lVar3) = fVar15 + *(float *)(lVar7 + 0x30 + lVar3);
          *(float *)(lVar7 + 0x34 + lVar3) = fVar14 + *(float *)(lVar7 + 0x34 + lVar3);
        }
        iVar8 = iVar8 + 1;
        lVar7 = lVar7 + 0x58;
      } while (iVar8 < *(int *)(param_1 + 0x30));
    }
    puVar12 = local_108 + (longlong)(int)local_100 * 2;
    for (puVar11 = local_108; puVar11 != puVar12; puVar11 = puVar11 + 2) {
      plVar9 = (longlong *)*puVar11;
      pfVar5 = (float *)(**(code **)(*plVar9 + 0x38))(plVar9,local_res10);
      local_resc = fVar14 + pfVar5[1];
      local_res8 = fVar15 + *pfVar5;
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_res8);
    }
    FUN_141945860(param_1);
    puVar11 = *(undefined8 **)(lVar13 + -0x48);
    puVar12 = puVar11 + (longlong)*(int *)(lVar13 + -0x40) * 6;
    for (; puVar11 != puVar12; puVar11 = puVar11 + 6) {
      (**(code **)(*(longlong *)*puVar11 + 0x58))();
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_108);
  }
  return;
}



// FUNCTION 141927440 FUN_141927440 body=376 status=ok
// SIG undefined FUN_141927440(void)

void FUN_141927440(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  void *_Src;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  bVar3 = false;
  lVar8 = (longlong)*param_2 * 0x70 + *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar8 + 0x60)) {
    lVar6 = 0;
    iVar7 = -1;
    do {
      if (bVar3) goto LAB_141927592;
      if (param_2[3] < *(int *)(*(longlong *)(lVar8 + 0x58) + 0xc + lVar6)) {
        iVar1 = *(int *)(lVar8 + 0x60);
        iVar4 = iVar7;
        if (iVar7 < 1) {
          iVar4 = 0;
        }
        *(int *)(lVar8 + 0x60) = iVar1 + 1;
        if (*(int *)(lVar8 + 100) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(lVar8 + 0x58,iVar1);
        }
        _Src = (void *)(*(longlong *)(lVar8 + 0x58) + (longlong)iVar4 * 0x20);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar1 - iVar4) << 5);
        piVar5 = (int *)(*(longlong *)(lVar8 + 0x58) + (longlong)iVar4 * 0x20);
        *piVar5 = *param_2;
        *(undefined8 *)(piVar5 + 1) = *(undefined8 *)(param_2 + 1);
        piVar5[3] = param_2[3];
        *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(param_2 + 4);
        lVar2 = *(longlong *)(param_2 + 6);
        *(longlong *)(piVar5 + 6) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        bVar3 = true;
      }
      lVar6 = lVar6 + 0x20;
      iVar1 = iVar7 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar1 < *(int *)(lVar8 + 0x60));
    if (bVar3) goto LAB_141927592;
  }
  iVar7 = *(int *)(lVar8 + 0x60);
  *(int *)(lVar8 + 0x60) = iVar7 + 1;
  if (*(int *)(lVar8 + 100) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(lVar8 + 0x58,iVar7);
  }
  piVar5 = (int *)((longlong)iVar7 * 0x20 + *(longlong *)(lVar8 + 0x58));
  *piVar5 = *param_2;
  *(undefined8 *)(piVar5 + 1) = *(undefined8 *)(param_2 + 1);
  piVar5[3] = param_2[3];
  *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(param_2 + 4);
  lVar8 = *(longlong *)(param_2 + 6);
  *(longlong *)(piVar5 + 6) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
LAB_141927592:
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
  return;
}



// FUNCTION 1419275c0 FUN_1419275c0 body=1363 status=ok
// SIG undefined FUN_1419275c0(void)

void FUN_1419275c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  float *pfVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float local_res18;
  float local_res1c;
  longlong local_res20;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  longlong *local_e0;
  longlong *local_d0;
  longlong local_c0;
  int local_b8;
  int local_b4;
  longlong local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [80];
  
  lVar15 = *param_2;
  lVar20 = (longlong)(int)param_2[1] * 0x20 + lVar15;
  local_res20 = lVar20;
  if (lVar15 != lVar20) {
    do {
      FUN_141922530(local_e8,lVar15);
      puVar12 = *(undefined8 **)(lVar15 + 0x10);
      puVar17 = puVar12 + (longlong)*(int *)(lVar15 + 0x18) * 2;
      iVar16 = local_b8;
      for (; puVar12 != puVar17; puVar12 = puVar12 + 2) {
        plVar11 = (longlong *)puVar12[1];
        uVar4 = *puVar12;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_b8 = iVar16 + 1;
        local_128 = uVar4;
        local_120 = plVar11;
        if (local_b4 < local_b8) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_c0,iVar16);
        }
        plVar5 = local_120;
        puVar10 = (undefined8 *)((longlong)iVar16 * 0x30 + local_c0);
        *puVar10 = uVar4;
        puVar10[1] = plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          plVar11 = local_120;
        }
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar11 + 1;
          lVar20 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*local_120 + 8))(local_120,1);
            }
          }
        }
        lVar20 = local_res20;
        iVar16 = local_b8;
      }
      iVar19 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar19 + 1;
      local_b8 = iVar16;
      if (*(int *)(param_1 + 0x24) < iVar19 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
        ResizeGrow((longlong *)(param_1 + 0x18),iVar19);
      }
      FTextLayout::FLineModel::FLineModel
                ((longlong)iVar19 * 0x70 + *(longlong *)(param_1 + 0x18),local_e8);
      TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
      ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(local_90);
      TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
      ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(local_a0);
      if (local_b0 != 0) {
        FMemory::Free();
      }
      TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
      ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(&local_c0);
      plVar11 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_d0 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_e0 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != lVar20);
  }
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    iVar16 = *(int *)(param_1 + 0x20);
    iVar19 = iVar16 - (int)param_2[1];
    if (iVar19 < iVar16) {
      lVar15 = (longlong)iVar19 * 0x70;
      iVar18 = iVar19;
      do {
        puVar12 = *(undefined8 **)(lVar15 + 0x28 + *(longlong *)(param_1 + 0x18));
        puVar17 = puVar12 + (longlong)*(int *)(lVar15 + 0x30 + *(longlong *)(param_1 + 0x18)) * 6;
        for (; puVar12 != puVar17; puVar12 = puVar12 + 6) {
          (**(code **)(*(longlong *)*puVar12 + 0x50))();
        }
        iVar16 = *(int *)(param_1 + 0x20);
        iVar18 = iVar18 + 1;
        lVar15 = lVar15 + 0x70;
      } while (iVar18 < iVar16);
    }
    if (iVar19 < iVar16) {
      lVar15 = (longlong)iVar19 * 0x70;
      iVar16 = iVar19;
      do {
        puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar15);
        bVar9 = *(byte *)(puVar12 + 0xd);
        if ((bVar9 & 2) != 0) {
          cVar3 = *(char *)(param_1 + 0x8a);
          if (cVar3 == '\0') {
            if (*(char *)(param_1 + 0x89) == '\x01') {
              uVar7 = 0;
            }
            else {
              uVar7 = TextBiDi::ComputeBaseDirection(*puVar12);
              bVar9 = *(byte *)(puVar12 + 0xd);
            }
            *(undefined1 *)(puVar12 + 4) = uVar7;
          }
          else if (cVar3 == '\x01') {
            *(undefined1 *)(puVar12 + 4) = 0;
          }
          else if (cVar3 == '\x02') {
            *(undefined1 *)(puVar12 + 4) = 1;
          }
          bVar9 = bVar9 & 0xfd;
          *(byte *)(puVar12 + 0xd) = bVar9;
        }
        if ((bVar9 & 4) != 0) {
          FUN_141955bd0(puVar12[2] + 8);
          *(byte *)(puVar12 + 0xd) = *(byte *)(puVar12 + 0xd) & 0xfb;
        }
        FUN_14193a870(param_1,puVar12);
        local_138 = (undefined8 *)0x0;
        iVar18 = *(int *)(param_1 + 0x30) + 1;
        local_130 = 0;
        fVar21 = (*(float *)(param_1 + 0x90) -
                 (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x98))) *
                 *(float *)(param_1 + 0x8c);
        if (fVar21 <= 0.01) {
          fVar21 = 0.01;
        }
        FUN_14193d230(param_1,iVar16,fVar21,&local_138);
        puVar12 = local_138;
        fVar21 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x9c);
        fVar22 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x98);
        if (iVar18 < *(int *)(param_1 + 0x30)) {
          lVar20 = (longlong)iVar18 * 0x58;
          do {
            lVar6 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(lVar20 + 0x54 + lVar6) == iVar16) {
              *(float *)(lVar20 + 0x30 + lVar6) = fVar22 + *(float *)(lVar20 + 0x30 + lVar6);
              *(float *)(lVar20 + 0x34 + lVar6) = fVar21 + *(float *)(lVar20 + 0x34 + lVar6);
            }
            iVar18 = iVar18 + 1;
            lVar20 = lVar20 + 0x58;
          } while (iVar18 < *(int *)(param_1 + 0x30));
        }
        iVar18 = (int)local_130;
        uVar14 = (ulonglong)(int)local_130;
        puVar10 = local_138 + uVar14 * 2;
        for (puVar17 = local_138; puVar17 != puVar10; puVar17 = puVar17 + 2) {
          plVar11 = (longlong *)*puVar17;
          pfVar8 = (float *)(**(code **)(*plVar11 + 0x38))(plVar11,local_f8);
          local_res1c = fVar21 + pfVar8[1];
          local_res18 = fVar22 + *pfVar8;
          (**(code **)(*plVar11 + 0x30))(plVar11,&local_res18);
        }
        if (iVar18 != 0) {
          plVar11 = puVar12 + 1;
          do {
            plVar5 = (longlong *)*plVar11;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar20 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar20 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar11 = plVar11 + 2;
            uVar13 = (int)uVar14 - 1;
            uVar14 = (ulonglong)uVar13;
            puVar12 = local_138;
          } while (uVar13 != 0);
        }
        if (puVar12 != (undefined8 *)0x0) {
          FMemory::Free(puVar12);
        }
        iVar16 = iVar16 + 1;
        lVar15 = lVar15 + 0x70;
      } while (iVar16 < *(int *)(param_1 + 0x20));
    }
    FUN_141945860(param_1);
    if (iVar19 < *(int *)(param_1 + 0x20)) {
      lVar15 = (longlong)iVar19 * 0x70;
      do {
        puVar12 = *(undefined8 **)(lVar15 + 0x28 + *(longlong *)(param_1 + 0x18));
        puVar17 = puVar12 + (longlong)*(int *)(lVar15 + 0x30 + *(longlong *)(param_1 + 0x18)) * 6;
        for (; puVar12 != puVar17; puVar12 = puVar12 + 6) {
          (**(code **)(*(longlong *)*puVar12 + 0x58))();
        }
        iVar19 = iVar19 + 1;
        lVar15 = lVar15 + 0x70;
      } while (iVar19 < *(int *)(param_1 + 0x20));
    }
  }
  return;
}



// FUNCTION 141927b20 FUN_141927b20 body=390 status=ok
// SIG undefined FUN_141927b20(void)

void FUN_141927b20(longlong param_1,int *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *_Src;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar2 = false;
  lVar7 = (longlong)*param_2 * 0x70 + *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar7 + 0x50)) {
    lVar8 = 0;
    iVar6 = -1;
    do {
      if (bVar2) goto LAB_141927c80;
      if (param_2[1] < *(int *)(*(longlong *)(lVar7 + 0x48) + 4 + lVar8)) {
        iVar3 = *(int *)(lVar7 + 0x50);
        iVar4 = iVar6;
        if (iVar6 < 1) {
          iVar4 = 0;
        }
        *(int *)(lVar7 + 0x50) = iVar3 + 1;
        if (*(int *)(lVar7 + 0x54) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(lVar7 + 0x48,iVar3);
        }
        _Src = (void *)(*(longlong *)(lVar7 + 0x48) + (longlong)iVar4 * 0x20);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar3 - iVar4) << 5);
        piVar5 = (int *)(*(longlong *)(lVar7 + 0x48) + (longlong)iVar4 * 0x20);
        *piVar5 = *param_2;
        *(undefined8 *)(piVar5 + 1) = *(undefined8 *)(param_2 + 1);
        *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(param_2 + 4);
        lVar1 = *(longlong *)(param_2 + 6);
        *(longlong *)(piVar5 + 6) = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
LAB_141927c17:
        bVar2 = true;
      }
      else if (param_2[2] < *(int *)(*(longlong *)(lVar7 + 0x48) + 8 + lVar8)) {
        iVar3 = iVar6;
        if (iVar6 < 1) {
          iVar3 = 0;
        }
        TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_>::Insert(lVar7 + 0x48,param_2,iVar3);
        goto LAB_141927c17;
      }
      lVar8 = lVar8 + 0x20;
      iVar3 = iVar6 + 2;
      iVar6 = iVar6 + 1;
    } while (iVar3 < *(int *)(lVar7 + 0x50));
    if (bVar2) goto LAB_141927c80;
  }
  iVar6 = *(int *)(lVar7 + 0x50);
  *(int *)(lVar7 + 0x50) = iVar6 + 1;
  if (*(int *)(lVar7 + 0x54) < iVar6 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(lVar7 + 0x48,iVar6);
  }
  piVar5 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar7 + 0x48));
  *piVar5 = *param_2;
  *(undefined8 *)(piVar5 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(param_2 + 4);
  lVar7 = *(longlong *)(param_2 + 6);
  *(longlong *)(piVar5 + 6) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
LAB_141927c80:
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
  return;
}



// FUNCTION 141927cb0 FUN_141927cb0 body=247 status=ok
// SIG undefined FUN_141927cb0(void)

undefined8 *
FUN_141927cb0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_28 = *param_4;
  local_20 = (longlong *)param_4[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  local_10 = &local_28;
  local_18 = param_3;
  FUN_14191fc00(param_1 + 8,local_res8,&local_18,0);
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
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
  *param_2 = *param_4;
  lVar5 = param_4[1];
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_4[1];
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
  return param_2;
}



// FUNCTION 141927db0 FUN_141927db0 body=872 status=ok
// SIG undefined FUN_141927db0(void)

void FUN_141927db0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int local_res8;
  int local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x328)) {
    do {
      (**(code **)(*(longlong *)(param_1 + 0x310) + 0x10))
                ((longlong *)(param_1 + 0x310),&local_80,iVar11);
      if (local_80 != DAT_1469eb218) {
        FUN_141806420();
      }
      plVar2 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_78 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2);
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x328));
  }
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty();
  local_res10 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_res20 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x18) + local_res20;
      local_res8 = 0;
      if (0 < *(int *)(lVar10 + 0x30)) {
        local_res18 = 0;
        do {
          plVar5 = *(longlong **)(local_res18 + 8 + *(longlong *)(lVar10 + 0x28));
          plVar6 = *(longlong **)(local_res18 + *(longlong *)(lVar10 + 0x28));
          plVar2 = plVar5 + 1;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar2 = (int)*plVar2 + 1;
            UNLOCK();
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)plVar2 = (int)*plVar2 + 1;
              UNLOCK();
              LOCK();
              lVar13 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
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
          }
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x98))(plVar6);
          iVar11 = 0;
          if (0 < (int)plVar6[1]) {
            lVar13 = 0;
            do {
              lVar8 = *(longlong *)(param_1 + 0x318);
              plVar12 = (longlong *)(*plVar6 + lVar13);
              if ((lVar8 != 0) && (*(char *)(param_1 + 0x330) != '\0')) {
                FUN_141847700();
                lVar8 = *(longlong *)(param_1 + 0x318);
              }
              if ((lVar8 != 0) && (*plVar12 != DAT_1469eb218)) {
                puVar7 = (undefined8 *)
                         TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar8 + 8,local_60);
                local_70 = *puVar7;
                local_68 = puVar7[1];
                if (local_68 != 0) {
                  LOCK();
                  *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
                  UNLOCK();
                }
                FUN_1418034a0(*plVar12,&local_70);
                plVar9 = local_58;
                if (local_58 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_58 + 1;
                  lVar8 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*local_58)(local_58);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
              }
              iVar4 = *(int *)(param_1 + 0x328);
              *(int *)(param_1 + 0x328) = iVar4 + 1;
              if (*(int *)(param_1 + 0x32c) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 800,iVar4);
              }
              plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 800));
              *plVar9 = *plVar12;
              lVar8 = plVar12[1];
              plVar9[1] = lVar8;
              if (lVar8 != 0) {
                LOCK();
                *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                UNLOCK();
              }
              iVar11 = iVar11 + 1;
              lVar13 = lVar13 + 0x10;
            } while (iVar11 < (int)plVar6[1]);
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            lVar13 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
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
          local_res8 = local_res8 + 1;
          local_res18 = local_res18 + 0x30;
        } while (local_res8 < *(int *)(lVar10 + 0x30));
      }
      local_res10 = local_res10 + 1;
      local_res20 = local_res20 + 0x70;
    } while (local_res10 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 141928120 AppendTextTo body=10 status=ok
// SIG undefined AppendTextTo(void)

void FTextLayout::FRunModel::AppendTextTo(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141928126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x78))();
  return;
}



// FUNCTION 141928260 FUN_141928260 body=577 status=ok
// SIG undefined FUN_141928260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141928260(longlong param_1,float param_2,char param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  float local_70;
  undefined1 local_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)0x0;
  fVar10 = 1.1754944e-38;
  if (*(char *)(param_1 + 0x490) != '\0') {
    pfVar2 = (float *)(param_1 + 0x488);
    lVar6 = TAttribute<TOptional<float>_>::Get(pfVar2);
    if (*(char *)(lVar6 + 4) != '\0') {
      fVar11 = 3.4028235e+38;
      local_98 = 0x7f7fffff;
      pfVar7 = (float *)TAttribute<TOptional<float>_>::Get(pfVar2);
      if (*(char *)(pfVar7 + 1) == '\0') {
        fVar10 = 3.4028235e+38;
      }
      else {
        fVar10 = *pfVar7;
      }
      local_94 = 0x7f7fffff;
      pfVar7 = (float *)TAttribute<TOptional<float>_>::Get(pfVar2);
      if (*(char *)(pfVar7 + 1) != '\0') {
        fVar11 = *pfVar7;
      }
      param_2 = fVar10 + param_2;
      if ((fVar11 < param_2) || (param_3 == '\0')) {
        fVar10 = param_2;
        if ((*(int *)(param_1 + 0x4a0) != 0) && (*(longlong **)(param_1 + 0x498) != (longlong *)0x0)
           ) {
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x498) + 0x18))();
          if (cVar5 != '\0') goto LAB_141928398;
        }
        local_6c = 1;
        local_68 = 1;
        local_60 = 0;
        local_58 = 0;
        if (&local_70 != pfVar2) {
          *pfVar2 = param_2;
          *(undefined1 *)(param_1 + 0x48c) = 1;
        }
        *(undefined1 *)(param_1 + 0x490) = 1;
        local_70 = param_2;
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x498,&local_60);
        SSpinBox<float>::UpdateIsSpinRangeUnlimited(param_1);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
      }
    }
  }
LAB_141928398:
  if ((*(int *)(param_1 + 0x4e0) != 0) && (*(longlong **)(param_1 + 0x4d8) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x18))();
    if (cVar5 != '\0') {
      puVar8 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_80);
      plVar4 = (longlong *)puVar8[1];
      local_90 = *puVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x4e0) != 0) {
        plVar9 = *(longlong **)(param_1 + 0x4d8);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_a8 = param_3;
      local_88 = plVar4;
      (**(code **)(*plVar9 + 0x38))(plVar9,fVar10,&local_90,1);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_78 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1419284b0 FUN_1419284b0 body=577 status=ok
// SIG undefined FUN_1419284b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419284b0(longlong param_1,float param_2,char param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  float local_70;
  undefined1 local_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)0x0;
  fVar10 = 1.1754944e-38;
  if (*(char *)(param_1 + 0x470) != '\0') {
    pfVar2 = (float *)(param_1 + 0x468);
    lVar6 = TAttribute<TOptional<float>_>::Get(pfVar2);
    if (*(char *)(lVar6 + 4) != '\0') {
      fVar11 = -3.4028235e+38;
      local_98 = 0xff7fffff;
      pfVar7 = (float *)TAttribute<TOptional<float>_>::Get(pfVar2);
      if (*(char *)(pfVar7 + 1) == '\0') {
        fVar10 = -3.4028235e+38;
      }
      else {
        fVar10 = *pfVar7;
      }
      local_94 = 0xff7fffff;
      pfVar7 = (float *)TAttribute<TOptional<float>_>::Get(pfVar2);
      if (*(char *)(pfVar7 + 1) != '\0') {
        fVar11 = *pfVar7;
      }
      param_2 = fVar10 + param_2;
      if ((param_2 < fVar11) || (param_3 == '\0')) {
        fVar10 = param_2;
        if ((*(int *)(param_1 + 0x480) != 0) && (*(longlong **)(param_1 + 0x478) != (longlong *)0x0)
           ) {
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x478) + 0x18))();
          if (cVar5 != '\0') goto LAB_1419285e8;
        }
        local_6c = 1;
        local_68 = 1;
        local_60 = 0;
        local_58 = 0;
        if (&local_70 != pfVar2) {
          *pfVar2 = param_2;
          *(undefined1 *)(param_1 + 0x46c) = 1;
        }
        *(undefined1 *)(param_1 + 0x470) = 1;
        local_70 = param_2;
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x478,&local_60);
        SSpinBox<float>::UpdateIsSpinRangeUnlimited(param_1);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
      }
    }
  }
LAB_1419285e8:
  if ((*(int *)(param_1 + 0x4f0) != 0) && (*(longlong **)(param_1 + 0x4e8) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))();
    if (cVar5 != '\0') {
      puVar8 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_80);
      plVar4 = (longlong *)puVar8[1];
      local_90 = *puVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x4f0) != 0) {
        plVar9 = *(longlong **)(param_1 + 0x4e8);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_a8 = param_3;
      local_88 = plVar4;
      (**(code **)(*plVar9 + 0x38))(plVar9,fVar10,&local_90,1);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_78 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141928700 FUN_141928700 body=516 status=ok
// SIG undefined FUN_141928700(void)

void FUN_141928700(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int local_res20;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  local_res20 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_78 = 0;
    do {
      iVar10 = 0;
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x28) + local_78);
      if (0 < (int)plVar9[1]) {
        lVar11 = 0;
        do {
          local_70 = *(longlong **)(lVar11 + *plVar9);
          local_68 = *(longlong **)(lVar11 + 8 + *plVar9);
          if (local_68 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
          }
          puVar8 = (undefined8 *)(**(code **)(*local_70 + 8))(local_70,local_60);
          plVar7 = local_58;
          plVar4 = (longlong *)puVar8[1];
          plVar5 = (longlong *)*puVar8;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
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
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          (**(code **)(*plVar5 + 0xa0))(plVar5,&local_70,param_2,param_3);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar4 + 1;
            lVar6 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
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
          plVar4 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_68 + 1;
            lVar6 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_68)(local_68);
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
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x10;
        } while (iVar10 < (int)plVar9[1]);
      }
      local_res20 = local_res20 + 1;
      local_78 = local_78 + 0x58;
    } while (local_res20 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 141928910 FUN_141928910 body=790 status=ok
// SIG undefined FUN_141928910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141928910(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined4 *local_1a0;
  longlong local_198;
  float local_188;
  float fStack_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 local_160;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  undefined4 auStack_144 [5];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float local_114;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar8 = (longlong *)*param_2;
  fVar10 = 1.0 / *(float *)(param_3 + 8);
  pfVar5 = (float *)(**(code **)(*plVar8 + 0x38))(plVar8,local_110);
  local_174 = 0x3f800000;
  fVar11 = fVar10 * *pfVar5;
  fVar12 = fVar10 * pfVar5[1];
  local_170 = fVar11;
  local_16c = fVar12;
  pfVar5 = (float *)(**(code **)(*plVar8 + 0x18))(plVar8,local_108);
  local_188 = fVar10 * *pfVar5;
  fStack_184 = fVar10 * pfVar5[1];
  lVar6 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0xa0) + 0xd0);
  if (*(char *)(lVar6 + 0x18) == '\0') {
    local_160 = CONCAT44(fStack_184,local_188);
    fVar10 = *(float *)(param_3 + 8);
    local_128 = 0x3f800000;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0x3f800000;
    local_118 = fVar11;
    local_114 = fVar12;
    Concatenate<FTransform2D>(auStack_144,&local_128,param_3 + 0x1c);
    plVar8 = *(longlong **)(param_1 + 0xa8);
    uStack_12c = CONCAT31(uStack_12c._1_3_,
                          (byte)uStack_12c ^ (*(byte *)(param_3 + 0x34) ^ (byte)uStack_12c) & 1);
    local_90 = *(undefined8 *)(param_1 + 0xa0);
    fStack_154 = fVar10 * fVar11 + *(float *)(param_3 + 0xc);
    local_150 = fVar10 * fVar12 + *(float *)(param_3 + 0x10);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uStack_c0 = CONCAT44(fStack_154,fVar10);
    local_b8 = CONCAT44(fVar11,local_150);
    uStack_b0 = CONCAT44(auStack_144[0],fVar12);
    local_c8 = local_160;
    uVar9 = uStack_12c;
    fStack_158 = fVar10;
    fStack_14c = fVar11;
    fStack_148 = fVar12;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0xa0);
    if ((*(int *)(lVar6 + 0x118) != 0) && (*(longlong **)(lVar6 + 0x110) != (longlong *)0x0)) {
      cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x110) + 0x18))();
      if (cVar4 != '\0') {
        if (*(int *)(lVar6 + 0x118) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(lVar6 + 0x110);
        }
        (**(code **)(*plVar8 + 0x38))(plVar8,&local_168);
        *(undefined8 *)(lVar6 + 0x100) = local_168;
      }
    }
    uVar7 = TAttribute<TOptional<FTransform2D>_>::Get(*(longlong *)(param_1 + 0xa0) + 0xd0);
    local_180 = *(undefined4 *)(param_3 + 8);
    local_198 = param_3 + 0x1c;
    local_17c = *(undefined4 *)(param_3 + 0xc);
    local_1a0 = &local_180;
    local_178 = *(undefined4 *)(param_3 + 0x10);
    local_1a8 = (undefined8 *)(lVar6 + 0x100);
    FGeometry::FGeometry(&local_100,&local_188,&local_174,uVar7);
    plVar8 = *(longlong **)(param_1 + 0xa8);
    local_90 = *(undefined8 *)(param_1 + 0xa0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_c8 = local_100;
    uStack_c0 = uStack_f8;
    local_b8 = local_f0;
    uStack_b0 = uStack_e8;
    local_130 = (undefined4)local_d0;
    uVar9 = (int)((ulonglong)local_d0 >> 0x20);
  }
  local_98 = CONCAT44(uVar9,local_130);
  local_88 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  }
  FUN_141801ed0(param_4,&local_c8);
  plVar8 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_88)(local_88);
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
  return;
}



// FUNCTION 141928c30 BeginLayout body=128 status=ok
// SIG undefined BeginLayout(void)

void FTextLayout::BeginLayout(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
    puVar1 = *(undefined8 **)(lVar3 + 0x28);
    puVar4 = puVar1 + (longlong)*(int *)(lVar3 + 0x30) * 6;
    for (; puVar1 != puVar4; puVar1 = puVar1 + 6) {
      (**(code **)(*(longlong *)*puVar1 + 0x50))();
    }
  }
  return;
}



// FUNCTION 141928cb0 FUN_141928cb0 body=4133 status=ok
// SIG undefined FUN_141928cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141928cb0(longlong param_1,code *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_c98 [32];
  longlong local_c78;
  longlong local_c70;
  undefined4 local_c68;
  longlong local_c60;
  longlong local_c58;
  longlong local_c50;
  undefined1 local_c48;
  undefined1 local_c40;
  longlong local_c38;
  undefined1 local_c28;
  undefined1 local_c27;
  undefined1 local_c26 [14];
  undefined8 local_c18;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  longlong *local_c08;
  int local_c00;
  longlong *local_bf8;
  int local_bf0;
  longlong *local_be8;
  int local_be0;
  longlong *local_bd8;
  int local_bd0;
  longlong *local_bc8;
  int local_bc0;
  longlong *local_bb8;
  int local_bb0;
  undefined8 local_ba8;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined8 local_b98;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  longlong *local_b88;
  longlong *local_b80;
  undefined1 *local_b78;
  undefined8 local_b68;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  longlong *local_b58;
  longlong *local_b50;
  undefined1 *local_b48;
  longlong *local_b40;
  longlong *local_b38;
  undefined1 *local_b30;
  undefined8 local_b28;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined8 local_b08;
  undefined1 local_b00;
  undefined8 local_af8;
  undefined4 local_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined1 local_ad8;
  undefined8 local_ad0;
  undefined4 local_ac8;
  undefined8 local_ac0;
  undefined1 local_ab8;
  undefined8 local_ab0;
  undefined4 local_aa8;
  longlong *local_aa0;
  longlong *local_a98;
  undefined8 local_a90;
  longlong local_a88;
  undefined8 local_a80;
  longlong *local_a78;
  undefined4 local_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined1 local_a60;
  undefined8 local_a58;
  longlong *plStack_a50;
  undefined1 local_a48;
  undefined8 local_a40;
  undefined4 local_a38;
  undefined8 local_a30;
  longlong local_a28;
  undefined8 local_a20;
  longlong local_a18;
  undefined8 local_a10;
  longlong local_a08;
  undefined8 local_a00;
  longlong local_9f8;
  undefined4 local_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined1 local_9e0;
  undefined8 local_9d8;
  longlong *plStack_9d0;
  undefined1 local_9c8;
  undefined8 local_9c0;
  undefined4 local_9b8;
  undefined4 local_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined1 local_9a0;
  undefined8 local_998;
  longlong *plStack_990;
  undefined1 local_988;
  undefined8 local_980;
  undefined4 local_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined1 local_960;
  undefined1 local_958 [16];
  undefined8 local_948;
  undefined8 uStack_940;
  undefined1 local_938;
  undefined8 local_930;
  undefined4 local_928;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  longlong *local_8e8;
  longlong *local_8e0;
  undefined1 local_8d0 [8];
  longlong *local_8c8;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 local_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 local_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 local_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined1 local_878 [8];
  longlong *local_870;
  undefined1 local_868 [8];
  longlong *local_860;
  undefined1 local_858 [280];
  undefined1 local_740 [48];
  longlong *local_710;
  undefined1 local_700 [16];
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [264];
  longlong local_5d0;
  undefined1 local_5b8 [688];
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c98;
  plVar14 = *(longlong **)(param_1 + 0x488);
  local_b68 = param_2;
  if (plVar14 != (longlong *)0x0) {
    local_a30 = DAT_1469eb218;
    local_a28 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x208))(plVar14,&local_a30);
  }
  if (*(char *)(param_1 + 0x41c) == '\0') {
    uVar7 = (uint)*(byte *)(*(longlong *)(param_1 + 0x2f0) + 8);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x418);
  }
  if (uVar7 != 0) {
    if (uVar7 != 1) goto LAB_141929c5c;
    local_c18 = FUN_1419487a0;
    local_a90 = *(undefined8 *)param_2;
    local_b68 = FUN_1419489d0;
    local_a88 = *(longlong *)(param_2 + 8);
    local_ba8 = FUN_141948a30;
    uStack_c10 = 0;
    uStack_b60 = 0;
    uStack_ba0 = 0;
    local_b98 = FUN_141948800;
    uStack_b90 = 0;
    if (local_a88 != 0) {
      LOCK();
      *(int *)(local_a88 + 8) = *(int *)(local_a88 + 8) + 1;
      UNLOCK();
    }
    lVar9 = FUN_141886d30(local_308);
    local_8b8 = (undefined4)local_b98;
    uStack_8b4 = local_b98._4_4_;
    uStack_8b0 = uStack_b90;
    uStack_8ac = uStack_b8c;
    uVar8 = FUN_1417dd6e0(&local_be8,param_1,&local_8b8);
    local_b08 = 0;
    local_b00 = 1;
    local_af8 = 0;
    local_af0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_af8,uVar8);
    *(undefined8 *)(lVar9 + 0x188) = local_b08;
    *(undefined1 *)(lVar9 + 400) = local_b00;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x198,&local_af8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_af8);
    if (local_be0 == 0) {
LAB_141929794:
      if (local_be8 != (longlong *)0x0) {
        FMemory::Free(local_be8);
      }
    }
    else if (local_be8 != (longlong *)0x0) {
      (**(code **)(*local_be8 + 0x28))(local_be8,0);
      if (local_be8 != (longlong *)0x0) {
        local_be8 = (longlong *)FMemory::Realloc(local_be8,0,0);
      }
      local_be0 = 0;
      goto LAB_141929794;
    }
    local_8a8 = (undefined4)local_ba8;
    uStack_8a4 = local_ba8._4_4_;
    uStack_8a0 = uStack_ba0;
    uStack_89c = uStack_b9c;
    uVar8 = FUN_1418c8cd0(&local_bd8,param_1,&local_8a8);
    local_ad8 = 1;
    local_ad0 = 0;
    local_ac8 = 0;
    local_ae8 = 0;
    uStack_ae0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_ad0,uVar8);
    *(undefined1 *)(lVar9 + 0x130) = local_ad8;
    *(undefined4 *)(lVar9 + 0x120) = (undefined4)local_ae8;
    *(undefined4 *)(lVar9 + 0x124) = local_ae8._4_4_;
    *(undefined4 *)(lVar9 + 0x128) = (undefined4)uStack_ae0;
    *(undefined4 *)(lVar9 + 300) = uStack_ae0._4_4_;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x138,&local_ad0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_ad0);
    if (local_bd0 == 0) {
LAB_141929860:
      if (local_bd8 != (longlong *)0x0) {
        FMemory::Free(local_bd8);
      }
    }
    else if (local_bd8 != (longlong *)0x0) {
      (**(code **)(*local_bd8 + 0x28))(local_bd8,0);
      if (local_bd8 != (longlong *)0x0) {
        local_bd8 = (longlong *)FMemory::Realloc(local_bd8,0,0);
      }
      local_bd0 = 0;
      goto LAB_141929860;
    }
    local_898 = (undefined4)local_b68;
    uStack_894 = local_b68._4_4_;
    uStack_890 = uStack_b60;
    uStack_88c = uStack_b5c;
    uVar8 = FUN_14187cd30(&local_bc8,param_1,&local_898);
    local_a60 = 0;
    local_a48 = 1;
    local_a70 = 0x3f800000;
    uStack_a6c = 0;
    uStack_a68 = 0x3f800000;
    uStack_a64 = 0x3f800000;
    local_a40 = 0;
    local_a58 = 0;
    plStack_a50 = (longlong *)0x0;
    local_a38 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_a40,uVar8);
    FUN_140692440(lVar9 + 0x250,&local_a70);
    *(undefined1 *)(lVar9 + 0x278) = local_a48;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x280,&local_a40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a40);
    plVar14 = plStack_a50;
    if (plStack_a50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_a50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_a50)(plStack_a50);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if (local_bc0 == 0) {
LAB_141929983:
      if (local_bc8 != (longlong *)0x0) {
        FMemory::Free(local_bc8);
      }
    }
    else if (local_bc8 != (longlong *)0x0) {
      (**(code **)(*local_bc8 + 0x28))(local_bc8,0);
      if (local_bc8 != (longlong *)0x0) {
        local_bc8 = (longlong *)FMemory::Realloc(local_bc8,0,0);
      }
      local_bc0 = 0;
      goto LAB_141929983;
    }
    local_888 = (undefined4)local_c18;
    uStack_884 = local_c18._4_4_;
    uStack_880 = uStack_c10;
    uStack_87c = uStack_c0c;
    uVar8 = FUN_14187cd30(&local_bb8,param_1,&local_888);
    local_9a0 = 0;
    local_988 = 1;
    local_9b0 = 0x3f800000;
    uStack_9ac = 0;
    uStack_9a8 = 0x3f800000;
    uStack_9a4 = 0x3f800000;
    local_980 = 0;
    local_998 = 0;
    plStack_990 = (longlong *)0x0;
    local_978 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_980,uVar8);
    FUN_140692440(lVar9 + 0x210,&local_9b0);
    *(undefined1 *)(lVar9 + 0x238) = local_988;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x240,&local_980);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_980);
    plVar14 = plStack_990;
    if (plStack_990 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_990 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_990)(plStack_990);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if (local_bb0 == 0) {
LAB_141929aa6:
      if (local_bb8 != (longlong *)0x0) {
        FMemory::Free(local_bb8);
      }
    }
    else if (local_bb8 != (longlong *)0x0) {
      (**(code **)(*local_bb8 + 0x28))(local_bb8,0);
      if (local_bb8 != (longlong *)0x0) {
        local_bb8 = (longlong *)FMemory::Realloc(local_bb8,0,0);
      }
      local_bb0 = 0;
      goto LAB_141929aa6;
    }
    *(undefined4 *)(lVar9 + 0x118) = *(undefined4 *)(param_1 + 0x420);
    local_b50 = (longlong *)operator_new(0x398);
    if (local_b50 == (longlong *)0x0) {
      local_b50 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(local_b50 + 1) = 1;
      *(undefined4 *)((longlong)local_b50 + 0xc) = 1;
      *local_b50 = (longlong)&PTR_FUN_144d61068;
      if (local_b50 != (longlong *)0xfffffffffffffff0) {
        SBorder::SBorder();
      }
    }
    local_b58 = local_b50 + 2;
    FUN_14044f790(&local_b58);
    local_b48 = local_c26;
    local_c78 = 0x388;
    SWidget::SetDebugInfo
              (local_b58,"SBorder",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
               ,0x1ad);
    uVar8 = FUN_14188d200(lVar9,&local_a90);
    uVar10 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
             Expose<SListView<TSharedPtr<FString,1>_>_>(&local_b58,param_1 + 0x488);
    puVar16 = (undefined8 *)FUN_1418d3ed0(uVar10,local_868,uVar8);
    plVar14 = (longlong *)puVar16[1];
    local_a80 = *puVar16;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_a78 = plVar14;
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_a80);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if (local_860 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_860 + 1;
      lVar9 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_860)(local_860);
        LOCK();
        piVar2 = (int *)((longlong)local_860 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_860 + 8))(local_860,1);
        }
      }
    }
    plVar14 = local_b50;
    if (local_b50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b50)(local_b50);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    FUN_14188af70(local_308);
    goto LAB_141929c5c;
  }
  puVar16 = (undefined8 *)0x0;
  local_938 = 1;
  local_948 = 0;
  uStack_940 = 0;
  local_930 = 0;
  local_928 = 0;
  uVar8 = FUN_14183ac90();
  local_c18 = FUN_141948a30;
  local_a18 = *(longlong *)(param_2 + 8);
  local_b98 = FUN_1419489d0;
  local_ba8 = FUN_141948800;
  local_a20 = *(undefined8 *)param_2;
  local_ab8 = 1;
  local_ab0 = 0;
  local_aa8 = 0;
  uStack_c10 = 0;
  uStack_b90 = 0;
  uStack_ba0 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  if (local_a18 != 0) {
    LOCK();
    *(int *)(local_a18 + 8) = *(int *)(local_a18 + 8) + 1;
    UNLOCK();
    uVar17 = (undefined4)local_948;
    uVar18 = local_948._4_4_;
    uVar19 = (undefined4)uStack_940;
    uVar20 = uStack_940._4_4_;
  }
  local_ac0 = uVar8;
  lVar9 = FUN_141886d30(local_5b8);
  *(undefined8 *)(lVar9 + 0x188) = uVar8;
  *(undefined1 *)(lVar9 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x198,&local_ab0);
  *(undefined1 *)(lVar9 + 0x130) = 1;
  *(undefined4 *)(lVar9 + 0x120) = uVar17;
  *(undefined4 *)(lVar9 + 0x124) = uVar18;
  *(undefined4 *)(lVar9 + 0x128) = uVar19;
  *(undefined4 *)(lVar9 + 300) = uVar20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x138,&local_930);
  local_b38 = (longlong *)operator_new(0x398);
  if (local_b38 == (longlong *)0x0) {
    local_b38 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_b38 + 1) = 1;
    *(undefined4 *)((longlong)local_b38 + 0xc) = 1;
    *local_b38 = (longlong)&PTR_FUN_144d61068;
    if (local_b38 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  local_b40 = local_b38 + 2;
  FUN_14044f790(&local_b40);
  local_b30 = &local_c28;
  local_c78 = 0x388;
  SWidget::SetDebugInfo
            (local_b40,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
             ,0x19f);
  uVar8 = FUN_14188d200(lVar9,&local_a20);
  uVar10 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_b40,param_1 + 0x488);
  puVar11 = (undefined8 *)FUN_1418d3ed0(uVar10,local_8d0,uVar8);
  local_a10 = *puVar11;
  local_a08 = puVar11[1];
  if (local_a08 != 0) {
    LOCK();
    *(int *)(local_a08 + 8) = *(int *)(local_a08 + 8) + 1;
    UNLOCK();
  }
  local_960 = (code)0x1;
  local_970 = 0;
  uStack_968 = 0;
  local_8f8 = (undefined4)local_c18;
  uStack_8f4 = local_c18._4_4_;
  uStack_8f0 = uStack_c10;
  uStack_8ec = uStack_c0c;
  FUN_1418c8cd0(local_958,param_1,&local_8f8);
  puVar12 = (undefined8 *)operator_new(0x88);
  puVar11 = puVar16;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar12);
    *puVar12 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar11 = puVar12;
  }
  pcVar13 = (code *)SVerticalBox::FSlot::AutoHeight(puVar11);
  pcVar13[0x58] = local_960;
  *(undefined4 *)(pcVar13 + 0x48) = (undefined4)local_970;
  *(undefined4 *)(pcVar13 + 0x4c) = local_970._4_4_;
  *(undefined4 *)(pcVar13 + 0x50) = (undefined4)uStack_968;
  *(undefined4 *)(pcVar13 + 0x54) = uStack_968._4_4_;
  local_c18 = pcVar13;
  TBaseDelegate<FSlateBrush_const_*>::operator=(pcVar13 + 0x60,local_958);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_958);
  pcVar13[0x21] = (code)0x2;
  lVar9 = SImage::FArguments::FArguments(local_858);
  local_908 = (undefined4)local_ba8;
  uStack_904 = local_ba8._4_4_;
  uStack_900 = uStack_ba0;
  uStack_8fc = uStack_b9c;
  uVar8 = FUN_1417dd6e0(&local_c08,param_1,&local_908);
  local_b28 = 0;
  local_b20 = 1;
  local_b18 = 0;
  local_b10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_b18,uVar8);
  *(undefined8 *)(lVar9 + 0x108) = local_b28;
  *(undefined1 *)(lVar9 + 0x110) = local_b20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x118,&local_b18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b18);
  if (local_c00 == 0) {
LAB_141929095:
    if (local_c08 != (longlong *)0x0) {
      FMemory::Free(local_c08);
    }
  }
  else if (local_c08 != (longlong *)0x0) {
    (**(code **)(*local_c08 + 0x28))(local_c08,0);
    if (local_c08 != (longlong *)0x0) {
      local_c08 = (longlong *)FMemory::Realloc(local_c08,0,0);
    }
    local_c00 = 0;
    goto LAB_141929095;
  }
  local_918 = (undefined4)local_b98;
  uStack_914 = local_b98._4_4_;
  uStack_910 = uStack_b90;
  uStack_90c = uStack_b8c;
  uVar8 = FUN_14187cd30(&local_bf8,param_1,&local_918);
  local_9e0 = 0;
  local_9c8 = 1;
  local_9f0 = 0x3f800000;
  uStack_9ec = 0;
  uStack_9e8 = 0x3f800000;
  uStack_9e4 = 0x3f800000;
  local_9c0 = 0;
  local_9d8 = 0;
  plStack_9d0 = (longlong *)0x0;
  local_9b8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_9c0,uVar8);
  FUN_140692440(lVar9 + 0x128,&local_9f0);
  *(undefined1 *)(lVar9 + 0x150) = local_9c8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x158,&local_9c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_9c0);
  plVar14 = plStack_9d0;
  if (plStack_9d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_9d0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_9d0)(plStack_9d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_bf0 == 0) {
LAB_1419291b8:
    if (local_bf8 != (longlong *)0x0) {
      FMemory::Free(local_bf8);
    }
  }
  else if (local_bf8 != (longlong *)0x0) {
    (**(code **)(*local_bf8 + 0x28))(local_bf8,0);
    if (local_bf8 != (longlong *)0x0) {
      local_bf8 = (longlong *)FMemory::Realloc(local_bf8,0,0);
    }
    local_bf0 = 0;
    goto LAB_1419291b8;
  }
  local_b80 = (longlong *)FUN_140c61c00();
  plVar14 = local_b80 + 2;
  local_b88 = plVar14;
  FUN_14044f790(&local_b88,plVar14);
  local_b78 = &local_c27;
  local_c78 = 0x278;
  SWidget::SetDebugInfo
            (plVar14,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
             ,0x196);
  puVar11 = (undefined8 *)FUN_14188e090(&local_b88,local_878,lVar9);
  local_a00 = *puVar11;
  local_9f8 = puVar11[1];
  if (local_9f8 != 0) {
    LOCK();
    *(int *)(local_9f8 + 8) = *(int *)(local_9f8 + 8) + 1;
    UNLOCK();
  }
  puVar11 = (undefined8 *)operator_new(0x88);
  if (puVar11 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar11);
    *puVar11 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar16 = puVar11;
  }
  lVar9 = SVerticalBox::FSlot::AutoHeight(puVar16);
  *(undefined2 *)(lVar9 + 0x20) = 0x202;
  plVar14 = (longlong *)operator_new(0x248);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144044b58;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar1 = plVar14 + 2;
  local_8e8 = plVar1;
  local_8e0 = plVar14;
  FUN_14044f790(&local_8e8,plVar1);
  local_c78 = 0x238;
  SWidget::SetDebugInfo
            (plVar1,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
             ,400);
  uVar8 = FUN_140692760(local_c18,&local_a10);
  uVar10 = FUN_140692760(lVar9,&local_a00);
  uVar15 = SCanvas::FArguments::FArguments(local_6d8);
  uVar10 = SOverlay::FArguments::operator+(uVar15,uVar10);
  lVar9 = SOverlay::FArguments::operator+(uVar10,uVar8);
  local_c68 = *(undefined4 *)(lVar9 + 0x90);
  local_c38 = lVar9 + 0xf8;
  local_c50 = lVar9 + 0xe8;
  local_c40 = *(undefined1 *)(lVar9 + 0xf1);
  local_c58 = lVar9 + 200;
  local_c60 = lVar9 + 0x98;
  local_c48 = *(undefined1 *)(lVar9 + 0xf0);
  local_c70 = lVar9 + 0x78;
  local_c78 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SHorizontalBox::Construct(plVar1,lVar9);
  if (((char)plVar14[5] < '\0') || (cVar5 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar6;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_aa0 = plVar1;
  local_a98 = plVar14;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_aa0);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar1 = plVar14 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar1 = plVar14 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_5d0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_6d8);
  if (local_870 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_870 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_870)(local_870);
      LOCK();
      piVar2 = (int *)((longlong)local_870 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_870 + 8))(local_870,1);
      }
    }
  }
  plVar14 = local_b80;
  if (local_b80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b80 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b80)(local_b80);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b80 + 8))(local_b80,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_6f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_700);
  if (local_710 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_710 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_710)(local_710);
      LOCK();
      piVar2 = (int *)((longlong)local_710 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_710 + 8))(local_710,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_740);
  FUN_140456c70(local_858);
  if (local_8c8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_8c8 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_8c8)(local_8c8);
      LOCK();
      piVar2 = (int *)((longlong)local_8c8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_8c8 + 8))(local_8c8,1);
      }
    }
  }
  plVar14 = local_b38;
  if (local_b38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b38 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b38)(local_b38);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_14188af70(local_5b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_ab0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_930);
  param_2 = local_b68;
LAB_141929c5c:
  plVar14 = *(longlong **)(param_2 + 8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 141929ce0 FUN_141929ce0 body=315 status=ok
// SIG undefined FUN_141929ce0(void)

undefined8 * FUN_141929ce0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x1a0) != 0) && (*(longlong **)(param_1 + 0x198) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x18))(), cVar4 != '\0')) {
    plVar7 = plVar8;
    if (*(int *)(param_1 + 0x1a0) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x198);
    }
    uVar5 = (**(code **)(*plVar7 + 0x38))();
    *(undefined1 *)(param_1 + 400) = uVar5;
  }
  if (*(char *)(param_1 + 400) != '\0') {
    if (((*(int *)(param_1 + 0x1b0) != 0) && (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x1b0) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x1a8);
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,param_2);
      return param_2;
    }
    puVar6 = (undefined8 *)FUN_14196cff0(*(undefined8 *)(param_1 + 0x18),local_18,param_1 + 0x200);
    *param_2 = *puVar6;
    lVar3 = puVar6[1];
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_10 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141929e20 BuildPasswordString body=170 status=ok
// SIG undefined BuildPasswordString(void)

longlong * FSlatePasswordRun::BuildPasswordString(longlong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (ulonglong)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_2) {
    if (0 < (int)(param_2 + 1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    }
    if (0 < (int)param_2) {
      do {
        iVar1 = (int)param_1[1];
        iVar3 = iVar1 + -1;
        if (iVar1 < 1) {
          iVar3 = 0;
        }
        iVar1 = (iVar1 < 1) + 1 + iVar1;
        *(int *)(param_1 + 1) = iVar1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
        }
        *(undefined2 *)(*param_1 + (longlong)iVar3 * 2) = 0x2022;
        *(undefined2 *)(*param_1 + 2 + (longlong)iVar3 * 2) = 0;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return param_1;
}



// FUNCTION 141929ed0 CacheDesiredSize body=58 status=ok
// SIG undefined CacheDesiredSize(void)

void SEditableText::CacheDesiredSize(longlong param_1,undefined4 param_2)

{
  FUN_14195b960();
  FSlateEditableTextLayout::CacheDesiredSize(*(undefined8 *)(param_1 + 0x220),param_2);
  SWidget::CacheDesiredSize(param_1,param_2);
  return;
}



// FUNCTION 141929f10 CalculateCaretWidth body=34 status=ok
// SIG undefined CalculateCaretWidth(void)

float FTextEditHelper::CalculateCaretWidth(float param_1)

{
  param_1 = param_1 * 0.08;
  if (param_1 < 1.0) {
    return 1.0;
  }
  if (2.0 <= param_1) {
    param_1 = 2.0;
  }
  return param_1;
}



// FUNCTION 141929f40 CalculateLineRangesFromString body=371 status=ok
// SIG undefined CalculateLineRangesFromString(void)

void FTextRange::CalculateLineRangesFromString(undefined8 *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    psVar8 = &DAT_143f3eda8;
    psVar9 = psVar8;
  }
  else {
    psVar8 = (short *)*param_1;
    psVar9 = psVar8;
  }
  do {
    if ((psVar8 == (short *)0x0) || (sVar1 = *psVar8, sVar1 == 0)) {
      iVar2 = *(int *)(param_1 + 1);
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar4 = -1;
      }
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = -1;
        iVar4 = 0;
      }
      if (iVar7 <= iVar4) {
        iVar4 = (int)param_2[1];
        if (iVar2 == 0) {
          iVar6 = 0;
        }
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        *(ulonglong *)(*param_2 + (longlong)iVar4 * 8) = CONCAT44(iVar6,iVar7);
      }
      return;
    }
    if ((sVar1 == 0xd) && (psVar8[1] == 10)) {
      bVar3 = true;
LAB_141929fd9:
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(ulonglong *)(*param_2 + (longlong)iVar2 * 8) =
           CONCAT44((int)((longlong)psVar8 - (longlong)psVar9 >> 1),iVar7);
      psVar5 = psVar8 + 1;
      if (!bVar3) {
        psVar5 = psVar8;
      }
      iVar7 = (int)((longlong)psVar5 - (longlong)psVar9 >> 1) + 1;
      psVar8 = psVar5;
    }
    else {
      bVar3 = false;
      if (((ushort)(sVar1 - 10U) < 4) ||
         ((sVar1 == 0x85 || (bVar3 = false, (ushort)(sVar1 + 0xdfd8U) < 2)))) goto LAB_141929fd9;
    }
    psVar8 = psVar8 + 1;
  } while( true );
}



// FUNCTION 14192a0c0 CalculateLineTextDirection body=134 status=ok
// SIG undefined CalculateLineTextDirection(void)

void FTextLayout::CalculateLineTextDirection(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_2 + 0xd);
  if ((bVar3 & 2) != 0) {
    cVar1 = *(char *)(param_1 + 0x8a);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x89) == '\x01') {
        *(undefined1 *)(param_2 + 4) = 0;
        *(byte *)(param_2 + 0xd) = bVar3 & 0xfd;
        return;
      }
      uVar2 = TextBiDi::ComputeBaseDirection(*param_2);
      bVar3 = *(byte *)(param_2 + 0xd);
      *(undefined1 *)(param_2 + 4) = uVar2;
    }
    else {
      if (cVar1 == '\x01') {
        *(undefined1 *)(param_2 + 4) = 0;
        *(byte *)(param_2 + 0xd) = bVar3 & 0xfd;
        return;
      }
      if (cVar1 == '\x02') {
        *(undefined1 *)(param_2 + 4) = 1;
        *(byte *)(param_2 + 0xd) = bVar3 & 0xfd;
        return;
      }
    }
    *(byte *)(param_2 + 0xd) = bVar3 & 0xfd;
  }
  return;
}



// FUNCTION 14192a150 FUN_14192a150 body=396 status=ok
// SIG undefined FUN_14192a150(void)

undefined8 FUN_14192a150(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar6;
  local_20 = (longlong *)puVar6[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x3a0);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  plVar10 = plVar8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, plVar10 = (longlong *)0x0, !bVar11) {
      LOCK();
      bVar11 = iVar5 == (int)plVar2[1];
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar11) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 0x398);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  cVar4 = FUN_141902310(plVar10,&local_28);
  if (cVar4 == '\0') {
LAB_14192a258:
    uVar9 = 0;
  }
  else {
    if (((*(int *)(param_1 + 0x488) != 0) && (*(longlong **)(param_1 + 0x480) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x488) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x480);
      }
      cVar4 = (**(code **)(*plVar8 + 0x38))(plVar8);
      if (cVar4 == '\0') goto LAB_14192a258;
    }
    uVar9 = 1;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 14192a2e0 CanTypeCharacter body=123 status=ok
// SIG undefined CanTypeCharacter(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SEditableText::CanTypeCharacter(longlong param_1,short param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(int *)(param_1 + 0x1c0) != 0) && (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x1c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014192a32f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x38))
                          (*(longlong **)(param_1 + 0x1b8),param_2);
        return (bool)uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x00014192a345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))(0,param_2);
      return (bool)uVar2;
    }
  }
  return param_2 != 9;
}



// FUNCTION 14192a360 FUN_14192a360 body=245 status=ok
// SIG undefined FUN_14192a360(void)

void FUN_14192a360(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x18);
      if (*(int *)(lVar9 + 0x60 + lVar4) != 0) {
        iVar7 = *(int *)(lVar9 + 0x60 + lVar4);
        lVar4 = lVar9 + lVar4;
        if (iVar7 != 0) {
          plVar8 = (longlong *)(*(longlong *)(lVar4 + 0x58) + 0x18);
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
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar8 = plVar8 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        *(undefined4 *)(lVar4 + 0x60) = 0;
        if (*(int *)(lVar4 + 100) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(lVar4 + 0x58,0);
        }
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x70;
    } while (iVar10 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14192a460 FUN_14192a460 body=289 status=ok
// SIG undefined FUN_14192a460(void)

void FUN_14192a460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x18) + 0x48;
    do {
      TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
      ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(lVar7 + 0x10);
      TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>::
      ~TArray<FCachedCompositeFontData::FCachedFontRange,TSizedDefaultAllocator<32>_>(lVar7);
      if (*(longlong *)(lVar7 + -0x10) != 0) {
        FMemory::Free();
      }
      TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
      ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(lVar7 + -0x20);
      plVar4 = *(longlong **)(lVar7 + -0x30);
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
      plVar4 = *(longlong **)(lVar7 + -0x40);
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
      lVar7 = lVar7 + 0x70;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x18,0);
  }
  FTextLayout::ClearView(param_1);
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
  return;
}



// FUNCTION 14192a590 FUN_14192a590 body=245 status=ok
// SIG undefined FUN_14192a590(void)

void FUN_14192a590(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x18);
      if (*(int *)(lVar9 + 0x50 + lVar4) != 0) {
        iVar7 = *(int *)(lVar9 + 0x50 + lVar4);
        lVar4 = lVar9 + lVar4;
        if (iVar7 != 0) {
          plVar8 = (longlong *)(*(longlong *)(lVar4 + 0x48) + 0x18);
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
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar8 = plVar8 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        *(undefined4 *)(lVar4 + 0x50) = 0;
        if (*(int *)(lVar4 + 0x54) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(lVar4 + 0x48,0);
        }
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x70;
    } while (iVar10 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14192a690 ClearView body=275 status=ok
// SIG undefined ClearView(void)

void FTextLayout::ClearView(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  for (iVar3 = *(int *)(param_1 + 0x30); iVar3 != 0; iVar3 = iVar3 + -1) {
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar2 + 0x20);
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar2 + 0x10);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar2);
    lVar2 = lVar2 + 0x58;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined4 *)(param_1 + 100) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x48,0);
  }
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x80);
    do {
      uVar1 = (longlong)*(int *)(param_1 + 0x80) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar2 = param_1 + 0x70;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar1 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14192a7b0 FUN_14192a7b0 body=342 status=ok
// SIG undefined FUN_14192a7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14192a7b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_50 = param_1 + 0x88;
  local_58 = *(undefined2 *)(param_1 + 0x98);
  FUN_141937820(&local_38,param_1 + 0x18,param_1 + 0x78,*(undefined8 *)(param_1 + 0x90));
  plVar4 = *(longlong **)(param_1 + 0xa8);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  puVar7 = (undefined8 *)(local_38 + 0xa0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = uVar5;
  plStack_40 = plVar4;
  if (&local_48 != puVar7) {
    local_48 = *puVar7;
    plStack_40 = *(longlong **)(local_38 + 0xa8);
    *puVar7 = uVar5;
    *(longlong **)(local_38 + 0xa8) = plVar4;
    local_28 = uVar5;
    plStack_20 = plVar4;
  }
  plVar4 = plStack_40;
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
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_30;
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14192a910 FUN_14192a910 body=167 status=ok
// SIG undefined FUN_14192a910(void)

undefined8 * FUN_14192a910(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)
           FUN_141937b70(local_18,param_1 + 0x18,param_1 + 0x78,param_1 + 0x88,param_1 + 0x268);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14192a9c0 FUN_14192a9c0 body=167 status=ok
// SIG undefined FUN_14192a9c0(void)

undefined8 * FUN_14192a9c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)
           FUN_141938010(local_18,param_1 + 0x18,param_1 + 0x78,param_1 + 0x88,param_1 + 0x268);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14192aa70 FUN_14192aa70 body=351 status=ok
// SIG undefined FUN_14192aa70(void)

undefined8 * FUN_14192aa70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  local_28 = (longlong *)0x0;
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
    while (plVar6 = local_28, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          local_28 = *(longlong **)(param_1 + 0x18);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_20 = plVar6;
  puVar5 = (undefined8 *)
           FSlateWidgetRun::Create
                     (local_18,&local_28,param_1 + 0x28,param_1 + 0x88,param_1 + 0xa0,param_1 + 0x98
                     );
  *param_2 = *puVar5;
  lVar3 = puVar5[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
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
  }
  return param_2;
}



// FUNCTION 14192abd0 FUN_14192abd0 body=1199 status=ok
// SIG undefined FUN_14192abd0(void)

void FUN_14192abd0(longlong param_1,double param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  float *pfVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = 3.4028235e+38;
  fVar14 = -3.4028235e+38;
  dVar12 = param_2;
  if ((param_3 & 0xfffffffd) == 0) {
    pfVar3 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x488);
    if (*(char *)(pfVar3 + 1) == '\0') {
      fVar9 = 3.4028235e+38;
    }
    else {
      fVar9 = *pfVar3;
    }
    pfVar3 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x468);
    if (*(char *)(pfVar3 + 1) == '\0') {
      fVar8 = -3.4028235e+38;
    }
    else {
      fVar8 = *pfVar3;
    }
    dVar12 = (double)fVar8;
    if ((dVar12 <= param_2) && (dVar12 = param_2, (double)fVar9 <= param_2)) {
      dVar12 = (double)fVar9;
    }
  }
  pfVar3 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x448);
  if (*(char *)(pfVar3 + 1) == '\0') {
    fVar9 = 3.4028235e+38;
  }
  else {
    fVar9 = *pfVar3;
  }
  pfVar3 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x428);
  if (*(char *)(pfVar3 + 1) == '\0') {
    fVar8 = -3.4028235e+38;
  }
  else {
    fVar8 = *pfVar3;
  }
  dVar11 = (double)fVar8;
  if (((double)fVar8 <= dVar12) && (dVar11 = (double)fVar9, dVar12 <= (double)fVar9)) {
    dVar11 = dVar12;
  }
  plVar7 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x300) == 0) || (*(longlong **)(param_1 + 0x2f8) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar1 == '\0')) {
    if ((*(int *)(param_1 + 0x300) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x2f8), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      if (*(longlong *)(param_1 + 0x2f8) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x2f8),0,0);
        *(undefined8 *)(param_1 + 0x2f8) = uVar4;
      }
      *(undefined4 *)(param_1 + 0x300) = 0;
    }
    *(float *)(param_1 + 0x2f0) = (float)dVar11;
    *(undefined1 *)(param_1 + 0x2f4) = 1;
  }
  pfVar3 = (float *)(param_1 + 0x2f0);
  if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar1 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x300) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x2f8);
    }
    fVar9 = (float)(**(code **)(*plVar6 + 0x38))();
    *pfVar3 = fVar9;
  }
  if ((param_3 == 0) && (*pfVar3 != *(float *)(param_1 + 0x530))) {
    dVar11 = (double)*pfVar3;
  }
  *(double *)(param_1 + 0x520) = dVar11;
  if ((param_3 & 0xfffffffd) == 0) {
    if (((*(int *)(param_1 + 0x3c0) != 0) && (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x18))(), cVar1 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x3c0) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x3b8);
      }
      uVar10 = (**(code **)(*plVar6 + 0x38))();
      *(undefined4 *)(param_1 + 0x3b0) = uVar10;
    }
    if (*(float *)(param_1 + 0x3b0) != 0.0) {
      dVar11 = (double)SSpinBox<float>::Snap(dVar11,(double)*(float *)(param_1 + 0x3b0));
    }
  }
  if (((*(int *)(param_1 + 0x4b8) != 0) && (*(longlong **)(param_1 + 0x4b0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x18))(), cVar1 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x4b8) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x4b0);
    }
    uVar2 = (**(code **)(*plVar6 + 0x38))();
    *(undefined1 *)(param_1 + 0x4a8) = uVar2;
  }
  if (*(char *)(param_1 + 0x4a8) != '\0') {
    if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar1 != '\0')) {
      plVar6 = plVar7;
      if (*(int *)(param_1 + 0x300) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x2f8);
      }
      fVar9 = (float)(**(code **)(*plVar6 + 0x38))();
      *pfVar3 = fVar9;
    }
    pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x488);
    if (*(char *)(pfVar5 + 1) == '\0') {
      fVar9 = 3.4028235e+38;
    }
    else {
      fVar9 = *pfVar5;
    }
    if (fVar9 < *pfVar3) {
      pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x488);
      if (*(char *)(pfVar5 + 1) != '\0') {
        fVar13 = *pfVar5;
      }
      pfVar5 = (float *)TAttribute<float>::Get(pfVar3);
      FUN_141928260(param_1,*pfVar5 - fVar13,1);
      goto LAB_14192afbe;
    }
  }
  if (((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x18))(), cVar1 != '\0')) {
    plVar6 = plVar7;
    if (*(int *)(param_1 + 0x4d0) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x4c8);
    }
    uVar2 = (**(code **)(*plVar6 + 0x38))();
    *(undefined1 *)(param_1 + 0x4c0) = uVar2;
  }
  if (*(char *)(param_1 + 0x4c0) != '\0') {
    pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x468);
    if (*(char *)(pfVar5 + 1) == '\0') {
      fVar13 = -3.4028235e+38;
    }
    else {
      fVar13 = *pfVar5;
    }
    pfVar5 = (float *)TAttribute<float>::Get(pfVar3);
    if (*pfVar5 <= fVar13 && fVar13 != *pfVar5) {
      pfVar5 = (float *)TAttribute<TOptional<float>_>::Get(param_1 + 0x468);
      if (*(char *)(pfVar5 + 1) != '\0') {
        fVar14 = *pfVar5;
      }
      pfVar5 = (float *)TAttribute<float>::Get(pfVar3);
      FUN_1419284b0(param_1,*pfVar5 - fVar14,1);
    }
  }
LAB_14192afbe:
  if (param_3 - 1 < 2) {
    TBaseDelegate<void,float,enum_ETextCommit::Type>::ExecuteIfBound
              (param_1 + 0x318,(float)dVar11,param_4);
  }
  TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x308,(float)dVar11);
  if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x300) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x2f8);
    }
    fVar13 = (float)(**(code **)(*plVar7 + 0x38))(plVar7);
    *pfVar3 = fVar13;
  }
  *(float *)(param_1 + 0x530) = *pfVar3;
  cVar1 = FUN_141846080(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x510) = 0;
    *(undefined4 *)(param_1 + 0x514) = 0xffffffff;
  }
  return;
}



// FUNCTION 14192b080 FUN_14192b080 body=156 status=ok
// SIG undefined FUN_14192b080(void)

void FUN_14192b080(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x2d8) != 0) && (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x18))();
    if (cVar2 != '\0') goto LAB_14192b103;
  }
  if ((*(int *)(param_1 + 0x2d8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x2d0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_1 + 0x2d0),0,0);
      *(undefined8 *)(param_1 + 0x2d0) = uVar3;
    }
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c8) = param_2;
  *(undefined1 *)(param_1 + 0x2cc) = 1;
LAB_14192b103:
  TBaseDelegate<void,float>::ExecuteIfBound(param_1 + 0x340,param_2);
  return;
}



// FUNCTION 14192b120 FUN_14192b120 body=66 status=ok
// SIG undefined FUN_14192b120(void)

undefined8 * FUN_14192b120(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (param_1[0x45] == DAT_1469eb218) {
    lVar1 = (**(code **)(*param_1 + 0x210))();
    *param_2 = *(undefined8 *)(lVar1 + 8);
    return param_2;
  }
  FUN_14196ef60();
  return param_2;
}



// FUNCTION 14192b190 FUN_14192b190 body=118 status=ok
// SIG undefined FUN_14192b190(void)

undefined8 * FUN_14192b190(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  if ((*(int *)(param_1 + 0x2b8) != 0) && (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x2b8) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x2b0);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_res8);
      *(undefined8 *)(param_1 + 0x2a0) = local_res8;
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x2a0);
  return param_2;
}



// FUNCTION 14192b210 FUN_14192b210 body=123 status=ok
// SIG undefined FUN_14192b210(void)

float * FUN_14192b210(longlong param_1,float *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  
  FUN_14196ecb0(*(undefined8 *)(param_1 + 0x220));
  if ((*(int *)(param_1 + 0x400) != 0) && (*(longlong **)(param_1 + 0x3f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x400) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x3f8);
      }
      uVar3 = (**(code **)(*plVar2 + 0x38))();
      *(undefined4 *)(param_1 + 0x3f0) = uVar3;
    }
  }
  fVar4 = *(float *)(param_1 + 0x3f0);
  if (*(float *)(param_1 + 0x3f0) <= *param_2) {
    fVar4 = *param_2;
  }
  *param_2 = fVar4;
  return param_2;
}



// FUNCTION 14192b290 FUN_14192b290 body=141 status=ok
// SIG undefined FUN_14192b290(void)

undefined8 * FUN_14192b290(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x220) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x218);
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined8 *)(param_1 + 0x208) = uVar2;
    }
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 8);
    return param_2;
  }
  *param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 14192b320 ComputeDesiredSize body=79 status=ok
// SIG undefined ComputeDesiredSize(void)

float * SMenuAnchor::ComputeDesiredSize(longlong param_1,float *param_2)

{
  float local_res8;
  float local_resc;
  
  SWidget::GetDesiredSize(*(undefined8 *)(**(longlong **)(param_1 + 0x2e8) + 0x20),&local_res8);
  if (local_res8 <= 1.0) {
    local_res8 = 1.0;
  }
  *param_2 = local_res8;
  if (local_resc <= 1.0) {
    local_resc = 1.0;
  }
  param_2[1] = local_resc;
  return param_2;
}



// FUNCTION 14192b3d0 ComputeNewWindowMenuPlacement body=531 status=ok
// SIG undefined ComputeNewWindowMenuPlacement(void)

undefined8 *
SMenuAnchor::ComputeNewWindowMenuPlacement
          (undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  
  FUN_141922840(&local_98,param_3,param_4,param_5);
  fVar1 = *(float *)(param_3 + 8);
  fVar3 = *(float *)(param_3 + 0xc);
  fStack_a4 = *(float *)(param_3 + 0x10);
  local_res10 = fVar1 * local_90 + fVar3;
  local_res14 = fVar1 * local_8c + fStack_a4;
  local_b0 = fVar1 * local_80 + fVar3;
  local_b8 = CONCAT44(fStack_94 * fVar1,local_98 * fVar1);
  fVar4 = fVar1 * local_84 + fStack_a4;
  fStack_a4 = fVar1 * local_7c + fStack_a4;
  fVar3 = fVar1 * local_88 + fVar3;
  fStack_a8 = local_b0;
  if (local_b0 <= fVar3) {
    fStack_a8 = fVar3;
  }
  if (fVar3 <= local_b0) {
    local_b0 = fVar3;
  }
  fStack_ac = fVar4;
  if (fStack_a4 < fVar4) {
    fStack_ac = fStack_a4;
    fStack_a4 = fVar4;
  }
  (**(code **)(*DAT_1469f4590 + 400))
            (DAT_1469f4590,&local_res18,&local_b0,&local_b8,0,&local_res10,local_78);
  fVar1 = *(float *)(param_3 + 8);
  fVar3 = *(float *)(param_3 + 0xc);
  fVar4 = *(float *)(param_3 + 0x10);
  bVar2 = *(byte *)(param_3 + 0x34);
  fVar5 = 1.0 / fVar1;
  param_2[1] = 0x3f800000;
  fVar6 = fVar5 * local_res18 - fVar5 * fVar3;
  *param_2 = CONCAT44(fStack_94,local_98);
  fVar5 = fVar5 * local_res1c - fVar5 * fVar4;
  local_b0 = 1.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 1.0;
  *(undefined4 *)(param_2 + 2) = 0;
  local_a0 = fVar6;
  local_9c = fVar5;
  Concatenate<FTransform2D>((longlong)param_2 + 0x1c,&local_b0,param_3 + 0x1c);
  *(byte *)((longlong)param_2 + 0x34) = *(byte *)((longlong)param_2 + 0x34) & 0xfe;
  *(float *)(param_2 + 1) = fVar1;
  *(byte *)((longlong)param_2 + 0x34) = *(byte *)((longlong)param_2 + 0x34) | bVar2 & 1;
  *(float *)((longlong)param_2 + 0x14) = fVar6;
  *(float *)(param_2 + 3) = fVar5;
  *(float *)((longlong)param_2 + 0xc) = fVar1 * fVar6 + fVar3;
  *(float *)(param_2 + 2) = fVar1 * fVar5 + fVar4;
  return param_2;
}



// FUNCTION 14192b5f0 FUN_14192b5f0 body=275 status=ok
// SIG undefined FUN_14192b5f0(void)

undefined1 FUN_14192b5f0(longlong *param_1)

{
  char cVar1;
  
  if ((((int)param_1[0x18] != 0) && ((longlong *)param_1[0x17] != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x17] + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if ((((int)param_1[0x1f] != 0) && ((longlong *)param_1[0x1e] != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x1e] + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((cVar1 == '\0') &&
     (cVar1 = FSlateEditableTextLayout::ComputeVolatility(param_1[0x44]), cVar1 == '\0')) {
    if (((int)param_1[0x51] != 0) &&
       (((longlong *)param_1[0x50] != (longlong *)0x0 &&
        (cVar1 = (**(code **)(*(longlong *)param_1[0x50] + 0x18))(), cVar1 != '\0')))) {
      return 1;
    }
    cVar1 = TAttribute<FSlateColor>::IsBound(param_1 + 0x52);
    if ((((cVar1 == '\0') &&
         (cVar1 = TAttribute<FSlateBrush_const_*>::IsBound(param_1 + 0x5a), cVar1 == '\0')) &&
        (cVar1 = TAttribute<float>::IsBound(param_1 + 0x5e), cVar1 == '\0')) &&
       ((cVar1 = TAttribute<float>::IsBound(param_1 + 0x61), cVar1 == '\0' &&
        (cVar1 = TAttribute<float>::IsBound(param_1 + 0x7e), cVar1 == '\0')))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14192b710 FUN_14192b710 body=50 status=ok
// SIG undefined FUN_14192b710(void)

ulonglong FUN_14192b710(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if (((*(char *)(param_1 + 0x2a0) != '\0') && (*(longlong *)(param_1 + 0x220) != 0)) &&
     (*(longlong *)(param_1 + 0x228) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x228) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14192b750 FUN_14192b750 body=2380 status=ok
// SIG undefined FUN_14192b750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14192b750(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_538 [32];
  longlong local_518;
  longlong local_510;
  longlong local_508;
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e0;
  longlong local_4d8;
  longlong local_4c8;
  int local_4c0;
  int local_4bc;
  longlong *local_4b8;
  int local_4b0;
  longlong *local_4a8;
  int local_4a0;
  undefined1 local_498;
  undefined1 local_497;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined2 local_460 [4];
  undefined8 local_458;
  undefined4 local_450;
  longlong *local_448;
  longlong *local_440;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  longlong *local_408;
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  plVar9 = (longlong *)(param_1 + 0x4f8);
  local_480 = 0;
  if ((longlong *)(param_2 + 0x108) != plVar9) {
    if ((*(int *)(param_2 + 0x110) == 0) ||
       (plVar7 = *(longlong **)(param_2 + 0x108), plVar7 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x500) != 0) &&
         (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*plVar9 != 0) {
          lVar11 = FMemory::Realloc(*plVar9,0,0);
          *plVar9 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x500) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar9);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x528);
  if ((longlong *)(param_2 + 0x118) != plVar7) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x118), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x530) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x530) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x538);
  if ((longlong *)(param_2 + 0x138) != plVar7) {
    if ((*(int *)(param_2 + 0x140) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x138), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x540) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x540) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a8,param_2 + 0x168);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5f8,param_2 + 0x178);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x608,param_2 + 0x188);
  plVar7 = (longlong *)(param_1 + 0x5e8);
  if ((longlong *)(param_2 + 0x198) != plVar7) {
    if ((*(int *)(param_2 + 0x1a0) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x198), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x5f0) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x5f0) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  TAttribute<enum_ESelectionMode::Type>::operator=(param_1 + 0x3b8,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x630) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x201);
  *(undefined1 *)(param_1 + 0x419) = *(undefined1 *)(param_2 + 0x202);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x204);
  *(undefined1 *)(param_1 + 0x631) = *(undefined1 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x632) = *(undefined1 *)(param_2 + 0x209);
  *(undefined1 *)(param_1 + 0x618) = *(undefined1 *)(param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x619) = *(undefined1 *)(param_2 + 0x211);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x620,param_2 + 0x218);
  pplVar10 = (longlong **)(param_2 + 0x228);
  if (((*(int *)(param_2 + 0x230) == 0) || (*pplVar10 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**pplVar10 + 0x18))(), cVar5 == '\0')) {
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    iVar12 = 2;
    local_4a0 = 2;
    local_4a8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_GetPoolName_144044b88;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar7[2] = lVar11;
    }
    pplVar10 = &local_4a8;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_4b8 = (longlong *)0x0;
    local_4b0 = 0;
    if (((pplVar10 != &local_4b8) && (*(int *)(param_2 + 0x230) != 0)) &&
       (plVar7 = *pplVar10, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_4b8);
    }
    pplVar10 = &local_4b8;
    bVar4 = true;
    bVar3 = false;
    plVar7 = local_4a8;
    iVar12 = local_4a0;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x508,pplVar10);
  if (bVar3) {
    if (iVar12 != 0) {
      if (plVar7 == (longlong *)0x0) goto LAB_14192bac6;
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      plVar7 = (longlong *)FMemory::Realloc(plVar7,0,0);
      local_4a8 = plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
LAB_14192bac6:
  if (bVar4) {
    if (local_4b0 != 0) {
      if (local_4b8 == (longlong *)0x0) goto LAB_14192bb1c;
      (**(code **)(*local_4b8 + 0x28))(local_4b8,0);
      if (local_4b8 != (longlong *)0x0) {
        local_4b8 = (longlong *)FMemory::Realloc(local_4b8,0,0);
      }
      local_4b0 = 0;
    }
    if (local_4b8 != (longlong *)0x0) {
      FMemory::Free(local_4b8);
    }
  }
LAB_14192bb1c:
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x518,param_2 + 0x238);
  local_4c8 = 0;
  local_4bc = 0;
  local_4c0 = 0;
  iVar12 = 0;
  if (((*(int *)(param_1 + 0x500) == 0) || (iVar12 = 0, (longlong *)*plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), iVar12 = local_4c0, cVar5 == '\0')) {
    local_4c0 = (0x23 - (uint)(iVar12 != 0)) + iVar12;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar12);
    }
    lVar11 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar11 * 2),L"n OnGene",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar11 * 2),L"rateRow.",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar11 * 2) = 0xa0020;
    *(undefined2 *)(local_4c8 + 0x44 + lVar11 * 2) = 0;
  }
  iVar12 = local_4c0;
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    lVar11 = (longlong)local_4c0;
    local_4c0 = (0x24 - (uint)(local_4c0 != 0)) + local_4c0;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar12);
    }
    lVar11 = lVar11 - (ulonglong)(iVar12 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar11 * 2),L" ListIte",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar11 * 2),L"msSource",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar11 * 2) = 0x20002e;
    *(undefined2 *)(local_4c8 + 0x44 + lVar11 * 2) = 10;
    *(undefined2 *)(local_4c8 + 0x46 + lVar11 * 2) = 0;
  }
  if ((local_4c0 == 0) || (local_4c0 + -1 < 1)) {
    local_508 = param_2 + 0x128;
    local_460[0] = 0x103;
    local_510 = param_2 + 0x1d8;
    local_518 = param_2 + 0x1c0;
    local_458 = 0;
    local_478 = 0;
    local_450 = 0;
    local_474 = 1;
    local_470 = 0;
    local_468 = 0;
    FUN_1419b0690(param_1,&local_478,param_2 + 0x150,local_460);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_470);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_458);
    if (*(longlong *)(param_1 + 0x310) != 0) {
      SScrollBox::SetConsumeMouseWheel
                (*(longlong *)(param_1 + 0x310),*(undefined1 *)(param_2 + 0x200));
      local_498 = *(undefined1 *)(param_2 + 0x1e8);
      local_497 = *(undefined1 *)(param_2 + 0x1e9);
      local_490 = 0;
      local_488 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_490,param_2 + 0x1f0);
      lVar11 = *(longlong *)(param_1 + 0x310);
      *(undefined1 *)(lVar11 + 0x388) = local_498;
      *(undefined1 *)(lVar11 + 0x389) = local_497;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x390,&local_490);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_490);
    }
  }
  else {
    uVar8 = FText::FromString(local_3f0,&local_4c8);
    FText::FText(local_438,uVar8);
    local_420 = 1;
    local_418 = 0;
    local_410 = 0;
    lVar11 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar11 + 0x108,local_438);
    *(undefined1 *)(lVar11 + 0x120) = local_420;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_418);
    plVar9 = (longlong *)operator_new(0x660);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144043520;
      if (plVar9 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar7 = plVar9 + 2;
    local_408 = plVar7;
    local_400 = plVar9;
    FUN_14044f790(&local_408,plVar7);
    local_518 = 0x650;
    SWidget::SetDebugInfo
              (plVar7,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Views/SListView.h",
               0xc3);
    local_4d8 = lVar11 + 0xf8;
    local_4f0 = lVar11 + 0xe8;
    local_4e0 = *(undefined1 *)(lVar11 + 0xf1);
    local_4f8 = lVar11 + 200;
    local_500 = lVar11 + 0x98;
    local_4e8 = *(undefined1 *)(lVar11 + 0xf0);
    local_510 = lVar11 + 0x78;
    local_518 = lVar11 + 0x60;
    local_508 = CONCAT44(local_508._4_4_,*(undefined4 *)(lVar11 + 0x90));
    SWidget::SWidgetConstruct(plVar7,lVar11,lVar11 + 0x30,lVar11 + 0x40);
    FUN_1419b0120(plVar7,lVar11);
    if (((char)plVar9[5] < '\0') || (cVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7), cVar5 != '\0'))
    {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x238) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    local_448 = plVar7;
    local_440 = plVar9;
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_448);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_430 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_430)(local_430);
        LOCK();
        piVar1 = (int *)((longlong)local_430 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_430 + 8))(local_430,1);
        }
      }
    }
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_3e8 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_3e8)(local_3e8);
        LOCK();
        piVar1 = (int *)((longlong)local_3e8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_3e8 + 8))(local_3e8,1);
        }
      }
    }
  }
  if (local_4c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14192c0a0 FUN_14192c0a0 body=6712 status=ok
// SIG undefined FUN_14192c0a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14192c0a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong **pplVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  longlong *plVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1068 [32];
  undefined8 local_1048;
  undefined1 local_1038;
  undefined1 local_1037;
  undefined1 local_1036;
  undefined1 local_1035 [5];
  longlong *local_1030;
  longlong *local_1028;
  longlong *plStack_1020;
  undefined4 local_1018;
  longlong *local_1010;
  int local_1008;
  longlong *local_1000;
  int local_ff8;
  longlong *local_ff0;
  int local_fe8;
  longlong *local_fe0;
  int local_fd8;
  longlong *local_fd0;
  int local_fc8;
  longlong *local_fc0;
  int local_fb8;
  longlong *local_fb0;
  int local_fa8;
  longlong *local_fa0;
  longlong *local_f98;
  undefined4 local_f90;
  undefined1 local_f8c;
  undefined8 local_f88;
  undefined4 local_f80;
  undefined4 local_f78;
  undefined1 local_f74;
  undefined8 local_f70;
  undefined4 local_f68;
  longlong *local_f60;
  undefined4 local_f58;
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined8 local_f48;
  undefined4 local_f40;
  undefined4 local_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined8 local_f28;
  undefined4 local_f20;
  undefined1 local_f18;
  undefined1 local_f17;
  undefined8 local_f10;
  undefined4 local_f08;
  undefined8 *local_f00;
  undefined8 *local_ef8;
  undefined1 *local_ef0;
  undefined8 *local_ee8;
  undefined8 *local_ee0;
  undefined1 *local_ed8;
  undefined4 local_ed0;
  undefined4 local_ecc;
  undefined4 local_ec8;
  longlong local_ec0;
  longlong local_eb8;
  undefined1 *local_eb0;
  longlong local_ea8;
  longlong local_ea0;
  undefined1 *local_e98;
  undefined4 local_e90;
  undefined1 local_e8c;
  undefined8 local_e88;
  undefined4 local_e80;
  undefined4 local_e78;
  undefined1 local_e74;
  undefined8 local_e70;
  undefined4 local_e68;
  undefined2 local_e60;
  undefined8 local_e58;
  undefined4 local_e50;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined8 local_e40;
  undefined4 local_e38;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined8 local_e28;
  undefined4 local_e20;
  undefined4 local_e18;
  undefined4 uStack_e14;
  undefined4 uStack_e10;
  undefined4 uStack_e0c;
  undefined1 local_e08;
  undefined8 local_e00;
  undefined4 local_df8;
  undefined4 local_df0;
  undefined4 uStack_dec;
  undefined4 uStack_de8;
  undefined4 uStack_de4;
  undefined1 local_de0;
  undefined8 local_dd8;
  longlong *local_dd0;
  undefined1 local_dc8;
  undefined8 local_dc0;
  undefined4 local_db8;
  undefined1 local_db0 [8];
  longlong *local_da8;
  undefined1 local_d98;
  undefined8 local_d90;
  undefined4 local_d88;
  undefined1 local_d80 [8];
  longlong *local_d78;
  undefined1 local_d68;
  undefined8 local_d60;
  undefined4 local_d58;
  undefined8 local_d48;
  undefined4 uStack_d40;
  undefined4 uStack_d3c;
  undefined8 local_d38;
  undefined4 uStack_d30;
  undefined4 uStack_d2c;
  undefined8 local_d28;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  undefined8 local_d18;
  undefined4 uStack_d10;
  undefined4 uStack_d0c;
  undefined8 local_d08;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  undefined8 local_cf8;
  longlong local_cf0;
  undefined8 local_ce8;
  longlong local_ce0;
  longlong local_cd8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined4 local_cc0;
  undefined8 local_cb8;
  longlong *local_cb0;
  undefined8 local_ca8;
  longlong local_ca0;
  undefined8 local_c98;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined8 local_c88;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  undefined1 local_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined1 local_c50;
  undefined8 local_c48;
  undefined4 local_c40;
  longlong local_c38;
  longlong lStack_c30;
  undefined1 local_c28;
  undefined8 local_c20;
  undefined4 local_c18;
  longlong local_c10;
  longlong lStack_c08;
  undefined1 local_c00;
  undefined8 local_bf8;
  undefined4 local_bf0;
  undefined1 local_be8 [8];
  longlong *local_be0;
  undefined1 local_bd8 [8];
  longlong *local_bd0;
  undefined1 local_bc8 [8];
  longlong *local_bc0;
  undefined1 local_bb8 [8];
  longlong *local_bb0;
  undefined4 local_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  undefined4 uStack_b9c;
  undefined4 local_b98;
  undefined4 uStack_b94;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  undefined4 local_b88;
  undefined4 uStack_b84;
  undefined4 uStack_b80;
  undefined4 uStack_b7c;
  undefined4 local_b78;
  undefined4 uStack_b74;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined4 local_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined4 uStack_b5c;
  undefined4 local_b58;
  undefined4 uStack_b54;
  undefined4 uStack_b50;
  undefined4 uStack_b4c;
  undefined4 local_b48;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  undefined4 local_b38;
  undefined4 uStack_b34;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  undefined1 local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  longlong *local_b10;
  longlong *plStack_b08;
  undefined1 local_af8 [264];
  longlong local_9f0;
  undefined1 local_9d8 [384];
  undefined1 local_858 [912];
  undefined1 local_4c8 [1120];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1068;
  plVar11 = (longlong *)0x0;
  local_1018 = 0;
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x108);
  lVar12 = *(longlong *)(param_2 + 0x108);
  local_de0 = *(undefined1 *)(lVar12 + 0x2c0);
  local_df0 = *(undefined4 *)(lVar12 + 0x2b0);
  uStack_dec = *(undefined4 *)(lVar12 + 0x2b4);
  uStack_de8 = *(undefined4 *)(lVar12 + 0x2b8);
  uStack_de4 = *(undefined4 *)(lVar12 + 700);
  local_dd8 = *(undefined8 *)(lVar12 + 0x2c8);
  local_dd0 = *(longlong **)(lVar12 + 0x2d0);
  if (local_dd0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_dd0 + 1) = (int)local_dd0[1] + 1;
    UNLOCK();
  }
  local_dc8 = 1;
  local_dc0 = 0;
  local_db8 = 0;
  FUN_140692440(param_1 + 0x2b0,&local_df0);
  *(undefined1 *)(param_1 + 0x2d8) = local_dc8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e0,&local_dc0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_dc0);
  plVar18 = local_dd0;
  if (local_dd0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_dd0 + 1;
    lVar12 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_dd0)(local_dd0);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_dd0 + 8))(local_dd0,1);
      }
    }
  }
  plVar18 = *(longlong **)(param_2 + 0x3a0);
  if (plVar18 == (longlong *)0x0) {
    plVar18 = (longlong *)operator_new(8);
    local_fa0 = plVar11;
    if (plVar18 != (longlong *)0x0) {
      *plVar18 = (longlong)&PTR_FUN_144d6e3a0;
      local_fa0 = plVar18;
    }
    plVar18 = (longlong *)operator_new(0x18);
    if (plVar18 != (longlong *)0x0) {
      *(undefined4 *)(plVar18 + 1) = 1;
      *plVar18 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
      plVar18[2] = (longlong)local_fa0;
      plVar11 = plVar18;
    }
    local_f98 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_fa0,local_fa0,local_fa0);
    bVar8 = false;
    bVar7 = true;
    plVar18 = local_fa0;
    plVar11 = local_f98;
    plVar16 = local_f60;
  }
  else {
    plVar11 = *(longlong **)(param_2 + 0x3a8);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = false;
    plVar16 = plVar11;
  }
  pplVar2 = (longlong **)(param_1 + 0x368);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_1028 = plVar18;
  plStack_1020 = plVar11;
  if (&local_1028 != pplVar2) {
    local_1028 = *pplVar2;
    plStack_1020 = *(longlong **)(param_1 + 0x370);
    *pplVar2 = plVar18;
    *(longlong **)(param_1 + 0x370) = plVar11;
    local_b10 = plVar18;
    plStack_b08 = plVar11;
  }
  plVar11 = plStack_1020;
  if (plStack_1020 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_1020 + 1;
    lVar12 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_1020)(plStack_1020);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1020 + 8))(plStack_1020,1);
      }
    }
  }
  plVar11 = local_f98;
  if ((bVar7) && (local_f98 != (longlong *)0x0)) {
    LOCK();
    plVar18 = local_f98 + 1;
    lVar12 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_f98)(local_f98);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if ((bVar8) && (plVar16 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar16 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  pfVar3 = (float *)(param_1 + 0x2f0);
  *pfVar3 = *(float *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x2f4) = *(undefined1 *)(param_2 + 0x114);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2f8,param_2 + 0x118);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,param_2 + 0x300);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x318,param_2 + 0x310);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x328,param_2 + 800);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x338,param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_2 + 0x370);
  *(undefined1 *)(param_1 + 0x4fc) = *(undefined1 *)(param_2 + 0x374);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x500,param_2 + 0x378);
  puVar4 = (undefined4 *)(param_1 + 0x428);
  if ((undefined4 *)(param_2 + 0x128) != puVar4) {
    if (*(char *)(param_1 + 0x42c) != '\0') {
      *(undefined1 *)(param_1 + 0x42c) = 0;
    }
    if (*(char *)(param_2 + 300) != '\0') {
      *puVar4 = *(undefined4 *)(param_2 + 0x128);
      *(undefined1 *)(param_1 + 0x42c) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x430) = *(undefined1 *)(param_2 + 0x130);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x438,param_2 + 0x138);
  puVar5 = (undefined4 *)(param_1 + 0x448);
  if ((undefined4 *)(param_2 + 0x148) != puVar5) {
    if (*(char *)(param_1 + 0x44c) != '\0') {
      *(undefined1 *)(param_1 + 0x44c) = 0;
    }
    if (*(char *)(param_2 + 0x14c) != '\0') {
      *puVar5 = *(undefined4 *)(param_2 + 0x148);
      *(undefined1 *)(param_1 + 0x44c) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x450) = *(undefined1 *)(param_2 + 0x150);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x458,param_2 + 0x158);
  lVar12 = TAttribute<TOptional<float>_>::Get((undefined4 *)(param_2 + 0x168));
  puVar21 = (undefined4 *)(param_2 + 0x168);
  if (*(char *)(lVar12 + 4) == '\0') {
    puVar21 = puVar4;
  }
  puVar4 = (undefined4 *)(param_1 + 0x468);
  if (puVar21 != puVar4) {
    if (*(char *)(param_1 + 0x46c) != '\0') {
      *(undefined1 *)(param_1 + 0x46c) = 0;
    }
    if (*(char *)(puVar21 + 1) != '\0') {
      *puVar4 = *puVar21;
      *(undefined1 *)(param_1 + 0x46c) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x470) = *(undefined1 *)(puVar21 + 2);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x478,puVar21 + 4);
  lVar12 = TAttribute<TOptional<float>_>::Get(param_2 + 0x188);
  puVar21 = (undefined4 *)(param_1 + 0x488);
  puVar20 = (undefined4 *)(param_2 + 0x188);
  if (*(char *)(lVar12 + 4) == '\0') {
    puVar20 = puVar5;
  }
  if (puVar20 != puVar21) {
    if (*(char *)(param_1 + 0x48c) != '\0') {
      *(undefined1 *)(param_1 + 0x48c) = 0;
    }
    if (*(char *)(puVar20 + 1) != '\0') {
      *puVar21 = *puVar20;
      *(undefined1 *)(param_1 + 0x48c) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x490) = *(undefined1 *)(puVar20 + 2);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x498,puVar20 + 4);
  *(undefined1 *)(param_1 + 0x4a8) = *(undefined1 *)(param_2 + 0x1f0);
  *(undefined1 *)(param_1 + 0x4a9) = *(undefined1 *)(param_2 + 0x1f1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b0,param_2 + 0x1f8);
  *(undefined1 *)(param_1 + 0x4c0) = *(undefined1 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x4c1) = *(undefined1 *)(param_2 + 0x209);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4c8,param_2 + 0x210);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4d8,param_2 + 0x220);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4e8,param_2 + 0x230);
  TAttribute<TOptional<float>_>::Get(puVar5);
  TAttribute<TOptional<float>_>::Get(param_1 + 0x428);
  if (((*(int *)(param_1 + 0x4b8) != 0) && (*(longlong **)(param_1 + 0x4b0) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x18))(), cVar9 != '\0')) {
    if (*(int *)(param_1 + 0x4b8) == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(param_1 + 0x4b0);
    }
    uVar10 = (**(code **)(*plVar11 + 0x38))();
    *(undefined1 *)(param_1 + 0x4a8) = uVar10;
  }
  if (*(char *)(param_1 + 0x4a8) == '\0') {
LAB_14192c6f4:
    if (((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0))
       && (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x18))(), cVar9 != '\0')) {
      if (*(int *)(param_1 + 0x4d0) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 0x4c8);
      }
      uVar10 = (**(code **)(*plVar11 + 0x38))();
      *(undefined1 *)(param_1 + 0x4c0) = uVar10;
    }
    if (*(char *)(param_1 + 0x4c0) != '\0') {
      fVar22 = -3.4028235e+38;
      local_ecc = 0xff7fffff;
      pfVar13 = (float *)TAttribute<TOptional<float>_>::Get(puVar4);
      if (*(char *)(pfVar13 + 1) == '\0') {
        fVar23 = -3.4028235e+38;
      }
      else {
        fVar23 = *pfVar13;
      }
      pfVar13 = (float *)TAttribute<float>::Get(pfVar3);
      if (*pfVar13 <= fVar23 && fVar23 != *pfVar13) {
        local_ec8 = 0xff7fffff;
        pfVar13 = (float *)TAttribute<TOptional<float>_>::Get(puVar4);
        if (*(char *)(pfVar13 + 1) != '\0') {
          fVar22 = *pfVar13;
        }
        pfVar13 = (float *)TAttribute<float>::Get(pfVar3);
        FUN_1419284b0(param_1,*pfVar13 - fVar22,1);
      }
    }
  }
  else {
    if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0))
       && (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar9 != '\0')) {
      if (*(int *)(param_1 + 0x300) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 0x2f8);
      }
      fVar22 = (float)(**(code **)(*plVar11 + 0x38))();
      *pfVar3 = fVar22;
    }
    fVar22 = 3.4028235e+38;
    local_1018 = 0x7f7fffff;
    pfVar13 = (float *)TAttribute<TOptional<float>_>::Get(puVar21);
    if (*(char *)(pfVar13 + 1) == '\0') {
      fVar23 = 3.4028235e+38;
    }
    else {
      fVar23 = *pfVar13;
    }
    if (*pfVar3 <= fVar23) goto LAB_14192c6f4;
    local_ed0 = 0x7f7fffff;
    pfVar13 = (float *)TAttribute<TOptional<float>_>::Get(puVar21);
    if (*(char *)(pfVar13 + 1) != '\0') {
      fVar22 = *pfVar13;
    }
    pfVar13 = (float *)TAttribute<float>::Get(pfVar3);
    FUN_141928260(param_1,*pfVar13 - fVar22,1);
  }
  lVar12 = TAttribute<TOptional<float>_>::Get(param_1 + 0x428);
  if (((*(char *)(lVar12 + 4) == '\0') ||
      (lVar12 = TAttribute<TOptional<float>_>::Get(puVar5), *(char *)(lVar12 + 4) == '\0')) &&
     ((lVar12 = TAttribute<TOptional<float>_>::Get(puVar4), *(char *)(lVar12 + 4) == '\0' ||
      (lVar12 = TAttribute<TOptional<float>_>::Get(puVar21), *(char *)(lVar12 + 4) == '\0')))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)(param_1 + 0x378) = uVar10;
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x3fc) = *(undefined1 *)(param_2 + 0x244);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 600);
  *(undefined1 *)(param_1 + 0x414) = *(undefined1 *)(param_2 + 0x25c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x418,param_2 + 0x260);
  plVar11 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x3b4) = *(undefined1 *)(param_2 + 0x1ac);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b8,param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x3cc) = *(undefined1 *)(param_2 + 0x1c4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d0,param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x3e4) = *(undefined1 *)(param_2 + 0x1dc);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 1000,param_2 + 0x1e0);
  *(longlong *)(param_1 + 0x388) = *(longlong *)(param_2 + 0x108) + 0x90;
  *(longlong *)(param_1 + 0x390) = *(longlong *)(param_2 + 0x108) + 8;
  *(longlong *)(param_1 + 0x398) = *(longlong *)(param_2 + 0x108) + 0x118;
  *(longlong *)(param_1 + 0x3a0) = *(longlong *)(param_2 + 0x108) + 0x1a0;
  local_1030 = (longlong *)(*(longlong *)(param_2 + 0x108) + 0x2d8);
  *(undefined1 *)(param_1 + 0x510) = 0;
  *(undefined4 *)(param_1 + 0x514) = 0xffffffff;
  if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar9 != '\0')) {
    plVar18 = plVar11;
    if (*(int *)(param_1 + 0x300) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x2f8);
    }
    fVar22 = (float)(**(code **)(*plVar18 + 0x38))();
    *pfVar3 = fVar22;
  }
  *(float *)(param_1 + 0x530) = *pfVar3;
  if (((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) &&
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))(), cVar9 != '\0')) {
    plVar18 = plVar11;
    if (*(int *)(param_1 + 0x300) != 0) {
      plVar18 = *(longlong **)(param_1 + 0x2f8);
    }
    fVar22 = (float)(**(code **)(*plVar18 + 0x38))();
    *pfVar3 = fVar22;
  }
  local_d38 = FUN_14195bf00;
  local_d48 = FUN_14195bc00;
  *(undefined1 *)(param_1 + 0x534) = 0;
  local_c88 = &LAB_141944fc0;
  local_d28 = FUN_141943130;
  local_d08 = FUN_141943130;
  local_b38 = 0x3f800000;
  uStack_b34 = 0;
  uStack_b30 = 0x3f800000;
  uStack_b2c = 0x3f800000;
  local_b28 = 2;
  *(double *)(param_1 + 0x520) = (double)*pfVar3;
  uVar10 = DAT_1464b9ee9;
  local_f18 = DAT_1464b9ee9;
  lVar12 = *(longlong *)(param_2 + 0x108) + 0x228;
  local_b20 = 0;
  uStack_b18 = 0;
  local_c68 = 2;
  local_c78 = 0x3f800000;
  uStack_c74 = 0;
  uStack_c70 = 0x3f800000;
  uStack_c6c = 0x3f800000;
  local_c50 = 1;
  local_c60 = 0;
  uStack_c58 = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_cd0 = 1;
  local_cc8 = 0;
  local_cc0 = 0;
  local_e30 = 1;
  local_e2c = 1;
  local_e28 = 0;
  local_e20 = 0;
  local_e48 = 1;
  local_e44 = 1;
  local_e40 = 0;
  local_e38 = 0;
  uStack_d20 = 0;
  uStack_d30 = 0;
  uStack_d40 = 0;
  uStack_c80 = 0;
  local_c98 = FUN_1419436f0;
  uStack_c90 = 0;
  local_e60 = 0x101;
  local_e58 = 0;
  local_e50 = 0;
  local_f17 = 1;
  local_f10 = 0;
  local_f08 = 0;
  local_e78 = 0x3f800000;
  local_e74 = 1;
  local_e70 = 0;
  local_e68 = 0;
  uStack_d00 = 0;
  local_d18 = FUN_1419436f0;
  uStack_d10 = 0;
  local_e90 = 0x3f800000;
  local_e8c = 1;
  local_e88 = 0;
  local_e80 = 0;
  local_cd8 = lVar12;
  lVar14 = SImage::FArguments::FArguments(local_9d8);
  *(longlong *)(lVar14 + 0x108) = lVar12;
  *(undefined1 *)(lVar14 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x118,&local_cc8);
  FUN_140692440(lVar14 + 0x128,&local_c78);
  *(undefined1 *)(lVar14 + 0x150) = local_c50;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x158,&local_c48);
  local_ea0 = FUN_140c61c00();
  lVar12 = local_ea0 + 0x10;
  local_ea8 = lVar12;
  FUN_14044f790(&local_ea8,lVar12);
  local_e98 = &local_1038;
  local_1048 = 0x278;
  SWidget::SetDebugInfo
            (lVar12,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x107
            );
  puVar15 = (undefined8 *)FUN_14188e090(&local_ea8,local_bb8,lVar14);
  local_ce8 = *puVar15;
  local_ce0 = puVar15[1];
  if (local_ce0 != 0) {
    LOCK();
    *(int *)(local_ce0 + 8) = *(int *)(local_ce0 + 8) + 1;
    UNLOCK();
    uVar10 = local_f18;
  }
  plVar16 = (longlong *)operator_new(0x88);
  plVar18 = plVar11;
  if (plVar16 != (longlong *)0x0) {
    FUN_1417f13c0(plVar16);
    *plVar16 = (longlong)&PTR__scalar_deleting_destructor__144042bf8;
    plVar18 = plVar16;
  }
  local_f60 = (longlong *)SVerticalBox::FSlot::AutoHeight(plVar18);
  *(undefined2 *)((longlong)local_f60 + 0x20) = 0x200;
  lVar12 = SEditableText::FArguments::FArguments(local_4c8);
  *(undefined1 *)(lVar12 + 0x78) = uVar10;
  *(undefined1 *)(lVar12 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x80,&local_f10);
  FUN_1417f9360(lVar12 + 0x1a0,param_2 + 0x270);
  *(undefined1 *)(lVar12 + 0x1f0) = *(undefined1 *)(param_2 + 0x2c0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x1f8,param_2 + 0x2c8);
  *(undefined2 *)(lVar12 + 0x2f0) = 0x101;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x2f8,&local_e58);
  local_b68 = (undefined4)local_c98;
  uStack_b64 = local_c98._4_4_;
  uStack_b60 = uStack_c90;
  uStack_b5c = uStack_c8c;
  uVar17 = FUN_14187ce90(&local_fd0,param_1,&local_b68);
  FText::FText(local_db0);
  local_d98 = 1;
  local_d90 = 0;
  local_d88 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_d90,uVar17);
  FText::operator=(lVar12 + 0x108,local_db0);
  *(undefined1 *)(lVar12 + 0x120) = local_d98;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x128,&local_d90);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d90);
  if (local_da8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_da8 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_da8)(local_da8);
      LOCK();
      piVar1 = (int *)((longlong)local_da8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_da8 + 8))(local_da8,1);
      }
    }
  }
  if (local_fc8 == 0) {
LAB_14192ce3d:
    if (local_fd0 != (longlong *)0x0) {
      FMemory::Free(local_fd0);
    }
  }
  else if (local_fd0 != (longlong *)0x0) {
    (**(code **)(*local_fd0 + 0x28))(local_fd0,0);
    if (local_fd0 != (longlong *)0x0) {
      local_fd0 = (longlong *)FMemory::Realloc(local_fd0,0,0);
    }
    local_fc8 = 0;
    goto LAB_14192ce3d;
  }
  local_b78 = (undefined4)local_c88;
  uStack_b74 = local_c88._4_4_;
  uStack_b70 = uStack_c80;
  uStack_b6c = uStack_c7c;
  uVar17 = FUN_14191f470(&local_fc0,param_1,&local_b78);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x378,uVar17);
  if (local_fb8 == 0) {
LAB_14192ceb6:
    if (local_fc0 != (longlong *)0x0) {
      FMemory::Free(local_fc0);
    }
  }
  else if (local_fc0 != (longlong *)0x0) {
    (**(code **)(*local_fc0 + 0x28))(local_fc0,0);
    if (local_fc0 != (longlong *)0x0) {
      local_fc0 = (longlong *)FMemory::Realloc(local_fc0,0,0);
    }
    local_fb8 = 0;
    goto LAB_14192ceb6;
  }
  local_b88 = (undefined4)local_d48;
  uStack_b84 = local_d48._4_4_;
  uStack_b80 = uStack_d40;
  uStack_b7c = uStack_d3c;
  uVar17 = FUN_1418c8b70(&local_fb0,param_1,&local_b88);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x388,uVar17);
  if (local_fa8 == 0) {
LAB_14192cf2f:
    if (local_fb0 != (longlong *)0x0) {
      FMemory::Free(local_fb0);
    }
  }
  else if (local_fb0 != (longlong *)0x0) {
    (**(code **)(*local_fb0 + 0x28))(local_fb0,0);
    if (local_fb0 != (longlong *)0x0) {
      local_fb0 = (longlong *)FMemory::Realloc(local_fb0,0,0);
    }
    local_fa8 = 0;
    goto LAB_14192cf2f;
  }
  local_b98 = (undefined4)local_d38;
  uStack_b94 = local_d38._4_4_;
  uStack_b90 = uStack_d30;
  uStack_b8c = uStack_d2c;
  uVar17 = FUN_14191f310(&local_1010,param_1,&local_b98);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x398,uVar17);
  if (local_1008 == 0) {
LAB_14192cfaf:
    if (local_1010 != (longlong *)0x0) {
      FMemory::Free(local_1010);
    }
  }
  else if (local_1010 != (longlong *)0x0) {
    (**(code **)(*local_1010 + 0x28))(local_1010,0);
    if (local_1010 != (longlong *)0x0) {
      local_1010 = (longlong *)FMemory::Realloc(local_1010,0,0);
    }
    local_1008 = 0;
    goto LAB_14192cfaf;
  }
  *(undefined1 *)(lVar12 + 800) = *(undefined1 *)(param_2 + 0x340);
  *(undefined1 *)(lVar12 + 0x321) = *(undefined1 *)(param_2 + 0x341);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x328,param_2 + 0x348);
  *(undefined1 *)(lVar12 + 0x3c0) = *(undefined1 *)(param_2 + 0x358);
  *(undefined1 *)(lVar12 + 0x3c1) = *(undefined1 *)(param_2 + 0x359);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x3c8,param_2 + 0x360);
  local_ba8 = (undefined4)local_d28;
  uStack_ba4 = local_d28._4_4_;
  uStack_ba0 = uStack_d20;
  uStack_b9c = uStack_d1c;
  uVar17 = FUN_1418c9fd0(&local_1000,param_1,&local_ba8);
  local_f78 = 0;
  local_f74 = 1;
  local_f70 = 0;
  local_f68 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f70,uVar17);
  *(undefined4 *)(lVar12 + 0x3a8) = local_f78;
  *(undefined1 *)(lVar12 + 0x3ac) = local_f74;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x3b0,&local_f70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f70);
  if (local_ff8 == 0) {
LAB_14192d0ca:
    if (local_1000 != (longlong *)0x0) {
      FMemory::Free(local_1000);
    }
  }
  else if (local_1000 != (longlong *)0x0) {
    (**(code **)(*local_1000 + 0x28))(local_1000,0);
    if (local_1000 != (longlong *)0x0) {
      local_1000 = (longlong *)FMemory::Realloc(local_1000,0,0);
    }
    local_ff8 = 0;
    goto LAB_14192d0ca;
  }
  *(undefined4 *)(lVar12 + 0x408) = 1;
  *(undefined1 *)(lVar12 + 0x40c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x410,&local_e40);
  *(undefined4 *)(lVar12 + 0x338) = *(undefined4 *)(param_2 + 0x388);
  *(undefined1 *)(lVar12 + 0x33c) = *(undefined1 *)(param_2 + 0x38c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x340,param_2 + 0x390);
  *(undefined4 *)(lVar12 + 0x428) = 1;
  *(undefined1 *)(lVar12 + 0x42c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x430,&local_e28);
  local_ef8 = (undefined8 *)operator_new(0x4b8);
  if (local_ef8 == (undefined8 *)0x0) {
    local_ef8 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(local_ef8 + 1) = 1;
    *(undefined4 *)((longlong)local_ef8 + 0xc) = 1;
    *local_ef8 = &PTR_FUN_144d6e620;
    if (local_ef8 != (undefined8 *)0xfffffffffffffff0) {
      FUN_141923430();
    }
  }
  local_f00 = local_ef8 + 2;
  FUN_14044f790(&local_f00);
  local_ef0 = &local_1037;
  local_1048 = 0x4a8;
  SWidget::SetDebugInfo
            (local_f00,"SEditableText",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0xf2)
  ;
  uVar17 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_f00,param_1 + 0x358);
  puVar15 = (undefined8 *)FUN_141926260(uVar17,local_bc8,lVar12);
  local_cf8 = *puVar15;
  local_cf0 = puVar15[1];
  if (local_cf0 != 0) {
    LOCK();
    *(int *)(local_cf0 + 8) = *(int *)(local_cf0 + 8) + 1;
    UNLOCK();
  }
  local_c28 = 1;
  local_c20 = 0;
  local_c18 = 0;
  lVar12 = *local_1030;
  lVar14 = local_1030[1];
  local_c38 = lVar12;
  lStack_c30 = lVar14;
  plVar18 = (longlong *)operator_new(0x88);
  if (plVar18 != (longlong *)0x0) {
    FUN_1417f13c0(plVar18);
    *plVar18 = (longlong)&PTR__scalar_deleting_destructor__144042bf8;
    plVar11 = plVar18;
  }
  local_f58 = 1;
  local_f50 = 0x3f800000;
  local_f4c = 1;
  local_f48 = 0;
  local_f40 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f48,&local_e70);
  *(undefined4 *)(plVar11 + 5) = local_f58;
  *(undefined1 *)((longlong)plVar11 + 0x34) = local_f4c;
  *(undefined4 *)(plVar11 + 6) = local_f50;
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar11 + 7,&local_f48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f48);
  *(undefined1 *)(plVar11 + 0xb) = 1;
  plVar11[9] = lVar12;
  plVar11[10] = lVar14;
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar11 + 0xc,&local_c20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c20);
  *(undefined2 *)(plVar11 + 4) = 0x200;
  lVar12 = STextBlock::FArguments::FArguments(local_858);
  FUN_1417f9360(lVar12 + 0x140,param_2 + 0x270);
  *(undefined1 *)(lVar12 + 400) = *(undefined1 *)(param_2 + 0x2c0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x198,param_2 + 0x2c8);
  local_b58 = (undefined4)local_d18;
  uStack_b54 = local_d18._4_4_;
  uStack_b50 = uStack_d10;
  uStack_b4c = uStack_d0c;
  uVar17 = FUN_14187ce90(&local_ff0,param_1,&local_b58);
  FText::FText(local_d80);
  local_d68 = 1;
  local_d60 = 0;
  local_d58 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_d60,uVar17);
  FText::operator=(lVar12 + 0x108,local_d80);
  *(undefined1 *)(lVar12 + 0x120) = local_d68;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x128,&local_d60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d60);
  if (local_d78 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_d78 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_d78)(local_d78);
      LOCK();
      piVar1 = (int *)((longlong)local_d78 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_d78 + 8))(local_d78,1);
      }
    }
  }
  if (local_fe8 == 0) {
LAB_14192d435:
    if (local_ff0 != (longlong *)0x0) {
      FMemory::Free(local_ff0);
    }
  }
  else if (local_ff0 != (longlong *)0x0) {
    (**(code **)(*local_ff0 + 0x28))(local_ff0,0);
    if (local_ff0 != (longlong *)0x0) {
      local_ff0 = (longlong *)FMemory::Realloc(local_ff0,0,0);
    }
    local_fe8 = 0;
    goto LAB_14192d435;
  }
  local_b48 = (undefined4)local_d08;
  uStack_b44 = local_d08._4_4_;
  uStack_b40 = uStack_d00;
  uStack_b3c = uStack_cfc;
  uVar17 = FUN_1418c9fd0(&local_fe0,param_1,&local_b48);
  local_f90 = 0;
  local_f88 = 0;
  local_f80 = 0;
  local_f8c = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f88,uVar17);
  *(undefined4 *)(lVar12 + 0x348) = local_f90;
  *(undefined1 *)(lVar12 + 0x34c) = local_f8c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x350,&local_f88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f88);
  if (local_fd8 != 0) {
    if (local_fe0 == (longlong *)0x0) goto LAB_14192d4fc;
    (**(code **)(*local_fe0 + 0x28))(local_fe0,0);
    if (local_fe0 != (longlong *)0x0) {
      local_fe0 = (longlong *)FMemory::Realloc(local_fe0,0,0);
    }
    local_fd8 = 0;
  }
  if (local_fe0 != (longlong *)0x0) {
    FMemory::Free(local_fe0);
  }
LAB_14192d4fc:
  *(undefined4 *)(lVar12 + 0x330) = *(undefined4 *)(param_2 + 0x388);
  *(undefined1 *)(lVar12 + 0x334) = *(undefined1 *)(param_2 + 0x38c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x338,param_2 + 0x390);
  local_ee0 = (undefined8 *)operator_new(0x660);
  if (local_ee0 == (undefined8 *)0x0) {
    local_ee0 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(local_ee0 + 1) = 1;
    *(undefined4 *)((longlong)local_ee0 + 0xc) = 1;
    *local_ee0 = &PTR_FUN_144043520;
    if (local_ee0 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  puVar15 = (undefined8 *)0x0;
  local_ee8 = local_ee0 + 2;
  FUN_14044f790(&local_ee8);
  local_ed8 = &local_1036;
  local_1048 = 0x650;
  SWidget::SetDebugInfo
            (local_ee8,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0xe5)
  ;
  uVar17 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_ee8,param_1 + 0x348);
  puVar19 = (undefined8 *)FUN_140693250(uVar17,local_bd8,lVar12);
  local_ca0 = puVar19[1];
  local_ca8 = *puVar19;
  if (local_ca0 != 0) {
    LOCK();
    *(int *)(local_ca0 + 8) = *(int *)(local_ca0 + 8) + 1;
    UNLOCK();
  }
  local_c00 = 1;
  local_bf8 = 0;
  local_bf0 = 0;
  lVar12 = *local_1030;
  lVar14 = local_1030[1];
  local_c10 = lVar12;
  lStack_c08 = lVar14;
  puVar19 = (undefined8 *)operator_new(0x88);
  if (puVar19 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar19);
    *puVar19 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar15 = puVar19;
  }
  local_f38 = 1;
  local_f30 = 0x3f800000;
  local_f2c = 1;
  local_f28 = 0;
  local_f20 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f28,&local_e88);
  *(undefined4 *)(puVar15 + 5) = local_f38;
  *(undefined1 *)((longlong)puVar15 + 0x34) = local_f2c;
  *(undefined4 *)(puVar15 + 6) = local_f30;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 7,&local_f28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f28);
  *(undefined1 *)(puVar15 + 0xb) = 1;
  puVar15[9] = lVar12;
  puVar15[10] = lVar14;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 0xc,&local_bf8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_bf8);
  *(undefined2 *)(puVar15 + 4) = 0x200;
  local_1030 = (longlong *)FUN_140692760(puVar15,&local_ca8);
  lVar12 = SCanvas::FArguments::FArguments(local_af8);
  plVar18 = (longlong *)(lVar12 + 0x108);
  iVar6 = *(int *)(lVar12 + 0x110);
  *(int *)(lVar12 + 0x110) = iVar6 + 1;
  if (*(int *)(lVar12 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar18,iVar6);
  }
  *(longlong **)(*plVar18 + (longlong)iVar6 * 8) = local_1030;
  uVar17 = FUN_140692760(plVar11,&local_cf8);
  iVar6 = *(int *)(lVar12 + 0x110);
  *(int *)(lVar12 + 0x110) = iVar6 + 1;
  if (*(int *)(lVar12 + 0x114) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar18,iVar6);
  }
  *(undefined8 *)(*plVar18 + (longlong)iVar6 * 8) = uVar17;
  local_eb8 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar14 = local_eb8 + 0x10;
  local_ec0 = lVar14;
  FUN_14044f790(&local_ec0,lVar14);
  local_eb0 = local_1035;
  local_1048 = 0x238;
  SWidget::SetDebugInfo
            (lVar14,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0xdd)
  ;
  uVar17 = FUN_140692760(local_f60,&local_ce8);
  uVar17 = SOverlay::FArguments::operator+(lVar12,uVar17);
  puVar15 = (undefined8 *)FUN_140693150(&local_ec0,local_be8,uVar17);
  plVar11 = (longlong *)puVar15[1];
  local_cb8 = *puVar15;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_e08 = *(undefined1 *)(param_2 + 0x2e8);
  local_e18 = *(undefined4 *)(param_2 + 0x2d8);
  uStack_e14 = *(undefined4 *)(param_2 + 0x2dc);
  uStack_e10 = *(undefined4 *)(param_2 + 0x2e0);
  uStack_e0c = *(undefined4 *)(param_2 + 0x2e4);
  local_e00 = 0;
  local_df8 = 0;
  local_cb0 = plVar11;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_e00,param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x250) = local_e08;
  *(undefined4 *)(param_1 + 0x240) = local_e18;
  *(undefined4 *)(param_1 + 0x244) = uStack_e14;
  *(undefined4 *)(param_1 + 0x248) = uStack_e10;
  *(undefined4 *)(param_1 + 0x24c) = uStack_e0c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,&local_e00);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e00);
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_cb8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar11 + 1;
    lVar12 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (local_be0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_be0 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_be0)(local_be0);
      LOCK();
      piVar1 = (int *)((longlong)local_be0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_be0 + 8))(local_be0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_ec0);
  if (local_9f0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_af8);
  if (local_bd0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_bd0 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_bd0)(local_bd0);
      LOCK();
      piVar1 = (int *)((longlong)local_bd0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_bd0 + 8))(local_bd0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_ee8);
  FUN_140691150(local_858);
  if (local_bc0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_bc0 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_bc0)(local_bc0);
      LOCK();
      piVar1 = (int *)((longlong)local_bc0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_bc0 + 8))(local_bc0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_f00);
  FUN_141923fa0(local_4c8);
  if (local_bb0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_bb0 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_bb0)(local_bb0);
      LOCK();
      piVar1 = (int *)((longlong)local_bb0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_bb0 + 8))(local_bb0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_ea8);
  FUN_14188b0e0(local_9d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_cc8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c48);
  FUN_1417f7230(&local_c78);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b20);
  return;
}



// FUNCTION 14192dae0 FUN_14192dae0 body=1211 status=ok
// SIG undefined FUN_14192dae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14192dae0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_3a8 [32];
  undefined1 local_388 [16];
  longlong *local_378;
  int iStack_370;
  code *local_368;
  undefined4 uStack_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined1 *local_348;
  undefined4 uStack_340;
  undefined2 local_338;
  undefined1 local_330 [16];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [688];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  *(byte *)(param_1 + 0x483) = *(byte *)(param_1 + 0x483) & 0xfd;
  local_338 = 0x100;
  local_368 = FUN_14193fc30;
  uStack_360 = 0;
  local_348 = &LAB_1404c20c0;
  uStack_340 = 0;
  local_378 = (longlong *)&LAB_141942150;
  iStack_370 = 0;
  FUN_1418c90f0(local_330,param_1,&local_378);
  local_310 = 1;
  local_320 = 0;
  uStack_318 = 0;
  FUN_1418c8cd0(local_308,param_1,&local_368);
  lVar4 = FUN_141886d30(local_2e8);
  *(undefined8 *)(lVar4 + 0x1a8) = *(undefined8 *)(param_2 + 0x208);
  *(undefined1 *)(lVar4 + 0x1b0) = *(undefined1 *)(param_2 + 0x210);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x1b8,param_2 + 0x218);
  *(undefined8 *)(lVar4 + 0x1c8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined1 *)(lVar4 + 0x1d0) = *(undefined1 *)(param_2 + 0x1f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x1d8,param_2 + 0x1f8);
  FUN_140692440(lVar4 + 0x210,param_2 + 0x228);
  *(undefined1 *)(lVar4 + 0x238) = *(undefined1 *)(param_2 + 0x250);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x240,param_2 + 600);
  FUN_140692440(lVar4 + 0x250,param_2 + 0x268);
  *(undefined1 *)(lVar4 + 0x278) = *(undefined1 *)(param_2 + 0x290);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x280,param_2 + 0x298);
  uVar5 = FUN_1417dd6e0(&local_378,param_1,&local_348);
  local_368 = (code *)0x0;
  uStack_360 = CONCAT31(uStack_360._1_3_,1);
  local_358 = 0;
  local_350 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_358,uVar5);
  *(code **)(lVar4 + 0x188) = local_368;
  *(undefined1 *)(lVar4 + 400) = (undefined1)uStack_360;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x198,&local_358);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_358);
  if (iStack_370 != 0) {
    if (local_378 == (longlong *)0x0) goto LAB_14192dd3b;
    (**(code **)(*local_378 + 0x28))(local_378,0);
    if (local_378 != (longlong *)0x0) {
      local_378 = (longlong *)FMemory::Realloc(local_378,0,0);
    }
    iStack_370 = 0;
  }
  if (local_378 != (longlong *)0x0) {
    FMemory::Free(local_378);
  }
LAB_14192dd3b:
  *(undefined4 *)(lVar4 + 0x118) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(lVar4 + 0x11c) = *(undefined4 *)(param_2 + 300);
  *(undefined1 *)(lVar4 + 0x130) = local_310;
  *(undefined4 *)(lVar4 + 0x120) = (undefined4)local_320;
  *(undefined4 *)(lVar4 + 0x124) = local_320._4_4_;
  *(undefined4 *)(lVar4 + 0x128) = (undefined4)uStack_318;
  *(undefined4 *)(lVar4 + 300) = uStack_318._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x138,local_308);
  *(undefined1 *)(lVar4 + 0x290) = (undefined1)local_338;
  *(undefined1 *)(lVar4 + 0x291) = local_338._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar4 + 0x298,local_330);
  uVar5 = FUN_141925eb0(local_388,local_2f8,param_2);
  uVar5 = FUN_14188d200(lVar4,uVar5);
  FUN_141971ea0(param_1,uVar5);
  FUN_14188af70(local_2e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_330);
  plVar6 = (longlong *)SWidget::GetType(param_1,&local_378);
  if (*plVar6 == DAT_1469f4780) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfd;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x38c) = uVar1;
  *(undefined4 *)(param_1 + 0x390) = uVar2;
  *(undefined4 *)(param_1 + 0x394) = uVar3;
  *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 0x140);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a0,param_2 + 0x148);
  SButton::SetButtonStyle(param_1,*(undefined8 *)(param_2 + 0x118));
  *(byte *)(param_1 + 0x483) =
       *(byte *)(param_1 + 0x483) ^ (*(byte *)(param_2 + 0x2a8) ^ *(byte *)(param_1 + 0x483)) & 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x188);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x410,param_2 + 0x198);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x420,param_2 + 0x1a8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x430,param_2 + 0x1b8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x440,param_2 + 0x1c8);
  puVar7 = (undefined8 *)(param_2 + 0x2d0);
  *(undefined1 *)(param_1 + 0x480) = *(undefined1 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x481) = *(undefined1 *)(param_2 + 0x1dc);
  *(undefined1 *)(param_1 + 0x482) = *(undefined1 *)(param_2 + 0x1e0);
  if (*(char *)(param_2 + 0x2e8) == '\0') {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x3d8) + 0x260);
  }
  *(undefined8 *)(param_1 + 0x450) = *puVar7;
  *(undefined8 *)(param_1 + 0x458) = puVar7[1];
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(puVar7 + 2);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)((longlong)puVar7 + 0x14);
  if (*(char *)(param_2 + 0x2c8) == '\0') {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x3d8) + 0x248);
  }
  else {
    puVar7 = (undefined8 *)(param_2 + 0x2b0);
  }
  *(undefined8 *)(param_1 + 0x468) = *puVar7;
  *(undefined8 *)(param_1 + 0x470) = puVar7[1];
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(puVar7 + 2);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)((longlong)puVar7 + 0x14);
  return;
}



// FUNCTION 14192dfa0 FUN_14192dfa0 body=869 status=ok
// SIG undefined FUN_14192dfa0(void)

void FUN_14192dfa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong local_10;
  
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x2d0);
  uVar6 = *(undefined4 *)(param_2 + 0x15c);
  uVar3 = *(undefined4 *)(param_2 + 0x160);
  uVar4 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x374) = uVar6;
  *(undefined4 *)(param_1 + 0x378) = uVar3;
  *(undefined4 *)(param_1 + 0x37c) = uVar4;
  *(undefined1 *)(param_1 + 0x380) = *(undefined1 *)(param_2 + 0x168);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x388,param_2 + 0x170);
  FUN_140692440(param_1 + 0x398,param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x3c0) = *(undefined1 *)(param_2 + 0x1c0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3c8,param_2 + 0x1c8);
  FUN_140692440(param_1 + 0x3d8,param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x400) = *(undefined1 *)(param_2 + 0x200);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x408,param_2 + 0x208);
  if ((undefined4 *)(param_2 + 0x120) != (undefined4 *)(param_1 + 0x418)) {
    if (*(char *)(param_1 + 0x41c) != '\0') {
      *(undefined1 *)(param_1 + 0x41c) = 0;
    }
    if (*(char *)(param_2 + 0x124) != '\0') {
      *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x120);
      *(undefined1 *)(param_1 + 0x41c) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(param_2 + 0x218);
  local_18 = *(undefined8 *)(param_2 + 0x108);
  local_10 = *(longlong *)(param_2 + 0x110);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_141928cb0(param_1,&local_18);
  FUN_1419258c0(param_1 + 0x300,param_2 + 0x138);
  plVar9 = (longlong *)0x0;
  plVar1 = (longlong *)(param_1 + 0x318);
  if ((longlong *)(param_2 + 0x128) != plVar1) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x128), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 800) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar7 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar7;
        }
        *(undefined4 *)(param_1 + 800) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
  }
  if ((*(int *)(param_2 + 400) != 0) && (*(longlong **)(param_2 + 0x188) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x188) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_2 + 400) != 0) {
        plVar9 = *(longlong **)(param_2 + 0x188);
      }
      uVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
      *(undefined4 *)(param_2 + 0x180) = uVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(param_2 + 0x180);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x430,param_2 + 0x220);
  if (*(char *)(param_2 + 0x288) == '\0') {
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x568);
  }
  else {
    puVar8 = (undefined8 *)(param_2 + 0x270);
  }
  *(undefined8 *)(param_1 + 0x440) = *puVar8;
  *(undefined8 *)(param_1 + 0x448) = puVar8[1];
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)((longlong)puVar8 + 0x14);
  if (*(char *)(param_2 + 0x248) == '\0') {
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x538);
  }
  else {
    puVar8 = (undefined8 *)(param_2 + 0x230);
  }
  *(undefined8 *)(param_1 + 0x458) = *puVar8;
  *(undefined8 *)(param_1 + 0x460) = puVar8[1];
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)((longlong)puVar8 + 0x14);
  if (*(char *)(param_2 + 0x268) == '\0') {
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x550);
  }
  else {
    puVar8 = (undefined8 *)(param_2 + 0x250);
  }
  *(undefined8 *)(param_1 + 0x470) = *puVar8;
  *(undefined8 *)(param_1 + 0x478) = puVar8[1];
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)((longlong)puVar8 + 0x14);
  return;
}



// FUNCTION 14192e310 Construct body=139 status=ok
// SIG undefined Construct(void)

void SCircularThrobber::Construct(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x118);
  FUN_140692440(param_1 + 0x288,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2b8,param_2 + 0x150);
  FUN_141936e70(param_1);
  return;
}



// FUNCTION 14192e3a0 Construct body=319 status=ok
// SIG undefined Construct(void)

void SColorBlock::Construct(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10c);
  uVar2 = *(undefined4 *)(param_2 + 0x110);
  uVar3 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  *(undefined4 *)(param_1 + 0x214) = uVar3;
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x118);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x220,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x230) = *(undefined1 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x231) = *(undefined1 *)(param_2 + 0x131);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x238,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x249) = *(undefined1 *)(param_2 + 0x149);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x250,param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x260) = *(undefined1 *)(param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x261) = *(undefined1 *)(param_2 + 0x161);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x268,param_2 + 0x168);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x290,param_2 + 400);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x279) = *(undefined1 *)(param_2 + 0x179);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x2a8) = *(undefined1 *)(param_2 + 0x1a8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2b0,param_2 + 0x1b0);
  return;
}



// FUNCTION 14192e4e0 FUN_14192e4e0 body=3018 status=ok
// SIG undefined FUN_14192e4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14192e4e0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_9e8 [32];
  longlong local_9c8;
  longlong local_9c0;
  undefined4 local_9b8;
  longlong local_9b0;
  longlong local_9a8;
  longlong local_9a0;
  undefined1 local_998;
  undefined1 local_990;
  longlong local_988;
  char local_978;
  undefined1 local_976 [2];
  undefined1 local_974;
  undefined1 local_973 [3];
  longlong *local_970;
  int local_968;
  undefined8 local_960;
  longlong *local_958;
  longlong *local_950;
  longlong *local_948;
  undefined4 local_940;
  undefined4 local_938;
  undefined1 local_934;
  undefined8 local_930;
  undefined4 local_928;
  longlong *local_920;
  longlong *local_918;
  undefined1 *local_910;
  longlong *local_908;
  longlong *local_900;
  undefined1 *local_8f8;
  undefined8 local_8f0;
  longlong local_8e8;
  undefined4 local_8e0;
  undefined1 local_8dc;
  undefined8 local_8d8;
  undefined4 local_8d0;
  undefined1 local_8c8;
  undefined1 local_8c7;
  undefined8 local_8c0;
  undefined4 local_8b8;
  float local_8b0;
  float fStack_8ac;
  float fStack_8a8;
  float fStack_8a4;
  undefined1 local_8a0;
  undefined8 local_898;
  undefined4 local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined1 local_878;
  undefined8 local_870;
  longlong *plStack_868;
  undefined1 local_860;
  undefined8 local_858;
  undefined4 local_850;
  undefined8 local_848;
  longlong local_840;
  undefined8 local_838;
  longlong local_830;
  undefined1 *local_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined8 local_818;
  longlong local_810;
  longlong *local_808;
  longlong *local_800;
  undefined8 local_7f8;
  longlong local_7f0;
  longlong local_7e8;
  undefined1 local_7e0;
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined1 *local_7c8;
  undefined8 uStack_7c0;
  undefined1 local_7b8 [8];
  longlong *local_7b0;
  undefined1 local_7a8 [8];
  longlong *local_7a0;
  longlong *local_798;
  longlong *local_790;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined1 local_758 [280];
  undefined1 local_640 [48];
  longlong *local_610;
  undefined1 local_600 [16];
  undefined1 local_5f0 [24];
  undefined1 local_5d8 [264];
  longlong local_4d0;
  undefined1 local_4b8 [384];
  undefined1 local_338 [760];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_9e8;
  lVar11 = *(longlong *)(param_2 + 0x110);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(param_2 + 0x108) + 8;
  }
  param_1[0x65] = *(longlong *)(param_2 + 0x108) + 0x308;
  lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x108) + 0x398);
  param_1[0x66] = *(longlong *)(*(longlong *)(param_2 + 0x108) + 0x390);
  param_1[0x67] = lVar13;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x61,param_2 + 0x158);
  param_1[0x68] = *(longlong *)(param_2 + 0x128);
  plVar9 = *(longlong **)(param_2 + 0x130);
  plVar10 = (longlong *)param_1[0x69];
  if (plVar9 != plVar10) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar10 = (longlong *)param_1[0x69];
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    param_1[0x69] = (longlong)plVar9;
  }
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x168);
  lVar13 = *(longlong *)(param_2 + 0x108) + 0x280;
  local_780 = 0x3f800000;
  uStack_778 = 0x3f8000003f800000;
  uVar3 = DAT_1464b9ee9;
  if (*(char *)(param_2 + 0x169) != '\0') {
    uVar3 = DAT_1464b9ee8;
  }
  local_948 = (longlong *)0x0;
  local_888 = 0x3f800000;
  uStack_880 = 0x3f8000003f800000;
  local_858 = 0;
  local_850 = 0;
  local_7d8 = 0;
  local_7d0 = 0;
  local_8c0 = 0;
  local_8b8 = 0;
  local_8d8 = 0;
  local_8d0 = 0;
  uStack_820 = 0;
  local_828 = &LAB_141926464;
  local_878 = 2;
  local_870 = 0;
  plStack_868 = (longlong *)0x0;
  local_860 = 1;
  local_7e0 = 1;
  local_8c7 = 1;
  local_8e0 = 0x3f800000;
  local_8dc = 1;
  local_8c8 = uVar3;
  local_7e8 = lVar13;
  lVar6 = SImage::FArguments::FArguments(local_758);
  *(undefined1 *)(lVar6 + 0x78) = uVar3;
  *(undefined1 *)(lVar6 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x80,&local_8c0);
  *(longlong *)(lVar6 + 0x108) = lVar13;
  *(undefined1 *)(lVar6 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x118,&local_7d8);
  FUN_140692440(lVar6 + 0x128,&local_888);
  *(undefined1 *)(lVar6 + 0x150) = local_860;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x158,&local_858);
  local_900 = (longlong *)FUN_140c61c00();
  plVar9 = local_900 + 2;
  local_908 = plVar9;
  FUN_14044f790(&local_908,plVar9);
  local_8f8 = &local_974;
  local_9c8 = 0x278;
  SWidget::SetDebugInfo
            (plVar9,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x3c);
  puVar7 = (undefined8 *)FUN_14188e090(&local_908,local_7a8,lVar6);
  local_838 = *puVar7;
  local_830 = puVar7[1];
  if (local_830 != 0) {
    LOCK();
    *(int *)(local_830 + 8) = *(int *)(local_830 + 8) + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)operator_new(0x88);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar7);
    *puVar7 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  puVar12 = (undefined8 *)0x0;
  lVar13 = SVerticalBox::FSlot::AutoHeight(puVar7);
  local_8a0 = 1;
  local_898 = 0;
  local_890 = 0;
  *(undefined2 *)(lVar13 + 0x20) = 0x202;
  cVar4 = *(char *)(param_2 + 0x169);
  *(undefined1 *)(lVar13 + 0x58) = 1;
  local_8b0 = (float)(-(cVar4 != '\0') & 2);
  *(float *)(lVar13 + 0x48) = local_8b0;
  *(float *)(lVar13 + 0x4c) = local_8b0;
  *(float *)(lVar13 + 0x50) = local_8b0;
  *(float *)(lVar13 + 0x54) = local_8b0;
  fStack_8ac = local_8b0;
  fStack_8a8 = local_8b0;
  fStack_8a4 = local_8b0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x60,&local_898);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_898);
  local_848 = *(undefined8 *)(param_2 + 0x118);
  local_840 = *(longlong *)(param_2 + 0x120);
  if (local_840 != 0) {
    LOCK();
    *(int *)(local_840 + 8) = *(int *)(local_840 + 8) + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)operator_new(0x88);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar7);
    *puVar7 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar12 = puVar7;
  }
  param_1[0x60] = (longlong)puVar12;
  local_940 = 1;
  local_938 = 0x3f800000;
  local_934 = 1;
  local_930 = 0;
  local_928 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_930,&local_8d8);
  *(undefined4 *)(puVar12 + 5) = local_940;
  *(undefined1 *)((longlong)puVar12 + 0x34) = local_934;
  *(undefined4 *)(puVar12 + 6) = local_938;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar12 + 7,&local_930);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_930);
  *(undefined1 *)(puVar12 + 4) = *(undefined1 *)(param_2 + 0x230);
  *(undefined1 *)((longlong)puVar12 + 0x21) = *(undefined1 *)(param_2 + 0x234);
  local_8f0 = FUN_140692760(puVar12,&local_848);
  lVar6 = SCanvas::FArguments::FArguments(local_5d8);
  plVar9 = (longlong *)(lVar6 + 0x108);
  iVar2 = *(int *)(lVar6 + 0x110);
  *(int *)(lVar6 + 0x110) = iVar2 + 1;
  local_8e8 = lVar6;
  if (*(int *)(lVar6 + 0x114) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
  }
  *(undefined8 *)(*plVar9 + (longlong)iVar2 * 8) = local_8f0;
  uVar8 = FUN_140692760(lVar13,&local_838);
  iVar2 = *(int *)(lVar6 + 0x110);
  *(int *)(lVar6 + 0x110) = iVar2 + 1;
  if (*(int *)(lVar6 + 0x114) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
  }
  *(undefined8 *)(*plVar9 + (longlong)iVar2 * 8) = uVar8;
  plVar9 = (longlong *)operator_new(0x248);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144044b58;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar10 = plVar9 + 2;
  local_920 = plVar10;
  local_918 = plVar9;
  FUN_14044f790(&local_920,plVar10);
  local_910 = local_973;
  local_9c8 = 0x238;
  SWidget::SetDebugInfo
            (plVar10,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x2d);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_960 = 0;
  local_958 = plVar9;
  local_950 = plVar10;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_948,&local_958);
  plVar9 = local_958;
  if (local_958 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_958 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_958)(local_958);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_958 + 8))(local_958,1);
      }
    }
  }
  puVar7 = (undefined8 *)FUN_140693150(&local_920,local_7b8,local_8e8);
  local_818 = *puVar7;
  local_810 = puVar7[1];
  if (local_810 != 0) {
    LOCK();
    *(int *)(local_810 + 8) = *(int *)(local_810 + 8) + 1;
    UNLOCK();
  }
  lVar13 = FUN_14068f3e0(local_338);
  uStack_7c0 = CONCAT44(uStack_81c,uStack_820);
  local_7c8 = local_828;
  *(longlong *)(lVar13 + 0x118) = lVar11;
  *(undefined4 *)(lVar13 + 0x1d8) = 1;
  uVar8 = FUN_14068c820(&local_970,param_1,&local_7c8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x188,uVar8);
  if (local_968 != 0) {
    if (local_970 == (longlong *)0x0) goto LAB_14192eae7;
    (**(code **)(*local_970 + 0x28))(local_970,0);
    if (local_970 != (longlong *)0x0) {
      local_970 = (longlong *)FMemory::Realloc(local_970,0,0);
    }
    local_968 = 0;
  }
  if (local_970 != (longlong *)0x0) {
    FMemory::Free(local_970);
  }
LAB_14192eae7:
  uVar8 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(lVar13 + 0x130) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(lVar13 + 0x138) = uVar8;
  *(undefined1 *)(lVar13 + 0x140) = *(undefined1 *)(param_2 + 0x200);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x148,param_2 + 0x208);
  FUN_140692440(lVar13 + 0x268,param_2 + 0x170);
  *(undefined1 *)(lVar13 + 0x290) = *(undefined1 *)(param_2 + 0x198);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x298,param_2 + 0x1a0);
  FUN_140692440(lVar13 + 0x228,param_2 + 0x1b0);
  *(undefined1 *)(lVar13 + 0x250) = *(undefined1 *)(param_2 + 0x1d8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 600,param_2 + 0x1e0);
  *(undefined1 *)(lVar13 + 0x2a8) = *(undefined1 *)(param_2 + 0x168);
  plVar10 = (longlong *)FUN_141880af0();
  plVar9 = plVar10 + 2;
  local_798 = plVar9;
  local_790 = plVar10;
  FUN_14044f790(&local_798,plVar9);
  local_9c8 = 0x488;
  SWidget::SetDebugInfo
            (plVar9,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SComboButton.cpp"
             ,0x20);
  lVar11 = FUN_14188d200(lVar13,&local_818);
  local_9b8 = *(undefined4 *)(lVar11 + 0x90);
  local_988 = lVar11 + 0xf8;
  local_9a0 = lVar11 + 0xe8;
  local_990 = *(undefined1 *)(lVar11 + 0xf1);
  local_9c8 = lVar11 + 0x60;
  local_9a8 = lVar11 + 200;
  local_998 = *(undefined1 *)(lVar11 + 0xf0);
  local_9b0 = lVar11 + 0x98;
  local_9c0 = lVar11 + 0x78;
  plVar9 = plVar10 + 2;
  SWidget::SWidgetConstruct(plVar9,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_14192dae0(plVar9,lVar11);
  if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar9 + 0x1e8))(plVar9), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar5;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_978 = *(char *)(param_2 + 0x239);
  if (local_978 != '\0') {
    local_976[0] = *(undefined1 *)(param_2 + 0x238);
  }
  uVar3 = local_976[0];
  local_808 = plVar9;
  local_800 = plVar10;
  lVar11 = FUN_1418cec60(local_4b8);
  *(undefined4 *)(lVar11 + 0x158) = *(undefined4 *)(param_2 + 0x218);
  *(undefined1 *)(lVar11 + 0x15c) = *(undefined1 *)(param_2 + 0x21c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x160,param_2 + 0x220);
  if (local_976 != (undefined1 *)(lVar11 + 0x170)) {
    if (*(char *)(lVar11 + 0x171) != '\0') {
      *(undefined1 *)(lVar11 + 0x171) = 0;
    }
    if (local_978 != '\0') {
      *(undefined1 *)(lVar11 + 0x170) = uVar3;
      *(undefined1 *)(lVar11 + 0x171) = 1;
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x148,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x138,param_2 + 0x138);
  *(undefined1 *)(lVar11 + 0x174) = *(undefined1 *)(param_2 + 0x23a);
  uVar8 = FUN_14188d200(lVar11,&local_808);
  FUN_141933410(param_1,uVar8);
  FUN_1418d2380(local_4b8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    LOCK();
    plVar9 = plVar10 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  FUN_140690f70(local_338);
  if (local_7b0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_7b0 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_7b0)(local_7b0);
      LOCK();
      piVar1 = (int *)((longlong)local_7b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_7b0 + 8))(local_7b0,1);
      }
    }
  }
  plVar9 = local_918;
  if (local_918 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_918 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_918)(local_918);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_918 + 8))(local_918,1);
      }
    }
  }
  if (local_4d0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_5d8);
  if (local_7a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_7a0 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_7a0)(local_7a0);
      LOCK();
      piVar1 = (int *)((longlong)local_7a0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_7a0 + 8))(local_7a0,1);
      }
    }
  }
  plVar9 = local_900;
  if (local_900 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_900 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_900)(local_900);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_900 + 8))(local_900,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_5f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_600);
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_610 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)local_610 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_610 + 8))(local_610,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_640);
  FUN_140456c70(local_758);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_8d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_8c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_7d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_858);
  plVar9 = plStack_868;
  if (plStack_868 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_868 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_868)(plStack_868);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_868 + 8))(plStack_868,1);
      }
    }
  }
  local_7f8 = *(undefined8 *)(param_2 + 0x128);
  local_7f0 = *(longlong *)(param_2 + 0x130);
  if (local_7f0 != 0) {
    LOCK();
    *(int *)(local_7f0 + 8) = *(int *)(local_7f0 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x208))(param_1,&local_7f8);
  plVar9 = local_948;
  if (local_948 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_948 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_948)(local_948);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_948 + 8))(local_948,1);
      }
    }
  }
  return;
}



// FUNCTION 14192f0b0 FUN_14192f0b0 body=7849 status=ok
// SIG undefined FUN_14192f0b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14192f0b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  char cVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_2038 [32];
  ulonglong local_2018;
  longlong local_2010;
  undefined4 local_2008;
  longlong local_2000;
  longlong local_1ff8;
  longlong local_1ff0;
  undefined1 local_1fe8;
  undefined1 local_1fe0;
  longlong local_1fd8;
  undefined1 local_1fc8;
  undefined1 local_1fc7;
  undefined1 local_1fc6;
  undefined1 local_1fc5;
  undefined1 local_1fc4;
  undefined1 local_1fc3;
  undefined1 local_1fc2;
  undefined1 local_1fc1;
  undefined1 local_1fc0;
  undefined1 local_1fbf [7];
  undefined8 local_1fb8;
  undefined4 uStack_1fb0;
  uint uStack_1fac;
  int local_1fa8;
  uint local_1fa4;
  longlong local_1fa0;
  undefined8 local_1f98;
  longlong *plStack_1f90;
  undefined8 local_1f88;
  longlong *plStack_1f80;
  undefined8 local_1f78;
  undefined4 uStack_1f70;
  undefined4 uStack_1f6c;
  undefined8 local_1f68;
  longlong *plStack_1f60;
  longlong *local_1f58;
  longlong *local_1f50;
  undefined8 local_1f48;
  longlong *plStack_1f40;
  longlong *local_1f38;
  int local_1f30;
  undefined8 local_1f28;
  undefined4 uStack_1f20;
  undefined4 uStack_1f1c;
  code *local_1f18;
  undefined4 uStack_1f10;
  undefined4 uStack_1f0c;
  longlong *local_1f08;
  int local_1f00;
  longlong *local_1ef8;
  int local_1ef0;
  longlong *local_1ee8;
  int local_1ee0;
  undefined1 *local_1ed8;
  undefined2 local_1ed0;
  undefined8 local_1ec8;
  undefined4 local_1ec0;
  undefined8 local_1eb8;
  longlong *local_1eb0;
  undefined8 local_1ea8;
  longlong *local_1ea0;
  undefined8 local_1e98;
  longlong *local_1e90;
  undefined8 local_1e88;
  longlong *local_1e80;
  undefined8 local_1e78;
  undefined4 uStack_1e70;
  undefined4 uStack_1e6c;
  undefined8 local_1e68;
  undefined4 uStack_1e60;
  undefined4 uStack_1e5c;
  undefined8 local_1e58;
  undefined4 uStack_1e50;
  undefined4 uStack_1e4c;
  code *local_1e48;
  undefined4 uStack_1e40;
  undefined1 local_1e38;
  undefined1 local_1e37;
  undefined8 local_1e30;
  undefined4 local_1e28;
  longlong local_1e20;
  longlong local_1e18;
  undefined1 *local_1e10;
  undefined1 local_1e08;
  undefined1 local_1e07;
  undefined8 local_1e00;
  undefined4 local_1df8;
  undefined4 local_1df0;
  undefined4 local_1dec;
  undefined1 local_1de8;
  undefined8 local_1de0;
  undefined4 local_1dd8;
  longlong local_1dd0;
  longlong local_1dc8;
  undefined1 *local_1dc0;
  longlong local_1db8;
  longlong local_1db0;
  undefined1 *local_1da8;
  undefined8 local_1da0;
  undefined4 local_1d98;
  undefined1 local_1d94;
  undefined8 local_1d90;
  undefined4 local_1d88;
  longlong *local_1d80;
  longlong *local_1d78;
  undefined1 *local_1d70;
  longlong local_1d68;
  longlong local_1d60;
  undefined1 *local_1d58;
  longlong local_1d50;
  longlong local_1d48;
  undefined1 *local_1d40;
  undefined1 local_1d38;
  undefined1 local_1d37;
  undefined8 local_1d30;
  undefined4 local_1d28;
  longlong local_1d20;
  longlong local_1d18;
  undefined1 *local_1d10;
  undefined1 local_1d08;
  undefined1 local_1d07;
  undefined8 local_1d00;
  undefined4 local_1cf8;
  undefined8 local_1cf0;
  undefined8 uStack_1ce8;
  undefined1 local_1ce0;
  undefined8 local_1cd8;
  undefined4 local_1cd0;
  undefined4 local_1cc8;
  undefined4 local_1cc4;
  undefined1 local_1cc0;
  undefined8 local_1cb8;
  undefined4 local_1cb0;
  undefined8 local_1ca8;
  undefined1 local_1ca0;
  undefined8 local_1c98;
  undefined4 local_1c90;
  undefined1 local_1c88 [8];
  longlong *local_1c80;
  undefined1 local_1c70;
  undefined8 local_1c68;
  undefined4 local_1c60;
  undefined1 local_1c58 [24];
  undefined1 local_1c40;
  undefined8 local_1c38;
  undefined4 local_1c30;
  longlong *local_1c28;
  longlong *local_1c20;
  undefined1 *local_1c18;
  longlong *local_1c10;
  longlong *local_1c08;
  undefined1 *local_1c00;
  longlong *local_1bf8;
  longlong *local_1bf0;
  undefined1 *local_1be8;
  undefined8 local_1be0;
  longlong local_1bd8;
  undefined8 local_1bd0;
  longlong local_1bc8;
  undefined8 local_1bc0;
  longlong local_1bb8;
  longlong *local_1bb0;
  longlong *local_1ba8;
  longlong *local_1ba0;
  longlong *local_1b98;
  undefined8 local_1b90;
  longlong *local_1b88;
  longlong *local_1b80;
  longlong *local_1b78;
  undefined8 local_1b70;
  undefined8 uStack_1b68;
  undefined1 local_1b60;
  undefined8 local_1b58;
  undefined4 local_1b50;
  undefined4 local_1b48;
  undefined4 uStack_1b44;
  undefined4 uStack_1b40;
  undefined4 uStack_1b3c;
  undefined1 local_1b38;
  undefined8 local_1b30;
  undefined4 local_1b28;
  undefined8 local_1b20;
  undefined8 uStack_1b18;
  undefined1 local_1b10;
  undefined8 local_1b08;
  undefined4 local_1b00;
  undefined1 local_1af8 [24];
  undefined1 local_1ae0;
  undefined8 local_1ad8;
  undefined4 local_1ad0;
  undefined8 local_1ac8;
  undefined8 local_1ac0;
  undefined4 local_1ab8;
  undefined4 uStack_1ab4;
  undefined4 uStack_1ab0;
  undefined4 uStack_1aac;
  undefined1 local_1aa8 [16];
  undefined1 local_1a98 [16];
  undefined1 local_1a88 [8];
  longlong *local_1a80;
  undefined1 local_1a78 [8];
  longlong *local_1a70;
  undefined1 local_1a68 [8];
  longlong *local_1a60;
  undefined1 local_1a58 [8];
  longlong *local_1a50;
  undefined1 local_1a48 [8];
  longlong *local_1a40;
  undefined1 local_1a38 [8];
  longlong *local_1a30;
  undefined1 local_1a28 [8];
  longlong *local_1a20;
  undefined4 local_1a18;
  undefined4 uStack_1a14;
  undefined4 uStack_1a10;
  undefined4 uStack_1a0c;
  undefined4 local_1a08;
  undefined4 uStack_1a04;
  undefined4 uStack_1a00;
  undefined4 uStack_19fc;
  undefined4 local_19f8;
  undefined4 uStack_19f4;
  undefined4 uStack_19f0;
  uint uStack_19ec;
  undefined4 local_19e8;
  undefined4 uStack_19e4;
  undefined4 uStack_19e0;
  undefined4 uStack_19dc;
  undefined4 local_19d8;
  undefined4 uStack_19d4;
  undefined4 uStack_19d0;
  undefined4 uStack_19cc;
  undefined4 local_19c8;
  undefined4 uStack_19c4;
  undefined4 uStack_19c0;
  undefined4 uStack_19bc;
  undefined4 local_19b8;
  undefined4 uStack_19b4;
  undefined4 uStack_19b0;
  undefined4 uStack_19ac;
  undefined4 local_19a8;
  undefined4 uStack_19a4;
  undefined4 uStack_19a0;
  uint uStack_199c;
  code *local_1998;
  longlong lStack_1990;
  undefined4 local_1988;
  undefined4 uStack_1984;
  undefined4 uStack_1980;
  undefined4 uStack_197c;
  undefined4 local_1978;
  undefined4 uStack_1974;
  undefined4 uStack_1970;
  uint uStack_196c;
  code *local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 local_1950;
  undefined1 local_1948 [8];
  undefined8 local_1940;
  undefined8 local_1938;
  undefined4 local_1928;
  undefined4 uStack_1924;
  undefined4 uStack_1920;
  uint uStack_191c;
  undefined4 local_1918;
  undefined4 uStack_1914;
  undefined4 uStack_1910;
  undefined4 uStack_190c;
  undefined1 local_1908 [8];
  undefined1 local_1900 [24];
  undefined1 local_18e8;
  undefined1 local_18e0 [16];
  undefined1 local_18d0 [88];
  undefined8 local_1878;
  longlong *plStack_1870;
  undefined8 local_1868;
  longlong *plStack_1860;
  undefined8 local_1858;
  longlong *plStack_1850;
  undefined8 local_1848;
  longlong *plStack_1840;
  undefined1 local_1838 [264];
  longlong local_1730;
  undefined1 local_1718 [264];
  longlong local_1610;
  undefined1 local_15f8 [280];
  undefined1 local_14e0 [24];
  undefined1 local_14c8 [384];
  undefined1 local_1348 [384];
  undefined1 local_11c8 [688];
  undefined1 local_f18 [688];
  undefined1 local_c68 [688];
  undefined1 local_9b8 [688];
  undefined1 local_708 [768];
  undefined1 local_408 [912];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_2038;
  uVar12 = FCurveSequence::FCurveSequence(local_18d0,0,0x3e19999a,0);
  FUN_1417f8e00(param_1 + 0x508,uVar12);
  FUN_1417f61f0(local_18d0);
  FCurveSequence::JumpToEnd(param_1 + 0x508);
  plVar5 = *(longlong **)(param_2 + 0x110);
  puVar13 = (undefined8 *)(param_1 + 0x3a8);
  uVar12 = *(undefined8 *)(param_2 + 0x108);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1f98 = uVar12;
  plStack_1f90 = plVar5;
  if (&local_1f98 != puVar13) {
    local_1f98 = *puVar13;
    plStack_1f90 = *(longlong **)(param_1 + 0x3b0);
    *puVar13 = uVar12;
    *(longlong **)(param_1 + 0x3b0) = plVar5;
    local_1848 = uVar12;
    plStack_1840 = plVar5;
  }
  plVar5 = plStack_1f90;
  if (plStack_1f90 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_1f90 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_1f90)(plStack_1f90);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_1f90 + 8))(plStack_1f90,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x120);
  puVar13 = (undefined8 *)(param_1 + 0x3b8);
  uVar12 = *(undefined8 *)(param_2 + 0x118);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1f48 = uVar12;
  plStack_1f40 = plVar5;
  if (&local_1f48 != puVar13) {
    local_1f48 = *puVar13;
    plStack_1f40 = *(longlong **)(param_1 + 0x3c0);
    *puVar13 = uVar12;
    *(longlong **)(param_1 + 0x3c0) = plVar5;
    local_1868 = uVar12;
    plStack_1860 = plVar5;
  }
  plVar5 = plStack_1f40;
  if (plStack_1f40 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_1f40 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_1f40)(plStack_1f40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_1f40 + 8))(plStack_1f40,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x130);
  puVar13 = (undefined8 *)(param_1 + 0x3c8);
  uVar12 = *(undefined8 *)(param_2 + 0x128);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1f88 = uVar12;
  plStack_1f80 = plVar5;
  if (&local_1f88 != puVar13) {
    local_1f88 = *puVar13;
    plStack_1f80 = *(longlong **)(param_1 + 0x3d0);
    *puVar13 = uVar12;
    *(longlong **)(param_1 + 0x3d0) = plVar5;
    local_1878 = uVar12;
    plStack_1870 = plVar5;
  }
  plVar5 = plStack_1f80;
  if (plStack_1f80 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_1f80 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_1f80)(plStack_1f80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_1f80 + 8))(plStack_1f80,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3f8) = *(undefined1 *)(param_2 + 0x170);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x460,param_2 + 0x1c8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x480,param_2 + 0x1f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x490,param_2 + 0x200);
  FText::operator=(param_1 + 0x410,param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(param_2 + 400);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x430,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x448) = *(undefined1 *)(param_2 + 0x1b0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x450,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x4d8) = *(undefined1 *)(param_2 + 0x1e8);
  uVar3 = *(undefined4 *)(param_2 + 0x214);
  uVar4 = *(undefined4 *)(param_2 + 0x218);
  uVar6 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x4e4) = uVar3;
  *(undefined4 *)(param_1 + 0x4e8) = uVar4;
  *(undefined4 *)(param_1 + 0x4ec) = uVar6;
  *(undefined1 *)(param_1 + 0x4f0) = *(undefined1 *)(param_2 + 0x220);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4f8,param_2 + 0x228);
  plVar5 = DAT_1469eb140;
  puVar13 = (undefined8 *)FName::FName(local_1948,"Docking.MajorTab",1);
  local_1940 = *puVar13;
  local_1938 = local_1940;
  lVar14 = (**(code **)(*plVar5 + 0x80))(plVar5,DAT_1469eb1f8);
  if (lVar14 == 0) {
    lVar14 = FUN_141834b80();
  }
  *(longlong *)(param_1 + 0x4a0) = lVar14;
  plVar5 = DAT_1469eb140;
  puVar13 = (undefined8 *)FName::FName(local_1908,"Docking.Tab",1);
  local_1ac8 = *puVar13;
  local_1ac0 = local_1ac8;
  lVar14 = (**(code **)(*plVar5 + 0x80))(plVar5,DAT_1469eb1f8);
  if (lVar14 == 0) {
    lVar14 = FUN_141834b80();
  }
  *(longlong *)(param_1 + 0x4a8) = lVar14;
  uVar3 = *(undefined4 *)(param_2 + 0x14c);
  uVar4 = *(undefined4 *)(param_2 + 0x150);
  uVar6 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x4b4) = uVar3;
  *(undefined4 *)(param_1 + 0x4b8) = uVar4;
  *(undefined4 *)(param_1 + 0x4bc) = uVar6;
  *(undefined1 *)(param_1 + 0x4c0) = *(undefined1 *)(param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4c8,param_2 + 0x160);
  cVar10 = FUN_141943900(param_1);
  if (cVar10 == '\0') {
    local_1fa0 = *(longlong *)(param_1 + 0x4a0);
  }
  else {
    local_1fa0 = *(longlong *)(param_1 + 0x4a8);
  }
  uVar3 = *(undefined4 *)(local_1fa0 + 0x18);
  uVar4 = *(undefined4 *)(local_1fa0 + 0x1c);
  local_1f78 = FUN_141943fb0;
  local_1e68 = FUN_14193f510;
  local_1cc0 = 1;
  local_1e78 = FUN_1419474a0;
  local_1cb8 = 0;
  local_1cb0 = 0;
  uStack_1f70 = 0;
  uStack_1e60 = 0;
  local_1b20 = 0;
  uStack_1b18 = 0;
  local_1b10 = 1;
  local_1b08 = 0;
  local_1b00 = 0;
  uStack_1e70 = 0;
  local_1fb8 = SDockTab::GetTabLabel;
  uStack_1fb0 = 0;
  local_1cc8 = uVar3;
  local_1cc4 = uVar4;
  FName::FName(&local_1da0,"Docking.TabFont",1);
  local_1f18 = FUN_1419423a0;
  local_1f28 = FUN_141942310;
  local_1e48 = FUN_14193fb90;
  local_1e38 = DAT_1464b9eeb;
  local_1d98 = 0x3f800000;
  local_1d94 = 1;
  local_1d90 = 0;
  local_1d88 = 0;
  uStack_1f10 = 0;
  uStack_1f20 = 0;
  uStack_1e40 = 0;
  local_1e37 = 1;
  local_1e30 = 0;
  local_1e28 = 0;
  local_1b48 = 0x3f800000;
  uStack_1b44 = 0x3f800000;
  uStack_1b40 = 0x3f800000;
  uStack_1b3c = 0x3f800000;
  local_1b38 = 1;
  local_1b30 = 0;
  local_1b28 = 0;
  bVar24 = *(char *)(param_2 + 0x18) == '\0';
  if (bVar24) {
    local_1e58 = SDockTab::GetTabLabel;
    uStack_1e50 = 0;
    FText::FText(local_1900);
    local_19b8 = (undefined4)local_1e58;
    uStack_19b4 = local_1e58._4_4_;
    uStack_19b0 = uStack_1e50;
    uStack_19ac = uStack_1e4c;
    local_18e8 = 1;
    FUN_14187ce90(local_18e0,param_1,&local_19b8);
    local_1ed8 = local_1900;
    local_1fa8 = 2;
  }
  else {
    FText::FText(local_1af8,param_2);
    local_1ae0 = *(undefined1 *)(param_2 + 0x18);
    local_1ad8 = 0;
    local_1ad0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1ad8,param_2 + 0x20);
    local_1ed8 = local_1af8;
    local_1fa8 = 0;
  }
  local_1fa4 = (uint)!bVar24;
  uStack_1960 = CONCAT44(uStack_1f0c,uStack_1f10);
  local_1968 = local_1f18;
  local_1e08 = DAT_1464b9ee8;
  local_1e07 = 1;
  local_1e00 = 0;
  local_1df8 = 0;
  local_1a08 = (undefined4)local_1f28;
  uStack_1a04 = local_1f28._4_4_;
  uStack_1a00 = uStack_1f20;
  uStack_19fc = uStack_1f1c;
  lVar14 = SSpacer::FArguments::FArguments(local_15f8);
  *(undefined4 *)(lVar14 + 0x108) = uVar3;
  *(undefined4 *)(lVar14 + 0x10c) = uVar4;
  *(undefined1 *)(lVar14 + 0x110) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x118,&local_1cb8);
  plVar15 = (longlong *)FUN_141880f80();
  plVar5 = plVar15 + 2;
  local_1e58 = (code *)plVar15;
  local_1bf8 = plVar5;
  local_1bf0 = plVar15;
  FUN_14044f790(&local_1bf8,plVar5);
  local_1be8 = &local_1fc8;
  local_2018 = 0x228;
  SWidget::SetDebugInfo
            (plVar5,"SSpacer",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x245);
  local_2008 = *(undefined4 *)(lVar14 + 0x90);
  local_1fd8 = lVar14 + 0xf8;
  local_1ff0 = lVar14 + 0xe8;
  local_1fe0 = *(undefined1 *)(lVar14 + 0xf1);
  local_1ff8 = lVar14 + 200;
  local_2000 = lVar14 + 0x98;
  local_1fe8 = *(undefined1 *)(lVar14 + 0xf0);
  local_2010 = lVar14 + 0x78;
  local_2018 = lVar14 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar14,lVar14 + 0x30,lVar14 + 0x40);
  SSpacer::Construct(plVar5,lVar14);
  if (((char)plVar15[5] < '\0') || (cVar10 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar10 != '\0')
     ) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar11;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1ba0 = plVar5;
  local_1b98 = plVar15;
  lVar14 = FUN_14068f3e0(local_708);
  local_19c8 = (undefined4)local_1e78;
  uStack_19c4 = local_1e78._4_4_;
  uStack_19c0 = uStack_1e70;
  uStack_19bc = uStack_1e6c;
  *(longlong *)(lVar14 + 0x118) = local_1fa0 + 8;
  uVar12 = FUN_14068c820(&local_1f08,param_1,&local_19c8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x188,uVar12);
  if (local_1f00 == 0) {
LAB_14192f8ea:
    if (local_1f08 != (longlong *)0x0) {
      FMemory::Free(local_1f08);
    }
  }
  else if (local_1f08 != (longlong *)0x0) {
    (**(code **)(*local_1f08 + 0x28))(local_1f08,0);
    if (local_1f08 != (longlong *)0x0) {
      local_1f08 = (longlong *)FMemory::Realloc(local_1f08,0,0);
    }
    local_1f00 = 0;
    goto LAB_14192f8ea;
  }
  *(undefined1 *)(lVar14 + 0x140) = 1;
  *(undefined4 *)(lVar14 + 0x130) = (undefined4)local_1b20;
  *(undefined4 *)(lVar14 + 0x134) = local_1b20._4_4_;
  *(undefined4 *)(lVar14 + 0x138) = (undefined4)uStack_1b18;
  *(undefined4 *)(lVar14 + 0x13c) = uStack_1b18._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x148,&local_1b08);
  local_19d8 = (undefined4)local_1e68;
  uStack_19d4 = local_1e68._4_4_;
  uStack_19d0 = uStack_1e60;
  uStack_19cc = uStack_1e5c;
  uVar12 = FUN_14187ce90(&local_1f38,param_1,&local_19d8);
  FText::FText(local_1c88);
  local_1c70 = 1;
  local_1c68 = 0;
  local_1c60 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1c68,uVar12);
  FText::operator=(lVar14,local_1c88);
  *(undefined1 *)(lVar14 + 0x18) = local_1c70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x20,&local_1c68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c68);
  if (local_1c80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1c80 + 1;
    lVar16 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_1c80)(local_1c80);
      LOCK();
      piVar1 = (int *)((longlong)local_1c80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1c80 + 8))(local_1c80,1);
      }
    }
  }
  if (local_1f30 == 0) {
LAB_14192fa1d:
    if (local_1f38 != (longlong *)0x0) {
      FMemory::Free(local_1f38);
    }
  }
  else if (local_1f38 != (longlong *)0x0) {
    (**(code **)(*local_1f38 + 0x28))(local_1f38,0);
    if (local_1f38 != (longlong *)0x0) {
      local_1f38 = (longlong *)FMemory::Realloc(local_1f38,0,0);
    }
    local_1f30 = 0;
    goto LAB_14192fa1d;
  }
  local_19e8 = (undefined4)local_1f78;
  uStack_19e4 = local_1f78._4_4_;
  uStack_19e0 = uStack_1f70;
  uStack_19dc = uStack_1f6c;
  uVar12 = FUN_1417dd840(&local_1ef8,param_1,&local_19e8);
  local_1ed0 = 0x119;
  local_1ec8 = 0;
  local_1ec0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1ec8,uVar12);
  *(undefined1 *)(lVar14 + 0x78) = (undefined1)local_1ed0;
  *(undefined1 *)(lVar14 + 0x79) = local_1ed0._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x80,&local_1ec8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1ec8);
  if (local_1ef0 == 0) {
LAB_14192fac2:
    if (local_1ef8 != (longlong *)0x0) {
      FMemory::Free(local_1ef8);
    }
  }
  else if (local_1ef8 != (longlong *)0x0) {
    (**(code **)(*local_1ef8 + 0x28))(local_1ef8,0);
    if (local_1ef8 != (longlong *)0x0) {
      local_1ef8 = (longlong *)FMemory::Realloc(local_1ef8,0,0);
    }
    local_1ef0 = 0;
    goto LAB_14192fac2;
  }
  plVar15 = (longlong *)FUN_141880af0();
  plVar5 = plVar15 + 2;
  local_1c10 = plVar5;
  local_1c08 = plVar15;
  FUN_14044f790(&local_1c10,plVar5);
  local_1c00 = &local_1fc7;
  local_2018 = 0x488;
  SWidget::SetDebugInfo
            (plVar5,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x23e);
  lVar14 = FUN_14188d200(lVar14,&local_1ba0);
  local_2008 = *(undefined4 *)(lVar14 + 0x90);
  local_1fd8 = lVar14 + 0xf8;
  local_1ff0 = lVar14 + 0xe8;
  local_1fe0 = *(undefined1 *)(lVar14 + 0xf1);
  local_2010 = lVar14 + 0x78;
  local_1ff8 = lVar14 + 200;
  local_1fe8 = *(undefined1 *)(lVar14 + 0xf0);
  local_2000 = lVar14 + 0x98;
  local_2018 = lVar14 + 0x60;
  plVar5 = plVar15 + 2;
  SWidget::SWidgetConstruct(plVar5,lVar14,lVar14 + 0x30,lVar14 + 0x40);
  FUN_14192dae0(plVar5,lVar14);
  if (((char)plVar15[5] < '\0') || (cVar10 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar10 != '\0')
     ) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar11;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1b80 = plVar5;
  local_1b78 = plVar15;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  puVar23 = (undefined8 *)0x0;
  local_1fa0 = SVerticalBox::FSlot::AutoHeight(puVar13);
  *(undefined2 *)(local_1fa0 + 0x20) = 0x202;
  plVar5 = DAT_1469eb140;
  lVar14 = STextBlock::FArguments::FArguments(local_408);
  local_1950 = local_1da0;
  local_1958 = local_1da0;
  lVar16 = (**(code **)(*plVar5 + 0x80))(plVar5,DAT_1469eb158);
  if (lVar16 == 0) {
    lVar16 = FUN_141835350();
  }
  local_19f8 = (undefined4)local_1fb8;
  uStack_19f4 = local_1fb8._4_4_;
  uStack_19f0 = uStack_1fb0;
  uStack_19ec = uStack_1fac;
  *(longlong *)(lVar14 + 0x138) = lVar16;
  uVar12 = FUN_14187ce90(&local_1ee8,param_1,&local_19f8);
  FText::FText(local_1c58);
  local_1c40 = 1;
  local_1c38 = 0;
  local_1c30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1c38,uVar12);
  FText::operator=(lVar14 + 0x108,local_1c58);
  *(undefined1 *)(lVar14 + 0x120) = local_1c40;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x128,&local_1c38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c38);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1c58);
  if (local_1ee0 != 0) {
    if (local_1ee8 == (longlong *)0x0) goto LAB_14192fd7c;
    (**(code **)(*local_1ee8 + 0x28))(local_1ee8,0);
    if (local_1ee8 != (longlong *)0x0) {
      local_1ee8 = (longlong *)FMemory::Realloc(local_1ee8,0,0);
    }
    local_1ee0 = 0;
  }
  if (local_1ee8 != (longlong *)0x0) {
    FMemory::Free(local_1ee8);
  }
LAB_14192fd7c:
  local_1e18 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
  local_1e20 = local_1e18 + 0x10;
  FUN_14044f790(&local_1e20);
  local_1e10 = &local_1fc6;
  local_2018 = 0x650;
  SWidget::SetDebugInfo
            (local_1e20,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x232);
  uVar12 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_1e20,param_1 + 0x5c8);
  puVar13 = (undefined8 *)FUN_140693250(uVar12,local_1a28,lVar14);
  local_1bd0 = *puVar13;
  local_1bc8 = puVar13[1];
  if (local_1bc8 != 0) {
    LOCK();
    *(int *)(local_1bc8 + 8) = *(int *)(local_1bc8 + 8) + 1;
    UNLOCK();
  }
  puVar17 = (undefined8 *)operator_new(0x88);
  puVar13 = puVar23;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar17);
    *puVar17 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar13 = puVar17;
  }
  uVar12 = SHorizontalBox::FSlot::FillWidth(puVar13,&local_1d98);
  local_1f28 = (code *)SHorizontalBox::FSlot::Padding(uVar12,0,0x3f800000);
  *(undefined1 *)((longlong)local_1f28 + 0x21) = 2;
  plVar18 = (longlong *)FUN_140c61c00();
  plVar5 = plVar18 + 2;
  local_1d80 = plVar5;
  local_1d78 = plVar18;
  FUN_14044f790(&local_1d80,plVar5);
  local_1d70 = &local_1fc5;
  local_2018 = 0x278;
  SWidget::SetDebugInfo
            (plVar5,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x228);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_1f58 = plVar5;
  local_1f50 = plVar18;
  if ((longlong **)(param_1 + 0x5d8) != &local_1f58) {
    *(longlong **)(param_1 + 0x5d8) = plVar5;
    local_1f58 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5e0,&local_1f50);
  }
  plVar5 = local_1f50;
  if (local_1f50 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1f50 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1f50)(local_1f50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1f50 + 8))(local_1f50,1);
      }
    }
  }
  uVar12 = SImage::FArguments::FArguments(local_1348);
  uVar12 = SImage::FArguments::Image<SFlareButton>(uVar12,param_1,&local_1968);
  puVar13 = (undefined8 *)FUN_14188e090(&local_1d80,local_1a38,uVar12);
  local_1be0 = *puVar13;
  local_1bd8 = puVar13[1];
  if (local_1bd8 != 0) {
    LOCK();
    *(int *)(local_1bd8 + 8) = *(int *)(local_1bd8 + 8) + 1;
    UNLOCK();
  }
  lVar16 = FUN_141886d30(local_9b8);
  *(undefined1 *)(lVar16 + 0x130) = 1;
  *(undefined4 *)(lVar16 + 0x120) = local_1b48;
  *(undefined4 *)(lVar16 + 0x124) = uStack_1b44;
  *(undefined4 *)(lVar16 + 0x128) = uStack_1b40;
  *(undefined4 *)(lVar16 + 300) = uStack_1b3c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x138,&local_1b30);
  *(undefined1 *)(lVar16 + 0x78) = local_1e38;
  *(undefined1 *)(lVar16 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x80,&local_1e30);
  local_1d60 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
  lVar14 = local_1d60 + 0x10;
  local_1d68 = lVar14;
  FUN_14044f790(&local_1d68,lVar14);
  local_1d58 = &local_1fc4;
  local_2018 = 0x388;
  SWidget::SetDebugInfo
            (lVar14,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x220);
  uVar12 = SBorder::FArguments::BorderImage<SFlareListItem>(lVar16,param_1,&local_1e48);
  uVar12 = FUN_14191ee50(uVar12,param_1,&local_1a08);
  uVar12 = FUN_14188d200(uVar12,&local_1be0);
  puVar13 = (undefined8 *)FUN_1418d3ed0(&local_1d68,local_1a48,uVar12);
  local_1bb8 = puVar13[1];
  local_1bc0 = *puVar13;
  if (local_1bb8 != 0) {
    LOCK();
    *(int *)(local_1bb8 + 8) = *(int *)(local_1bb8 + 8) + 1;
    UNLOCK();
  }
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar13);
    *puVar13 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar23 = puVar13;
  }
  local_1f18 = (code *)SVerticalBox::FSlot::AutoHeight(puVar23);
  *(undefined1 *)((longlong)local_1f18 + 0x21) = 2;
  plVar5 = *(longlong **)(param_2 + 0x38);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1b90 = uVar12;
  local_1b88 = plVar5;
  lVar14 = SCanvas::FArguments::FArguments(local_1718);
  *(undefined1 *)(lVar14 + 0x78) = local_1e08;
  *(undefined1 *)(lVar14 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x80,&local_1e00);
  puVar13 = (undefined8 *)(lVar14 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_1f68 = uVar12;
  plStack_1f60 = plVar5;
  if (&local_1f68 != puVar13) {
    local_1f68 = *puVar13;
    plStack_1f60 = *(longlong **)(lVar14 + 0x38);
    *puVar13 = uVar12;
    *(longlong **)(lVar14 + 0x38) = plVar5;
    local_1858 = uVar12;
    plStack_1850 = plVar5;
  }
  plVar5 = plStack_1f60;
  if (plStack_1f60 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_1f60 + 1;
    lVar16 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plStack_1f60)(plStack_1f60);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_1f60 + 8))(plStack_1f60,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1b90);
  puVar9 = local_1ed8;
  FText::operator=(lVar14,local_1ed8);
  *(undefined1 *)(lVar14 + 0x18) = puVar9[0x18];
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x20,puVar9 + 0x20);
  local_1d48 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar16 = local_1d48 + 0x10;
  local_1d50 = lVar16;
  FUN_14044f790(&local_1d50,lVar16);
  local_1d40 = &local_1fc3;
  local_2018 = 0x238;
  SWidget::SetDebugInfo
            (lVar16,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x215);
  uVar12 = FUN_140692760(local_1fa0,&local_1b80);
  uVar19 = FUN_140692760(local_1f28,&local_1bd0);
  local_2018 = local_2018 & 0xffffffff00000000;
  uVar20 = SVerticalBox::FSlot::Padding(local_1f18,0,0,0x40a00000);
  uVar20 = FUN_140692760(uVar20,&local_1bc0);
  uVar20 = SOverlay::FArguments::operator+(lVar14,uVar20);
  uVar19 = SOverlay::FArguments::operator+(uVar20,uVar19);
  uVar12 = SOverlay::FArguments::operator+(uVar19,uVar12);
  puVar13 = (undefined8 *)FUN_140693150(&local_1d50,local_1a58,uVar12);
  local_1e88 = *puVar13;
  local_1e80 = (longlong *)puVar13[1];
  if (local_1e80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e80 + 1) = (int)local_1e80[1] + 1;
    UNLOCK();
  }
  uVar7 = DAT_1464b9eeb;
  local_1d38 = DAT_1464b9eeb;
  local_1fb8 = SDockTab::GetFlashColor;
  uStack_1fb0 = 0;
  lStack_1990 = (ulonglong)uStack_1fac << 0x20;
  local_1f78 = SDockTab::GetFlashOverlayImageBrush;
  local_1998 = SDockTab::GetFlashColor;
  uStack_1f70 = 0;
  local_1e68 = FUN_141942500;
  uStack_1e60 = 0;
  local_1918 = 0x41940190;
  uStack_1914 = 1;
  uStack_1910 = 0;
  uStack_190c = uStack_1f6c;
  local_1a18 = 0x41942500;
  uStack_1a14 = 1;
  uStack_1a10 = 0;
  uStack_1a0c = uStack_1e5c;
  local_1e78 = FUN_141942500;
  uStack_1e70 = 0;
  local_1d37 = 1;
  local_1d30 = 0;
  local_1d28 = 0;
  lVar16 = FUN_141886d30(local_c68);
  *(undefined1 *)(lVar16 + 0x78) = uVar7;
  *(undefined1 *)(lVar16 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x80,&local_1d30);
  local_1d18 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
  lVar14 = local_1d18 + 0x10;
  local_1d20 = lVar14;
  FUN_14044f790(&local_1d20,lVar14);
  local_1d10 = &local_1fc2;
  local_2018 = 0x388;
  SWidget::SetDebugInfo
            (lVar14,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x209);
  uVar12 = FUN_141920660(lVar16,param_1,&local_1a18);
  uVar12 = SBorder::FArguments::BorderImage<SFlareListItem>(uVar12,param_1,&local_1918);
  uVar12 = FUN_14191ee50(uVar12,param_1,&local_1998);
  puVar13 = (undefined8 *)FUN_1418d3ed0(&local_1d20,local_1a68,uVar12);
  local_1e98 = *puVar13;
  local_1e90 = (longlong *)puVar13[1];
  if (local_1e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e90 + 1) = (int)local_1e90[1] + 1;
    UNLOCK();
  }
  uVar7 = DAT_1464b9eeb;
  local_1d08 = DAT_1464b9eeb;
  local_1fb8 = FUN_14193e990;
  uStack_1fb0 = 0;
  local_1f78 = FUN_141942500;
  uStack_1f70 = 0;
  local_1978 = 0x4193e990;
  uStack_1974 = 1;
  uStack_1970 = 0;
  uStack_196c = uStack_1fac;
  local_1d07 = 1;
  local_1d00 = 0;
  local_1cf8 = 0;
  local_1988 = 0x41942500;
  uStack_1984 = 1;
  uStack_1980 = 0;
  uStack_197c = uStack_1f6c;
  lVar16 = FUN_141886d30(local_f18);
  *(undefined1 *)(lVar16 + 0x78) = uVar7;
  *(undefined1 *)(lVar16 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar16 + 0x80,&local_1d00);
  local_1dc8 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
  lVar14 = local_1dc8 + 0x10;
  local_1dd0 = lVar14;
  FUN_14044f790(&local_1dd0,lVar14);
  local_1dc0 = &local_1fc1;
  local_2018 = 0x388;
  SWidget::SetDebugInfo
            (lVar14,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x1ff);
  uVar12 = FUN_141920660(lVar16,param_1,&local_1988);
  uVar12 = SBorder::FArguments::BorderImage<SFlareListItem>(uVar12,param_1,&local_1978);
  puVar13 = (undefined8 *)FUN_1418d3ed0(&local_1dd0,local_1a78,uVar12);
  local_1ea8 = *puVar13;
  local_1ea0 = (longlong *)puVar13[1];
  if (local_1ea0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ea0 + 1) = (int)local_1ea0[1] + 1;
    UNLOCK();
  }
  uStack_1fb0 = 0;
  local_1fb8 = FUN_1419402a0;
  local_1928 = 0x419402a0;
  uStack_1924 = 1;
  uStack_1920 = 0;
  uStack_191c = uStack_1fac;
  local_1db0 = FUN_140c61c00();
  lVar14 = local_1db0 + 0x10;
  local_1db8 = lVar14;
  FUN_14044f790(&local_1db8,lVar14);
  local_1da8 = &local_1fc0;
  local_2018 = 0x278;
  SWidget::SetDebugInfo
            (lVar14,"SImage",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x1f8);
  uVar12 = SImage::FArguments::FArguments(local_14c8);
  uVar12 = SImage::FArguments::Image<SFlareButton>(uVar12,param_1,&local_1928);
  puVar13 = (undefined8 *)FUN_14188e090(&local_1db8,local_1a88,uVar12);
  local_1eb8 = *puVar13;
  local_1eb0 = (longlong *)puVar13[1];
  if (local_1eb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1eb0 + 1) = (int)local_1eb0[1] + 1;
    UNLOCK();
  }
  local_1b60 = 1;
  local_1b58 = 0;
  local_1b70 = 0;
  uStack_1b68 = 0;
  local_1fb8 = FUN_14193eaf0;
  local_1b50 = 0;
  uStack_1fb0 = 0;
  local_1ca8 = FUN_14183ac90();
  local_1ab8 = (undefined4)local_1e78;
  uStack_1ab4 = local_1e78._4_4_;
  uStack_1ab0 = uStack_1e70;
  uStack_1aac = uStack_1e6c;
  local_1ca0 = 1;
  local_1c98 = 0;
  local_1c90 = 0;
  uVar12 = FUN_1418c8cd0(local_1a98,param_1,&local_1ab8);
  local_1ce0 = 1;
  local_1cd8 = 0;
  local_1cd0 = 0;
  local_1cf0 = 0;
  uStack_1ce8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1cd8,uVar12);
  lVar14 = FUN_14185c7c0();
  *(undefined4 *)(lVar14 + 0x28) = (undefined4)local_1cf0;
  *(undefined4 *)(lVar14 + 0x2c) = local_1cf0._4_4_;
  *(undefined4 *)(lVar14 + 0x30) = (undefined4)uStack_1ce8;
  *(undefined4 *)(lVar14 + 0x34) = uStack_1ce8._4_4_;
  *(undefined1 *)(lVar14 + 0x38) = local_1ce0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x40,&local_1cd8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1cd8);
  *(undefined1 *)(lVar14 + 0x25) = 2;
  local_1f28 = (code *)FUN_1417e5b60();
  plVar5 = (longlong *)((longlong)local_1f28 + 0x10);
  local_1f18 = (code *)plVar5;
  local_1c28 = plVar5;
  local_1c20 = (longlong *)local_1f28;
  FUN_14044f790(&local_1c28,plVar5);
  local_1c18 = local_1fbf;
  local_2018 = 0x230;
  SWidget::SetDebugInfo
            (plVar5,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Docking\\SDockTab.cpp"
             ,0x1f5);
  uVar12 = FUN_140801a00(lVar14,&local_1e88);
  uVar19 = FUN_14185c7c0();
  uVar19 = FUN_140801a00(uVar19,&local_1e98);
  uVar20 = FUN_14185c7c0();
  uVar20 = FUN_140801a00(uVar20,&local_1ea8);
  uVar21 = FUN_14185c7c0();
  uVar21 = FUN_140801a00(uVar21,&local_1eb8);
  uVar22 = SOverlay::FArguments::FArguments(local_1838);
  uVar21 = SOverlay::FArguments::operator+(uVar22,uVar21);
  uVar20 = SOverlay::FArguments::operator+(uVar21,uVar20);
  uVar19 = SOverlay::FArguments::operator+(uVar20,uVar19);
  lVar14 = SOverlay::FArguments::operator+(uVar19,uVar12);
  pcVar8 = local_1f18;
  local_2008 = *(undefined4 *)(lVar14 + 0x90);
  local_1fd8 = lVar14 + 0xf8;
  local_1ff0 = lVar14 + 0xe8;
  local_1fe0 = *(undefined1 *)(lVar14 + 0xf1);
  local_2010 = lVar14 + 0x78;
  local_1ff8 = lVar14 + 200;
  local_1fe8 = *(undefined1 *)(lVar14 + 0xf0);
  local_2000 = lVar14 + 0x98;
  local_2018 = lVar14 + 0x60;
  SWidget::SWidgetConstruct(local_1f18,lVar14,lVar14 + 0x30,lVar14 + 0x40);
  SOverlay::Construct(pcVar8,lVar14);
  if (((char)*(longlong *)((longlong)pcVar8 + 0x18) < '\0') ||
     (cVar10 = (**(code **)(*(longlong *)pcVar8 + 0x1e8))(pcVar8), cVar10 != '\0')) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  plVar5 = (longlong *)local_1f28;
  *(byte *)((longlong)pcVar8 + 0x19) = *(byte *)((longlong)pcVar8 + 0x19) & 0xfe;
  *(byte *)((longlong)pcVar8 + 0x19) = *(byte *)((longlong)pcVar8 + 0x19) | bVar11;
  if (local_1f28 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)local_1f28 + 8) = (int)*(longlong *)((longlong)local_1f28 + 8) + 1;
    UNLOCK();
  }
  local_1bb0 = (longlong *)pcVar8;
  local_1ba8 = (longlong *)local_1f28;
  if (local_1f28 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)local_1f28 + 8) = (int)*(longlong *)((longlong)local_1f28 + 8) + 1;
    UNLOCK();
  }
  lVar14 = FUN_141886d30(local_11c8);
  *(undefined8 *)(lVar14 + 0x188) = local_1ca8;
  *(undefined1 *)(lVar14 + 400) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x198,&local_1c98);
  local_19a8 = (undefined4)local_1fb8;
  uStack_19a4 = local_1fb8._4_4_;
  uStack_19a0 = uStack_1fb0;
  uStack_199c = uStack_1fac;
  uVar12 = FUN_1418c8e30(local_1aa8,param_1,&local_19a8);
  local_1de8 = 1;
  local_1de0 = 0;
  local_1dd8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1de0,uVar12);
  *(undefined4 *)(lVar14 + 0x1a8) = local_1df0;
  *(undefined4 *)(lVar14 + 0x1ac) = local_1dec;
  *(undefined1 *)(lVar14 + 0x1b0) = local_1de8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x1b8,&local_1de0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1de0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1aa8);
  *(undefined4 *)(lVar14 + 0x11c) = 3;
  *(undefined1 *)(lVar14 + 0x130) = 1;
  *(undefined4 *)(lVar14 + 0x120) = (undefined4)local_1b70;
  *(undefined4 *)(lVar14 + 0x124) = local_1b70._4_4_;
  *(undefined4 *)(lVar14 + 0x128) = (undefined4)uStack_1b68;
  *(undefined4 *)(lVar14 + 300) = uStack_1b68._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar14 + 0x138,&local_1b58);
  uVar12 = FUN_14188d200(lVar14,&local_1bb0);
  FUN_141971ea0(param_1,uVar12);
  FUN_14188af70(local_11c8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar5 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1c28);
  if (local_1730 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1838);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1a98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b58);
  plVar5 = local_1eb0;
  if (local_1eb0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1eb0 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1eb0)(local_1eb0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1eb0 + 8))(local_1eb0,1);
      }
    }
  }
  if (local_1a80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a80 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1a80)(local_1a80);
      LOCK();
      piVar1 = (int *)((longlong)local_1a80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a80 + 8))(local_1a80,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1db8);
  FUN_14188b0e0(local_14c8);
  plVar5 = local_1ea0;
  if (local_1ea0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1ea0 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1ea0)(local_1ea0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1ea0 + 8))(local_1ea0,1);
      }
    }
  }
  if (local_1a70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a70 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1a70)(local_1a70);
      LOCK();
      piVar1 = (int *)((longlong)local_1a70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a70 + 8))(local_1a70,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1dd0);
  FUN_14188af70(local_f18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d00);
  plVar5 = local_1e90;
  if (local_1e90 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1e90 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1e90)(local_1e90);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1e90 + 8))(local_1e90,1);
      }
    }
  }
  if (local_1a60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a60 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1a60)(local_1a60);
      LOCK();
      piVar1 = (int *)((longlong)local_1a60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a60 + 8))(local_1a60,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1d20);
  FUN_14188af70(local_c68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d30);
  plVar5 = local_1e80;
  if (local_1e80 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1e80 + 1;
    lVar14 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1e80)(local_1e80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1e80 + 8))(local_1e80,1);
      }
    }
  }
  if (local_1a50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a50 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1a50)(local_1a50);
      LOCK();
      piVar1 = (int *)((longlong)local_1a50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a50 + 8))(local_1a50,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1d50);
  if (local_1610 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1718);
  if (local_1a40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a40 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1a40)(local_1a40);
      LOCK();
      piVar1 = (int *)((longlong)local_1a40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a40 + 8))(local_1a40,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1d68);
  FUN_14188af70(local_9b8);
  if (local_1a30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a30 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1a30)(local_1a30);
      LOCK();
      piVar1 = (int *)((longlong)local_1a30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a30 + 8))(local_1a30,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1d80);
  FUN_14188b0e0(local_1348);
  if (local_1a20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a20 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1a20)(local_1a20);
      LOCK();
      piVar1 = (int *)((longlong)local_1a20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1a20 + 8))(local_1a20,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1e20);
  FUN_140691150(local_408);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar15 + 1;
    lVar14 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1c10);
  FUN_140690f70(local_708);
  plVar5 = (longlong *)local_1e58;
  if (local_1e58 != (code *)0x0) {
    LOCK();
    plVar15 = (longlong *)((longlong)local_1e58 + 8);
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (*(code *)**(undefined8 **)local_1e58)(local_1e58);
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
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1bf8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_14e0);
  FUN_140456c70(local_15f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e00);
  if (local_1fa8 != 0) {
    TAttribute<FText>::~TAttribute<FText>(local_1900);
  }
  if (local_1fa4 != 0) {
    TAttribute<FText>::~TAttribute<FText>(local_1af8);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d90);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b08);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1cb8);
  return;
}



// FUNCTION 141930f60 FUN_141930f60 body=2750 status=ok
// SIG undefined FUN_141930f60(void)

void FUN_141930f60(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  bool bVar10;
  undefined4 local_res8;
  undefined1 local_res10;
  undefined1 local_res11;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 local_578;
  longlong *local_570;
  longlong *local_568;
  int local_560;
  longlong *local_558;
  longlong *local_550;
  longlong local_548 [2];
  undefined1 local_538;
  undefined8 local_530;
  undefined4 local_528;
  longlong local_520;
  undefined1 local_518;
  undefined8 local_510;
  undefined4 local_508;
  longlong local_500;
  undefined1 local_4f8;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  longlong *plStack_4c8;
  undefined8 local_4b8;
  longlong *plStack_4b0;
  longlong local_4a8;
  undefined1 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  longlong local_488;
  undefined1 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 local_460;
  longlong local_458;
  undefined1 local_450 [8];
  undefined1 local_448 [8];
  longlong *local_440;
  undefined8 local_438;
  longlong *plStack_430;
  longlong *local_428;
  undefined1 local_418 [8];
  longlong *local_410;
  undefined1 local_408 [8];
  undefined1 local_400 [80];
  undefined1 local_3b0 [120];
  undefined1 local_338 [272];
  undefined1 local_228 [488];
  
  local_res8 = 0;
  *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(param_2 + 0x2a8);
  *(undefined1 *)(param_1 + 0x2f1) = *(undefined1 *)(param_2 + 0x2a9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2f8,param_2 + 0x2b0);
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x309) = *(undefined1 *)(param_2 + 0x2c1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x310,param_2 + 0x2c8);
  *(undefined1 *)(param_1 + 800) = *(undefined1 *)(param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x321) = *(undefined1 *)(param_2 + 0x2d9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x328,param_2 + 0x2e0);
  *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x339) = *(undefined1 *)(param_2 + 0x2f1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 0x2f8);
  *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x308);
  *(undefined1 *)(param_1 + 0x351) = *(undefined1 *)(param_2 + 0x309);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x358,param_2 + 0x310);
  *(undefined1 *)(param_1 + 0x368) = *(undefined1 *)(param_2 + 800);
  *(undefined1 *)(param_1 + 0x369) = *(undefined1 *)(param_2 + 0x321);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x370,param_2 + 0x328);
  *(undefined1 *)(param_1 + 0x398) = *(undefined1 *)(param_2 + 0x350);
  *(undefined1 *)(param_1 + 0x399) = *(undefined1 *)(param_2 + 0x351);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a0,param_2 + 0x358);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b0,param_2 + 0x368);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3c0,param_2 + 0x378);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d0,param_2 + 0x388);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x398);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined1 *)(param_1 + 0x3f4) = *(undefined1 *)(param_2 + 0x3ac);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f8,param_2 + 0x3b0);
  *(undefined1 *)(param_1 + 0x380) = *(undefined1 *)(param_2 + 0x3c0);
  *(undefined1 *)(param_1 + 0x381) = *(undefined1 *)(param_2 + 0x3c1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x388,param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x408);
  *(undefined1 *)(param_1 + 0x45c) = *(undefined1 *)(param_2 + 0x40c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x460,param_2 + 0x410);
  *(undefined1 *)(param_1 + 0x470) = *(undefined1 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_2 + 0x428);
  *(undefined1 *)(param_1 + 0x47c) = *(undefined1 *)(param_2 + 0x42c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x480,param_2 + 0x430);
  *(undefined1 *)(param_1 + 0x490) = *(undefined1 *)(param_2 + 0x440);
  *(undefined1 *)(param_1 + 0x491) = *(undefined1 *)(param_2 + 0x441);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x498,param_2 + 0x448);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x438,param_2 + 0x3d8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x448,param_2 + 1000);
  FUN_1417f9360(param_1 + 0x228,param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x1f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x280,param_2 + 0x1f8);
  FUN_140692440(param_1 + 0x290,param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 0x230);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2c0,param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x248);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x250);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e0,param_2 + 600);
  plVar6 = DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res20,"NormalText",1);
  local_468 = *puVar3;
  local_460 = local_468;
  lVar4 = (**(code **)(*plVar6 + 0x80))(plVar6,DAT_1469eb158);
  if (lVar4 == 0) {
    lVar4 = FUN_141835350();
  }
  FTextBlockStyle::FTextBlockStyle(local_408,lVar4);
  FUN_1417f9360(local_400,*(longlong *)(param_2 + 0x198) + 8);
  FUN_140692440(local_3b0,*(longlong *)(param_2 + 0x198) + 0x58);
  FUN_1406922e0(local_338,*(longlong *)(param_2 + 0x198) + 0x80);
  puVar3 = (undefined8 *)FPlainTextLayoutMarshaller::Create(local_448);
  local_570 = (longlong *)puVar3[1];
  local_578 = *puVar3;
  if (local_570 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_570 + 1) = (int)local_570[1] + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)(param_1 + 0x210);
  if (puVar3 != &local_578) {
    *puVar3 = local_578;
    local_578 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x218,&local_570);
  }
  plVar6 = local_570;
  if (local_570 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_570 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_570)(local_570);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_570 + 8))(local_570,1);
      }
    }
  }
  if (local_440 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_440 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_440)(local_440);
      LOCK();
      piVar1 = (int *)((longlong)local_440 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_440 + 8))(local_440,1);
      }
    }
  }
  FPlainTextLayoutMarshaller::SetIsPassword(*puVar3,param_1 + 0x308);
  FPlainTextLayoutMarshaller::Create(&local_4b8);
  plVar6 = *(longlong **)(param_1 + 0x218);
  uVar5 = *puVar3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_568 = (longlong *)0x0;
  local_560 = 0;
  lVar4 = operator_new(0x790);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    local_438 = local_4b8;
    plStack_430 = plStack_4b0;
    if (plStack_4b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_4b0 + 1) = (int)plStack_4b0[1] + 1;
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_res8._0_2_ = (ushort)(byte)local_res8;
    if (*(char *)(param_2 + 0x45b) != '\0') {
      local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_2 + 0x45a));
    }
    local_res11 = *(char *)(param_2 + 0x459) != '\0';
    if ((bool)local_res11) {
      local_res10 = *(undefined1 *)(param_2 + 0x458);
    }
    local_4e0 = uVar5;
    local_4d8 = plVar6;
    uVar5 = FTextBlockStyle::FTextBlockStyle(local_228,local_408);
    lVar4 = FUN_1419601e0(lVar4,param_1 + 0x208,param_2 + 0x108,uVar5,&local_res10,&local_res8,
                          &local_568,&local_4e0,&local_438);
  }
  plVar7 = (longlong *)(param_1 + 0x220);
  if (plVar7 == &local_458) {
    if (lVar4 != 0) {
      FUN_141965990(lVar4);
      goto LAB_1419315aa;
    }
  }
  else {
    local_res18 = *plVar7;
    *plVar7 = lVar4;
    if (local_res18 != 0) {
      FUN_141965990(local_res18);
      lVar4 = local_res18;
LAB_1419315aa:
      FMemory::operator_delete(lVar4,0x790);
    }
  }
  if (local_560 != 0) {
    if (local_568 == (longlong *)0x0) goto LAB_141931605;
    (**(code **)(*local_568 + 0x28))(local_568,0);
    if (local_568 != (longlong *)0x0) {
      local_568 = (longlong *)FMemory::Realloc(local_568,0,0);
    }
    local_560 = 0;
  }
  if (local_568 != (longlong *)0x0) {
    FMemory::Free(local_568);
  }
LAB_141931605:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  FUN_1419a2a00(*plVar7,param_2 + 0x138);
  FUN_1419a3ac0(*plVar7,param_2 + 0x168);
  bVar10 = *(char *)(param_2 + 0x290) == '\0';
  if (bVar10) {
    plVar6 = &local_4a8;
    local_4a8 = *(longlong *)(param_2 + 0x198) + 400;
    local_4a0 = 1;
    local_498 = 0;
    local_490 = 0;
  }
  else {
    local_520 = *(longlong *)(param_2 + 0x288);
    local_518 = *(undefined1 *)(param_2 + 0x290);
    local_510 = 0;
    local_508 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_510,param_2 + 0x298);
    plVar6 = &local_520;
  }
  plVar8 = (longlong *)0x0;
  FSlateEditableTextLayout::SetCursorBrush(*plVar7,plVar6);
  if (bVar10) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_498);
  }
  else {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_510);
  }
  bVar10 = *(char *)(param_2 + 0x270) == '\0';
  if (bVar10) {
    plVar6 = &local_488;
    local_488 = *(longlong *)(param_2 + 0x198) + 0x108;
    local_480 = 1;
    local_478 = 0;
    local_470 = 0;
  }
  else {
    local_500 = *(longlong *)(param_2 + 0x268);
    local_4f8 = *(undefined1 *)(param_2 + 0x270);
    local_4f0 = 0;
    local_4e8 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_4f0,param_2 + 0x278);
    plVar6 = &local_500;
  }
  FUN_1419a0b00(*plVar7,plVar6);
  if (bVar10) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_478);
  }
  else {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4f0);
  }
  plVar6 = (longlong *)FMemory::Realloc(0,0x20);
  local_428 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_144d6e320;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar6[3] = lVar4;
  }
  local_548[0] = 0;
  local_548[1] = 0;
  local_538 = 1;
  local_530 = 0;
  local_528 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_530);
  }
  FSlateEditableTextLayout::SetDebugSourceInfo(*plVar7,local_548);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_530);
  if (local_548[0] != 0) {
    FMemory::Free();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_428 = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_428 != (longlong *)0x0) {
      FMemory::Free(local_428);
    }
  }
  FUN_1419a2f70(*plVar7,param_2 + 0x338);
  plVar7 = (longlong *)operator_new(0x10);
  plVar6 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar6 = plVar7;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_144d6a6d0;
    plVar7[2] = (longlong)plVar6;
    plVar8 = plVar7;
  }
  pplVar9 = (longlong **)(param_1 + 0x408);
  local_558 = plVar6;
  local_550 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_558,plVar6,plVar6);
  if (pplVar9 != &local_558) {
    *pplVar9 = plVar6;
    local_558 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x410,&local_550);
    plVar8 = local_550;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar6 = *pplVar9;
  local_4d0 = 0;
  plStack_4c8 = (longlong *)0x0;
  puVar3 = (undefined8 *)FName::FName(local_450,"EditText",1);
  FUN_1418d8750(plVar6,local_418,*puVar3,0,&local_4d0,param_2 + 0x3f8);
  if (local_410 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_410 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_410)(local_410);
      LOCK();
      piVar1 = (int *)((longlong)local_410 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_410 + 8))(local_410,1);
      }
    }
  }
  plVar6 = plStack_4c8;
  if (plStack_4c8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_4c8 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_4c8)(plStack_4c8);
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
  if (plStack_4b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_4b0 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_4b0)(plStack_4b0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_4b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_4b0 + 8))(plStack_4b0,1);
      }
    }
  }
  FUN_140691580(local_408);
  return;
}



// FUNCTION 141931a20 FUN_141931a20 body=4560 status=ok
// SIG undefined FUN_141931a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141931a20(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_12c8 [32];
  undefined8 local_12a8;
  undefined1 local_1298;
  char local_1297;
  undefined1 local_1296;
  char local_1295;
  undefined1 local_1294;
  undefined1 local_1293;
  undefined1 local_1292 [10];
  undefined8 local_1288;
  int iStack_1280;
  undefined4 uStack_127c;
  longlong local_1278;
  longlong *plStack_1270;
  longlong *local_1268;
  int local_1260;
  longlong *local_1258;
  int local_1250;
  longlong *local_1248;
  int local_1240;
  longlong *local_1238;
  int local_1230;
  undefined4 local_1228;
  undefined4 local_1220;
  undefined1 local_121c;
  undefined8 local_1218;
  undefined4 local_1210;
  longlong *local_1208;
  longlong *local_1200;
  undefined1 *local_11f8;
  longlong *local_11f0;
  longlong *local_11e8;
  undefined1 *local_11e0;
  longlong *local_11d8;
  longlong *local_11d0;
  undefined1 *local_11c8;
  undefined8 local_11c0;
  undefined1 local_11b8;
  undefined8 local_11b0;
  undefined4 local_11a8;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined8 local_1198;
  undefined4 local_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined1 local_1178;
  undefined8 local_1170;
  undefined4 local_1168;
  undefined8 local_1158;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  undefined8 local_1148;
  longlong local_1140;
  undefined8 local_1138;
  longlong local_1130;
  undefined8 local_1128;
  undefined4 uStack_1120;
  undefined4 uStack_111c;
  undefined8 local_1118;
  undefined4 uStack_1110;
  undefined4 uStack_110c;
  undefined8 local_1108;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  undefined8 local_10f8;
  longlong local_10f0;
  undefined4 local_10e8;
  undefined4 uStack_10e4;
  undefined4 uStack_10e0;
  undefined4 uStack_10dc;
  undefined1 local_10d8;
  undefined8 local_10d0;
  longlong *plStack_10c8;
  undefined1 local_10c0;
  undefined8 local_10b8;
  undefined4 local_10b0;
  undefined4 local_10a8;
  undefined4 uStack_10a4;
  undefined4 uStack_10a0;
  undefined4 uStack_109c;
  undefined1 local_1098;
  undefined8 local_1090;
  longlong *plStack_1088;
  undefined1 local_1080;
  undefined8 local_1078;
  undefined4 local_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined1 local_1058;
  undefined8 local_1050;
  undefined4 local_1048;
  undefined4 local_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined1 local_1030;
  undefined8 local_1028;
  undefined4 local_1020;
  undefined4 local_1018;
  undefined4 uStack_1014;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  undefined4 local_1008;
  undefined4 uStack_1004;
  undefined4 uStack_1000;
  undefined4 uStack_ffc;
  undefined1 local_ff8 [8];
  longlong *local_ff0;
  undefined1 local_fe8 [8];
  longlong *local_fe0;
  undefined1 local_fd8 [8];
  longlong *local_fd0;
  undefined4 local_fc8;
  undefined4 uStack_fc4;
  int iStack_fc0;
  undefined4 uStack_fbc;
  undefined4 local_fb8;
  undefined4 uStack_fb4;
  undefined4 uStack_fb0;
  undefined4 uStack_fac;
  undefined4 local_fa8;
  undefined4 uStack_fa4;
  undefined4 uStack_fa0;
  undefined4 uStack_f9c;
  undefined1 local_f98 [56];
  longlong *local_f60;
  undefined1 local_f48;
  undefined8 local_f40;
  undefined4 local_f38;
  undefined1 local_f30 [24];
  undefined1 local_f18 [264];
  undefined8 local_e10;
  longlong local_a78;
  longlong *plStack_a70;
  undefined1 local_a68 [264];
  longlong local_960;
  undefined1 local_948 [496];
  undefined1 local_758 [688];
  undefined1 local_4a8 [1120];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x141931a42;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_12c8;
  lVar9 = *(longlong *)(param_2 + 0x108);
  *(longlong *)(param_1 + 0x388) = lVar9;
  if (lVar9 == 0) {
    FUN_1418ce820(local_f18);
    *(undefined8 *)(param_1 + 0x388) = local_e10;
    FUN_1418d2030(local_f18);
    lVar9 = *(longlong *)(param_1 + 0x388);
  }
  *(longlong *)(param_1 + 0x520) = lVar9 + 8;
  *(longlong *)(param_1 + 0x528) = lVar9 + 0x90;
  *(longlong *)(param_1 + 0x530) = lVar9 + 0x118;
  *(longlong *)(param_1 + 0x538) = lVar9 + 0x1a0;
  uVar5 = *(undefined4 *)(param_2 + 0x40c);
  uVar6 = *(undefined4 *)(param_2 + 0x410);
  uVar7 = *(undefined4 *)(param_2 + 0x414);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x3b4) = uVar5;
  *(undefined4 *)(param_1 + 0x3b8) = uVar6;
  *(undefined4 *)(param_1 + 0x3bc) = uVar7;
  *(undefined1 *)(param_1 + 0x3c0) = *(undefined1 *)(param_2 + 0x418);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3c8,param_2 + 0x420);
  FUN_1417f9360(param_1 + 0x3d8,param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(param_2 + 0x1f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x430,param_2 + 0x1f8);
  FUN_140692440(param_1 + 0x440,param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(param_2 + 0x230);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x470,param_2 + 0x238);
  FUN_140692440(param_1 + 0x480,param_2 + 0x3c8);
  *(undefined1 *)(param_1 + 0x4a8) = *(undefined1 *)(param_2 + 0x3f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b0,param_2 + 0x3f8);
  FUN_140692440(param_1 + 0x4c0,param_2 + 0x248);
  *(undefined1 *)(param_1 + 0x4e8) = *(undefined1 *)(param_2 + 0x270);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4f0,param_2 + 0x278);
  puVar13 = (undefined8 *)0x0;
  local_11a0 = 0x3f800000;
  local_1288 = FUN_14193acd0;
  local_1158 = FUN_14193b0b0;
  local_1108 = FUN_14193adf0;
  local_1118 = FUN_14193ac10;
  local_1128 = FUN_14193f250;
  iStack_1280 = 0;
  uStack_1150 = 0;
  local_119c = 1;
  local_1198 = 0;
  local_1190 = 0;
  local_1068 = 0;
  uStack_1060 = 0;
  local_1058 = 1;
  local_1050 = 0;
  local_1048 = 0;
  uStack_1100 = 0;
  uStack_1110 = 0;
  uStack_1120 = 0;
  local_1295 = *(char *)(param_2 + 0x493) != '\0';
  if ((bool)local_1295) {
    local_1296 = *(undefined1 *)(param_2 + 0x492);
  }
  local_1297 = *(char *)(param_2 + 0x491) != '\0';
  if ((bool)local_1297) {
    local_1298 = *(undefined1 *)(param_2 + 0x490);
  }
  lVar9 = SEditableText::FArguments::FArguments(local_4a8);
  FText::operator=(lVar9 + 0x108,param_2 + 0x110);
  *(undefined1 *)(lVar9 + 0x120) = *(undefined1 *)(param_2 + 0x128);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,param_2 + 0x130);
  FText::operator=(lVar9 + 0x138,param_2 + 0x140);
  *(undefined1 *)(lVar9 + 0x150) = *(undefined1 *)(param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x158,param_2 + 0x160);
  FText::operator=(lVar9 + 0x168,param_2 + 0x170);
  *(undefined1 *)(lVar9 + 0x180) = *(undefined1 *)(param_2 + 0x188);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x188,param_2 + 400);
  local_fc8 = (undefined4)local_1288;
  uStack_fc4 = local_1288._4_4_;
  iStack_fc0 = iStack_1280;
  uStack_fbc = uStack_127c;
  uVar10 = FUN_14191f5d0(&local_1268,param_1,&local_fc8);
  FUN_1417efd90(local_f98);
  local_f48 = 1;
  local_f40 = 0;
  local_f38 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_f40,uVar10);
  FUN_141925d20(lVar9 + 0x1a0,local_f98);
  *(undefined1 *)(lVar9 + 0x1f0) = local_f48;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x1f8,&local_f40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f40);
  if (local_f60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f60 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f60)(local_f60);
      LOCK();
      piVar1 = (int *)((longlong)local_f60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f60 + 8))(local_f60,1);
      }
    }
  }
  if (local_1260 == 0) {
LAB_141931e63:
    if (local_1268 != (longlong *)0x0) {
      FMemory::Free(local_1268);
    }
  }
  else if (local_1268 != (longlong *)0x0) {
    (**(code **)(*local_1268 + 0x28))(local_1268,0);
    if (local_1268 != (longlong *)0x0) {
      local_1268 = (longlong *)FMemory::Realloc(local_1268,0,0);
    }
    local_1260 = 0;
    goto LAB_141931e63;
  }
  *(undefined1 *)(lVar9 + 0x2a8) = *(undefined1 *)(param_2 + 0x288);
  *(undefined1 *)(lVar9 + 0x2a9) = *(undefined1 *)(param_2 + 0x289);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x2b0,param_2 + 0x290);
  *(undefined1 *)(lVar9 + 0x2c0) = *(undefined1 *)(param_2 + 0x2a0);
  *(undefined1 *)(lVar9 + 0x2c1) = *(undefined1 *)(param_2 + 0x2a1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x2c8,param_2 + 0x2a8);
  *(undefined1 *)(lVar9 + 0x2d8) = *(undefined1 *)(param_2 + 0x2b8);
  *(undefined1 *)(lVar9 + 0x2d9) = *(undefined1 *)(param_2 + 0x2b9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x2e0,param_2 + 0x2c0);
  *(undefined1 *)(lVar9 + 0x2f0) = *(undefined1 *)(param_2 + 0x2d0);
  *(undefined1 *)(lVar9 + 0x2f1) = *(undefined1 *)(param_2 + 0x2d1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x2f8,param_2 + 0x2d8);
  *(undefined1 *)(lVar9 + 0x308) = *(undefined1 *)(param_2 + 0x2e8);
  *(undefined1 *)(lVar9 + 0x309) = *(undefined1 *)(param_2 + 0x2e9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x310,param_2 + 0x2f0);
  *(undefined1 *)(lVar9 + 800) = *(undefined1 *)(param_2 + 0x300);
  *(undefined1 *)(lVar9 + 0x321) = *(undefined1 *)(param_2 + 0x301);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x328,param_2 + 0x308);
  *(undefined4 *)(lVar9 + 0x338) = *(undefined4 *)(param_2 + 0x318);
  *(undefined1 *)(lVar9 + 0x33c) = *(undefined1 *)(param_2 + 0x31c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x340,param_2 + 800);
  *(undefined1 *)(lVar9 + 0x350) = *(undefined1 *)(param_2 + 0x330);
  *(undefined1 *)(lVar9 + 0x351) = *(undefined1 *)(param_2 + 0x331);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x358,param_2 + 0x338);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x368,param_2 + 0x348);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x388,param_2 + 0x358);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x398,param_2 + 0x368);
  *(undefined4 *)(lVar9 + 0x3a8) = *(undefined4 *)(param_2 + 0x378);
  *(undefined1 *)(lVar9 + 0x3ac) = *(undefined1 *)(param_2 + 0x37c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x3b0,param_2 + 0x380);
  *(undefined1 *)(lVar9 + 0x3c0) = *(undefined1 *)(param_2 + 0x390);
  *(undefined1 *)(lVar9 + 0x3c1) = *(undefined1 *)(param_2 + 0x391);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x3c8,param_2 + 0x398);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x3d8,param_2 + 0x3a8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 1000,param_2 + 0x3b8);
  *(undefined4 *)(lVar9 + 0x408) = *(undefined4 *)(param_2 + 0x440);
  *(undefined1 *)(lVar9 + 0x40c) = *(undefined1 *)(param_2 + 0x444);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x410,param_2 + 0x448);
  *(undefined1 *)(lVar9 + 0x420) = *(undefined1 *)(param_2 + 0x458);
  *(undefined4 *)(lVar9 + 0x428) = *(undefined4 *)(param_2 + 0x460);
  *(undefined1 *)(lVar9 + 0x42c) = *(undefined1 *)(param_2 + 0x464);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x430,param_2 + 0x468);
  *(undefined1 *)(lVar9 + 0x440) = *(undefined1 *)(param_2 + 0x478);
  *(undefined1 *)(lVar9 + 0x441) = *(undefined1 *)(param_2 + 0x479);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x448,param_2 + 0x480);
  if (&local_1298 != (undefined1 *)(lVar9 + 0x458)) {
    if (*(char *)(lVar9 + 0x459) != '\0') {
      *(undefined1 *)(lVar9 + 0x459) = 0;
    }
    if (local_1297 != '\0') {
      *(undefined1 *)(lVar9 + 0x458) = local_1298;
      *(undefined1 *)(lVar9 + 0x459) = 1;
    }
  }
  if (&local_1296 != (undefined1 *)(lVar9 + 0x45a)) {
    if (*(char *)(lVar9 + 0x45b) != '\0') {
      *(undefined1 *)(lVar9 + 0x45b) = 0;
    }
    if (local_1295 != '\0') {
      *(undefined1 *)(lVar9 + 0x45a) = local_1296;
      *(undefined1 *)(lVar9 + 0x45b) = 1;
    }
  }
  local_11d0 = (longlong *)operator_new(0x4b8);
  if (local_11d0 == (longlong *)0x0) {
    local_11d0 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_11d0 + 1) = 1;
    *(undefined4 *)((longlong)local_11d0 + 0xc) = 1;
    *local_11d0 = (longlong)&PTR_FUN_144d6e620;
    if (local_11d0 != (longlong *)0xfffffffffffffff0) {
      FUN_141923430();
    }
  }
  local_11d8 = local_11d0 + 2;
  FUN_14044f790(&local_11d8);
  local_11c8 = &local_1294;
  local_12a8 = 0x4a8;
  SWidget::SetDebugInfo
            (local_11d8,"SEditableText",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
             ,0x29);
  uVar10 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_11d8,param_1 + 0x3a0);
  puVar11 = (undefined8 *)FUN_141926260(uVar10,local_fd8,lVar9);
  local_1148 = *puVar11;
  local_1140 = puVar11[1];
  if (local_1140 != 0) {
    LOCK();
    *(int *)(local_1140 + 8) = *(int *)(local_1140 + 8) + 1;
    UNLOCK();
  }
  lVar9 = FUN_14068f180(local_948);
  local_fb8 = (undefined4)local_1158;
  uStack_fb4 = local_1158._4_4_;
  uStack_fb0 = uStack_1150;
  uStack_fac = uStack_114c;
  uVar10 = FUN_1418c8cd0(&local_1258,param_1,&local_fb8);
  local_1178 = 1;
  local_1170 = 0;
  local_1168 = 0;
  local_1188 = 0;
  uStack_1180 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1170,uVar10);
  *(undefined1 *)(lVar9 + 0x120) = local_1178;
  *(undefined4 *)(lVar9 + 0x110) = (undefined4)local_1188;
  *(undefined4 *)(lVar9 + 0x114) = local_1188._4_4_;
  *(undefined4 *)(lVar9 + 0x118) = (undefined4)uStack_1180;
  *(undefined4 *)(lVar9 + 0x11c) = uStack_1180._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_1170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1170);
  if (local_1250 == 0) {
LAB_141932331:
    if (local_1258 != (longlong *)0x0) {
      FMemory::Free(local_1258);
    }
  }
  else if (local_1258 != (longlong *)0x0) {
    (**(code **)(*local_1258 + 0x28))(local_1258,0);
    if (local_1258 != (longlong *)0x0) {
      local_1258 = (longlong *)FMemory::Realloc(local_1258,0,0);
    }
    local_1250 = 0;
    goto LAB_141932331;
  }
  *(undefined4 *)(lVar9 + 0x10c) = 2;
  local_11e8 = (longlong *)operator_new(800);
  if (local_11e8 == (longlong *)0x0) {
    local_11e8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_11e8 + 1) = 1;
    *(undefined4 *)((longlong)local_11e8 + 0xc) = 1;
    *local_11e8 = (longlong)&PTR_FUN_144044b78;
    if (local_11e8 != (longlong *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  local_11f0 = local_11e8 + 2;
  FUN_14044f790(&local_11f0);
  local_11e0 = &local_1293;
  local_12a8 = 0x310;
  SWidget::SetDebugInfo
            (local_11f0,&DAT_144d6ba64,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
             ,0x25);
  uVar10 = FUN_140692660(lVar9,&local_1148);
  uVar12 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_11f0,param_1 + 0x390);
  puVar11 = (undefined8 *)FUN_14188dd80(uVar12,local_fe8,uVar10);
  local_1138 = *puVar11;
  local_1130 = puVar11[1];
  if (local_1130 != 0) {
    LOCK();
    *(int *)(local_1130 + 8) = *(int *)(local_1130 + 8) + 1;
    UNLOCK();
  }
  puVar11 = (undefined8 *)operator_new(0x88);
  if (puVar11 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar11);
    *puVar11 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar13 = puVar11;
  }
  *(undefined2 *)(puVar13 + 4) = 0;
  local_1228 = 1;
  local_1220 = 0x3f800000;
  local_121c = 1;
  local_1218 = 0;
  local_1210 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1218,&local_1198);
  *(undefined4 *)(puVar13 + 5) = local_1228;
  *(undefined1 *)((longlong)puVar13 + 0x34) = local_121c;
  *(undefined4 *)(puVar13 + 6) = local_1220;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar13 + 7,&local_1218);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1218);
  uVar10 = FUN_140692760(puVar13,&local_1138);
  lVar9 = SCanvas::FArguments::FArguments(local_a68);
  iVar3 = *(int *)(lVar9 + 0x110);
  *(int *)(lVar9 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar9 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 0x108,iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar9 + 0x108) + (longlong)iVar3 * 8) = uVar10;
  local_1200 = (longlong *)operator_new(0x248);
  if (local_1200 == (longlong *)0x0) {
    local_1200 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_1200 + 1) = 1;
    *(undefined4 *)((longlong)local_1200 + 0xc) = 1;
    *local_1200 = (longlong)&PTR_FUN_144044b58;
    if (local_1200 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  local_1208 = local_1200 + 2;
  FUN_14044f790(&local_1208);
  local_11f8 = local_1292;
  local_12a8 = 0x238;
  SWidget::SetDebugInfo
            (local_1208,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableTextBox.cpp"
             ,0x1e);
  uVar10 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_1208,(undefined8 *)(param_1 + 0x500));
  puVar13 = (undefined8 *)FUN_140693150(uVar10,local_ff8,lVar9);
  local_10f8 = *puVar13;
  local_10f0 = puVar13[1];
  if (local_10f0 != 0) {
    LOCK();
    *(int *)(local_10f0 + 8) = *(int *)(local_10f0 + 8) + 1;
    UNLOCK();
  }
  lVar9 = FUN_141886d30(local_758);
  local_fa8 = (undefined4)local_1128;
  uStack_fa4 = local_1128._4_4_;
  uStack_fa0 = uStack_1120;
  uStack_f9c = uStack_111c;
  uVar10 = FUN_1417dd6e0(&local_1248,param_1,&local_fa8);
  local_11b8 = 1;
  local_11c0 = 0;
  local_11b0 = 0;
  local_11a8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_11b0,uVar10);
  *(undefined8 *)(lVar9 + 0x188) = local_11c0;
  *(undefined1 *)(lVar9 + 400) = local_11b8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x198,&local_11b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_11b0);
  if (local_1240 == 0) {
LAB_14193266f:
    if (local_1248 != (longlong *)0x0) {
      FMemory::Free(local_1248);
    }
  }
  else if (local_1248 != (longlong *)0x0) {
    (**(code **)(*local_1248 + 0x28))(local_1248,0);
    if (local_1248 != (longlong *)0x0) {
      local_1248 = (longlong *)FMemory::Realloc(local_1248,0,0);
    }
    local_1240 = 0;
    goto LAB_14193266f;
  }
  local_1018 = (undefined4)local_1118;
  uStack_1014 = local_1118._4_4_;
  uStack_1010 = uStack_1110;
  uStack_100c = uStack_110c;
  uVar10 = FUN_14187cd30(&local_1238,param_1,&local_1018);
  local_10d8 = 0;
  local_10c0 = 1;
  local_10e8 = 0x3f800000;
  uStack_10e4 = 0;
  uStack_10e0 = 0x3f800000;
  uStack_10dc = 0x3f800000;
  local_10b8 = 0;
  local_10d0 = 0;
  plStack_10c8 = (longlong *)0x0;
  local_10b0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_10b8,uVar10);
  FUN_140692440(lVar9 + 0x210,&local_10e8);
  *(undefined1 *)(lVar9 + 0x238) = local_10c0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x240,&local_10b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_10b8);
  plVar4 = plStack_10c8;
  if (plStack_10c8 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_10c8 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_10c8)(plStack_10c8);
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
  if (local_1230 == 0) {
LAB_141932797:
    if (local_1238 != (longlong *)0x0) {
      FMemory::Free(local_1238);
    }
  }
  else if (local_1238 != (longlong *)0x0) {
    (**(code **)(*local_1238 + 0x28))(local_1238,0);
    if (local_1238 != (longlong *)0x0) {
      local_1238 = (longlong *)FMemory::Realloc(local_1238,0,0);
    }
    local_1230 = 0;
    goto LAB_141932797;
  }
  local_1008 = (undefined4)local_1108;
  uStack_1004 = local_1108._4_4_;
  uStack_1000 = uStack_1100;
  uStack_ffc = uStack_10fc;
  uVar10 = FUN_14187cd30(&local_1288,param_1,&local_1008);
  local_1098 = 0;
  local_1080 = 1;
  local_10a8 = 0x3f800000;
  uStack_10a4 = 0;
  uStack_10a0 = 0x3f800000;
  uStack_109c = 0x3f800000;
  local_1078 = 0;
  local_1090 = 0;
  plStack_1088 = (longlong *)0x0;
  local_1070 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1078,uVar10);
  FUN_140692440(lVar9 + 0x250,&local_10a8);
  *(undefined1 *)(lVar9 + 0x278) = local_1080;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x280,&local_1078);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1078);
  plVar4 = plStack_1088;
  if (plStack_1088 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_1088 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1088)(plStack_1088);
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
  if (iStack_1280 != 0) {
    if (local_1288 == (code *)0x0) goto LAB_1419328d3;
    (**(code **)(*(longlong *)local_1288 + 0x28))(local_1288,0);
    if (local_1288 != (code *)0x0) {
      local_1288 = (code *)FMemory::Realloc(local_1288,0,0);
    }
    iStack_1280 = 0;
  }
  if (local_1288 != (code *)0x0) {
    FMemory::Free(local_1288);
  }
LAB_1419328d3:
  *(undefined1 *)(lVar9 + 0x130) = 1;
  *(undefined4 *)(lVar9 + 0x120) = (undefined4)local_1068;
  *(undefined4 *)(lVar9 + 0x124) = local_1068._4_4_;
  *(undefined4 *)(lVar9 + 0x128) = (undefined4)uStack_1060;
  *(undefined4 *)(lVar9 + 300) = uStack_1060._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x138,&local_1050);
  uVar10 = FUN_14188d200(lVar9,&local_10f8);
  FUN_141971ea0(param_1,uVar10);
  FUN_14188af70(local_758);
  if (local_ff0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_ff0 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_ff0)(local_ff0);
      LOCK();
      piVar1 = (int *)((longlong)local_ff0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_ff0 + 8))(local_ff0,1);
      }
    }
  }
  plVar4 = local_1200;
  if (local_1200 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1200 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1200)(local_1200);
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
  if (local_960 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_a68);
  if (local_fe0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_fe0 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_fe0)(local_fe0);
      LOCK();
      piVar1 = (int *)((longlong)local_fe0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_fe0 + 8))(local_fe0,1);
      }
    }
  }
  plVar4 = local_11e8;
  if (local_11e8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_11e8 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_11e8)(local_11e8);
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
  FUN_140690ea0(local_948);
  if (local_fd0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_fd0 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_fd0)(local_fd0);
      LOCK();
      piVar1 = (int *)((longlong)local_fd0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_fd0 + 8))(local_fd0,1);
      }
    }
  }
  plVar4 = local_11d0;
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_11d0 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_11d0)(local_11d0);
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
  FUN_141923fa0(local_4a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1050);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1198);
  plVar4 = *(longlong **)(param_2 + 0x438);
  plVar14 = (longlong *)(param_1 + 0x510);
  lVar9 = *(longlong *)(param_2 + 0x430);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_1278 = lVar9;
  plStack_1270 = plVar4;
  if (&local_1278 != plVar14) {
    local_1278 = *plVar14;
    plStack_1270 = *(longlong **)(param_1 + 0x518);
    *plVar14 = lVar9;
    *(longlong **)(param_1 + 0x518) = plVar4;
    local_a78 = lVar9;
    plStack_a70 = plVar4;
  }
  plVar4 = plStack_1270;
  if (plStack_1270 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_1270 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_1270)(plStack_1270);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_1270 + 8))(plStack_1270,1);
      }
    }
  }
  plVar14 = (longlong *)*plVar14;
  if (plVar14 != (longlong *)0x0) {
    uVar10 = FUN_140693c40(*(undefined8 *)(param_1 + 0x500));
    lVar9 = SVerticalBox::FSlot::AutoHeight(uVar10);
    local_1030 = 1;
    local_1040 = 0x40400000;
    uStack_103c = 0;
    uStack_1038 = 0x40400000;
    uStack_1034 = 0;
    local_1028 = 0;
    local_1020 = 0;
    *(undefined4 *)(lVar9 + 0x48) = 0x40400000;
    *(undefined4 *)(lVar9 + 0x4c) = 0;
    *(undefined4 *)(lVar9 + 0x50) = 0x40400000;
    *(undefined4 *)(lVar9 + 0x54) = 0;
    *(undefined1 *)(lVar9 + 0x58) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x60,&local_1028);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1028);
    uVar10 = (**(code **)(*plVar14 + 0x18))(plVar14,local_f30);
    FUN_140692760(lVar9,uVar10);
  }
  return;
}



// FUNCTION 141932bf0 Construct body=162 status=ok
// SIG undefined Construct(void)

void SImage::Construct(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x110);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x218,param_2 + 0x118);
  FUN_140692440(param_1 + 0x228,param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x150);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 600,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x268,param_2 + 0x168);
  return;
}



// FUNCTION 141932ca0 FUN_141932ca0 body=1889 status=ok
// SIG undefined FUN_141932ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141932ca0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_828 [32];
  undefined8 local_808;
  undefined1 local_7f8;
  undefined1 local_7f7 [7];
  longlong *local_7f0;
  longlong *local_7e8;
  longlong *local_7e0;
  int local_7d8;
  longlong *local_7d0;
  int local_7c8;
  longlong *local_7c0;
  longlong *local_7b8;
  undefined1 *local_7b0;
  code *local_7a8;
  undefined4 uStack_7a0;
  longlong *local_798;
  longlong *local_790;
  undefined1 *local_788;
  undefined4 local_780;
  undefined1 local_77c;
  undefined8 local_778;
  undefined4 local_770;
  undefined1 local_768 [8];
  longlong *local_760;
  undefined1 local_750;
  undefined8 local_748;
  undefined4 local_740;
  undefined8 local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_718;
  longlong *local_710;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined1 local_6f8 [8];
  longlong *local_6f0;
  undefined1 local_6e8 [8];
  longlong *local_6e0;
  undefined1 local_6d8 [768];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_828;
  TAttribute<FInputChord>::operator=(param_1 + 0x2f8,param_2 + 0x108);
  FText::operator=(param_1 + 0x358,param_2 + 0x1e0);
  FText::operator=(param_1 + 0x370,param_2 + 0x1f8);
  plVar3 = (longlong *)(param_1 + 0x3a0);
  if ((longlong *)(param_2 + 0x228) != plVar3) {
    if ((*(int *)(param_2 + 0x230) == 0) ||
       (plVar14 = *(longlong **)(param_2 + 0x228), plVar14 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3a8) != 0) &&
         (plVar14 = (longlong *)*plVar3, plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x28))(plVar14,0);
        if (*plVar3 != 0) {
          lVar10 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar10;
        }
        *(undefined4 *)(param_1 + 0x3a8) = 0;
      }
    }
    else {
      (**(code **)(*plVar14 + 0x30))(plVar14,plVar3);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b0,param_2 + 0x238);
  plVar3 = (longlong *)(param_1 + 0x390);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x389) = *(undefined1 *)(param_2 + 0x211);
  *(undefined1 *)(param_1 + 0x38a) = *(undefined1 *)(param_2 + 0x212);
  if (plVar3 != (longlong *)(param_2 + 0x218)) {
    iVar15 = *(int *)(param_1 + 0x398);
    if (iVar15 != 0) {
      plVar14 = (longlong *)(*plVar3 + 0x10);
      do {
        plVar5 = (longlong *)*plVar14;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
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
        plVar14 = plVar14 + 3;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    iVar15 = *(int *)(param_2 + 0x220);
    lVar10 = *(longlong *)(param_2 + 0x218);
    *(int *)(param_1 + 0x398) = iVar15;
    if ((iVar15 == 0) && (*(int *)(param_1 + 0x39c) == 0)) {
      *(undefined4 *)(param_1 + 0x39c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar3,iVar15);
      puVar12 = (undefined8 *)*plVar3;
      if (iVar15 != 0) {
        puVar13 = (undefined8 *)(lVar10 + 8);
        do {
          *puVar12 = puVar13[-1];
          puVar12[1] = *puVar13;
          lVar10 = puVar13[1];
          puVar12[2] = lVar10;
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
          }
          puVar12 = puVar12 + 3;
          puVar13 = puVar13 + 3;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3e0) = *(undefined1 *)(param_2 + 0x248);
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  local_7a8 = FUN_1419416c0;
  local_738 = FUN_141947250;
  local_780 = 1;
  local_77c = 1;
  local_778 = 0;
  local_770 = 0;
  uStack_7a0 = 0;
  uStack_730 = 0;
  lVar10 = STextBlock::FArguments::FArguments(local_3d8);
  uVar11 = FUN_14187ce90(&local_7e0,param_1,&local_7a8);
  FText::FText(local_768);
  local_750 = 1;
  local_748 = 0;
  local_740 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_748,uVar11);
  FText::operator=(lVar10 + 0x108,local_768);
  *(undefined1 *)(lVar10 + 0x120) = local_750;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_748);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_748);
  if (local_760 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_760 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_760)(local_760);
      LOCK();
      piVar2 = (int *)((longlong)local_760 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_760 + 8))(local_760,1);
      }
    }
  }
  if (local_7d8 == 0) {
LAB_141932fcf:
    if (local_7e0 != (longlong *)0x0) {
      FMemory::Free(local_7e0);
    }
  }
  else if (local_7e0 != (longlong *)0x0) {
    (**(code **)(*local_7e0 + 0x28))(local_7e0,0);
    if (local_7e0 != (longlong *)0x0) {
      local_7e0 = (longlong *)FMemory::Realloc(local_7e0,0,0);
    }
    local_7d8 = 0;
    goto LAB_141932fcf;
  }
  *(undefined8 *)(lVar10 + 0x138) = *(undefined8 *)(param_2 + 0x1d8);
  uVar6 = *(undefined4 *)(param_1 + 0x334);
  uVar7 = *(undefined4 *)(param_1 + 0x338);
  uVar8 = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(lVar10 + 0x2f0) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(lVar10 + 0x2f4) = uVar6;
  *(undefined4 *)(lVar10 + 0x2f8) = uVar7;
  *(undefined4 *)(lVar10 + 0x2fc) = uVar8;
  *(undefined1 *)(lVar10 + 0x300) = *(undefined1 *)(param_1 + 0x340);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x308,param_1 + 0x348);
  *(undefined4 *)(lVar10 + 0x330) = 1;
  *(undefined1 *)(lVar10 + 0x334) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x338,&local_778);
  local_790 = (longlong *)operator_new(0x660);
  if (local_790 == (longlong *)0x0) {
    local_790 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(local_790 + 1) = 1;
    *(undefined4 *)((longlong)local_790 + 0xc) = 1;
    *local_790 = (longlong)&PTR_FUN_144043520;
    if (local_790 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  local_798 = local_790 + 2;
  FUN_14044f790(&local_798);
  local_788 = &local_7f8;
  local_808 = 0x650;
  SWidget::SetDebugInfo
            (local_798,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SInputKeySelector.cpp"
             ,0x1e);
  uVar11 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_798,param_1 + 0x3d0);
  puVar12 = (undefined8 *)FUN_140693250(uVar11,local_6e8,lVar10);
  local_728 = *puVar12;
  local_720 = puVar12[1];
  if (local_720 != 0) {
    LOCK();
    *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
    UNLOCK();
  }
  uVar11 = *(undefined8 *)(param_2 + 0x1d0);
  lVar10 = FUN_14068f3e0(local_6d8);
  local_708 = (undefined4)local_738;
  uStack_704 = local_738._4_4_;
  uStack_700 = uStack_730;
  uStack_6fc = uStack_72c;
  *(undefined8 *)(lVar10 + 0x118) = uVar11;
  *(undefined1 *)(lVar10 + 0x2a8) = *(undefined1 *)(param_1 + 0x3e0);
  uVar11 = FUN_14068c820(&local_7d0,param_1,&local_708);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x188,uVar11);
  if (local_7c8 != 0) {
    if (local_7d0 == (longlong *)0x0) goto LAB_141933192;
    (**(code **)(*local_7d0 + 0x28))(local_7d0,0);
    if (local_7d0 != (longlong *)0x0) {
      local_7d0 = (longlong *)FMemory::Realloc(local_7d0,0,0);
    }
    local_7c8 = 0;
  }
  if (local_7d0 != (longlong *)0x0) {
    FMemory::Free(local_7d0);
  }
LAB_141933192:
  plVar14 = (longlong *)FUN_141880af0();
  plVar3 = plVar14 + 2;
  local_7c0 = plVar3;
  local_7b8 = plVar14;
  FUN_14044f790(&local_7c0,plVar3);
  local_7b0 = local_7f7;
  local_808 = 0x488;
  SWidget::SetDebugInfo
            (plVar3,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SInputKeySelector.cpp"
             ,0x19);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_7f0 = plVar3;
  local_7e8 = plVar14;
  if ((longlong **)(param_1 + 0x3c0) != &local_7f0) {
    *(longlong **)(param_1 + 0x3c0) = plVar3;
    local_7f0 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3c8,&local_7e8);
  }
  plVar3 = local_7e8;
  if (local_7e8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_7e8 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_7e8)(local_7e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_7e8 + 8))(local_7e8,1);
      }
    }
  }
  uVar11 = FUN_14188d200(lVar10,&local_728);
  puVar12 = (undefined8 *)FUN_14188de80(&local_7c0,local_6f8,uVar11);
  plVar3 = (longlong *)puVar12[1];
  local_718 = *puVar12;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_710 = plVar3;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_718);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar3 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_6f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6f0 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_6f0)(local_6f0);
      LOCK();
      piVar2 = (int *)((longlong)local_6f0 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_6f0 + 8))(local_6f0,1);
      }
    }
  }
  plVar3 = local_7b8;
  if (local_7b8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_7b8 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_7b8)(local_7b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_7b8 + 8))(local_7b8,1);
      }
    }
  }
  FUN_140690f70(local_6d8);
  if (local_6e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6e0 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_6e0)(local_6e0);
      LOCK();
      piVar2 = (int *)((longlong)local_6e0 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_6e0 + 8))(local_6e0,1);
      }
    }
  }
  plVar3 = local_790;
  if (local_790 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_790 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_790)(local_790);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_778);
  return;
}



// FUNCTION 141933410 FUN_141933410 body=698 status=ok
// SIG undefined FUN_141933410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141933410(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar6 = operator_new(0x60);
  uVar8 = 0;
  uVar7 = uVar8;
  if (lVar6 != 0) {
    uVar7 = FSimpleSlot::FSimpleSlot(lVar6,param_1);
  }
  TPanelChildren<FSimpleSlot>::Add(param_1 + 0x2d8,uVar7);
  lVar6 = operator_new(0x60);
  if (lVar6 != 0) {
    uVar8 = FSimpleSlot::FSimpleSlot(lVar6,param_1);
  }
  TPanelChildren<FSimpleSlot>::Add(param_1 + 0x2d8,uVar8);
  local_68 = *(undefined4 *)(param_2 + 0x118);
  uStack_64 = *(undefined4 *)(param_2 + 0x11c);
  uStack_60 = *(undefined4 *)(param_2 + 0x120);
  uStack_5c = *(undefined4 *)(param_2 + 0x124);
  local_58 = 1;
  local_50 = 0;
  lVar6 = **(longlong **)(param_1 + 0x2e8);
  local_48 = 0;
  *(undefined1 *)(lVar6 + 0x48) = 1;
  *(undefined4 *)(lVar6 + 0x38) = local_68;
  *(undefined4 *)(lVar6 + 0x3c) = uStack_64;
  *(undefined4 *)(lVar6 + 0x40) = uStack_60;
  *(undefined4 *)(lVar6 + 0x44) = uStack_5c;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x50,&local_50);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  TSlotBase<FSimpleSlot>::operator[](lVar6 + 0x10,param_2 + 0x108);
  plVar5 = *(longlong **)(param_2 + 0x130);
  puVar3 = (undefined8 *)(param_1 + 0x240);
  uVar7 = *(undefined8 *)(param_2 + 0x128);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_88 = uVar7;
  plStack_80 = plVar5;
  if (&local_88 != puVar3) {
    local_88 = *puVar3;
    plStack_80 = *(longlong **)(param_1 + 0x248);
    *puVar3 = uVar7;
    *(longlong **)(param_1 + 0x248) = plVar5;
    local_40 = uVar7;
    plStack_38 = plVar5;
  }
  plVar5 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_2 + 0x130);
  puVar3 = (undefined8 *)(param_1 + 0x250);
  uVar7 = *(undefined8 *)(param_2 + 0x128);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_78 = uVar7;
  plStack_70 = plVar5;
  if (&local_78 != puVar3) {
    local_78 = *puVar3;
    plStack_70 = *(longlong **)(param_1 + 600);
    *puVar3 = uVar7;
    *(longlong **)(param_1 + 600) = plVar5;
    local_30 = uVar7;
    plStack_28 = plVar5;
  }
  plVar5 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x260,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x270,param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x284) = *(undefined1 *)(param_2 + 0x15c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x288,param_2 + 0x160);
  if ((undefined1 *)(param_2 + 0x170) != (undefined1 *)(param_1 + 0x29a)) {
    if (*(char *)(param_1 + 0x29b) != '\0') {
      *(undefined1 *)(param_1 + 0x29b) = 0;
    }
    if (*(char *)(param_2 + 0x171) != '\0') {
      *(undefined1 *)(param_1 + 0x29a) = *(undefined1 *)(param_2 + 0x170);
      *(undefined1 *)(param_1 + 0x29b) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x172);
  *(undefined1 *)(param_1 + 0x2c1) = *(undefined1 *)(param_2 + 0x173);
  *(undefined1 *)(param_1 + 0x299) = *(undefined1 *)(param_2 + 0x174);
  *(undefined1 *)(param_1 + 0x2c2) = *(undefined1 *)(param_2 + 0x175);
  return;
}



// FUNCTION 1419336d0 FUN_1419336d0 body=8543 status=ok
// SIG undefined FUN_1419336d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419336d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  char cVar11;
  byte bVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 uVar19;
  code *pcVar20;
  longlong *plVar21;
  undefined1 auStack_1638 [32];
  longlong local_1618;
  longlong local_1610;
  undefined4 local_1608;
  longlong local_1600;
  longlong local_15f8;
  longlong local_15f0;
  undefined1 local_15e8;
  undefined1 local_15e0;
  longlong local_15d8;
  undefined1 local_15c8;
  char local_15c7;
  undefined1 local_15c6;
  char local_15c5;
  undefined1 local_15c4;
  undefined1 local_15c3;
  undefined1 local_15c2;
  undefined1 local_15c1;
  undefined1 local_15c0 [8];
  longlong local_15b8;
  longlong *local_15b0;
  longlong *local_15a8;
  longlong *local_15a0;
  longlong *plStack_1598;
  undefined8 local_1590;
  longlong *plStack_1588;
  longlong *local_1580;
  longlong *local_1578;
  longlong local_1570;
  longlong *plStack_1568;
  undefined8 local_1560;
  longlong *plStack_1558;
  longlong *local_1550;
  longlong *plStack_1548;
  longlong *local_1540;
  longlong *local_1538;
  longlong *local_1530;
  longlong *plStack_1528;
  longlong *local_1520;
  int local_1518;
  longlong *local_1510;
  int local_1508;
  longlong *local_1500;
  int local_14f8;
  undefined8 *local_14f0;
  undefined8 *local_14e8;
  undefined4 local_14e0;
  undefined4 local_14d8;
  undefined1 local_14d4;
  undefined8 local_14d0;
  undefined4 local_14c8;
  code *local_14b8;
  undefined4 uStack_14b0;
  undefined4 uStack_14ac;
  code *local_14a8;
  undefined4 uStack_14a0;
  undefined4 uStack_149c;
  longlong *local_1498;
  longlong *local_1490;
  longlong *local_1488;
  longlong *local_1480;
  undefined8 *local_1478;
  undefined8 *local_1470;
  undefined1 *local_1468;
  longlong local_1460;
  longlong local_1458;
  undefined1 *local_1450;
  undefined8 *local_1448;
  undefined8 *local_1440;
  undefined1 *local_1438;
  undefined8 local_1430;
  undefined1 local_1428;
  undefined8 local_1420;
  undefined4 local_1418;
  undefined8 local_1410;
  longlong *local_1408;
  longlong *local_1400;
  undefined8 local_13f8;
  longlong local_13f0;
  longlong local_13e8;
  undefined1 *local_13e0;
  undefined4 local_13d8;
  undefined1 local_13d4;
  undefined8 local_13d0;
  undefined4 local_13c8;
  undefined4 local_13c0;
  undefined1 local_13bc;
  undefined8 local_13b8;
  undefined4 local_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined1 local_1398;
  undefined8 local_1390;
  undefined4 local_1388;
  undefined4 local_1380;
  undefined4 local_137c;
  undefined1 local_1378;
  undefined8 local_1370;
  undefined4 local_1368;
  undefined4 local_1360;
  undefined4 local_135c;
  undefined1 local_1358;
  undefined8 local_1350;
  undefined4 local_1348;
  longlong *local_1340;
  longlong *local_1338;
  undefined1 *local_1330;
  undefined4 local_1328;
  undefined4 uStack_1324;
  undefined4 uStack_1320;
  undefined4 uStack_131c;
  undefined1 local_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined1 local_1300;
  undefined8 local_12f8;
  undefined4 local_12f0;
  undefined8 local_12e8;
  undefined4 uStack_12e0;
  undefined4 uStack_12dc;
  undefined8 local_12d8;
  longlong local_12d0;
  longlong *local_12c8;
  longlong *local_12c0;
  undefined8 local_12b8;
  longlong local_12b0;
  undefined8 local_12a8;
  longlong local_12a0;
  undefined8 local_1298;
  undefined4 uStack_1290;
  undefined4 uStack_128c;
  undefined8 local_1288;
  undefined4 uStack_1280;
  undefined4 uStack_127c;
  undefined8 local_1278;
  undefined4 uStack_1270;
  undefined4 uStack_126c;
  undefined8 local_1268;
  undefined4 uStack_1260;
  undefined4 uStack_125c;
  undefined8 local_1258;
  longlong local_1250;
  undefined4 local_1248;
  undefined4 uStack_1244;
  undefined4 uStack_1240;
  undefined4 uStack_123c;
  undefined1 local_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined1 local_1220;
  undefined8 local_1218;
  undefined4 local_1210;
  undefined4 local_1208;
  undefined4 uStack_1204;
  undefined4 uStack_1200;
  undefined4 uStack_11fc;
  undefined4 local_11f8;
  undefined4 uStack_11f4;
  undefined4 uStack_11f0;
  undefined4 uStack_11ec;
  undefined4 local_11e8;
  undefined4 uStack_11e4;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  undefined4 local_11d8;
  undefined4 uStack_11d4;
  undefined4 uStack_11d0;
  undefined4 uStack_11cc;
  undefined4 local_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined1 local_11b8 [16];
  undefined4 local_11a8;
  undefined4 uStack_11a4;
  undefined4 uStack_11a0;
  undefined4 uStack_119c;
  longlong *local_1198;
  longlong *local_1190;
  longlong *local_1180;
  longlong *local_1178;
  undefined1 local_1168 [16];
  undefined1 local_1158 [8];
  longlong *local_1150;
  undefined1 local_1148 [8];
  longlong *local_1140;
  undefined1 local_1138 [8];
  longlong *local_1130;
  undefined1 local_1128 [8];
  longlong *local_1120;
  undefined4 local_1118;
  undefined4 uStack_1114;
  undefined4 uStack_1110;
  undefined4 uStack_110c;
  undefined1 local_1108 [56];
  longlong *local_10d0;
  undefined1 local_10b8;
  undefined8 local_10b0;
  undefined4 local_10a8;
  undefined1 local_10a0 [16];
  longlong *local_1090;
  longlong *plStack_1088;
  undefined8 local_1080;
  longlong *plStack_1078;
  undefined8 local_1070;
  longlong *plStack_1068;
  longlong *local_1060;
  longlong *plStack_1058;
  longlong local_1050;
  longlong *plStack_1048;
  longlong *local_1040;
  longlong *plStack_1038;
  undefined1 local_1028 [272];
  undefined1 local_f18 [48];
  undefined1 local_ee8 [16];
  undefined1 local_ed8 [272];
  undefined1 local_dc8 [48];
  undefined1 local_d98 [16];
  undefined1 local_d88 [264];
  longlong local_c80;
  undefined1 local_c68 [264];
  longlong local_b60;
  undefined1 local_b48 [496];
  undefined1 local_958 [496];
  undefined1 local_768 [688];
  undefined1 local_4b8 [1136];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1419336f2;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1638;
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_2 + 0x108);
  *(longlong *)(param_1 + 0x5c8) = *(longlong *)(param_2 + 0x108) + 8;
  *(longlong *)(param_1 + 0x5d0) = *(longlong *)(param_2 + 0x108) + 0x90;
  *(longlong *)(param_1 + 0x5d8) = *(longlong *)(param_2 + 0x108) + 0x118;
  *(longlong *)(param_1 + 0x5e0) = *(longlong *)(param_2 + 0x108) + 0x1a0;
  uVar6 = *(undefined4 *)(param_2 + 0x55c);
  uVar7 = *(undefined4 *)(param_2 + 0x560);
  uVar8 = *(undefined4 *)(param_2 + 0x564);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x39c) = uVar6;
  *(undefined4 *)(param_1 + 0x3a0) = uVar7;
  *(undefined4 *)(param_1 + 0x3a4) = uVar8;
  *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(param_2 + 0x568);
  local_15b8 = param_1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3b0,param_2 + 0x570);
  uVar6 = *(undefined4 *)(param_2 + 0x3bc);
  uVar7 = *(undefined4 *)(param_2 + 0x3c0);
  uVar8 = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3b8);
  *(undefined4 *)(param_1 + 0x3c4) = uVar6;
  *(undefined4 *)(param_1 + 0x3c8) = uVar7;
  *(undefined4 *)(param_1 + 0x3cc) = uVar8;
  *(undefined1 *)(param_1 + 0x3d0) = *(undefined1 *)(param_2 + 0x3c8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3d8,param_2 + 0x3d0);
  uVar6 = *(undefined4 *)(param_2 + 0x3e4);
  uVar7 = *(undefined4 *)(param_2 + 1000);
  uVar8 = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3ec) = uVar6;
  *(undefined4 *)(param_1 + 0x3f0) = uVar7;
  *(undefined4 *)(param_1 + 0x3f4) = uVar8;
  *(undefined1 *)(param_1 + 0x3f8) = *(undefined1 *)(param_2 + 0x3f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x3f8);
  FUN_1417f9360(param_1 + 0x410,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x460) = *(undefined1 *)(param_2 + 0x208);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x468,param_2 + 0x210);
  FUN_140692440(param_1 + 0x478,param_2 + 0x220);
  *(undefined1 *)(param_1 + 0x4a0) = *(undefined1 *)(param_2 + 0x248);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4a8,param_2 + 0x250);
  FUN_140692440(param_1 + 0x4b8,param_2 + 0x518);
  *(undefined1 *)(param_1 + 0x4e0) = *(undefined1 *)(param_2 + 0x540);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4e8,param_2 + 0x548);
  FUN_140692440(param_1 + 0x4f8,param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x520) = *(undefined1 *)(param_2 + 0x288);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x528,param_2 + 0x290);
  pplVar3 = (longlong **)(param_1 + 0x568);
  *(bool *)(param_1 + 0x560) = *(longlong *)(param_2 + 0x398) != 0;
  plVar14 = *(longlong **)(param_2 + 0x3a0);
  plVar21 = *(longlong **)(param_2 + 0x398);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_1530 = plVar21;
  plStack_1528 = plVar14;
  if (&local_1530 != pplVar3) {
    local_1530 = *pplVar3;
    plStack_1528 = *(longlong **)(param_1 + 0x570);
    *pplVar3 = plVar21;
    *(longlong **)(param_1 + 0x570) = plVar14;
    local_1040 = plVar21;
    plStack_1038 = plVar14;
  }
  plVar14 = plStack_1528;
  if (plStack_1528 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_1528 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_1528)(plStack_1528);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1528 + 8))(plStack_1528,1);
      }
    }
  }
  if (*pplVar3 == (longlong *)0x0) {
    lVar18 = *(longlong *)(param_2 + 0x108);
    local_1380 = 0x40a00000;
    local_137c = 0x40a00000;
    local_1378 = 1;
    local_1370 = 0;
    local_1368 = 0;
    lVar13 = SScrollBar::FArguments::FArguments(local_1028);
    *(longlong *)(lVar13 + 0x108) = lVar18 + 800;
    *(undefined4 *)(lVar13 + 0x124) = 0;
    *(undefined1 *)(lVar13 + 0x120) = *(undefined1 *)(param_2 + 0x390);
    *(undefined4 *)(lVar13 + 0x130) = 0x40a00000;
    *(undefined4 *)(lVar13 + 0x134) = 0x40a00000;
    *(undefined1 *)(lVar13 + 0x138) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x140,&local_1370);
    plVar14 = (longlong *)operator_new(0x448);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar14 + 1) = 1;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      *plVar14 = (longlong)&PTR_FUN_144d6e640;
      if (plVar14 != (longlong *)0xfffffffffffffff0) {
        SScrollBar::SScrollBar();
      }
    }
    plVar21 = plVar14 + 2;
    local_1198 = plVar21;
    local_1190 = plVar14;
    FUN_14044f790(&local_1198,plVar21);
    local_1618 = 0x438;
    SWidget::SetDebugInfo
              (plVar21,"SScrollBar",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
               ,0x38);
    local_1608 = *(undefined4 *)(lVar13 + 0x90);
    local_15d8 = lVar13 + 0xf8;
    local_15f0 = lVar13 + 0xe8;
    local_15e0 = *(undefined1 *)(lVar13 + 0xf1);
    local_15f8 = lVar13 + 200;
    local_1600 = lVar13 + 0x98;
    local_15e8 = *(undefined1 *)(lVar13 + 0xf0);
    local_1610 = lVar13 + 0x78;
    local_1618 = lVar13 + 0x60;
    SWidget::SWidgetConstruct(plVar21,lVar13,lVar13 + 0x30,lVar13 + 0x40);
    FUN_141976670(plVar21,lVar13);
    if (((char)plVar14[5] < '\0') ||
       (cVar11 = (**(code **)(*plVar21 + 0x1e8))(plVar21), cVar11 != '\0')) {
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
    *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar12;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_15b0 = plVar21;
    local_15a8 = plVar14;
    if (pplVar3 != &local_15b0) {
      *pplVar3 = plVar21;
      local_15b0 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x570,&local_15a8);
    }
    plVar21 = local_15a8;
    if (local_15a8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_15a8 + 1;
      lVar18 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_15a8)(local_15a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_15a8 + 8))(local_15a8,1);
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar14 + 1;
      lVar18 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      LOCK();
      plVar21 = plVar14 + 1;
      lVar18 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_ee8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f18);
    FUN_140456c70(local_1028);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1370);
    param_1 = local_15b8;
  }
  pplVar3 = (longlong **)(param_1 + 0x590);
  *(bool *)(param_1 + 0x588) = *(longlong *)(param_2 + 0x3a8) != 0;
  plVar14 = *(longlong **)(param_2 + 0x3b0);
  plVar21 = *(longlong **)(param_2 + 0x3a8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_15a0 = plVar21;
  plStack_1598 = plVar14;
  if (&local_15a0 != pplVar3) {
    local_15a0 = *pplVar3;
    plStack_1598 = *(longlong **)(param_1 + 0x598);
    *pplVar3 = plVar21;
    *(longlong **)(param_1 + 0x598) = plVar14;
    local_1090 = plVar21;
    plStack_1088 = plVar14;
  }
  plVar14 = plStack_1598;
  if (plStack_1598 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_1598 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_1598)(plStack_1598);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1598 + 8))(plStack_1598,1);
      }
    }
  }
  lVar18 = param_1;
  if (*pplVar3 == (longlong *)0x0) {
    lVar18 = *(longlong *)(param_2 + 0x108);
    local_1360 = 0x40a00000;
    local_135c = 0x40a00000;
    local_1358 = 1;
    local_1350 = 0;
    local_1348 = 0;
    lVar13 = SScrollBar::FArguments::FArguments(local_ed8);
    *(longlong *)(lVar13 + 0x108) = lVar18 + 800;
    *(undefined4 *)(lVar13 + 0x124) = 1;
    *(undefined1 *)(lVar13 + 0x120) = *(undefined1 *)(param_2 + 0x390);
    *(undefined4 *)(lVar13 + 0x130) = 0x40a00000;
    *(undefined4 *)(lVar13 + 0x134) = 0x40a00000;
    *(undefined1 *)(lVar13 + 0x138) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x140,&local_1350);
    plVar14 = (longlong *)operator_new(0x448);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar14 + 1) = 1;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      *plVar14 = (longlong)&PTR_FUN_144d6e640;
      if (plVar14 != (longlong *)0xfffffffffffffff0) {
        SScrollBar::SScrollBar();
      }
    }
    plVar21 = plVar14 + 2;
    local_1180 = plVar21;
    local_1178 = plVar14;
    FUN_14044f790(&local_1180,plVar21);
    local_1618 = 0x438;
    SWidget::SetDebugInfo
              (plVar21,"SScrollBar",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
               ,0x44);
    local_1608 = *(undefined4 *)(lVar13 + 0x90);
    local_15d8 = lVar13 + 0xf8;
    local_15f0 = lVar13 + 0xe8;
    local_15e0 = *(undefined1 *)(lVar13 + 0xf1);
    local_15f8 = lVar13 + 200;
    local_1600 = lVar13 + 0x98;
    local_15e8 = *(undefined1 *)(lVar13 + 0xf0);
    local_1610 = lVar13 + 0x78;
    local_1618 = lVar13 + 0x60;
    SWidget::SWidgetConstruct(plVar21,lVar13,lVar13 + 0x30,lVar13 + 0x40);
    FUN_141976670(plVar21,lVar13);
    if (((char)plVar14[5] < '\0') ||
       (cVar11 = (**(code **)(*plVar21 + 0x1e8))(plVar21), cVar11 != '\0')) {
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
    *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar12;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_1580 = plVar21;
    local_1578 = plVar14;
    if (pplVar3 != &local_1580) {
      *pplVar3 = plVar21;
      local_1580 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x598,&local_1578);
    }
    plVar21 = local_1578;
    if (local_1578 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1578 + 1;
      lVar18 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_1578)(local_1578);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1578 + 8))(local_1578,1);
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar14 + 1;
      lVar18 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
      LOCK();
      plVar21 = plVar14 + 1;
      lVar18 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_d98);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_dc8);
    FUN_140456c70(local_ed8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1350);
    lVar18 = local_15b8;
  }
  local_1400 = *(longlong **)(param_1 + 0x598);
  local_1498 = *pplVar3;
  if (local_1400 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1400 + 1) = (int)local_1400[1] + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(lVar18 + 0x570);
  plVar21 = *(longlong **)(lVar18 + 0x568);
  local_14a8 = FUN_14193b1b0;
  uStack_14a0 = 0;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_14b8 = FUN_14193b030;
  local_12e8 = FUN_14193ad60;
  local_1268 = FUN_14193b130;
  local_1278 = FUN_14193af10;
  local_1288 = FUN_14193ac70;
  uStack_14b0 = 0;
  local_1298 = FUN_14193f2d0;
  uStack_12e0 = 0;
  local_13c0 = 0x3f800000;
  local_13bc = 1;
  local_13b8 = 0;
  local_13b0 = 0;
  local_13d8 = 0x3f800000;
  local_13d4 = 1;
  local_13d0 = 0;
  local_13c8 = 0;
  uStack_1260 = 0;
  uStack_1270 = 0;
  uStack_1280 = 0;
  uStack_1290 = 0;
  local_11f8 = 0x4193b1b0;
  uStack_11f4 = 1;
  uStack_11f0 = 0;
  uStack_11ec = uStack_149c;
  local_1208 = 0x4193b030;
  uStack_1204 = 1;
  uStack_1200 = 0;
  uStack_11fc = uStack_14ac;
  local_1490 = local_1400;
  if (local_1498 == (longlong *)0x0) {
    local_1498 = DAT_1469eb218;
    local_1490 = DAT_1469eb220;
  }
  if (local_1490 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1490 + 1) = (int)local_1490[1] + 1;
    UNLOCK();
  }
  local_1408 = plVar14;
  local_1440 = (undefined8 *)operator_new(800);
  if (local_1440 != (undefined8 *)0x0) {
    *(undefined4 *)(local_1440 + 1) = 1;
    *(undefined4 *)((longlong)local_1440 + 0xc) = 1;
    *local_1440 = &PTR_FUN_144044b78;
    if (local_1440 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  local_1448 = local_1440 + 2;
  FUN_14044f790(&local_1448);
  local_1438 = local_15c0;
  local_1618 = 0x310;
  SWidget::SetDebugInfo
            (local_1448,&DAT_144d6b5ec,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
             ,0x95);
  uVar15 = FUN_14068f180(local_958);
  uVar15 = FUN_141920740(uVar15,lVar18,&local_11f8);
  uVar15 = FUN_140692660(uVar15,&local_1498);
  uVar16 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_1448,lVar18 + 0x5a0);
  puVar17 = (undefined8 *)FUN_14188dd80(uVar16,local_1128,uVar15);
  local_12b8 = *puVar17;
  local_12b0 = puVar17[1];
  if (local_12b0 != 0) {
    LOCK();
    *(int *)(local_12b0 + 8) = *(int *)(local_12b0 + 8) + 1;
    UNLOCK();
  }
  puVar17 = (undefined8 *)operator_new(0x88);
  if (puVar17 == (undefined8 *)0x0) {
    local_14e8 = (undefined8 *)0x0;
  }
  else {
    local_14e8 = puVar17;
    FUN_1417f13c0(puVar17);
    *puVar17 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  if (plVar21 == (longlong *)0x0) {
    local_1488 = DAT_1469eb218;
    local_1480 = DAT_1469eb220;
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_1488 = plVar21;
    local_1480 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
  }
  local_1470 = (undefined8 *)operator_new(800);
  if (local_1470 == (undefined8 *)0x0) {
    local_1470 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(local_1470 + 1) = 1;
    *(undefined4 *)((longlong)local_1470 + 0xc) = 1;
    *local_1470 = &PTR_FUN_144044b78;
    if (local_1470 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
  }
  local_1478 = local_1470 + 2;
  FUN_14044f790(&local_1478);
  local_1468 = &local_15c4;
  local_1618 = 0x310;
  SWidget::SetDebugInfo
            (local_1478,&DAT_144d6b1a4,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
             ,0x8a);
  uVar15 = FUN_14068f180(local_b48);
  uVar15 = FUN_141920740(uVar15,lVar18,&local_1208);
  uVar15 = FUN_140692660(uVar15,&local_1488);
  uVar16 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_1478,lVar18 + 0x578);
  puVar17 = (undefined8 *)FUN_14188dd80(uVar16,local_1138,uVar15);
  local_12d8 = *puVar17;
  local_12d0 = puVar17[1];
  if (local_12d0 != 0) {
    LOCK();
    *(int *)(local_12d0 + 8) = *(int *)(local_12d0 + 8) + 1;
    UNLOCK();
  }
  puVar17 = (undefined8 *)operator_new(0x88);
  if (puVar17 == (undefined8 *)0x0) {
    local_14f0 = (undefined8 *)0x0;
  }
  else {
    local_14f0 = puVar17;
    FUN_1417f13c0(puVar17);
    *puVar17 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  local_15c5 = *(char *)(param_2 + 0x5f3) != '\0';
  if ((bool)local_15c5) {
    local_15c6 = *(undefined1 *)(param_2 + 0x5f2);
  }
  local_15c7 = *(char *)(param_2 + 0x5f1) != '\0';
  if ((bool)local_15c7) {
    local_15c8 = *(undefined1 *)(param_2 + 0x5f0);
  }
  local_14a8 = (code *)*pplVar3;
  plVar14 = *(longlong **)(param_1 + 0x598);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_1410 = *(undefined8 *)(lVar18 + 0x568);
  local_14b8 = *(code **)(lVar18 + 0x570);
  if (local_14b8 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)local_14b8 + 8) = (int)*(longlong *)((longlong)local_14b8 + 8) + 1;
    UNLOCK();
  }
  plVar21 = *(longlong **)(param_2 + 0x120);
  local_13f8 = *(undefined8 *)(param_2 + 0x118);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
  }
  lVar18 = FUN_1419215b0(local_4b8);
  FText::operator=(lVar18 + 0x108,param_2 + 0x128);
  *(undefined1 *)(lVar18 + 0x120) = *(undefined1 *)(param_2 + 0x140);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x128,param_2 + 0x148);
  FText::operator=(lVar18 + 0x138,param_2 + 0x158);
  *(undefined1 *)(lVar18 + 0x150) = *(undefined1 *)(param_2 + 0x170);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x158,param_2 + 0x178);
  FText::operator=(lVar18 + 0x168,param_2 + 0x188);
  *(undefined1 *)(lVar18 + 0x180) = *(undefined1 *)(param_2 + 0x1a0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x188,param_2 + 0x1a8);
  local_1590 = local_13f8;
  *(undefined8 *)(lVar18 + 0x1f0) = *(undefined8 *)(param_2 + 0x110);
  puVar17 = (undefined8 *)(lVar18 + 0x198);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
  }
  plStack_1588 = plVar21;
  if (&local_1590 != puVar17) {
    local_1590 = *puVar17;
    plStack_1588 = *(longlong **)(lVar18 + 0x1a0);
    local_1080 = local_13f8;
    *puVar17 = local_13f8;
    *(longlong **)(lVar18 + 0x1a0) = plVar21;
    plStack_1078 = plVar21;
  }
  plVar5 = plStack_1588;
  if (plStack_1588 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_1588 + 1;
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_1588)(plStack_1588);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1588 + 8))(plStack_1588,1);
      }
    }
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar21 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
  }
  local_1118 = (undefined4)local_12e8;
  uStack_1114 = local_12e8._4_4_;
  uStack_1110 = uStack_12e0;
  uStack_110c = uStack_12dc;
  uVar15 = FUN_14191f5d0(&local_1520,local_15b8,&local_1118);
  FUN_1417efd90(local_1108);
  local_10b8 = 1;
  local_10b0 = 0;
  local_10a8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_10b0,uVar15);
  FUN_141925d20(lVar18 + 0x1f8,local_1108);
  *(undefined1 *)(lVar18 + 0x248) = local_10b8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x250,&local_10b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_10b0);
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_10d0 + 1;
    lVar13 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_10d0)(local_10d0);
      LOCK();
      piVar1 = (int *)((longlong)local_10d0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10d0 + 8))(local_10d0,1);
      }
    }
  }
  if (local_1518 == 0) {
LAB_1419346f7:
    if (local_1520 != (longlong *)0x0) {
      FMemory::Free(local_1520);
    }
  }
  else if (local_1520 != (longlong *)0x0) {
    (**(code **)(*local_1520 + 0x28))(local_1520,0);
    if (local_1520 != (longlong *)0x0) {
      local_1520 = (longlong *)FMemory::Realloc(local_1520,0,0);
    }
    local_1518 = 0;
    goto LAB_1419346f7;
  }
  *(undefined1 *)(lVar18 + 0x2b8) = *(undefined1 *)(param_2 + 0x2d0);
  *(undefined1 *)(lVar18 + 0x2b9) = *(undefined1 *)(param_2 + 0x2d1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x2c0,param_2 + 0x2d8);
  *(undefined1 *)(lVar18 + 800) = *(undefined1 *)(param_2 + 0x2e8);
  *(undefined1 *)(lVar18 + 0x321) = *(undefined1 *)(param_2 + 0x2e9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x328,param_2 + 0x2f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x3b0,param_2 + 0x408);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x2f0,param_2 + 0x418);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x300,param_2 + 0x428);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x310,param_2 + 0x438);
  plVar21 = (longlong *)(lVar18 + 0x3e0);
  if ((longlong *)(param_2 + 0x468) != plVar21) {
    if ((*(int *)(param_2 + 0x470) == 0) ||
       (plVar5 = *(longlong **)(param_2 + 0x468), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(lVar18 + 1000) != 0) &&
         (plVar5 = (longlong *)*plVar21, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar21 != 0) {
          lVar13 = FMemory::Realloc(*plVar21,0,0);
          *plVar21 = lVar13;
        }
        *(undefined4 *)(lVar18 + 1000) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar21);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x410,param_2 + 0x498);
  plVar21 = (longlong *)(lVar18 + 0x420);
  if ((longlong *)(param_2 + 0x4a8) != plVar21) {
    if ((*(int *)(param_2 + 0x4b0) == 0) ||
       (plVar5 = *(longlong **)(param_2 + 0x4a8), plVar5 == (longlong *)0x0)) {
      if ((*(int *)(lVar18 + 0x428) != 0) &&
         (plVar5 = (longlong *)*plVar21, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar21 != 0) {
          lVar13 = FMemory::Realloc(*plVar21,0,0);
          *plVar21 = lVar13;
        }
        *(undefined4 *)(lVar18 + 0x428) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar21);
    }
  }
  *(undefined4 *)(lVar18 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined1 *)(lVar18 + 0x2a4) = *(undefined1 *)(param_2 + 0x2a4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x2a8,param_2 + 0x2a8);
  *(undefined1 *)(lVar18 + 0x368) = *(undefined1 *)(param_2 + 0x348);
  *(undefined1 *)(lVar18 + 0x369) = *(undefined1 *)(param_2 + 0x349);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x370,param_2 + 0x350);
  *(undefined1 *)(lVar18 + 0x338) = *(undefined1 *)(param_2 + 0x318);
  *(undefined1 *)(lVar18 + 0x339) = *(undefined1 *)(param_2 + 0x319);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x340,param_2 + 800);
  *(undefined1 *)(lVar18 + 0x350) = *(undefined1 *)(param_2 + 0x330);
  *(undefined1 *)(lVar18 + 0x351) = *(undefined1 *)(param_2 + 0x331);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x358,param_2 + 0x338);
  *(undefined1 *)(lVar18 + 0x380) = *(undefined1 *)(param_2 + 0x360);
  *(undefined1 *)(lVar18 + 0x381) = *(undefined1 *)(param_2 + 0x361);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x388,param_2 + 0x368);
  *(undefined4 *)(lVar18 + 0x288) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined1 *)(lVar18 + 0x28c) = *(undefined1 *)(param_2 + 700);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x290,param_2 + 0x2c0);
  uVar6 = *(undefined4 *)(param_2 + 0x584);
  uVar7 = *(undefined4 *)(param_2 + 0x588);
  uVar8 = *(undefined4 *)(param_2 + 0x58c);
  *(undefined4 *)(lVar18 + 0x260) = *(undefined4 *)(param_2 + 0x580);
  *(undefined4 *)(lVar18 + 0x264) = uVar6;
  *(undefined4 *)(lVar18 + 0x268) = uVar7;
  *(undefined4 *)(lVar18 + 0x26c) = uVar8;
  *(undefined1 *)(lVar18 + 0x270) = *(undefined1 *)(param_2 + 0x590);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x278,param_2 + 0x598);
  *(undefined4 *)(lVar18 + 0x1a8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined1 *)(lVar18 + 0x1ac) = *(undefined1 *)(param_2 + 0x4bc);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x1b0,param_2 + 0x4c0);
  *(undefined1 *)(lVar18 + 0x1c0) = *(undefined1 *)(param_2 + 0x4d0);
  *(undefined1 *)(lVar18 + 0x1c1) = *(undefined1 *)(param_2 + 0x4d1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x1c8,param_2 + 0x4d8);
  *(undefined1 *)(lVar18 + 0x1d8) = *(undefined1 *)(param_2 + 0x4e8);
  *(undefined1 *)(lVar18 + 0x1d9) = *(undefined1 *)(param_2 + 0x4e9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x1e0,param_2 + 0x4f0);
  pcVar10 = local_14b8;
  puVar17 = (undefined8 *)(lVar18 + 0x2d0);
  local_1560 = local_1410;
  if (local_14b8 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)local_14b8 + 8) = (int)*(longlong *)((longlong)local_14b8 + 8) + 1;
    UNLOCK();
  }
  pcVar20 = local_14b8;
  if (&local_1560 != puVar17) {
    local_1560 = *puVar17;
    pcVar20 = *(code **)(lVar18 + 0x2d8);
    local_1070 = local_1410;
    plStack_1068 = (longlong *)local_14b8;
    *puVar17 = local_1410;
    *(code **)(lVar18 + 0x2d8) = local_14b8;
  }
  plStack_1558 = (longlong *)pcVar20;
  if (pcVar20 != (code *)0x0) {
    LOCK();
    plVar21 = (longlong *)((longlong)pcVar20 + 8);
    lVar13 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (*(code *)**(undefined8 **)pcVar20)(pcVar20);
      LOCK();
      piVar1 = (int *)((longlong)pcVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1558 + 8))(plStack_1558,1);
      }
    }
  }
  if (pcVar10 != (code *)0x0) {
    LOCK();
    plVar21 = (longlong *)((longlong)pcVar10 + 8);
    lVar13 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (*(code *)**(undefined8 **)pcVar10)(pcVar10);
      LOCK();
      piVar1 = (int *)((longlong)pcVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*(longlong *)pcVar10 + 8))(pcVar10,1);
      }
    }
  }
  pplVar3 = (longlong **)(lVar18 + 0x2e0);
  local_1550 = (longlong *)local_14a8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  plStack_1548 = plVar14;
  if (&local_1550 != pplVar3) {
    local_1550 = *pplVar3;
    plStack_1548 = *(longlong **)(lVar18 + 0x2e8);
    local_1060 = (longlong *)local_14a8;
    *pplVar3 = (longlong *)local_14a8;
    *(longlong **)(lVar18 + 0x2e8) = plVar14;
    plStack_1058 = plVar14;
  }
  plVar21 = plStack_1548;
  if (plStack_1548 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_1548 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_1548)(plStack_1548);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1548 + 8))(plStack_1548,1);
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar14 + 1;
    lVar13 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x3c0,param_2 + 0x448);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x3d0,param_2 + 0x458);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x3f0,param_2 + 0x478);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x400,param_2 + 0x488);
  *(undefined1 *)(lVar18 + 0x430) = *(undefined1 *)(param_2 + 0x5b8);
  *(undefined1 *)(lVar18 + 0x431) = *(undefined1 *)(param_2 + 0x5b9);
  *(undefined4 *)(lVar18 + 0x438) = *(undefined4 *)(param_2 + 0x5c0);
  *(undefined1 *)(lVar18 + 0x43c) = *(undefined1 *)(param_2 + 0x5c4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x440,param_2 + 0x5c8);
  *(undefined1 *)(lVar18 + 0x450) = *(undefined1 *)(param_2 + 0x5d8);
  *(undefined1 *)(lVar18 + 0x451) = *(undefined1 *)(param_2 + 0x5d9);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x458,param_2 + 0x5e0);
  if (&local_15c8 != (undefined1 *)(lVar18 + 0x468)) {
    if (*(char *)(lVar18 + 0x469) != '\0') {
      *(undefined1 *)(lVar18 + 0x469) = 0;
    }
    if (local_15c7 != '\0') {
      *(undefined1 *)(lVar18 + 0x468) = local_15c8;
      *(undefined1 *)(lVar18 + 0x469) = 1;
    }
  }
  if (&local_15c6 != (undefined1 *)(lVar18 + 0x46a)) {
    if (*(char *)(lVar18 + 0x46b) != '\0') {
      *(undefined1 *)(lVar18 + 0x46b) = 0;
    }
    if (local_15c5 != '\0') {
      *(undefined1 *)(lVar18 + 0x46a) = local_15c6;
      *(undefined1 *)(lVar18 + 0x46b) = 1;
    }
  }
  *(undefined1 *)(lVar18 + 0x398) = *(undefined1 *)(param_2 + 0x378);
  *(undefined1 *)(lVar18 + 0x399) = *(undefined1 *)(param_2 + 0x379);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x3a0,param_2 + 0x380);
  plVar14 = (longlong *)operator_new(0x3f0);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_144d6e650;
    if (plVar14 != (longlong *)0xfffffffffffffff0) {
      SMultiLineEditableText::SMultiLineEditableText();
    }
  }
  plVar21 = plVar14 + 2;
  local_1340 = plVar21;
  local_1338 = plVar14;
  FUN_14044f790(&local_1340,plVar21);
  local_1330 = &local_15c3;
  local_1618 = 0x3e0;
  SWidget::SetDebugInfo
            (plVar21,"SMultiLineEditableText",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
             ,0x5e);
  lVar13 = local_15b8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_1540 = plVar21;
  local_1538 = plVar14;
  if ((longlong **)(local_15b8 + 0x388) != &local_1540) {
    *(longlong **)(local_15b8 + 0x388) = plVar21;
    local_1540 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_15b8 + 0x390,&local_1538);
  }
  plVar5 = local_1538;
  if (local_1538 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1538 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1538)(local_1538);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1538 + 8))(local_1538,1);
      }
    }
  }
  local_1608 = *(undefined4 *)(lVar18 + 0x90);
  local_15d8 = lVar18 + 0xf8;
  local_15f0 = lVar18 + 0xe8;
  local_15e0 = *(undefined1 *)(lVar18 + 0xf1);
  local_15f8 = lVar18 + 200;
  local_1600 = lVar18 + 0x98;
  local_15e8 = *(undefined1 *)(lVar18 + 0xf0);
  local_1610 = lVar18 + 0x78;
  local_1618 = lVar18 + 0x60;
  SWidget::SWidgetConstruct(plVar21,lVar18,lVar18 + 0x30,lVar18 + 0x40);
  FUN_1419ac7b0(plVar21,lVar18);
  if (((char)plVar14[5] < '\0') ||
     (cVar11 = (**(code **)(*plVar21 + 0x1e8))(plVar21), cVar11 != '\0')) {
    bVar12 = 1;
  }
  else {
    bVar12 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar12;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_12c8 = plVar21;
  local_12c0 = plVar14;
  puVar17 = (undefined8 *)operator_new(0x88);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar17);
    *puVar17 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  *(undefined2 *)(puVar17 + 4) = 0;
  local_14e0 = 1;
  local_14d8 = 0x3f800000;
  local_14d4 = 1;
  local_14d0 = 0;
  local_14c8 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_14d0,&local_13b8);
  *(undefined4 *)(puVar17 + 5) = local_14e0;
  *(undefined1 *)((longlong)puVar17 + 0x34) = local_14d4;
  *(undefined4 *)(puVar17 + 6) = local_14d8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar17 + 7,&local_14d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_14d0);
  local_13e8 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  lVar18 = local_13e8 + 0x10;
  local_13f0 = lVar18;
  FUN_14044f790(&local_13f0,lVar18);
  local_13e0 = &local_15c2;
  local_1618 = 0x238;
  SWidget::SetDebugInfo
            (lVar18,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
             ,0x57);
  uVar15 = SVerticalBox::FSlot::AutoHeight(local_14f0);
  uVar15 = FUN_1417f9c30(uVar15,&local_12d8);
  uVar16 = FUN_1417f9c30(puVar17,&local_12c8);
  uVar19 = SCanvas::FArguments::FArguments(local_c68);
  uVar16 = SOverlay::FArguments::operator+(uVar19,uVar16);
  uVar15 = SOverlay::FArguments::operator+(uVar16,uVar15);
  puVar17 = (undefined8 *)FUN_1417fd340(&local_13f0,local_1148,uVar15);
  local_12a8 = *puVar17;
  local_12a0 = puVar17[1];
  if (local_12a0 != 0) {
    LOCK();
    *(int *)(local_12a0 + 8) = *(int *)(local_12a0 + 8) + 1;
    UNLOCK();
  }
  puVar17 = (undefined8 *)operator_new(0x88);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    FUN_1417f13c0(puVar17);
    *puVar17 = &PTR__scalar_deleting_destructor__144042bf8;
  }
  *(undefined2 *)(puVar17 + 4) = 0;
  local_1458 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
  local_1460 = local_1458 + 0x10;
  FUN_14044f790(&local_1460);
  local_1450 = &local_15c1;
  local_1618 = 0x238;
  SWidget::SetDebugInfo
            (local_1460,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMultiLineEditableTextBox.cpp"
             ,0x51);
  uVar15 = SVerticalBox::FSlot::AutoHeight(local_14e8);
  uVar15 = FUN_140692760(uVar15,&local_12b8);
  uVar16 = SHorizontalBox::FSlot::FillWidth(puVar17,&local_13d8);
  uVar16 = FUN_140692760(uVar16,&local_12a8);
  uVar19 = SCanvas::FArguments::FArguments(local_d88);
  uVar16 = SOverlay::FArguments::operator+(uVar19,uVar16);
  uVar15 = SOverlay::FArguments::operator+(uVar16,uVar15);
  uVar16 = TSlateDecl<SListView<TSharedPtr<FString,1>_>,RequiredArgs::T0RequiredArgs>::
           Expose<SListView<TSharedPtr<FString,1>_>_>(&local_1460,(undefined8 *)(lVar13 + 0x550));
  puVar17 = (undefined8 *)FUN_140693150(uVar16,local_1158,uVar15);
  local_1258 = *puVar17;
  local_1250 = puVar17[1];
  if (local_1250 != 0) {
    LOCK();
    *(int *)(local_1250 + 8) = *(int *)(local_1250 + 8) + 1;
    UNLOCK();
  }
  lVar18 = FUN_141886d30(local_768);
  local_11e8 = (undefined4)local_1298;
  uStack_11e4 = local_1298._4_4_;
  uStack_11e0 = uStack_1290;
  uStack_11dc = uStack_128c;
  uVar15 = FUN_1417dd6e0(&local_1510,lVar13,&local_11e8);
  local_1428 = 1;
  local_1430 = 0;
  local_1420 = 0;
  local_1418 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1420,uVar15);
  *(undefined8 *)(lVar18 + 0x188) = local_1430;
  *(undefined1 *)(lVar18 + 400) = local_1428;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x198,&local_1420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1420);
  if (local_1508 == 0) {
LAB_14193526f:
    if (local_1510 != (longlong *)0x0) {
      FMemory::Free(local_1510);
    }
  }
  else if (local_1510 != (longlong *)0x0) {
    (**(code **)(*local_1510 + 0x28))(local_1510,0);
    if (local_1510 != (longlong *)0x0) {
      local_1510 = (longlong *)FMemory::Realloc(local_1510,0,0);
    }
    local_1508 = 0;
    goto LAB_14193526f;
  }
  local_11d8 = (undefined4)local_1288;
  uStack_11d4 = local_1288._4_4_;
  uStack_11d0 = uStack_1280;
  uStack_11cc = uStack_127c;
  uVar15 = FUN_14187cd30(&local_1500,lVar13,&local_11d8);
  local_1318 = 0;
  local_1300 = 1;
  local_1328 = 0x3f800000;
  uStack_1324 = 0;
  uStack_1320 = 0x3f800000;
  uStack_131c = 0x3f800000;
  local_12f8 = 0;
  local_1310 = 0;
  uStack_1308 = 0;
  local_12f0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_12f8,uVar15);
  FUN_140692440(lVar18 + 0x210,&local_1328);
  *(undefined1 *)(lVar18 + 0x238) = local_1300;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x240,&local_12f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_12f8);
  FUN_1417f7230(&local_1328);
  if (local_14f8 != 0) {
    if (local_1500 == (longlong *)0x0) goto LAB_141935371;
    (**(code **)(*local_1500 + 0x28))(local_1500,0);
    if (local_1500 != (longlong *)0x0) {
      local_1500 = (longlong *)FMemory::Realloc(local_1500,0,0);
    }
    local_14f8 = 0;
  }
  if (local_1500 != (longlong *)0x0) {
    FMemory::Free(local_1500);
  }
LAB_141935371:
  local_11c8 = (undefined4)local_1278;
  uStack_11c4 = local_1278._4_4_;
  uStack_11c0 = uStack_1270;
  uStack_11bc = uStack_126c;
  uVar15 = FUN_14187cd30(local_11b8,lVar13,&local_11c8);
  local_1218 = 0;
  local_1210 = 0;
  local_1238 = 0;
  local_1248 = 0x3f800000;
  uStack_1244 = 0;
  uStack_1240 = 0x3f800000;
  uStack_123c = 0x3f800000;
  local_1220 = 1;
  local_1230 = 0;
  uStack_1228 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1218,uVar15);
  FUN_140692440(lVar18 + 0x250,&local_1248);
  *(undefined1 *)(lVar18 + 0x278) = local_1220;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x280,&local_1218);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1218);
  FUN_1417f7230(&local_1248);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_11b8);
  local_11a8 = (undefined4)local_1268;
  uStack_11a4 = local_1268._4_4_;
  uStack_11a0 = uStack_1260;
  uStack_119c = uStack_125c;
  uVar15 = FUN_1418c8cd0(local_1168,lVar13,&local_11a8);
  local_1398 = 1;
  local_1390 = 0;
  local_1388 = 0;
  local_13a8 = 0;
  uStack_13a0 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1390,uVar15);
  *(undefined1 *)(lVar18 + 0x130) = local_1398;
  *(undefined4 *)(lVar18 + 0x120) = (undefined4)local_13a8;
  *(undefined4 *)(lVar18 + 0x124) = local_13a8._4_4_;
  *(undefined4 *)(lVar18 + 0x128) = (undefined4)uStack_13a0;
  *(undefined4 *)(lVar18 + 300) = uStack_13a0._4_4_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar18 + 0x138,&local_1390);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1390);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1168);
  uVar15 = FUN_14188d200(lVar18,&local_1258);
  FUN_141971ea0(lVar13,uVar15);
  FUN_14188af70(local_768);
  if (local_1150 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1150 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_1150)(local_1150);
      LOCK();
      piVar1 = (int *)((longlong)local_1150 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1150 + 8))(local_1150,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1460);
  if (local_c80 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_d88);
  if (local_1140 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1140 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_1140)(local_1140);
      LOCK();
      piVar1 = (int *)((longlong)local_1140 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1140 + 8))(local_1140,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_13f0);
  if (local_b60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_c68);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar14 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1340);
  FUN_141924260(local_4b8);
  if (local_1130 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1130 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_1130)(local_1130);
      LOCK();
      piVar1 = (int *)((longlong)local_1130 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1130 + 8))(local_1130,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1478);
  FUN_140690ea0(local_b48);
  if (local_1120 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1120 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_1120)(local_1120);
      LOCK();
      piVar1 = (int *)((longlong)local_1120 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1120 + 8))(local_1120,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1448);
  FUN_140690ea0(local_958);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_13d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_13b8);
  plVar14 = local_1408;
  if (local_1408 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1408 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_1408)(local_1408);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  plVar14 = local_1400;
  if (local_1400 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1400 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_1400)(local_1400);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  plVar14 = *(longlong **)(param_2 + 0x5b0);
  plVar21 = (longlong *)(lVar13 + 0x5b0);
  lVar18 = *(longlong *)(param_2 + 0x5a8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_1570 = lVar18;
  plStack_1568 = plVar14;
  if (&local_1570 != plVar21) {
    local_1570 = *plVar21;
    plStack_1568 = *(longlong **)(lVar13 + 0x5b8);
    *plVar21 = lVar18;
    *(longlong **)(lVar13 + 0x5b8) = plVar14;
    local_1050 = lVar18;
    plStack_1048 = plVar14;
  }
  plVar14 = plStack_1568;
  if (plStack_1568 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_1568 + 1;
    lVar18 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_1568)(plStack_1568);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1568 + 8))(plStack_1568,1);
      }
    }
  }
  plVar21 = (longlong *)*plVar21;
  if (plVar21 != (longlong *)0x0) {
    uVar15 = *(undefined8 *)(lVar13 + 0x550);
    uVar16 = (**(code **)(*plVar21 + 0x18))(plVar21,local_10a0);
    uVar15 = FUN_140693c40(uVar15);
    uVar15 = SVerticalBox::FSlot::AutoHeight(uVar15);
    uVar15 = SHorizontalBox::FSlot::Padding(uVar15,0x40400000,0);
    FUN_140692760(uVar15,uVar16);
  }
  return;
}



// FUNCTION 141935830 FUN_141935830 body=468 status=ok
// SIG undefined FUN_141935830(void)

void FUN_141935830(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x211) = *(undefined1 *)(param_2 + 0x109);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x218,param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x229) = *(undefined1 *)(param_2 + 0x121);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x230,param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined1 *)(param_1 + 0x2e4) = *(undefined1 *)(param_2 + 0x1cc);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e8,param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x2cc) = *(undefined1 *)(param_2 + 0x1e4);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2d0,param_2 + 0x1e8);
  FUN_140692440(param_1 + 0x248,param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x168);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x278,param_2 + 0x170);
  FUN_140692440(param_1 + 0x288,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x2b0) = *(undefined1 *)(param_2 + 0x1a8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2b8,param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x2f9) = *(undefined1 *)(param_2 + 0x1f8);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x300,param_2 + 0x200);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x310,param_2 + 0x210);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 800,param_2 + 0x220);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x330,param_2 + 0x230);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x340,param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  return;
}



// FUNCTION 141935a10 FUN_141935a10 body=890 status=ok
// SIG undefined FUN_141935a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141935a10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong **pplVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_158 [264];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x114);
  plVar8 = (longlong *)operator_new(0x248);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144044b58;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
  }
  plVar1 = plVar8 + 2;
  local_178 = plVar1;
  local_170 = plVar8;
  FUN_14044f790(&local_178,plVar1);
  local_1e8 = 0x238;
  SWidget::SetDebugInfo
            (plVar1,"SHorizontalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Images\\SThrobber.cpp"
             ,0x10);
  lVar9 = SCanvas::FArguments::FArguments(local_158);
  local_1d8 = *(undefined4 *)(lVar9 + 0x90);
  local_1a8 = lVar9 + 0xf8;
  local_1c0 = lVar9 + 0xe8;
  local_1b0 = *(undefined1 *)(lVar9 + 0xf1);
  local_1c8 = lVar9 + 200;
  local_1d0 = lVar9 + 0x98;
  local_1b8 = *(undefined1 *)(lVar9 + 0xf0);
  local_1e0 = lVar9 + 0x78;
  local_1e8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar1,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SHorizontalBox::Construct(plVar1,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar6 != '\0')) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  pplVar4 = (longlong **)(param_1 + 0x388);
  local_198 = plVar1;
  local_190 = plVar8;
  if (pplVar4 != &local_198) {
    *pplVar4 = plVar1;
    local_198 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x390,&local_190);
  }
  plVar1 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_190 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_158);
  plVar8 = *(longlong **)(param_1 + 0x390);
  local_188 = *pplVar4;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_180 = plVar8;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_188);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  FUN_141936150(param_1);
  return;
}



// FUNCTION 141935d90 FUN_141935d90 body=952 status=ok
// SIG undefined FUN_141935d90(void)

void FUN_141935d90(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined1 local_28 [16];
  
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = 0;
  local_98 = FUN_14193ef20;
  local_88 = 0x4193ef20;
  uStack_84 = 1;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  FUN_14068c560(local_68,param_1,&local_88);
  *(undefined8 *)(param_1 + 0x2f8) = local_78;
  *(undefined1 *)(param_1 + 0x300) = local_70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  local_58 = 0x3f800000;
  uStack_50 = 0x3f8000003f800000;
  local_48 = 0;
  local_98 = FUN_14069b950;
  uStack_90 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 1;
  FUN_14068c6c0(local_28,param_1,&local_98);
  FUN_140692440(param_1 + 0x2b8,&local_58);
  *(undefined1 *)(param_1 + 0x2e0) = local_30;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x2e8,local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  plVar2 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_38 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3b8);
  if ((longlong *)(param_2 + 0x118) != plVar2) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x118), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3c0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3c8);
  if ((longlong *)(param_2 + 0x128) != plVar2) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x128), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3d0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f0,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x158);
  plVar2 = (longlong *)(param_1 + 0x410);
  if ((longlong *)(param_2 + 0x168) != plVar2) {
    if ((*(int *)(param_2 + 0x170) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x168), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x418) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x418) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  plVar2 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = lVar4 + 0x420;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x398);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x398);
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
    *(longlong **)(param_1 + 0x398) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}



// FUNCTION 141936150 FUN_141936150 body=3359 status=ok
// SIG undefined FUN_141936150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141936150(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 auStack_748 [32];
  ulonglong local_728;
  longlong local_720;
  undefined4 local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700;
  undefined1 local_6f8;
  undefined1 local_6f0;
  longlong local_6e8;
  int local_6d8;
  longlong *local_6d0;
  longlong *plStack_6c8;
  longlong *local_6c0;
  int local_6b8;
  longlong *local_6b0;
  int local_6a8;
  longlong *local_6a0;
  int local_698;
  undefined4 local_690;
  undefined4 local_688;
  undefined1 local_684;
  undefined8 local_680;
  undefined4 local_678;
  undefined8 local_670;
  undefined1 local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined4 local_650;
  undefined4 local_64c;
  undefined1 local_648;
  undefined8 local_640;
  undefined4 local_638;
  longlong local_630;
  longlong local_628;
  undefined4 local_620;
  undefined1 local_61c;
  undefined8 local_618;
  undefined4 local_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined1 local_5f8;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined8 local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined8 local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  longlong *local_5a8;
  longlong *local_5a0;
  undefined *local_598;
  undefined1 local_590;
  undefined8 local_588;
  undefined4 local_580;
  undefined1 local_578 [8];
  longlong *local_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  longlong *local_538;
  longlong *local_530;
  longlong *local_520;
  longlong *local_518;
  undefined1 local_508 [16];
  undefined1 local_4f8 [88];
  longlong *local_4a0;
  longlong *plStack_498;
  undefined1 local_488 [272];
  longlong *local_378;
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [32];
  undefined1 local_2f0 [32];
  undefined1 local_2d0 [32];
  undefined1 local_2b0 [40];
  undefined1 local_288 [48];
  longlong *local_258;
  undefined1 local_248 [48];
  longlong *local_218;
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [280];
  undefined1 local_c0 [48];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_748;
  lVar12 = param_1 + 0x348;
  *(undefined4 *)(param_1 + 0x380) = 0;
  local_630 = param_1;
  if (*(int *)(param_1 + 900) != 0) {
    FUN_140d97d10(lVar12,0);
  }
  uVar10 = FCurveSequence::FCurveSequence(local_4f8);
  FUN_1417f8e00(param_1 + 0x2f0,uVar10);
  FUN_1417f61f0(local_4f8);
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x3a0)) {
    do {
      local_728 = local_728 & 0xffffffffffffff00;
      puVar11 = (undefined4 *)
                FCurveSequence::AddCurve(param_1 + 0x2f0,local_508,(float)iVar19 * 0.05,0x3fc00000);
      iVar4 = *(int *)(param_1 + 0x380);
      iVar16 = iVar4 + 1;
      *(int *)(param_1 + 0x380) = iVar16;
      if (*(int *)(param_1 + 900) < iVar16) {
        TArray<FCurveHandle,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(lVar12);
      }
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      lVar17 = *(longlong *)(param_1 + 0x378);
      if (*(longlong *)(param_1 + 0x378) == 0) {
        lVar17 = lVar12;
      }
      iVar19 = iVar19 + 1;
      puVar3 = (undefined4 *)(lVar17 + (longlong)iVar4 * 0x10);
      *puVar3 = *puVar11;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
    } while (iVar19 < *(int *)(param_1 + 0x3a0));
  }
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_578);
  FUN_141852100(param_1 + 0x2f0,uVar10,1,0);
  if (local_570 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_570 + 1;
    lVar12 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_570)(local_570);
      LOCK();
      piVar1 = (int *)((longlong)local_570 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_570 + 8))(local_570,1);
      }
    }
  }
  FUN_141804f10(*(undefined8 *)(param_1 + 0x388));
  local_6d8 = 0;
  if (0 < *(int *)(param_1 + 0x3a0)) {
    local_628 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      iVar19 = local_6d8;
      local_5d8 = &LAB_141941460;
      uStack_5d0 = 0;
      local_5b8 = SThrobber::GetPieceColor;
      uStack_5b0 = 0;
      local_5c8 = SThrobber::GetPieceScale;
      uStack_5c0 = 0;
      if ((*(int *)(local_628 + 0x38) < DAT_1469eb368) &&
         (_Init_thread_header(&DAT_1469eb368), DAT_1469eb368 == -1)) {
        FSlateNoResource::FSlateNoResource(&DAT_1469eb2e0,&DAT_1468b5d88);
        atexit((_func_5014 *)&LAB_143e82ec0);
        _Init_thread_footer(&DAT_1469eb368);
      }
      local_598 = &DAT_1469eb2e0;
      local_590 = 1;
      local_588 = 0;
      local_580 = 0;
      lVar12 = SImage::FArguments::FArguments(local_1d8);
      local_568 = (undefined4)local_5d8;
      uStack_564 = local_5d8._4_4_;
      uStack_560 = uStack_5d0;
      uStack_55c = uStack_5cc;
      uVar10 = FUN_1417dd6e0(&local_6c0,param_1,&local_568);
      local_670 = 0;
      local_668 = 1;
      local_660 = 0;
      local_658 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_660,uVar10);
      *(undefined8 *)(lVar12 + 0x108) = local_670;
      *(undefined1 *)(lVar12 + 0x110) = local_668;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x118,&local_660);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_660);
      if (local_6b8 == 0) {
LAB_141936455:
        if (local_6c0 != (longlong *)0x0) {
          FMemory::Free(local_6c0);
        }
      }
      else if (local_6c0 != (longlong *)0x0) {
        (**(code **)(*local_6c0 + 0x28))(local_6c0,0);
        if (local_6c0 != (longlong *)0x0) {
          local_6c0 = (longlong *)FMemory::Realloc(local_6c0,0,0);
        }
        local_6b8 = 0;
        goto LAB_141936455;
      }
      plVar13 = (longlong *)FUN_140c61c00();
      plVar18 = plVar13 + 2;
      local_538 = plVar18;
      local_530 = plVar13;
      FUN_14044f790(&local_538,plVar18);
      local_728 = 0x278;
      SWidget::SetDebugInfo
                (plVar18,"SImage",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Images\\SThrobber.cpp"
                 ,0x31);
      local_718 = *(undefined4 *)(lVar12 + 0x90);
      local_6e8 = lVar12 + 0xf8;
      local_700 = lVar12 + 0xe8;
      local_6f0 = *(undefined1 *)(lVar12 + 0xf1);
      local_708 = lVar12 + 200;
      local_710 = lVar12 + 0x98;
      local_6f8 = *(undefined1 *)(lVar12 + 0xf0);
      local_720 = lVar12 + 0x78;
      local_728 = lVar12 + 0x60;
      SWidget::SWidgetConstruct(plVar18,lVar12,lVar12 + 0x30,lVar12 + 0x40);
      plVar13[0x43] = *(longlong *)(lVar12 + 0x108);
      *(undefined1 *)(plVar13 + 0x44) = *(undefined1 *)(lVar12 + 0x110);
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar13 + 0x45,lVar12 + 0x118);
      FUN_140692440(plVar13 + 0x47,lVar12 + 0x128);
      *(undefined1 *)(plVar13 + 0x4c) = *(undefined1 *)(lVar12 + 0x150);
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar13 + 0x4d,lVar12 + 0x158);
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar13 + 0x4f,lVar12 + 0x168);
      if (((char)plVar13[5] < '\0') ||
         (cVar8 = (**(code **)(*plVar18 + 0x1e8))(plVar18), cVar8 != '\0')) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar9;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
      }
      lVar12 = FUN_141886d30(local_488);
      *(undefined **)(lVar12 + 0x188) = &DAT_1469eb2e0;
      *(undefined1 *)(lVar12 + 400) = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x198,&local_588);
      local_558 = (undefined4)local_5c8;
      uStack_554 = local_5c8._4_4_;
      uStack_550 = uStack_5c0;
      uStack_54c = uStack_5bc;
      uVar10 = FUN_14191f890(&local_6b0,param_1,&local_558,iVar19);
      local_648 = 1;
      local_640 = 0;
      local_638 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_640,uVar10);
      *(undefined4 *)(lVar12 + 0x1a8) = local_650;
      *(undefined4 *)(lVar12 + 0x1ac) = local_64c;
      *(undefined1 *)(lVar12 + 0x1b0) = local_648;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x1b8,&local_640);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_640);
      if (local_6a8 == 0) {
LAB_1419366cb:
        if (local_6b0 != (longlong *)0x0) {
          FMemory::Free(local_6b0);
        }
      }
      else if (local_6b0 != (longlong *)0x0) {
        (**(code **)(*local_6b0 + 0x28))(local_6b0,0);
        if (local_6b0 != (longlong *)0x0) {
          local_6b0 = (longlong *)FMemory::Realloc(local_6b0,0,0);
        }
        local_6a8 = 0;
        goto LAB_1419366cb;
      }
      local_548 = (undefined4)local_5b8;
      uStack_544 = local_5b8._4_4_;
      uStack_540 = uStack_5b0;
      uStack_53c = uStack_5ac;
      uVar10 = FUN_14191f730(&local_6a0,param_1,&local_548,iVar19);
      local_5f8 = 1;
      local_5f0 = 0;
      local_5e8 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_5f0,uVar10);
      *(undefined1 *)(lVar12 + 0x1f8) = local_5f8;
      *(undefined4 *)(lVar12 + 0x1e8) = local_608;
      *(undefined4 *)(lVar12 + 0x1ec) = uStack_604;
      *(undefined4 *)(lVar12 + 0x1f0) = uStack_600;
      *(undefined4 *)(lVar12 + 500) = uStack_5fc;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar12 + 0x200,&local_5f0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5f0);
      if (local_698 == 0) {
LAB_14193677d:
        if (local_6a0 != (longlong *)0x0) {
          FMemory::Free(local_6a0);
        }
      }
      else if (local_6a0 != (longlong *)0x0) {
        (**(code **)(*local_6a0 + 0x28))(local_6a0,0);
        if (local_6a0 != (longlong *)0x0) {
          local_6a0 = (longlong *)FMemory::Realloc(local_6a0,0,0);
        }
        local_698 = 0;
        goto LAB_14193677d;
      }
      *(undefined4 *)(lVar12 + 0x118) = 2;
      pplVar2 = (longlong **)(lVar12 + 0x108);
      *(undefined4 *)(lVar12 + 0x11c) = 2;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_6d0 = plVar18;
      plStack_6c8 = plVar13;
      if (&local_6d0 != pplVar2) {
        local_6d0 = *pplVar2;
        plStack_6c8 = *(longlong **)(lVar12 + 0x110);
        *pplVar2 = plVar18;
        *(longlong **)(lVar12 + 0x110) = plVar13;
        local_4a0 = plVar18;
        plStack_498 = plVar13;
      }
      plVar18 = plStack_6c8;
      if (plStack_6c8 != (longlong *)0x0) {
        LOCK();
        plVar14 = plStack_6c8 + 1;
        lVar17 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plStack_6c8)(plStack_6c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plStack_6c8 + 8))(plStack_6c8,1);
          }
        }
      }
      plVar18 = (longlong *)0x0;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar13 + 1;
        lVar17 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      plVar14 = (longlong *)operator_new(0x398);
      if (plVar14 != (longlong *)0x0) {
        *(undefined4 *)(plVar14 + 1) = 1;
        *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
        *plVar14 = (longlong)&PTR_FUN_144d61068;
        plVar18 = plVar14;
        if (plVar14 != (longlong *)0xfffffffffffffff0) {
          SBorder::SBorder();
        }
      }
      plVar14 = plVar18 + 2;
      local_520 = plVar14;
      local_518 = plVar18;
      FUN_14044f790(&local_520,plVar14);
      local_728 = 0x388;
      SWidget::SetDebugInfo
                (plVar14,"SBorder",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Images\\SThrobber.cpp"
                 ,0x2a);
      local_718 = *(undefined4 *)(lVar12 + 0x90);
      local_6e8 = lVar12 + 0xf8;
      local_700 = lVar12 + 0xe8;
      local_6f0 = *(undefined1 *)(lVar12 + 0xf1);
      local_708 = lVar12 + 200;
      local_710 = lVar12 + 0x98;
      local_6f8 = *(undefined1 *)(lVar12 + 0xf0);
      local_720 = lVar12 + 0x78;
      local_728 = lVar12 + 0x60;
      SWidget::SWidgetConstruct(plVar14,lVar12,lVar12 + 0x30,lVar12 + 0x40);
      FUN_141971ea0(plVar14,lVar12);
      if (((char)plVar18[5] < '\0') ||
         (cVar8 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar8 != '\0')) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) | bVar9;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      lVar12 = *(longlong *)(param_1 + 0x388);
      local_5a8 = plVar14;
      local_5a0 = plVar18;
      puVar15 = (undefined8 *)operator_new(0x88);
      if (puVar15 == (undefined8 *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        FUN_1417f13c0(puVar15);
        *puVar15 = &PTR__scalar_deleting_destructor__144042bf8;
      }
      if (*(char *)(lVar12 + 0x228) == '\0') {
        lVar17 = *(longlong *)(lVar12 + 0x210);
        if ((lVar17 != 0) && (puVar15[1] != lVar17)) {
          puVar15[1] = lVar17;
          FUN_141802340(puVar15);
        }
        iVar19 = *(int *)(lVar12 + 0x220);
        *(int *)(lVar12 + 0x220) = iVar19 + 1;
        if (*(int *)(lVar12 + 0x224) < iVar19 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar12 + 0x218,iVar19);
        }
        *(undefined8 **)(*(longlong *)(lVar12 + 0x218) + (longlong)iVar19 * 8) = puVar15;
        param_1 = local_630;
      }
      FUN_1418475e0(lVar12,1);
      local_620 = 0;
      local_618 = 0;
      local_610 = 0;
      local_690 = 0;
      local_688 = 0;
      local_680 = 0;
      local_678 = 0;
      local_61c = 1;
      local_684 = 1;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_680,&local_618);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_618);
      *(undefined4 *)(puVar15 + 5) = local_690;
      *(undefined1 *)((longlong)puVar15 + 0x34) = local_684;
      *(undefined4 *)(puVar15 + 6) = local_688;
      TBaseDelegate<FSlateBrush_const_*>::operator=(puVar15 + 7,&local_680);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_680);
      FUN_140801a00(puVar15,&local_5a8);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar18 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
        LOCK();
        plVar14 = plVar18 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
        LOCK();
        plVar14 = plVar18 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1f0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_208);
      plVar18 = local_218;
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_218 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_248);
      plVar18 = local_258;
      if (local_258 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_258 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_258)(local_258);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_288);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2b0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2d0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2f0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_310);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_320);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_330);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_340);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_350);
      plVar18 = local_378;
      if (local_378 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_378 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_378)(local_378);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      FUN_140456c70(local_488);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar13 + 1;
        lVar12 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
        LOCK();
        plVar18 = plVar13 + 1;
        lVar12 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_70);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
      plVar18 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_90 + 1;
        lVar12 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c0);
      FUN_140456c70(local_1d8);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_588);
      local_6d8 = local_6d8 + 1;
    } while (local_6d8 < *(int *)(param_1 + 0x3a0));
  }
  return;
}



// FUNCTION 141936e70 FUN_141936e70 body=210 status=ok
// SIG undefined FUN_141936e70(void)

void FUN_141936e70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  uVar8 = FCurveSequence::FCurveSequence(local_68);
  FUN_1417f8e00(param_1 + 0x208,uVar8);
  FUN_1417f61f0(local_68);
  fVar10 = *(float *)(param_1 + 0x27c);
  if (fVar10 <= 1e-08) {
    fVar10 = 1e-08;
  }
  puVar9 = (undefined4 *)FCurveSequence::AddCurve(param_1 + 0x208,local_78,0,fVar10,0);
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *(undefined4 *)(param_1 + 0x260) = *puVar9;
  *(undefined4 *)(param_1 + 0x264) = uVar4;
  *(undefined4 *)(param_1 + 0x268) = uVar5;
  *(undefined4 *)(param_1 + 0x26c) = uVar6;
  uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_88);
  FUN_141852100(param_1 + 0x208,uVar8,1,0);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 141936f50 FUN_141936f50 body=2246 status=ok
// SIG undefined FUN_141936f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141936f50(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong *param_5,ulonglong *param_6,longlong *param_7)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *puVar20;
  uint uVar21;
  undefined2 *puVar22;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  int *local_210;
  int local_208;
  int local_204;
  longlong *local_200;
  wchar_t *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  ulonglong *local_1e8;
  longlong *local_1e0;
  undefined8 *local_1d8;
  wchar_t *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  uint uStack_1bc;
  uint *puStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  longlong *local_1a0;
  longlong *local_198;
  undefined2 *local_190;
  undefined8 local_188;
  int local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  uint uStack_168;
  uint uStack_164;
  undefined8 uStack_160;
  ulonglong local_158;
  longlong *local_150;
  int local_148;
  int local_144;
  undefined1 local_140 [8];
  longlong *local_138;
  int iStack_130;
  uint uStack_12c;
  uint *local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  longlong local_110;
  wchar_t **local_108;
  ulonglong local_100;
  longlong *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1e8 = param_6;
  local_198 = param_7;
  local_200 = param_5;
  local_190 = (undefined2 *)0x0;
  local_188 = 4;
  local_1d8 = param_2;
  local_1a0 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
  puVar22 = local_190;
  FGenericPlatformString::Memcpy(local_190,&DAT_144d6cd28);
  plVar19 = (longlong *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x28) != *(int *)(param_4 + 0x54)) {
    iVar7 = (int)local_188;
    puVar12 = &DAT_143f3eda8;
    if ((int)local_188 != 0) {
      puVar12 = puVar22;
    }
    iVar5 = FUN_140438070(puVar12);
    lVar14 = *(longlong *)(param_4 + 0x60);
    if (*(longlong *)(param_4 + 0x60) == 0) {
      lVar14 = param_4 + 0x58;
    }
    iVar5 = *(int *)(lVar14 + ((longlong)*(int *)(param_4 + 0x68) - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar14 = *plVar19;
      do {
        lVar18 = (longlong)iVar5 * 0x20;
        puVar12 = &DAT_143f3eda8;
        if (iVar7 != 0) {
          puVar12 = puVar22;
        }
        if (*(int *)(lVar14 + 8 + lVar18) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *(undefined2 **)(lVar14 + lVar18);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar12);
        if (iVar6 == 0) {
          if (iVar5 != -1) {
            lVar18 = *plVar19 + lVar18;
            goto LAB_14193707d;
          }
          break;
        }
        lVar14 = *plVar19;
        iVar5 = *(int *)(lVar14 + 0x18 + lVar18);
      } while (iVar5 != -1);
    }
  }
  lVar18 = 0;
LAB_14193707d:
  local_1f8 = (wchar_t *)(lVar18 + 0x10);
  if (lVar18 == 0) {
    local_1f8 = (wchar_t *)0x0;
  }
  if (puVar22 != (undefined2 *)0x0) {
    FMemory::Free(puVar22);
  }
  puVar4 = local_1e8;
  plVar8 = (longlong *)*local_1e8;
  iVar7 = (int)plVar8[1];
  if (iVar7 == 0) {
    local_208 = 0;
  }
  else {
    local_208 = iVar7 + -1;
  }
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = -1;
  }
  if (iVar7 < 1) {
    iVar5 = 0;
  }
  iVar7 = (iVar7 < 1) + 1 + iVar7;
  *(int *)(plVar8 + 1) = iVar7;
  if (*(int *)((longlong)plVar8 + 0xc) < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
  }
  *(undefined2 *)(*plVar8 + (longlong)iVar5 * 2) = 0x200b;
  *(undefined2 *)(*plVar8 + 2 + (longlong)iVar5 * 2) = 0;
  if (*(int *)(*puVar4 + 8) == 0) {
    local_204 = 0;
  }
  else {
    local_204 = *(int *)(*puVar4 + 8) + -1;
  }
  plVar8 = (longlong *)FString::FString(local_c0);
  local_a8 = *plVar8;
  *plVar8 = 0;
  local_a0 = (undefined4)plVar8[1];
  local_9c = *(undefined4 *)((longlong)plVar8 + 0xc);
  plVar8[1] = 0;
  _guard_xfg_dispatch_icall_nop(&local_98,0,0x50);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (*plVar8 != 0) {
    FMemory::Free();
  }
  uVar21 = *(uint *)(param_4 + 0x48);
  puStack_1b8 = (uint *)(param_4 + 0x30);
  uStack_1bc = 1;
  local_1c0 = 0;
  uStack_1ac = 0;
  iStack_1a8 = 0;
  if (uVar21 != 0) {
    puVar20 = *(uint **)(param_4 + 0x40);
    if (*(uint **)(param_4 + 0x40) == (uint *)0x0) {
      puVar20 = puStack_1b8;
    }
    uVar2 = *puVar20;
    iStack_1a8 = 0;
    local_1c0 = 0;
    while (uVar2 == 0) {
      lVar14 = (longlong)local_1c0;
      iStack_1a8 = iStack_1a8 + 0x20;
      iVar7 = local_1c0 + 1;
      bVar3 = (int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1c0;
      local_1c0 = iVar7;
      if (bVar3) goto LAB_141937261;
      uVar2 = puVar20[lVar14 + 1];
    }
    uStack_1bc = -uVar2 & uVar2;
    local_148 = 0x1f;
    if (uStack_1bc != 0) {
      for (; uStack_1bc >> local_148 == 0; local_148 = local_148 + -1) {
      }
    }
    if (uStack_1bc == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_148;
    }
    uStack_1ac = (iStack_1a8 - iVar7) + 0x1f;
    if ((int)uVar21 < (int)uStack_1ac) {
LAB_141937261:
      uStack_1ac = uVar21;
    }
  }
  local_1b0 = 0xffffffff;
  uVar2 = *(uint *)(param_4 + 0x48);
  uStack_178 = CONCAT44(uStack_1bc,local_1c0);
  uStack_120 = 0xffffffff;
  uStack_11c = uStack_1ac;
  uStack_160 = CONCAT44(uStack_1a4,iStack_1a8);
  uVar17 = -1 << ((byte)uVar2 & 0x1f);
  uStack_168 = uVar2 & 0xffffffe0;
  local_180 = (int)uVar2 >> 5;
  uStack_17c = (undefined4)((ulonglong)plVar19 >> 0x20);
  uStack_170 = CONCAT44(uVar2,uVar17);
  uStack_164 = uStack_1ac;
  iStack_130 = local_1c0;
  uStack_12c = uStack_1bc;
  if (uVar2 != uVar21) {
    puVar20 = *(uint **)(param_4 + 0x40);
    if (*(uint **)(param_4 + 0x40) == (uint *)0x0) {
      puVar20 = puStack_1b8;
    }
    uVar17 = puVar20[local_180] & uVar17;
    while (uVar17 == 0) {
      lVar14 = (longlong)local_180;
      uStack_168 = uStack_168 + 0x20;
      iVar7 = local_180 + 1;
      bVar3 = (int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 <= local_180;
      local_180 = iVar7;
      if (bVar3) goto LAB_141937339;
      uVar17 = puVar20[lVar14 + 1];
      uStack_170 = 0xffffffff;
    }
    uVar17 = -uVar17 & uVar17;
    local_144 = 0x1f;
    if (uVar17 != 0) {
      for (; uVar17 >> local_144 == 0; local_144 = local_144 + -1) {
      }
    }
    if (uVar17 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_144;
    }
    iVar7 = (uStack_168 - iVar7) + 0x1f;
    uStack_170 = CONCAT44(iVar7,(undefined4)uStack_170);
    if ((int)uVar21 < iVar7) {
LAB_141937339:
      uStack_170 = CONCAT44(uVar21,(undefined4)uStack_170);
    }
  }
  local_158 = uStack_170 >> 0x20;
  local_128 = puStack_1b8;
  local_118 = uStack_160;
  local_138 = plVar19;
  while( true ) {
    puVar22 = &DAT_143f3eda8;
    if (((uStack_11c == (uint)local_158) && (local_128 == (uint *)(param_4 + 0x30))) &&
       (local_138 == plVar19)) break;
    lVar14 = (longlong)(int)uStack_11c * 0x20 + *local_138;
    iVar7 = (int)local_200[1];
    uVar2 = *(uint *)(lVar14 + 0x14);
    uVar21 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar21 = 0;
    }
    uVar17 = iVar7 - 1;
    if (*(uint *)(lVar14 + 0x10) < uVar21) {
      uVar21 = *(uint *)(lVar14 + 0x10);
    }
    if (iVar7 == 0) {
      uVar17 = 0;
    }
    uVar16 = uVar21;
    if ((uVar21 <= uVar2) && (uVar16 = uVar17, uVar2 < uVar17)) {
      uVar16 = uVar2;
    }
    if (iVar7 != 0) {
      puVar22 = (undefined2 *)*local_200;
    }
    iVar7 = uVar16 - uVar21;
    local_1d0 = (wchar_t *)0x0;
    local_1c4 = 0;
    local_1c8 = iVar7 + 1;
    if (iVar7 == 0) {
      local_1c8 = 0;
    }
    if (0 < local_1c8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
      pwVar15 = local_1d0;
      if (0 < local_1c8) {
        wcsncpy(local_1d0,puVar22 + (int)uVar21,(longlong)iVar7);
        pwVar15[iVar7] = L'\0';
      }
    }
    local_108 = &local_1d0;
    local_110 = lVar14;
    TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
              (&local_98,local_140,&local_110,0);
    if (local_1d0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uStack_120 = uStack_120 & ~uStack_12c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_130);
  }
  if (local_1f8 == (wchar_t *)0x0) {
    lVar14 = FUN_141834e90();
    plVar19 = (longlong *)local_1e8[1];
    local_100 = *local_1e8;
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
    }
    local_210 = &local_208;
    local_218 = *(undefined2 *)(lVar14 + 0x90);
    local_f8 = plVar19;
    puVar11 = (undefined8 *)FUN_141937820(local_d0,&local_a8,&local_100,lVar14 + 8);
    puVar9 = local_1d8;
    *local_1d8 = *puVar11;
    lVar14 = puVar11[1];
    local_1d8[1] = lVar14;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_c8 + 1;
      lVar14 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar19 + 1;
      lVar14 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
        }
      }
    }
  }
  else {
    uVar2 = *(uint *)(local_1f8 + 2);
    iVar7 = (int)local_200[1];
    uVar21 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar21 = 0;
    }
    uVar17 = iVar7 - 1;
    if (*(uint *)local_1f8 < uVar21) {
      uVar21 = *(uint *)local_1f8;
    }
    if (iVar7 == 0) {
      uVar17 = 0;
    }
    uVar16 = uVar21;
    if ((uVar21 <= uVar2) && (uVar16 = uVar17, uVar2 < uVar17)) {
      uVar16 = uVar2;
    }
    if (iVar7 != 0) {
      puVar22 = (undefined2 *)*local_200;
    }
    iVar5 = uVar16 - uVar21;
    local_1f8 = (wchar_t *)0x0;
    local_1ec = 0;
    iVar7 = iVar5 + 1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    local_1f0 = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
      iVar7 = local_1f0;
      pwVar15 = local_1f8;
      if (0 < local_1f0) {
        wcsncpy(local_1f8,puVar22 + (int)uVar21,(longlong)iVar5);
        pwVar15[iVar5] = L'\0';
      }
    }
    plVar19 = local_198;
    if ((longlong *)local_1a0[3] != (longlong *)0x0) {
      plVar19 = (longlong *)local_1a0[3];
    }
    pwVar15 = L"";
    if (iVar7 != 0) {
      pwVar15 = local_1f8;
    }
    FName::FName(&local_200,pwVar15,1);
    local_198 = local_200;
    lVar14 = (**(code **)(*plVar19 + 0x80))(plVar19,DAT_1469eb1c8);
    if (lVar14 == 0) {
      plVar8 = (longlong *)local_1e8[1];
      local_1e8 = (ulonglong *)*local_1e8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_1e0 = plVar8;
      uVar10 = (**(code **)(*plVar19 + 0x40))(plVar19,local_200,0);
      local_210 = &local_208;
      local_218 = 0;
      puVar9 = (undefined8 *)FUN_141937820(local_e0,&local_a8,&local_1e8,uVar10);
      *local_1d8 = *puVar9;
      lVar14 = puVar9[1];
      local_1d8[1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      local_1a0 = local_200;
      lVar14 = (**(code **)(*plVar19 + 0x80))(plVar19,DAT_1469eb1c8);
      if (lVar14 == 0) {
        lVar14 = FUN_141834e90();
      }
      plVar8 = (longlong *)local_1e8[1];
      local_158 = *local_1e8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_210 = &local_208;
      local_218 = *(undefined2 *)(lVar14 + 0x90);
      local_150 = plVar8;
      puVar9 = (undefined8 *)FUN_141937820(local_f0,&local_a8,&local_158,lVar14 + 8);
      *local_1d8 = *puVar9;
      lVar14 = puVar9[1];
      local_1d8[1] = lVar14;
      local_d8 = local_e8;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
    }
    puVar9 = local_1d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_d8 + 1;
      lVar14 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar8 + 1;
      lVar14 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    if (local_1f8 != (wchar_t *)0x0) {
      FMemory::Free(local_1f8);
    }
  }
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  ~TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            (&local_98);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return puVar9;
}



// FUNCTION 141937820 FUN_141937820 body=494 status=ok
// SIG undefined FUN_141937820(void)

undefined8 *
FUN_141937820(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined2 param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_4 == 0) {
    param_4 = FUN_14183ac90();
  }
  plVar4 = (longlong *)operator_new(0xb0);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (longlong)&PTR_FUN_144d6d240;
    FString::FString(plVar4 + 3,param_2);
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x5c) = 0;
    plVar4[0xd] = 0;
    *(undefined4 *)(plVar4 + 0xe) = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=(plVar4 + 5,param_2 + 0x10);
    plVar4[0xf] = *param_3;
    lVar2 = param_3[1];
    plVar4[0x10] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    lVar2 = *param_6;
    *(undefined2 *)(plVar4 + 0x13) = param_5;
    plVar4[0x11] = lVar2;
    plVar4[0x12] = param_4;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
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
  plVar5 = plVar6 + 1;
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



// FUNCTION 141937a10 FUN_141937a10 body=342 status=ok
// SIG undefined FUN_141937a10(void)

undefined8 *
FUN_141937a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x270);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_141922cb0(plVar4,param_2,param_3,param_4);
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144d6d3d0;
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
  plVar5 = plVar6 + 1;
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



// FUNCTION 141937b70 FUN_141937b70 body=352 status=ok
// SIG undefined FUN_141937b70(void)

undefined8 *
FUN_141937b70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)operator_new(0x270);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    FUN_141922d90(plVar4,param_2,param_3,param_4,param_5);
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144d6d3d0;
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
  plVar5 = plVar6 + 1;
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



// FUNCTION 141937cd0 FUN_141937cd0 body=123 status=ok
// SIG undefined FUN_141937cd0(void)

undefined8 * FUN_141937cd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_144d6d478;
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



// FUNCTION 141937d50 FUN_141937d50 body=366 status=ok
// SIG undefined FUN_141937d50(void)

undefined8 * FUN_141937d50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_1f8 [480];
  
  lVar3 = operator_new(0x358);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar3 != 0) {
    uVar4 = FTextBlockStyle::FTextBlockStyle(local_1f8,param_3);
    plVar5 = (longlong *)FUN_141922b00(lVar3,param_2,uVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar7 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  *param_1 = plVar5;
  param_1[1] = plVar7;
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (plVar6 != (longlong *)0x0) {
    if (*plVar6 != 0) {
      if (plVar6[1] != 0) {
        piVar1 = (int *)(plVar6[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) goto LAB_141937e8d;
      }
      plVar7 = (longlong *)param_1[1];
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar5 = (longlong *)plVar6[1];
    if (plVar7 != plVar5) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
LAB_141937e8d:
  (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_140691580(param_3);
  return param_1;
}



// FUNCTION 141937ec0 FUN_141937ec0 body=332 status=ok
// SIG undefined FUN_141937ec0(void)

undefined8 *
FUN_141937ec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x270);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_141922cb0(lVar3,param_2,param_3,param_4);
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
  plVar5 = plVar4 + 1;
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



// FUNCTION 141938010 FUN_141938010 body=342 status=ok
// SIG undefined FUN_141938010(void)

undefined8 *
FUN_141938010(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0x270);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_141922d90(lVar3,param_2,param_3,param_4,param_5);
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
  plVar5 = plVar4 + 1;
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



// FUNCTION 141938170 FUN_141938170 body=535 status=ok
// SIG undefined FUN_141938170(void)

undefined8 *
FUN_141938170(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar14 = (undefined8 *)operator_new(0x120);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uVar12 = *param_4;
    uVar13 = param_4[1];
    plVar5 = (longlong *)param_4[4];
    uVar4 = *(undefined1 *)(param_4 + 2);
    uVar6 = param_4[3];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *puVar14 = &PTR_FUN_144d6d508;
    FUN_14080bc50(puVar14 + 1,param_2);
    puVar14[0x12] = *param_3;
    puVar14[0x13] = param_3[1];
    uVar11 = param_3[3];
    puVar14[0x14] = param_3[2];
    puVar14[0x15] = uVar11;
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar9 = *(undefined4 *)(param_3 + 5);
    uVar10 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)(puVar14 + 0x16) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)((longlong)puVar14 + 0xb4) = uVar8;
    *(undefined4 *)(puVar14 + 0x17) = uVar9;
    *(undefined4 *)((longlong)puVar14 + 0xbc) = uVar10;
    puVar14[0x18] = param_3[6];
    lVar7 = param_3[7];
    puVar14[0x19] = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    puVar14[0x1a] = param_3[8];
    *(undefined4 *)(puVar14 + 0x1b) = *(undefined4 *)(param_3 + 9);
    *(undefined1 *)((longlong)puVar14 + 0xdc) = *(undefined1 *)((longlong)param_3 + 0x4c);
    puVar14[0x1c] = uVar12;
    puVar14[0x1d] = uVar13;
    *(undefined1 *)(puVar14 + 0x1e) = uVar4;
    puVar14[0x1f] = uVar6;
    puVar14[0x20] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    puVar14[0x21] = param_5;
    uVar8 = param_6[1];
    uVar9 = param_6[2];
    uVar10 = param_6[3];
    *(undefined4 *)(puVar14 + 0x22) = *param_6;
    *(undefined4 *)((longlong)puVar14 + 0x114) = uVar8;
    *(undefined4 *)(puVar14 + 0x23) = uVar9;
    *(undefined4 *)((longlong)puVar14 + 0x11c) = uVar10;
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  puVar15 = (undefined8 *)operator_new(0x18);
  if (puVar15 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar15 + 1) = 1;
    *puVar15 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar15 + 0xc) = 1;
    puVar15[2] = puVar14;
  }
  *param_1 = puVar14;
  param_1[1] = puVar15;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar14,puVar14);
  plVar5 = (longlong *)param_4[4];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 141938390 Create body=356 status=ok
// SIG undefined Create(void)

undefined8 *
FSlateWidgetRun::Create
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = operator_new(0xd8);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_141922e60(lVar3,param_2,param_3,param_4,param_5,param_6);
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
  plVar5 = plVar4 + 1;
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



// FUNCTION 141938500 CreateBlock body=1062 status=ok
// SIG undefined CreateBlock(void)

undefined8
FTextLayout::FRunModel::CreateBlock
          (undefined8 *param_1,undefined8 param_2,int *param_3,undefined4 param_4,undefined8 param_5
          )

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  float *pfVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  float fVar20;
  float local_res8;
  float fStackX_c;
  float local_res18;
  float local_res1c;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar21;
  ulonglong uVar14;
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  iVar16 = *(int *)(param_1 + 3);
  if (iVar16 == 0) {
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_res8);
    plVar9 = (longlong *)*param_1;
    puVar5 = (undefined8 *)
             (**(code **)(*plVar9 + 0x28))
                       (plVar9,&local_res18,*param_3,param_3[1],CONCAT44(uVar21,param_4),param_5);
    lVar11 = *plVar9;
    uVar19 = *puVar5;
  }
  else {
    iVar2 = *param_3;
    uVar17 = 0;
    if (iVar16 < 0x11) {
      uVar12 = iVar16 - 1;
      uVar14 = uVar17;
      if ((iVar2 != 0) && (uVar14 = 0, 0 < (int)uVar12)) {
        piVar6 = (int *)param_1[2];
        uVar14 = uVar17;
        do {
          if (iVar2 <= *piVar6) break;
          uVar14 = (ulonglong)((int)uVar14 + 1);
          uVar17 = uVar17 + 1;
          piVar6 = piVar6 + 2;
        } while ((longlong)uVar17 < (longlong)(int)uVar12);
      }
      uVar13 = (uint)uVar14;
      uVar15 = uVar13;
      if ((uVar13 != uVar12) && ((int)uVar13 < iVar16)) {
        lVar11 = (longlong)(int)uVar13;
        piVar6 = (int *)(param_1[2] + 4 + lVar11 * 8);
        do {
          uVar15 = (uint)uVar14;
          if (param_3[1] <= *piVar6) break;
          uVar15 = uVar15 + 1;
          uVar14 = (ulonglong)uVar15;
          lVar11 = lVar11 + 1;
          piVar6 = piVar6 + 2;
        } while (lVar11 < iVar16);
      }
    }
    else {
      uVar14 = uVar17;
      if ((iVar2 != 0) && (iVar18 = *(int *)(param_1 + 3) + -1, uVar14 = 0, -1 < iVar18)) {
        do {
          uVar15 = (uint)uVar17;
          uVar12 = uVar15 + (int)(iVar18 - uVar15) / 2;
          uVar14 = (ulonglong)uVar12;
          iVar3 = *(int *)(param_1[2] + (longlong)(int)uVar12 * 8);
          if (iVar3 == iVar2) break;
          uVar13 = uVar12 + 1;
          if (iVar2 <= iVar3) {
            uVar13 = uVar15;
            iVar18 = uVar12 - 1;
          }
          uVar17 = (ulonglong)uVar13;
        } while ((int)uVar13 <= iVar18);
      }
      uVar13 = (uint)uVar14;
      uVar15 = uVar13;
      if (uVar13 != iVar16 - 1U) {
        iVar16 = *(int *)(param_1 + 3) + -1;
        uVar15 = 0;
        if ((int)uVar13 <= iVar16) {
          do {
            uVar12 = (uint)uVar14;
            uVar15 = uVar12 + (int)(iVar16 - uVar12) / 2;
            iVar18 = *(int *)(param_1[2] + 4 + (longlong)(int)uVar15 * 8);
            if (iVar18 == param_3[1]) break;
            uVar4 = uVar15 + 1;
            if (param_3[1] <= iVar18) {
              uVar4 = uVar12;
              iVar16 = uVar15 - 1;
            }
            uVar14 = (ulonglong)uVar4;
          } while ((int)uVar4 <= iVar16);
        }
      }
    }
    lVar11 = param_1[2];
    lVar10 = (longlong)(int)uVar13;
    iVar16 = *(int *)(lVar11 + lVar10 * 8);
    if (uVar13 == uVar15) {
      if ((iVar16 == iVar2) && (*(int *)(lVar11 + 4 + lVar10 * 8) == param_3[1])) {
        local_res8 = *(float *)(param_1[4] + lVar10 * 8);
        fStackX_c = *(float *)(param_1[4] + 4 + lVar10 * 8);
      }
      else {
        pfVar7 = (float *)(**(code **)(*(longlong *)*param_1 + 0x28))
                                    ((longlong *)*param_1,&local_res18,iVar2,param_3[1],
                                     CONCAT44(uVar21,param_4),param_5);
        local_res8 = *pfVar7;
        fStackX_c = pfVar7[1];
      }
    }
    else {
      if (iVar16 == iVar2) {
        local_res8 = *(float *)(param_1[4] + lVar10 * 8);
        fVar20 = *(float *)(param_1[4] + 4 + lVar10 * 8);
      }
      else {
        pfVar7 = (float *)(**(code **)(*(longlong *)*param_1 + 0x28))
                                    ((longlong *)*param_1,&local_res8,iVar2,
                                     *(undefined4 *)(lVar11 + 4 + lVar10 * 8),
                                     CONCAT44(uVar21,param_4),param_5);
        local_res8 = *pfVar7;
        fVar20 = pfVar7[1];
      }
      lVar10 = (longlong)(int)uVar15;
      lVar11 = (longlong)(int)(uVar13 + 1);
      fStackX_c = fVar20;
      if (lVar11 < lVar10) {
        if (3 < lVar10 - lVar11) {
          lVar8 = ((lVar10 - lVar11) - 4U >> 2) + 1;
          pfVar7 = (float *)(param_1[4] + 8 + lVar11 * 8);
          lVar11 = lVar11 + lVar8 * 4;
          do {
            fVar1 = pfVar7[-1];
            if (fVar20 <= fVar1) {
              fVar20 = fVar1;
              fStackX_c = fVar1;
            }
            fVar1 = pfVar7[1];
            if (fVar20 <= fVar1) {
              fVar20 = fVar1;
              fStackX_c = fVar1;
            }
            fVar1 = pfVar7[3];
            if (fVar20 <= fVar1) {
              fVar20 = fVar1;
              fStackX_c = fVar1;
            }
            fVar1 = pfVar7[5];
            local_res8 = local_res8 + pfVar7[-2] + *pfVar7 + pfVar7[2] + pfVar7[4];
            if (fVar20 <= fVar1) {
              fVar20 = fVar1;
              fStackX_c = fVar1;
            }
            pfVar7 = pfVar7 + 8;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lVar11 < lVar10) {
          do {
            fVar1 = *(float *)(param_1[4] + 4 + lVar11 * 8);
            local_res8 = local_res8 + *(float *)(param_1[4] + lVar11 * 8);
            if (fVar20 <= fVar1) {
              fVar20 = fVar1;
            }
            lVar11 = lVar11 + 1;
            fStackX_c = fVar20;
          } while (lVar11 < lVar10);
        }
      }
      if (*(int *)(param_1[2] + 4 + lVar10 * 8) == param_3[1]) {
        local_res18 = *(float *)(param_1[4] + lVar10 * 8);
        local_res1c = *(float *)(param_1[4] + 4 + lVar10 * 8);
      }
      else {
        (**(code **)(*(longlong *)*param_1 + 0x28))
                  ((longlong *)*param_1,&local_res18,*(undefined4 *)(param_1[2] + lVar10 * 8),
                   param_3[1],param_4,param_5);
      }
      local_res8 = local_res8 + local_res18;
      if (fVar20 <= local_res1c) {
        fStackX_c = local_res1c;
      }
    }
    plVar9 = (longlong *)*param_1;
    uVar19 = CONCAT44(fStackX_c,local_res8);
    lVar11 = *plVar9;
  }
  (**(code **)(lVar11 + 0x38))(plVar9,param_2,*param_3,param_3[1],uVar19,param_5,param_3 + 2);
  return param_2;
}



// FUNCTION 141938930 FUN_141938930 body=610 status=ok
// SIG undefined FUN_141938930(void)

longlong *
FUN_141938930(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined2 *param_6,undefined8 *param_7)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  puVar8 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_48);
  plVar4 = (longlong *)puVar8[1];
  uVar5 = *puVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar9 = plVar4 + 1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar9 = (int)*plVar9 + 1;
    UNLOCK();
  }
  local_58 = (undefined8 *)operator_new(0x60);
  if (local_58 == (undefined8 *)0x0) {
    local_58 = (undefined8 *)0x0;
  }
  else {
    *local_58 = &PTR__scalar_deleting_destructor__144d6d2e8;
    local_58[1] = uVar5;
    local_58[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar9 = (int)*plVar9 + 1;
      UNLOCK();
    }
    local_58[3] = CONCAT44(param_4,param_3);
    local_58[4] = param_5;
    local_58[5] = 0;
    *(undefined2 *)(local_58 + 6) = *param_6;
    local_58[7] = *(undefined8 *)(param_6 + 4);
    lVar6 = *(longlong *)(param_6 + 8);
    local_58[8] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(local_58 + 9) = *(undefined1 *)(param_6 + 0xc);
    local_58[10] = *param_7;
    lVar6 = param_7[1];
    local_58[0xb] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  local_50 = (longlong *)operator_new(0x18);
  if (local_50 != (longlong *)0x0) {
    *(undefined4 *)(local_50 + 1) = 1;
    *local_50 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_50 + 0xc) = 1;
    local_50[2] = (longlong)local_58;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  plVar7 = local_50;
  *param_2 = (longlong)local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
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
  }
  return param_2;
}



// FUNCTION 141938ba0 FUN_141938ba0 body=1642 status=ok
// SIG undefined FUN_141938ba0(void)

undefined8 *
FUN_141938ba0(longlong param_1,undefined8 *param_2,int *param_3,undefined8 *param_4,int param_5,
             int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong *plVar6;
  int iVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  float *pfVar12;
  int iVar13;
  short sVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_res8;
  undefined1 local_res20;
  short local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_108;
  longlong *local_100;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  int local_e0;
  int iStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  int local_d0;
  int iStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  int local_c0;
  int iStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  int local_b0 [2];
  undefined1 local_a8 [4];
  int local_a4;
  undefined1 local_a0 [96];
  
  local_108 = param_4[2];
  plVar4 = (longlong *)param_4[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_110 = *(undefined1 *)(param_1 + 0x89);
  local_10f = *(undefined1 *)(param_4 + 4);
  local_100 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    lVar17 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  fVar21 = 0.0;
  local_118 = 0;
  fVar22 = 0.0;
  local_res20 = 0;
  fVar20 = 0.0;
  iVar13 = *param_3;
  if ((-1 < iVar13) && (iVar13 < *(int *)(param_4 + 6))) {
    puVar15 = (undefined8 *)((longlong)iVar13 * 0x30 + param_4[5]);
    plVar4 = (longlong *)*puVar15;
    (**(code **)(*plVar4 + 8))(plVar4,local_b0);
    if (local_b0[0] <= param_5) {
      local_b0[0] = param_5;
    }
    if (0 < local_b0[0]) {
      plVar4 = (longlong *)*puVar15;
      local_res20 = (**(code **)(*plVar4 + 0x30))
                              (plVar4,local_b0[0],*(undefined4 *)(param_1 + 0x8c),&local_110);
    }
  }
  iVar13 = *param_3;
  sVar14 = 0;
  if (iVar13 < *(int *)(param_4 + 6)) {
    do {
      puVar15 = (undefined8 *)((longlong)iVar13 * 0x30 + param_4[5]);
      (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,&local_f8);
      iVar7 = param_6;
      if (iStack_f4 <= param_6) {
        iVar7 = iStack_f4;
      }
      lVar17 = (longlong)iVar7;
      iVar13 = local_f8;
      if (local_f8 <= param_5) {
        iVar13 = param_5;
      }
      iVar16 = iVar7;
      while ((iVar13 < lVar17 &&
             (cVar8 = FText::IsWhitespace(*(undefined2 *)(*(longlong *)*param_4 + -2 + lVar17 * 2)),
             cVar8 != '\0'))) {
        iVar16 = iVar16 + -1;
        lVar17 = lVar17 + -1;
      }
      fVar18 = (float)DAT_1468b5d88;
      fVar19 = (float)DAT_1468b5d88;
      if (iVar13 != iVar7) {
        plVar4 = (longlong *)*puVar15;
        uVar2 = *(undefined4 *)(param_1 + 0x8c);
        if (iVar13 == iVar16) {
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_e8,iVar13,iVar7,uVar2,&local_110);
          iVar3 = *(int *)(puVar15 + 3);
          *(int *)(puVar15 + 3) = iVar3 + 1;
          local_f0 = iVar13;
          iStack_ec = iVar7;
          if (*(int *)((longlong)puVar15 + 0x1c) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 2,iVar3);
          }
          *(ulonglong *)(puVar15[2] + (longlong)iVar3 * 8) = CONCAT44(iStack_ec,local_f0);
          iVar13 = *(int *)(puVar15 + 5);
          *(int *)(puVar15 + 5) = iVar13 + 1;
          if (*(int *)((longlong)puVar15 + 0x2c) < iVar13 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 4,iVar13);
          }
          *(ulonglong *)(puVar15[4] + (longlong)iVar13 * 8) = CONCAT44(uStack_e4,local_e8);
          fVar18 = (float)DAT_1468b5d88;
          fVar19 = local_e8;
        }
        else {
          pcVar5 = *(code **)(*plVar4 + 0x28);
          if (iVar16 == iVar7) {
            (*pcVar5)(plVar4,&local_b8,iVar13,iVar7,uVar2,&local_110);
            iVar3 = *(int *)(puVar15 + 3);
            *(int *)(puVar15 + 3) = iVar3 + 1;
            local_c0 = iVar13;
            iStack_bc = iVar7;
            if (*(int *)((longlong)puVar15 + 0x1c) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 2,iVar3);
            }
            *(ulonglong *)(puVar15[2] + (longlong)iVar3 * 8) = CONCAT44(iStack_bc,local_c0);
            iVar13 = *(int *)(puVar15 + 5);
            *(int *)(puVar15 + 5) = iVar13 + 1;
            if (*(int *)((longlong)puVar15 + 0x2c) < iVar13 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 4,iVar13);
            }
            *(ulonglong *)(puVar15[4] + (longlong)iVar13 * 8) = CONCAT44(uStack_b4,local_b8);
            fVar18 = local_b8;
            fVar19 = local_b8;
          }
          else {
            (*pcVar5)(plVar4,&local_d8,iVar13,iVar16,uVar2,&local_110);
            iVar3 = *(int *)(puVar15 + 3);
            *(int *)(puVar15 + 3) = iVar3 + 1;
            local_e0 = iVar13;
            iStack_dc = iVar16;
            if (*(int *)((longlong)puVar15 + 0x1c) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 2,iVar3);
            }
            *(ulonglong *)(puVar15[2] + (longlong)iVar3 * 8) = CONCAT44(iStack_dc,local_e0);
            iVar13 = *(int *)(puVar15 + 5);
            *(int *)(puVar15 + 5) = iVar13 + 1;
            if (*(int *)((longlong)puVar15 + 0x2c) < iVar13 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 4,iVar13);
            }
            fVar18 = local_d8;
            *(ulonglong *)(puVar15[4] + (longlong)iVar13 * 8) = CONCAT44(uStack_d4,local_d8);
            (**(code **)(*(longlong *)*puVar15 + 0x28))
                      ((longlong *)*puVar15,&local_c8,iVar16,iVar7,*(undefined4 *)(param_1 + 0x8c),
                       &local_110);
            iVar13 = *(int *)(puVar15 + 3);
            *(int *)(puVar15 + 3) = iVar13 + 1;
            local_d0 = iVar16;
            iStack_cc = iVar7;
            if (*(int *)((longlong)puVar15 + 0x1c) < iVar13 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 2,iVar13);
            }
            *(ulonglong *)(puVar15[2] + (longlong)iVar13 * 8) = CONCAT44(iStack_cc,local_d0);
            iVar13 = *(int *)(puVar15 + 5);
            *(int *)(puVar15 + 5) = iVar13 + 1;
            if (*(int *)((longlong)puVar15 + 0x2c) < iVar13 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar15 + 4,iVar13);
            }
            *(ulonglong *)(puVar15[4] + (longlong)iVar13 * 8) = CONCAT44(uStack_c4,local_c8);
            fVar19 = fVar18 + local_c8;
            fVar20 = local_c8;
            if (iVar16 + 1 != iVar7) {
              plVar4 = (longlong *)puVar15[1];
              plVar6 = (longlong *)*puVar15;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              pfVar12 = (float *)(**(code **)(*plVar6 + 0x28))
                                           (plVar6,local_a0,iVar16,iVar16 + 1,
                                            *(undefined4 *)(param_1 + 0x8c),&local_110);
              fVar20 = *pfVar12;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar6 = plVar4 + 1;
                lVar17 = *plVar6;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)lVar17 == 1) {
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
          }
        }
      }
      fVar21 = fVar21 + fVar19;
      fVar22 = fVar22 + fVar18;
      sVar9 = (**(code **)(*(longlong *)*puVar15 + 0x18))
                        ((longlong *)*puVar15,*(undefined4 *)(param_1 + 0x8c));
      sVar10 = (**(code **)(*(longlong *)*puVar15 + 0x20))
                         ((longlong *)*puVar15,*(undefined4 *)(param_1 + 0x8c));
      sVar11 = sVar10 + sVar9;
      if ((short)(sVar10 + sVar9) <= sVar14) {
        sVar11 = sVar14;
      }
      sVar14 = -sVar9;
      if (-sVar9 <= local_118) {
        sVar14 = local_118;
      }
      iVar13 = *param_3;
      local_118 = sVar14;
      if (iVar7 == param_6) {
        if ((iVar13 < *(int *)(param_4 + 6)) &&
           (plVar4 = *(longlong **)(param_4[5] + (longlong)iVar13 * 0x30),
           (**(code **)(*plVar4 + 8))(plVar4,local_a8), iVar7 == local_a4)) {
          *param_3 = *param_3 + 1;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      *param_3 = iVar13;
      sVar14 = sVar11;
    } while (iVar13 < *(int *)(param_4 + 6));
  }
  else {
    sVar11 = 0;
    iVar16 = param_6;
  }
  plVar4 = local_100;
  local_res8 = CONCAT44(param_6,param_5);
  *param_2 = local_res8;
  local_res8 = CONCAT44(iVar16,param_5);
  param_2[1] = local_res8;
  *(float *)(param_2 + 2) = fVar21;
  *(float *)(param_2 + 3) = fVar22;
  *(float *)((longlong)param_2 + 0x1c) = fVar20;
  *(short *)(param_2 + 4) = sVar11;
  *(short *)((longlong)param_2 + 0x22) = local_118;
  *(undefined1 *)((longlong)param_2 + 0x24) = local_res20;
  *(float *)((longlong)param_2 + 0x14) = (float)((int)sVar11 + (int)local_118);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_100 + 1;
    lVar17 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 141939210 FUN_141939210 body=56 status=ok
// SIG undefined FUN_141939210(void)

void FUN_141939210(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d6e320;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 141939250 FUN_141939250 body=56 status=ok
// SIG undefined FUN_141939250(void)

void FUN_141939250(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144d6e360;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 141939290 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d6e680;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1419392f0 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d6e058;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 141939350 FUN_141939350 body=92 status=ok
// SIG undefined FUN_141939350(void)

void FUN_141939350(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d6da48;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_1 + 0x28);
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 1419393b0 FUN_1419393b0 body=92 status=ok
// SIG undefined FUN_1419393b0(void)

void FUN_1419393b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144d6da08;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_1 + 0x28);
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 141939410 FUN_141939410 body=848 status=ok
// SIG undefined FUN_141939410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141939410(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_ec [4];
  longlong local_e8 [4];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_8c [4];
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar8 = (longlong *)0x0;
  local_148 = 0;
  if (*(char *)(param_1 + 0x339) == '\0') {
    cVar5 = '\0';
  }
  else {
    if (((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0))
       && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x348) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x340);
      }
      uVar6 = (**(code **)(*plVar8 + 0x38))();
      *(undefined1 *)(param_1 + 0x338) = uVar6;
    }
    cVar5 = *(char *)(param_1 + 0x338);
  }
  local_140 = *param_3;
  local_138 = (longlong *)param_3[1];
  local_158 = param_4;
  if (cVar5 == '\0') {
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    local_98 = 0;
    local_90 = 0;
    local_130 = local_140;
    local_128 = local_138;
    _guard_xfg_dispatch_icall_nop(local_8c,0,0x54);
    local_88[0] = 0;
    local_58 = 0xffffffff;
    local_88[1] = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    puVar7 = (undefined8 *)FUN_141938010(local_110,&local_98,&local_130,param_1 + 0x130);
    *param_2 = *puVar7;
    lVar4 = puVar7[1];
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_108 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_88,0);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    plVar8 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_128 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  else {
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    local_f8 = 0;
    local_f0 = 0;
    _guard_xfg_dispatch_icall_nop(local_ec,0,0x54);
    local_e8[0] = 0;
    local_b8 = 0xffffffff;
    local_e8[1] = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    puVar7 = (undefined8 *)FUN_141937b70(local_120,&local_f8,&local_140,param_1 + 0x130);
    *param_2 = *puVar7;
    lVar4 = puVar7[1];
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_118 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_e8,0);
    if (local_c8 != 0) {
      FMemory::Free();
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    plVar8 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_138 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141939760 FUN_141939760 body=4358 status=ok
// SIG undefined FUN_141939760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141939ce6) */
/* WARNING: Removing unreachable block (ram,0x000141939cf3) */
/* WARNING: Removing unreachable block (ram,0x000141939d0f) */

void FUN_141939760(longlong param_1,int param_2,int param_3,float param_4,undefined8 *param_5,
                  int *param_6,longlong *param_7,int *param_8,longlong *param_9)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong lVar17;
  undefined4 *puVar18;
  float *pfVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined2 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  bool bVar25;
  int iVar26;
  longlong *plVar27;
  uint uVar28;
  int iVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_358 [32];
  undefined2 *local_338;
  longlong **local_330;
  undefined1 local_328;
  char local_327;
  undefined1 local_326 [2];
  int local_324;
  short local_320;
  short local_31e;
  undefined8 *local_318;
  undefined8 local_310;
  longlong local_308;
  longlong local_300;
  int local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  int local_2c8;
  int iStack_2c4;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  longlong *local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int iStack_28c;
  uint local_288;
  void *local_280;
  int local_278;
  int local_270;
  int local_268;
  int iStack_264;
  longlong local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  int *local_238;
  int local_230;
  int iStack_22c;
  int *local_228;
  float local_220;
  float local_21c;
  undefined8 local_218;
  longlong *local_210;
  undefined2 local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  undefined8 local_1b0;
  float local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  char local_198;
  int local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  int local_178 [2];
  undefined1 local_170 [8];
  undefined8 *local_168;
  longlong *local_160;
  longlong *local_158;
  undefined1 local_150 [4];
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  longlong *plStack_138;
  undefined2 local_130 [4];
  undefined8 local_128;
  longlong *local_120;
  undefined1 local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [16];
  longlong *local_c0;
  undefined8 local_b0;
  longlong *plStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  puVar20 = (undefined8 *)0x0;
  local_294 = 0;
  local_308 = *(longlong *)(param_1 + 0x18);
  local_168 = param_5;
  local_2d0 = param_7;
  local_300 = (longlong)param_2 * 0x70;
  local_2d8 = param_9;
  local_228 = param_6;
  plVar31 = *(longlong **)(local_300 + 0x18 + local_308);
  local_200 = *(undefined8 *)(local_300 + 0x10 + local_308);
  local_238 = param_8;
  if (plVar31 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
    UNLOCK();
  }
  local_208 = CONCAT11(*(undefined1 *)(local_300 + 0x20 + local_308),*(undefined1 *)(param_1 + 0x89)
                      );
  local_2f8 = param_3;
  local_2f0 = param_1;
  local_270 = param_2;
  local_1f8 = plVar31;
  if (plVar31 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
    UNLOCK();
    LOCK();
    plVar27 = plVar31 + 1;
    lVar14 = *plVar27;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar31)(plVar31);
      LOCK();
      piVar16 = (int *)((longlong)plVar31 + 0xc);
      iVar12 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar31 + 8))(plVar31,1);
      }
    }
  }
  iVar12 = *(int *)(local_300 + 0x30 + local_308);
  iVar13 = *param_8;
  local_320 = 0;
  local_31e = 0;
  if (*param_6 < iVar12) {
    plVar31 = *(longlong **)
               (*(longlong *)(local_300 + 0x28 + local_308) + (longlong)*param_6 * 0x30);
    (**(code **)(*plVar31 + 8))(plVar31,local_178);
    if (local_178[0] <= iVar13) {
      local_178[0] = iVar13;
    }
    iVar13 = local_178[0];
    iVar12 = *(int *)(local_300 + 0x30 + local_308);
  }
  iVar23 = local_2f8;
  if ((local_2f8 == -1) && (iVar23 = 0, 0 < iVar12)) {
    plVar31 = *(longlong **)
               (*(longlong *)(local_300 + 0x28 + local_308) + -0x30 +
               (longlong)*(int *)(local_300 + 0x30 + local_308) * 0x30);
    (**(code **)(*plVar31 + 8))(plVar31,local_150);
    iVar23 = local_14c;
  }
  local_29c = 0;
  local_327 = '\0';
  local_2a8 = (longlong *)0x0;
  local_2a0 = 0;
  if (*(char *)(param_1 + 0x89) == '\x01') {
    iVar23 = iVar23 - iVar13;
LAB_1419399a5:
    local_288 = local_288 & 0xffffff00;
    local_2a0 = 1;
    local_290 = iVar13;
    iStack_28c = iVar23;
    if (local_29c < 1) {
      FUN_1415e4dc0(&local_2a8,0);
    }
    *local_2a8 = CONCAT44(iStack_28c,local_290);
    *(uint *)(local_2a8 + 1) = local_288;
  }
  else {
    if (*(int *)(*(undefined8 **)(local_300 + local_308) + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)**(undefined8 **)(local_300 + local_308);
    }
    local_330 = &local_2a8;
    iVar23 = iVar23 - iVar13;
    local_338 = (undefined2 *)
                CONCAT71(local_338._1_7_,*(undefined1 *)(local_300 + 0x20 + local_308));
    local_327 = (**(code **)(**(longlong **)(param_1 + 0x100) + 8))
                          (*(longlong **)(param_1 + 0x100),puVar22,iVar13,iVar23);
    if (local_2a0 == 0) goto LAB_1419399a5;
  }
  iVar12 = local_2a0;
  plVar31 = local_2a8;
  local_324 = 0;
  local_280 = (void *)0x0;
  local_278 = local_2a0;
  if (local_2a0 != 0) {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_280,local_2a0,0);
    _guard_xfg_dispatch_icall_nop(local_280,plVar31,(longlong)iVar12 * 0xc);
  }
  local_326[0] = 0;
  AlgoImpl::
  IntroSortInternal<TextBiDi::FTextDirectionInfo,FIdentityFunctor,TDereferenceWrapper<TextBiDi::FTextDirectionInfo,<lambda_40e85f72cc2f81313e22ba3b4dfc8630>_>_>
            (local_280,(longlong)local_278,0,local_326);
  iVar12 = *param_6;
  local_2c8 = 0x7fffffff;
  iStack_2c4 = -0x80000000;
  if (iVar12 < *(int *)(local_300 + 0x30 + local_308)) {
    local_260 = 0;
    do {
      lVar14 = local_260;
      puVar30 = (undefined8 *)
                ((longlong)iVar12 * 0x30 + *(longlong *)(local_300 + 0x28 + local_308));
      (**(code **)(*(longlong *)*puVar30 + 8))((longlong *)*puVar30,&local_268);
      iVar23 = 0;
      local_328 = 0;
      iVar12 = *local_238;
      iVar13 = local_268;
      if (local_268 <= iVar12) {
        iVar13 = iVar12;
      }
      iVar26 = iStack_264;
      if (local_324 < local_278) {
        iVar23 = *(int *)((longlong)local_280 + lVar14 * 0xc + 4) +
                 *(int *)((longlong)local_280 + lVar14 * 0xc);
        local_328 = *(undefined1 *)((longlong)local_280 + lVar14 * 0xc + 8);
        iVar26 = iVar23;
        if (iStack_264 <= iVar23) {
          iVar26 = iStack_264;
        }
      }
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      iVar29 = local_324;
      if ((int)*local_2d0 != -1) {
        lVar14 = (longlong)(int)*local_2d0 * 0x20 + *(longlong *)(local_300 + 0x48 + local_308);
        iVar3 = *(int *)(lVar14 + 4);
        if (iVar12 < iVar3) {
          if (iVar3 <= iVar26) {
            local_210 = (longlong *)0x0;
            local_218 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2b0,&local_210);
            plVar31 = local_210;
            iVar26 = iVar3;
            iVar29 = local_324;
            if (local_210 != (longlong *)0x0) {
              LOCK();
              plVar27 = local_210 + 1;
              lVar14 = *plVar27;
              *(int *)plVar27 = (int)*plVar27 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_210)(local_210);
                LOCK();
                piVar16 = (int *)((longlong)plVar31 + 0xc);
                iVar12 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                plVar31 = local_210;
                goto joined_r0x000141939c2d;
              }
            }
          }
        }
        else {
          iVar12 = *(int *)(lVar14 + 8);
          local_2b8 = *(undefined8 *)(lVar14 + 0x10);
          if (iVar26 < iVar12) {
            local_240 = *(longlong **)(lVar14 + 0x18);
            if (local_240 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_240 + 1) = (int)local_240[1] + 1;
              UNLOCK();
            }
            local_248 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2b0,&local_240);
            plVar31 = local_240;
            iVar29 = local_324;
            if (local_240 != (longlong *)0x0) {
              LOCK();
              plVar27 = local_240 + 1;
              lVar14 = *plVar27;
              *(int *)plVar27 = (int)*plVar27 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_240)(local_240);
                LOCK();
                piVar16 = (int *)((longlong)plVar31 + 0xc);
                iVar12 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                plVar31 = local_240;
                goto joined_r0x000141939c2d;
              }
            }
          }
          else {
            local_250 = *(longlong **)(lVar14 + 0x18);
            if (local_250 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_250 + 1) = (int)local_250[1] + 1;
              UNLOCK();
            }
            local_258 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2b0,&local_250);
            plVar31 = local_250;
            iVar26 = iVar12;
            iVar29 = local_324;
            if (local_250 != (longlong *)0x0) {
              LOCK();
              plVar27 = local_250 + 1;
              lVar14 = *plVar27;
              *(int *)plVar27 = (int)*plVar27 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_250)(local_250);
                LOCK();
                piVar16 = (int *)((longlong)plVar31 + 0xc);
                iVar12 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                plVar31 = local_250;
joined_r0x000141939c2d:
                iVar29 = local_324;
                if (iVar12 == 1) {
                  (**(code **)(*plVar31 + 8))(plVar31,1);
                  iVar29 = local_324;
                }
              }
            }
          }
        }
      }
      if ((local_2f8 != -1) && (local_2f8 <= iVar26)) {
        iVar26 = local_2f8;
      }
      local_324 = iVar29 + 1;
      lVar14 = local_260 + 1;
      if (iVar26 != iVar23) {
        local_324 = iVar29;
        lVar14 = local_260;
      }
      local_260 = lVar14;
      local_148 = CONCAT44(iVar26,iVar13);
      if (plStack_2b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_2b0 + 1) = (int)plStack_2b0[1] + 1;
        UNLOCK();
      }
      plStack_a8 = plStack_2b0;
      local_b0 = local_2b8;
      plStack_138 = plStack_2b0;
      local_140 = local_2b8;
      uStack_180 = 0;
      local_188 = 0;
      local_130[0] = local_208;
      local_128 = local_200;
      local_120 = local_1f8;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
        UNLOCK();
      }
      local_118 = local_328;
      local_338 = local_130;
      local_290 = iVar13;
      iStack_28c = iVar26;
      puVar15 = (undefined8 *)
                FTextLayout::FRunModel::CreateBlock
                          (puVar30,local_e0,&local_148,*(undefined4 *)(local_2f0 + 0x8c));
      param_9 = local_2d8;
      iVar12 = (int)local_2d8[1];
      *(int *)(local_2d8 + 1) = iVar12 + 1;
      if (*(int *)((longlong)local_2d8 + 0xc) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_2d8,iVar12);
      }
      plVar31 = local_d8;
      puVar21 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_9);
      *puVar21 = *puVar15;
      lVar14 = puVar15[1];
      puVar21[1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar27 = local_d8 + 1;
        lVar14 = *plVar27;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar16 = (int *)((longlong)plVar31 + 0xc);
          iVar12 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar31 + 8))(plVar31,1);
          }
        }
      }
      plVar31 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar27 = local_120 + 1;
        lVar14 = *plVar27;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar16 = (int *)((longlong)plVar31 + 0xc);
          iVar12 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar31 + 8))(plVar31,1);
          }
        }
      }
      *local_238 = iVar26;
      plVar31 = *(longlong **)(*param_9 + -0x10 + (longlong)(int)param_9[1] * 0x10);
      (**(code **)(*plVar31 + 0x10))(plVar31,&local_230);
      plVar31 = plStack_138;
      iVar12 = local_230;
      if (local_2c8 <= local_230) {
        iVar12 = local_2c8;
      }
      iVar13 = iStack_22c;
      if (iStack_22c <= iStack_2c4) {
        iVar13 = iStack_2c4;
      }
      local_2c8 = iVar12;
      iStack_2c4 = iVar13;
      if (plStack_138 != (longlong *)0x0) {
        LOCK();
        plVar27 = plStack_138 + 1;
        lVar14 = *plVar27;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_138)(plStack_138);
          LOCK();
          piVar16 = (int *)((longlong)plVar31 + 0xc);
          iVar12 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar31 + 8))(plVar31,1);
          }
        }
      }
      sVar9 = (**(code **)(*(longlong *)*puVar30 + 0x18))();
      sVar10 = (**(code **)(*(longlong *)*puVar30 + 0x20))();
      piVar16 = local_228;
      plVar31 = plStack_2b0;
      sVar11 = sVar10 + sVar9;
      if ((short)(sVar10 + sVar9) <= local_320) {
        sVar11 = local_320;
      }
      sVar10 = -sVar9;
      if (-sVar9 <= local_31e) {
        sVar10 = local_31e;
      }
      if (iVar26 == iStack_264) {
        *local_228 = *local_228 + 1;
      }
      iVar12 = (int)*local_2d0;
      if ((iVar12 != -1) &&
         (iVar26 == *(int *)((longlong)iVar12 * 0x20 + 8 +
                            *(longlong *)(local_300 + 0x48 + local_308)))) {
        iVar12 = iVar12 + 1;
        *(int *)local_2d0 = iVar12;
        if (*(int *)(local_300 + 0x50 + local_308) <= iVar12) {
          iVar12 = -1;
        }
        *(int *)local_2d0 = iVar12;
      }
      local_320 = sVar11;
      local_31e = sVar10;
      if (iVar26 == local_2f8) {
        if (plStack_2b0 != (longlong *)0x0) {
          LOCK();
          plVar27 = plStack_2b0 + 1;
          lVar14 = *plVar27;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plStack_2b0)(plStack_2b0);
            LOCK();
            piVar16 = (int *)((longlong)plVar31 + 0xc);
            iVar12 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
            }
          }
        }
        break;
      }
      if (plStack_2b0 != (longlong *)0x0) {
        LOCK();
        plVar27 = plStack_2b0 + 1;
        lVar14 = *plVar27;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_2b0)(plStack_2b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar31 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
          }
        }
      }
      iVar12 = *piVar16;
    } while (iVar12 < *(int *)(local_300 + 0x30 + local_308));
  }
  fVar33 = 0.0;
  iVar12 = (int)param_9[1];
  fVar32 = 0.0;
  fVar34 = -*(float *)(local_2f0 + 0xc4);
  fVar35 = *(float *)(local_2f0 + 0xb8) - *(float *)(local_2f0 + 200);
  lVar14 = local_2f0;
  if (iVar12 < 1) goto LAB_14193a764;
  if ((1 < iVar12) && (local_327 != '\0')) {
    local_2e8 = 0;
    local_2e0 = 0;
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_2e8);
    iVar12 = (int)param_9[1];
    local_318 = (undefined8 *)0x0;
    local_310 = 0;
    local_2d0 = (longlong *)((longlong)local_2a8 + (longlong)local_2a0 * 0xc);
    puVar30 = puVar20;
    plVar31 = local_2a8;
    if (local_2a8 != local_2d0) {
      do {
        plVar27 = local_2d8;
        local_298 = (int)*plVar31;
        iVar12 = *(int *)((longlong)plVar31 + 4) + local_298;
        uVar6 = local_2e0;
        while (local_2e0 = uVar6, local_298 < iVar12) {
          puVar15 = (undefined8 *)*plVar27;
          puVar21 = puVar15 + (longlong)(int)plVar27[1] * 2;
          while ((puVar24 = puVar20, puVar15 != puVar21 &&
                 ((piVar16 = (int *)(**(code **)(*(longlong *)*puVar15 + 0x10))
                                              ((longlong *)*puVar15,local_110),
                  piVar16[1] - *piVar16 < 1 ||
                  (piVar16 = (int *)(**(code **)(*(longlong *)*puVar15 + 0x10))
                                              ((longlong *)*puVar15,local_108), puVar24 = puVar15,
                  *piVar16 != local_298))))) {
            puVar15 = puVar15 + 2;
          }
          uVar7 = local_310;
          lVar14 = (longlong)(int)local_310;
          iVar13 = (int)local_310 + 1;
          local_310 = CONCAT44(local_310._4_4_,iVar13);
          if ((char)plVar31[1] == '\0') {
            if (local_310._4_4_ < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_318,uVar7 & 0xffffffff);
              puVar30 = local_318;
            }
            puVar30[lVar14 * 2] = *puVar24;
            lVar17 = puVar24[1];
            puVar30[lVar14 * 2 + 1] = lVar17;
          }
          else {
            if (local_310._4_4_ < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_318,uVar7 & 0xffffffff);
              puVar30 = local_318;
            }
            _guard_xfg_dispatch_icall_nop(puVar30 + 2,puVar30,lVar14 << 4);
            *puVar30 = *puVar24;
            lVar17 = puVar24[1];
            puVar30[1] = lVar17;
          }
          if (lVar17 != 0) {
            LOCK();
            *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
            UNLOCK();
            puVar30 = local_318;
          }
          lVar14 = (**(code **)(*(longlong *)*puVar24 + 0x10))((longlong *)*puVar24,local_100);
          uVar6 = local_2e0;
          local_298 = *(int *)(lVar14 + 4);
        }
        iVar12 = (int)local_310;
        puVar15 = (undefined8 *)(longlong)(int)local_310;
        if ((int)local_310 != 0) {
          local_2e0._0_4_ = (int)uVar6;
          local_2e0._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
          bVar25 = local_2e0._4_4_ < (int)local_2e0 + (int)local_310;
          if (bVar25) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_2e8);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(int)local_2e0 * 0x10 + local_2e8),puVar30,
                     (longlong)puVar15 << 4);
          local_2e0 = CONCAT44(local_2e0._4_4_,(int)local_2e0 + iVar12);
          puVar15 = puVar20;
        }
        if ((longlong)local_310 < 0) {
          if ((int)puVar15 != 0) {
            plVar27 = puVar30 + 1;
            do {
              plVar4 = (longlong *)*plVar27;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar4 + 1;
                lVar14 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar16 = (int *)((longlong)plVar4 + 0xc);
                  iVar12 = *piVar16;
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
              plVar27 = plVar27 + 2;
              uVar28 = (int)puVar15 - 1;
              puVar15 = (undefined8 *)(ulonglong)uVar28;
              puVar30 = local_318;
            } while (uVar28 != 0);
          }
          uVar7 = local_310 >> 0x20;
          local_310 = local_310 & 0xffffffff00000000;
          if ((int)uVar7 != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_318,0);
            puVar30 = local_318;
          }
        }
        else {
          if ((int)puVar15 != 0) {
            plVar27 = puVar30 + 1;
            do {
              plVar4 = (longlong *)*plVar27;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar4 + 1;
                lVar14 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar16 = (int *)((longlong)plVar4 + 0xc);
                  iVar12 = *piVar16;
                  *piVar16 = *piVar16 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4);
                  }
                }
              }
              plVar27 = plVar27 + 2;
              uVar28 = (int)puVar15 - 1;
              puVar15 = (undefined8 *)(ulonglong)uVar28;
              puVar30 = local_318;
            } while (uVar28 != 0);
          }
          local_310 = local_310 & 0xffffffff00000000;
        }
        plVar31 = (longlong *)((longlong)plVar31 + 0xc);
      } while (plVar31 != local_2d0);
      iVar12 = (int)local_2d8[1];
    }
    param_9 = local_2d8;
    if (local_2d8 != &local_2e8) {
      lVar14 = *local_2d8;
      if (iVar12 != 0) {
        plVar31 = (longlong *)(lVar14 + 8);
        do {
          plVar27 = (longlong *)*plVar31;
          if (plVar27 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar27 + 1;
            lVar14 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar16 = (int *)((longlong)plVar27 + 0xc);
              iVar13 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar27 + 8))(plVar27,1);
              }
            }
          }
          plVar31 = plVar31 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        lVar14 = *local_2d8;
      }
      param_9 = local_2d8;
      if (lVar14 != 0) {
        FMemory::Free();
      }
      *param_9 = local_2e8;
      *(int *)(param_9 + 1) = (int)local_2e0;
      *(int *)((longlong)param_9 + 0xc) = local_2e0._4_4_;
      local_2e0 = 0;
      local_2e8 = 0;
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_318);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_2e8);
    iVar12 = (int)param_9[1];
  }
  if (0 < iVar12) {
    iVar13 = (int)local_320;
    lVar14 = 0;
    do {
      plVar31 = *(longlong **)(lVar14 + 8 + *param_9);
      plVar27 = *(longlong **)(lVar14 + *param_9);
      if (plVar31 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
        UNLOCK();
      }
      local_2d0 = plVar27;
      (**(code **)(*plVar27 + 8))(plVar27,&local_160);
      sVar11 = (**(code **)(*local_160 + 0x18))();
      lVar17 = (**(code **)(*plVar27 + 0x18))(plVar27,local_f8);
      plVar27 = local_160;
      fVar32 = *(float *)(lVar17 + 4);
      lVar17 = *local_160;
      puVar18 = (undefined4 *)(**(code **)(*local_2d0 + 0x10))(local_2d0,local_f0);
      cVar8 = (**(code **)(lVar17 + 0x30))(plVar27,*puVar18);
      plVar27 = local_2d0;
      local_220 = (float)(int)cVar8 + fVar33 + fVar34;
      local_21c = (float)(int)(short)(int)(((float)iVar13 - fVar32) - (float)(int)sVar11) + fVar35;
      (**(code **)(*local_2d0 + 0x30))(local_2d0,&local_220);
      pfVar19 = (float *)(**(code **)(*plVar27 + 0x18))(plVar27,local_e8);
      plVar27 = local_158;
      fVar33 = fVar33 + *pfVar19;
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_158 + 1;
        lVar17 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar16 = (int *)((longlong)plVar27 + 0xc);
          iVar12 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar27 + 8))(plVar27,1);
          }
        }
      }
      if (plVar31 != (longlong *)0x0) {
        LOCK();
        plVar27 = plVar31 + 1;
        lVar17 = *plVar27;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar31)(plVar31);
          LOCK();
          piVar16 = (int *)((longlong)plVar31 + 0xc);
          iVar12 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar31 + 8))(plVar31,1);
          }
        }
      }
      uVar28 = (int)puVar20 + 1;
      puVar20 = (undefined8 *)(ulonglong)uVar28;
      lVar14 = lVar14 + 0x10;
      iVar12 = (int)local_2d8[1];
      param_9 = local_2d8;
    } while ((int)uVar28 < iVar12);
  }
  lVar14 = local_2f0;
  bVar25 = false;
  puVar20 = &local_1b0;
  if (*(char *)((longlong)local_168 + 4) != '\0') {
    puVar20 = local_168;
  }
  local_1a0 = 0xffffffffffffffff;
  local_1e8 = (undefined8 *)0x0;
  local_1e0 = 0;
  local_1dc = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1a8 = (float)((int)local_31e + (int)local_320);
  fVar32 = (float)((int)local_31e + (int)local_320) * *(float *)(local_2f0 + 0xac);
  local_1b0 = CONCAT44(fVar32,fVar33);
  local_1a4 = *(undefined4 *)puVar20;
  local_1a0 = CONCAT44(iStack_2c4,local_2c8);
  local_198 = *(char *)(local_300 + 0x20 + local_308);
  local_194 = local_270;
  local_1b8 = fVar34;
  local_1b4 = fVar35;
  if (iVar12 != 0) {
    if (0 < iVar12) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1e8,iVar12);
    }
    puVar20 = (undefined8 *)*param_9;
    puVar30 = local_1e8 + (longlong)local_1e0 * 2;
    iVar13 = iVar12;
    do {
      *puVar30 = *puVar20;
      lVar17 = puVar20[1];
      puVar30[1] = lVar17;
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        UNLOCK();
      }
      puVar30 = puVar30 + 2;
      puVar20 = puVar20 + 2;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    local_1e0 = local_1e0 + iVar12;
  }
  iVar12 = *(int *)(lVar14 + 0x30);
  *(int *)(lVar14 + 0x30) = iVar12 + 1;
  if (*(int *)(lVar14 + 0x34) < iVar12 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(lVar14 + 0x28,iVar12);
  }
  FUN_1419226a0((longlong)iVar12 * 0x58 + *(longlong *)(lVar14 + 0x28),&local_1e8);
  iVar12 = *(int *)(lVar14 + 0xa8);
  if (local_198 == '\x01') {
    if (iVar12 != 0) {
      if (iVar12 != 2) goto LAB_14193a6ae;
      goto LAB_14193a6b2;
    }
LAB_14193a6d6:
    bVar5 = true;
  }
  else {
LAB_14193a6ae:
    if (iVar12 != 0) goto LAB_14193a6d6;
LAB_14193a6b2:
    bVar25 = true;
    lVar17 = (**(code **)(*(longlong *)*local_1e8 + 0x20))((longlong *)*local_1e8,local_d0);
    if (*(char *)(lVar17 + 0x18) == '\x01') goto LAB_14193a6d6;
    bVar5 = false;
  }
  if ((bVar25) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar31 = local_c0 + 1;
    lVar17 = *plVar31;
    *(int *)plVar31 = (int)*plVar31 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar16 = (int *)((longlong)local_c0 + 0xc);
      iVar12 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if (bVar5) {
    local_294 = *(int *)(lVar14 + 0x30) + -1;
    FUN_14191f9f0(lVar14 + 0x38,local_170,&local_294,0);
  }
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_1c8);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_1d8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1e8);
LAB_14193a764:
  fVar34 = *(float *)(lVar14 + 0xb0);
  if (*(float *)(lVar14 + 0xb0) <= fVar33) {
    fVar34 = fVar33;
  }
  *(float *)(lVar14 + 0xb0) = fVar34;
  if (local_2f8 != -1) {
    fVar33 = param_4;
  }
  if (fVar33 <= *(float *)(lVar14 + 0xb4)) {
    fVar33 = *(float *)(lVar14 + 0xb4);
  }
  *(float *)(lVar14 + 0xb4) = fVar33;
  *(float *)(lVar14 + 0xb8) = fVar32 + *(float *)(lVar14 + 0xb8);
  if (local_280 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_2a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar31 = local_1f8;
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar27 = local_1f8 + 1;
    lVar14 = *plVar27;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar16 = (int *)((longlong)plVar31 + 0xc);
      iVar12 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar31 + 8))(plVar31,1);
      }
    }
  }
  return;
}



// FUNCTION 14193a870 FUN_14193a870 body=723 status=ok
// SIG undefined FUN_14193a870(void)

void FUN_14193a870(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  short *psVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined4 local_res10 [2];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [48];
  
  if ((*(byte *)(param_2 + 0xd) & 1) != 0) {
    uVar17 = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)((longlong)param_2 + 0x44) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_2 + 7,0);
    }
    *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) & 0xfe;
    uVar15 = uVar17;
    uVar19 = uVar17;
    if (0 < *(int *)(param_2 + 6)) {
      do {
        lVar14 = param_2[5];
        lVar13 = lVar14 + 0x10 + uVar15;
        *(undefined4 *)(lVar13 + 8) = 0;
        if (*(int *)(lVar13 + 0xc) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar13,0);
        }
        lVar14 = lVar14 + 0x20 + uVar15;
        *(undefined4 *)(lVar14 + 8) = 0;
        if (*(int *)(lVar14 + 0xc) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar14,0);
        }
        uVar18 = (int)uVar19 + 1;
        uVar15 = uVar15 + 0x30;
        uVar19 = (ulonglong)uVar18;
      } while ((int)uVar18 < *(int *)(param_2 + 6));
    }
    if (0.0 < *(float *)(param_1 + 0x90)) {
      plVar3 = (longlong *)(param_1 + 0xd0);
      lVar14 = -1;
      if (*plVar3 == 0) {
        plVar11 = (longlong *)FBreakIterator::CreateLineBreakIterator(local_68);
        local_80 = (longlong *)plVar11[1];
        local_88 = *plVar11;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        if (plVar3 != &local_88) {
          *plVar3 = local_88;
          local_88 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_80);
        }
        plVar11 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_60 + 1;
          lVar13 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
      if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
        psVar16 = &DAT_143f3eda8;
      }
      else {
        psVar16 = *(short **)*param_2;
      }
      local_70 = 0;
      local_78 = 0;
      if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
        do {
          lVar14 = lVar14 + 1;
        } while (psVar16[lVar14] != 0);
        uVar18 = (int)lVar14 + 1;
        local_70 = (ulonglong)uVar18;
        if (0 < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        }
        FGenericPlatformString::Memcpy(local_78,psVar16,(longlong)(int)uVar18 * 2);
      }
      (**(code **)(*(longlong *)*plVar3 + 0x10))((longlong *)*plVar3,&local_78);
      if (local_78 != 0) {
        FMemory::Free();
      }
      local_res10[0] = 0;
      uVar18 = (**(code **)(*(longlong *)*plVar3 + 0x48))();
      while (uVar18 != 0xffffffff) {
        uVar15 = (ulonglong)uVar18;
        puVar12 = (undefined8 *)
                  FUN_141938ba0(param_1,local_58,local_res10,param_2,(int)uVar17,uVar18);
        iVar6 = *(int *)(param_2 + 8);
        lVar14 = (longlong)iVar6;
        *(int *)(param_2 + 8) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0x44) < iVar6 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2 + 7,iVar6);
        }
        uVar10 = puVar12[1];
        lVar13 = param_2[7];
        puVar4 = (undefined8 *)(lVar13 + lVar14 * 0x28);
        *puVar4 = *puVar12;
        puVar4[1] = uVar10;
        uVar7 = *(undefined4 *)((longlong)puVar12 + 0x14);
        uVar8 = *(undefined4 *)(puVar12 + 3);
        uVar9 = *(undefined4 *)((longlong)puVar12 + 0x1c);
        puVar5 = (undefined4 *)(lVar13 + 0x10 + lVar14 * 0x28);
        *puVar5 = *(undefined4 *)(puVar12 + 2);
        puVar5[1] = uVar7;
        puVar5[2] = uVar8;
        puVar5[3] = uVar9;
        *(undefined8 *)(lVar13 + 0x20 + lVar14 * 0x28) = puVar12[4];
        uVar18 = (**(code **)(*(longlong *)*plVar3 + 0x48))();
        uVar17 = uVar15;
      }
      (**(code **)(*(longlong *)*plVar3 + 0x20))();
    }
  }
  return;
}



// FUNCTION 14193ab50 FUN_14193ab50 body=9 status=ok
// SIG undefined FUN_14193ab50(void)

void FUN_14193ab50(longlong param_1)

{
  FUN_1419237e0(param_1 + 0x10);
  return;
}



// FUNCTION 14193ab70 FUN_14193ab70 body=9 status=ok
// SIG undefined FUN_14193ab70(void)

void FUN_14193ab70(longlong param_1)

{
  FUN_141924f70(param_1 + 0x10);
  return;
}



// FUNCTION 14193ab80 FUN_14193ab80 body=9 status=ok
// SIG undefined FUN_14193ab80(void)

void FUN_14193ab80(longlong param_1)

{
  FUN_1419a93c0(param_1 + 0x10);
  return;
}



// FUNCTION 14193aba0 FUN_14193aba0 body=9 status=ok
// SIG undefined FUN_14193aba0(void)

void FUN_14193aba0(longlong param_1)

{
  FUN_1419256a0(param_1 + 0x10);
  return;
}



// FUNCTION 14193abb0 FUN_14193abb0 body=9 status=ok
// SIG undefined FUN_14193abb0(void)

void FUN_14193abb0(longlong param_1)

{
  SWidgetSwitcher::~SWidgetSwitcher(param_1 + 0x10);
  return;
}



// FUNCTION 14193abc0 FUN_14193abc0 body=74 status=ok
// SIG undefined FUN_14193abc0(void)

void FUN_14193abc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x50) = 0;
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1 + 8);
    FMemory::operator_delete(lVar1,0x58);
  }
  return;
}



// FUNCTION 14193ac10 FUN_14193ac10 body=96 status=ok
// SIG undefined FUN_14193ac10(void)

undefined8 * FUN_14193ac10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x388) + 0x2b0);
  }
  else {
    puVar3 = (undefined8 *)FUN_141831530(param_1 + 0x480);
  }
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
  param_2[3] = puVar3[3];
  lVar1 = puVar3[4];
  param_2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14193ac70 FUN_14193ac70 body=96 status=ok
// SIG undefined FUN_14193ac70(void)

undefined8 * FUN_14193ac70(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x4e0) == '\0') {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x5c0) + 0x2b0);
  }
  else {
    puVar3 = (undefined8 *)FUN_141831530(param_1 + 0x4b8);
  }
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
  param_2[3] = puVar3[3];
  lVar1 = puVar3[4];
  param_2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14193acd0 FUN_14193acd0 body=134 status=ok
// SIG undefined FUN_14193acd0(void)

undefined8 * FUN_14193acd0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x428) == '\0') {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x388) + 0x238);
  }
  else {
    puVar3 = (undefined8 *)FUN_14193e860(param_1 + 0x3d8);
  }
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  uVar2 = puVar3[3];
  param_2[2] = puVar3[2];
  param_2[3] = uVar2;
  uVar2 = puVar3[5];
  param_2[4] = puVar3[4];
  param_2[5] = uVar2;
  param_2[6] = puVar3[6];
  lVar1 = puVar3[7];
  param_2[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_2[8] = puVar3[8];
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(puVar3 + 9);
  *(undefined1 *)((longlong)param_2 + 0x4c) = *(undefined1 *)((longlong)puVar3 + 0x4c);
  return param_2;
}



// FUNCTION 14193ad60 FUN_14193ad60 body=134 status=ok
// SIG undefined FUN_14193ad60(void)

undefined8 * FUN_14193ad60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x460) == '\0') {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x5c0) + 0x238);
  }
  else {
    puVar3 = (undefined8 *)FUN_14193e860(param_1 + 0x410);
  }
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  uVar2 = puVar3[3];
  param_2[2] = puVar3[2];
  param_2[3] = uVar2;
  uVar2 = puVar3[5];
  param_2[4] = puVar3[4];
  param_2[5] = uVar2;
  param_2[6] = puVar3[6];
  lVar1 = puVar3[7];
  param_2[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_2[8] = puVar3[8];
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(puVar3 + 9);
  *(undefined1 *)((longlong)param_2 + 0x4c) = *(undefined1 *)((longlong)puVar3 + 0x4c);
  return param_2;
}



// FUNCTION 14193adf0 FUN_14193adf0 body=277 status=ok
// SIG undefined FUN_14193adf0(void)

undefined8 * FUN_14193adf0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  cVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x3a0) + 0x208))();
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x468) == '\0') {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x388) + 0x288);
    }
    else {
      puVar3 = (undefined8 *)FUN_141831530(param_1 + 0x440);
    }
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
    param_2[3] = puVar3[3];
    lVar4 = puVar3[4];
LAB_14193aeea:
    param_2[4] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    if (*(char *)(param_1 + 0x4e8) == '\0') {
      if (*(char *)(param_1 + 0x468) == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x388);
        uVar1 = *(undefined8 *)(lVar4 + 0x2e0);
        *param_2 = *(undefined8 *)(lVar4 + 0x2d8);
        param_2[1] = uVar1;
        *(undefined1 *)(param_2 + 2) = *(undefined1 *)(lVar4 + 0x2e8);
        param_2[3] = *(undefined8 *)(lVar4 + 0x2f0);
        lVar4 = *(longlong *)(lVar4 + 0x2f8);
        goto LAB_14193aeea;
      }
      param_1 = param_1 + 0x440;
    }
    else {
      param_1 = param_1 + 0x4c0;
    }
    puVar3 = (undefined8 *)FUN_141831530(param_1);
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
    param_2[3] = puVar3[3];
    lVar4 = puVar3[4];
    param_2[4] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 14193af10 FUN_14193af10 body=277 status=ok
// SIG undefined FUN_14193af10(void)

undefined8 * FUN_14193af10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  cVar2 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x388) + 0x208))();
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x4a0) == '\0') {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x5c0) + 0x288);
    }
    else {
      puVar3 = (undefined8 *)FUN_141831530(param_1 + 0x478);
    }
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
    param_2[3] = puVar3[3];
    lVar4 = puVar3[4];
LAB_14193b00a:
    param_2[4] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    if (*(char *)(param_1 + 0x520) == '\0') {
      if (*(char *)(param_1 + 0x4a0) == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x5c0);
        uVar1 = *(undefined8 *)(lVar4 + 0x2e0);
        *param_2 = *(undefined8 *)(lVar4 + 0x2d8);
        param_2[1] = uVar1;
        *(undefined1 *)(param_2 + 2) = *(undefined1 *)(lVar4 + 0x2e8);
        param_2[3] = *(undefined8 *)(lVar4 + 0x2f0);
        lVar4 = *(longlong *)(lVar4 + 0x2f8);
        goto LAB_14193b00a;
      }
      param_1 = param_1 + 0x478;
    }
    else {
      param_1 = param_1 + 0x4f8;
    }
    puVar3 = (undefined8 *)FUN_141831530(param_1);
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar3 + 2);
    param_2[3] = puVar3[3];
    lVar4 = puVar3[4];
    param_2[4] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 14193b030 FUN_14193b030 body=123 status=ok
// SIG undefined FUN_14193b030(void)

undefined8 * FUN_14193b030(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x3d0) == '\0') {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x5c0) + 0x300);
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x3c0);
    if ((*(int *)(param_1 + 0x3e0) != 0) && (*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x3e0) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x3d8);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
        *puVar4 = local_18;
        *(undefined8 *)(param_1 + 0x3c8) = uStack_10;
      }
    }
  }
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14193b0b0 FUN_14193b0b0 body=123 status=ok
// SIG undefined FUN_14193b0b0(void)

undefined8 * FUN_14193b0b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x388) + 0x228);
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x3b0);
    if ((*(int *)(param_1 + 0x3d0) != 0) && (*(longlong **)(param_1 + 0x3c8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x3d0) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x3c8);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
        *puVar4 = local_18;
        *(undefined8 *)(param_1 + 0x3b8) = uStack_10;
      }
    }
  }
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14193b130 FUN_14193b130 body=123 status=ok
// SIG undefined FUN_14193b130(void)

undefined8 * FUN_14193b130(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x3a8) == '\0') {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x5c0) + 0x228);
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x398);
    if ((*(int *)(param_1 + 0x3b8) != 0) && (*(longlong **)(param_1 + 0x3b0) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x3b8) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x3b0);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
        *puVar4 = local_18;
        *(undefined8 *)(param_1 + 0x3a0) = uStack_10;
      }
    }
  }
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14193b1b0 FUN_14193b1b0 body=123 status=ok
// SIG undefined FUN_14193b1b0(void)

undefined8 * FUN_14193b1b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x3f8) == '\0') {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x5c0) + 0x310);
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 1000);
    if ((*(int *)(param_1 + 0x408) != 0) && (*(longlong **)(param_1 + 0x400) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x400) + 0x18))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x408) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x400);
        }
        (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
        *puVar4 = local_18;
        *(undefined8 *)(param_1 + 0x3f0) = uStack_10;
      }
    }
  }
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14193b230 EndLayout body=159 status=ok
// SIG undefined EndLayout(void)

void FSlateTextLayout::EndLayout(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = param_1[3];
  lVar2 = (longlong)(int)param_1[4] * 0x70 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
    puVar1 = *(undefined8 **)(lVar3 + 0x28);
    puVar4 = puVar1 + (longlong)*(int *)(lVar3 + 0x30) * 6;
    for (; puVar1 != puVar4; puVar1 = puVar1 + 6) {
      (**(code **)(*(longlong *)*puVar1 + 0x58))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014193b2cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// FUNCTION 14193b2d0 EndLayout body=128 status=ok
// SIG undefined EndLayout(void)

void FTextLayout::EndLayout(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x70 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
    puVar1 = *(undefined8 **)(lVar3 + 0x28);
    puVar4 = puVar1 + (longlong)*(int *)(lVar3 + 0x30) * 6;
    for (; puVar1 != puVar4; puVar1 = puVar1 + 6) {
      (**(code **)(*(longlong *)*puVar1 + 0x58))();
    }
  }
  return;
}



// FUNCTION 14193b350 FUN_14193b350 body=393 status=ok
// SIG undefined FUN_14193b350(void)

void FUN_14193b350(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar8 = *(longlong **)(param_1 + 0x218);
  plVar7 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar8[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar8 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar8[1];
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar8;
        if ((plVar8 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x210) != 0))
        goto LAB_14193b49f;
        break;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar8 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  local_38 = 0;
  local_30 = 0;
  puVar4 = (undefined8 *)operator_new(0x20,&local_38);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_GetPoolName_144d6e360;
    puVar4[1] = param_1 + -0x208;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[3] = uVar5;
  }
  puVar4 = (undefined8 *)FUN_141853de0(param_1 + -0x208,local_28,0x3f000000,&local_38);
  *(undefined8 *)(param_1 + 0x210) = *puVar4;
  plVar8 = (longlong *)puVar4[1];
  plVar6 = *(longlong **)(param_1 + 0x218);
  if (plVar8 != plVar6) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x218);
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
    *(longlong **)(param_1 + 0x218) = plVar8;
  }
  plVar8 = plVar7;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
LAB_14193b49f:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return;
}



// FUNCTION 14193b4e0 FUN_14193b4e0 body=114 status=ok
// SIG undefined FUN_14193b4e0(void)

void FUN_14193b4e0(longlong param_1)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = DAT_1464b9ee9;
  local_20 = 0;
  local_18 = 0;
  local_27 = 1;
  SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x348),&local_28);
  local_28 = DAT_1464b9ee8;
  local_27 = 1;
  local_20 = 0;
  local_18 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x358) + 0x1b8))(*(longlong **)(param_1 + 0x358),&local_28)
  ;
  return;
}



// FUNCTION 14193b560 FUN_14193b560 body=30 status=ok
// SIG undefined FUN_14193b560(void)

undefined8 FUN_14193b560(longlong param_1,undefined8 param_2)

{
  FUN_141943b90(param_2,*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 14193b580 FUN_14193b580 body=60 status=ok
// SIG undefined FUN_14193b580(void)

undefined1 FUN_14193b580(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x180))();
  if (cVar1 == '\0') {
    cVar1 = FUN_14198a9c0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x220));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14193b5c0 FUN_14193b5c0 body=199 status=ok
// SIG undefined FUN_14193b5c0(void)

undefined1 FUN_14193b5c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar4 = (**(code **)(param_1 + 0x18))
                    ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar7);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 14193b690 FUN_14193b690 body=342 status=ok
// SIG undefined FUN_14193b690(void)

undefined8 * FUN_14193b690(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 local_60 [56];
  longlong *local_28;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar10 = plVar2;
  plVar11 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar2[1];
    bVar12 = iVar8 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, plVar11 = (longlong *)0x0, !bVar12) {
      LOCK();
      bVar12 = iVar8 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar10 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar2[1];
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  puVar9 = (undefined8 *)
           (**(code **)(param_1 + 0x18))
                     ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar11,local_60);
  *param_2 = *puVar9;
  param_2[1] = puVar9[1];
  uVar6 = puVar9[3];
  param_2[2] = puVar9[2];
  param_2[3] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x24);
  uVar4 = *(undefined4 *)(puVar9 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar9 + 4);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  param_2[6] = puVar9[6];
  param_2[7] = puVar9[7];
  puVar9[7] = 0;
  puVar9[6] = 0;
  param_2[8] = puVar9[8];
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(puVar9 + 9);
  *(undefined1 *)((longlong)param_2 + 0x4c) = *(undefined1 *)((longlong)puVar9 + 0x4c);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
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
  return param_2;
}



// FUNCTION 14193b7f0 FUN_14193b7f0 body=211 status=ok
// SIG undefined FUN_14193b7f0(void)

undefined8 * FUN_14193b7f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_38 [24];
  code *local_20;
  undefined8 uStack_18;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar7 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar2[1];
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar7 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  local_20 = *(code **)(param_1 + 0x18);
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined8 *)
           (*local_20)((longlong)(int)uStack_18 + (longlong)plVar8,local_38,
                       *(undefined4 *)(param_1 + 0x28));
  uVar3 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar3;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14193b8d0 FUN_14193b8d0 body=213 status=ok
// SIG undefined FUN_14193b8d0(void)

undefined8 * FUN_14193b8d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
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
          plVar7 = *(longlong **)(param_1 + 8);
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
  puVar5 = (undefined8 *)
           (**(code **)(param_1 + 0x18))
                     ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar7,local_res10,
                      *(undefined4 *)(param_1 + 0x28));
  *param_2 = *puVar5;
  if (plVar6 != (longlong *)0x0) {
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



// FUNCTION 14193b9b0 ExecuteIfBound body=105 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,float>::ExecuteIfBound(longlong *param_1,undefined4 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014193b9f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00014193ba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14193ba20 ExecuteIfBound body=133 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,float,enum_ETextCommit::Type>::ExecuteIfBound
                    (longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014193ba71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00014193ba8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14193bab0 FUN_14193bab0 body=114 status=ok
// SIG undefined FUN_14193bab0(void)

void FUN_14193bab0(longlong param_1)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = DAT_1464b9ee8;
  local_20 = 0;
  local_18 = 0;
  local_27 = 1;
  SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x348),&local_28);
  local_28 = DAT_1464b9ee9;
  local_27 = 1;
  local_20 = 0;
  local_18 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x358) + 0x1b8))(*(longlong **)(param_1 + 0x358),&local_28)
  ;
  return;
}



// FUNCTION 14193bb30 FUN_14193bb30 body=1711 status=ok
// SIG undefined FUN_14193bb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14193bb30(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                 undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  wchar_t *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined4 local_188;
  uint uStack_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  undefined8 *local_170;
  longlong local_168;
  int local_15c;
  longlong local_158;
  int local_14c;
  longlong local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar4 = *(undefined8 *)*param_1;
  local_170 = param_1;
  FUN_14193c320((undefined8 *)*param_1,&local_198,param_2);
  local_1e0 = 1;
  local_1e8 = 0;
  local_1f0 = param_5;
  local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,*(undefined4 *)((longlong)param_3 + 4));
  FShapedGlyphSequence::GetGlyphAtOffset(local_198,&local_68,uVar4,*(undefined4 *)param_3);
  if (local_58 == '\0') {
    local_dc = *(undefined2 *)(param_2 + 0xc);
    local_e0 = *(undefined4 *)(param_2 + 8);
    local_b8 = *(undefined4 *)(param_2 + 0x30);
    uStack_b4 = *(undefined4 *)(param_2 + 0x34);
    uStack_b0 = *(undefined4 *)(param_2 + 0x38);
    uStack_ac = *(undefined4 *)(param_2 + 0x3c);
    local_d8 = *(undefined8 *)(param_2 + 0x10);
    local_d0 = *(undefined8 *)(param_2 + 0x18);
    local_a8 = *(undefined8 *)(param_2 + 0x40);
    local_c8 = *(undefined4 *)(param_2 + 0x20);
    uStack_c4 = *(undefined4 *)(param_2 + 0x24);
    uStack_c0 = *(undefined4 *)(param_2 + 0x28);
    uStack_bc = *(undefined4 *)(param_2 + 0x2c);
    local_a0 = *(longlong **)(param_2 + 0x48);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_98 = *(undefined8 *)(param_2 + 0x50);
    local_90 = *(undefined4 *)(param_2 + 0x58);
    local_8c = *(undefined1 *)(param_2 + 0x5c);
    local_e8 = *param_3;
    puVar13 = (undefined8 *)FUN_14193c320(*param_1,local_88,&local_e8,param_4);
    uVar5 = *puVar13;
    *puVar13 = local_198;
    plVar6 = (longlong *)puVar13[1];
    puVar13[1] = local_190;
    local_198 = uVar5;
    local_190 = plVar6;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_80 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    local_1f8 = (wchar_t *)((ulonglong)local_1f8 & 0xffffffff00000000);
    puVar14 = (undefined4 *)FShapedGlyphSequence::GetGlyphAtOffset(local_198,local_78,uVar4,param_5)
    ;
    plVar6 = local_a0;
    if (puVar14 != &local_68) {
      local_68 = *puVar14;
      uStack_64 = puVar14[1];
      iStack_60 = puVar14[2];
      iStack_5c = puVar14[3];
      local_58 = '\x01';
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  lVar7 = CONCAT44(uStack_64,local_68);
  iVar15 = iStack_5c;
  if ((lVar7 != 0) && (1 < *(byte *)(lVar7 + 0x22))) {
    iVar15 = *(int *)(lVar7 + 0x14);
    bVar3 = *(byte *)(lVar7 + 0x21);
    local_1d8 = (wchar_t *)0x0;
    local_1cc = 0;
    local_1d0 = bVar3 + 1;
    if (bVar3 == 0) {
      local_1d0 = 0;
    }
    if ((local_1d0 != 0) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0), pwVar8 = local_1d8,
       0 < local_1d0)) {
      wcsncpy(local_1d8,(wchar_t *)(param_4 + (longlong)iVar15 * 2),(ulonglong)bVar3);
      pwVar8[bVar3] = L'\0';
    }
    uVar9 = 0;
    FUN_1415d4630(&local_1c8);
    (**(code **)(*local_1c8 + 0x10))(local_1c8,&local_1d8);
    iVar15 = iStack_60;
    local_13c = *(undefined2 *)(param_2 + 0xc);
    local_140 = *(undefined4 *)(param_2 + 8);
    local_118 = *(undefined4 *)(param_2 + 0x30);
    uStack_114 = *(undefined4 *)(param_2 + 0x34);
    uStack_110 = *(undefined4 *)(param_2 + 0x38);
    uStack_10c = *(undefined4 *)(param_2 + 0x3c);
    local_138 = *(undefined8 *)(param_2 + 0x10);
    local_130 = *(undefined8 *)(param_2 + 0x18);
    local_108 = *(undefined8 *)(param_2 + 0x40);
    local_128 = *(undefined4 *)(param_2 + 0x20);
    uStack_124 = *(undefined4 *)(param_2 + 0x24);
    uStack_120 = *(undefined4 *)(param_2 + 0x28);
    uStack_11c = *(undefined4 *)(param_2 + 0x2c);
    local_100 = *(longlong **)(param_2 + 0x48);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    local_f8 = *(undefined8 *)(param_2 + 0x50);
    local_f0 = *(undefined4 *)(param_2 + 0x58);
    local_ec = *(undefined1 *)(param_2 + 0x5c);
    if (local_1d0 != 0) {
      uVar9 = local_1d0 - 1;
    }
    local_188 = 0;
    local_148 = (ulonglong)uVar9 << 0x20;
    uStack_184 = uVar9;
    if (*(char *)(CONCAT44(uStack_64,local_68) + 0x23) == '\0') {
      iVar10 = (**(code **)(*local_1c8 + 0x30))();
      iVar11 = (**(code **)(*local_1c8 + 0x48))();
      iVar12 = local_180;
      while (local_180 = iVar10, iVar11 != -1) {
        local_1f8 = L"";
        if (local_1d0 != 0) {
          local_1f8 = local_1d8;
        }
        local_1f0._1_3_ = (undefined3)((uint)local_1f0 >> 8);
        local_1f0 = CONCAT31(local_1f0._1_3_,*(undefined1 *)(CONCAT44(uStack_64,local_68) + 0x23));
        local_17c = iVar11;
        FUN_141941c50(&local_1b8,local_170,&local_148,&local_180);
        uVar5 = local_1b8;
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,iVar15);
        FShapedGlyphSequence::GetGlyphAtOffset(local_1b8,&local_168,uVar4,param_5);
        plVar6 = local_1b0;
        if (local_168 != 0) {
          iVar15 = local_15c + *(int *)(CONCAT44(uStack_64,local_68) + 0x14);
          if (local_1b0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_1b0 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_1b0)(local_1b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_1b0 + 8))(local_1b0,1);
              }
            }
          }
          goto LAB_14193c095;
        }
        iVar12 = FUN_14046e5c0(uVar5);
        plVar6 = local_1b0;
        iVar15 = iVar15 + iVar12;
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_1b0 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_1b0 + 8))(local_1b0,1);
            }
          }
        }
        iVar12 = (**(code **)(*local_1c8 + 0x48))();
        iVar10 = iVar11;
        iVar11 = iVar12;
        iVar12 = local_180;
      }
      iVar15 = (uint)*(byte *)(CONCAT44(uStack_64,local_68) + 0x21) +
               *(int *)(CONCAT44(uStack_64,local_68) + 0x14);
      local_180 = iVar12;
    }
    else {
      iVar11 = (**(code **)(*local_1c8 + 0x38))();
      iVar12 = (**(code **)(*local_1c8 + 0x40))();
      while (iVar12 != -1) {
        local_1f8 = L"";
        if (local_1d0 != 0) {
          local_1f8 = local_1d8;
        }
        local_1f0._1_3_ = (undefined3)((uint)local_1f0 >> 8);
        local_1f0 = CONCAT31(local_1f0._1_3_,*(undefined1 *)(CONCAT44(uStack_64,local_68) + 0x23));
        local_178 = iVar12;
        local_174 = iVar11;
        FUN_141941c50(&local_1a8,local_170,&local_148,&local_178);
        uVar5 = local_1a8;
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,iVar15);
        FShapedGlyphSequence::GetGlyphAtOffset(local_1a8,&local_158,uVar4,param_5);
        plVar6 = local_1a0;
        if (local_158 != 0) {
          if (iVar11 != -1) {
            local_14c = iVar11;
          }
          iVar15 = local_14c + *(int *)(CONCAT44(uStack_64,local_68) + 0x14);
          if (local_1a0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_1a0 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_1a0)(local_1a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_1a0 + 8))(local_1a0,1);
              }
            }
          }
          goto LAB_14193c095;
        }
        iVar11 = FUN_14046e5c0(uVar5);
        plVar6 = local_1a0;
        iVar15 = iVar15 + iVar11;
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_1a0 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1a0)(local_1a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_1a0 + 8))(local_1a0,1);
            }
          }
        }
        iVar10 = (**(code **)(*local_1c8 + 0x40))();
        iVar11 = iVar12;
        iVar12 = iVar10;
      }
      iVar15 = *(int *)(CONCAT44(uStack_64,local_68) + 0x14);
    }
LAB_14193c095:
    plVar6 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_100 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_1c0 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    if (local_1d8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  plVar6 = local_190;
  local_58 = 0;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_190 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return iVar15;
}



// FUNCTION 14193c1e0 FindId body=309 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x78;
        if (((((*(int *)(lVar4 + lVar1) == *param_3) && (*(int *)(lVar4 + 4 + lVar1) == param_3[1]))
             && ((float)param_3[2] == *(float *)(lVar4 + 8 + lVar1))) &&
            ((((*(char *)(lVar4 + 0xc + lVar1) == (char)param_3[3] &&
               (*(char *)(lVar4 + 0xd + lVar1) == *(char *)((longlong)param_3 + 0xd))) &&
              ((*(longlong *)(lVar4 + 0x10 + lVar1) == *(longlong *)(param_3 + 4) &&
               ((*(longlong *)(lVar4 + 0x18 + lVar1) == *(longlong *)(param_3 + 6) &&
                (*(int *)(lVar4 + 0x20 + lVar1) == param_3[8])))))) &&
             (*(char *)(lVar4 + 0x24 + lVar1) == (char)param_3[9])))) &&
           (((*(longlong *)(lVar4 + 0x40 + lVar1) == *(longlong *)(param_3 + 0x10) &&
             (*(longlong *)(lVar4 + 0x50 + lVar1) == *(longlong *)(param_3 + 0x14))) &&
            (*(int *)(lVar4 + 0x58 + lVar1) == param_3[0x16])))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x70 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14193c320 FUN_14193c320 body=507 status=ok
// SIG undefined FUN_14193c320(void)

longlong * FUN_14193c320(undefined8 *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  FUN_14193c720(param_1,&local_58);
  if (local_58 == 0) {
    FSlateFontCache::ShapeBidirectionalText
              (*param_1,&local_38,param_4,*param_3,param_3[1] - *param_3,param_3 + 4,param_3[2],
               *(undefined1 *)((longlong)param_3 + 0xd),(char)param_3[3]);
    local_28 = local_38;
    plStack_20 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    FUN_141927cb0(param_1,&local_68,param_3,&local_28);
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plStack_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    plVar5 = local_60;
    local_40 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_58 = local_68;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_40);
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar5 = local_60;
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar5 = local_60;
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          plVar5 = local_60;
        }
      }
    }
    plVar2 = local_60;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  plVar5 = local_50;
  *param_2 = local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = local_50 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14193c520 FUN_14193c520 body=507 status=ok
// SIG undefined FUN_14193c520(void)

longlong *
FUN_14193c520(undefined8 *param_1,longlong *param_2,int *param_3,undefined8 param_4,
             undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  FUN_14193c720(param_1,&local_58);
  if (local_58 == 0) {
    FSlateFontCache::ShapeUnidirectionalText
              (*param_1,&local_38,param_4,*param_3,param_3[1] - *param_3,param_3 + 4,param_3[2],
               param_5,(char)param_3[3]);
    local_28 = local_38;
    plStack_20 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    FUN_141927cb0(param_1,&local_68,param_3,&local_28);
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_30 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plStack_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    plVar5 = local_60;
    local_40 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_58 = local_68;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_40);
    plVar2 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar5 = local_60;
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar5 = local_60;
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          plVar5 = local_60;
        }
      }
    }
    plVar2 = local_60;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  plVar5 = local_50;
  *param_2 = local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = local_50 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14193c720 FUN_14193c720 body=205 status=ok
// SIG undefined FUN_14193c720(void)

longlong * FUN_14193c720(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int local_res8 [2];
  
  TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 8),local_res8);
  if ((local_res8[0] == -1) ||
     (lVar5 = (longlong)local_res8[0] * 0x78 + *(longlong *)(param_1 + 8), lVar5 == 0)) {
    lVar7 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar7 = *(longlong *)(lVar5 + 0x60);
    plVar6 = *(longlong **)(lVar5 + 0x68);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  if (lVar7 != 0) {
    cVar4 = FShapedGlyphSequence::IsDirty(lVar7);
    if (cVar4 == '\0') {
      *param_2 = lVar7;
      param_2[1] = (longlong)plVar6;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14193c7f0 FUN_14193c7f0 body=173 status=ok
// SIG undefined FUN_14193c7f0(void)

void FUN_14193c7f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [96];
  
  uVar5 = FCurveSequence::FCurveSequence(local_68,0,0x3f800000,0);
  FUN_1417f8e00(param_1 + 0x560,uVar5);
  FUN_1417f61f0(local_68);
  uVar5 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_78);
  FUN_141852100(param_1 + 0x560,uVar5,0,0);
  if (local_70 != (longlong *)0x0) {
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
  return;
}



// FUNCTION 14193c8a0 FUN_14193c8a0 body=2442 status=ok
// SIG undefined FUN_14193c8a0(void)

void FUN_14193c8a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  longlong *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res20;
  undefined8 local_208;
  undefined8 local_200;
  longlong *plStack_1f8;
  float local_1f0;
  undefined8 local_1e8;
  int local_1e0;
  int iStack_1dc;
  int local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  undefined8 local_1a8;
  longlong *local_1a0;
  int local_198;
  int iStack_194;
  int *local_190;
  longlong *local_188;
  int *local_180;
  longlong *local_178;
  int *local_170;
  longlong *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [24];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  longlong *local_f8;
  undefined1 local_e8 [16];
  longlong *local_d8;
  longlong *local_b8;
  undefined1 local_a8 [16];
  longlong *local_98;
  
  plVar22 = *(longlong **)(param_1 + 0x28);
  local_178 = plVar22 + (longlong)*(int *)(param_1 + 0x30) * 0xb;
  if (plVar22 != local_178) {
    do {
      iVar15 = (int)plVar22[3];
      plVar20 = plVar22 + 2;
      local_188 = plVar22;
      if (iVar15 != 0) {
        plVar17 = (longlong *)(*plVar20 + 0x10);
        do {
          plVar18 = (longlong *)*plVar17;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar18 + 1;
            lVar19 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar16 = (int *)((longlong)plVar18 + 0xc);
              iVar14 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18);
              }
            }
          }
          plVar17 = plVar17 + 3;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      *(undefined4 *)(plVar22 + 3) = 0;
      if (*(int *)((longlong)plVar22 + 0x1c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar20);
      }
      iVar15 = (int)plVar22[5];
      plVar17 = plVar22 + 4;
      if (iVar15 != 0) {
        plVar18 = (longlong *)(*plVar17 + 0x10);
        do {
          plVar5 = (longlong *)*plVar18;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar19 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar16 = (int *)((longlong)plVar5 + 0xc);
              iVar14 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
          plVar18 = plVar18 + 3;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      *(undefined4 *)(plVar22 + 5) = 0;
      if (*(int *)((longlong)plVar22 + 0x2c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar17);
      }
      lVar19 = (longlong)*(int *)((longlong)plVar22 + 0x54) * 0x70 + *(longlong *)(param_1 + 0x18);
      plVar18 = *(longlong **)(lVar19 + 0x18);
      local_1a8 = *(undefined8 *)(lVar19 + 0x10);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      local_1af = *(undefined1 *)(lVar19 + 0x20);
      local_1b0 = *(undefined1 *)(param_1 + 0x89);
      local_1a0 = plVar18;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar18 + 1;
        lVar11 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar16 = (int *)((longlong)plVar18 + 0xc);
          iVar15 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
        }
      }
      piVar16 = *(int **)(lVar19 + 0x58);
      local_180 = piVar16 + (longlong)*(int *)(lVar19 + 0x60) * 8;
      local_190 = piVar16;
      if (piVar16 != local_180) {
        do {
          if (*piVar16 == *(int *)((longlong)plVar22 + 0x54)) {
            iVar15 = (int)plVar22[9];
            iVar14 = *(int *)((longlong)plVar22 + 0x4c);
            local_198 = piVar16[1];
            if (piVar16[1] <= iVar15) {
              local_198 = iVar15;
            }
            iStack_194 = piVar16[2];
            if (iVar14 <= piVar16[2]) {
              iStack_194 = iVar14;
            }
            if (local_198 < iStack_194) {
              local_1e8 = CONCAT44(iStack_194,local_198);
              iVar21 = local_198;
            }
            else {
              local_1e8 = 0;
              iVar21 = 0;
            }
            iVar9 = (int)((ulonglong)local_1e8 >> 0x20);
            if ((0 < iVar9 - iVar21) || ((iVar21 == iVar15 && (iVar9 == iVar14)))) {
              local_1c8 = *(longlong **)(piVar16 + 6);
              local_200 = *(undefined8 *)(piVar16 + 4);
              local_208 = 0;
              plStack_1f8 = (longlong *)0x0;
              if (local_1c8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
                UNLOCK();
              }
              local_1d0 = 0;
              local_190 = piVar16;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1f8);
              plVar18 = local_1c8;
              if (local_1c8 != (longlong *)0x0) {
                LOCK();
                plVar5 = local_1c8 + 1;
                lVar19 = *plVar5;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)lVar19 == 1) {
                  (**(code **)*local_1c8)(local_1c8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  iVar15 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*local_1c8 + 8))();
                  }
                }
              }
              local_160 = &local_208;
              local_1f0 = (float)local_208;
              local_158 = &local_1e8;
              bVar8 = false;
              local_res20 = 0;
              local_170 = piVar16;
              local_168 = plVar22;
              if (0 < (int)plVar22[1]) {
                lVar19 = 0;
                do {
                  lVar11 = *plVar22;
                  (**(code **)(**(longlong **)(lVar19 + lVar11) + 0x10))
                            (*(longlong **)(lVar19 + lVar11),&local_1e0);
                  (**(code **)(**(longlong **)(lVar19 + lVar11) + 8))
                            (*(longlong **)(lVar19 + lVar11),&local_1c0);
                  fVar23 = local_1f0;
                  pfVar10 = (float *)(**(code **)(**(longlong **)(lVar19 + lVar11) + 0x18))
                                               (*(longlong **)(lVar19 + lVar11),local_150);
                  local_1f0 = fVar23 + *pfVar10;
                  iVar15 = (int)local_1e8;
                  if ((int)local_1e8 <= local_1e0) {
                    iVar15 = local_1e0;
                  }
                  iVar14 = local_1e8._4_4_;
                  if (iStack_1dc <= local_1e8._4_4_) {
                    iVar14 = iStack_1dc;
                  }
                  iVar21 = 0;
                  if (iVar15 < iVar14) {
                    iVar21 = iVar15;
                  }
                  iVar9 = 0;
                  if (iVar15 < iVar14) {
                    iVar9 = iVar14;
                  }
                  local_1d8 = iVar9 - iVar21;
                  if ((local_1d8 < 1) && ((iVar21 != (int)local_1e8 || (iVar9 != local_1e8._4_4_))))
                  {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if ((iVar21 == local_1e0) && (iVar9 == iStack_1dc)) {
                    bVar7 = true;
                  }
                  else {
                    bVar7 = false;
                  }
                  if (bVar6) {
                    if (bVar8) {
                      bVar6 = local_208._4_4_ + (float)local_208 < fVar23;
                      if (bVar7) {
                        if (bVar6) {
                          <lambda_0a68dc0a405486ed1d07269622e39ccb>::operator()(&local_170);
                          local_208 = (ulonglong)(uint)fVar23;
                        }
                        pfVar10 = (float *)(**(code **)(**(longlong **)(lVar19 + lVar11) + 0x18))();
                        local_208 = CONCAT44(local_208._4_4_ + *pfVar10,(float)local_208);
                      }
                      else {
                        plVar22 = *(longlong **)(lVar19 + lVar11);
                        fVar24 = 0.0;
                        lVar12 = (**(code **)(*plVar22 + 0x20))(plVar22,local_e8);
                        lVar13 = (**(code **)(*plVar22 + 0x20))(plVar22);
                        plVar22 = local_d8;
                        cVar3 = *(char *)(lVar12 + 0x18);
                        cVar4 = *(char *)(lVar13 + 1);
                        if (local_d8 != (longlong *)0x0) {
                          LOCK();
                          plVar20 = local_d8 + 1;
                          lVar12 = *plVar20;
                          *(int *)plVar20 = (int)*plVar20 + -1;
                          UNLOCK();
                          if ((int)lVar12 == 1) {
                            (**(code **)*local_d8)(local_d8);
                            LOCK();
                            piVar16 = (int *)((longlong)plVar22 + 0xc);
                            iVar15 = *piVar16;
                            *piVar16 = *piVar16 + -1;
                            UNLOCK();
                            if (iVar15 == 1) {
                              (**(code **)(*plVar22 + 8))(plVar22);
                            }
                          }
                        }
                        plVar22 = local_b8;
                        if (local_b8 != (longlong *)0x0) {
                          LOCK();
                          plVar20 = local_b8 + 1;
                          lVar12 = *plVar20;
                          *(int *)plVar20 = (int)*plVar20 + -1;
                          UNLOCK();
                          if ((int)lVar12 == 1) {
                            (**(code **)*local_b8)(local_b8);
                            LOCK();
                            piVar16 = (int *)((longlong)plVar22 + 0xc);
                            iVar15 = *piVar16;
                            *piVar16 = *piVar16 + -1;
                            UNLOCK();
                            if (iVar15 == 1) {
                              (**(code **)(*plVar22 + 8))(plVar22);
                            }
                          }
                        }
                        if (cVar3 != cVar4) {
                          lVar11 = (**(code **)(**(longlong **)(lVar19 + lVar11) + 0x20))
                                             (*(longlong **)(lVar19 + lVar11),local_a8);
                          plVar22 = local_98;
                          cVar3 = *(char *)(lVar11 + 0x18);
                          if (local_98 != (longlong *)0x0) {
                            LOCK();
                            plVar20 = local_98 + 1;
                            lVar11 = *plVar20;
                            *(int *)plVar20 = (int)*plVar20 + -1;
                            UNLOCK();
                            if ((int)lVar11 == 1) {
                              (**(code **)*local_98)(local_98);
                              LOCK();
                              piVar16 = (int *)((longlong)plVar22 + 0xc);
                              iVar15 = *piVar16;
                              *piVar16 = *piVar16 + -1;
                              UNLOCK();
                              if (iVar15 == 1) {
                                (**(code **)(*plVar22 + 8))(plVar22,1);
                              }
                            }
                          }
                          if (cVar3 == '\0') {
                            pfVar10 = (float *)(**(code **)(*local_1c0 + 0x28))
                                                         (local_1c0,local_120,local_1e0,iVar21);
                            fVar24 = *pfVar10;
                          }
                          else {
                            pfVar10 = (float *)(**(code **)(*local_1c0 + 0x28))
                                                         (local_1c0,local_118,iVar9,iStack_1dc,
                                                          *(undefined4 *)(param_1 + 0x8c),&local_1b0
                                                         );
                            fVar24 = *pfVar10;
                          }
                        }
                        fVar25 = 0.0;
                        if (0 < local_1d8) {
                          pfVar10 = (float *)(**(code **)(*local_1c0 + 0x28))
                                                       (local_1c0,local_110,iVar21,iVar9,
                                                        *(undefined4 *)(param_1 + 0x8c),&local_1b0);
                          fVar25 = *pfVar10;
                        }
                        if ((!bVar6) && (fVar24 == 0.0)) {
                          local_208 = CONCAT44(local_208._4_4_ + fVar25,(float)local_208);
                          <lambda_0a68dc0a405486ed1d07269622e39ccb>::operator()(&local_170);
                          goto LAB_14193d015;
                        }
                        <lambda_0a68dc0a405486ed1d07269622e39ccb>::operator()(&local_170);
                        local_208 = CONCAT44(fVar25,fVar24 + fVar23);
                      }
                    }
                    else {
                      local_208 = CONCAT44(local_208._4_4_,fVar23);
                      bVar8 = true;
                      if (0 < local_1d8) {
                        pfVar10 = (float *)(**(code **)(*local_1c0 + 0x28))
                                                     (local_1c0,local_148,iVar21,iVar9,
                                                      *(undefined4 *)(param_1 + 0x8c),&local_1b0);
                        local_208 = CONCAT44(local_208._4_4_ + *pfVar10,(float)local_208);
                        lVar11 = (**(code **)(**(longlong **)(lVar19 + lVar11) + 0x20))
                                           (*(longlong **)(lVar19 + lVar11),local_108);
                        plVar22 = local_f8;
                        cVar3 = *(char *)(lVar11 + 0x18);
                        if (local_f8 != (longlong *)0x0) {
                          LOCK();
                          plVar20 = local_f8 + 1;
                          lVar11 = *plVar20;
                          *(int *)plVar20 = (int)*plVar20 + -1;
                          UNLOCK();
                          if ((int)lVar11 == 1) {
                            (**(code **)*local_f8)(local_f8);
                            LOCK();
                            piVar16 = (int *)((longlong)plVar22 + 0xc);
                            iVar15 = *piVar16;
                            *piVar16 = *piVar16 + -1;
                            UNLOCK();
                            if (iVar15 == 1) {
                              (**(code **)(*plVar22 + 8))(plVar22,1);
                            }
                          }
                        }
                        if (cVar3 == '\0') {
                          pfVar10 = (float *)(**(code **)(*local_1c0 + 0x28))
                                                       (local_1c0,local_140,local_1e0,iVar21);
                          fVar23 = (float)local_208 + *pfVar10;
                        }
                        else {
                          pfVar10 = (float *)(**(code **)(*local_1c0 + 0x28))
                                                       (local_1c0,local_138,iVar9,iStack_1dc,
                                                        *(undefined4 *)(param_1 + 0x8c),&local_1b0);
                          fVar23 = (float)local_208 + *pfVar10;
                        }
                        goto LAB_14193d023;
                      }
                    }
                  }
                  else {
                    <lambda_0a68dc0a405486ed1d07269622e39ccb>::operator()(&local_170);
LAB_14193d015:
                    local_208 = 0;
                    fVar23 = local_1f0;
LAB_14193d023:
                    local_208 = CONCAT44(local_208._4_4_,fVar23);
                  }
                  plVar22 = local_1b8;
                  if (local_1b8 != (longlong *)0x0) {
                    LOCK();
                    plVar20 = local_1b8 + 1;
                    lVar11 = *plVar20;
                    *(int *)plVar20 = (int)*plVar20 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*local_1b8)(local_1b8);
                      LOCK();
                      piVar16 = (int *)((longlong)plVar22 + 0xc);
                      iVar15 = *piVar16;
                      *piVar16 = *piVar16 + -1;
                      UNLOCK();
                      if (iVar15 == 1) {
                        (**(code **)(*plVar22 + 8))(plVar22);
                      }
                    }
                  }
                  local_res20 = local_res20 + 1;
                  lVar19 = lVar19 + 0x10;
                  plVar22 = local_188;
                } while (local_res20 < (int)local_188[1]);
                plVar17 = local_188 + 4;
                plVar20 = local_188 + 2;
                piVar16 = local_190;
              }
              if ((local_1e8._4_4_ - (int)local_1e8 < 1) || (0.0 < local_208._4_4_)) {
                if (piVar16[3] < 0) {
                  iVar15 = (int)plVar20[1];
                  *(int *)(plVar20 + 1) = iVar15 + 1;
                  if (*(int *)((longlong)plVar20 + 0xc) < iVar15 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar20,iVar15);
                  }
                  lVar19 = *plVar20;
                }
                else {
                  iVar15 = (int)plVar17[1];
                  *(int *)(plVar17 + 1) = iVar15 + 1;
                  if (*(int *)((longlong)plVar17 + 0xc) < iVar15 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar17,iVar15);
                  }
                  lVar19 = *plVar17;
                }
                lVar11 = (longlong)iVar15;
                *(float *)(lVar19 + lVar11 * 0x18) = (float)local_208;
                *(float *)(lVar19 + 4 + lVar11 * 0x18) = local_208._4_4_;
                *(undefined8 *)(lVar19 + 8 + lVar11 * 0x18) = local_200;
                *(longlong **)(lVar19 + 0x10 + lVar11 * 0x18) = plStack_1f8;
                if (plStack_1f8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_1f8 + 1) = (int)plStack_1f8[1] + 1;
                  UNLOCK();
                }
              }
              plVar18 = plStack_1f8;
              if (plStack_1f8 != (longlong *)0x0) {
                LOCK();
                plVar5 = plStack_1f8 + 1;
                lVar19 = *plVar5;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)lVar19 == 1) {
                  (**(code **)*plStack_1f8)(plStack_1f8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  iVar15 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar18 + 8))(plVar18);
                  }
                }
              }
            }
          }
          piVar16 = piVar16 + 8;
          local_190 = piVar16;
        } while (piVar16 != local_180);
      }
      plVar20 = local_1a0;
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_1a0 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar16 = (int *)((longlong)plVar20 + 0xc);
          iVar15 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20);
          }
        }
      }
      plVar22 = plVar22 + 0xb;
    } while (plVar22 != local_178);
  }
  return;
}



// FUNCTION 14193d230 FUN_14193d230 body=2399 status=ok
// SIG undefined FUN_14193d230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14193d230(longlong param_1,uint param_2,float param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  byte bVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  float *local_188;
  int *local_180;
  undefined4 *local_178;
  int *local_170;
  longlong *local_168;
  int local_158;
  int local_154;
  int local_150;
  uint local_14c;
  int local_148;
  int local_144;
  undefined4 local_140 [2];
  longlong local_138;
  int local_130;
  longlong local_128;
  wchar_t *local_120;
  int local_118;
  undefined4 local_114;
  int local_110;
  longlong *local_108;
  longlong local_100;
  int local_f8;
  int local_f4;
  int local_ec;
  int local_e4;
  int local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  float local_b8;
  undefined1 local_b4;
  float local_b0;
  undefined1 local_ac;
  float local_a8;
  undefined1 local_a4;
  undefined1 local_a0 [4];
  undefined1 local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar14 = (ulonglong)(int)param_2;
  local_140[0] = 0;
  puVar15 = (undefined8 *)(uVar14 * 0x70 + *(longlong *)(param_1 + 0x18));
  local_158 = 0;
  local_154 = 0;
  if (*(int *)(puVar15 + 10) < 1) {
    local_140[0] = 0xffffffff;
  }
  local_14c = param_2;
  local_138 = param_1;
  local_108 = param_4;
  if ((*(float *)(param_1 + 0x90) <= 0.0) || (iVar9 = *(int *)(puVar15 + 8), iVar9 == 0)) {
    local_170 = &local_154;
    local_178 = local_140;
    local_9c = 0;
    local_180 = &local_158;
    local_188 = (float *)local_a0;
    local_168 = param_4;
    FUN_141939760(param_1,param_2,0xffffffff,0);
    TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(param_4,0);
  }
  else {
    local_130 = 0;
    if (0 < iVar9) {
      local_100 = 0;
      fVar21 = 0.0;
      do {
        lVar10 = local_100;
        iVar16 = local_130;
        lVar18 = puVar15[7];
        local_110 = local_130 + 1;
        local_128 = lVar18 + local_100 * 0x28;
        if (fVar21 != 0.0) {
          bVar6 = 0;
        }
        else {
          bVar6 = *(byte *)(local_128 + 0x24);
        }
        bVar19 = fVar21 == 0.0;
        fVar20 = fVar21 + *(float *)(local_128 + 0x10);
        fVar22 = (float)bVar6;
        bVar4 = *(float *)(local_128 + 0x18) + fVar21 + fVar22 <= param_3;
        if (((*(char *)(param_1 + 0x94) != '\x01') || (bVar4)) || (!bVar19)) {
          if ((param_3 < fVar22 + fVar20) || (local_110 == iVar9)) {
            if ((local_130 == 0) || ((bVar19 || (bVar4)))) {
              lVar10 = local_128;
              lVar17 = local_100;
              iVar9 = local_130;
              if (!bVar4) goto LAB_14193da6b;
              fVar20 = *(float *)(local_128 + 0x18) + *(float *)(local_128 + 0x1c) + fVar21;
            }
            else {
              lVar10 = lVar18 + (longlong)(local_130 + -1) * 0x28;
              lVar17 = local_100 + -1;
              iVar9 = local_130 + -1;
LAB_14193da6b:
              fVar20 = fVar21 + *(float *)(lVar10 + 0x10);
              if (param_3 <= fVar20) {
                fVar20 = param_3;
              }
            }
            local_b4 = 0;
            if (lVar10 != lVar18 + (longlong)(*(int *)(puVar15 + 8) + -1) * 0x28) {
              if (lVar10 == local_128) {
                fVar22 = 0.0;
              }
              else {
                fVar22 = *(float *)(lVar10 + 0x10);
              }
              local_b4 = 1;
              local_b8 = (fVar21 - fVar22) + *(float *)(lVar10 + 0x18);
            }
            local_170 = &local_154;
            local_178 = local_140;
            local_180 = &local_158;
            local_188 = &local_b8;
            local_168 = param_4;
            FUN_141939760(param_1,uVar14 & 0xffffffff,*(undefined4 *)(lVar10 + 4),fVar20);
            if ((local_158 < *(int *)(puVar15 + 6)) &&
               ((**(code **)(**(longlong **)(puVar15[5] + (longlong)local_158 * 0x30) + 8))(),
               *(int *)(lVar10 + 4) == local_dc)) {
              local_158 = local_158 + 1;
            }
            local_154 = *(int *)(lVar10 + 4);
            fVar20 = 0.0;
            TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(param_4);
            local_b4 = 0;
            local_100 = lVar17;
            local_130 = iVar9;
          }
        }
        else {
          plVar13 = (longlong *)puVar15[3];
          local_d0 = puVar15[2];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_d8 = *(undefined1 *)(param_1 + 0x89);
          local_d7 = *(undefined1 *)(puVar15 + 4);
          local_c8 = plVar13;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar13 + 1;
            lVar18 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13);
              }
            }
          }
          local_148 = local_154;
          if (*(int *)((undefined8 *)*puVar15 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)*puVar15;
          }
          iVar9 = *(int *)(local_128 + 0xc) - local_154;
          local_120 = (wchar_t *)0x0;
          local_114 = 0;
          local_118 = iVar9 + 1;
          if (iVar9 == 0) {
            local_118 = 0;
          }
          if ((0 < local_118) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120), pwVar5 = local_120,
             0 < local_118)) {
            wcsncpy(local_120,puVar12 + local_148,(longlong)iVar9);
            pwVar5[iVar9] = L'\0';
          }
          param_1 = local_138;
          (**(code **)(**(longlong **)(local_138 + 0xe0) + 0x10))();
          local_144 = 0;
          iVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x48))();
          fVar20 = 0.0;
          iVar9 = 0;
          while (local_150 = iVar7, iVar7 != -1) {
            uVar14 = (ulonglong)local_158;
            fVar21 = 0.0;
            if (local_158 < *(int *)(puVar15 + 6)) {
              lVar18 = uVar14 * 0x30;
              do {
                lVar10 = puVar15[5];
                (**(code **)(**(longlong **)(lVar18 + lVar10) + 8))
                          (*(longlong **)(lVar18 + lVar10),&local_f8);
                plVar13 = *(longlong **)(lVar18 + lVar10);
                plVar3 = *(longlong **)(lVar18 + 8 + lVar10);
                if (iVar9 <= local_f8 - local_148) {
                  iVar9 = local_f8 - local_148;
                }
                iVar16 = iVar7;
                if (local_f4 - local_148 <= iVar7) {
                  iVar16 = local_f4 - local_148;
                }
                if (iVar16 <= iVar9) {
                  iVar16 = iVar9;
                }
                if (plVar3 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                  UNLOCK();
                }
                local_180 = (int *)&local_d8;
                local_188 = (float *)CONCAT44(local_188._4_4_,*(undefined4 *)(local_138 + 0x8c));
                pfVar8 = (float *)(**(code **)(*plVar13 + 0x28))
                                            (plVar13,local_c0,iVar9 + local_148,iVar16 + local_148);
                fVar21 = fVar21 + *pfVar8;
                if (plVar3 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar3 + 1;
                  lVar10 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar3)(plVar3);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar3 + 0xc);
                    iVar9 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
                param_4 = local_108;
                iVar9 = local_144;
              } while ((iVar16 != iVar7) &&
                      (uVar11 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar11,
                      (int)uVar11 < *(int *)(puVar15 + 6)));
            }
            iVar7 = 0;
            bVar4 = true;
            if (local_118 != 0) {
              iVar7 = local_118 + -1;
            }
            bVar19 = local_150 == iVar7;
            fVar21 = fVar21 + fVar20;
            if (fVar21 <= param_3) {
              if (local_150 != iVar7) goto LAB_14193d928;
              if ((*(int *)(puVar15 + 8) <= local_110) ||
                 (param_1 = local_138, lVar10 = local_100, iVar16 = local_130,
                 param_3 < fVar21 + *(float *)(puVar15[7] + 0x40 + local_100 * 0x28) + fVar22))
              goto LAB_14193d626;
              break;
            }
LAB_14193d626:
            if (local_150 == iVar7) {
              if ((fVar21 <= param_3) || (fVar20 == 0.0)) {
                bVar19 = false;
                iVar9 = *(int *)(local_128 + 4);
              }
              else {
LAB_14193d657:
                bVar4 = false;
                iVar9 = local_148 + iVar9;
              }
            }
            else {
              if (fVar20 != 0.0) goto LAB_14193d657;
              iVar9 = local_148 + local_150;
            }
            local_170 = &local_154;
            local_178 = local_140;
            local_180 = &local_158;
            local_188 = &local_b0;
            local_ac = 0;
            local_168 = param_4;
            FUN_141939760(local_138,local_14c,iVar9,fVar20);
            local_ac = 0;
            if ((local_158 < *(int *)(puVar15 + 6)) &&
               ((**(code **)(**(longlong **)(puVar15[5] + (longlong)local_158 * 0x30) + 8))(),
               iVar9 == local_ec)) {
              local_158 = local_158 + 1;
            }
            iVar16 = *(int *)((longlong)param_4 + 0xc);
            fVar21 = 0.0;
            iVar7 = (int)param_4[1];
            local_154 = iVar9;
            if (iVar16 < 0) {
              if (iVar7 != 0) {
                plVar13 = (longlong *)(*param_4 + 8);
                do {
                  plVar3 = (longlong *)*plVar13;
                  if (plVar3 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar3 + 1;
                    lVar18 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar18 == 1) {
                      (**(code **)*plVar3)(plVar3);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar3 + 0xc);
                      iVar9 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar9 == 1) {
                        (**(code **)(*plVar3 + 8))(plVar3);
                      }
                    }
                  }
                  plVar13 = plVar13 + 2;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                iVar16 = *(int *)((longlong)param_4 + 0xc);
              }
              *(undefined4 *)(param_4 + 1) = 0;
              if (iVar16 != 0) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_4);
              }
            }
            else {
              if (iVar7 != 0) {
                plVar13 = (longlong *)(*param_4 + 8);
                do {
                  plVar3 = (longlong *)*plVar13;
                  if (plVar3 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar3 + 1;
                    lVar18 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar18 == 1) {
                      (**(code **)*plVar3)(plVar3);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar3 + 0xc);
                      iVar9 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar9 == 1) {
                        (**(code **)(*plVar3 + 8))(plVar3);
                      }
                    }
                  }
                  plVar13 = plVar13 + 2;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              *(undefined4 *)(param_4 + 1) = 0;
            }
            if (bVar19) {
              iVar9 = *(int *)(local_128 + 4);
              local_170 = &local_154;
              local_178 = local_140;
              local_a4 = 0;
              local_180 = &local_158;
              local_188 = &local_a8;
              local_168 = param_4;
              FUN_141939760(local_138,local_14c,iVar9,0);
              local_a4 = 0;
              if ((local_158 < *(int *)(puVar15 + 6)) &&
                 ((**(code **)(**(longlong **)(puVar15[5] + (longlong)local_158 * 0x30) + 8))(),
                 iVar9 == local_e4)) {
                local_158 = local_158 + 1;
              }
              iVar16 = *(int *)((longlong)param_4 + 0xc);
              fVar21 = 0.0;
              iVar7 = (int)param_4[1];
              local_154 = iVar9;
              if (iVar16 < 0) {
                if (iVar7 != 0) {
                  plVar13 = (longlong *)(*param_4 + 8);
                  do {
                    plVar3 = (longlong *)*plVar13;
                    if (plVar3 != (longlong *)0x0) {
                      LOCK();
                      plVar2 = plVar3 + 1;
                      lVar18 = *plVar2;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)lVar18 == 1) {
                        (**(code **)*plVar3)(plVar3);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar3 + 0xc);
                        iVar9 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          (**(code **)(*plVar3 + 8))(plVar3);
                        }
                      }
                    }
                    plVar13 = plVar13 + 2;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                  iVar16 = *(int *)((longlong)local_108 + 0xc);
                  param_4 = local_108;
                }
                *(undefined4 *)(param_4 + 1) = 0;
                if (iVar16 != 0) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_4);
                }
              }
              else {
                if (iVar7 != 0) {
                  plVar13 = (longlong *)(*param_4 + 8);
                  do {
                    plVar3 = (longlong *)*plVar13;
                    if (plVar3 != (longlong *)0x0) {
                      LOCK();
                      plVar2 = plVar3 + 1;
                      lVar18 = *plVar2;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)lVar18 == 1) {
                        (**(code **)*plVar3)(plVar3);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar3 + 0xc);
                        iVar9 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar9 == 1) {
                          (**(code **)(*plVar3 + 8))(plVar3);
                        }
                      }
                    }
                    plVar13 = plVar13 + 2;
                    iVar7 = iVar7 + -1;
                    param_4 = local_108;
                  } while (iVar7 != 0);
                }
                *(undefined4 *)(param_4 + 1) = 0;
              }
              goto LAB_14193d928;
            }
            fVar20 = fVar21;
            iVar7 = local_150;
            iVar9 = local_144;
            param_1 = local_138;
            iVar16 = local_130;
            lVar10 = local_100;
            if (bVar4) {
LAB_14193d928:
              iVar9 = local_150;
              local_144 = local_150;
              iVar7 = (**(code **)(**(longlong **)(local_138 + 0xe0) + 0x48))();
              fVar20 = fVar21;
              param_1 = local_138;
              iVar16 = local_130;
              lVar10 = local_100;
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x20))();
          if (local_120 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          plVar13 = local_c8;
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_c8 + 1;
            lVar18 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13);
              }
            }
          }
          uVar14 = (ulonglong)local_14c;
          local_100 = lVar10;
          local_130 = iVar16;
        }
        iVar9 = *(int *)(puVar15 + 8);
        local_130 = local_130 + 1;
        local_100 = local_100 + 1;
        fVar21 = fVar20;
      } while (local_130 < iVar9);
    }
  }
  return;
}



// FUNCTION 14193dba0 Fraction body=73 status=ok
// SIG undefined Fraction(void)

undefined8 SSpinBox<float>::Fraction(double param_1,float param_2,float param_3)

{
  double dVar1;
  
  dVar1 = (param_1 * 0.5 - (double)param_2 * 0.5) / ((double)param_3 * 0.5 - (double)param_2 * 0.5);
  if (dVar1 < 0.0) {
    return 0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}



// FUNCTION 14193dbf0 FUN_14193dbf0 body=313 status=ok
// SIG undefined FUN_14193dbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_14193dbf0(undefined8 param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  double local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f4a98) {
    _Init_thread_header(&DAT_1469f4a98);
    if (DAT_1469f4a98 == -1) {
      FUN_14161e1d0(&DAT_1469f4850);
      atexit((_func_5014 *)&LAB_143e83740);
      _Init_thread_footer(&DAT_1469f4a98);
    }
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  FUN_1416266e0(&DAT_1469f4850,local_58,puVar5,(double)*param_4);
  if ((local_30 == '\0') || (local_40 != '\0')) {
    *(undefined1 *)(param_2 + 1) = 0;
    local_30 = 0;
    if (local_40 != '\0') {
      local_40 = 0;
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
  }
  else {
    *param_2 = (float)local_38;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



// FUNCTION 14193dd30 FUN_14193dd30 body=2219 status=ok
// SIG undefined FUN_14193dd30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14193dd30(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_728 [32];
  longlong local_708;
  longlong local_700;
  undefined4 local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  longlong local_6e0;
  undefined1 local_6d8;
  undefined1 local_6d0;
  longlong local_6c8;
  longlong local_6b8;
  longlong *local_6b0;
  longlong *plStack_6a8;
  undefined8 *local_6a0;
  longlong local_698;
  longlong *local_690;
  undefined8 local_688;
  longlong *local_680;
  longlong local_678;
  longlong *local_670;
  longlong local_668;
  longlong *local_660;
  undefined8 local_658;
  longlong *local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_608 [8];
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  local_6b8 = param_1;
  local_6a0 = param_3;
  if (((*(int *)(param_1 + 0x500) == 0) || (*(longlong **)(param_1 + 0x4f8) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))(), cVar3 == '\0')) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"SListView",L"BrokenUIMessage"
                      );
    FText::FText(local_648,uVar6);
    local_630 = 1;
    local_628 = 0;
    local_620 = 0;
    lVar7 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar7 + 0x108,local_648);
    *(undefined1 *)(lVar7 + 0x120) = local_630;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x128,&local_628);
    plVar8 = (longlong *)operator_new(0x660);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144043520;
      if (plVar8 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar10 = plVar8 + 2;
    local_5f8 = plVar10;
    local_5f0 = plVar8;
    FUN_14044f790(&local_5f8,plVar10);
    local_708 = 0x650;
    SWidget::SetDebugInfo
              (plVar10,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Views/SListView.h",
               0x42d);
    local_6f8 = *(undefined4 *)(lVar7 + 0x90);
    local_6c8 = lVar7 + 0xf8;
    local_6e0 = lVar7 + 0xe8;
    local_6d0 = *(undefined1 *)(lVar7 + 0xf1);
    local_6e8 = lVar7 + 200;
    local_6f0 = lVar7 + 0x98;
    local_6d8 = *(undefined1 *)(lVar7 + 0xf0);
    local_700 = lVar7 + 0x78;
    local_708 = lVar7 + 0x60;
    SWidget::SWidgetConstruct(plVar10,lVar7,lVar7 + 0x30,lVar7 + 0x40);
    FUN_1419b0120(plVar10,lVar7);
    if (((char)plVar8[5] < '\0') ||
       (cVar3 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar3 != '\0')) {
      bVar4 = 1;
    }
    else {
      bVar4 = 0;
    }
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar4;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_698 = FUN_14068ed70(local_598);
    pplVar9 = (longlong **)(local_698 + 0x1a8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_6b0 = plVar10;
    plStack_6a8 = plVar8;
    if (&local_6b0 != pplVar9) {
      local_6b0 = *pplVar9;
      plStack_6a8 = *(longlong **)(local_698 + 0x1b0);
      *pplVar9 = plVar10;
      *(longlong **)(local_698 + 0x1b0) = plVar8;
      local_5b0 = plVar10;
      plStack_5a8 = plVar8;
    }
    plVar10 = plStack_6a8;
    if (plStack_6a8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_6a8 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_6a8)(plStack_6a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_6a8 + 8))(plStack_6a8,1);
        }
      }
    }
    plVar10 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_6b8 + 8,local_608);
    local_668 = *plVar10;
    local_660 = (longlong *)plVar10[1];
    if (local_660 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_660 + 1) = (int)local_660[1] + 1;
      UNLOCK();
    }
    if (local_600 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_600 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_600)(local_600);
        LOCK();
        piVar1 = (int *)((longlong)local_600 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_600 + 8))(local_600,1);
        }
      }
    }
    local_690 = &local_668;
    plVar11 = (longlong *)FUN_1418cc0b0();
    local_5e0 = plVar11 + 2;
    local_5d8 = plVar11;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_5e0,local_5e0);
    local_708 = 0x440;
    SWidget::SetDebugInfo
              (plVar11 + 3,"STableRow<ItemType>",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Views/SListView.h",
               0x42a);
    local_6f8 = *(undefined4 *)(local_698 + 0x90);
    local_6c8 = local_698 + 0xf8;
    local_6e0 = local_698 + 0xe8;
    local_6d0 = *(undefined1 *)(local_698 + 0xf1);
    local_6e8 = local_698 + 200;
    local_6f0 = local_698 + 0x98;
    local_6d8 = *(undefined1 *)(local_698 + 0xf0);
    local_700 = local_698 + 0x78;
    local_708 = local_698 + 0x60;
    SWidget::SWidgetConstruct(plVar11 + 3,local_698,local_698 + 0x30,local_698 + 0x40);
    lVar7 = local_698;
    plVar10 = (longlong *)local_690[1];
    local_6b8 = *local_690;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_678 = local_6b8;
    local_670 = plVar10;
    FUN_141935d90(plVar11 + 2,local_698,&local_678);
    (**(code **)(plVar11[2] + 0x78))
              (plVar11 + 2,*(undefined4 *)(local_6b8 + 0x2f8),lVar7 + 0x178,lVar7 + 0x1a8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (((char)plVar11[6] < '\0') ||
       (cVar3 = (**(code **)(plVar11[3] + 0x1e8))(plVar11 + 3), cVar3 != '\0')) {
      bVar4 = 1;
    }
    else {
      bVar4 = 0;
    }
    *(byte *)((longlong)plVar11 + 0x31) = *(byte *)((longlong)plVar11 + 0x31) & 0xfe;
    *(byte *)((longlong)plVar11 + 0x31) = *(byte *)((longlong)plVar11 + 0x31) | bVar4;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar11 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    plVar10 = local_660;
    if (local_660 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_660 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_660)(local_660);
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
    FUN_140690c40(local_598);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
      LOCK();
      plVar10 = plVar8 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
      LOCK();
      plVar10 = plVar8 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_640 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    *param_2 = (longlong)(plVar11 + 2);
    param_2[1] = (longlong)plVar11;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar11 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    plVar8 = (longlong *)local_6a0[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return param_2;
  }
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_618)
  ;
  plVar8 = (longlong *)puVar5[1];
  local_6b8 = *puVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_610 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)local_610 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_610 + 8))(local_610,1);
      }
    }
  }
  plVar10 = plVar8 + 1;
  local_688 = local_6b8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar10 = (int)*plVar10 + 1;
    UNLOCK();
  }
  plVar11 = (longlong *)local_6a0[1];
  local_658 = *local_6a0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x500) == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x4f8);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_680 = plVar8;
  local_650 = plVar11;
  (**(code **)(*plVar12 + 0x38))(plVar12,param_2,&local_658,&local_688);
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = local_680;
  if (local_680 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_680 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_680)(local_680);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar8 = (longlong *)local_6a0[1];
  if (plVar8 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar10 = plVar8 + 1;
  lVar7 = *plVar10;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return param_2;
  }
  (**(code **)*plVar8)(plVar8);
  LOCK();
  piVar1 = (int *)((longlong)plVar8 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return param_2;
  }
  (**(code **)(*plVar8 + 8))(plVar8,1);
  return param_2;
}



// FUNCTION 14193e5e0 Get body=84 status=ok
// SIG undefined Get(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * TAttribute<float>::Get(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1[4] != 0) && (*(longlong **)(param_1 + 2) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 2) + 0x18))();
    if (cVar1 != '\0') {
      if (param_1[4] != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x38))();
        *param_1 = uVar2;
        return param_1;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *param_1 = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 14193e640 Get body=82 status=ok
// SIG undefined Get(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * TAttribute<FSlateBrush_const_*>::Get(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 3) != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[2] + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 3) != 0) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x38))();
        *param_1 = uVar2;
        return param_1;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *param_1 = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 14193e6a0 Get body=159 status=ok
// SIG undefined Get(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * TAttribute<TOptional<float>_>::Get(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if (((param_1[6] != 0) && (*(longlong **)(param_1 + 4) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 4) + 0x18))(), cVar1 != '\0')) {
    if (param_1[6] == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 4);
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
    if (&local_18 != param_1) {
      if (*(char *)(param_1 + 1) != '\0') {
        *(undefined1 *)(param_1 + 1) = 0;
      }
      if (local_14 != '\0') {
        *param_1 = local_18;
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 14193e740 FUN_14193e740 body=206 status=ok
// SIG undefined FUN_14193e740(void)

longlong FUN_14193e740(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_28 [16];
  longlong *local_18;
  uint local_10;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x28);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,local_28);
      FKey::operator=(param_1,local_28);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff0;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | local_10 & 0xf;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_18 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar1 = (int *)((longlong)local_18 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14193e810 Get body=76 status=ok
// SIG undefined Get(void)

undefined8 * TAttribute<FLinearColor>::Get(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((*(int *)(param_1 + 4) != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 4) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)param_1[3];
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
      *param_1 = local_18;
      param_1[1] = uStack_10;
    }
  }
  return param_1;
}



// FUNCTION 14193e860 FUN_14193e860 body=298 status=ok
// SIG undefined FUN_14193e860(void)

undefined8 * FUN_14193e860(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0xc) != 0) && ((longlong *)param_1[0xb] != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)param_1[0xb] + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0xc) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)param_1[0xb];
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_58);
      *param_1 = local_58;
      param_1[1] = local_50;
      *(undefined4 *)(param_1 + 2) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
      *(undefined4 *)(param_1 + 3) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_34;
      *(undefined4 *)(param_1 + 5) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_2c;
      if (param_1 + 6 != &local_28) {
        param_1[6] = local_28;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_20);
      }
      param_1[8] = local_18;
      *(undefined4 *)(param_1 + 9) = local_10;
      *(undefined1 *)((longlong)param_1 + 0x4c) = local_c;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14193e990 FUN_14193e990 body=338 status=ok
// SIG undefined FUN_14193e990(void)

longlong FUN_14193e990(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar7 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar3 = (longlong *)plVar7[1];
  lVar9 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  puVar8 = (undefined8 *)FUN_1418fc990();
  plVar7 = (longlong *)FUN_1418fcba0(*puVar8,local_18);
  if ((*plVar7 == 0) || (*plVar7 != lVar9)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (bVar4) {
    cVar6 = FUN_141943900(param_1);
    if (cVar6 == '\0') {
      lVar9 = *(longlong *)(param_1 + 0x4a0) + 0x308;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x4a8) + 0x308;
    }
  }
  else {
    lVar9 = FUN_14183ac90();
  }
  return lVar9;
}



// FUNCTION 14193eaf0 FUN_14193eaf0 body=214 status=ok
// SIG undefined FUN_14193eaf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14193eaf0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f47d8) {
    _Init_thread_header(&DAT_1469f47d8);
    if (DAT_1469f47d8 == -1) {
      DAT_1469f47d0 = DAT_1464aa770;
      DAT_1469f47d4 = DAT_1464aa774;
      _Init_thread_footer(&DAT_1469f47d8);
    }
  }
  fVar1 = (float)FUN_141839e50(param_1 + 0x508);
  fVar2 = (DAT_1469f47d4 - _DAT_1464bfe7c) * fVar1 + _DAT_1464bfe7c;
  *param_2 = (DAT_1469f47d0 - _DAT_1464bfe78) * fVar1 + _DAT_1464bfe78;
  param_2[1] = fVar2;
  return param_2;
}



// FUNCTION 14193ebe0 GetAsTextAndOffsets body=438 status=ok
// SIG undefined GetAsTextAndOffsets(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FTextLayout::GetAsTextAndOffsets(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_res18;
  int local_res20;
  int local_res24;
  longlong local_50;
  longlong local_48;
  
  iVar7 = 0;
  if ((param_3 != (longlong *)0x0) && (*(int *)((longlong)param_3 + 0xc) < *(int *)(param_1 + 0x20))
     ) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
  }
  local_res18 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_50 = 0;
    local_48 = 0;
    do {
      iVar9 = 0;
      lVar5 = *(longlong *)(param_1 + 0x18) + local_48;
      if (0 < local_50) {
        if (param_2 != (longlong *)0x0) {
          iVar8 = (int)param_2[1];
          iVar4 = (3 - (uint)(iVar8 != 0)) + iVar8;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
          }
          puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
          *puVar1 = 0xa000d;
          *(undefined2 *)(puVar1 + 1) = 0;
        }
        iVar7 = iVar7 + _DAT_1464bfe70;
      }
      iVar8 = iVar9;
      if (0 < *(int *)(lVar5 + 0x30)) {
        lVar6 = 0;
        do {
          lVar2 = *(longlong *)(lVar5 + 0x28);
          if (param_2 != (longlong *)0x0) {
            plVar3 = *(longlong **)(lVar2 + lVar6);
            (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
          }
          plVar3 = *(longlong **)(lVar2 + lVar6);
          (**(code **)(*plVar3 + 8))(plVar3,&local_res20);
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 0x30;
          iVar8 = iVar8 + (local_res24 - local_res20);
        } while (iVar9 < *(int *)(lVar5 + 0x30));
      }
      if (param_3 != (longlong *)0x0) {
        iVar9 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
        }
        *(ulonglong *)(*param_3 + (longlong)iVar9 * 8) = CONCAT44(iVar8,iVar7);
      }
      local_res18 = local_res18 + 1;
      local_50 = local_50 + 1;
      local_48 = local_48 + 0x70;
      iVar7 = iVar7 + iVar8;
    } while (local_res18 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14193eda0 FUN_14193eda0 body=34 status=ok
// SIG undefined FUN_14193eda0(void)

undefined8 * FUN_14193eda0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x3d8);
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14193edf0 FUN_14193edf0 body=258 status=ok
// SIG undefined FUN_14193edf0(void)

uint FUN_14193edf0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  undefined8 local_38;
  longlong *local_30;
  
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_38);
  fVar3 = *(float *)(param_1 + 0x10c);
  sVar6 = FSlateFontMeasure::GetBaseline(local_38,param_1 + 0x90);
  param_2 = (fVar3 - (float)(uint)((int)ROUND(fVar3 * 0.002 + 0.5) >> 1) * 1000.0) * param_2;
  if (0.0 <= param_2) {
    param_2 = 0.0;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
    return (int)((float)(int)sVar6 - param_2) & 0xffff;
  }
  return (int)((float)(int)sVar6 - param_2) & 0xffff;
}



// FUNCTION 14193ef20 FUN_14193ef20 body=623 status=ok
// SIG undefined FUN_14193ef20(void)

longlong FUN_14193ef20(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = (longlong *)param_1[0x73];
  plVar10 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0x72];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xa8))(plVar10,local_28);
  cVar3 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469f4ac8) && (_Init_thread_header(&DAT_1469f4ac8), DAT_1469f4ac8 == -1))
  {
    FName::FName(&DAT_1469f4ac0,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_1469f4ac8);
  }
  (**(code **)(*DAT_1469eb140 + 0x40))(DAT_1469eb140,DAT_1469f4ac0,0);
  uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
  cVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar7);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x3a4) == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x338;
      }
      else {
        lVar11 = param_1[0x75] + 0x2b0;
      }
    }
    else {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x448;
      }
      else {
        lVar11 = param_1[0x75] + 0x3c0;
      }
    }
  }
  else {
    cVar4 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    lVar11 = param_1[0x75];
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        lVar11 = lVar11 + 0x228;
      }
      else {
        lVar11 = lVar11 + 0x1a0;
      }
    }
    else {
      lVar8 = 0x118;
      if (cVar4 != '\0') {
        lVar8 = 0x90;
      }
      lVar11 = lVar11 + lVar8;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
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
  return lVar11;
}



// FUNCTION 14193f190 FUN_14193f190 body=178 status=ok
// SIG undefined FUN_14193f190(void)

longlong FUN_14193f190(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1[0x7f] + 0x6c) != '\0') {
    if (((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))();
      if (cVar1 != '\0') {
        if ((int)param_1[0x15] == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)param_1[0x14];
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x13) = uVar2;
      }
    }
    if ((char)param_1[0x13] == '\0') {
      return param_1[0x7f];
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x218))(param_1);
  if (cVar1 != '\0') {
    return param_1[0x7e];
  }
  cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
  if (cVar1 != '\0') {
    return param_1[0x7d];
  }
  return param_1[0x7c];
}



// FUNCTION 14193f250 FUN_14193f250 body=124 status=ok
// SIG undefined FUN_14193f250(void)

undefined8 FUN_14193f250(longlong param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x3a0) + 0x208))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x538);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x180))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x530);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x1a8))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x528);
  }
  return *(undefined8 *)(param_1 + 0x520);
}



// FUNCTION 14193f2d0 FUN_14193f2d0 body=124 status=ok
// SIG undefined FUN_14193f2d0(void)

undefined8 FUN_14193f2d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x388) + 0x208))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x5e0);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x180))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x5d8);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x1a8))();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x5d0);
  }
  return *(undefined8 *)(param_1 + 0x5c8);
}



// FUNCTION 14193f350 FUN_14193f350 body=98 status=ok
// SIG undefined FUN_14193f350(void)

undefined1 FUN_14193f350(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x310) != 0) {
    if (*(longlong **)(param_1 + 0x308) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x310) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x308);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x300) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x300);
  }
  return *(undefined1 *)(param_1 + 0x300);
}



// FUNCTION 14193f3f0 FUN_14193f3f0 body=108 status=ok
// SIG undefined FUN_14193f3f0(void)

undefined * FUN_14193f3f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f47b0) {
    _Init_thread_header(&DAT_1469f47b0);
    if (DAT_1469f47b0 == -1) {
      atexit((_func_5014 *)&LAB_143e83710);
      _Init_thread_footer(&DAT_1469f47b0);
      return &DAT_1469f47a0;
    }
  }
  return &DAT_1469f47a0;
}



// FUNCTION 14193f460 FUN_14193f460 body=8 status=ok
// SIG undefined FUN_14193f460(void)

longlong FUN_14193f460(longlong param_1)

{
  return param_1 + 0x310;
}



// FUNCTION 14193f470 FUN_14193f470 body=108 status=ok
// SIG undefined FUN_14193f470(void)

undefined * FUN_14193f470(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f47c8) {
    _Init_thread_header(&DAT_1469f47c8);
    if (DAT_1469f47c8 == -1) {
      atexit((_func_5014 *)&LAB_143e83720);
      _Init_thread_footer(&DAT_1469f47c8);
      return &DAT_1469f47b8;
    }
  }
  return &DAT_1469f47b8;
}



// FUNCTION 14193f510 FUN_14193f510 body=1650 status=ok
// SIG undefined FUN_14193f510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14193f510(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_2c8 [32];
  longlong local_2a8 [6];
  undefined4 *local_278;
  undefined4 *puStack_270;
  undefined1 local_268 [4];
  undefined1 local_264 [4];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  longlong *local_250;
  longlong *local_240;
  undefined4 *local_238;
  longlong *local_230;
  undefined4 *local_228;
  undefined8 local_220;
  longlong local_218;
  longlong *local_210;
  undefined4 *local_208;
  undefined1 local_200 [16];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
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
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  cVar5 = FUN_141943900();
  lVar6 = FUN_1418fc6c0();
  lVar9 = 0x58;
  if (cVar5 == '\0') {
    lVar9 = 0x48;
  }
  plVar4 = *(longlong **)(lVar6 + 8 + lVar9);
  lVar6 = *(longlong *)(lVar6 + lVar9);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_d8[0] = 4;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  FText::FText(local_c8,lVar6 + 0x10);
  local_b0 = '\x01';
  local_2a8[0] = 0;
  local_2a8[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2a8,0);
  FGenericPlatformString::Memcpy(local_2a8[0],L"Label",0xc);
  local_240 = local_2a8;
  local_238 = local_d8;
  FUN_1407484b0(&local_158,local_268,&local_240,0);
  if (local_2a8[0] != 0) {
    FMemory::Free();
  }
  if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_c0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  FUN_14189d700(lVar6,local_258);
  cVar5 = FText::IsEmptyOrWhitespace(local_258);
  if (cVar5 == '\0') {
    lVar6 = FText::FText(local_170,local_258);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c0,L" ({0})",L"DockTab",L"CloseButtonInputText");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_190,uVar8);
    local_108[0] = 4;
    FText::FText(local_f8,lVar6);
    local_278 = local_108;
    local_e0 = '\x01';
    puStack_270 = local_d8;
    local_220 = *puVar7;
    local_218 = puVar7[1];
    if (local_218 != 0) {
      LOCK();
      *(int *)(local_218 + 8) = *(int *)(local_218 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_200,&local_278);
    uVar8 = FText::Format(local_1d8,&local_220,uVar8);
    FText::FText(local_1f0,uVar8);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_1d0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_200);
    if ((local_e0 != '\0') && (local_e0 = '\0', local_f0 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_f0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    plVar10 = (longlong *)puVar7[1];
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
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = *(longlong **)(lVar6 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    local_78[0] = 4;
    FText::FText(local_68,local_1f0);
    local_50 = '\x01';
    local_2a8[4] = 0;
    local_2a8[5] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2a8 + 4,0);
    FGenericPlatformString::Memcpy(local_2a8[4],L"InputText",0x14);
    local_210 = local_2a8 + 4;
    local_208 = local_78;
    FUN_1407484b0(&local_158,local_260,&local_210,0);
    if (local_2a8[4] != 0) {
      FMemory::Free();
    }
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_60 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    plVar10 = local_1b8;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1e8 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar1 = (int *)((longlong)local_1e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar10 = local_1b8;
        if (iVar3 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
          plVar10 = local_1b8;
        }
      }
    }
  }
  else {
    local_a8[0] = 4;
    FText::FText(local_98,local_258);
    local_80 = '\x01';
    local_2a8[2] = 0;
    local_2a8[3] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2a8 + 2,0);
    FGenericPlatformString::Memcpy(local_2a8[2],L"InputText",0x14);
    local_230 = local_2a8 + 2;
    local_228 = local_a8;
    FUN_1407484b0(&local_158,local_264,&local_230,0);
    if (local_2a8[2] != 0) {
      FMemory::Free();
    }
    if (local_80 == '\0') goto LAB_14193fa52;
    local_80 = '\0';
    plVar10 = local_90;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
LAB_14193fa52:
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1a8,L"{Label}{InputText}",L"DockTab",L"CloseButtonToolTip");
  uVar8 = FTextFormat::FTextFormat(local_180,uVar8);
  FText::Format(param_2,uVar8,&local_158);
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1a0 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_250 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar1 = (int *)((longlong)local_250 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_250 + 8))(local_250,1);
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  return param_2;
}



// FUNCTION 14193fb90 FUN_14193fb90 body=155 status=ok
// SIG undefined FUN_14193fb90(void)

longlong FUN_14193fb90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x500) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4f8);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
      *(undefined8 *)(param_1 + 0x4e0) = local_18;
      *(undefined8 *)(param_1 + 0x4e8) = uStack_10;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x4ec)) {
    cVar1 = FUN_141943900(param_1);
    if (cVar1 == '\0') {
      return *(longlong *)(param_1 + 0x4a0) + 0x418;
    }
    return *(longlong *)(param_1 + 0x4a8) + 0x418;
  }
  lVar2 = FUN_14183ac90();
  return lVar2;
}



// FUNCTION 14193fc30 FUN_14193fc30 body=359 status=ok
// SIG undefined FUN_14193fc30(void)

undefined8 * FUN_14193fc30(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar3 = (**(code **)(*param_1 + 0x218))();
  if (cVar3 == '\0') {
    if (((int)param_1[0x75] != 0) && ((longlong *)param_1[0x74] != (longlong *)0x0)) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x74] + 0x18))();
      if (cVar3 != '\0') {
        if ((int)param_1[0x75] == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)param_1[0x74];
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
        param_1[0x71] = CONCAT44(fStack_14,local_18);
        param_1[0x72] = CONCAT44(uStack_c,uStack_10);
      }
    }
    local_18 = *(float *)(param_1 + 0x71) + *(float *)(param_1 + 0x76);
    fStack_14 = *(float *)((longlong)param_1 + 0x3b4) + *(float *)((longlong)param_1 + 0x38c);
    fVar5 = *(float *)(param_1 + 0x77);
    fVar6 = *(float *)((longlong)param_1 + 0x3bc);
  }
  else {
    if (((int)param_1[0x75] != 0) && ((longlong *)param_1[0x74] != (longlong *)0x0)) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x74] + 0x18))();
      if (cVar3 != '\0') {
        if ((int)param_1[0x75] == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)param_1[0x74];
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_18);
        param_1[0x71] = CONCAT44(fStack_14,local_18);
        param_1[0x72] = CONCAT44(uStack_c,uStack_10);
      }
    }
    local_18 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x71);
    fStack_14 = *(float *)((longlong)param_1 + 0x3c4) + *(float *)((longlong)param_1 + 0x38c);
    fVar5 = *(float *)(param_1 + 0x79);
    fVar6 = *(float *)((longlong)param_1 + 0x3cc);
  }
  fVar1 = *(float *)(param_1 + 0x72);
  fVar2 = *(float *)((longlong)param_1 + 0x394);
  *param_2 = CONCAT44(fStack_14,local_18);
  param_2[1] = CONCAT44(fVar6 + fVar2,fVar5 + fVar1);
  return param_2;
}



// FUNCTION 14193fda0 GetHeaderRow body=34 status=ok
// SIG undefined GetHeaderRow(void)

undefined8 * STableViewBase::GetHeaderRow(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x3a8);
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14193fdd0 GetContentAreaBrush body=56 status=ok
// SIG undefined GetContentAreaBrush(void)

longlong SDockTab::GetContentAreaBrush(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_141943900();
  if (cVar1 == '\0') {
    return *(longlong *)(param_1 + 0x4a0) + 0x5b0;
  }
  return *(longlong *)(param_1 + 0x4a8) + 0x5b0;
}



// FUNCTION 14193fe10 FUN_14193fe10 body=114 status=ok
// SIG undefined FUN_14193fe10(void)

undefined8 * FUN_14193fe10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((*(int *)(param_1 + 0x4d0) != 0) && (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x4d0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4c8);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
      *(undefined8 *)(param_1 + 0x4b0) = local_18;
      *(undefined8 *)(param_1 + 0x4b8) = uStack_10;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x4b8);
  *param_2 = *(undefined8 *)(param_1 + 0x4b0);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14193fe90 GetDefaultTextFlowDirection body=29 status=ok
// SIG undefined GetDefaultTextFlowDirection(void)

ulonglong GetDefaultTextFlowDirection(void)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*DAT_1469f4768 + 0x68))();
  if (2 < (uint)uVar1) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}



// FUNCTION 14193feb0 FUN_14193feb0 body=417 status=ok
// SIG undefined FUN_14193feb0(void)

longlong * FUN_14193feb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar7 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x400) != 0) && (*(longlong *)(param_1 + 0x408) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar6 = *(longlong **)(param_1 + 0x408);
      plVar8 = plVar6;
      plVar9 = plVar7;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar6[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar7, plVar9 = (longlong *)0x0, !bVar10) {
          LOCK();
          bVar10 = iVar5 == (int)plVar6[1];
          if (bVar10) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar8 = plVar6;
            if (plVar6 != (longlong *)0x0) {
              plVar9 = *(longlong **)(param_1 + 0x400);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar6[1];
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(plVar6 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      plVar6 = (longlong *)FUN_1418fdd60(plVar9,local_28);
      bVar3 = true;
      bVar2 = true;
      bVar10 = false;
      plVar7 = (longlong *)*plVar6;
      goto LAB_14193ff69;
    }
  }
  plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar6 = &local_38;
  bVar3 = false;
  bVar2 = false;
  bVar10 = true;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
LAB_14193ff69:
  *param_2 = (longlong)plVar7;
  param_2[1] = plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar7 = plStack_30;
  if ((bVar10) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plStack_30 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  if ((bVar2) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((bVar3) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
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
  return param_2;
}



// FUNCTION 141940060 GetDrawSize body=21 status=ok
// SIG undefined GetDrawSize(void)

undefined4 * FTextLayout::GetDrawSize(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xb0);
  param_2[1] = *(undefined4 *)(param_1 + 0xb8);
  return param_2;
}



// FUNCTION 141940080 GetFlashColor body=258 status=ok
// SIG undefined GetFlashColor(void)

undefined4 * SDockTab::GetFlashColor(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  cVar2 = FUN_141943900();
  if (cVar2 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x4a0);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x4a8);
  }
  uVar6 = DAT_1464aa6c0;
  uVar7 = DAT_1464aa6c4;
  uVar8 = DAT_1464aa6c8;
  fVar4 = DAT_1464aa6cc;
  if (*(byte *)(lVar3 + 0x6e8) < 2) {
    cVar2 = FUN_141943900(param_1);
    if (cVar2 == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x4a0);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x4a8);
    }
    puVar1 = *(undefined4 **)(lVar3 + 0x6f0);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(lVar3 + 0x6d8);
      uVar7 = *(undefined4 *)(lVar3 + 0x6dc);
      uVar8 = *(undefined4 *)(lVar3 + 0x6e0);
    }
    else {
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
    }
    cVar2 = FCurveSequence::EnsureSlateTickDuringAnimation(param_1 + 0x560);
    if (cVar2 == '\0') {
      fVar4 = 0.0;
    }
    else {
      fVar4 = (float)FUN_141839e50(param_1 + 0x560);
      fVar5 = ::_guard_xfg_dispatch_icall_nop(fVar4 * 12.566371);
      fVar4 = (fVar5 + 1.0) * 0.5 * (1.0 - fVar4);
    }
  }
  *param_2 = uVar6;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = fVar4;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 141940190 GetFlashOverlayImageBrush body=85 status=ok
// SIG undefined GetFlashOverlayImageBrush(void)

longlong SDockTab::GetFlashOverlayImageBrush(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FCurveSequence::EnsureSlateTickDuringAnimation(param_1 + 0x560);
  if (cVar1 == '\0') {
    lVar2 = FUN_14183ac90();
    return lVar2;
  }
  cVar1 = FUN_141943900(param_1);
  if (cVar1 == '\0') {
    return *(longlong *)(param_1 + 0x4a0) + 0x390;
  }
  return *(longlong *)(param_1 + 0x4a8) + 0x390;
}



// FUNCTION 1419401f0 FUN_1419401f0 body=164 status=ok
// SIG undefined FUN_1419401f0(void)

float FUN_1419401f0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  undefined8 local_28;
  longlong *local_20;
  
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_28);
  uVar5 = FUN_14183a8e0(local_28,param_1,0x3f800000);
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
    return (float)uVar5;
  }
  return (float)uVar5;
}



// FUNCTION 1419402a0 FUN_1419402a0 body=109 status=ok
// SIG undefined FUN_1419402a0(void)

longlong FUN_1419402a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_141943900();
  if (cVar1 == '\0') {
    lVar3 = param_1[0x94];
  }
  else {
    lVar3 = param_1[0x95];
  }
  cVar1 = FUN_141945110(param_1);
  if (cVar1 != '\0') {
    return lVar3 + 0x4a0;
  }
  cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1);
  lVar2 = lVar3 + 0x528;
  if (cVar1 == '\0') {
    lVar2 = lVar3 + 0x280;
  }
  return lVar2;
}



// FUNCTION 141940310 FUN_141940310 body=218 status=ok
// SIG undefined FUN_141940310(void)

ulonglong FUN_141940310(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong in_RAX;
  undefined8 local_28;
  longlong *local_20;
  
  if (0 < param_2) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 8);
    in_RAX = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      in_RAX = 0;
    }
    if (param_2 != (int)in_RAX) {
      FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_28);
      bVar5 = FSlateFontMeasure::GetKerning(local_28,param_1 + 0x90,param_3,0x2022,0x2022);
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
      return (ulonglong)bVar5;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1419403f0 FUN_1419403f0 body=358 status=ok
// SIG undefined FUN_1419403f0(void)

ulonglong FUN_1419403f0(longlong param_1,int param_2,undefined4 param_3,undefined2 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  ulonglong in_RAX;
  undefined2 *puVar7;
  uint uVar8;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (-1 < param_2 + -1) {
    iVar3 = *(int *)(*(undefined8 **)(param_1 + 0x78) + 1);
    uVar8 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar8 = 0xffffffff;
    }
    in_RAX = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      in_RAX = 0;
    }
    if (param_2 != (int)in_RAX) {
      if (iVar3 == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
      }
      local_50 = *(undefined4 *)(param_1 + 0xa0);
      uStack_4c = *(undefined4 *)(param_1 + 0xa4);
      uStack_48 = *(undefined4 *)(param_1 + 0xa8);
      uStack_44 = *(undefined4 *)(param_1 + 0xac);
      local_40 = *(undefined4 *)(param_1 + 0xb0);
      uStack_3c = *(undefined4 *)(param_1 + 0xb4);
      uStack_38 = *(undefined4 *)(param_1 + 0xb8);
      uStack_34 = *(undefined4 *)(param_1 + 0xbc);
      if (iVar3 == 0) {
        uVar8 = 0;
      }
      local_70 = (ulonglong)uVar8 << 0x20;
      local_64 = *param_4;
      local_60 = *(undefined8 *)(param_1 + 0x90);
      local_58 = *(undefined8 *)(param_1 + 0x98);
      local_30 = *(undefined8 *)(param_1 + 0xc0);
      local_28 = *(longlong **)(param_1 + 200);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_20 = *(undefined8 *)(param_1 + 0xd0);
      local_18 = *(undefined4 *)(param_1 + 0xd8);
      local_14 = *(undefined1 *)(param_1 + 0xdc);
      local_68 = param_3;
      bVar6 = FUN_141941a50(param_4 + 4,&local_70,param_2 + -1,puVar7);
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      return (ulonglong)bVar6;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141940560 GetLayoutIdentifier body=8 status=ok
// SIG undefined GetLayoutIdentifier(void)

longlong SDockTab::GetLayoutIdentifier(longlong param_1)

{
  return param_1 + 1000;
}



// FUNCTION 141940570 GetIdentityInterface body=34 status=ok
// SIG undefined GetIdentityInterface(void)

undefined8 * FOnlineSubsystemEOS::GetIdentityInterface(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x3b8);
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419405a0 GetLineViewIndexForTextLocation body=182 status=ok
// SIG undefined GetLineViewIndexForTextLocation(void)

int FTextLayout::GetLineViewIndexForTextLocation
              (longlong param_1,longlong *param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x20))) {
    iVar3 = (int)param_2[1];
    iVar5 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      piVar4 = (int *)(*param_2 + 0xac);
      do {
        if (piVar4[-0x16] == iVar1) {
          if (iVar2 == 0) {
            return iVar5;
          }
          if (*(int *)(*(longlong *)((longlong)iVar1 * 0x70 + *(longlong *)(param_1 + 0x18)) + 8) <
              2) {
            return iVar5;
          }
          if ((piVar4[-0x19] <= iVar2) && (iVar2 < piVar4[-0x18])) {
            return iVar5;
          }
          if ((((iVar5 == iVar3 + -1) || (*piVar4 != iVar1)) || (param_4 != '\0')) &&
             (piVar4[-0x18] == iVar2)) {
            return iVar5;
          }
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 1;
        piVar4 = piVar4 + 0x16;
      } while (lVar6 < iVar3);
    }
  }
  return -1;
}



// FUNCTION 141940660 FUN_141940660 body=27 status=ok
// SIG undefined FUN_141940660(void)

undefined8 FUN_141940660(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  (**(code **)(*(longlong *)*param_3 + 0x38))();
  return param_2;
}



// FUNCTION 141940680 FUN_141940680 body=372 status=ok
// SIG undefined FUN_141940680(void)

float * FUN_141940680(longlong param_1,float *param_2,undefined8 *param_3,int param_4,
                     undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int local_res8;
  int local_resc;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [2];
  undefined1 local_38 [16];
  longlong *local_28;
  char local_20;
  
  (**(code **)(*(longlong *)*param_3 + 0x38))((longlong *)*param_3,&local_res10);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_res8);
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,local_38);
  if (local_20 == '\0') {
    local_resc = param_4 + local_res8;
  }
  else {
    local_res8 = local_res8 + param_4;
  }
  FSlatePasswordRun::BuildPasswordString(local_48,local_resc - local_res8);
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_58);
  (**(code **)(*local_58 + 0x18))(local_58,&local_res18,local_48,param_1 + 0x90,param_5);
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
  *param_2 = local_res10 + local_res18;
  param_2[1] = local_res14 + local_res1c;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141940800 FUN_141940800 body=460 status=ok
// SIG undefined FUN_141940800(void)

float * FUN_141940800(longlong param_1,float *param_2,undefined8 *param_3,int param_4,
                     undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int local_res8;
  int local_resc;
  int local_res10;
  int iStackX_14;
  float local_res18;
  float fStackX_1c;
  float local_b8;
  float local_b4;
  undefined2 local_b0 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_98;
  longlong local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  (**(code **)(*(longlong *)*param_3 + 0x38))((longlong *)*param_3,&local_b8);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_res10);
  (**(code **)(*(longlong *)*param_3 + 0x20))((longlong *)*param_3,local_b0);
  if (local_98 == '\0') {
    local_res8 = local_res10;
    local_resc = local_res10 + param_4;
  }
  else {
    local_res8 = local_res10 + param_4;
    local_resc = iStackX_14;
  }
  iVar4 = *(int *)(*(undefined8 **)(param_1 + 0x78) + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
  }
  local_60 = *(undefined4 *)(param_1 + 0xb0);
  uStack_5c = *(undefined4 *)(param_1 + 0xb4);
  uStack_58 = *(undefined4 *)(param_1 + 0xb8);
  uStack_54 = *(undefined4 *)(param_1 + 0xbc);
  local_88 = param_5;
  local_70 = *(undefined4 *)(param_1 + 0xa0);
  uStack_6c = *(undefined4 *)(param_1 + 0xa4);
  uStack_68 = *(undefined4 *)(param_1 + 0xa8);
  uStack_64 = *(undefined4 *)(param_1 + 0xac);
  fStackX_1c = (float)(iVar4 - 1);
  if (iVar4 == 0) {
    fStackX_1c = 0.0;
  }
  local_res18 = 0.0;
  local_90 = (ulonglong)(uint)fStackX_1c << 0x20;
  local_84 = local_b0[0];
  local_80 = *(undefined8 *)(param_1 + 0x90);
  local_78 = *(undefined8 *)(param_1 + 0x98);
  local_50 = *(undefined8 *)(param_1 + 0xc0);
  local_48 = *(longlong **)(param_1 + 200);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0xd0);
  local_38 = *(undefined4 *)(param_1 + 0xd8);
  local_34 = *(undefined1 *)(param_1 + 0xdc);
  FUN_141946290(&local_res18,local_a8,&local_90,&local_res8,puVar6);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
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
  *param_2 = local_b8 + local_res18;
  param_2[1] = local_b4 + fStackX_1c;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1419409d0 FUN_1419409d0 body=475 status=ok
// SIG undefined FUN_1419409d0(void)

undefined8 * FUN_1419409d0(longlong param_1,undefined8 *param_2,int *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar14;
  longlong *plVar15;
  int local_res8;
  int local_resc;
  float local_res18;
  float fStackX_1c;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong uVar13;
  
  iVar2 = *param_3;
  uVar13 = 0;
  iVar3 = param_3[1];
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x20))) {
    iVar4 = *(int *)(param_1 + 0x30);
    if (0 < iVar4) {
      piVar8 = (int *)(*(longlong *)(param_1 + 0x28) + 0xac);
      uVar10 = uVar13;
      uVar14 = uVar13;
      do {
        iVar9 = (int)uVar10;
        if ((piVar8[-0x16] == iVar2) &&
           ((((iVar3 == 0 ||
              (*(int *)(*(longlong *)((longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 0x18)) + 8) <
               2)) || ((piVar8[-0x19] <= iVar3 && (iVar3 < piVar8[-0x18])))) ||
            ((((iVar9 == iVar4 + -1 || (*piVar8 != iVar2)) || (param_4 != '\0')) &&
             (piVar8[-0x18] == iVar3)))))) {
          if ((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0x30))) {
            plVar15 = (longlong *)((longlong)iVar9 * 0x58 + *(longlong *)(param_1 + 0x28));
            uVar10 = uVar13;
            if (0 < (int)plVar15[1]) {
              do {
                puVar11 = (undefined8 *)(*plVar15 + uVar10);
                (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,&local_res8);
                if ((local_res8 <= iVar3) && (iVar3 <= local_resc)) {
                  puVar7 = (undefined8 *)
                           (**(code **)(*(longlong *)*puVar11 + 8))((longlong *)*puVar11,local_58);
                  (**(code **)(*(longlong *)*puVar7 + 0x48))
                            ((longlong *)*puVar7,&local_res18,puVar11,iVar3 - local_res8,
                             *(undefined4 *)(param_1 + 0x8c));
                  plVar6 = local_50;
                  if (local_50 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_50 + 1;
                    lVar5 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
                      (**(code **)*local_50)(local_50);
                      LOCK();
                      piVar8 = (int *)((longlong)plVar6 + 0xc);
                      iVar2 = *piVar8;
                      *piVar8 = *piVar8 + -1;
                      UNLOCK();
                      if (iVar2 == 1) {
                        (**(code **)(*plVar6 + 8))(plVar6,1);
                      }
                    }
                  }
                  if ((local_res18 != 0.0) || (fStackX_1c != 0.0)) {
                    *param_2 = CONCAT44(fStackX_1c,local_res18);
                    return param_2;
                  }
                }
                uVar12 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar12;
                uVar10 = uVar10 + 0x10;
              } while ((int)uVar12 < (int)plVar15[1]);
            }
            *param_2 = 0;
            return param_2;
          }
          break;
        }
        uVar10 = (ulonglong)(iVar9 + 1);
        uVar14 = uVar14 + 1;
        piVar8 = piVar8 + 0x16;
      } while ((longlong)uVar14 < (longlong)iVar4);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 141940be0 FUN_141940be0 body=258 status=ok
// SIG undefined FUN_141940be0(void)

uint FUN_141940be0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 local_38;
  longlong *local_30;
  
  FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_38);
  fVar3 = *(float *)(param_1 + 0x10c);
  uVar6 = FUN_14183a8e0(local_38,param_1 + 0x90,param_2);
  uVar7 = (uint)(ABS((fVar3 - (float)(uint)((int)ROUND(fVar3 * 0.002 + 0.5) >> 1) * 1000.0) *
                     param_2) + (float)uVar6);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
    return uVar7 & 0xffff;
  }
  return uVar7 & 0xffff;
}



// FUNCTION 141940cf0 GetMaxHeight body=69 status=ok
// SIG undefined GetMaxHeight(void)

int FSlateWidgetRun::GetMaxHeight(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0xa0),local_res8);
  if (*(char *)(param_1 + 0xbc) != '\0') {
    lVar1 = param_1 + 0xb4;
  }
  return (int)(param_2 * *(float *)(lVar1 + 4));
}



// FUNCTION 141940d40 GetMaxSliderValue body=52 status=ok
// SIG undefined GetMaxSliderValue(void)

undefined4 SSpinBox<float>::GetMaxSliderValue(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)TAttribute<TOptional<float>_>::Get(param_1 + 0x488);
  if (*(char *)(puVar1 + 1) != '\0') {
    return *puVar1;
  }
  return 0x7f7fffff;
}



// FUNCTION 141940d80 FUN_141940d80 body=347 status=ok
// SIG undefined FUN_141940d80(void)

undefined8 * FUN_141940d80(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  
  cVar4 = *(char *)(param_1 + 0x2a0);
  plVar8 = (longlong *)0x0;
  *param_2 = 0;
  if (cVar4 != '\0') {
    if ((*(char *)(param_1 + 0x2b8) == '\0') && (*(longlong *)(param_1 + 0x210) != 0)) {
      if (*(longlong *)(param_1 + 0x218) != 0) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x218) + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (0 < iVar5) {
          plVar2 = *(longlong **)(param_1 + 0x218);
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            iVar5 = (int)plVar2[1];
            bVar9 = iVar5 == 0;
            if (bVar9) {
              *(int *)(plVar2 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (plVar7 = plVar8, !bVar9) {
              LOCK();
              bVar9 = iVar5 == (int)plVar2[1];
              if (bVar9) {
                *(int *)(plVar2 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar9) {
                plVar7 = plVar2;
                if (plVar2 != (longlong *)0x0) {
                  plVar8 = *(longlong **)(param_1 + 0x210);
                }
                break;
              }
              LOCK();
              iVar5 = (int)plVar2[1];
              bVar9 = iVar5 == 0;
              if (bVar9) {
                *(int *)(plVar2 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
          }
          puVar6 = (undefined8 *)FUN_14183b310(plVar8,local_res10);
          *param_2 = *puVar6;
          if (plVar7 == (longlong *)0x0) {
            return param_2;
          }
          LOCK();
          plVar8 = plVar7 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar3 != 1) {
            return param_2;
          }
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return param_2;
          }
          (**(code **)(*plVar7 + 8))(plVar7,1);
          return param_2;
        }
      }
      cVar4 = *(char *)(param_1 + 0x2a0);
    }
    if ((((cVar4 != '\0') && (*(char *)(param_1 + 0x2b8) == '\x01')) &&
        (*(longlong *)(param_1 + 0x220) != 0)) && (*(longlong *)(param_1 + 0x228) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x228) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        *param_2 = *(undefined8 *)(param_1 + 0x2cc);
      }
    }
  }
  return param_2;
}



// FUNCTION 141940ee0 FUN_141940ee0 body=388 status=ok
// SIG undefined FUN_141940ee0(void)

undefined8 * FUN_141940ee0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  if (((*(char *)(param_1 + 0x98) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (*(longlong *)(param_1 + 0x20) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_20 = *(longlong **)(param_1 + 0x10);
      local_28 = 0;
      if (local_20 == (longlong *)0x0) {
LAB_141940f83:
        puVar8 = &local_28;
        bVar3 = true;
        bVar9 = false;
        uVar7 = local_28;
      }
      else {
        LOCK();
        iVar6 = (int)local_20[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_20 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_20[1];
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_20 != (longlong *)0x0) {
              local_28 = *(undefined8 *)(param_1 + 8);
            }
            goto LAB_141940f83;
          }
          LOCK();
          iVar6 = (int)local_20[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_20 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        puVar8 = &local_28;
        local_20 = (longlong *)0x0;
        bVar3 = true;
        bVar9 = false;
        uVar7 = 0;
      }
      goto LAB_141940faa;
    }
  }
  puVar8 = &local_18;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  bVar3 = false;
  bVar9 = true;
  uVar7 = 0;
LAB_141940faa:
  *param_2 = uVar7;
  uVar7 = puVar8[1];
  puVar8[1] = 0;
  param_2[1] = uVar7;
  *puVar8 = 0;
  plVar5 = plStack_10;
  if ((bVar9) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar5 = local_20;
  if ((bVar3) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141941070 GetMinSliderValue body=52 status=ok
// SIG undefined GetMinSliderValue(void)

undefined4 SSpinBox<float>::GetMinSliderValue(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)TAttribute<TOptional<float>_>::Get(param_1 + 0x468);
  if (*(char *)(puVar1 + 1) != '\0') {
    return *puVar1;
  }
  return 0xff7fffff;
}



// FUNCTION 1419410b0 GetOverlapWidth body=60 status=ok
// SIG undefined GetOverlapWidth(void)

undefined4 SDockTab::GetOverlapWidth(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_141943900();
  if (cVar1 == '\0') {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x4a0) + 0x6d0);
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x4a8) + 0x6d0);
}



// FUNCTION 1419410f0 FUN_1419410f0 body=387 status=ok
// SIG undefined FUN_1419410f0(void)

undefined8 * FUN_1419410f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  if ((*(longlong *)(param_1 + 0x400) != 0) && (*(longlong *)(param_1 + 0x408) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_20 = *(longlong **)(param_1 + 0x408);
      local_28 = 0;
      if (local_20 == (longlong *)0x0) {
LAB_141941192:
        puVar8 = &local_28;
        bVar3 = true;
        bVar9 = false;
        uVar7 = local_28;
      }
      else {
        LOCK();
        iVar6 = (int)local_20[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_20 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_20[1];
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_20 != (longlong *)0x0) {
              local_28 = *(undefined8 *)(param_1 + 0x400);
            }
            goto LAB_141941192;
          }
          LOCK();
          iVar6 = (int)local_20[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_20 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        puVar8 = &local_28;
        local_20 = (longlong *)0x0;
        bVar3 = true;
        bVar9 = false;
        uVar7 = 0;
      }
      goto LAB_1419411b9;
    }
  }
  puVar8 = &local_18;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  bVar3 = false;
  bVar9 = true;
  uVar7 = 0;
LAB_1419411b9:
  *param_2 = uVar7;
  uVar7 = puVar8[1];
  puVar8[1] = 0;
  param_2[1] = uVar7;
  *puVar8 = 0;
  plVar5 = plStack_10;
  if ((bVar9) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar5 = local_20;
  if ((bVar3) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141941280 GetParentDockTabStack body=139 status=ok
// SIG undefined GetParentDockTabStack(void)

undefined8 * SDockTab::GetParentDockTabStack(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_1419410f0(param_1,&local_18);
  if (local_18 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1418fec60(local_18,param_2);
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
  return param_2;
}



// FUNCTION 141941310 FUN_141941310 body=329 status=ok
// SIG undefined FUN_141941310(void)

undefined8 * FUN_141941310(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar7 = 0;
  FUN_14193feb0(param_1,&local_28);
  bVar8 = local_28 == 0;
  if (bVar8) {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_1418ff040(local_28,local_18);
    uVar7 = *puVar6;
  }
  *param_2 = uVar7;
  param_2[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  plVar3 = plStack_30;
  if (bVar8) {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  if ((!bVar8) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141941470 GetPieceColor body=126 status=ok
// SIG undefined GetPieceColor(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * SThrobber::GetPieceColor(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  
  uVar1 = _DAT_1464aa6c8;
  if ((*(uint *)(param_1 + 0x3a4) >> 2 & 1) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x378);
    if (*(longlong *)(param_1 + 0x378) == 0) {
      lVar2 = param_1 + 0x348;
    }
    fVar3 = (float)FUN_141839cb0(lVar2 + (longlong)param_3 * 0x10);
    *(undefined4 *)param_2 = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar3 * 6.2831855);
    *(float *)((longlong)param_2 + 0xc) = fVar3;
    return param_2;
  }
  *param_2 = _DAT_1464aa6c0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1419414f0 GetPieceScale body=130 status=ok
// SIG undefined GetPieceScale(void)

float * SThrobber::GetPieceScale(longlong param_1,float *param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (*(longlong *)(param_1 + 0x378) == 0) {
    lVar1 = param_1 + 0x348;
  }
  fVar2 = (float)FUN_141839cb0(lVar1 + (longlong)param_3 * 0x10);
  fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar2 * 6.2831855);
  fVar2 = fVar3;
  if ((*(uint *)(param_1 + 0x3a4) & 1) == 0) {
    fVar2 = 1.0;
  }
  if ((*(uint *)(param_1 + 0x3a4) >> 1 & 1) == 0) {
    fVar3 = 1.0;
  }
  *param_2 = fVar3;
  param_2[1] = fVar2;
  return param_2;
}



// FUNCTION 141941580 GetRangeAsTextFromLine body=234 status=ok
// SIG undefined GetRangeAsTextFromLine(void)

void GetRangeAsTextFromLine(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_res10;
  int local_res20;
  int iStackX_24;
  
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x28);
      plVar3 = *(longlong **)(lVar2 + lVar6);
      (**(code **)(*plVar3 + 8))(plVar3,&local_res20);
      iVar1 = param_3[1];
      iVar7 = *param_3;
      if (*param_3 <= local_res20) {
        iVar7 = local_res20;
      }
      iVar4 = iVar1;
      if (iStackX_24 <= iVar1) {
        iVar4 = iStackX_24;
      }
      if (iVar7 < iVar4) {
        local_res10 = CONCAT44(iVar4,iVar7);
      }
      else {
        iVar7 = 0;
        local_res10 = 0;
      }
      if ((int)((ulonglong)local_res10 >> 0x20) - iVar7 < 1) {
        if (iVar1 < local_res20) {
          return;
        }
      }
      else {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        (**(code **)(*plVar3 + 0x70))(plVar3,param_1,&local_res10);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while (iVar5 < *(int *)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 141941690 FUN_141941690 body=34 status=ok
// SIG undefined FUN_141941690(void)

undefined8 * FUN_141941690(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x3c8);
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419416c0 FUN_1419416c0 body=376 status=ok
// SIG undefined FUN_1419416c0(void)

undefined8 FUN_1419416c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    FText::FText(param_2,param_1 + 0x358);
    return param_2;
  }
  if (*(char *)(param_1 + 0x318) != '\0') {
    lVar3 = param_1 + 0x2f8;
    uVar6 = FUN_14193e740(lVar3);
    cVar5 = FKey::IsValid(uVar6);
    if (cVar5 != '\0') {
      uVar6 = FUN_14193e740(lVar3);
      cVar5 = FKey::IsModifierKey(uVar6);
      uVar6 = FUN_14193e740(lVar3);
      bVar7 = cVar5 == '\0';
      if (bVar7) {
        uVar6 = FUN_14189cb90(uVar6,local_38);
      }
      else {
        uVar6 = FUN_1417ad2a0(uVar6,local_20);
      }
      FText::FText(param_2,uVar6);
      if ((bVar7) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (bVar7) {
        return param_2;
      }
      if (local_18 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar1 = local_18 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_2;
      }
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*local_18 + 8))(local_18,1);
      return param_2;
    }
  }
  FText::FText(param_2,param_1 + 0x370);
  return param_2;
}



// FUNCTION 141941840 GetSelectionAsText body=524 status=ok
// SIG undefined GetSelectionAsText(void)

void FTextLayout::GetSelectionAsText(longlong param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  int local_res18;
  int local_res1c;
  int local_res20;
  int local_res24;
  
  iVar2 = *param_3;
  piVar15 = param_3 + 2;
  iVar8 = *piVar15;
  bVar17 = SBORROW4(iVar2,iVar8);
  iVar14 = iVar2 - iVar8;
  if (iVar2 == iVar8) {
    bVar17 = SBORROW4(param_3[1],param_3[3]);
    iVar14 = param_3[1] - param_3[3];
  }
  iVar7 = iVar8;
  if (bVar17 != iVar14 < 0) {
    iVar7 = iVar2;
  }
  bVar17 = SBORROW4(iVar2,iVar8);
  iVar14 = iVar2 - iVar8;
  if (iVar2 == iVar8) {
    bVar17 = SBORROW4(param_3[1],param_3[3]);
    iVar14 = param_3[1] - param_3[3];
  }
  piVar9 = piVar15;
  if (bVar17 != iVar14 < 0) {
    piVar9 = param_3;
  }
  iVar14 = piVar9[1];
  bVar18 = SBORROW4(iVar2,iVar8);
  iVar6 = iVar2 - iVar8;
  bVar17 = false;
  if (iVar2 == iVar8) {
    iVar3 = param_3[3];
    iVar4 = param_3[1];
    bVar18 = SBORROW4(iVar4,iVar3);
    iVar6 = iVar4 - iVar3;
    bVar17 = iVar4 == iVar3;
  }
  iVar3 = iVar8;
  if (!bVar17 && bVar18 == iVar6 < 0) {
    iVar3 = iVar2;
  }
  bVar18 = SBORROW4(iVar2,iVar8);
  iVar6 = iVar2 - iVar8;
  bVar17 = false;
  if (iVar2 == iVar8) {
    iVar2 = param_3[3];
    iVar8 = param_3[1];
    bVar18 = SBORROW4(iVar8,iVar2);
    iVar6 = iVar8 - iVar2;
    bVar17 = iVar8 == iVar2;
  }
  if (!bVar17 && bVar18 == iVar6 < 0) {
    piVar15 = param_3;
  }
  local_res1c = piVar15[1];
  if ((((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x20))) && (-1 < iVar3)) &&
     (iVar3 < *(int *)(param_1 + 0x20))) {
    lVar11 = (longlong)iVar7;
    local_res18 = iVar14;
    if (iVar7 == iVar3) {
      GetRangeAsTextFromLine(param_2,lVar11 * 0x70 + *(longlong *)(param_1 + 0x18),&local_res18);
    }
    else {
      lVar13 = (longlong)iVar3;
      if (lVar11 <= lVar13) {
        lVar12 = lVar11;
        lVar16 = lVar11 * 0x70;
        do {
          lVar5 = *(longlong *)(param_1 + 0x18);
          if (lVar12 == lVar11) {
            plVar10 = (longlong *)(lVar11 * 0x70 + lVar5);
            local_res20 = iVar14;
            local_res24 = *(int *)(*plVar10 + 8) + -1;
            if (*(int *)(*plVar10 + 8) == 0) {
              local_res24 = 0;
            }
          }
          else if (lVar12 == lVar13) {
            plVar10 = (longlong *)(lVar13 * 0x70 + lVar5);
          }
          else {
            plVar10 = (longlong *)(lVar16 + lVar5);
          }
          GetRangeAsTextFromLine(param_2,plVar10);
          if (lVar12 != lVar13) {
            iVar2 = (int)param_2[1];
            iVar8 = (3 - (uint)(iVar2 != 0)) + iVar2;
            *(int *)(param_2 + 1) = iVar8;
            if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
            }
            puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
            *puVar1 = 0xa000d;
            *(undefined2 *)(puVar1 + 1) = 0;
            iVar14 = local_res18;
          }
          lVar12 = lVar12 + 1;
          lVar16 = lVar16 + 0x70;
        } while (lVar12 <= lVar13);
      }
    }
  }
  return;
}



// FUNCTION 141941a50 FUN_141941a50 body=511 status=ok
// SIG undefined FUN_141941a50(void)

undefined1 FUN_141941a50(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 local_res8;
  char local_res9;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  int iStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_14193c320(*param_1,&local_a0,param_2);
  FShapedGlyphSequence::GetKerning(local_a0,&local_res8,param_3);
  if (local_res9 == '\0') {
    local_7c = *(undefined2 *)(param_2 + 0xc);
    local_80 = *(undefined4 *)(param_2 + 8);
    local_58 = *(undefined4 *)(param_2 + 0x30);
    uStack_54 = *(undefined4 *)(param_2 + 0x34);
    uStack_50 = *(undefined4 *)(param_2 + 0x38);
    uStack_4c = *(undefined4 *)(param_2 + 0x3c);
    local_78 = *(undefined8 *)(param_2 + 0x10);
    local_70 = *(undefined8 *)(param_2 + 0x18);
    local_48 = *(undefined8 *)(param_2 + 0x40);
    local_68 = *(undefined4 *)(param_2 + 0x20);
    uStack_64 = *(undefined4 *)(param_2 + 0x24);
    uStack_60 = *(undefined4 *)(param_2 + 0x28);
    uStack_5c = *(undefined4 *)(param_2 + 0x2c);
    local_40 = *(longlong **)(param_2 + 0x48);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_38 = *(undefined8 *)(param_2 + 0x50);
    local_30 = *(undefined4 *)(param_2 + 0x58);
    local_2c = *(undefined1 *)(param_2 + 0x5c);
    iStack_8c = param_3 + 2;
    local_88 = CONCAT44(iStack_8c,param_3);
    local_90 = param_3;
    puVar7 = (undefined8 *)FUN_14193c320(*param_1,local_28,&local_88,param_4);
    uVar4 = *puVar7;
    *puVar7 = local_a0;
    plVar5 = (longlong *)puVar7[1];
    puVar7[1] = local_98;
    local_a0 = uVar4;
    local_98 = plVar5;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    puVar8 = (undefined1 *)FShapedGlyphSequence::GetKerning(local_a0,local_a8,param_3);
    plVar5 = local_40;
    if ((puVar8 != &local_res8) && (local_res9 = '\0', puVar8[1] != '\0')) {
      local_res8 = *puVar8;
      local_res9 = '\x01';
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
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
    if (local_res9 == '\0') {
      uVar9 = 0;
      goto LAB_141941bfa;
    }
  }
  local_res9 = '\0';
  uVar9 = local_res8;
LAB_141941bfa:
  plVar5 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_98 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98)(local_98);
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
  return uVar9;
}



// FUNCTION 141941c50 FUN_141941c50 body=1274 status=ok
// SIG undefined FUN_141941c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141941c50(longlong *param_1,longlong *param_2,int *param_3,int *param_4,undefined8 param_5,
             undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined8 local_108;
  int local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined1 local_ac;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_168 = param_6;
  local_120 = param_5;
  plVar7 = (longlong *)FUN_14193c320(*param_2,local_a8,param_3,param_5);
  local_158 = *plVar7;
  uStack_150 = (longlong *)plVar7[1];
  if (uStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_150 + 1) = (int)uStack_150[1] + 1;
    UNLOCK();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a0 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((*param_3 == *param_4) && (param_3[1] == param_4[1])) goto LAB_1419420ca;
  local_fc = (undefined2)param_3[3];
  local_100 = param_3[2];
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  uStack_d0 = *(undefined8 *)(param_3 + 0xe);
  local_f8 = *(undefined8 *)(param_3 + 4);
  local_f0 = *(undefined8 *)(param_3 + 6);
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = param_3[8];
  iStack_e4 = param_3[9];
  iStack_e0 = param_3[10];
  iStack_dc = param_3[0xb];
  local_c0 = *(longlong **)(param_3 + 0x12);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  local_b8 = *(undefined8 *)(param_3 + 0x14);
  local_b0 = param_3[0x16];
  local_ac = (undefined1)param_3[0x17];
  lVar8 = *param_2;
  local_108 = *(undefined8 *)param_4;
  TSet<TTuple<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>_>,TDefaultMapHashableKeyFuncs<FCachedShapedTextKey,TSharedPtr<FShapedGlyphSequence_const_,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 8,local_148,&local_108);
  if ((local_148[0] == -1) ||
     (lVar8 = (longlong)local_148[0] * 0x78 + *(longlong *)(lVar8 + 8), lVar8 == 0)) {
    lVar10 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar10 = *(longlong *)(lVar8 + 0x60);
    plVar7 = *(longlong **)(lVar8 + 0x68);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  if (lVar10 == 0) {
LAB_141941e6c:
    plVar9 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = (longlong *)0x0;
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
LAB_141941e9f:
    plVar7 = (longlong *)
             FShapedGlyphSequence::GetSubSequence(local_158,local_98,*param_4,param_4[1]);
    if (&local_158 != plVar7) {
      local_158 = *plVar7;
      *plVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_150,plVar7 + 1);
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_158 == 0) {
      local_178 = local_168;
      plVar7 = (longlong *)FUN_14193c520(*param_2,local_78,&local_108,local_120);
      local_128 = (longlong *)plVar7[1];
      local_158 = *plVar7;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_128 + 1) = (int)local_128[1] + 1;
        UNLOCK();
      }
      local_130 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_150,&local_128);
      plVar7 = local_128;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_128 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      plVar7 = uStack_150;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = uStack_150;
          if (iVar4 == 1) {
            lVar8 = *local_70;
            goto LAB_141942050;
          }
        }
      }
    }
    else {
      local_88 = (undefined4)local_158;
      uStack_84 = local_158._4_4_;
      uStack_80 = (undefined4)uStack_150;
      uStack_7c = uStack_150._4_4_;
      if (uStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_150 + 1) = (int)uStack_150[1] + 1;
        UNLOCK();
      }
      FUN_141927cb0(*param_2,local_118,&local_108,&local_88);
      plVar3 = local_110;
      plVar7 = uStack_150;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_110 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = uStack_150;
          if (iVar4 == 1) {
            lVar8 = *local_110;
            local_70 = local_110;
LAB_141942050:
            (**(code **)(lVar8 + 8))(local_70,1);
            plVar7 = uStack_150;
          }
        }
      }
    }
  }
  else {
    cVar6 = FShapedGlyphSequence::IsDirty(lVar10);
    plVar3 = uStack_150;
    if (cVar6 != '\0') goto LAB_141941e6c;
    plVar9 = plVar7;
    if (lVar10 == 0) goto LAB_141941e9f;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_140._0_4_ = (undefined4)lVar10;
    local_68 = (undefined4)local_140;
    local_140._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
    uStack_64 = local_140._4_4_;
    uStack_138._0_4_ = SUB84(plVar7,0);
    uStack_60 = (undefined4)uStack_138;
    uStack_138._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
    uStack_5c = uStack_138._4_4_;
    local_140 = local_158;
    uStack_138 = uStack_150;
    local_158 = lVar10;
    if (uStack_150 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_150 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 != 1) goto LAB_141942058;
      puVar5 = (undefined8 *)*uStack_150;
      uStack_150 = plVar7;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = uStack_150;
      if (iVar4 != 1) goto LAB_141942058;
      lVar8 = *uStack_138;
      local_70 = uStack_138;
      goto LAB_141942050;
    }
  }
LAB_141942058:
  uStack_150 = plVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar7 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c0 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c0)(local_c0);
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
LAB_1419420ca:
  plVar7 = uStack_150;
  *param_1 = local_158;
  param_1[1] = (longlong)uStack_150;
  if (uStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_150 + 1) = (int)uStack_150[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = uStack_150 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_150)(uStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_150 + 8))(uStack_150,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 141942170 GetSize body=48 status=ok
// SIG undefined GetSize(void)

float * FTextLayout::GetSize(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 / *(float *)(param_1 + 0x8c);
  fVar1 = *(float *)(param_1 + 0xb0);
  param_2[1] = fVar2 * *(float *)(param_1 + 0xb8);
  *param_2 = fVar2 * fVar1;
  return param_2;
}



// FUNCTION 1419421a0 FUN_1419421a0 body=30 status=ok
// SIG undefined FUN_1419421a0(void)

undefined8 FUN_1419421a0(longlong param_1,undefined8 param_2)

{
  TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + -0x200);
  return param_2;
}



// FUNCTION 1419421c0 FUN_1419421c0 body=187 status=ok
// SIG undefined FUN_1419421c0(void)

undefined8 * FUN_1419421c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + -0x200) != 0) && (*(longlong *)(param_1 + -0x1f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + -0x1f8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      puVar5 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                         ((longlong *)(param_1 + -0x200),local_18);
      *param_2 = *puVar5;
      lVar3 = puVar5[1];
      param_2[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_10 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)local_10 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141942290 FUN_141942290 body=123 status=ok
// SIG undefined FUN_141942290(void)

undefined * FUN_141942290(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f4828) {
    _Init_thread_header(&DAT_1469f4828);
    if (DAT_1469f4828 == -1) {
      FSlotBase::FSlotBase(&DAT_1469f4808);
      atexit((_func_5014 *)&LAB_143e83730);
      _Init_thread_footer(&DAT_1469f4828);
      return &DAT_1469f4808;
    }
  }
  return &DAT_1469f4808;
}



// FUNCTION 141942310 FUN_141942310 body=134 status=ok
// SIG undefined FUN_141942310(void)

undefined8 * FUN_141942310(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x500) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x4f8);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_18);
      *(undefined8 *)(param_1 + 0x4e0) = local_18;
      *(undefined8 *)(param_1 + 0x4e8) = uStack_10;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x4e8);
  *param_2 = *(undefined8 *)(param_1 + 0x4e0);
  param_2[1] = uVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 1419423a0 FUN_1419423a0 body=99 status=ok
// SIG undefined FUN_1419423a0(void)

undefined8 FUN_1419423a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x458) != 0) {
    if (*(longlong **)(param_1 + 0x450) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x450) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x458) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x450);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined8 *)(param_1 + 0x440) = uVar2;
      }
    }
    return *(undefined8 *)(param_1 + 0x440);
  }
  return *(undefined8 *)(param_1 + 0x440);
}



// FUNCTION 141942410 GetTabLabel body=41 status=ok
// SIG undefined GetTabLabel(void)

undefined8 SDockTab::GetTabLabel(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = TAttribute<FText>::Get(param_1 + 0x410);
  FText::FText(param_2,uVar1);
  return param_2;
}



// FUNCTION 141942440 FUN_141942440 body=184 status=ok
// SIG undefined FUN_141942440(void)

undefined8 * FUN_141942440(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x3a0);
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
          plVar5 = *(longlong **)(param_1 + 0x398);
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



// FUNCTION 141942500 FUN_141942500 body=179 status=ok
// SIG undefined FUN_141942500(void)

undefined4 * FUN_141942500(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  cVar5 = FUN_141943900();
  if (cVar5 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x4a0);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x4a8);
  }
  iVar1 = *(int *)(param_1 + 0x458);
  uVar2 = *(undefined4 *)(lVar7 + 0x6c4);
  uVar3 = *(undefined4 *)(lVar7 + 0x6c8);
  uVar4 = *(undefined4 *)(lVar7 + 0x6cc);
  *param_2 = *(undefined4 *)(lVar7 + 0x6c0);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if ((iVar1 != 0) && (*(longlong **)(param_1 + 0x450) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x450) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x458) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0x450);
      }
      uVar6 = (**(code **)(*plVar8 + 0x38))();
      *(undefined8 *)(param_1 + 0x440) = uVar6;
    }
  }
  lVar7 = FUN_14183ac90();
  if (*(longlong *)(param_1 + 0x440) != lVar7) {
    param_2[1] = (float)param_2[1] * 0.85;
    param_2[3] = (float)param_2[3] * 0.85;
  }
  return param_2;
}



// FUNCTION 1419425c0 FUN_1419425c0 body=8 status=ok
// SIG undefined FUN_1419425c0(void)

undefined1 FUN_1419425c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3f8);
}



// FUNCTION 1419425d0 GetTabWellBrush body=56 status=ok
// SIG undefined GetTabWellBrush(void)

longlong SDockTab::GetTabWellBrush(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_141943900();
  if (cVar1 == '\0') {
    return *(longlong *)(param_1 + 0x4a0) + 0x638;
  }
  return *(longlong *)(param_1 + 0x4a8) + 0x638;
}



// FUNCTION 141942610 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 SEditableText::GetText(longlong param_1,undefined8 param_2)

{
  FSlateEditableTextLayout::GetText(*(undefined8 *)(param_1 + 0x220));
  return param_2;
}



// FUNCTION 141942660 FUN_141942660 body=336 status=ok
// SIG undefined FUN_141942660(void)

int FUN_141942660(longlong param_1,undefined8 *param_2,float *param_3,float param_4,
                 undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  undefined1 local_48 [4];
  int local_44;
  undefined1 local_40 [16];
  longlong *local_30;
  
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_res10);
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_res18);
  fVar3 = *param_3;
  if ((((fVar3 < local_res10) || (local_res18 + local_res10 <= fVar3)) || (param_3[1] < local_res14)
      ) || (local_res1c + local_res14 <= param_3[1])) {
    iVar7 = -1;
  }
  else {
    if (param_4 * *(float *)(*(longlong *)(param_1 + 0x90) + 8) * 0.5 + local_res10 < fVar3) {
      iVar7 = *(int *)(param_1 + 0x8c);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x88);
    }
    if (param_5 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_48);
      (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,local_40);
      uVar6 = 0;
      if (iVar7 == local_44) {
        uVar6 = 2;
      }
      *param_5 = uVar6;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  return iVar7;
}



// FUNCTION 1419427b0 FUN_1419427b0 body=499 status=ok
// SIG undefined FUN_1419427b0(void)

int FUN_1419427b0(longlong param_1,undefined8 *param_2,float *param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 uVar6;
  int local_res10;
  int local_res14;
  float local_res18;
  float local_res1c;
  float local_68;
  float local_64;
  longlong local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_40 [16];
  longlong *local_30;
  char local_28;
  
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_res18);
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_68);
  if ((((*param_3 < local_res18) || (local_68 + local_res18 <= *param_3)) ||
      (param_3[1] < local_res1c)) || (local_64 + local_res1c <= param_3[1])) {
    iVar5 = -1;
  }
  else {
    (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_res10);
    (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,local_40);
    FSlatePasswordRun::BuildPasswordString(&local_60,local_res14 - local_res10);
    FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_50);
    iVar5 = (**(code **)(*local_50 + 0x30))
                      (local_50,&local_60,param_1 + 0x90,(int)(*param_3 - local_res18),param_4);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)();
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
    if (local_28 == '\x01') {
      if (local_58 == 0) {
        local_58 = 0;
      }
      else {
        local_58 = local_58 + -1;
      }
      iVar5 = local_58 - iVar5;
    }
    iVar5 = iVar5 + local_res10;
    if (param_5 != (undefined1 *)0x0) {
      uVar6 = 0;
      if (iVar5 == local_res14) {
        uVar6 = 2;
      }
      *param_5 = uVar6;
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
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
  }
  return iVar5;
}



// FUNCTION 1419429b0 FUN_1419429b0 body=558 status=ok
// SIG undefined FUN_1419429b0(void)

int FUN_1419429b0(longlong param_1,undefined8 *param_2,float *param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  undefined1 local_b0 [4];
  int local_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_48 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_res10);
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_res18);
  if ((((*param_3 < local_res10) || (local_res18 + local_res10 <= *param_3)) ||
      (param_3[1] < local_res14)) || (local_res1c + local_res14 <= param_3[1])) {
    iVar7 = -1;
  }
  else {
    (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_b0);
    (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,local_48);
    iVar7 = *(int *)(*(undefined8 **)(param_1 + 0x78) + 1);
    if (iVar7 == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
    }
    local_88 = *(undefined8 *)(param_1 + 0xa0);
    uStack_80 = *(undefined8 *)(param_1 + 0xa8);
    uVar6 = iVar7 - 1;
    local_78 = *(undefined4 *)(param_1 + 0xb0);
    uStack_74 = *(undefined4 *)(param_1 + 0xb4);
    uStack_70 = *(undefined4 *)(param_1 + 0xb8);
    uStack_6c = *(undefined4 *)(param_1 + 0xbc);
    if (iVar7 == 0) {
      uVar6 = 0;
    }
    local_a8 = (ulonglong)uVar6 << 0x20;
    local_9c = local_48[0];
    local_98 = *(undefined8 *)(param_1 + 0x90);
    local_90 = *(undefined8 *)(param_1 + 0x98);
    local_68 = *(undefined8 *)(param_1 + 0xc0);
    local_60 = *(longlong **)(param_1 + 200);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_1 + 0xd0);
    local_50 = *(undefined4 *)(param_1 + 0xd8);
    local_4c = *(undefined1 *)(param_1 + 0xdc);
    local_a0 = param_4;
    iVar7 = FUN_14193bb30(local_40,&local_a8,local_b0,puVar9,(int)(*param_3 - local_res10));
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
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (param_5 != (undefined1 *)0x0) {
      uVar8 = 0;
      if (iVar7 == local_ac) {
        uVar8 = 2;
      }
      *param_5 = uVar8;
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  return iVar7;
}



// FUNCTION 141942be0 GetTextIndexAt body=363 status=ok
// SIG undefined GetTextIndexAt(void)

int FSlateWidgetRun::GetTextIndexAt
              (longlong param_1,undefined8 *param_2,float *param_3,float param_4,undefined1 *param_5
              )

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  float *pfVar6;
  int iVar7;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  undefined1 local_68 [4];
  int local_64;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  longlong *local_48;
  
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,&local_res10);
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_res18);
  if ((((*param_3 < local_res10) || (local_res10 + local_res18 <= *param_3)) ||
      (param_3[1] < local_res14)) || (local_res1c + local_res14 <= param_3[1])) {
    iVar7 = -1;
  }
  else {
    pfVar6 = (float *)SWidget::GetDesiredSize(*(undefined8 *)(param_1 + 0xa0),local_60);
    if (param_4 * *pfVar6 * 0.5 + local_res10 < *param_3) {
      iVar7 = *(int *)(param_1 + 0x9c);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x98);
    }
    if (param_5 != (undefined1 *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_68);
      (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,local_58);
      uVar5 = 0;
      if (iVar7 == local_64) {
        uVar5 = 2;
      }
      *param_5 = uVar5;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
  }
  return iVar7;
}



// FUNCTION 141942d50 GetTextLength body=28 status=ok
// SIG undefined GetTextLength(void)

int FTextLayout::FTextOffsetLocations::GetTextLength(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 != 0) {
    return *(int *)(*param_1 + -4 + (longlong)iVar1 * 8) +
           *(int *)(*param_1 + -8 + (longlong)iVar1 * 8);
  }
  return 0;
}



// FUNCTION 141942d70 FUN_141942d70 body=704 status=ok
// SIG undefined FUN_141942d70(void)

int * FUN_141942d70(longlong param_1,int *param_2,longlong *param_3,float *param_4,
                   undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  float local_res18;
  undefined4 local_res1c;
  float *local_res20;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [16];
  longlong *local_70;
  char local_68;
  undefined1 local_60 [16];
  longlong *local_50;
  char local_48;
  
  iVar12 = 0;
  iVar6 = (int)param_3[1];
  local_res20 = param_4;
  if (0 < iVar6) {
    local_b8 = 0;
    do {
      lVar3 = *param_3;
      plVar11 = *(longlong **)(lVar3 + local_b8);
      puVar7 = (undefined8 *)(**(code **)(*plVar11 + 8))(plVar11,local_90);
      plVar4 = (longlong *)*puVar7;
      lVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,local_a0);
      local_res1c = *(undefined4 *)(lVar8 + 4);
      local_res18 = *local_res20;
      iVar6 = (**(code **)(*plVar4 + 0x40))
                        (plVar4,(undefined8 *)(lVar3 + local_b8),&local_res18,
                         *(undefined4 *)(param_1 + 0x8c),param_5);
      plVar11 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_88 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (iVar6 != -1) {
        *param_2 = *(int *)((longlong)param_3 + 0x54);
        param_2[1] = iVar6;
        return param_2;
      }
      iVar12 = iVar12 + 1;
      iVar6 = (int)param_3[1];
      local_b8 = local_b8 + 0x10;
    } while (iVar12 < iVar6);
  }
  pfVar5 = local_res20;
  iVar12 = *(int *)((longlong)param_3 + 0x54);
  iVar2 = *(int *)(*(longlong *)((longlong)iVar12 * 0x70 + *(longlong *)(param_1 + 0x18)) + 8);
  iVar10 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar10 = 0;
  }
  if ((iVar10 == 0) || (iVar6 == 0)) {
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
      iVar12 = *(int *)((longlong)param_3 + 0x54);
    }
    *param_2 = iVar12;
    param_2[1] = 0;
  }
  else {
    pfVar9 = (float *)(**(code **)(**(longlong **)*param_3 + 0x38))(*(longlong **)*param_3,local_98)
    ;
    puVar7 = (undefined8 *)*param_3;
    if (*pfVar9 < *pfVar5 || *pfVar9 == *pfVar5) {
      lVar3 = param_3[1];
      (**(code **)(*(longlong *)puVar7[(longlong)(int)lVar3 * 2 + -2] + 0x10))
                ((longlong *)puVar7[(longlong)(int)lVar3 * 2 + -2],&local_a8);
      (**(code **)(*(longlong *)puVar7[(longlong)(int)lVar3 * 2 + -2] + 0x20))
                ((longlong *)puVar7[(longlong)(int)lVar3 * 2 + -2],local_60);
      plVar11 = local_50;
      if (local_48 == '\0') {
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 2;
        }
        *param_2 = *(int *)((longlong)param_3 + 0x54);
        local_b0 = local_a4;
      }
      else {
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 1;
        }
        *param_2 = *(int *)((longlong)param_3 + 0x54);
        local_b0 = local_a8;
      }
    }
    else {
      (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,&local_b0);
      (**(code **)(*(longlong *)*puVar7 + 0x20))((longlong *)*puVar7,local_80);
      plVar11 = local_70;
      if (local_68 == '\0') {
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 1;
        }
        *param_2 = *(int *)((longlong)param_3 + 0x54);
      }
      else {
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 2;
        }
        *param_2 = *(int *)((longlong)param_3 + 0x54);
        local_b0 = local_ac;
      }
    }
    param_2[1] = local_b0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar11 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141943030 GetTextLocationAt body=254 status=ok
// SIG undefined GetTextLocationAt(void)

undefined8 *
FTextLayout::GetTextLocationAt
          (longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  float *pfVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = 0;
  uVar4 = 0;
  if (iVar1 == 0) {
    *param_2 = 0;
    return param_2;
  }
  if (0 < iVar1) {
    pfVar2 = (float *)(*(longlong *)(param_1 + 0x28) + 0x34);
    uVar5 = uVar3;
    do {
      if ((float)param_3[1] < *pfVar2) {
        uVar4 = (int)uVar5 - 1;
        if ((int)uVar4 < 1) {
          uVar4 = 0;
        }
        break;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 1;
      pfVar2 = pfVar2 + 0x16;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  if ((int)uVar4 < iVar1) {
    if ((*(float *)((longlong)(int)uVar4 * 0x58 + 0x3c + lVar6) +
         *(float *)((longlong)(int)uVar4 * 0x58 + 0x34 + lVar6) < (float)param_3[1]) &&
       ((int)uVar4 < iVar1 + -1)) {
      uVar4 = uVar4 + 1;
    }
    local_res8 = *param_3;
    lVar6 = (longlong)(int)uVar4 * 0x58 + lVar6;
    param_3 = &local_res8;
    local_resc = *(undefined4 *)(lVar6 + 0x34);
  }
  else {
    lVar6 = (longlong)(iVar1 + -1) * 0x58 + lVar6;
  }
  FUN_141942d70(param_1,param_2,lVar6,param_3,param_4);
  return param_2;
}



// FUNCTION 141943130 FUN_141943130 body=110 status=ok
// SIG undefined FUN_141943130(void)

float FUN_141943130(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x508) != 0) && (*(longlong **)(param_1 + 0x500) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x508) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x500);
      }
      uVar3 = (**(code **)(*plVar2 + 0x38))();
      *(undefined4 *)(param_1 + 0x4f8) = uVar3;
    }
  }
  fVar4 = *(float *)(param_1 + 0x4f8) - *(float *)(*(longlong *)(param_1 + 0x380) + 0x230);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}



// FUNCTION 1419431a0 GetTextOffsetLocations body=303 status=ok
// SIG undefined GetTextOffsetLocations(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FTextLayout::GetTextOffsetLocations(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_res10;
  int local_res14;
  int local_res18;
  int iStackX_1c;
  longlong local_res20;
  
  iVar8 = 0;
  if ((param_2 != (longlong *)0x0) && (*(int *)((longlong)param_2 + 0xc) < *(int *)(param_1 + 0x20))
     ) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    local_res20 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18) + local_res20;
      if (0 < lVar6) {
        iVar8 = iVar8 + _DAT_1464bfe70;
      }
      iVar4 = 0;
      iVar3 = 0;
      if (0 < *(int *)(lVar2 + 0x30)) {
        lVar7 = 0;
        do {
          plVar1 = *(longlong **)(lVar7 + *(longlong *)(lVar2 + 0x28));
          (**(code **)(*plVar1 + 8))(plVar1,&local_res10);
          lVar7 = lVar7 + 0x30;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + (local_res14 - local_res10);
        } while (iVar3 < *(int *)(lVar2 + 0x30));
      }
      lVar2 = local_res20;
      if (param_2 != (longlong *)0x0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        local_res18 = iVar8;
        iStackX_1c = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = CONCAT44(iStackX_1c,local_res18);
      }
      iVar8 = iVar8 + iVar4;
      local_res20 = lVar2 + 0x70;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1419432f0 GetTypeHash body=760 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = GetTypeHash();
  uVar5 = *(uint *)(param_1 + 8);
  uVar6 = uVar2 >> 0xd ^ -uVar2;
  uVar4 = (-0x61c88647 - uVar6) - uVar2 ^ uVar6 << 8;
  uVar8 = (uVar2 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar8 ^ uVar8 >> 0xc;
  uVar2 = (uVar4 - uVar6) - uVar8 ^ uVar6 << 0x10;
  uVar8 = (uVar8 - uVar2) - uVar6 ^ uVar2 >> 5;
  uVar4 = (uVar6 - uVar2) - uVar8 ^ uVar8 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar8 ^ uVar4 << 10;
  uVar4 = ((uVar8 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar8 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar5) - uVar8 ^ uVar8 << 0x10;
  uVar6 = (uint)*(byte *)(param_1 + 0xd);
  uVar4 = (uVar5 - uVar2) - uVar8 ^ uVar2 >> 5;
  uVar9 = (uVar8 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar7 = (uVar2 - uVar4) - uVar9 ^ uVar9 << 10;
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar2 = (uint)bVar1 * -0x100 ^ 0x9e3779b9;
  uVar8 = ((uint)bVar1 + (uint)bVar1) - uVar2 ^ uVar2 >> 0xd;
  uVar5 = (-uVar2 - (uint)bVar1) - uVar8 ^ uVar8 >> 0xc;
  uVar2 = (uVar2 - uVar5) - uVar8 ^ uVar5 << 0x10;
  uVar8 = (uVar8 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar5 = (uVar5 - uVar2) - uVar8 ^ uVar8 >> 3;
  uVar2 = (uVar2 - uVar5) - uVar8 ^ uVar5 << 10;
  uVar5 = (uVar8 - uVar2) - uVar5 ^ uVar2 >> 0xf;
  iVar3 = uVar5 - uVar6;
  uVar2 = ((uVar6 - uVar5) - (uint)*(byte *)(param_1 + 0xd)) + 0x9e3779b9 ^ iVar3 * 0x100;
  uVar6 = (uVar6 - uVar2) - iVar3 ^ uVar2 >> 0xd;
  uVar5 = (iVar3 - uVar2) - uVar6 ^ uVar6 >> 0xc;
  uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar5 = (uVar5 - uVar2) - uVar6 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar6 = (uVar6 - uVar2) - uVar5 ^ uVar2 >> 0xf;
  uVar2 = ((uVar4 - uVar7) - uVar9 ^ uVar7 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar2) - uVar6 ^ uVar2 << 8;
  uVar4 = (uVar6 - uVar5) - uVar2 ^ uVar5 >> 0xd;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar6 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar4 = (uVar2 - uVar5) - uVar6 ^ uVar6 >> 3;
  uVar2 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar5 = GetTypeHash(param_1 + 0x10);
  uVar2 = ((uVar6 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - uVar5 ^ uVar2 << 8;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar5 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}



// FUNCTION 1419435f0 FUN_1419435f0 body=124 status=ok
// SIG undefined FUN_1419435f0(void)

undefined * FUN_1419435f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f47e8) {
    _Init_thread_header(&DAT_1469f47e8);
    if (DAT_1469f47e8 == -1) {
      FName::FName(&DAT_1469f47e0,L"FReflectionMetaData",1);
      _Init_thread_footer(&DAT_1469f47e8);
      return &DAT_1469f47e0;
    }
  }
  return &DAT_1469f47e0;
}



// FUNCTION 141943670 FUN_141943670 body=126 status=ok
// SIG undefined FUN_141943670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141943670(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x2d8) == 0) {
    return (ulonglong)*(uint *)(param_1 + 0x2c8);
  }
  if (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x2d8) != 0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x38))();
        *(int *)(param_1 + 0x2c8) = (int)uVar2;
        return uVar2;
      }
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      *(int *)(param_1 + 0x2c8) = (int)uVar2;
      return uVar2;
    }
  }
  return (ulonglong)*(uint *)(param_1 + 0x2c8);
}



// FUNCTION 1419436f0 FUN_1419436f0 body=145 status=ok
// SIG undefined FUN_1419436f0(void)

undefined8 FUN_1419436f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong local_18 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x368);
  if ((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x300) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x2f8);
      }
      uVar4 = (**(code **)(*plVar3 + 0x38))();
      *(undefined4 *)(param_1 + 0x2f0) = uVar4;
    }
  }
  (**(code **)(*plVar1 + 8))(plVar1,local_18,(undefined4 *)(param_1 + 0x2f0));
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141943790 GetVirtualKeyboardDismissAction body=98 status=ok
// SIG undefined GetVirtualKeyboardDismissAction(void)

undefined1 SEditableText::GetVirtualKeyboardDismissAction(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x298) != 0) {
    if (*(longlong **)(param_1 + 0x290) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x290) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x298) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x290);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x288) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x288);
  }
  return *(undefined1 *)(param_1 + 0x288);
}



// FUNCTION 141943810 GetVirtualKeyboardTrigger body=96 status=ok
// SIG undefined GetVirtualKeyboardTrigger(void)

undefined4 SEditableText::GetVirtualKeyboardTrigger(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x280) != 0) {
    if (*(longlong **)(param_1 + 0x278) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x278);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined4 *)(param_1 + 0x270) = uVar2;
      }
    }
    return *(undefined4 *)(param_1 + 0x270);
  }
  return *(undefined4 *)(param_1 + 0x270);
}



// FUNCTION 141943870 GetVirtualKeyboardType body=96 status=ok
// SIG undefined GetVirtualKeyboardType(void)

undefined4 SEditableText::GetVirtualKeyboardType(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x260) != 0) {
    if (*(longlong **)(param_1 + 600) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x260) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 600);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined4 *)(param_1 + 0x250) = uVar2;
      }
    }
    return *(undefined4 *)(param_1 + 0x250);
  }
  return *(undefined4 *)(param_1 + 0x250);
}



// FUNCTION 1419438d0 GetVisualJustification body=45 status=ok
// SIG undefined GetVisualJustification(void)

int FTextLayout::GetVisualJustification(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((0 < *(int *)(param_1 + 0x30)) && (*(char *)(*(longlong *)(param_1 + 0x28) + 0x50) == '\x01'))
  {
    if (iVar1 == 0) {
      return 2;
    }
    if (iVar1 == 2) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



// FUNCTION 141943900 FUN_141943900 body=650 status=ok
// SIG undefined FUN_141943900(void)

ulonglong FUN_141943900(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  bool bVar12;
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
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(char *)(param_1 + 0x3f8) == '\x02') {
    lVar3 = *(longlong *)(param_1 + 0x5b8);
    if (lVar3 == 0) {
      plVar9 = (longlong *)FUN_1419410f0(param_1,local_58);
      bVar5 = false;
      bVar12 = false;
      if (*plVar9 == 0) {
LAB_1419439b4:
        bVar6 = false;
      }
      else {
        puVar10 = (undefined8 *)FUN_1419410f0(param_1,local_68);
        plVar9 = (longlong *)FUN_1418fdd60(*puVar10,local_78);
        bVar5 = true;
        bVar12 = true;
        if (*plVar9 == 0) goto LAB_1419439b4;
        bVar6 = true;
      }
      if ((bVar12) && (local_70 != (longlong *)0x0)) {
        LOCK();
        plVar9 = local_70 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        uVar7 = (int)lVar3 - 1;
        plVar9 = (longlong *)(ulonglong)uVar7;
        if (uVar7 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = (longlong *)(ulonglong)(iVar2 - 1U);
          if (iVar2 - 1U == 0) {
            plVar9 = (longlong *)(**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if ((bVar5) && (local_60 != (longlong *)0x0)) {
        LOCK();
        plVar9 = local_60 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        uVar7 = (int)lVar3 - 1;
        plVar9 = (longlong *)(ulonglong)uVar7;
        if (uVar7 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = (longlong *)(ulonglong)(iVar2 - 1U);
          if (iVar2 - 1U == 0) {
            plVar9 = (longlong *)(**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_50 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        uVar7 = (int)lVar3 - 1;
        plVar9 = (longlong *)(ulonglong)uVar7;
        if (uVar7 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = (longlong *)(ulonglong)(iVar2 - 1U);
          if (iVar2 - 1U == 0) {
            plVar9 = (longlong *)(**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (bVar6) {
        puVar10 = (undefined8 *)FUN_1419410f0(param_1,local_28);
        puVar10 = (undefined8 *)FUN_1418fdd60(*puVar10,local_38);
        uVar4 = *puVar10;
        plVar8 = (longlong *)FUN_1418fc990();
        plVar9 = (longlong *)FUN_1418ff8c0(uVar4,local_48);
        bVar12 = *plVar9 == *plVar8;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_40 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          uVar7 = (int)lVar3 - 1;
          plVar9 = (longlong *)(ulonglong)uVar7;
          if (uVar7 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = (longlong *)(ulonglong)(iVar2 - 1U);
            if (iVar2 - 1U == 0) {
              plVar9 = (longlong *)(**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_30 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          uVar7 = (int)lVar3 - 1;
          plVar9 = (longlong *)(ulonglong)uVar7;
          if (uVar7 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = (longlong *)(ulonglong)(iVar2 - 1U);
            if (iVar2 - 1U == 0) {
              plVar9 = (longlong *)(**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        goto joined_r0x000141943b3c;
      }
    }
    else {
      plVar8 = (longlong *)FUN_1418fc990();
      plVar9 = (longlong *)FUN_1418ff8c0(lVar3,local_88);
      bVar12 = *plVar9 == *plVar8;
      local_20 = local_80;
joined_r0x000141943b3c:
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_20 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        uVar7 = (int)lVar3 - 1;
        plVar9 = (longlong *)(ulonglong)uVar7;
        if (uVar7 == 0) {
          plVar9 = (longlong *)(**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            plVar9 = (longlong *)(**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      if (!bVar12) goto LAB_141943b70;
    }
    uVar11 = (ulonglong)plVar9 & 0xffffffffffffff00;
  }
  else {
LAB_141943b70:
    uVar11 = (ulonglong)*(byte *)(param_1 + 0x3f8);
  }
  return uVar11;
}



// FUNCTION 141943b90 FUN_141943b90 body=452 status=ok
// SIG undefined FUN_141943b90(void)

undefined8 FUN_141943b90(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_48 [2];
  longlong local_38 [2];
  
  plVar10 = (longlong *)param_2[0x26];
  plVar9 = plVar10 + (longlong)(int)param_2[0x27] * 2;
  do {
    if (plVar10 == plVar9) {
      plVar9 = (longlong *)0x0;
LAB_141943bf3:
      (**(code **)(*param_2 + 0x1c8))(param_2,param_1);
LAB_141943c03:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
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
      return param_1;
    }
    plVar3 = (longlong *)*plVar10;
    lVar4 = *plVar3;
    uVar6 = FUN_1419435f0();
    cVar5 = (**(code **)(lVar4 + 8))(plVar3,uVar6);
    if (cVar5 != '\0') {
      plVar9 = (longlong *)plVar10[1];
      lVar4 = *plVar10;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar9 + 1;
            lVar7 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar9)(plVar9);
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
        }
      }
      if ((lVar4 == 0) || (lVar7 = FWeakObjectPtr::Get(lVar4 + 0x20), lVar7 == 0))
      goto LAB_141943bf3;
      lVar7 = FWeakObjectPtr::Get(lVar4 + 0x20);
      local_res18 = *(undefined8 *)(lVar7 + 0x18);
      local_res10 = *(undefined8 *)(lVar4 + 8);
      puVar8 = (undefined8 *)FName::ToString(&local_res10,local_38);
      puVar12 = &DAT_143f3eda8;
      if (*(int *)(puVar8 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar8;
      }
      puVar8 = (undefined8 *)FName::ToString(&local_res18,local_48);
      if (*(int *)(puVar8 + 1) != 0) {
        puVar12 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(param_1,L"%s [%s]",puVar12,puVar11);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      goto LAB_141943c03;
    }
    plVar10 = plVar10 + 2;
  } while( true );
}



// FUNCTION 141943d60 GetWordAt body=531 status=ok
// SIG undefined GetWordAt(void)

undefined8 * FTextLayout::GetWordAt(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  short *psVar8;
  longlong *plVar9;
  longlong local_48;
  ulonglong local_40;
  
  iVar1 = *param_3;
  iVar3 = param_3[1];
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x20) <= iVar1)) {
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  plVar9 = (longlong *)((longlong)iVar1 * 0x70 + *(longlong *)(param_1 + 0x18));
  if (*(int *)((undefined8 *)*plVar9 + 1) == 0) {
    psVar8 = &DAT_143f3eda8;
  }
  else {
    psVar8 = *(short **)*plVar9;
  }
  local_40 = 0;
  local_48 = 0;
  if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar8[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_40 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar8,(longlong)(int)uVar6 * 2);
  }
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))(*(longlong **)(param_1 + 0xf0),&local_48);
  if (local_48 != 0) {
    FMemory::Free();
  }
  lVar7 = **(longlong **)(param_1 + 0xf0);
  iVar4 = *(int *)(*plVar9 + 8) + -1;
  if (*(int *)(*plVar9 + 8) == 0) {
    iVar4 = 0;
  }
  if (iVar3 < iVar4) {
    iVar3 = (**(code **)(lVar7 + 0x58))(*(longlong **)(param_1 + 0xf0),iVar3);
  }
  else {
    iVar3 = (**(code **)(lVar7 + 0x38))();
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x40))();
  while (iVar4 != -1) {
    for (lVar7 = (longlong)iVar4; lVar7 < iVar3; lVar7 = lVar7 + 1) {
      cVar2 = FText::IsWhitespace(*(undefined2 *)(*(longlong *)*plVar9 + lVar7 * 2));
      if (cVar2 == '\0') goto LAB_141943ec2;
    }
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x40))();
    iVar3 = iVar4;
    iVar4 = iVar5;
  }
LAB_141943ec2:
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x20))();
  if ((iVar3 == iVar4) || (iVar4 == -1)) {
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    *param_2 = CONCAT44(iVar4,iVar1);
    param_2[1] = CONCAT44(iVar3,iVar1);
  }
  return param_2;
}



// FUNCTION 141943f80 GetWrappedSize body=48 status=ok
// SIG undefined GetWrappedSize(void)

float * FTextLayout::GetWrappedSize(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 / *(float *)(param_1 + 0x8c);
  fVar1 = *(float *)(param_1 + 0xb4);
  param_2[1] = fVar2 * *(float *)(param_1 + 0xb8);
  *param_2 = fVar2 * fVar1;
  return param_2;
}



// FUNCTION 141943fb0 FUN_141943fb0 body=347 status=ok
// SIG undefined FUN_141943fb0(void)

undefined1 * FUN_141943fb0(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar7;
  local_20 = (longlong *)puVar7[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x3a0);
  plVar9 = (longlong *)0x0;
  plVar8 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar8 = plVar9, !bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 0x398);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  cVar5 = FUN_141902310(plVar9,&local_28);
  uVar3 = DAT_1464b9eea;
  if (cVar5 != '\0') {
    uVar3 = DAT_1464b9ee8;
  }
  *param_2 = uVar3;
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
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141944110 FUN_141944110 body=40 status=ok
// SIG undefined FUN_141944110(void)

undefined8 FUN_141944110(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x10))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141944140 HasKeyboardFocus body=59 status=ok
// SIG undefined HasKeyboardFocus(void)

undefined8 SSpinBox<double>::HasKeyboardFocus(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1417ca600();
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(longlong **)(param_1 + 0x358) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x358) + 0x180))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141944180 FUN_141944180 body=52 status=ok
// SIG undefined FUN_141944180(void)

undefined1 FUN_141944180(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1417ca600();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x180))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419441c0 FUN_1419441c0 body=52 status=ok
// SIG undefined FUN_1419441c0(void)

undefined1 FUN_1419441c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1417ca600();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x180))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141944200 FUN_141944200 body=158 status=ok
// SIG undefined FUN_141944200(void)

ulonglong FUN_141944200(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  bool bVar5;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(longlong *)(param_1 + 0x220) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x228) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      local_10 = *(longlong *)(param_1 + 0x228);
      local_18 = 0;
      if (local_10 != 0) {
        LOCK();
        iVar3 = *(int *)(local_10 + 8);
        bVar5 = iVar3 == 0;
        if (bVar5) {
          *(int *)(local_10 + 8) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar5) {
          LOCK();
          bVar5 = iVar3 == *(int *)(local_10 + 8);
          if (bVar5) {
            *(int *)(local_10 + 8) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar5) {
            if (local_10 != 0) {
              local_18 = *(undefined8 *)(param_1 + 0x220);
            }
            goto LAB_141944281;
          }
          LOCK();
          iVar3 = *(int *)(local_10 + 8);
          bVar5 = iVar3 == 0;
          if (bVar5) {
            *(int *)(local_10 + 8) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        local_10 = 0;
      }
LAB_141944281:
      uVar4 = FUN_1418a07d0(DAT_1469f4590,&local_18);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1419442a0 IdenticalTo body=212 status=ok
// SIG undefined IdenticalTo(void)

bool TAttribute<FSlateColor>::IdenticalTo(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((*(int *)(param_1 + 0x38) == 0) || (*(longlong **)(param_1 + 0x30) == (longlong *)0x0)) {
LAB_1419442cb:
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar1 == '\0') goto LAB_1419442cb;
    cVar1 = '\x01';
  }
  if ((*(int *)(param_2 + 0x38) != 0) && (*(longlong **)(param_2 + 0x30) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x18))();
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_1419442ec;
    }
  }
  cVar2 = '\0';
LAB_1419442ec:
  if (cVar1 == cVar2) {
    if (cVar1 != '\0') {
      lVar4 = 0;
      lVar5 = lVar4;
      if ((*(int *)(param_2 + 0x38) != 0) &&
         (plVar3 = *(longlong **)(param_2 + 0x30), lVar5 = 0, plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        lVar5 = *plVar3;
      }
      if ((*(int *)(param_1 + 0x38) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x30), plVar3 != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
        lVar4 = *plVar3;
      }
      return lVar4 == lVar5;
    }
    if (*(char *)(param_1 + 0x28) == *(char *)(param_2 + 0x28)) {
      cVar1 = FSlateColor::operator==(param_1,param_2);
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}



// FUNCTION 141944380 Insert body=160 status=ok
// SIG undefined Insert(void)

int TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_>::Insert
              (longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 0x20);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x20),_Src,(longlong)(iVar1 - param_3) << 5);
  puVar3 = (undefined4 *)(*param_1 + (longlong)param_3 * 0x20);
  *puVar3 = *param_2;
  *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_2 + 4);
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(puVar3 + 6) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 141944420 Insert body=218 status=ok
// SIG undefined Insert(void)

int TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
              (longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 0x30);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x30),_Src,(longlong)(iVar1 - param_3) * 0x30);
  puVar3 = (undefined8 *)(*param_1 + (longlong)param_3 * 0x30);
  *puVar3 = *param_2;
  lVar2 = param_2[1];
  puVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar3[2] = 0;
  puVar3[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  puVar3[4] = 0;
  puVar3[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  return param_3;
}



// FUNCTION 141944500 FUN_141944500 body=1196 status=ok
// SIG undefined FUN_141944500(void)

undefined8 FUN_141944500(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  void *_Dst;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  
  iVar12 = *param_2;
  iVar3 = param_2[1];
  if ((iVar12 < 0) || ((int)param_1[4] <= iVar12)) {
    return 0;
  }
  plVar14 = (longlong *)((longlong)iVar12 * 0x70 + param_1[3]);
  iVar9 = *(int *)(param_3 + 1);
  puVar15 = (undefined8 *)*plVar14;
  uVar10 = iVar9 - 1;
  uVar16 = (ulonglong)uVar10;
  iVar12 = iVar9 + -1;
  if (iVar9 == 0) {
    uVar16 = 0xffffffff;
    uVar10 = 0xffffffff;
    iVar12 = -1;
  }
  uVar13 = 0;
  if (iVar9 == 0) {
    iVar12 = 0;
  }
  if (iVar12 != 0) {
    _Src = (void *)*param_3;
    if (*(int *)(puVar15 + 1) == 0) {
      if (iVar9 == 0) {
        uVar10 = 0;
      }
      if (uVar10 != 0) {
        *(uint *)(puVar15 + 1) = uVar10 + 1;
        if (*(int *)((longlong)puVar15 + 0xc) < (int)(uVar10 + 1)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar15);
        }
        _Dst = (void *)*puVar15;
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(int)uVar10 * 2);
        *(undefined2 *)((longlong)(int)uVar10 * 2 + (longlong)_Dst) = 0;
      }
    }
    else {
      if (iVar9 == 0) {
        uVar16 = uVar13;
      }
      TArray<wchar_t,FDefaultAllocator>::Insert(puVar15,_Src,uVar16,iVar3);
    }
  }
  *(byte *)(plVar14 + 0xd) = *(byte *)(plVar14 + 0xd) | 7;
  bVar5 = false;
  uVar16 = uVar13;
  if (0 < (int)plVar14[6]) {
    do {
      puVar15 = (undefined8 *)(plVar14[5] + uVar16);
      (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,&local_f8);
      iVar12 = (int)uVar13;
      if ((iVar3 < local_f8) || (iStack_f4 <= iVar3)) {
        if (iVar12 == (int)plVar14[6] + -1) {
          if (!bVar5) goto LAB_14194463b;
LAB_141944953:
          iVar9 = *(int *)(param_3 + 1) + -1;
          if (*(int *)(param_3 + 1) == 0) {
            iVar9 = 0;
          }
          iVar8 = iVar9 + local_f8;
          if (iVar8 < 1) {
            iVar8 = 0;
          }
          iVar9 = iStack_f4 + iVar9;
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          _local_f0 = CONCAT44(iVar9,iVar8);
          (**(code **)(*(longlong *)*puVar15 + 0x10))((longlong *)*puVar15,&local_f0);
        }
        else if (bVar5) goto LAB_141944953;
      }
      else {
LAB_14194463b:
        plVar4 = (longlong *)puVar15[1];
        plVar11 = (longlong *)*puVar15;
        bVar5 = true;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        bVar7 = (**(code **)(*plVar11 + 0x88))();
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar4 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        iVar9 = *(int *)(param_3 + 1);
        if ((bVar7 & 1) == 0) {
          iVar8 = iVar9 + -1;
          if (iVar3 == local_f8) {
            local_e0 = local_f8;
            if (iVar9 == 0) {
              iVar8 = 0;
            }
            local_dc = iVar8 + local_f8;
            (**(code **)(*param_1 + 0x30))(param_1,&local_68,plVar14,&local_e0);
            local_d8 = local_f8 + 1;
            local_d4 = *(int *)(param_3 + 1) + -1;
            if (*(int *)(param_3 + 1) == 0) {
              local_d4 = 0;
            }
            local_d4 = local_d4 + iStack_f4;
            (**(code **)(*(longlong *)*puVar15 + 0x10))((longlong *)*puVar15,&local_d8);
            local_c8 = local_68;
            local_c0 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            local_b8 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_a0 = 0;
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (plVar14 + 5,&local_c8,uVar13);
            if (local_a8 != 0) {
              FMemory::Free();
            }
            if (local_b8 != 0) {
              FMemory::Free();
            }
            plVar4 = local_c0;
            plVar11 = local_60;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_c0 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar11 = local_60;
                if (iVar9 == 1) {
                  (**(code **)(*local_c0 + 8))(local_c0,1);
                  plVar11 = local_60;
                }
              }
            }
          }
          else {
            local_d0 = iStack_f4;
            if (iVar9 == 0) {
              iVar8 = 0;
            }
            local_cc = iVar8 + iStack_f4;
            (**(code **)(*param_1 + 0x30))(param_1,&local_58,plVar14,&local_d0);
            local_98 = local_58;
            local_90 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            local_88 = 0;
            local_80 = 0;
            local_78 = 0;
            local_70 = 0;
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (plVar14 + 5,&local_98,iVar12 + 1);
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_88 != 0) {
              FMemory::Free();
            }
            plVar4 = local_90;
            plVar11 = local_50;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_90 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar11 = local_50;
                if (iVar9 == 1) {
                  (**(code **)(*local_90 + 8))(local_90,1);
                  plVar11 = local_50;
                }
              }
            }
          }
          iVar12 = iVar12 + 1;
          uVar16 = uVar16 + 0x30;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar11 + 1;
            lVar6 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
        }
        else {
          local_e8 = local_f8;
          local_e4 = iVar9 + -1;
          if (iVar9 == 0) {
            local_e4 = 0;
          }
          local_e4 = local_e4 + iStack_f4;
          (**(code **)(*(longlong *)*puVar15 + 0x10))((longlong *)*puVar15,&local_e8);
        }
      }
      uVar13 = (ulonglong)(iVar12 + 1U);
      uVar16 = uVar16 + 0x30;
    } while ((int)(iVar12 + 1U) < (int)plVar14[6]);
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  return 1;
}



// FUNCTION 1419449b0 FUN_1419449b0 body=1110 status=ok
// SIG undefined FUN_1419449b0(void)

longlong FUN_1419449b0(longlong *param_1,int *param_2,short param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  int iVar9;
  void *_Src;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint local_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  iVar11 = *param_2;
  plVar8 = (longlong *)(longlong)iVar11;
  uVar3 = param_2[1];
  uVar13 = (ulonglong)(int)uVar3;
  if ((iVar11 < 0) || ((int)param_1[4] <= iVar11)) {
    return (ulonglong)(uint7)(int7)(int3)((uint)iVar11 >> 8) << 8;
  }
  uVar12 = 0;
  plVar14 = (longlong *)((longlong)plVar8 * 0x70 + param_1[3]);
  plVar10 = (longlong *)*plVar14;
  if (param_3 != 0) {
    iVar11 = (int)plVar10[1];
    if (iVar11 == 0) {
      *(undefined4 *)(plVar10 + 1) = 2;
      if (*(int *)((longlong)plVar10 + 0xc) < 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10,0);
      }
      *(short *)*plVar10 = param_3;
      plVar8 = (longlong *)*plVar10;
      *(undefined2 *)((longlong)plVar8 + 2) = 0;
    }
    else {
      *(int *)(plVar10 + 1) = iVar11 + 1;
      if (*(int *)((longlong)plVar10 + 0xc) < iVar11 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar10,iVar11);
      }
      _Src = (void *)(*plVar10 + uVar13 * 2);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 2),_Src,(longlong)(int)(iVar11 - uVar3) * 2);
      plVar8 = (longlong *)*plVar10;
      *(short *)(uVar13 * 2 + (longlong)plVar8) = param_3;
    }
  }
  *(byte *)(plVar14 + 0xd) = *(byte *)(plVar14 + 0xd) | 7;
  bVar5 = false;
  uVar16 = uVar12;
  if (0 < (int)plVar14[6]) {
    do {
      puVar15 = (undefined8 *)(plVar14[5] + uVar16);
      (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,&local_e8);
      iVar11 = (int)uVar12;
      if (((int)uVar13 < (int)local_e8) || (iStack_e4 <= (int)uVar13)) {
        if (iVar11 == (int)plVar14[6] + -1) {
          if (!bVar5) goto LAB_141944adb;
LAB_141944dc0:
          iVar9 = local_e8 + 1;
          if (iVar9 < 1) {
            iVar9 = 0;
          }
          iVar4 = iStack_e4 + 1;
          if (iStack_e4 + 1 < 1) {
            iVar4 = 0;
          }
          _local_e0 = CONCAT44(iVar4,iVar9);
          (**(code **)(*(longlong *)*puVar15 + 0x10))((longlong *)*puVar15,&local_e0);
        }
        else if (bVar5) goto LAB_141944dc0;
      }
      else {
LAB_141944adb:
        plVar8 = (longlong *)puVar15[1];
        plVar10 = (longlong *)*puVar15;
        bVar5 = true;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        bVar7 = (**(code **)(*plVar10 + 0x88))();
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar8)(plVar8);
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
        if ((bVar7 & 1) == 0) {
          if (uVar3 == local_e8) {
            local_cc = local_e8 + 1;
            local_d0 = local_e8;
            (**(code **)(*param_1 + 0x30))(param_1,&local_58,plVar14,&local_d0);
            local_c8 = local_e8 + 1;
            local_c4 = iStack_e4 + 1;
            (**(code **)(*(longlong *)*puVar15 + 0x10))((longlong *)*puVar15,&local_c8);
            local_b8 = local_58;
            local_b0 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_90 = 0;
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (plVar14 + 5,&local_b8,uVar12);
            if (local_98 != 0) {
              FMemory::Free();
            }
            if (local_a8 != 0) {
              FMemory::Free();
            }
            plVar8 = local_b0;
            plVar10 = local_50;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_b0 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar10 = local_50;
                if (iVar9 == 1) {
                  (**(code **)(*local_b0 + 8))(local_b0,1);
                  plVar10 = local_50;
                }
              }
            }
          }
          else {
            local_c0 = iStack_e4;
            local_bc = iStack_e4 + 1;
            (**(code **)(*param_1 + 0x30))(param_1,&local_48,plVar14,&local_c0);
            local_88 = local_48;
            local_80 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
            }
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::Insert
                      (plVar14 + 5,&local_88,iVar11 + 1);
            if (local_68 != 0) {
              FMemory::Free();
            }
            if (local_78 != 0) {
              FMemory::Free();
            }
            plVar8 = local_80;
            plVar10 = local_40;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_80 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar10 = local_40;
                if (iVar9 == 1) {
                  (**(code **)(*local_80 + 8))(local_80,1);
                  plVar10 = local_40;
                }
              }
            }
          }
          iVar11 = iVar11 + 1;
          uVar16 = uVar16 + 0x30;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar10 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
        else {
          local_d8 = local_e8;
          local_d4 = iStack_e4 + 1;
          (**(code **)(*(longlong *)*puVar15 + 0x10))((longlong *)*puVar15,&local_d8);
        }
        uVar13 = (ulonglong)uVar3;
      }
      uVar12 = (ulonglong)(iVar11 + 1U);
      plVar8 = plVar14 + 5;
      uVar16 = uVar16 + 0x30;
    } while ((int)(iVar11 + 1U) < (int)plVar14[6]);
  }
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  return CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
}



// FUNCTION 141944e10 FUN_141944e10 body=277 status=ok
// SIG undefined FUN_141944e10(void)

undefined8 FUN_141944e10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar6 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_28);
  plVar3 = (longlong *)plVar6[1];
  lVar4 = *plVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  puVar7 = (undefined8 *)FUN_1418fc990();
  plVar6 = (longlong *)FUN_1418fcba0(*puVar7,local_18);
  if ((*plVar6 == 0) || (*plVar6 != lVar4)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
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
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 141944f30 IsBound body=43 status=ok
// SIG undefined IsBound(void)

undefined8 TAttribute<float>::IsBound(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141944f60 IsBound body=43 status=ok
// SIG undefined IsBound(void)

undefined8 TAttribute<FSlateBrush_const_*>::IsBound(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141944f90 IsBound body=43 status=ok
// SIG undefined IsBound(void)

undefined8 TAttribute<FSlateColor>::IsBound(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141944fd0 FUN_141944fd0 body=257 status=ok
// SIG undefined FUN_141944fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141944fd0(undefined8 param_1,short param_2)

{
  short *psVar1;
  longlong lVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469f4840) && (_Init_thread_header(&DAT_1469f4840), DAT_1469f4840 == -1))
  {
    _DAT_1469f4838 = 0x18;
    DAT_1469f4830 = (short *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469f4830,0);
    FGenericPlatformString::Memcpy(DAT_1469f4830,L"1234567890()-+=\\/.,*^%%",0x30);
    atexit((_func_5014 *)&LAB_143e83750);
    _Init_thread_footer(&DAT_1469f4840);
  }
  if (param_2 != 0) {
    for (psVar1 = DAT_1469f4830; psVar1 != DAT_1469f4830 + DAT_1469f4838; psVar1 = psVar1 + 1) {
      if (*psVar1 == param_2) {
        return 1;
      }
    }
    lVar2 = ExpressionParser::GetLocalizedNumberFormattingRules();
    if ((param_2 == *(short *)(lVar2 + 0x70)) || (param_2 == *(short *)(lVar2 + 0x72))) {
      return 1;
    }
    for (psVar1 = (short *)(lVar2 + 0x76); psVar1 != (short *)(lVar2 + 0x8a); psVar1 = psVar1 + 1) {
      if (*psVar1 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1419450e0 IsEmpty body=42 status=ok
// SIG undefined IsEmpty(void)

ulonglong FTextLayout::IsEmpty(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar1 = *(uint *)(**(longlong **)(param_1 + 0x18) + 8);
      uVar2 = (ulonglong)uVar1;
      iVar3 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar3 = 0;
      }
      if (iVar3 == 0) goto LAB_141945107;
    }
    return uVar2 & 0xffffffffffffff00;
  }
LAB_141945107:
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 141945110 FUN_141945110 body=504 status=ok
// SIG undefined FUN_141945110(void)

undefined8 FUN_141945110(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar6 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x400) != 0) && (*(longlong *)(param_1 + 0x408) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar5 = (longlong *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_38);
      plVar9 = (longlong *)plVar5[1];
      lVar2 = *plVar5;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
      plVar5 = *(longlong **)(param_1 + 0x408);
      plVar7 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar7 = plVar6, !bVar10) {
          LOCK();
          bVar10 = iVar4 == (int)plVar5[1];
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar7 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x400);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar5[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar5 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      plVar6 = (longlong *)FUN_1418fe220(plVar6,local_28);
      if ((*plVar6 == 0) || (*plVar6 != lVar2)) {
        uVar8 = 0;
        plVar6 = (longlong *)0x7;
      }
      else {
        uVar8 = 1;
        plVar6 = (longlong *)0x7;
      }
      goto LAB_14194522f;
    }
  }
  plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
  uVar8 = 1;
  plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
LAB_14194522f:
  if ((((ulonglong)plVar6 & 4) != 0) &&
     (plVar6 = (longlong *)(ulonglong)((uint)plVar6 & 0xfffffffb), local_20 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((((ulonglong)plVar6 & 2) != 0) &&
     (plVar6 = (longlong *)(ulonglong)((uint)plVar6 & 0xfffffffd), plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if ((((ulonglong)plVar6 & 1) != 0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 141945310 IsInteractable body=98 status=ok
// SIG undefined IsInteractable(void)

undefined1 SComboBox<TSharedPtr<FString,0>_>::IsInteractable(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xa8) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0xa0);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x98) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x98);
  }
  return *(undefined1 *)(param_1 + 0x98);
}



// FUNCTION 141945380 IsInteractable body=125 status=ok
// SIG undefined IsInteractable(void)

undefined8 SSlider::IsInteractable(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[0x15] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x14];
      }
      uVar2 = (**(code **)(*plVar3 + 0x38))();
      *(undefined1 *)(param_1 + 0x13) = uVar2;
    }
  }
  if ((char)param_1[0x13] != '\0') {
    cVar1 = FUN_141945400(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x178))(param_1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141945400 FUN_141945400 body=98 status=ok
// SIG undefined FUN_141945400(void)

undefined1 FUN_141945400(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x238) != 0) {
    if (*(longlong **)(param_1 + 0x230) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x238) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x230);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x228) = uVar2;
      }
    }
    return *(undefined1 *)(param_1 + 0x228);
  }
  return *(undefined1 *)(param_1 + 0x228);
}



// FUNCTION 141945470 FUN_141945470 body=107 status=ok
// SIG undefined FUN_141945470(void)

ulonglong FUN_141945470(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x101) != '\0') {
    if ((*(int *)(param_1 + 0x110) != 0) && (*(longlong **)(param_1 + 0x108) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x110) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x108);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0x100) = uVar2;
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0x100);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1419454e0 FUN_1419454e0 body=107 status=ok
// SIG undefined FUN_1419454e0(void)

ulonglong FUN_1419454e0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xe9) != '\0') {
    if ((*(int *)(param_1 + 0xf8) != 0) && (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xf8) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0xf0);
        }
        uVar2 = (**(code **)(*plVar3 + 0x38))();
        *(undefined1 *)(param_1 + 0xe8) = uVar2;
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0xe8);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141945550 FUN_141945550 body=775 status=ok
// SIG undefined FUN_141945550(void)

undefined8 FUN_141945550(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  void *_Src;
  void *_Dst;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  int local_res20;
  int local_res24;
  
  if (-1 < param_2) {
    if (((param_2 < *(int *)(param_1 + 0x20)) && (iVar1 = param_2 + 1, -1 < iVar1)) &&
       (iVar1 < *(int *)(param_1 + 0x20))) {
      plVar13 = (longlong *)((longlong)param_2 * 0x70 + *(longlong *)(param_1 + 0x18));
      plVar16 = (longlong *)(((longlong)param_2 + 1) * 0x70 + *(longlong *)(param_1 + 0x18));
      iVar4 = *(int *)((undefined8 *)*plVar16 + 1);
      iVar14 = iVar4 + -1;
      iVar9 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar14 = -1;
        iVar9 = -1;
      }
      iVar8 = 0;
      if (iVar4 == 0) {
        iVar9 = iVar8;
      }
      if (iVar9 == 0) {
        uVar10 = FTextLayout::RemoveLine(param_1,iVar1);
      }
      else {
        puVar11 = (undefined8 *)*plVar13;
        iVar9 = *(int *)(puVar11 + 1);
        iVar12 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar12 = iVar8;
        }
        if (iVar4 == 0) {
          iVar14 = iVar8;
        }
        if (iVar14 != 0) {
          _Src = *(void **)*plVar16;
          if (iVar9 == 0) {
            *(int *)(puVar11 + 1) = iVar14 + 1;
            if (*(int *)((longlong)puVar11 + 0xc) < iVar14 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar11,0);
            }
            _Dst = (void *)*puVar11;
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar14 * 2);
            *(undefined2 *)((longlong)iVar14 * 2 + (longlong)_Dst) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::Insert(puVar11,_Src,iVar14,iVar12);
          }
        }
        uVar15 = 0;
        *(byte *)(plVar13 + 0xd) = *(byte *)(plVar13 + 0xd) | 7;
        uVar18 = uVar15;
        if (0 < (int)plVar16[6]) {
          do {
            plVar5 = *(longlong **)(uVar15 + 8 + plVar16[5]);
            plVar6 = *(longlong **)(uVar15 + plVar16[5]);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar6 + 8))(plVar6,&local_res20);
            if (local_res24 - local_res20 < 1) {
LAB_1419457c8:
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar6 = plVar5 + 1;
                lVar7 = *plVar6;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  iVar14 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
            }
            else {
              local_res20 = local_res20 + iVar12;
              if (local_res20 < 1) {
                local_res20 = 0;
              }
              local_res24 = local_res24 + iVar12;
              if (local_res24 < 1) {
                local_res24 = 0;
              }
              (**(code **)(*plVar6 + 0x60))(plVar6,plVar13,&local_res20);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              iVar14 = (int)plVar13[6];
              *(int *)(plVar13 + 6) = iVar14 + 1;
              if (*(int *)((longlong)plVar13 + 0x34) < iVar14 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar13 + 5,iVar14);
              }
              plVar2 = plVar5 + 1;
              puVar11 = (undefined8 *)((longlong)iVar14 * 0x30 + plVar13[5]);
              *puVar11 = plVar6;
              puVar11[1] = plVar5;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11[4] = 0;
              puVar11[5] = 0;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                lVar7 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  iVar14 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
                goto LAB_1419457c8;
              }
            }
            uVar17 = (int)uVar18 + 1;
            uVar15 = uVar15 + 0x30;
            uVar18 = (ulonglong)uVar17;
          } while ((int)uVar17 < (int)plVar16[6]);
        }
        TArray<FTextLayout::FLineModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1 + 0x18,iVar1,1);
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
        uVar10 = 1;
      }
      return uVar10;
    }
  }
  return 0;
}



// FUNCTION 141945860 FUN_141945860 body=1271 status=ok
// SIG undefined FUN_141945860(void)

void FUN_141945860(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  uint *puVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res18;
  float local_res1c;
  uint *local_res20;
  uint local_158;
  uint uStack_154;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  uint uStack_124;
  uint uStack_110;
  uint uStack_10c;
  uint *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  longlong *local_b0;
  
  bVar9 = false;
  bVar8 = false;
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    local_res20 = (uint *)(param_1 + 0x48);
    fVar23 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0xbc);
    uStack_154 = 1;
    if (fVar23 <= *(float *)(param_1 + 0xb0)) {
      fVar23 = *(float *)(param_1 + 0xb0);
    }
    uVar5 = *(uint *)(param_1 + 0x60);
    local_158 = 0;
    fVar23 = fVar23 - (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x98)) *
                      *(float *)(param_1 + 0x8c);
    uStack_144 = 0;
    iStack_140 = 0;
    if (uVar5 != 0) {
      puVar19 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar19 = local_res20;
      }
      uVar13 = *puVar19;
      while (uVar13 == 0) {
        lVar15 = (longlong)(int)local_158;
        iStack_140 = iStack_140 + 0x20;
        uVar13 = local_158 + 1;
        bVar7 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_158;
        local_158 = uVar13;
        if (bVar7) goto LAB_1419459b7;
        uVar13 = puVar19[lVar15 + 1];
      }
      uStack_154 = -uVar13 & uVar13;
      iVar11 = 0x1f;
      if (uStack_154 != 0) {
        for (; uStack_154 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_154 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_144 = (iStack_140 - iVar11) + 0x1f;
      if ((int)uVar5 < (int)uStack_144) {
LAB_1419459b7:
        uStack_144 = uVar5;
      }
    }
    plVar20 = (longlong *)(param_1 + 0x38);
    uStack_124 = *(uint *)(param_1 + 0x60);
    uStack_e8 = CONCAT44(uStack_154,local_158);
    uStack_100 = 0xffffffff;
    uStack_fc = uStack_144;
    local_f8 = CONCAT44(uStack_13c,iStack_140);
    uVar13 = uStack_124 & 0xffffffe0;
    uStack_110 = local_158;
    uStack_10c = uStack_154;
    local_108 = local_res20;
    local_f0 = plVar20;
    puStack_e0 = local_res20;
    uStack_d0 = local_f8;
    uStack_d8 = uStack_100;
    uStack_d4 = uStack_fc;
    if (uStack_124 != uVar5) {
      puVar19 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar19 = local_res20;
      }
      uVar14 = puVar19[(int)uStack_124 >> 5] & -1 << ((byte)uStack_124 & 0x1f);
      iVar11 = (int)uStack_124 >> 5;
      while (uVar14 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_141945aa4;
        uVar14 = puVar19[(longlong)iVar11 + 1];
        iVar11 = iVar11 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar11 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_124 = (uVar13 - iVar11) + 0x1f;
      if ((int)uVar5 < (int)uStack_124) {
LAB_141945aa4:
        uStack_124 = uVar5;
      }
    }
    while ((uStack_fc != uStack_124 || (local_108 != local_res20))) {
      iVar11 = *(int *)(param_1 + 0xa8);
      plVar17 = (longlong *)
                ((longlong)*(int *)(*plVar20 + (longlong)(int)uStack_fc * 0xc) * 0x58 +
                *(longlong *)(param_1 + 0x28));
      if ((char)plVar17[10] == '\x01') {
        if (iVar11 == 0) {
          iVar11 = 2;
        }
        else if (iVar11 == 2) {
          iVar11 = 0;
        }
      }
      fVar21 = *(float *)((longlong)plVar17 + 0x44);
      if (iVar11 == 2) {
        bVar9 = true;
        plVar6 = *(longlong **)(*plVar17 + -0x10 + (longlong)(int)plVar17[1] * 0x10);
        lVar15 = (**(code **)(*plVar6 + 0x20))(plVar6,&local_f0);
        if (*(char *)(lVar15 + 0x18) != '\x01') goto LAB_141945b5a;
LAB_141945c43:
        bVar7 = true;
      }
      else {
        if (iVar11 == 0) {
          bVar8 = true;
          lVar15 = (**(code **)(**(longlong **)*plVar17 + 0x20))(*(longlong **)*plVar17,local_c0);
          if (*(char *)(lVar15 + 0x18) == '\0') goto LAB_141945c43;
        }
LAB_141945b5a:
        bVar7 = false;
      }
      plVar6 = local_b0;
      if (bVar8) {
        bVar8 = false;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          lVar15 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_b0)(local_b0);
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
      }
      puVar19 = puStack_e0;
      if (bVar9) {
        bVar9 = false;
        if (puStack_e0 != (uint *)0x0) {
          LOCK();
          puVar3 = puStack_e0 + 2;
          uVar5 = *puVar3;
          *puVar3 = *puVar3 - 1;
          UNLOCK();
          if (uVar5 == 1) {
            (*(code *)**(undefined8 **)puStack_e0)(puStack_e0);
            LOCK();
            puVar3 = puVar19 + 3;
            uVar5 = *puVar3;
            *puVar3 = *puVar3 - 1;
            UNLOCK();
            if (uVar5 == 1) {
              (**(code **)(*(longlong *)puVar19 + 8))(puVar19,1);
            }
          }
        }
      }
      fVar10 = DAT_1468b5d88._4_4_;
      if (bVar7) {
        fVar21 = *(float *)(plVar17 + 7);
      }
      if (iVar11 == 0) {
        fVar22 = fVar21 - *(float *)(plVar17 + 7);
      }
      else if (iVar11 == 1) {
        fVar22 = (fVar23 - fVar21) * 0.5;
      }
      else {
        fVar22 = (float)DAT_1468b5d88;
        if (iVar11 == 2) {
          fVar22 = fVar23 - fVar21;
        }
      }
      fVar21 = DAT_1468b5d88._4_4_ + *(float *)((longlong)plVar17 + 0x34);
      *(float *)(plVar17 + 6) = fVar22 + *(float *)(plVar17 + 6);
      *(float *)((longlong)plVar17 + 0x34) = fVar21;
      puVar16 = (undefined8 *)*plVar17;
      puVar18 = puVar16 + (longlong)(int)plVar17[1] * 2;
      for (; puVar16 != puVar18; puVar16 = puVar16 + 2) {
        plVar17 = (longlong *)*puVar16;
        pfVar12 = (float *)(**(code **)(*plVar17 + 0x38))(plVar17,local_c8);
        local_res1c = fVar10 + pfVar12[1];
        local_res18 = fVar22 + *pfVar12;
        (**(code **)(*plVar17 + 0x30))(plVar17,&local_res18);
      }
      uStack_100 = uStack_100 & ~uStack_10c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
    }
  }
  return;
}



// FUNCTION 141945d60 Measure body=94 status=ok
// SIG undefined Measure(void)

float * FSlateImageRun::Measure
                  (longlong *param_1,float *param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  short sVar2;
  
  if (param_4 == param_3) {
    sVar2 = (**(code **)(*param_1 + 0x20))();
    *param_2 = 0.0;
    param_2[1] = (float)(int)sVar2;
    return param_2;
  }
  fVar1 = *(float *)(param_1[0x12] + 0xc);
  *param_2 = param_5 * *(float *)(param_1[0x12] + 8);
  param_2[1] = param_5 * fVar1;
  return param_2;
}



// FUNCTION 141945dc0 FUN_141945dc0 body=358 status=ok
// SIG undefined FUN_141945dc0(void)

float * FUN_141945dc0(longlong *param_1,float *param_2,int param_3,int param_4,float param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  short sVar7;
  float *pfVar8;
  float fVar9;
  undefined1 local_res8 [8];
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [8];
  
  if (param_4 == *(int *)((longlong)param_1 + 0x26c)) {
    fVar9 = ABS(param_5 * *(float *)(param_1 + 0x21));
  }
  else {
    fVar9 = 0.0;
  }
  fVar3 = *(float *)((longlong)param_1 + 0x10c);
  if (param_4 - param_3 == 0) {
    sVar7 = (**(code **)(*param_1 + 0x20))(param_1,param_5);
    *param_2 = fVar9 * param_5;
    param_2[1] = (float)(int)sVar7;
  }
  else {
    FSlatePasswordRun::BuildPasswordString(local_48,param_4 - param_3);
    FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_58);
    pfVar8 = (float *)(**(code **)(*local_58 + 0x18))
                                (local_58,local_res8,local_48,param_1 + 0x12,param_5);
    fVar4 = pfVar8[1];
    *param_2 = fVar9 + *pfVar8;
    param_2[1] = ABS(param_5 * fVar3) + fVar4;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 141945f30 FUN_141945f30 body=713 status=ok
// SIG undefined FUN_141945f30(void)

float * FUN_141945f30(longlong *param_1,float *param_2,int param_3,int param_4,float param_5,
                     undefined2 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  short sVar7;
  float *pfVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res8;
  uint uStackX_c;
  int local_b8;
  int local_b4;
  longlong local_b0;
  float local_a8;
  undefined2 local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  fVar10 = *(float *)(param_1 + 0x21) * 0.001;
  fVar11 = *(float *)((longlong)param_1 + 0x10c) * 0.001;
  if (param_4 == *(int *)((longlong)param_1 + 0x26c)) {
    fVar10 = ABS((*(float *)(param_1 + 0x21) -
                 (float)((int)ROUND(fVar10 + fVar10 + 0.5) >> 1) * 1000.0) * param_5);
  }
  else {
    fVar10 = 0.0;
  }
  fVar14 = (float)(int)param_1[0x14] * param_5;
  fVar13 = ABS((*(float *)((longlong)param_1 + 0x10c) -
               (float)(uint)((int)ROUND(fVar11 + fVar11 + 0.5) >> 1) * 1000.0) * param_5);
  fVar11 = fVar14;
  if (param_3 != (int)param_1[0x4d]) {
    fVar11 = 0.0;
  }
  fVar12 = 0.0;
  if (param_4 == *(int *)((longlong)param_1 + 0x26c)) {
    fVar12 = fVar14;
  }
  if (param_4 == param_3) {
    sVar7 = (**(code **)(*param_1 + 0x20))();
    *param_2 = fVar12 + fVar11 + fVar10;
    param_2[1] = (float)(int)sVar7 + fVar13 + fVar14;
  }
  else {
    iVar4 = *(int *)((undefined8 *)param_1[0xf] + 1);
    if (iVar4 == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)param_1[0xf];
    }
    local_80 = param_1[0x16];
    lStack_78 = param_1[0x17];
    uStackX_c = iVar4 - 1;
    local_a8 = param_5;
    local_90 = param_1[0x14];
    lStack_88 = param_1[0x15];
    local_res8 = 0;
    if (iVar4 == 0) {
      uStackX_c = 0;
    }
    local_b0 = (ulonglong)uStackX_c << 0x20;
    local_a4 = *param_6;
    local_a0 = param_1[0x12];
    local_98 = param_1[0x13];
    local_70 = param_1[0x18];
    local_68 = (longlong *)param_1[0x19];
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_60 = param_1[0x1a];
    local_58 = (undefined4)param_1[0x1b];
    local_54 = *(undefined1 *)((longlong)param_1 + 0xdc);
    local_b8 = param_3;
    local_b4 = param_4;
    pfVar8 = (float *)FUN_141946290(&local_res8,param_6 + 4,&local_b0,&local_b8,puVar9);
    plVar6 = local_68;
    fVar3 = pfVar8[1];
    *param_2 = fVar10 + *pfVar8 + fVar12 + fVar11;
    param_2[1] = fVar13 + fVar3 + fVar14;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_68)(local_68);
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
  }
  return param_2;
}



// FUNCTION 141946200 Measure body=142 status=ok
// SIG undefined Measure(void)

float * FSlateWidgetRun::Measure
                  (longlong *param_1,float *param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  undefined1 local_18 [16];
  
  if (param_4 == param_3) {
    sVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_5);
    *param_2 = 0.0;
    param_2[1] = (float)(int)sVar2;
    return param_2;
  }
  pfVar3 = (float *)SWidget::GetDesiredSize(param_1[0x14],local_18);
  if (*(char *)((longlong)param_1 + 0xbc) != '\0') {
    pfVar3 = (float *)((longlong)param_1 + 0xb4);
  }
  fVar1 = *pfVar3;
  param_2[1] = param_5 * pfVar3[1];
  *param_2 = param_5 * fVar1;
  return param_2;
}



// FUNCTION 141946290 FUN_141946290 body=510 status=ok
// SIG undefined FUN_141946290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_141946290(float *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                     undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  int local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_14193c320(*param_2,&local_c8,param_3,param_5);
  local_d8 = 1;
  FUN_14183aab0(local_c8,&local_48,*(undefined4 *)param_4,*(undefined4 *)((longlong)param_4 + 4));
  if (local_44 == '\0') {
    local_ac = *(undefined2 *)(param_3 + 0xc);
    local_b0 = *(undefined4 *)(param_3 + 8);
    local_88 = *(undefined8 *)(param_3 + 0x30);
    uStack_80 = *(undefined8 *)(param_3 + 0x38);
    local_a8 = *(undefined8 *)(param_3 + 0x10);
    local_a0 = *(undefined8 *)(param_3 + 0x18);
    local_78 = *(undefined8 *)(param_3 + 0x40);
    local_98 = *(undefined8 *)(param_3 + 0x20);
    uStack_90 = *(undefined8 *)(param_3 + 0x28);
    local_70 = *(longlong **)(param_3 + 0x48);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_68 = *(undefined8 *)(param_3 + 0x50);
    local_60 = *(undefined4 *)(param_3 + 0x58);
    local_5c = *(undefined1 *)(param_3 + 0x5c);
    local_b8 = *param_4;
    plVar6 = (longlong *)FUN_14193c320(*param_2,local_58,&local_b8,param_5);
    lVar4 = *plVar6;
    *plVar6 = local_c8;
    plVar5 = (longlong *)plVar6[1];
    plVar6[1] = (longlong)local_c0;
    local_c8 = lVar4;
    local_c0 = plVar5;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_48 = FUN_14046e5c0(local_c8);
    plVar5 = local_70;
    local_44 = 1;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
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
  }
  plVar5 = local_c0;
  uVar3 = *(ushort *)(local_c8 + 0x12);
  local_44 = 0;
  *param_1 = (float)local_48;
  param_1[1] = (float)uVar3;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c0 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_c0)(local_c0);
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
  return param_1;
}



// FUNCTION 141946490 FUN_141946490 body=205 status=ok
// SIG undefined FUN_141946490(void)

void FUN_141946490(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  plVar6 = *(longlong **)(param_1 + 0x80);
  *(longlong *)(param_1 + 0x80) = lVar4;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    *(undefined8 *)(param_1 + 0x88) = *param_3;
    return;
  }
  *(undefined8 *)(param_1 + 0x88) = *param_3;
  return;
}



// FUNCTION 141946560 FUN_141946560 body=205 status=ok
// SIG undefined FUN_141946560(void)

void FUN_141946560(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  plVar6 = *(longlong **)(param_1 + 0x80);
  *(longlong *)(param_1 + 0x80) = lVar4;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    *(undefined8 *)(param_1 + 0x268) = *param_3;
    return;
  }
  *(undefined8 *)(param_1 + 0x268) = *param_3;
  return;
}



// FUNCTION 141946630 FUN_141946630 body=211 status=ok
// SIG undefined FUN_141946630(void)

void FUN_141946630(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  plVar6 = *(longlong **)(param_1 + 0x90);
  *(longlong *)(param_1 + 0x90) = lVar4;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
    *(undefined8 *)(param_1 + 0x98) = *param_3;
    return;
  }
  *(undefined8 *)(param_1 + 0x98) = *param_3;
  return;
}


