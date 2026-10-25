// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14170a240 FUN_14170a240 body=1320 status=ok
// SIG undefined FUN_14170a240(void)

void FUN_14170a240(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  int *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  iVar12 = *(int *)(param_1 + 0x78c);
  if ((iVar12 == -1) && (*(char *)(param_1 + 0x788) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (iVar12 == -1) {
      local_res20 = *(longlong *)(param_2 + 0xf8);
    }
    else {
      local_res20 = *(longlong *)((longlong)iVar12 * 0x88 + 0x48 + *(longlong *)(param_1 + 0x18));
    }
    piVar13 = (int *)0x0;
    iVar12 = 0;
    local_58 = (int *)0x0;
    uStack_50 = (uint *)(ulonglong)(uint)uStack_50;
    cVar4 = FUN_1416fbab0();
    piVar7 = piVar13;
    if (cVar4 == '\0') {
      *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x290) | 8;
      piVar10 = piVar13;
      piVar14 = piVar13;
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 0x20)) {
        do {
          iVar12 = (int)piVar14;
          cVar4 = FLinkerLoad::IsBlueprintFinalizationPending(param_1);
          if (cVar4 == '\0') break;
          lVar8 = *(longlong *)(param_1 + 0x18);
          lVar11 = *(longlong *)(lVar8 + 0x48 + (longlong)piVar10);
          if (lVar11 != 0) {
            lVar5 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if (*(int *)((longlong)piVar10 + lVar8 + 0x10) < 1) {
                if (*(longlong *)(lVar11 + 0xe8) == 0) {
                  lVar5 = FLinkerLoad::GetExportLoadClass(param_1,piVar7);
                  if (lVar5 != 0) {
                    FUN_1416e5930(&local_48,param_1,piVar7);
                    FLinkerLoad::ForceRegenerateClass(param_1,lVar5);
                    lVar5 = *(longlong *)((longlong)piVar10 + lVar8 + 0x48);
                    FUN_1416e6ec0(&local_48);
                    if (lVar11 != lVar5) goto LAB_14170a455;
                  }
                  *(undefined8 *)((longlong)piVar10 + lVar8 + 0x48) = 0;
                  lVar8 = FUN_141730700(param_1,piVar7);
                  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x10))(lVar11 + 0x28,lVar8);
                  FUN_14170ad20(param_1,lVar11);
                  iVar12 = *(int *)(lVar11 + 0xc);
                  piVar6 = piVar13;
                  if (iVar12 < (int)DAT_1469e91c4) {
                    uVar9 = iVar12 >> 0x1f & 0xffff;
                    uVar15 = iVar12 + uVar9;
                    piVar6 = (int *)(*(longlong *)
                                      (DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                                    (longlong)(int)((uVar15 & 0xffff) - uVar9) * 0x18);
                  }
                  piVar6[2] = piVar6[2] | 0x20000000;
                  if (lVar8 != 0) {
                    FUN_141740c00(param_1 + 0x200,lVar8);
                  }
                }
              }
              else {
                uVar15 = iVar12 + 1;
                uStack_50 = (uint *)CONCAT44(uStack_50._4_4_,uVar15);
                if (uStack_50._4_4_ < (int)uVar15) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58,piVar14);
                  uVar15 = (uint)uStack_50;
                }
                piVar14 = (int *)(ulonglong)uVar15;
                local_58[iVar12] = (int)piVar7;
              }
            }
          }
LAB_14170a455:
          iVar12 = (int)piVar14;
          uVar15 = (int)piVar7 + 1;
          piVar7 = (int *)(ulonglong)uVar15;
          piVar10 = piVar10 + 0x22;
        } while ((int)uVar15 < *(int *)(param_1 + 0x20));
      }
      *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x290) & 0xfffffff7;
      piVar7 = local_58;
    }
    lVar8 = local_res20;
    if ((*(int *)(param_1 + 0x78c) == -1) && (*(char *)(param_1 + 0x788) == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (*(int *)(param_1 + 0x78c) != -1) {
        uVar15 = *(uint *)(local_res20 + 8);
        *(uint *)(local_res20 + 8) = uVar15 & 0xffffebff;
        FUN_1417a7660(local_res20,param_1,*(undefined4 *)(param_1 + 0x78c),0);
        puVar1 = (uint *)(lVar8 + 8);
        *puVar1 = *puVar1 | uVar15;
      }
      FUN_141740c00(param_1 + 0x200,lVar8);
      piVar10 = piVar13;
      piVar14 = piVar13;
      if (0 < *(int *)(param_1 + 0x20)) {
        do {
          lVar8 = *(longlong *)(param_1 + 0x18);
          if (((*(uint *)((longlong)piVar14 + lVar8 + 0x20) & 0x40000) != 0) &&
             (iVar2 = *(int *)((longlong)piVar14 + lVar8 + 8),
             iVar2 + -1 == *(int *)(param_1 + 0x78c))) {
            if (*(longlong *)((longlong)piVar14 + lVar8 + 0x48) == 0) {
              lVar11 = 0;
              if (0 < iVar2) {
                FUN_141730700(param_1,piVar10);
                lVar11 = *(longlong *)((longlong)piVar14 + lVar8 + 0x48);
              }
              if (lVar11 == 0) goto LAB_14170a53a;
            }
            FUN_141740c00(param_1 + 0x200);
          }
LAB_14170a53a:
          uVar15 = (int)piVar10 + 1;
          piVar10 = (int *)(ulonglong)uVar15;
          piVar14 = piVar14 + 0x22;
        } while ((int)uVar15 < *(int *)(param_1 + 0x20));
      }
      local_res8[0] = *(uint *)(param_1 + 0x78c);
      *(undefined4 *)(param_1 + 0x78c) = 0xffffffff;
      piVar14 = piVar7 + iVar12;
      piVar10 = piVar7;
      for (; piVar10 != piVar14; piVar10 = piVar10 + 1) {
        iVar12 = *piVar10;
        lVar11 = (longlong)iVar12 * 0x88 + *(longlong *)(param_1 + 0x18);
        lVar8 = *(longlong *)(lVar11 + 0x48);
        if (lVar8 != 0) {
          lVar5 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            *(undefined8 *)(lVar11 + 0x48) = 0;
            lVar11 = FUN_141730700(param_1,iVar12);
            (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28,lVar11);
            FUN_14170ad20(param_1,lVar8);
            uVar15 = *(uint *)(lVar8 + 0xc);
            piVar7 = piVar13;
            if ((int)uVar15 < (int)DAT_1469e91c4) {
              uVar9 = uVar15 & 0xffff;
              if ((int)uVar15 < 0) {
                uVar15 = uVar15 + 0xffff;
                uVar9 = uVar9 - 0x10000;
              }
              piVar7 = (int *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                              (longlong)(int)uVar9 * 0x18);
            }
            piVar7[2] = piVar7[2] | 0x20000000;
            if (lVar11 != 0) {
              FUN_141740c00(param_1 + 0x200,lVar11);
            }
          }
        }
        piVar7 = local_58;
      }
      *(uint *)(param_1 + 0x78c) = local_res8[0];
      uStack_50 = local_res8;
      local_res8[0] = local_res8[0] & 0xffffff00;
      local_58 = (int *)&LAB_1416eb8d0;
      local_48 = 0x416eb8d0;
      uStack_44 = 1;
      uStack_40 = uStack_50;
      lVar8 = FUN_1415d8310(&local_48,&DAT_1464b49c8);
      piVar10 = (int *)(lVar8 + -0x108);
      if (lVar8 == 0) {
        piVar10 = piVar13;
      }
      uStack_50 = (uint *)local_res18;
      local_res18[0] = 0;
      local_58 = (int *)&LAB_1416eb8f0;
      local_48 = 0x416eb8f0;
      uStack_44 = 1;
      uStack_40 = uStack_50;
      lVar8 = FUN_1415d8310(&local_48,&DAT_1464b49c4);
      if (lVar8 != 0) {
        piVar13 = (int *)(lVar8 + -0x108);
      }
      FDeferredInitializationTrackerBase::ResolveArchetypeInstances(piVar10,local_res20);
      FDeferredInitializationTrackerBase::ResolveArchetypeInstances(piVar13,local_res20);
    }
    if (piVar7 != (int *)0x0) {
      FMemory::Free(piVar7);
    }
  }
  return;
}



// FUNCTION 14170a770 ResolveDeferredInitialization body=102 status=ok
// SIG undefined ResolveDeferredInitialization(void)

undefined8
FDeferredInitializationTrackerBase::ResolveDeferredInitialization
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
  ::FindId(plVar1);
  lVar2 = 0;
  if (local_res8 != -1) {
    lVar2 = (longlong)local_res8 * 0x160 + *plVar1;
  }
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    FUN_141792d90();
    TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
    ::Remove(plVar1,param_3);
  }
  return 1;
}



// FUNCTION 14170a7e0 ResolveDeferredInitialization body=268 status=ok
// SIG undefined ResolveDeferredInitialization(void)

ulonglong FDeferredSubObjInitializationTracker::ResolveDeferredInitialization
                    (longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  longlong *local_28;
  longlong *local_20;
  
  local_res18 = param_3;
  if ((*(uint *)(param_2 + 8) >> 4 & 1) != 0) {
    TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x58);
    uVar2 = 0;
    if (local_res10[0] != -1) {
      uVar2 = (longlong)local_res10[0] * 0x160 + *(longlong *)(param_1 + 0x58);
    }
    uVar3 = uVar2 + 8;
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      local_res20 = *(longlong *)(uVar3 + 8);
      if ((*(uint *)(param_3 + 8) >> 4 & 1) != 0) {
        local_res20 = UObject::GetArchetypeFromRequiredInfo
                                (*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20),
                                 *(undefined8 *)(param_3 + 0x18));
        param_3 = local_res18;
      }
      if ((local_res20 == 0) ||
         ((uVar1 = *(uint *)(local_res20 + 8), (uVar1 >> 10 & 1) == 0 &&
          (((uVar1 >> 0x13 & 1) == 0 || ((uVar1 >> 0x15 & 1) != 0)))))) goto LAB_14170a8df;
      local_28 = &local_res20;
      local_20 = &local_res18;
      uVar2 = FUN_1405deec0(param_1 + 8,local_res10,&local_28,0);
    }
    return uVar2 & 0xffffffffffffff00;
  }
LAB_14170a8df:
  uVar2 = FDeferredInitializationTrackerBase::ResolveDeferredInitialization(param_1,param_2,param_3)
  ;
  return uVar2;
}



// FUNCTION 14170a8f0 ResolveDeferredInitsFromArchetype body=193 status=ok
// SIG undefined ResolveDeferredInitsFromArchetype(void)

void FDeferredObjInitializationHelper::ResolveDeferredInitsFromArchetype(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res10;
  local_res10[0] = 0;
  local_18 = &LAB_1416eb8d0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_1464b49c8);
  lVar2 = 0;
  lVar3 = lVar1 + -0x108;
  if (lVar1 == 0) {
    lVar3 = lVar2;
  }
  puStack_10 = local_res18;
  local_res18[0] = 0;
  local_18 = &LAB_1416eb8f0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_1464b49c4);
  if (lVar1 != 0) {
    lVar2 = lVar1 + -0x108;
  }
  FDeferredInitializationTrackerBase::ResolveArchetypeInstances(lVar3,param_1);
  FDeferredInitializationTrackerBase::ResolveArchetypeInstances(lVar2,param_1);
  return;
}



// FUNCTION 14170a9c0 FUN_14170a9c0 body=862 status=ok
// SIG undefined FUN_14170a9c0(void)

int FUN_14170a9c0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  undefined2 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined8 local_res10;
  int iStackX_24;
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  longlong local_70 [2];
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  
  uVar2 = *(uint *)(param_1 + 0x290);
  plVar1 = (longlong *)(param_1 + 0x790);
  *(uint *)(param_1 + 0x290) = uVar2 & 0xffefffff;
  iVar17 = *(int *)(param_1 + 0x798);
  *(int *)(param_1 + 0x798) = iVar17 + 1;
  if (*(int *)(param_1 + 0x79c) < iVar17 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar17);
  }
  *(longlong **)(*plVar1 + (longlong)iVar17 * 8) = param_2;
  lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar17 = 0;
  local_res10 = 0;
  if (*(uint *)(param_2 + 1) != 0) {
    lVar13 = (longlong)(int)~*(uint *)(param_2 + 1) * 0x38 + *(longlong *)(param_1 + 8);
    lVar7 = *(longlong *)(lVar13 + 0x20);
    if ((lVar7 == 0) || (lVar7 == lVar6)) {
      *(undefined8 *)(lVar13 + 0x20) = 0;
      lVar7 = FUN_141731ec0(param_1);
    }
    goto LAB_14170ac90;
  }
  local_res10 = param_4;
  lVar7 = FName::GetNames();
  iVar5 = (int)param_4;
  if ((iVar5 < 0) || (*(int *)(lVar7 + 0x400) <= iVar5)) {
LAB_14170aab7:
    plVar10 = (longlong *)(param_1 + 0x7a0);
    uStack_b4 = 1;
    iVar5 = *(int *)(param_1 + 0x7c8);
    local_88 = (uint *)(param_1 + 0x7b0);
    local_b8 = 0;
    iStack_a4 = 0;
    iStack_a0 = 0;
    if (iVar5 != 0) {
      puVar18 = *(uint **)(param_1 + 0x7c0);
      if (*(uint **)(param_1 + 0x7c0) == (uint *)0x0) {
        puVar18 = local_88;
      }
      uVar4 = *puVar18;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar4 == 0) {
        lVar7 = (longlong)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        iVar11 = local_b8 + 1;
        bVar3 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
        local_b8 = iVar11;
        if (bVar3) goto LAB_14170ab6f;
        uVar4 = puVar18[lVar7 + 1];
      }
      uStack_b4 = -uVar4 & uVar4;
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
      iStack_a4 = (iStack_a0 - iVar11) + 0x1f;
      if (iVar5 < iStack_a4) {
LAB_14170ab6f:
        iStack_a4 = iVar5;
      }
    }
    uStack_90 = CONCAT44(uStack_b4,local_b8);
    uStack_48 = 0xffffffff;
    iStack_44 = iStack_a4;
    iStack_40 = iStack_a0;
    uStack_80 = CONCAT44(iStack_a4,0xffffffff);
    local_78 = iStack_a0;
    local_60 = plVar10;
    uStack_58 = uStack_90;
    puStack_50 = local_88;
    if (iStack_a4 < iVar5) {
      do {
        if (*(longlong **)(*plVar10 + 8 + (longlong)iStack_a4 * 0x18) == param_2) {
          puVar8 = (undefined8 *)(*plVar10 + (longlong)iStack_a4 * 0x18);
          if (puVar8 != (undefined8 *)0x0) {
            local_res10 = *puVar8;
          }
          break;
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        iStack_a4 = uStack_80._4_4_;
      } while (uStack_80._4_4_ < (int)local_88[6]);
    }
  }
  else {
    uVar15 = iVar5 >> 0x1f & 0x3fff;
    uVar4 = iVar5 + uVar15;
    lVar12 = (longlong)((int)uVar4 >> 0xe);
    lVar13 = (longlong)(int)((uVar4 & 0x3fff) - uVar15) * 8;
    if (((*(longlong *)(lVar13 + *(longlong *)(lVar7 + lVar12 * 8)) == 0) ||
        ((*(int *)(lVar7 + 0x400) <= iVar5 ||
         (*(longlong *)(lVar13 + *(longlong *)(lVar7 + lVar12 * 8)) == 0)))) ||
       ((iVar5 == 0 && (iStackX_24 = (int)((ulonglong)param_4 >> 0x20), iStackX_24 == 0))))
    goto LAB_14170aab7;
  }
  puVar8 = (undefined8 *)FName::ToString(&local_res10,local_70);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar8;
  }
  uVar9 = UObject::GetPrivateStaticClass();
  lVar7 = FUN_141799c90(uVar9,0,puVar16,0,0x4002,0,1);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
LAB_14170ac90:
  if (param_3 != 0) {
    plVar10 = *(longlong **)(param_3 + 0x1a0);
    plVar14 = plVar10 + (longlong)*(int *)(param_3 + 0x1a8) * 2;
    for (; plVar10 != plVar14; plVar10 = plVar10 + 2) {
      if (*plVar10 == lVar6) {
        iVar17 = iVar17 + 1;
        *plVar10 = lVar7;
      }
    }
  }
  iVar5 = (**(code **)(*param_2 + 0x10))(param_2,lVar7);
  if (0 < *(int *)(param_1 + 0x798)) {
    *(int *)(param_1 + 0x798) = *(int *)(param_1 + 0x798) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (param_1 + 0x7a0,local_res10);
  *(uint *)(param_1 + 0x290) = uVar2;
  return iVar17 + iVar5;
}



// FUNCTION 14170ad20 FUN_14170ad20 body=295 status=ok
// SIG undefined FUN_14170ad20(void)

void FUN_14170ad20(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  FUN_14175bc20(param_2 + 0x28);
  uVar9 = 0;
  plVar8 = *(longlong **)(param_2 + 0xd8);
  uVar10 = (longlong)*(int *)(param_2 + 0xe0) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_2 + 0xe0) < plVar8) {
    uVar10 = uVar9;
  }
  uVar7 = uVar9;
  if (uVar10 != 0) {
    do {
      lVar2 = *plVar8;
      iVar1 = *(int *)(lVar2 + 0x30);
      *(undefined8 *)((longlong)iVar1 * 0x88 + -0x40 + *(longlong *)(param_1 + 0x18)) = 0;
      lVar3 = FUN_141730700(param_1,iVar1 + -1);
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,lVar3);
      uVar5 = *(uint *)(lVar2 + 0xc);
      uVar4 = uVar9;
      if ((int)uVar5 < (int)DAT_1469e91c4) {
        uVar6 = uVar5 & 0xffff;
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 0xffff;
          uVar6 = uVar6 - 0x10000;
        }
        uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)uVar6 * 0x18;
      }
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | 0x20000000;
      FUN_14170ad20(param_1,lVar2);
      if (lVar3 != 0) {
        FUN_141740c00(param_1 + 0x200,lVar3);
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
  }
  return;
}



// FUNCTION 14170ae50 FUN_14170ae50 body=131 status=ok
// SIG undefined FUN_14170ae50(void)

void FUN_14170ae50(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_1416f86a0();
  LOCK();
  piVar1 = (int *)(lVar3 + 0x74);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x14cb,
               L"ResumeAsyncLoadingThread: Async loading was resumed more times than it was suspended."
              );
    FDebug::AssertFailed
              (&DAT_144cf0d93,"Unknown",0x14cb,
               L"ResumeAsyncLoadingThread: Async loading was resumed more times than it was suspended."
              );
  }
  if ((DAT_1469e689c != '\0') && (iVar2 == 1)) {
    (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x20))(*(longlong **)(lVar3 + 0x30),0xffffffff,0);
  }
  return;
}



// FUNCTION 14170aee0 FUN_14170aee0 body=247 status=ok
// SIG undefined FUN_14170aee0(void)

undefined8 FUN_14170aee0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  DAT_1469e68cc = GetCurrentThreadId();
  if (((DAT_1468e22d0 != 0) && (DAT_1468e22c8 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*DAT_1468e22c8 + 0x18))(), cVar2 != '\0')) {
    plVar3 = (longlong *)0x0;
    if (DAT_1468e22d0 != 0) {
      plVar3 = DAT_1468e22c8;
    }
    (**(code **)(*plVar3 + 0x40))();
  }
  bVar1 = false;
  LOCK();
  bVar4 = *(int *)(param_1 + 0x10) == 0;
  if (bVar4) {
    *(int *)(param_1 + 0x10) = 0;
  }
  UNLOCK();
  while (bVar4) {
    LOCK();
    bVar4 = *(int *)(param_1 + 0x74) == 0;
    if (bVar4) {
      *(int *)(param_1 + 0x74) = 0;
    }
    UNLOCK();
    if (bVar4) {
      if (bVar1) {
        bVar1 = false;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
      }
      cVar2 = IsGarbageCollectionWaiting();
      if (cVar2 == '\0') {
        local_res8[0] = 0;
        FUN_14170ecb0(param_1,0,1,0,local_res8,0);
      }
    }
    else if (bVar1) {
      FUN_1416b1810(0x3a83126f);
    }
    else {
      bVar1 = true;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    }
    LOCK();
    bVar4 = *(int *)(param_1 + 0x10) == 0;
    if (bVar4) {
      *(int *)(param_1 + 0x10) = 0;
    }
    UNLOCK();
  }
  return 0;
}



// FUNCTION 14170afe0 FUN_14170afe0 body=1903 status=ok
// SIG undefined FUN_14170afe0(void)

undefined1 FUN_14170afe0(LARGE_INTEGER param_1,LARGE_INTEGER *param_2,LARGE_INTEGER *param_3)

{
  short *psVar1;
  void *pvVar2;
  bool bVar3;
  LARGE_INTEGER *pLVar4;
  LARGE_INTEGER *pLVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  LARGE_INTEGER *pLVar12;
  longlong *plVar13;
  int iVar14;
  short *psVar15;
  undefined1 uVar16;
  longlong *plVar17;
  LARGE_INTEGER LVar18;
  int iVar19;
  longlong lVar20;
  undefined2 *puVar21;
  LARGE_INTEGER LVar22;
  DWORD DVar23;
  int iVar24;
  bool bVar25;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER *local_res10;
  LARGE_INTEGER *local_res18;
  uint local_res20;
  undefined2 *in_stack_ffffffffffffff28;
  undefined4 uVar26;
  LARGE_INTEGER local_b8;
  undefined8 local_b0;
  int local_a8;
  LARGE_INTEGER local_a0;
  ulonglong local_98;
  LARGE_INTEGER local_90;
  undefined8 local_88;
  longlong *local_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  int local_68;
  int local_64;
  DWORD local_60;
  longlong *local_58;
  
  iVar24 = 0;
  local_res20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  lVar11 = FUN_1415dcd20();
  if (lVar11 != 0) {
    FUN_1415e70c0(lVar11);
  }
  local_res20 = local_res20 & 0xffffff00;
  QueryPerformanceCounter(&local_b8);
  psVar1 = *(short **)param_1;
  for (psVar15 = psVar1; psVar15 != psVar1 + *(int *)(param_1.QuadPart + 8); psVar15 = psVar15 + 1)
  {
    if (*psVar15 == 0x2f) {
      if ((int)((longlong)psVar15 - (longlong)psVar1 >> 1) != -1) {
        local_a0.QuadPart = 0;
        local_98 = 0;
        cVar8 = FUN_1416f0740(param_1.QuadPart,0,&local_a0,1);
        LVar18 = local_a0;
        if (cVar8 == '\0') {
          uVar16 = 0;
        }
        else {
          if (param_2 != (LARGE_INTEGER *)0x0) {
            FString::operator=(param_2,param_1.QuadPart);
          }
          if ((param_3 != (LARGE_INTEGER *)0x0) && (param_3 != &local_a0)) {
            lVar11 = (longlong)(int)(DWORD)local_98;
            iVar24 = *(int *)((longlong)param_3 + 0xc);
            param_3[1].s.LowPart = (DWORD)local_98;
            if (((DWORD)local_98 == 0) && (iVar24 == 0)) {
              *(undefined4 *)((longlong)param_3 + 0xc) = 0;
              uVar16 = 1;
              goto LAB_14170b1e8;
            }
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_3,local_98 & 0xffffffff);
            _guard_xfg_dispatch_icall_nop((void *)*(_struct_19 *)param_3,(void *)LVar18,lVar11 * 2);
          }
          uVar16 = 1;
        }
LAB_14170b1e8:
        if ((void *)LVar18.QuadPart != (void *)0x0) {
          FMemory::Free(LVar18.QuadPart);
        }
        goto LAB_14170b6f7;
      }
      break;
    }
  }
  local_70 = (longlong *)0x0;
  local_64 = 0;
  local_b8.QuadPart = 0;
  local_b0 = 1;
  lVar11 = FUN_1416f87e0();
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,0);
  LVar18 = local_b8;
  FString::FString(local_b8.QuadPart,lVar11 + 0x10);
  uVar6 = local_b0;
  lVar20 = (longlong)(int)local_b0;
  iVar14 = (int)local_b0 + 1;
  local_b0 = CONCAT44(local_b0._4_4_,iVar14);
  if (local_b0._4_4_ < iVar14) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,uVar6 & 0xffffffff);
    LVar18 = local_b8;
  }
  FString::FString((longlong *)(lVar20 * 0x10 + LVar18.QuadPart),lVar11 + 0x20);
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(&local_b8,lVar11 + 0x60);
  iVar14 = (int)local_b0;
  iVar19 = 0;
  plVar13 = local_70;
  iVar10 = iVar19;
  for (; (pLVar5 = local_res18, pLVar4 = local_res10, LVar22 = local_res8,
         uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20), LVar18 = local_b8,
         local_a8 = iVar10, -1 < iVar19 && (iVar19 < iVar14)); iVar19 = iVar19 + 1) {
    plVar17 = (longlong *)((longlong)iVar19 * 0x10 + local_b8.QuadPart);
    local_90.QuadPart = 0;
    local_88 = 0;
    local_a0.QuadPart = 0;
    local_98 = 0;
    cVar8 = FUN_14170f420(plVar17,&local_a0);
    if (cVar8 == '\0') {
      if ((int)plVar17[1] == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*plVar17;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x1bc,
                 L"LongPackageNameToFilename failed to convert \'%s\'. Path does not map to any roots."
                 ,puVar21);
      if ((int)plVar17[1] == 0) {
        in_stack_ffffffffffffff28 = &DAT_143f3eda8;
      }
      else {
        in_stack_ffffffffffffff28 = (undefined2 *)*plVar17;
      }
      FDebug::AssertFailed
                (&DAT_144cf0424,"Unknown",0x1bc,
                 L"LongPackageNameToFilename failed to convert \'%s\'. Path does not map to any roots."
                 ,in_stack_ffffffffffffff28);
    }
    if ((void *)local_90.QuadPart != (void *)0x0) {
      FMemory::Free();
    }
    lVar11 = (longlong)iVar10;
    local_68 = iVar10 + 1;
    if (iVar24 < local_68) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_70,iVar10);
      plVar13 = local_70;
      iVar24 = local_64;
    }
    iVar10 = local_68;
    FString::FString(plVar13 + lVar11 * 2,&local_a0);
    if ((void *)local_a0.QuadPart != (void *)0x0) {
      FMemory::Free();
    }
  }
  for (; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*(longlong *)LVar18 != 0) {
      FMemory::Free();
    }
    uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
    LVar18.QuadPart = LVar18.QuadPart + 0x10;
  }
  if ((longlong *)local_b8.QuadPart != (longlong *)0x0) {
    FMemory::Free(local_b8.QuadPart);
  }
  iVar14 = FUN_141592950(LVar22.QuadPart,&DAT_144cf0824,0,0,CONCAT44(uVar26,0xffffffff));
  iVar24 = *(int *)(LVar22.QuadPart + 8);
  pvVar2 = *(void **)LVar22;
  if (iVar14 == -1) {
    local_b8.QuadPart = 0;
    local_b0._0_4_ = iVar24;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,(3 - (uint)(iVar24 != 0)) + iVar24,0)
    ;
    LVar18 = local_b8;
    _guard_xfg_dispatch_icall_nop((void *)local_b8,pvVar2,(longlong)iVar24 * 2);
    iVar24 = (int)local_b0;
    lVar11 = (longlong)(int)local_b0;
    iVar14 = (3 - (uint)((int)local_b0 != 0)) + (int)local_b0;
    local_b0 = CONCAT44(local_b0._4_4_,iVar14);
    iVar10 = local_b0._4_4_;
    if (local_b0._4_4_ < iVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar24);
      LVar18 = local_b8;
      iVar14 = (int)local_b0;
      iVar10 = local_b0._4_4_;
    }
    local_90.s = LVar18.s;
    local_88 = CONCAT44(iVar10,iVar14);
    lVar11 = lVar11 - (ulonglong)(iVar24 != 0);
    *(undefined4 *)(LVar18.QuadPart + lVar11 * 2) = 0x2a002e;
    pLVar12 = &local_90;
    *(undefined2 *)(LVar18.QuadPart + 4 + lVar11 * 2) = 0;
    bVar3 = false;
    bVar25 = true;
  }
  else {
    local_a0.QuadPart = 0;
    local_98 = CONCAT44(local_98._4_4_,iVar24);
    if (iVar24 == 0) {
      pLVar12 = &local_a0;
      local_98 = 0;
      bVar3 = true;
      bVar25 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar24,0);
      _guard_xfg_dispatch_icall_nop((void *)local_a0,pvVar2,(longlong)iVar24 * 2);
      pLVar12 = &local_a0;
      bVar3 = true;
      bVar25 = false;
    }
  }
  LVar18.QuadPart = pLVar12->QuadPart;
  pLVar12->QuadPart = 0;
  DVar23 = pLVar12[1].s.LowPart;
  pLVar12[1].QuadPart = 0;
  local_b8.QuadPart = LVar18.QuadPart;
  local_60 = DVar23;
  if ((bVar25) && ((void *)local_90.QuadPart != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && ((void *)local_a0.QuadPart != (void *)0x0)) {
    FMemory::Free();
  }
  local_78 = 0;
  local_80 = (longlong *)0x0;
  local_74 = 0;
  local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
  iVar24 = local_a8;
  plVar13 = local_80;
  iVar14 = local_78;
  if (0 < local_a8) {
    cVar8 = '\0';
    plVar17 = local_70;
    do {
      iVar24 = local_a8;
      plVar13 = local_80;
      iVar14 = local_78;
      local_58 = plVar17;
      if (cVar8 != '\0') break;
      plVar13 = (longlong *)FUN_1415c3d50();
      LVar22.QuadPart = (LONGLONG)&DAT_143f3eda8;
      if (DVar23 != 0) {
        LVar22 = LVar18;
      }
      if ((int)plVar17[1] == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*plVar17;
      }
      (**(code **)(*plVar13 + 0x80))(plVar13,&local_80,puVar21,LVar22.QuadPart,1,0,1);
      iVar24 = 0;
      if (0 < local_78) {
        lVar11 = 0;
        do {
          local_90.QuadPart = 0;
          iVar14 = *(int *)((longlong)local_80 + lVar11 + 8);
          pvVar2 = *(void **)((longlong)local_80 + lVar11);
          local_88 = CONCAT44(local_88._4_4_,iVar14);
          if (iVar14 == 0) {
            local_88 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,iVar14,0);
            _guard_xfg_dispatch_icall_nop((void *)local_90,pvVar2,(longlong)iVar14 * 2);
          }
          plVar13 = local_80 + (longlong)iVar24 * 2;
          cVar9 = FString::EndsWith(plVar13,&DAT_1464b4428);
          if ((cVar9 != '\0') || (cVar9 = FString::EndsWith(plVar13,&DAT_1464b4438), cVar9 != '\0'))
          {
            local_a0.QuadPart = 0;
            local_98 = 0;
            cVar9 = FPackageName::TryConvertFilenameToLongPackageName(&local_90,&local_a0);
            LVar18 = local_a0;
            if (cVar9 != '\0') {
              if (((pLVar4 != (LARGE_INTEGER *)0x0) && (cVar8 == '\0')) && (pLVar4 != &local_a0)) {
                lVar20 = (longlong)(int)(DWORD)local_98;
                iVar14 = *(int *)((longlong)pLVar4 + 0xc);
                pLVar4[1].s.LowPart = (DWORD)local_98;
                if (((DWORD)local_98 == 0) && (iVar14 == 0)) {
                  *(undefined4 *)((longlong)pLVar4 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pLVar4,local_98 & 0xffffffff);
                  _guard_xfg_dispatch_icall_nop
                            ((void *)*(_struct_19 *)pLVar4,(void *)LVar18,lVar20 * 2);
                }
              }
              if (((pLVar5 != (LARGE_INTEGER *)0x0) &&
                  (FUN_1416781b0(&local_90), LVar18 = local_90, cVar8 == '\0')) &&
                 (pLVar5 != &local_90)) {
                lVar20 = (longlong)(int)(DWORD)local_88;
                iVar14 = *(int *)((longlong)pLVar5 + 0xc);
                pLVar5[1].s.LowPart = (DWORD)local_88;
                if (((DWORD)local_88 == 0) && (iVar14 == 0)) {
                  *(undefined4 *)((longlong)pLVar5 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pLVar5,local_88 & 0xffffffff);
                  _guard_xfg_dispatch_icall_nop
                            ((void *)*(_struct_19 *)pLVar5,(void *)LVar18,lVar20 * 2);
                }
              }
              cVar8 = '\x01';
            }
            if ((void *)local_a0.QuadPart != (void *)0x0) {
              FMemory::Free();
            }
          }
          if ((void *)local_90.QuadPart != (void *)0x0) {
            FMemory::Free();
          }
          iVar24 = iVar24 + 1;
          lVar11 = lVar11 + 0x10;
        } while (iVar24 < local_78);
        local_res20 = CONCAT31(local_res20._1_3_,cVar8);
        plVar17 = local_58;
        LVar18 = local_b8;
      }
      plVar17 = plVar17 + 2;
      iVar10 = local_res8.s.LowPart + 1;
      local_res8.s.LowPart = iVar10;
      DVar23 = local_60;
      iVar24 = local_a8;
      plVar13 = local_80;
      iVar14 = local_78;
      local_58 = plVar17;
    } while (iVar10 < local_a8);
  }
  for (; iVar10 = local_a8, local_a8 = iVar24, iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    iVar24 = local_a8;
    plVar13 = plVar13 + 2;
    local_a8 = iVar10;
  }
  if (local_80 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar13 = local_70;
  plVar17 = local_70;
  if ((undefined2 *)LVar18.QuadPart != (undefined2 *)0x0) {
    FMemory::Free(LVar18.QuadPart);
    plVar13 = local_70;
    plVar17 = local_70;
  }
  for (; plVar7 = local_70, iVar10 != 0; iVar10 = iVar10 + -1) {
    local_70 = plVar17;
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
    plVar17 = local_70;
    local_70 = plVar7;
  }
  bVar25 = local_70 != (longlong *)0x0;
  local_70 = plVar17;
  if (bVar25) {
    FMemory::Free(plVar7);
  }
  uVar16 = (undefined1)local_res20;
LAB_14170b6f7:
  QueryPerformanceCounter(&local_res8);
  lVar11 = FUN_1415dcd20();
  if (lVar11 != 0) {
    FUN_1415e5410(lVar11);
  }
  return uVar16;
}



// FUNCTION 14170b750 Seek body=194 status=ok
// SIG undefined Seek(void)

void FArchiveAsync2::Seek(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (((DAT_1468c21ab != '\0') && (*(int *)(param_1 + 0x110) < 4)) &&
     (*(longlong *)(param_1 + 0x100) <= param_2)) {
    FUN_1416f7b40();
  }
  if ((*(longlong *)(param_1 + 0xe0) <= param_2) && (param_2 < *(longlong *)(param_1 + 0xe8))) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = *(undefined8 *)(param_1 + 200);
    **(longlong **)(param_1 + 8) =
         (*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xe0)) + param_2;
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) =
         (*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0)) +
         *(longlong *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xe0);
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(longlong *)(param_1 + 0xd8) = param_2;
  return;
}



// FUNCTION 14170b820 FUN_14170b820 body=976 status=ok
// SIG undefined FUN_14170b820(void)

void FUN_14170b820(longlong param_1,void *param_2,size_t param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  char cVar5;
  BOOL BVar6;
  longlong lVar7;
  undefined8 *puVar8;
  size_t sVar9;
  undefined2 *puVar10;
  size_t sVar11;
  undefined2 *puVar12;
  size_t _Size;
  longlong lVar13;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if ((param_3 != 0) && (-1 < *(char *)(param_1 + 0x28))) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    _Src = (void *)*puVar8;
    if ((longlong)_Src + param_3 <= (ulonglong)puVar8[1]) {
      _guard_xfg_dispatch_icall_nop(param_2,_Src,param_3);
      **(longlong **)(param_1 + 8) = **(longlong **)(param_1 + 8) + param_3;
      return;
    }
    *(longlong *)(param_1 + 0xd8) = (longlong)_Src + (*(longlong *)(param_1 + 0xd8) - puVar8[2]);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    if (*(int *)(param_1 + 0x110) < 2) {
      BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
      if (BVar6 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
    }
    lVar7 = FArchiveAsync2::TotalSize(param_1);
    if (lVar7 < (longlong)(*(longlong *)(param_1 + 0xd8) + param_3)) {
      FText::FText(local_40);
      FText::FText(local_58);
      FConfigCacheIni::GetText
                (DAT_1468b6148,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessage",
                 local_40,&DAT_1468e2360);
      FConfigCacheIni::GetText
                (DAT_1468b6148,L"/Script/Engine.Engine",
                 L"SerializationOutOfBoundsErrorMessageCaption",local_58,&DAT_1468e2360);
      puVar8 = (undefined8 *)FText::ToString(local_58);
      puVar10 = &DAT_143f3eda8;
      if (*(int *)(puVar8 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar8;
      }
      puVar8 = (undefined8 *)FText::ToString(local_40);
      if (*(int *)(puVar8 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar8;
      }
      FUN_1416a4860(0,puVar10,puVar12);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    lVar7 = *(longlong *)(param_1 + 0xd8);
    lVar4 = *(longlong *)(param_1 + 0xe0);
    sVar9 = param_3;
    lVar13 = lVar7;
    if ((lVar4 < (longlong)(lVar7 + param_3)) && (lVar7 < *(longlong *)(param_1 + 0xe8))) {
      sVar9 = *(longlong *)(param_1 + 0xe8) - lVar7;
      if (lVar7 < lVar4) {
        _Size = lVar4 - lVar7;
        sVar11 = param_3 - _Size;
        if ((longlong)(sVar9 - _Size) <= (longlong)(param_3 - _Size)) {
          sVar11 = sVar9 - _Size;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(_Size + (longlong)param_2),*(void **)(param_1 + 200),sVar11);
        lVar13 = *(longlong *)(param_1 + 0xe8);
        sVar9 = (param_3 - sVar11) - _Size;
        if (_Size != 0) {
          cVar5 = FUN_141702230(param_1,lVar7,_Size,1);
          if (cVar5 == '\0') {
            FArchiveAsync2::WaitRead(param_1,0);
          }
          if (*(char *)(param_1 + 0x28) < '\0') {
            return;
          }
          _guard_xfg_dispatch_icall_nop
                    (param_2,(void *)((*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xe0))
                                     + lVar7),_Size);
        }
      }
      else {
        sVar11 = param_3;
        if ((longlong)sVar9 <= (longlong)param_3) {
          sVar11 = sVar9;
        }
        _guard_xfg_dispatch_icall_nop
                  (param_2,(void *)((longlong)*(void **)(param_1 + 200) + (lVar7 - lVar4)),sVar11);
        sVar9 = param_3 - sVar11;
        lVar13 = *(longlong *)(param_1 + 0xe8);
      }
    }
    if (sVar9 != 0) {
      cVar5 = FUN_141702230(param_1,lVar13,sVar9,1);
      if (cVar5 == '\0') {
        FArchiveAsync2::WaitRead(param_1,0);
      }
      if (*(char *)(param_1 + 0x28) < '\0') {
        return;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 + (param_3 - sVar9)),
                 (void *)((*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xe0)) + lVar13),
                 sVar9);
    }
    lVar7 = *(longlong *)(param_1 + 0xd8) + param_3;
    if ((lVar7 < *(longlong *)(param_1 + 0xe0)) || (*(longlong *)(param_1 + 0xe8) <= lVar7)) {
      puVar8 = *(undefined8 **)(param_1 + 8);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(longlong *)(param_1 + 0xd8) = lVar7;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = *(undefined8 *)(param_1 + 200);
      **(longlong **)(param_1 + 8) =
           (*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xe0)) + lVar7;
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) =
           (*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0)) +
           *(longlong *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xe0);
    }
  }
  return;
}



// FUNCTION 14170bbf0 FUN_14170bbf0 body=203 status=ok
// SIG undefined FUN_14170bbf0(void)

void FUN_14170bbf0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_141763960();
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
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x3c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x3c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14158ce90(param_2,param_1 + 0x40);
  return;
}



// FUNCTION 14170bcc0 Serialize body=166 status=ok
// SIG undefined Serialize(void)

void UTextBuffer::Serialize(longlong param_1,void *param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(short *)((longlong)param_2 + lVar4 * 2) != 0);
  iVar3 = (int)lVar4;
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
    *(int *)(param_1 + 0x20) = iVar2;
    if (*(int *)(param_1 + 0x24) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x18),iVar1);
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0x18) + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2)
    ;
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  return;
}



// FUNCTION 14170bd70 FUN_14170bd70 body=296 status=ok
// SIG undefined FUN_14170bd70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14170bd70(longlong param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8;
  longlong *local_1c0;
  byte local_19f;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(&local_1c8);
  local_20 = 0;
  local_1c8 = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141763960(param_1,&local_1c8);
  if ((undefined4 *)local_1c0[1] < (undefined4 *)*local_1c0 + 1) {
    (*(code *)local_1c8[10])(&local_1c8,param_1 + 0x38,4);
    if ((local_19f & 0x10) != 0) {
      FArchive::ByteSwap(&local_1c8,param_1 + 0x38,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)*local_1c0;
    *local_1c0 = *local_1c0 + 4;
  }
  if ((undefined4 *)local_1c0[1] < (undefined4 *)*local_1c0 + 1) {
    (*(code *)local_1c8[10])(&local_1c8,param_1 + 0x3c,4);
    if ((local_19f & 0x10) != 0) {
      FArchive::ByteSwap(&local_1c8,param_1 + 0x3c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)*local_1c0;
    *local_1c0 = *local_1c0 + 4;
  }
  FUN_14158ce90(&local_1c8,param_1 + 0x40);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(&local_1c8);
  return;
}



// FUNCTION 14170bea0 FUN_14170bea0 body=281 status=ok
// SIG undefined FUN_14170bea0(void)

longlong * FUN_14170bea0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong local_res8;
  undefined1 local_18 [16];
  
  if (((*(byte *)((longlong)param_1 + 0x2a) & 8) == 0) ||
     ((*(byte *)((longlong)param_1 + 0x2a) & 0x10) != 0)) {
    local_res8 = FWeakObjectPtr::Get(param_2);
    if (local_res8 == 0) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      if ((DAT_1464b4c84 != param_2[2]) &&
         (((param_2[6] != 0 || param_2[5] != 0) || param_2[4] != 0) || param_2[3] != 0)) {
        lVar4 = FUniqueObjectGuid::ResolveObject();
        FWeakObjectPtr::operator=(param_2,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b4c84 == 0) {
            DAT_1464b4c84 = 0;
          }
          UNLOCK();
          param_2[2] = DAT_1464b4c84;
        }
        local_res8 = FWeakObjectPtr::Get(param_2);
      }
    }
    (**(code **)(*param_1 + 0x30))(param_1,&local_res8);
    lVar4 = local_res8;
    if (((*(byte *)(param_1 + 5) & 1) != 0) ||
       ((local_res8 != 0 && ((*(byte *)((longlong)param_1 + 0x2a) & 0x10) != 0)))) {
      if (local_res8 == 0) {
        *param_2 = 0xffffffff;
        *(undefined8 *)(param_2 + 1) = 0;
        *(undefined8 *)(param_2 + 5) = 0;
        *(undefined8 *)(param_2 + 3) = 0;
      }
      else {
        puVar5 = (undefined4 *)FUniqueObjectGuid::GetOrCreateIDForObject(local_18,local_res8);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        param_2[3] = *puVar5;
        param_2[4] = uVar1;
        param_2[5] = uVar2;
        param_2[6] = uVar3;
        FWeakObjectPtr::operator=(param_2,lVar4);
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        param_2[2] = DAT_1464b4c84;
      }
    }
  }
  return param_1;
}



// FUNCTION 14170bfc0 FUN_14170bfc0 body=198 status=ok
// SIG undefined FUN_14170bfc0(void)

void FUN_14170bfc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined **local_38 [3];
  longlong local_20;
  undefined1 local_18;
  
  FReferenceCollector::FReferenceCollector();
  plVar1 = (longlong *)param_2[2];
  local_38[0] = &PTR_FUN_144cfd500;
  local_18 = 1;
  local_20 = param_1;
  if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
    (**(code **)(*param_2 + 0xa8))(param_2,param_1);
  }
  else {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (((*(byte *)(param_1 + 0x28) & 0x10) == 0) && ((*(byte *)(param_1 + 0x28) & 3) != 0)) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,param_2,plVar1,0,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    }
    else {
      (**(code **)(*plVar1 + 0x298))(plVar1,param_1,param_2);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    }
  }
  (*(code *)plVar1[0x15])(param_2,local_38);
  FReferenceCollector::~FReferenceCollector(local_38);
  return;
}



// FUNCTION 14170c090 FUN_14170c090 body=370 status=ok
// SIG undefined FUN_14170c090(void)

longlong * FUN_14170c090(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res18;
  undefined1 local_38 [32];
  
  if ((*(byte *)(param_1 + 5) & 3) != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      *param_2 = 0xffffffff;
      *(undefined8 *)(param_2 + 1) = 0;
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_2 + 4);
    return param_1;
  }
  if (((*(byte *)((longlong)param_1 + 0x2a) & 8) == 0) ||
     ((*(byte *)((longlong)param_1 + 0x2a) & 0x10) != 0)) {
    local_res18 = FWeakObjectPtr::Get(param_2);
    if (local_res18 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != param_2[2]) && (*(longlong *)(param_2 + 4) != 0)) {
        lVar1 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_2,lVar1);
        if ((lVar1 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          param_2[2] = DAT_1464b56f4;
        }
        local_res18 = FWeakObjectPtr::Get(param_2);
      }
    }
    (**(code **)(*param_1 + 0x30))(param_1,&local_res18);
    lVar1 = local_res18;
    if (((*(byte *)(param_1 + 5) & 1) != 0) ||
       ((local_res18 != 0 && ((*(byte *)((longlong)param_1 + 0x2a) & 0x10) != 0)))) {
      if (local_res18 == 0) {
        *param_2 = 0xffffffff;
        param_2[1] = 0;
        *(undefined8 *)(param_2 + 4) = 0;
        param_2[8] = 0;
        if (((int)param_2[9] < 0) && (param_2[9] != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
        }
        if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
          **(undefined2 **)(param_2 + 6) = 0;
        }
        param_2[2] = 0;
      }
      else {
        uVar2 = FSoftObjectPath::FSoftObjectPath(local_38,local_res18);
        FSoftObjectPath::operator=(param_2 + 4,uVar2);
        FWeakObjectPtr::operator=(param_2,lVar1);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        param_2[2] = DAT_1464b56f4;
      }
    }
  }
  return param_1;
}



// FUNCTION 14170c210 FUN_14170c210 body=45 status=ok
// SIG undefined FUN_14170c210(void)

void FUN_14170c210(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1416f8770();
  FUN_14170c240(uVar1,param_1,param_2);
  return;
}



// FUNCTION 14170c240 FUN_14170c240 body=462 status=ok
// SIG undefined FUN_14170c240(void)

void FUN_14170c240(longlong param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  
  uVar4 = *param_2;
  if (param_3 == 0) {
    if (uVar4 == 0xffffffff) {
      return;
    }
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      bVar11 = DVar3 == DAT_1468c21c0;
      if (!bVar11) goto LAB_14170c294;
    }
    bVar11 = true;
LAB_14170c294:
    if (!bVar11) {
      FUN_1416f8360(param_1);
      *param_2 = 0xffffffff;
      return;
    }
    uVar8 = (int)*param_2 >> 0x1f & 0x7f;
    uVar4 = *param_2 + uVar8;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)((int)uVar4 >> 7) * 8) +
     (ulonglong)((uVar4 & 0x7f) - uVar8) * 8) = 0;
    return;
  }
  FUN_141729b50(local_res10);
  if (uVar4 != 0xffffffff) goto LAB_14170c3d7;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    if (*(int *)(param_1 + 0xe8) != 0) {
      lVar9 = param_1 + 0xa0;
      goto LAB_14170c336;
    }
    uVar4 = *(uint *)(param_1 + 0x48);
    uVar8 = uVar4 & 0x8000007f;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffff80) + 1;
    }
    uVar7 = uVar4;
    if (uVar8 == 0) {
      uVar6 = FMemory::Malloc(0x400,0);
      iVar1 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = iVar1 + 1;
      if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = uVar6;
      uVar7 = *(uint *)(param_1 + 0x48);
    }
    *(uint *)(param_1 + 0x48) = uVar7 + 1;
  }
  else {
    lVar9 = param_1 + 0x50;
LAB_14170c336:
    lVar10 = *(longlong *)(lVar9 + 0x40);
    if (*(longlong *)(lVar9 + 0x40) == 0) {
      lVar10 = lVar9;
    }
    uVar4 = *(uint *)(lVar10 + -4 + (longlong)*(int *)(lVar9 + 0x48) * 4);
    *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + -1;
  }
  *param_2 = uVar4;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
LAB_14170c3d7:
  uVar8 = (int)*param_2 >> 0x1f & 0x7f;
  uVar4 = *param_2 + uVar8;
  *(longlong *)
   (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)((int)uVar4 >> 7) * 8) +
   (ulonglong)((uVar4 & 0x7f) - uVar8) * 8) = param_3;
  FUN_14172a400(local_res10);
  return;
}



// FUNCTION 14170c410 FUN_14170c410 body=1572 status=ok
// SIG undefined FUN_14170c410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14170c410(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  double dVar17;
  undefined1 local_res8 [8];
  int local_res10;
  ulonglong local_res18;
  LARGE_INTEGER local_res20;
  longlong local_b0;
  int local_a8;
  int iStack_a4;
  longlong local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  uint local_88;
  undefined4 uStack_84;
  
  FUN_141729b50(local_res8);
  iVar9 = *(int *)(param_1 + 0xa4);
  *(wchar_t **)(param_1 + 0xe0) = L"SetupExports_Event";
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x58);
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x20);
  bVar16 = iVar9 == iVar12;
  if (iVar9 < iVar12) {
    do {
      if (iVar9 == (iVar9 / 10) * 10) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
        LOCK();
        bVar16 = *piVar2 == 0;
        if (bVar16) {
          *piVar2 = 0;
        }
        UNLOCK();
        if (bVar16) {
          fVar3 = *(float *)(param_1 + 0xc4);
          dVar4 = *(double *)(param_1 + 0xd0);
          if (*(char *)(param_1 + 200) != '\0') {
            QueryPerformanceCounter(&local_res20);
            _DAT_1464b48b8 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
            dVar17 = _DAT_1464b48b8 - dVar4;
            bVar16 = (double)fVar3 < dVar17;
            if ((((bVar16) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar4)) &&
               (((double)DAT_1464b441c < dVar17 && ((double)(fVar3 * DAT_1464b4418) < dVar17)))) {
              DAT_1464b48b0 = dVar4;
            }
            if (bVar16) goto LAB_14170c9d7;
          }
          cVar7 = IsGarbageCollectionWaiting();
          if (cVar7 == '\0') {
            iVar9 = *(int *)(param_1 + 0xa4);
            goto LAB_14170c59e;
          }
        }
LAB_14170c9d7:
        lVar13 = *(longlong *)(param_1 + 0x50);
        iVar9 = *(int *)(param_1 + 0xa4);
        break;
      }
LAB_14170c59e:
      lVar13 = *(longlong *)(param_1 + 0x50);
      uVar1 = iVar9 + 1;
      *(uint *)(param_1 + 0xa4) = uVar1;
      lVar14 = (longlong)iVar9 * 0x88 + *(longlong *)(lVar13 + 0x18);
      if (*(longlong *)(lVar14 + 0x48) == 0) {
        if ((((*(char *)(lVar14 + 0x59) == '\0') && (*(char *)(lVar14 + 0x5b) == '\0')) &&
            ((*(char *)(lVar13 + 0x1f0) == '\0' || (*(char *)(lVar14 + 0x56) == '\0')))) &&
           ((((*(char *)(lVar13 + 0x1f1) == '\0' || (*(char *)(lVar14 + 0x55) == '\0')) &&
             (*(int *)(lVar14 + 0x14) != 0)) &&
            ((*(int *)(lVar14 + 0x10) != 0 || (*(char *)(lVar13 + 0x295) != '\0')))))) {
          iVar12 = *(int *)(lVar14 + 0x70);
          lVar13 = (longlong)iVar12;
          if (-1 < iVar12) {
            uStack_94 = 2;
            iVar9 = *(int *)(lVar14 + 0x74);
            local_a8 = 0;
            iStack_a4 = 1;
            local_b0 = param_1;
            local_a0 = param_1;
            uStack_98 = uVar1;
            if (0 < iVar9) {
              iVar12 = iVar12 + iVar9;
              do {
                local_a8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x728) +
                                   lVar13 * 4);
                FAsyncPackage::AddArc(param_1,&local_b0,&local_a0);
                iVar9 = iVar9 + -1;
                lVar13 = lVar13 + 1;
              } while (0 < iVar9);
            }
            iVar9 = *(int *)(lVar14 + 0x78);
            iStack_a4 = 0;
            if (0 < iVar9) {
              lVar13 = (longlong)iVar12;
              iVar12 = iVar12 + iVar9;
              do {
                local_a8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x728) +
                                   lVar13 * 4);
                FAsyncPackage::AddArc(param_1,&local_b0,&local_a0);
                iVar9 = iVar9 + -1;
                lVar13 = lVar13 + 1;
              } while (0 < iVar9);
            }
            lVar13 = local_a0;
            local_res10 = *(int *)(lVar14 + 0x7c);
            uStack_94 = 0;
            local_res18 = (ulonglong)uStack_98;
            iStack_a4 = 1;
            uVar6 = (ulonglong)uStack_98;
            if (0 < local_res10) {
              lVar15 = (longlong)iVar12;
              iVar12 = iVar12 + local_res10;
              do {
                local_a8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x728) +
                                   lVar15 * 4);
                if (local_a8 == 0) {
                  plVar10 = (longlong *)(param_1 + ((longlong)iStack_a4 * 3 + 0x95) * 8);
                }
                else {
                  if (local_a8 < 0) {
                    iVar9 = (iStack_a4 - (local_a8 * 2 + 2)) + *(int *)(param_1 + 0x508);
                  }
                  else {
                    iVar9 = iStack_a4 + local_a8 * 3 + *(int *)(param_1 + 0x50c) + -3;
                  }
                  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x4f0) + (longlong)iVar9 * 0x18);
                }
                if (uVar1 == 0) {
                  lVar8 = param_1 + 0x4a8;
                }
                else {
                  if ((int)uVar1 < 0) {
                    iVar9 = *(int *)(param_1 + 0x508) - (uVar1 * 2 + 2);
                  }
                  else {
                    iVar9 = *(int *)(param_1 + 0x50c) + -3 + uVar1 * 3;
                  }
                  lVar8 = *(longlong *)(param_1 + 0x4f0) + (longlong)iVar9 * 0x18;
                }
                *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
                iVar9 = (int)plVar10[1];
                *(int *)(plVar10 + 1) = iVar9 + 1;
                if (*(int *)((longlong)plVar10 + 0xc) < iVar9 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar9);
                }
                local_res10 = local_res10 + -1;
                plVar10 = (longlong *)(*plVar10 + (longlong)iVar9 * 0x10);
                *plVar10 = lVar13;
                plVar10[1] = uVar6;
                lVar15 = lVar15 + 1;
              } while (0 < local_res10);
            }
            iVar9 = *(int *)(lVar14 + 0x80);
            iStack_a4 = 0;
            if (0 < iVar9) {
              uVar11 = local_res18 >> 0x20;
              lVar14 = (longlong)iVar12;
              local_res18 = uVar11;
              do {
                local_a8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x728) +
                                   lVar14 * 4);
                if (local_a8 == 0) {
                  plVar10 = (longlong *)(param_1 + ((longlong)iStack_a4 * 3 + 0x95) * 8);
                }
                else {
                  if (local_a8 < 0) {
                    iVar12 = (iStack_a4 - (local_a8 * 2 + 2)) + *(int *)(param_1 + 0x508);
                  }
                  else {
                    iVar12 = iStack_a4 + -3 + *(int *)(param_1 + 0x50c) + local_a8 * 3;
                  }
                  plVar10 = (longlong *)(*(longlong *)(param_1 + 0x4f0) + (longlong)iVar12 * 0x18);
                }
                if (uVar1 == 0) {
                  lVar15 = param_1 + ((longlong)(int)uVar11 * 3 + 0x95) * 8;
                }
                else {
                  if ((int)uVar1 < 0) {
                    iVar12 = *(int *)(param_1 + 0x508) - (uVar1 * 2 + 2);
                  }
                  else {
                    iVar12 = *(int *)(param_1 + 0x50c) + -3 + uVar1 * 3;
                  }
                  lVar15 = *(longlong *)(param_1 + 0x4f0) + (longlong)(iVar12 + (int)uVar11) * 0x18;
                }
                *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
                iVar12 = (int)plVar10[1];
                *(int *)(plVar10 + 1) = iVar12 + 1;
                if (*(int *)((longlong)plVar10 + 0xc) < iVar12 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar12);
                  uVar11 = local_res18;
                }
                iVar9 = iVar9 + -1;
                plVar10 = (longlong *)(*plVar10 + (longlong)iVar12 * 0x10);
                *plVar10 = lVar13;
                plVar10[1] = uVar6;
                lVar14 = lVar14 + 1;
              } while (0 < iVar9);
            }
          }
        }
        else {
          *(undefined1 *)(lVar14 + 0x59) = 1;
        }
      }
      uStack_84 = 0;
      if (uVar1 == 0) {
        lVar13 = param_1 + 0x4a8;
      }
      else {
        if ((int)uVar1 < 0) {
          iVar12 = *(int *)(param_1 + 0x508) - (uVar1 * 2 + 2);
        }
        else {
          iVar12 = uVar1 * 3 + *(int *)(param_1 + 0x50c) + -3;
        }
        lVar13 = *(longlong *)(param_1 + 0x4f0) + (longlong)iVar12 * 0x18;
      }
      local_90 = param_1;
      local_88 = uVar1;
      if (*(int *)(lVar13 + 0x10) == 0) {
        *(undefined1 *)(lVar13 + 0x14) = 1;
        FUN_1416f7890(param_1,&local_90);
      }
      iVar9 = *(int *)(param_1 + 0xa4);
      lVar13 = *(longlong *)(param_1 + 0x50);
    } while (iVar9 < *(int *)(lVar13 + 0x20));
    bVar16 = iVar9 == *(int *)(lVar13 + 0x20);
  }
  uVar5 = 0;
  if (bVar16) {
    uVar5 = 2;
  }
  FUN_14172a400(local_res8);
  return uVar5;
}



// FUNCTION 14170ca40 FUN_14170ca40 body=2283 status=ok
// SIG undefined FUN_14170ca40(void)

undefined8 FUN_14170ca40(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined2 *puVar23;
  bool bVar24;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined2 *in_stack_fffffffffffffe28;
  undefined8 *in_stack_fffffffffffffe30;
  undefined2 *in_stack_fffffffffffffe38;
  longlong *local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined2 *local_1a0;
  int local_198 [2];
  longlong local_190;
  longlong local_188;
  uint local_180;
  undefined4 uStack_17c;
  longlong local_178;
  uint local_170;
  undefined4 local_16c;
  longlong local_168;
  uint local_160;
  undefined4 local_15c;
  uint local_150;
  undefined4 uStack_14c;
  undefined1 local_148 [8];
  undefined2 *local_140;
  int local_138;
  undefined2 *local_130;
  int local_128;
  undefined8 local_120;
  int local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  int local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  undefined1 local_60 [32];
  
  FUN_141729b50(local_res18);
  uVar17 = *(uint *)(param_1 + 0xa0);
  uVar13 = 0;
  if ((uVar17 == 0) &&
     (uVar17 = 0, uVar18 = uVar13, 0 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10))) {
    do {
      uVar13 = uVar13 + 0x38;
      uVar17 = (int)uVar18 + 1;
      *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + -3 + uVar13) = 0;
      uVar18 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10));
    uVar17 = *(uint *)(param_1 + 0xa0);
  }
  uVar21 = *(uint *)(*(longlong *)(param_1 + 0x50) + 0x10);
  bVar24 = uVar17 == uVar21;
  if ((int)uVar17 < (int)uVar21) {
    do {
      *(uint *)(param_1 + 0xa0) = uVar17 + 1;
      bVar24 = true;
      FUN_141729fe0(local_60,*(undefined8 *)(param_1 + 0x50),uVar17);
      plVar14 = (longlong *)((longlong)(int)uVar17 * 0x38);
      puVar20 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + (longlong)plVar14)
      ;
      local_1b8 = plVar14;
      if (*(int *)(puVar20 + 1) == 0) {
        if (*(char *)((longlong)puVar20 + 0x36) == '\0') {
          lVar9 = puVar20[4];
          if (lVar9 == 0) {
            uVar10 = *puVar20;
            uVar8 = UPackage::GetPrivateStaticClass();
            in_stack_fffffffffffffe38 =
                 (undefined2 *)((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000);
            in_stack_fffffffffffffe30 =
                 (undefined8 *)((ulonglong)in_stack_fffffffffffffe30 & 0xffffffff00000000);
            in_stack_fffffffffffffe28 =
                 (undefined2 *)((ulonglong)in_stack_fffffffffffffe28 & 0xffffffffffffff00);
            lVar9 = FUN_141799680(uVar8,0,uVar10,0,in_stack_fffffffffffffe28,
                                  in_stack_fffffffffffffe30,in_stack_fffffffffffffe38);
            if (lVar9 == 0) {
              *(undefined1 *)((longlong)puVar20 + 0x36) = 1;
              goto LAB_14170d1c0;
            }
            puVar20[4] = lVar9;
            FUN_1416ea3b0(param_1,lVar9);
          }
          if (((*(longlong *)(lVar9 + 0x60) != 0) &&
              (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x60) + 800), lVar9 != 0)) &&
             (*(byte *)(lVar9 + 0x1e0) < 8)) {
            local_c0 = *(undefined8 *)(lVar9 + 0x18);
            local_b8 = *(undefined4 *)(lVar9 + 0x1e4);
            TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::Emplace<FWeakAsyncPackagePtr_const_&>(param_1 + 0x398,local_148,&local_c0);
          }
        }
LAB_14170d1c0:
        local_180 = ~uVar17;
        uStack_17c = 0;
        if (local_180 == 0) {
          iVar7 = 0;
          lVar9 = param_1 + 0x4a8;
        }
        else {
          if ((int)uVar17 < 0) {
            iVar7 = *(int *)(param_1 + 0x50c) + -3 + local_180 * 3;
          }
          else {
            iVar7 = *(int *)(param_1 + 0x508) - (local_180 * 2 + 2);
          }
          lVar9 = *(longlong *)(param_1 + 0x4f0);
        }
        local_188 = param_1;
        if (*(int *)(lVar9 + 0x10 + (longlong)iVar7 * 0x18) == 0) {
          *(undefined1 *)(lVar9 + (longlong)iVar7 * 0x18 + 0x14) = 1;
          FUN_1416f7890(param_1,&local_188);
        }
      }
      else {
        if (((puVar20[4] == 0) || (cVar6 = FUN_1416fbe60(), cVar6 == '\0')) ||
           (DAT_1464aaa49 != '\0')) {
          uVar16 = ~uVar17;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
          uVar21 = uVar16;
          uVar2 = uVar16;
          for (uVar3 = *(uint *)(lVar9 + 8 + (longlong)plVar14); uVar3 != 0;
              uVar3 = *(uint *)((longlong)(int)~uVar3 * 0x38 + 8 + lVar9)) {
            uVar21 = uVar2;
            uVar2 = uVar3;
          }
          puVar22 = (undefined8 *)((longlong)(int)~uVar2 * 0x38 + lVar9);
          lVar9 = puVar22[4];
          local_1b0 = puVar22;
          local_190 = lVar9;
          if (lVar9 == 0) {
            uVar10 = *puVar22;
            uVar8 = UPackage::GetPrivateStaticClass();
            in_stack_fffffffffffffe38 =
                 (undefined2 *)((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000);
            in_stack_fffffffffffffe30 =
                 (undefined8 *)((ulonglong)in_stack_fffffffffffffe30 & 0xffffffff00000000);
            in_stack_fffffffffffffe28 =
                 (undefined2 *)((ulonglong)in_stack_fffffffffffffe28 & 0xffffffffffffff00);
            lVar9 = FUN_141799680(uVar8,0,uVar10,0,in_stack_fffffffffffffe28,
                                  in_stack_fffffffffffffe30,in_stack_fffffffffffffe38);
            local_190 = lVar9;
            if (lVar9 == 0) {
              *(undefined1 *)((longlong)puVar20 + 0x36) = 1;
              goto LAB_14170d1c0;
            }
            puVar22[4] = lVar9;
            FUN_1416ea3b0(param_1,lVar9);
          }
          puVar23 = *(undefined2 **)(lVar9 + 0x60);
          if ((puVar23 == (undefined2 *)0x0) || (*(char *)((longlong)puVar23 + 0x295) == '\0')) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          local_1a0 = puVar23;
          if (DAT_1464aaa49 == '\0') {
            if (puVar23 == (undefined2 *)0x0) goto LAB_14170cd41;
LAB_14170cd37:
            if (*(longlong *)(puVar23 + 400) == 0) goto LAB_14170cd41;
          }
          else {
            if (puVar23 != (undefined2 *)0x0) goto LAB_14170cd37;
            if (((*(uint *)(lVar9 + 0x50) >> 4 & 1) != 0) && (!bVar4)) {
              lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
              uVar10 = FUN_1416f9640();
              in_stack_fffffffffffffe28 =
                   (undefined2 *)
                   CONCAT44((int)((ulonglong)in_stack_fffffffffffffe28 >> 0x20),uVar16);
              cVar6 = FUN_1416eb0a0(uVar10,param_1,*local_1b0,
                                    *(undefined8 *)((longlong)(int)~uVar21 * 0x38 + lVar9),
                                    in_stack_fffffffffffffe28);
              bVar24 = cVar6 == '\0';
              if (cVar6 != '\0') goto LAB_14170d1b0;
            }
LAB_14170cd41:
            puVar23 = local_1a0;
            FUN_1416f4b50(param_1,uVar17);
            cVar6 = FUN_1416fbe60(puVar20[4]);
            if (puVar20[4] != 0) {
              if (cVar6 != '\0') goto LAB_14170cd72;
              puVar20[4] = 0;
            }
            *(undefined1 *)((longlong)puVar20 + 0x36) = 1;
          }
LAB_14170cd72:
          puVar15 = (uint *)0x0;
          if ((puVar23 != (undefined2 *)0x0) && (*(longlong *)(puVar23 + 400) != 0)) {
            local_1b8 = (longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + (longlong)local_1b8);
            if ((int)*(uint *)(local_1b8 + 1) < 0) {
              FUN_1416f5340(local_res20,puVar23,~*(uint *)(local_1b8 + 1));
              local_b0 = *local_1b8;
              local_a8 = local_res20[0];
              local_1b8 = (longlong *)(*(longlong *)(puVar23 + 400) + 0x348);
              TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
              ::FindId(local_1b8,local_198,&local_b0);
              puVar12 = puVar15;
              if (local_198[0] != -1) {
                puVar12 = (uint *)((longlong)local_198[0] * 0x20 + *local_1b8);
              }
              puVar11 = puVar12 + 4;
              if (puVar12 == (uint *)0x0) {
                puVar11 = puVar15;
              }
              if (puVar11 != (uint *)0x0) {
                puVar15 = (uint *)(ulonglong)*puVar11;
              }
            }
            local_1a8 = 0;
            iVar7 = (int)puVar15;
            if (iVar7 != 0) {
              iVar1 = *(int *)((longlong)iVar7 * 0x88 + -0x80 + *(longlong *)(puVar23 + 0xc));
              if (iVar1 < 1) {
                if (iVar1 == 0) {
                  local_1a8 = *(undefined8 *)(*(longlong *)(puVar23 + 0x50) + 0x18);
                }
              }
              else {
                local_1a8 = *(undefined8 *)
                             ((longlong)iVar1 * 0x88 + -0x88 + *(longlong *)(puVar23 + 0xc));
              }
            }
            if ((bVar4) && (iVar7 == 0)) {
              bVar5 = true;
              iVar7 = (*(int *)(puVar23 + 0x10) == 2) + 1;
            }
            else {
              bVar5 = false;
            }
            *(bool *)((longlong)puVar20 + 0x36) = iVar7 == 0;
            if ((bVar4) && (iVar7 == 0)) {
              local_1b8 = *(longlong **)(local_190 + 0x18);
              FName::ToString(&local_1b8,&local_140);
              local_1a0 = &DAT_143f3eda8;
              if (local_138 != 0) {
                local_1a0 = local_140;
              }
              local_1b0 = (undefined8 *)FName::ToString(puVar20,local_90);
              if (*(int *)(local_1b0 + 1) == 0) {
                local_1b0 = (undefined8 *)&DAT_143f3eda8;
              }
              else {
                local_1b0 = (undefined8 *)*local_1b0;
              }
              puVar22 = (undefined8 *)FName::ToString(&local_1a8,local_a0);
              if (*(int *)(puVar22 + 1) == 0) {
                puVar19 = &DAT_143f3eda8;
              }
              else {
                puVar19 = (undefined2 *)*puVar22;
              }
              LowLevelFatalErrorHandler
                        ("Unknown",0x9ed,L"Could not find dynamic import %s.%s in package %s.",
                         puVar19,local_1b0,local_1a0);
              if (local_a0[0] != 0) {
                FMemory::Free();
              }
              if (local_90[0] != 0) {
                FMemory::Free();
              }
              if (local_140 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              local_1b8 = *(longlong **)(local_190 + 0x18);
              FName::ToString(&local_1b8,&local_130);
              local_1a0 = &DAT_143f3eda8;
              if (local_128 != 0) {
                local_1a0 = local_130;
              }
              local_1b0 = (undefined8 *)FName::ToString(puVar20,local_70);
              if (*(int *)(local_1b0 + 1) == 0) {
                local_1b0 = (undefined8 *)&DAT_143f3eda8;
              }
              else {
                local_1b0 = (undefined8 *)*local_1b0;
              }
              puVar22 = (undefined8 *)FName::ToString(&local_1a8,local_80);
              if (*(int *)(puVar22 + 1) == 0) {
                in_stack_fffffffffffffe28 = &DAT_143f3eda8;
              }
              else {
                in_stack_fffffffffffffe28 = (undefined2 *)*puVar22;
              }
              in_stack_fffffffffffffe30 = local_1b0;
              in_stack_fffffffffffffe38 = local_1a0;
              FDebug::AssertFailed
                        (&DAT_144cf107e,"Unknown",0x9ed,
                         L"Could not find dynamic import %s.%s in package %s.",
                         in_stack_fffffffffffffe28,local_1b0,local_1a0);
              if (local_80[0] != 0) {
                FMemory::Free();
              }
              if (local_70[0] != 0) {
                FMemory::Free();
              }
              if (local_130 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            }
            if (*(char *)((longlong)puVar20 + 0x36) == '\0') {
              lVar9 = (longlong)iVar7 * 0x88 + *(longlong *)(puVar23 + 0xc);
              cVar6 = *(char *)(lVar9 + -0x2f);
              *(char *)((longlong)puVar20 + 0x36) = cVar6;
              if (cVar6 == '\0') {
                if (bVar5) {
                  cVar6 = FUN_1416fbe60(*(undefined8 *)(lVar9 + -0x40));
                  if (cVar6 == '\0') {
                    local_120 = *(undefined8 *)(puVar23 + 400);
                    local_16c = 0;
                    local_114 = 1;
                    local_178 = param_1;
                    local_170 = uVar16;
                    local_118 = iVar7;
                    FAsyncPackage::AddArc(param_1,&local_120,&local_178);
                    local_110 = *(undefined8 *)(puVar23 + 400);
                    local_108 = 0;
                    local_104 = 2;
                    FAsyncPackage::AddArc(param_1,&local_178,&local_110);
                  }
                }
                else {
                  *(int *)(puVar20 + 6) = iVar7 + -1;
                  puVar20[5] = puVar23;
                  if (*(longlong *)(lVar9 + -0x40) == 0) {
                    local_100 = *(undefined8 *)(puVar23 + 400);
                    local_15c = 0;
                    local_f4 = 0;
                    local_168 = param_1;
                    local_160 = uVar16;
                    local_f8 = iVar7;
                    FAsyncPackage::AddArc(param_1,&local_100,&local_168);
                    local_f0 = *(undefined8 *)(puVar23 + 400);
                    local_e8 = 0;
                    local_e4 = 2;
                    FAsyncPackage::AddArc(param_1,&local_168,&local_f0);
                  }
                  else {
                    puVar20[4] = *(longlong *)(lVar9 + -0x40);
                    FUN_1416ea3b0(param_1);
                  }
                  cVar6 = FUN_1416fbe60(*(undefined8 *)(lVar9 + -0x40));
                  if (cVar6 == '\0') {
                    local_d0 = *(undefined8 *)(puVar23 + 400);
                    local_d4 = 1;
                    local_c4 = 1;
                    local_e0 = param_1;
                    local_d8 = uVar16;
                    local_c8 = iVar7;
                    FAsyncPackage::AddArc(param_1,&local_d0,&local_e0);
                  }
                }
              }
            }
          }
        }
LAB_14170d1b0:
        uVar21 = ~uVar17;
        if (bVar24) goto LAB_14170d1c0;
        uStack_14c = 0;
        if (uVar21 == 0) {
          iVar7 = 0;
          lVar9 = param_1 + 0x4a8;
        }
        else {
          if ((int)uVar17 < 0) {
            iVar7 = *(int *)(param_1 + 0x50c) + -3 + uVar21 * 3;
          }
          else {
            iVar7 = *(int *)(param_1 + 0x508) - (uVar21 * 2 + 2);
          }
          lVar9 = *(longlong *)(param_1 + 0x4f0);
        }
        *(undefined1 *)(lVar9 + (longlong)iVar7 * 0x18 + 0x14) = 1;
        local_150 = uVar21;
      }
      FUN_14172a720(local_60);
      uVar17 = *(uint *)(param_1 + 0xa0);
      uVar21 = *(uint *)(*(longlong *)(param_1 + 0x50) + 0x10);
      bVar24 = uVar17 == uVar21;
    } while ((int)uVar17 < (int)uVar21);
  }
  uVar10 = 0;
  if (bVar24) {
    uVar10 = 2;
  }
  FUN_14172a400(local_res18);
  return uVar10;
}



// FUNCTION 14170d330 Shrink body=457 status=ok
// SIG undefined Shrink(void)

void TSparseArray<UObject_*,FDefaultSparseArrayAllocator>::Shrink(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_28;
  undefined8 local_24;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar10 = 0;
  local_38 = 0;
  local_34 = 1;
  iVar9 = -1;
  local_24 = 0;
  iVar6 = 0;
  if (iVar4 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    uVar5 = local_38;
    while (uVar3 == 0) {
      uVar10 = uVar10 + 0x20;
      local_38 = uVar5 + 1;
      local_24 = (ulonglong)uVar10 << 0x20;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar5) {
        local_24 = CONCAT44(uVar10,iVar4);
        iVar6 = iVar4;
        goto LAB_14170d41c;
      }
      uVar3 = puVar8[(longlong)(int)uVar5 + 1];
      uVar5 = local_38;
    }
    local_34 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (local_34 != 0) {
      for (; local_34 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_34 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iVar6 = (uVar10 - iVar6) + 0x1f;
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
    uVar7 = (ulonglong)local_24 >> 0x20;
    local_24 = CONCAT44((int)uVar7,iVar6);
    local_38 = uVar5;
  }
LAB_14170d41c:
  uVar10 = 0xffffffff;
  local_30 = puVar1;
  if (iVar6 < iVar4) {
    do {
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      local_28 = uVar10 & ~local_34;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_38);
      uVar10 = local_28;
      iVar6 = (int)local_24;
    } while ((int)local_24 < (int)local_30[6]);
  }
  iVar6 = (int)param_1[1];
  iVar9 = iVar9 + 1;
  if (iVar9 < iVar6) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)(int)uVar7 * 8);
        if ((int)uVar7 < iVar9) {
          uVar7 = (ulonglong)(uint)piVar2[1];
        }
        else {
          iVar6 = piVar2[1];
          uVar7 = (ulonglong)iVar6;
          iVar4 = *piVar2;
          if (iVar6 != -1) {
            *(int *)(*param_1 + uVar7 * 8) = iVar4;
          }
          if (iVar4 == -1) {
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
            *(int *)(param_1 + 6) = iVar6;
          }
          else {
            *(int *)(*param_1 + 4 + (longlong)iVar4 * 8) = iVar6;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
          }
        }
      } while ((int)uVar7 != -1);
      iVar6 = (int)param_1[1];
    }
    if (iVar6 != iVar9) {
      *(int *)(param_1 + 1) = iVar9;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(puVar1,iVar9,(int)param_1[5] - iVar9);
  }
  if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
    return;
  }
  return;
}



// FUNCTION 14170d500 Shrink body=484 status=ok
// SIG undefined Shrink(void)

void TSparseArray<TSetElement<TTuple<ABasePlayerController_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Shrink(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_28;
  undefined8 local_24;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uVar10 = 0;
  local_38 = 0;
  local_34 = 1;
  iVar9 = -1;
  local_24 = 0;
  iVar6 = 0;
  if (iVar4 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    uVar5 = local_38;
    while (uVar3 == 0) {
      uVar10 = uVar10 + 0x20;
      local_38 = uVar5 + 1;
      local_24 = (ulonglong)uVar10 << 0x20;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar5) {
        local_24 = CONCAT44(uVar10,iVar4);
        iVar6 = iVar4;
        goto LAB_14170d5ec;
      }
      uVar3 = puVar8[(longlong)(int)uVar5 + 1];
      uVar5 = local_38;
    }
    local_34 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (local_34 != 0) {
      for (; local_34 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_34 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iVar6 = (uVar10 - iVar6) + 0x1f;
    if (iVar4 < iVar6) {
      iVar6 = iVar4;
    }
    uVar7 = (ulonglong)local_24 >> 0x20;
    local_24 = CONCAT44((int)uVar7,iVar6);
    local_38 = uVar5;
  }
LAB_14170d5ec:
  uVar10 = 0xffffffff;
  local_30 = puVar1;
  if (iVar6 < iVar4) {
    do {
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      local_28 = uVar10 & ~local_34;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_38);
      uVar10 = local_28;
      iVar6 = (int)local_24;
    } while ((int)local_24 < (int)local_30[6]);
  }
  iVar6 = (int)param_1[1];
  iVar9 = iVar9 + 1;
  if (iVar9 < iVar6) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)(int)uVar7 * 0x18);
        if ((int)uVar7 < iVar9) {
          uVar7 = (ulonglong)(uint)piVar2[1];
        }
        else {
          iVar6 = piVar2[1];
          uVar7 = (ulonglong)iVar6;
          iVar4 = *piVar2;
          if (iVar6 != -1) {
            *(int *)(*param_1 + uVar7 * 0x18) = iVar4;
          }
          if (iVar4 == -1) {
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
            *(int *)(param_1 + 6) = iVar6;
          }
          else {
            *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x18) = iVar6;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
          }
        }
      } while ((int)uVar7 != -1);
      iVar6 = (int)param_1[1];
    }
    if (iVar6 != iVar9) {
      *(int *)(param_1 + 1) = iVar9;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(puVar1,iVar9,(int)param_1[5] - iVar9);
  }
  if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1);
    return;
  }
  return;
}



// FUNCTION 14170d6f0 FUN_14170d6f0 body=1476 status=ok
// SIG undefined FUN_14170d6f0(void)

void FUN_14170d6f0(undefined8 **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int local_98 [2];
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  int *piStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 **local_40;
  undefined8 ***local_38;
  
  ppuVar6 = param_1 + 0x43;
  puVar13 = (undefined8 *)0x0;
  if (*(char *)((longlong)param_1[10] + 0x295) != '\0') {
    piVar10 = (int *)*ppuVar6;
    puVar7 = (undefined8 *)((longlong)*(int *)(param_1 + 0x44) & 0x3fffffffffffffff);
    if (piVar10 + *(int *)(param_1 + 0x44) < piVar10) {
      puVar7 = puVar13;
    }
    if (puVar7 != (undefined8 *)0x0) {
      do {
        local_88 = *piVar10 + 1;
        local_84 = 2;
        local_90 = param_1;
        FUN_1417082b0(&DAT_1464b4630,&local_90);
        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
        piVar10 = piVar10 + 1;
      } while (puVar13 != puVar7);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)((longlong)param_1 + 0x224) == 0) {
      return;
    }
    TArray<float,FDefaultAllocator>::ResizeTo(ppuVar6,0);
    return;
  }
  local_90._0_4_ = -1;
  do {
    FImportOrImportIndexArray::HeapPop(ppuVar6,&local_90,0);
    iVar2 = (int)local_90;
    uVar15 = (ulonglong)(int)local_90;
    lVar8 = uVar15 * 0x88;
    lVar12 = param_1[10][3];
    lVar9 = *(longlong *)(lVar8 + 0x48 + lVar12);
    if ((lVar9 == 0) || ((*(uint *)(lVar9 + 8) >> 10 & 1) == 0)) {
LAB_14170da67:
      local_50 = (undefined8 **)CONCAT44(2,(int)local_90 + 1);
      local_58 = param_1;
      FUN_1417082b0(&DAT_1464b4630,&local_58);
    }
    else {
      lVar9 = *(longlong *)(lVar8 + 0x30 + lVar12);
      if (((longlong)param_1[0x5d] <= lVar9) &&
         (*(longlong *)(lVar8 + 0x28 + lVar12) + lVar9 <=
          (longlong)param_1[0x5d] + (longlong)param_1[0x5e])) goto LAB_14170da67;
      if (*(int *)(param_1 + 0x54) == *(int *)((longlong)param_1 + 0x2cc)) {
LAB_14170d87b:
        local_70 = 0xffffffffffffffff;
        piStack_68 = (int *)0x0;
        local_60 = 1;
        local_80 = *(longlong *)(uVar15 * 0x88 + 0x30 + lVar12);
        lStack_78 = *(longlong *)(uVar15 * 0x88 + 0x28 + lVar12);
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&piStack_68,0);
        *piStack_68 = iVar2;
        lVar12 = lStack_78;
        iVar4 = iVar2;
        local_90._0_4_ = iVar2;
        if (DAT_1469e6898 != 0) goto LAB_14170db5a;
        iVar1 = *(int *)(param_1 + 0x44);
        break;
      }
      ppuVar5 = (undefined8 **)param_1[0x5b];
      if ((undefined8 **)param_1[0x5b] == (undefined8 **)0x0) {
        ppuVar5 = param_1 + 0x5a;
      }
      iVar4 = *(int *)((longlong)ppuVar5 + ((longlong)*(int *)(param_1 + 0x5c) - 1U & uVar15) * 4);
      if (iVar4 == -1) goto LAB_14170d87b;
      puVar7 = param_1[0x53];
      while (lVar9 = (longlong)iVar4, *(int *)(puVar7 + lVar9 * 3) != (int)local_90) {
        iVar4 = *(int *)(puVar7 + lVar9 * 3 + 2);
        if (iVar4 == -1) goto LAB_14170d87b;
      }
      if (((iVar4 == -1) || (puVar7 + lVar9 * 3 == (undefined8 *)0x0)) ||
         ((puVar7 + lVar9 * 3)[1] == 0)) goto LAB_14170d87b;
      TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x49,local_98);
      puVar7 = puVar13;
      if (local_98[0] != -1) {
        puVar7 = param_1[0x49] + (longlong)local_98[0] * 7;
      }
      plVar11 = puVar7 + 4;
      if (puVar7 == (undefined8 *)0x0) {
        plVar11 = (longlong *)&DAT_00000018;
      }
      iVar4 = (int)plVar11[1];
      *(int *)(plVar11 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar11 + 0xc) < iVar4 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar4);
      }
      *(int *)(*plVar11 + (longlong)iVar4 * 4) = iVar2;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      return;
    }
  } while( true );
joined_r0x00014170d8d4:
  lStack_78 = lVar12;
  local_90._0_4_ = iVar4;
  if (((iVar1 == 0) || (0xfffff < lVar12)) || (0x14 < iVar4 - iVar2)) goto LAB_14170db5a;
  iVar1 = *(int *)param_1[0x43];
  lVar8 = (longlong)iVar1 * 0x88 + param_1[10][3];
  lVar9 = *(longlong *)(lVar8 + 0x30);
  if (((longlong)param_1[0x5d] <= lVar9) &&
     (*(longlong *)(lVar8 + 0x28) + lVar9 <= (longlong)param_1[0x5e] + (longlong)param_1[0x5d])) {
    FImportOrImportIndexArray::HeapPop(param_1 + 0x43,local_98,0);
    local_50 = (undefined8 **)CONCAT44(2,iVar1 + 1);
    local_58 = param_1;
    FUN_1417082b0(&DAT_1464b4630,&local_58);
LAB_14170db5a:
    uVar16 = 0;
    if (*(char *)((longlong)param_1[10] + 0x2a2) != '\0') {
      uVar16 = param_1[10][99];
    }
    local_48 = (undefined8 *)
               FUN_1416fed60(uVar16,local_80,lVar12,&PTR_StartProfileThreadUsage_1464b4680);
    local_70 = CONCAT44(iVar4,iVar2);
    if (iVar2 <= iVar4) {
      local_58 = (undefined8 **)&local_90;
      local_50 = &local_48;
      local_90._0_4_ = iVar2;
      do {
        FUN_14058d980(param_1 + 0x53,local_98,&local_58,0);
        local_90._0_4_ = (int)local_90 + 1;
      } while ((int)local_90 <= iVar4);
    }
    local_90 = &local_48;
    FUN_1416e04c0(param_1 + 0x49,local_98,&local_90,0);
    plVar11 = param_1[0x49] + (longlong)local_98[0] * 7 + 1;
    if (plVar11 != &local_80) {
      lVar12 = plVar11[2];
      piVar10 = (int *)plVar11[3];
      *plVar11 = local_80;
      plVar11[1] = lStack_78;
      plVar11[2] = local_70;
      plVar11[3] = (longlong)piStack_68;
      plVar11[4] = local_60;
      local_70 = lVar12;
      piStack_68 = piVar10;
    }
    local_90 = (undefined8 **)local_48;
    local_58 = (undefined8 **)param_1[3];
    local_50 = (undefined8 **)CONCAT44(local_50._4_4_,*(undefined4 *)((longlong)param_1 + 0x1e4));
    local_40 = (undefined8 **)&local_90;
    local_38 = &local_58;
    FUN_1416e09d0(&DAT_1464b4728,local_98,&local_40,0);
    if (piStack_68 != (int *)0x0) {
      FMemory::Free(piStack_68);
    }
    return;
  }
  if ((0xc000 < (lVar9 - lVar12) - local_80) || (0x100000 < *(longlong *)(lVar8 + 0x28) + lVar12))
  goto LAB_14170db5a;
  iVar14 = iVar4 + 1;
  if (iVar14 <= iVar1) {
    do {
      if (*(int *)(param_1 + 0x54) != *(int *)((longlong)param_1 + 0x2cc)) {
        ppuVar6 = (undefined8 **)param_1[0x5b];
        if ((undefined8 **)param_1[0x5b] == (undefined8 **)0x0) {
          ppuVar6 = param_1 + 0x5a;
        }
        iVar3 = *(int *)((longlong)ppuVar6 +
                        ((longlong)*(int *)(param_1 + 0x5c) - 1U & (longlong)iVar14) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int *)(param_1[0x53] + (longlong)iVar3 * 3) == iVar14) {
              if (iVar3 != -1) goto LAB_14170db5a;
              break;
            }
            iVar3 = *(int *)(param_1[0x53] + (longlong)iVar3 * 3 + 2);
          } while (iVar3 != -1);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 <= iVar1);
  }
  FImportOrImportIndexArray::HeapPop(param_1 + 0x43,&local_90,0);
  uVar15 = local_60;
  lVar12 = (longlong)(int)local_60;
  lStack_78 = (*(longlong *)(lVar8 + 0x30) - local_80) + *(longlong *)(lVar8 + 0x28);
  iVar4 = (int)local_60 + 1;
  local_60 = CONCAT44(local_60._4_4_,iVar4);
  if (local_60._4_4_ < iVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&piStack_68,uVar15 & 0xffffffff);
  }
  piStack_68[lVar12] = (int)local_90;
  iVar1 = *(int *)(param_1 + 0x44);
  lVar12 = lStack_78;
  iVar4 = (int)local_90;
  goto joined_r0x00014170d8d4;
}



// FUNCTION 14170dcc0 StartReadingHeader body=97 status=ok
// SIG undefined StartReadingHeader(void)

void FArchiveAsync2::StartReadingHeader(longlong param_1)

{
  BOOL BVar1;
  
  WaitForIntialPhases(param_1,0);
  if (-1 < *(char *)(param_1 + 0x28)) {
    if (*(int *)(param_1 + 0x110) < 2) {
      BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
      if (BVar1 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e6a70);
    }
    WaitRead(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14170dd30 FUN_14170dd30 body=130 status=ok
// SIG undefined FUN_14170dd30(void)

void FUN_14170dd30(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if ((*(longlong *)(lVar1 + 0xa0) != 0) &&
     (((lVar2 = *(longlong *)(lVar1 + 0x68), lVar2 != 0 ||
       ((*(char *)(lVar1 + 0x58) != '\0' && (lVar2 = *(longlong *)(lVar1 + 0x70), lVar2 != 0)))) &&
      (lVar1 = UObjectBaseUtility::GetOutermost(lVar2), *(longlong *)(lVar1 + 0x60) != 0)))) {
    UObjectBaseUtility::GetOutermost(lVar2);
  }
  return;
}



// FUNCTION 14170ddc0 StaticInit body=184 status=ok
// SIG undefined StaticInit(void)

void FGCObject::StaticInit(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if (DAT_1469e6880 == 0) {
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar6 = 0;
    uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
    DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
    iVar1 = *(int *)(DAT_1469e6880 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
  }
  return;
}



// FUNCTION 14170de80 SummaryComplete body=181 status=ok
// SIG undefined SummaryComplete(void)

void FPrecacheCallbackHandler::SummaryComplete(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  BOOL BVar6;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  iVar2 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = iVar2 + 1;
  if (*(int *)(param_1 + 0x94) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x88,iVar2);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014170df2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 14170df40 FUN_14170df40 body=178 status=ok
// SIG undefined FUN_14170df40(void)

void FUN_14170df40(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  
  lVar5 = FUN_1416f86a0();
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 == DAT_1468c21c0) goto LAB_14170df79;
  }
  else {
LAB_14170df79:
    cVar3 = FUN_1415e1500();
    if (cVar3 == '\0') goto LAB_14170dfba;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x14b9,L"Async loading can only be suspended from the main thread");
  FDebug::AssertFailed
            (&DAT_144cf0d52,"Unknown",0x14b9,
             L"Async loading can only be suspended from the main thread");
LAB_14170dfba:
  LOCK();
  piVar1 = (int *)(lVar5 + 0x74);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((DAT_1469e689c != '\0') && (iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014170dfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x20))(*(longlong **)(lVar5 + 0x28),0xffffffff,0);
    return;
  }
  return;
}



// FUNCTION 14170e020 FUN_14170e020 body=1626 status=ok
// SIG undefined FUN_14170e020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14170e020(longlong param_1,char param_2,undefined1 param_3,float param_4,undefined8 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  undefined8 uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char local_res8 [8];
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88 [12];
  
  LOCK();
  bVar7 = *(int *)(param_1 + 0x74) == 0;
  if (bVar7) {
    *(int *)(param_1 + 0x74) = 0;
  }
  cVar3 = DAT_1469e689c;
  UNLOCK();
  if (!bVar7) {
    return 1;
  }
  QueryPerformanceCounter(&local_c8);
  local_res8[0] = '\0';
  dVar1 = (double)local_c8.QuadPart * DAT_1468b02f8 + 16777216.0;
  iVar4 = FUN_141704950(param_1,param_2,param_3,param_4,local_res8,param_5);
  QueryPerformanceCounter(&local_c0);
  dVar9 = (double)local_c0.QuadPart * DAT_1468b02f8;
  if (cVar3 == '\0') {
    if (iVar4 == 0) goto LAB_14170e61b;
    bVar7 = false;
    dVar10 = (double)param_4;
    if (param_2 != '\0') {
      QueryPerformanceCounter(&local_b8);
      _DAT_1464b48b8 = (double)local_b8.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar8 = _DAT_1464b48b8 - dVar1;
      bVar7 = dVar10 < dVar8;
      if ((((dVar10 < dVar8) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar1)) &&
         (((double)DAT_1464b441c < dVar8 && ((double)(DAT_1464b4418 * param_4) < dVar8)))) {
        DAT_1464b48b0 = dVar1;
      }
    }
    if ((!bVar7) && (cVar2 = IsGarbageCollectionWaiting(), cVar2 == '\0')) {
      dVar10 = dVar10 - ((dVar9 + 16777216.0) - dVar1);
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      iVar4 = FUN_14170ecb0(param_1,param_2,param_3,(float)dVar10,local_res8,param_5);
    }
  }
  if (iVar4 == 0) goto LAB_14170e61b;
  if (param_2 != '\0') {
    QueryPerformanceCounter(&local_b0);
    _DAT_1464b48b8 = (double)local_b0.QuadPart * DAT_1468b02f8 + 16777216.0;
    dVar9 = _DAT_1464b48b8 - dVar1;
    if (((((double)param_4 < dVar9) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar1)) &&
       (((double)DAT_1464b441c < dVar9 && ((double)(DAT_1464b4418 * param_4) < dVar9)))) {
      DAT_1464b48b0 = dVar1;
    }
    if ((double)param_4 < dVar9) goto LAB_14170e61b;
  }
  cVar2 = IsGarbageCollectionWaiting();
  if (cVar2 != '\0') goto LAB_14170e61b;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd8);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  LOCK();
  bVar7 = *(int *)(param_1 + 0x2b4) == 0;
  if (bVar7) {
    *(int *)(param_1 + 0x2b4) = 0;
  }
  UNLOCK();
  cVar2 = local_res8[0];
  if (bVar7) {
    FUN_141719ff0();
    cVar2 = '\x01';
    if (param_2 != '\0') {
      QueryPerformanceCounter(&local_a8);
      _DAT_1464b48b8 = (double)local_a8.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar9 = _DAT_1464b48b8 - dVar1;
      if ((((double)param_4 < dVar9) && (DAT_1469e68bc != 0)) &&
         ((DAT_1464b48b0 != dVar1 &&
          (((double)DAT_1464b441c < dVar9 && ((double)(DAT_1464b4418 * param_4) < dVar9)))))) {
        DAT_1464b48b0 = dVar1;
      }
      if ((double)param_4 < dVar9) goto LAB_14170e3a2;
    }
    IsGarbageCollectionWaiting();
  }
LAB_14170e3a2:
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if ((cVar2 != '\0') || (DAT_1468c21ab == '\0')) goto LAB_14170e61b;
  if (cVar3 == '\0') {
    if (DAT_1464aaa49 == '\0') {
LAB_14170e579:
      FUN_1416ec370(param_1);
    }
    else {
      uVar6 = FUN_1416f9640();
      cVar3 = FEDLBootNotificationManager::FireCompletedCompiledInImports(uVar6,0);
      dVar9 = (double)param_4;
      if (param_2 == '\0') {
LAB_14170e4c4:
        IsGarbageCollectionWaiting();
      }
      else {
        QueryPerformanceCounter(&local_98);
        _DAT_1464b48b8 = (double)local_98.QuadPart * DAT_1468b02f8 + 16777216.0;
        dVar10 = _DAT_1464b48b8 - dVar1;
        if ((((dVar9 < dVar10) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar1)) &&
           (((double)DAT_1464b441c < dVar10 && ((double)(DAT_1464b4418 * param_4) < dVar10)))) {
          DAT_1464b48b0 = dVar1;
        }
        if (dVar10 <= dVar9) goto LAB_14170e4c4;
      }
      if (cVar3 == '\0') {
        uVar6 = FUN_1416f9640();
        cVar3 = FUN_1416ecfe0(uVar6);
        if (param_2 == '\0') {
LAB_14170e570:
          IsGarbageCollectionWaiting();
        }
        else {
          QueryPerformanceCounter(&local_90);
          _DAT_1464b48b8 = (double)local_90.QuadPart * DAT_1468b02f8 + 16777216.0;
          dVar10 = _DAT_1464b48b8 - dVar1;
          if (((dVar9 < dVar10) && (DAT_1469e68bc != 0)) &&
             ((DAT_1464b48b0 != dVar1 &&
              (((double)DAT_1464b441c < dVar10 && ((double)(DAT_1464b4418 * param_4) < dVar10))))))
          {
            DAT_1464b48b0 = dVar1;
          }
          if (dVar10 <= dVar9) goto LAB_14170e570;
        }
        if (cVar3 == '\0') goto LAB_14170e579;
      }
    }
    if (param_2 != '\0') {
      QueryPerformanceCounter(local_88);
      local_a0 = local_88[0];
LAB_14170e59f:
      _DAT_1464b48b8 = (double)local_a0.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar9 = _DAT_1464b48b8 - dVar1;
      if (((((double)param_4 < dVar9) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar1)) &&
         (((double)DAT_1464b441c < dVar9 && ((double)(DAT_1464b4418 * param_4) < dVar9)))) {
        DAT_1464b48b0 = dVar1;
      }
      if ((double)param_4 < dVar9) goto LAB_14170e61b;
    }
  }
  else {
    if (DAT_1464aaa49 == '\0') goto LAB_14170e61b;
    uVar6 = FUN_1416f9640();
    FUN_1416ecfe0(uVar6);
    if (param_2 != '\0') {
      QueryPerformanceCounter(&local_a0);
      goto LAB_14170e59f;
    }
  }
  IsGarbageCollectionWaiting();
LAB_14170e61b:
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464aeed8);
  return iVar4;
}



// FUNCTION 14170e680 FUN_14170e680 body=1578 status=ok
// SIG undefined FUN_14170e680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14170e680(longlong param_1,undefined1 param_2,undefined1 param_3,float *param_4,
                 undefined8 param_5)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  void *pvVar7;
  float *pfVar8;
  char cVar9;
  DWORD DVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  LARGE_INTEGER local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  float *local_res20;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  longlong local_c0;
  undefined8 local_b8;
  code *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  *(undefined1 *)(param_1 + 200) = param_2;
  *(undefined1 *)(param_1 + 0xc9) = param_3;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(float *)(param_1 + 0xc4) = *param_4;
  local_res20 = param_4;
  QueryPerformanceCounter(&local_res8);
  dVar17 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  *(double *)(param_1 + 0xd0) = dVar17;
  if (*(double *)(param_1 + 0xe8) == 0.0) {
    lVar13 = *(longlong *)(param_1 + 0x90);
    *(double *)(param_1 + 0xe8) = dVar17;
    if ((lVar13 != 0) && (*(double *)(lVar13 + 0xe8) == 0.0)) {
      *(double *)(lVar13 + 0xe8) = dVar17;
    }
  }
  puStack_a0 = local_res10;
  local_res10[0] = 0;
  local_a8 = FUN_1406ddef0;
  local_98 = 0x406ddef0;
  uStack_94 = 1;
  puStack_90 = puStack_a0;
  local_c0 = FUN_1415d8310(&local_98,&DAT_14622e6dc);
  pvVar7 = ThreadLocalStoragePointer;
  uVar15 = (ulonglong)_tls_index;
  local_b8 = *(undefined8 *)(local_c0 + 0xa0);
  *(longlong *)(local_c0 + 0xa0) = param_1;
  do {
    iVar11 = 2;
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      if (DVar10 == DAT_1468c21c0) goto LAB_14170e7ee;
    }
    else {
LAB_14170e7ee:
      if (*(int *)(*(longlong *)((longlong)pvVar7 + uVar15 * 8) + 0x38) < DAT_1469e6f40) {
        _Init_thread_header(&DAT_1469e6f40);
        if (DAT_1469e6f40 == -1) {
          FUN_1416e39e0(&DAT_1469e6c60);
          atexit((_func_5014 *)&LAB_143e7c100);
          _Init_thread_footer(&DAT_1469e6f40);
        }
      }
      _DAT_1469e6f38 = _DAT_1469e6f38 + 1;
    }
    FUN_1417848b0(0);
    if (DAT_1468c21ab == '\0') {
      iVar11 = FUN_1416eeef0(param_1);
      if (iVar11 == 2) {
        iVar11 = FAsyncPackage::FinishLinker(param_1);
        if (iVar11 == 2) {
          iVar11 = FUN_1416fda90(param_1,param_5);
          if (iVar11 == 2) {
            FUN_141729b50(local_res18);
            lVar13 = *(longlong *)(param_1 + 0x50);
            iVar14 = *(int *)(param_1 + 0xa0);
            if (iVar14 < *(int *)(lVar13 + 0x10)) {
              do {
                piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
                LOCK();
                bVar16 = *piVar1 == 0;
                if (bVar16) {
                  *piVar1 = 0;
                }
                UNLOCK();
                if (!bVar16) {
LAB_14170e992:
                  lVar13 = *(longlong *)(param_1 + 0x50);
                  iVar14 = *(int *)(param_1 + 0xa0);
                  break;
                }
                fVar4 = *(float *)(param_1 + 0xc4);
                dVar17 = *(double *)(param_1 + 0xd0);
                if (*(char *)(param_1 + 200) != '\0') {
                  QueryPerformanceCounter(&local_d8);
                  dVar6 = (double)fVar4;
                  _DAT_1464b48b8 = (double)local_d8.QuadPart * DAT_1468b02f8 + 16777216.0;
                  dVar18 = _DAT_1464b48b8 - dVar17;
                  if ((((dVar6 < dVar18) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar17)) &&
                     (((double)DAT_1464b441c < dVar18 && ((double)(DAT_1464b4418 * fVar4) < dVar18))
                     )) {
                    DAT_1464b48b0 = dVar17;
                  }
                  if (dVar6 < dVar18) goto LAB_14170e992;
                }
                cVar9 = IsGarbageCollectionWaiting();
                if (cVar9 != '\0') goto LAB_14170e992;
                *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
                uVar12 = FUN_141731ec0(*(undefined8 *)(param_1 + 0x50));
                *(undefined8 *)(param_1 + 0xd8) = uVar12;
                *(wchar_t **)(param_1 + 0xe0) = L"creating imports for";
                FUN_1416ea3b0(param_1,uVar12);
                lVar13 = *(longlong *)(param_1 + 0x50);
                iVar14 = *(int *)(param_1 + 0xa0);
              } while (iVar14 < *(int *)(lVar13 + 0x10));
            }
            iVar5 = *(int *)(lVar13 + 0x10);
            iVar11 = 0;
            if (iVar14 == iVar5) {
              iVar11 = 2;
            }
            FUN_14172a400(local_res18);
            if (iVar14 == iVar5) {
              iVar11 = FUN_1416ee9a0(param_1);
              if (iVar11 == 2) {
                iVar11 = FUN_141701d60(param_1);
                if (iVar11 == 2) goto LAB_14170e9d6;
              }
            }
          }
        }
      }
    }
    else {
LAB_14170e9d6:
      if (*(char *)(param_1 + 0xcb) == '\0') {
        iVar11 = FAsyncPackage::FinishExternalReadDependencies(param_1);
        if ((iVar11 == 2) && (*(char *)(param_1 + 0xcb) == '\0')) {
          iVar11 = FUN_1417018a0(param_1);
        }
      }
    }
    FUN_14178a260();
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      if (DVar10 == DAT_1468c21c0) goto LAB_14170ea35;
    }
    else {
LAB_14170ea35:
      if (*(int *)(*(longlong *)((longlong)pvVar7 + uVar15 * 8) + 0x38) < DAT_1469e6f40) {
        _Init_thread_header(&DAT_1469e6f40);
        if (DAT_1469e6f40 == -1) {
          FUN_1416e39e0(&DAT_1469e6c60);
          atexit((_func_5014 *)&LAB_143e7c100);
          _Init_thread_footer(&DAT_1469e6f40);
          _DAT_1469e6f38 = _DAT_1469e6f38 + -1;
          goto LAB_14170ea5b;
        }
      }
      _DAT_1469e6f38 = _DAT_1469e6f38 + -1;
    }
LAB_14170ea5b:
    if (*(char *)(param_1 + 0xcb) == '\0') {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x58) + 8);
      *puVar2 = *puVar2 | 0x80000;
    }
    if ((iVar11 == 2) || (*(char *)(param_1 + 0xcb) != '\0')) {
      iVar11 = FUN_1416f72d0(param_1);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x74);
    LOCK();
    bVar16 = *piVar1 == 0;
    if (bVar16) {
      *piVar1 = 0;
    }
    UNLOCK();
    if (!bVar16) {
LAB_14170eb50:
      pfVar8 = local_res20;
      if ((*(longlong *)(param_1 + 0x58) != 0) && (iVar11 == 2)) {
        pbVar3 = (byte *)(*(longlong *)(param_1 + 0x58) + 0x28);
        *pbVar3 = *pbVar3 | 2;
      }
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(bool *)(param_1 + 0xcc) = iVar11 == 2;
      if ((iVar11 == 2) && (DAT_1468c21ab != '\0')) {
        *(undefined1 *)(param_1 + 0x1e0) = 10;
      }
      QueryPerformanceCounter(&local_c8);
      dVar17 = (double)*pfVar8 -
               (((double)local_c8.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0xd0));
      if (dVar17 <= 0.0) {
        dVar17 = 0.0;
      }
      *pfVar8 = (float)dVar17;
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
      *(undefined8 *)(local_c0 + 0xa0) = local_b8;
      return iVar11;
    }
    fVar4 = *(float *)(param_1 + 0xc4);
    dVar17 = *(double *)(param_1 + 0xd0);
    if (*(char *)(param_1 + 200) != '\0') {
      QueryPerformanceCounter(&local_d0);
      dVar6 = (double)fVar4;
      _DAT_1464b48b8 = (double)local_d0.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar18 = _DAT_1464b48b8 - dVar17;
      if ((((dVar6 < dVar18) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar17)) &&
         (((double)DAT_1464b441c < dVar18 && ((double)(fVar4 * DAT_1464b4418) < dVar18)))) {
        DAT_1464b48b0 = dVar17;
      }
      if (dVar6 < dVar18) goto LAB_14170eb50;
    }
    cVar9 = IsGarbageCollectionWaiting();
    if ((cVar9 != '\0') || (iVar11 != 0)) goto LAB_14170eb50;
  } while( true );
}



// FUNCTION 14170ecb0 FUN_14170ecb0 body=941 status=ok
// SIG undefined FUN_14170ecb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14170ecb0(longlong param_1,char param_2,undefined1 param_3,float param_4,char *param_5,
             undefined8 param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  double dVar3;
  char cVar4;
  BOOL BVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  bool bVar9;
  double dVar10;
  float fVar11;
  undefined1 local_res8 [8];
  undefined1 local_78 [4];
  int local_74;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50 [7];
  
  uVar8 = 2;
  LOCK();
  bVar9 = *(int *)(param_1 + 0x70) == 0;
  if (bVar9) {
    *(int *)(param_1 + 0x70) = 0;
  }
  UNLOCK();
  if (bVar9) {
    local_74 = 0;
    QueryPerformanceCounter(&local_70);
    dVar3 = (double)local_70.QuadPart * DAT_1468b02f8 + 16777216.0;
    LOCK();
    bVar9 = *(int *)(param_1 + 0x2b8) == 0;
    if (bVar9) {
      *(int *)(param_1 + 0x2b8) = 0;
    }
    UNLOCK();
    if (!bVar9) {
      if ((DAT_1464aaa49 != '\0') && (DAT_1468c21ab != '\0')) {
        uVar6 = FUN_1416f9640();
        FEDLBootNotificationManager::FireCompletedCompiledInImports(uVar6,0);
      }
      FUN_141729b50(local_res8);
      uVar6 = param_6;
      FUN_1416ed9c0(param_1,param_2,param_3,param_4,param_6);
      uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_14172a400(local_res8);
      QueryPerformanceCounter(&local_68);
      fVar11 = param_4 - (float)(((double)local_68.QuadPart * DAT_1468b02f8 + 16777216.0) - dVar3);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (((fVar11 <= 0.0) && (param_2 != '\0')) && (DAT_1469e689c == '\0')) {
        return 0;
      }
      FUN_141729b50(local_78);
      uVar8 = FUN_141702d00(param_1,&local_74,param_2,param_3,CONCAT44(uVar8,fVar11),param_6);
      iVar1 = local_74;
      if ((*param_5 == '\0') && (local_74 < 1)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      *param_5 = cVar4;
      FUN_14172a400(local_78);
      if (iVar1 != 0) {
        return uVar8;
      }
    }
    if (DAT_1469e689c == '\0') {
      return uVar8;
    }
    cVar4 = FUN_1416fbb40();
    if (cVar4 != '\0') {
      lVar7 = FUN_1416f9640();
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar7 + 0xd0);
      BVar5 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar5 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      iVar1 = *(int *)(lVar7 + 0x58);
      iVar2 = *(int *)(lVar7 + 0x84);
      LeaveCriticalSection(lpCriticalSection);
      if (iVar1 - iVar2 < 1) {
        FUN_1416ec370(param_1);
        if (param_2 != '\0') {
          QueryPerformanceCounter(&local_60);
          _DAT_1464b48b8 = (double)local_60.QuadPart * DAT_1468b02f8 + 16777216.0;
          dVar10 = _DAT_1464b48b8 - dVar3;
          if ((((double)param_4 < dVar10) && (DAT_1469e68bc != 0)) &&
             ((DAT_1464b48b0 != dVar3 &&
              (((double)DAT_1464b441c < dVar10 && ((double)(DAT_1464b4418 * param_4) < dVar10))))))
          {
            DAT_1464b48b0 = dVar3;
          }
          if ((double)param_4 < dVar10) goto LAB_14170ef6c;
        }
        IsGarbageCollectionWaiting();
      }
    }
LAB_14170ef6c:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),0x1e,1);
    return uVar8;
  }
  QueryPerformanceCounter(&local_58);
  dVar3 = (double)local_58.QuadPart * DAT_1468b02f8 + 16777216.0;
  FUN_1416ebf10(param_1);
  if (param_2 != '\0') {
    QueryPerformanceCounter(local_50);
    _DAT_1464b48b8 = (double)local_50[0].QuadPart * DAT_1468b02f8 + 16777216.0;
    dVar10 = _DAT_1464b48b8 - dVar3;
    if (((((double)param_4 < dVar10) && (DAT_1469e68bc != 0)) && (DAT_1464b48b0 != dVar3)) &&
       (((double)DAT_1464b441c < dVar10 && ((double)(DAT_1464b4418 * param_4) < dVar10)))) {
      DAT_1464b48b0 = dVar3;
    }
    if ((double)param_4 < dVar10) goto LAB_14170f052;
  }
  IsGarbageCollectionWaiting();
LAB_14170f052:
  LOCK();
  *(undefined4 *)(param_1 + 0x70) = 0;
  UNLOCK();
  return 2;
}



// FUNCTION 14170f060 TotalSize body=153 status=ok
// SIG undefined TotalSize(void)

longlong FArchiveAsync2::TotalSize(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar2 + 0x71) == '\0') {
      (**(code **)(*plVar2 + 8))(plVar2,0);
      plVar2 = *(longlong **)(param_1 + 0x98);
    }
    if (((DAT_1468c21ab != '\0') || (*(char *)(param_1 + 0x114) != '\0')) &&
       (*(longlong *)(param_1 + 0x108) != 0)) {
      lVar1 = -1;
      if (*(char *)((longlong)plVar2 + 0x73) == '\0') {
        lVar1 = plVar2[2];
      }
      *(longlong *)(param_1 + 0xd0) = lVar1;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return *(longlong *)(param_1 + 0x108) + *(longlong *)(param_1 + 0xd0);
}



// FUNCTION 14170f100 TryConvertFilenameToLongPackageName body=797 status=ok
// SIG undefined TryConvertFilenameToLongPackageName(void)

undefined8
FPackageName::TryConvertFilenameToLongPackageName
          (undefined8 *param_1,short **param_2,undefined2 **param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  short *psVar11;
  int iVar12;
  short *psVar13;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  short *local_38;
  undefined8 local_30;
  
  FUN_1416fb490(&local_38,param_1);
  psVar11 = local_38 + (int)local_30;
  for (psVar13 = local_38; psVar1 = local_38, psVar13 != psVar11; psVar13 = psVar13 + 1) {
    if (*psVar13 == 0x2e) {
      iVar12 = (int)((longlong)psVar13 - (longlong)local_38 >> 1);
      goto joined_r0x00014170f170;
    }
  }
  iVar12 = -1;
joined_r0x00014170f170:
  do {
    psVar13 = local_38;
    if (psVar1 == psVar11) break;
    if (*psVar1 == 0x5c) {
      iVar7 = (int)((longlong)psVar1 - (longlong)local_38 >> 1);
      goto joined_r0x00014170f190;
    }
    psVar1 = psVar1 + 1;
  } while( true );
  iVar7 = -1;
joined_r0x00014170f190:
  do {
    if (psVar13 == psVar11) break;
    if (*psVar13 == 0x3a) {
      iVar8 = (int)((longlong)psVar13 - (longlong)local_38 >> 1);
      goto LAB_14170f1a6;
    }
    psVar13 = psVar13 + 1;
  } while( true );
  iVar8 = -1;
LAB_14170f1a6:
  if (((iVar12 == -1) && (iVar7 == -1)) && (iVar8 == -1)) {
    if (param_2 != &local_38) {
      iVar12 = (int)local_30;
      if (*param_2 != (short *)0x0) {
        FMemory::Free();
        iVar12 = (int)local_30;
      }
      uVar3 = local_30._4_4_;
      *param_2 = local_38;
      local_38 = (short *)0x0;
      local_30 = 0;
      *(int *)(param_2 + 1) = iVar12;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    }
    uVar9 = 1;
  }
  else {
    cVar4 = FPaths::IsRelative(param_1);
    if (cVar4 != '\0') {
      FPaths::ConvertRelativePathToFull(&local_48,param_1);
      cVar4 = FPaths::IsRelative(&local_48);
      if (((cVar4 == '\0') && (local_40 != 0)) &&
         ((1 < local_40 + -1 &&
          (cVar4 = TryConvertFilenameToLongPackageName(&local_48,param_2,0), cVar4 != '\0')))) {
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uVar9 = 1;
        goto LAB_14170f3ee;
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (param_3 != (undefined2 **)0x0) {
      local_48 = (undefined2 *)0x0;
      local_3c = 0;
      iVar6 = 0;
      if (iVar12 != -1) {
        local_40 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        *local_48 = 0x2e;
        local_48[1] = 0;
        iVar6 = local_40;
      }
      if (iVar7 != -1) {
        local_40 = (2 - (uint)(iVar6 != 0)) + iVar6;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar6);
        }
        local_48[(longlong)iVar6 - (ulonglong)(iVar6 != 0)] = 0x5c;
        (local_48 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[1] = 0;
        iVar6 = local_40;
      }
      if (iVar8 != -1) {
        local_40 = (2 - (uint)(iVar6 != 0)) + iVar6;
        if (local_3c < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar6);
        }
        local_48[(longlong)iVar6 - (ulonglong)(iVar6 != 0)] = 0x3a;
        (local_48 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[1] = 0;
        iVar6 = local_40;
      }
      puVar2 = local_48;
      puVar10 = &DAT_143f3eda8;
      puVar5 = &DAT_143f3eda8;
      if (iVar6 != 0) {
        puVar5 = local_48;
      }
      psVar11 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        psVar11 = local_38;
      }
      if (*(int *)(param_1 + 1) != 0) {
        puVar10 = (undefined2 *)*param_1;
      }
      FString::PrintfImpl(&local_48,
                          L"FilenameToLongPackageName failed to convert \'%s\'. Attempt result was \'%s\', but the path contains illegal characters \'%s\'"
                          ,puVar10,psVar11,puVar5);
      if (param_3 == &local_48) {
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_3 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *param_3 = local_48;
        *(int *)(param_3 + 1) = local_40;
        *(int *)((longlong)param_3 + 0xc) = local_3c;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
    }
    uVar9 = 0;
  }
LAB_14170f3ee:
  if (local_38 != (short *)0x0) {
    FMemory::Free(local_38);
  }
  return uVar9;
}



// FUNCTION 14170f420 FUN_14170f420 body=937 status=ok
// SIG undefined FUN_14170f420(void)

undefined8 FUN_14170f420(undefined8 *param_1,wchar_t **param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  wchar_t *local_res20;
  wchar_t *local_58;
  wchar_t *local_50;
  int local_48;
  uint local_44;
  
  lVar5 = FUN_1416f87e0();
  lVar12 = *(longlong *)(lVar5 + 0x130);
  lVar5 = (longlong)*(int *)(lVar5 + 0x138) * 0x20 + lVar12;
  if (lVar12 != lVar5) {
    do {
      cVar3 = FString::StartsWith(param_1,lVar12,1);
      if (cVar3 != '\0') {
        iVar14 = *(int *)(param_1 + 1);
        pwVar11 = (wchar_t *)0x0;
        uVar10 = 0;
        uVar7 = *(int *)(lVar12 + 8) - 1;
        if (*(int *)(lVar12 + 8) == 0) {
          uVar7 = uVar10;
        }
        uVar13 = iVar14 - 1;
        if (iVar14 == 0) {
          uVar13 = uVar10;
        }
        uVar4 = uVar7 + 0x7fffffff;
        if (uVar7 < uVar13) {
          uVar13 = uVar7;
        }
        uVar7 = iVar14 - 1;
        if (iVar14 == 0) {
          uVar7 = uVar10;
        }
        uVar8 = uVar13;
        if ((uVar13 <= uVar4) && (uVar8 = uVar7, uVar4 < uVar7)) {
          uVar8 = uVar4;
        }
        if (iVar14 == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_1;
        }
        iVar9 = uVar8 - uVar13;
        local_58 = (wchar_t *)0x0;
        local_50 = (wchar_t *)0x0;
        local_44 = 0;
        iVar14 = iVar9 + 1;
        if (iVar9 == 0) {
          iVar14 = 0;
        }
        if (0 < iVar14) {
          local_48 = iVar14;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
          iVar14 = local_48;
          pwVar1 = local_50;
          local_58 = local_50;
          if (0 < local_48) {
            wcsncpy(local_50,puVar6 + (int)uVar13,(longlong)iVar9);
            pwVar1[iVar9] = L'\0';
          }
        }
        local_res20 = local_58;
        local_48 = *(int *)(lVar12 + 0x18);
        lVar5 = (longlong)local_48;
        if (local_48 < 2) {
          local_58 = (wchar_t *)0x0;
          uVar13 = local_44;
        }
        else {
          uVar7 = iVar14 - 1;
          if (iVar14 == 0) {
            uVar7 = uVar10;
          }
          if ((local_48 != 0) || (uVar13 = 1, uVar7 == 0)) {
            uVar13 = uVar10;
          }
          pvVar2 = *(void **)(lVar12 + 0x10);
          local_res20 = (wchar_t *)0x0;
          local_50 = (wchar_t *)0x0;
          if ((local_48 == 0) && (uVar13 + uVar7 == 0)) {
            local_44 = 0;
            iVar9 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_48 + uVar13 + uVar7,0);
            local_res20 = local_50;
            _guard_xfg_dispatch_icall_nop(local_50,pvVar2,lVar5 * 2);
            iVar9 = local_48;
          }
          uVar13 = local_44;
          iVar14 = iVar9;
          if (uVar7 != 0) {
            local_48 = iVar9 + (uint)(iVar9 == 0) + uVar7;
            if ((int)local_44 < local_48) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,iVar9);
              local_res20 = local_50;
            }
            uVar13 = local_44;
            iVar14 = local_48;
            _guard_xfg_dispatch_icall_nop
                      (local_res20 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),local_58,
                       (longlong)(int)uVar7 * 2);
            (local_res20 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[(int)uVar7] = L'\0';
          }
        }
        local_50 = local_res20;
        iVar9 = *(int *)(param_3 + 1);
        if (iVar14 < 2) {
          pvVar2 = (void *)*param_3;
          local_50 = (wchar_t *)0x0;
          local_48 = iVar9;
          if (iVar9 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,iVar9,0);
            pwVar11 = local_50;
            _guard_xfg_dispatch_icall_nop(local_50,pvVar2,(longlong)iVar9 * 2);
            iVar9 = local_48;
            uVar10 = local_44;
          }
        }
        else {
          uVar7 = iVar9 - 1;
          if (iVar9 == 0) {
            uVar7 = uVar10;
          }
          if ((iVar14 != 0) || (uVar4 = 1, uVar7 == 0)) {
            uVar4 = uVar10;
          }
          local_res20 = (wchar_t *)0x0;
          local_48 = iVar14;
          local_44 = uVar13;
          if ((int)uVar13 < (int)(uVar7 + uVar4 + iVar14)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_50);
          }
          iVar14 = local_48;
          pvVar2 = (void *)*param_3;
          pwVar11 = local_50;
          iVar9 = local_48;
          uVar10 = local_44;
          if (uVar7 != 0) {
            lVar12 = (longlong)local_48;
            local_48 = local_48 + (uint)(local_48 == 0) + uVar7;
            if ((int)local_44 < local_48) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,iVar14);
            }
            uVar10 = local_44;
            iVar9 = local_48;
            pwVar11 = local_50;
            pwVar1 = local_50 + (lVar12 - (ulonglong)(iVar14 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar1,pvVar2,(longlong)(int)uVar7 * 2);
            pwVar1[(int)uVar7] = L'\0';
          }
        }
        if (param_2 == &local_50) {
          if (pwVar11 != (wchar_t *)0x0) {
            FMemory::Free(pwVar11);
          }
        }
        else {
          if (*param_2 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          *param_2 = pwVar11;
          *(int *)(param_2 + 1) = iVar9;
          *(uint *)((longlong)param_2 + 0xc) = uVar10;
        }
        if (local_res20 != (wchar_t *)0x0) {
          FMemory::Free(local_res20);
        }
        if (local_58 != (wchar_t *)0x0) {
          FMemory::Free(local_58);
        }
        return 1;
      }
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != lVar5);
  }
  return 0;
}



// FUNCTION 14170f7d0 FUN_14170f7d0 body=714 status=ok
// SIG undefined FUN_14170f7d0(void)

/* WARNING: Removing unreachable block (ram,0x00014170f856) */

undefined8 FUN_14170f7d0(wchar_t **param_1,wchar_t **param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *local_res20;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  
  pwVar10 = (wchar_t *)0x0;
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  uVar8 = 0;
  uVar2 = FUN_141592950(param_1,&DAT_144cf08d4,0,0,0xffffffff);
  if (uVar2 == 0xffffffff) {
    pwVar6 = pwVar10;
    if (&local_58 != param_1) {
      iVar3 = *(int *)(param_1 + 1);
      pwVar10 = *param_1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      pwVar6 = (wchar_t *)0x0;
      if ((iVar3 != 0) || (local_50._4_4_ != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar3);
        _guard_xfg_dispatch_icall_nop(local_58,pwVar10,(longlong)iVar3 * 2);
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 1);
    uVar8 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    if (uVar2 < uVar8) {
      uVar8 = uVar2;
    }
    if (iVar3 == 0) {
      local_res20 = L"";
    }
    else {
      local_res20 = *param_1;
    }
    local_48 = (wchar_t *)0x0;
    uVar5 = uVar8 + 1;
    if (uVar8 == 0) {
      uVar5 = 0;
    }
    local_40 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar10 = local_48;
      uVar5 = (uint)local_40;
      if (0 < (int)(uint)local_40) {
        wcsncpy(local_48,local_res20,(longlong)(int)uVar8);
        pwVar10[(int)uVar8] = L'\0';
      }
    }
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar3 = *(int *)(param_1 + 1);
    uVar9 = iVar3 - 1;
    local_50 = CONCAT44((int)(local_40 >> 0x20),uVar5);
    uVar8 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar9 = 0;
    }
    uVar5 = uVar2 + 0x80000000;
    if (uVar2 + 1 < uVar9) {
      uVar9 = uVar2 + 1;
    }
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    uVar2 = uVar9;
    if ((uVar9 <= uVar5) && (uVar2 = uVar8, uVar5 < uVar8)) {
      uVar2 = uVar5;
    }
    if (iVar3 == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *param_1;
    }
    iVar3 = uVar2 - uVar9;
    local_48 = (wchar_t *)0x0;
    pwVar6 = (wchar_t *)0x0;
    uVar8 = iVar3 + 1;
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    local_40 = (ulonglong)uVar8;
    local_58 = pwVar10;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar6 = local_48;
      uVar8 = (uint)local_40;
      if (0 < (int)(uint)local_40) {
        wcsncpy(local_48,pwVar11 + (int)uVar9,(longlong)iVar3);
        pwVar6[iVar3] = L'\0';
      }
    }
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  cVar1 = FUN_14170afe0(&local_58,&local_48,0);
  pwVar10 = local_48;
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    pwVar11 = L"";
    if (uVar8 != 0) {
      pwVar11 = pwVar6;
    }
    pwVar7 = L"";
    if ((uint)local_40 != 0) {
      pwVar7 = local_48;
    }
    FString::PrintfImpl(&local_48,L"%s.%s",pwVar7,pwVar11);
    if (param_2 == &local_48) {
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_2 = local_48;
      *(uint *)(param_2 + 1) = (uint)local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
    }
    uVar4 = 1;
  }
  if (pwVar10 != (wchar_t *)0x0) {
    FMemory::Free(pwVar10);
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14170faa0 UpdateLoadPercentage body=126 status=ok
// SIG undefined UpdateLoadPercentage(void)

void FAsyncPackage::UpdateLoadPercentage(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  fVar5 = 0.0;
  if (lVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x100);
    if (iVar4 < 1) goto LAB_14170fb09;
    fVar5 = (float)*(int *)(param_1 + 0xb8);
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 <= *(int *)(param_1 + 0x100)) {
      iVar3 = *(int *)(param_1 + 0x100);
    }
    iVar4 = iVar3 + *(int *)(lVar1 + 0x20) + iVar4;
    fVar5 = (float)(*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0x9c))
            * 100.0;
  }
  fVar5 = fVar5 / (float)iVar4;
LAB_14170fb09:
  fVar2 = *(float *)(param_1 + 0xf0);
  if (*(float *)(param_1 + 0xf0) <= fVar5) {
    fVar2 = fVar5;
  }
  *(float *)(param_1 + 0xf0) = fVar2;
  return;
}



// FUNCTION 14170fb20 FUN_14170fb20 body=226 status=ok
// SIG undefined FUN_14170fb20(void)

byte FUN_14170fb20(void)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar2 < DAT_1469e6aa4) {
    _Init_thread_header(&DAT_1469e6aa4);
    if (DAT_1469e6aa4 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DAT_1469e6aa0,L"Kismet",L"bDeferDependencyLoads",&DAT_1468e2360);
      _Init_thread_footer(&DAT_1469e6aa4);
    }
  }
  bVar1 = DAT_1469e6aa0;
  if (*piVar2 < DAT_1469e6aac) {
    _Init_thread_header(&DAT_1469e6aac);
    if (DAT_1469e6aac == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DAT_1469e6aa8,L"Kismet",L"bForceDisableCookedDependencyDeferring",&DAT_1468e2360);
      _Init_thread_footer(&DAT_1469e6aac);
    }
  }
  return DAT_1469e6aa8 == '\0' & bVar1;
}



// FUNCTION 14170fc10 WaitForIO body=339 status=ok
// SIG undefined WaitForIO(void)

undefined8 FPrecacheCallbackHandler::WaitForIO(longlong param_1,float param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  char cVar2;
  BOOL BVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(int *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x90) == 0)) {
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      uVar4 = FUN_1415ab270(0);
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
    }
    *(undefined1 *)(param_1 + 0x98) = 1;
    LeaveCriticalSection(lpCriticalSection);
    plVar1 = *(longlong **)(param_1 + 0xa0);
    if (param_2 == 0.0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      return 1;
    }
    uVar5 = 1;
    if ((int)(longlong)(param_2 * 1000.0) != 0) {
      uVar5 = (longlong)(param_2 * 1000.0) & 0xffffffff;
    }
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar5,0);
    if (cVar2 == '\0') {
      BVar3 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar3 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (*(char *)(param_1 + 0x98) != '\0') {
        *(undefined1 *)(param_1 + 0x98) = 0;
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
      LeaveCriticalSection(lpCriticalSection);
      return 1;
    }
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}



// FUNCTION 14170fd70 WaitForIntialPhases body=518 status=ok
// SIG undefined WaitForIntialPhases(void)

undefined8 FArchiveAsync2::WaitForIntialPhases(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  LARGE_INTEGER local_res8;
  
  fVar4 = (float)param_2;
  if ((((*(longlong *)(param_1 + 0x98) != 0) || (DAT_1468c21ab != '\0')) ||
      (*(longlong *)(param_1 + 0xa8) != 0)) || (*(longlong *)(param_1 + 0xb0) != 0)) {
    QueryPerformanceCounter(&local_res8);
    plVar1 = *(longlong **)(param_1 + 0x98);
    dVar3 = (double)local_res8.QuadPart * DAT_1468b02f8;
    if (plVar1 != (longlong *)0x0) {
      if ((*(char *)((longlong)plVar1 + 0x71) == '\0') &&
         ((**(code **)(*plVar1 + 8))(plVar1,param_2), *(char *)((longlong)plVar1 + 0x71) == '\0')) {
        return 0;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x98);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    if (DAT_1468c21ab != '\0') {
      return 1;
    }
    fVar5 = 0.0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      if ((0.0 < fVar4) &&
         (QueryPerformanceCounter(&local_res8),
         (float)((double)fVar4 - ((double)local_res8.QuadPart * DAT_1468b02f8 - dVar3)) < 0.00101))
      {
        return 0;
      }
      plVar1 = *(longlong **)(param_1 + 0xa8);
      if ((*(char *)((longlong)plVar1 + 0x71) == '\0') &&
         ((**(code **)(*plVar1 + 8))(plVar1), *(char *)((longlong)plVar1 + 0x71) == '\0')) {
        return 0;
      }
      puVar2 = *(undefined8 **)(param_1 + 0xa8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      return 1;
    }
    if (0.0 < fVar4) {
      QueryPerformanceCounter(&local_res8);
      fVar5 = (float)((double)fVar4 - ((double)local_res8.QuadPart * DAT_1468b02f8 - dVar3));
      if (fVar5 < 0.00101) {
        return 0;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0xb0);
    if ((*(char *)((longlong)plVar1 + 0x71) == '\0') &&
       ((**(code **)(*plVar1 + 8))(plVar1,fVar5), *(char *)((longlong)plVar1 + 0x71) == '\0')) {
      return 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0xb0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return 1;
}



// FUNCTION 14170ff80 WaitRead body=117 status=ok
// SIG undefined WaitRead(void)

undefined8 FArchiveAsync2::WaitRead(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  LARGE_INTEGER local_res8;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    QueryPerformanceCounter(&local_res8);
    plVar1 = *(longlong **)(param_1 + 0xb8);
    if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
        return 0;
      }
    }
    CompleteRead(param_1);
  }
  return 1;
}



// FUNCTION 141710000 Z_Construct_UClass_UGCObjectReferencer body=86 status=ok
// SIG undefined Z_Construct_UClass_UGCObjectReferencer(void)

longlong Z_Construct_UClass_UGCObjectReferencer(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e6ae0;
  if (DAT_1469e6ae0 == 0) {
    Z_Construct_UClass_UObject();
    lVar1 = UGCObjectReferencer::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    *(code **)(lVar1 + 0xa8) = UGCObjectReferencer::AddReferencedObjects;
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e6ae0 = lVar1;
  return lVar1;
}



// FUNCTION 141710060 Z_Construct_UClass_UTextBuffer body=72 status=ok
// SIG undefined Z_Construct_UClass_UTextBuffer(void)

longlong Z_Construct_UClass_UTextBuffer(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e6c50;
  if (DAT_1469e6c50 == 0) {
    Z_Construct_UClass_UObject();
    lVar1 = UTextBuffer::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e6c50 = lVar1;
  return lVar1;
}



// FUNCTION 141710130 FUN_141710130 body=461 status=ok
// SIG undefined FUN_141710130(void)

void FUN_141710130(void)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 local_res10 [8];
  
  UClassRegisterAllCompiledInClasses();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar3[1] = (longlong)FUN_14175a900;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f090;
    iVar1 = DAT_1464af030;
    if ((DAT_1464af03c < 1) && (DAT_1464af038 = DAT_1464af038 + -1, DAT_1464af038 <= DAT_1464af030))
    {
      iVar6 = 0;
      if (0 < DAT_1464af030) {
        lVar4 = 0;
        do {
          if (((*(int *)(lVar4 + 8 + DAT_1464af028) == 0) ||
              (*(longlong **)(lVar4 + DAT_1464af028) == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(**(longlong **)(lVar4 + DAT_1464af028) + 0x10))(), cVar2 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af028,iVar6,1,1);
          }
          else {
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 0x10;
          }
        } while (iVar6 < DAT_1464af030);
      }
      DAT_1464af038 = DAT_1464af030 * 2;
      if (DAT_1464af038 < 3) {
        DAT_1464af038 = 2;
      }
      if ((DAT_1464af038 < iVar1) && (DAT_1464af034 != DAT_1464af030)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af028);
      }
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af030;
    lVar4 = (longlong)DAT_1464af030;
    DAT_1464af030 = DAT_1464af030 + 1;
    if (DAT_1464af034 < DAT_1464af030) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af028,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_1464af028);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  PTR_CanBeUsedOnAnyThread_1464a8df0 = FUN_1416fc030;
  PTR_CanBeUsedOnAnyThread_1464aaa50 = IsAsyncLoadingCoreUObjectInternal;
  PTR_StartProfileThreadUsage_1464aaa58 = FUN_14170df40;
  PTR_StartProfileThreadUsage_1464aaa60 = FUN_14170ae50;
  PTR_CanBeUsedOnAnyThread_1464aaa68 = IsAsyncLoadingSuspendedInternal;
  PTR_CanBeUsedOnAnyThread_1464aaa70 = FUN_1416fb9b0;
  thunk_FUN_1416f87e0();
  return;
}



// FUNCTION 141710300 operator<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> body=297 status=ok
// SIG undefined operator<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<enum_ECoreRedirectFlags_const_&>::
operator<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>
          (undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [6];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78[2] = 0;
  local_78[3] = 0;
  local_40 = 0;
  local_30 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  TSparseArray<TSetElement<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x10,&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  *(longlong *)(param_2 + 0x12) = lVar1;
  param_2[0x14] = (undefined4)local_30;
  local_30 = local_30 & 0xffffffff00000000;
  local_38 = 0;
  TSparseArray<TSetElement<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141710430 Append<FDefaultSetAllocator> body=560 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
     Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_1409870b0();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_14171051d;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14171051d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1417105e3;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1417105e3:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = *(longlong *)CONCAT44(uStack_74,local_78) + (longlong)(int)uStack_5c * 0x28;
    lStack_90 = local_98 + 0x10;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>(param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 141710660 FUN_141710660 body=1560 status=ok
// SIG undefined FUN_141710660(void)

undefined8 * FUN_141710660(undefined8 *param_1,int param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  DWORD *pDVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_c0 = param_4;
  local_88 = param_1;
  plVar6 = (longlong *)operator_new(0x70);
  plVar11 = (longlong *)0x0;
  plVar8 = plVar11;
  if (plVar6 != (longlong *)0x0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar6,param_4);
    lVar7 = FUN_1415ab270(1);
    plVar6[10] = lVar7;
    *(undefined1 *)(plVar6 + 0xb) = 0;
    plVar8 = plVar6;
  }
  plVar6 = (longlong *)operator_new(0x18);
  local_d0 = plVar11;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_144145d88;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)plVar8;
    local_d0 = plVar6;
  }
  local_d8 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar8,plVar8);
  local_80 = local_d8;
  local_c8 = 1;
  local_78 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  if (param_2 == 0) {
    pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar8 = TlsGetValue(*pDVar12);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = 0;
        plVar8[1] = 0;
        *(undefined4 *)(plVar8 + 2) = 0;
        plVar11 = plVar8;
      }
      TlsSetValue(*pDVar12,plVar11);
      plVar8 = plVar11;
    }
    plVar11 = (longlong *)plVar8[1];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)*plVar8;
      if (plVar11 == (longlong *)0x0) {
        lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
        plVar8[1] = lVar7;
        if (lVar7 == 0) {
          puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar8[1] = (longlong)puVar13;
          lVar7 = 0x1f;
          do {
            puVar3 = puVar13 + 0x20;
            *puVar13 = puVar3;
            lVar7 = lVar7 + -1;
            puVar13 = puVar3;
          } while (lVar7 != 0);
          *puVar3 = 0;
        }
        plVar11 = (longlong *)plVar8[1];
        iVar14 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar14 = 0x20;
        plVar8[1] = (longlong)plVar11;
        *(undefined4 *)(plVar8 + 2) = 0x20;
        *plVar8 = 0;
      }
    }
    else {
      iVar14 = (int)plVar8[2];
    }
    plVar8[1] = *plVar11;
    *(int *)(plVar8 + 2) = iVar14 + -1;
    *(undefined4 *)(plVar11 + 1) = 0xff;
    *plVar11 = (longlong)&PTR_FUN_143f3edd8;
    local_48 = 0;
    local_40 = 0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR__scalar_deleting_destructor__144d065f8;
    *(undefined1 *)(plVar11 + 0x10) = 0;
    plVar11[0x11] = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar11 + 2,param_3);
    plVar11[0xc] = (longlong)local_d8;
    plVar11[0xd] = (longlong)local_d0;
    local_d0 = (longlong *)0x0;
    local_d8 = (longlong *)0x0;
    local_90 = (longlong *)0x0;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_90);
    plVar8 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    *(undefined1 *)(plVar11 + 0xe) = local_c8;
    lVar7 = plVar11[0x11];
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
      UNLOCK();
    }
    FUN_1408f59c0(plVar11,0,0xff,1);
    if (lVar7 != 0) {
      LOCK();
      piVar1 = (int *)(lVar7 + 0x48);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        FGraphEvent::Recycle(lVar7);
      }
    }
  }
  else if (param_2 == 1) {
    cVar4 = FUN_1415bac00();
    if (cVar4 == '\0') {
      FUN_1417135c0(&local_d8,param_3);
    }
    else {
      FUN_140cdf810(&local_60);
      plVar9 = (longlong *)operator_new(0x90);
      plVar8 = local_58;
      puVar13 = local_60;
      plVar6 = plVar11;
      if (plVar9 != (longlong *)0x0) {
        local_50 = 1;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_58 + 1) = (int)local_58[1] + 1;
          UNLOCK();
        }
        *plVar9 = (longlong)&PTR_IsPromotedBuild_144d06608;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar9 + 2,param_3);
        plVar9[0xc] = (longlong)local_d8;
        plVar9[0xd] = (longlong)local_d0;
        local_d0 = (longlong *)0x0;
        local_d8 = (longlong *)0x0;
        local_a0 = (longlong *)0x0;
        local_a8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_a0);
        plVar6 = local_a0;
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
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        *(undefined1 *)(plVar9 + 0xe) = local_c8;
        plVar9[0xf] = (longlong)puVar13;
        plVar9[0x10] = (longlong)plVar8;
        param_4 = local_c0;
        plVar6 = plVar9;
      }
      uVar5 = FUN_14171bd70();
      FString::PrintfImpl(&local_70,L"TAsync %d",uVar5);
      puVar15 = &DAT_143f3eda8;
      if (local_68 != 0) {
        puVar15 = local_70;
      }
      uVar10 = FUN_1415d42a0(plVar6,puVar15,0,0xffffffff,0xffffffffffffffff);
      local_60[0xc] = uVar10;
      *(undefined1 *)(local_60 + 0xb) = 1;
      (**(code **)(*(longlong *)local_60[10] + 0x10))();
      if (*(int *)(local_60 + 8) != 0) {
        plVar8 = (longlong *)local_60[6];
        if ((longlong *)local_60[6] == (longlong *)0x0) {
          plVar8 = local_60 + 2;
        }
        if (plVar8 != (longlong *)0x0) {
          if (plVar8 != (longlong *)0x0) {
            plVar11 = (longlong *)(**(code **)(*plVar8 + 8))();
          }
          (*(code *)*local_60)(plVar11);
        }
      }
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_58 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
    }
  }
  else if (param_2 == 2) {
    plVar8 = (longlong *)operator_new(0x80);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_144d06638;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar8 + 2,param_3);
      plVar8[0xc] = (longlong)local_d8;
      plVar8[0xd] = (longlong)local_d0;
      local_d0 = (longlong *)0x0;
      local_b0 = (longlong *)0x0;
      local_d8 = (longlong *)0x0;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_b0);
      plVar11 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b0 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      *(undefined1 *)(plVar8 + 0xe) = local_c8;
      plVar11 = plVar8;
    }
    (**(code **)(*DAT_1468b5010 + 0x10))(DAT_1468b5010,plVar11);
  }
  puVar13 = local_88;
  plVar11 = local_d0;
  *local_88 = local_80;
  local_88[1] = local_78;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_d0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
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
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar11 = (longlong *)(param_3 + 0x10);
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_4 + 0x40) != 0) {
    plVar11 = *(longlong **)(param_4 + 0x30);
    if (*(longlong **)(param_4 + 0x30) == (longlong *)0x0) {
      plVar11 = (longlong *)(param_4 + 0x10);
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  return puVar13;
}



// FUNCTION 141710c80 Emplace<TKeyInitializer<FName_&&>_> body=447 status=ok
// SIG undefined Emplace<TKeyInitializer<FName_&&>_>(void)

int * TSet<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_28;
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,&local_28);
  plVar5 = local_20;
  *param_2 = (int)local_28;
  local_28 = 0;
  local_20 = (longlong *)0x0;
  *plVar5 = *(longlong *)*param_3;
  plVar5[1] = 0;
  plVar5[2] = 0;
  TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>(&local_28);
  *(undefined4 *)(plVar5 + 3) = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    lVar1 = *plVar5;
    if (iVar7 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)((longlong)iVar4 * 0x20 + *param_1) == lVar1) goto LAB_141710d5c;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141710d5c:
    bVar8 = iVar4 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar4 * 0x20 + *param_1);
      TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>
                ((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,plVar5,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141710e14;
    }
  }
  cVar2 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar6 = (int)((ulonglong)*plVar5 >> 0x20) + (int)*plVar5 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar5 + 0x1c) = uVar6;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(plVar5 + 3) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_141710e14:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 141710e40 Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_> body=490 status=ok
// SIG undefined Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>(void)

int * TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TKeyInitializer<enum_ECoreRedirectFlags_const_&>::
  operator<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>
            (param_3,local_30);
  local_30[0x16] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x60 + *param_1) == *local_30) goto LAB_141710f0f;
          iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_141710f0f:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty((longlong)_Dst + 8,0);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_141711001;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_30;
    local_30[0x17] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[0x16] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_141711001:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 141711030 FUN_141711030 body=586 status=ok
// SIG undefined FUN_141711030(void)

int * FUN_141711030(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 *local_res18;
  
  uVar13 = 0xffffffff;
  local_res18 = param_3;
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
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar10 * 0x18);
  puVar3 = (uint *)*local_res18;
  puVar4 = (undefined8 *)local_res18[1];
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  *(undefined8 *)(puVar1 + 2) = *puVar4;
  puVar1[4] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    iVar10 = local_res8[0];
    lVar11 = (longlong)local_res8[0];
    bVar14 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar11 * 0x18),puVar1,0x10);
      iVar2 = *param_2;
      bVar5 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar2;
      }
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + (longlong)iVar2 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar11 + 4 + (longlong)iVar2 * 0x18) = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar9 = (undefined1)local_res8[0];
      goto LAB_141711259;
    }
  }
  uVar9 = 0;
  cVar6 = TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    uVar12 = (puVar1[1] ^ *puVar1) & (int)param_1[9] - 1U;
    puVar1[5] = uVar12;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar8 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_141711259:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar9;
  }
  return param_2;
}



// FUNCTION 141711280 FUN_141711280 body=698 status=ok
// SIG undefined FUN_141711280(void)

int * FUN_141711280(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
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
  puVar2 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  puVar14 = (uint *)(*param_1 + lVar1);
  *puVar14 = *(uint *)*param_3;
  *(undefined8 *)(puVar14 + 2) = *puVar2;
  puVar14[4] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar14) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x18) == *puVar14) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),puVar14,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141711515;
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
    uVar13 = (int)param_1[9] - 1U & *puVar14;
    puVar14[5] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar14[4] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141711515:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141711540 FUN_141711540 body=662 status=ok
// SIG undefined FUN_141711540(void)

int * FUN_141711540(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  longlong *_Src;
  int iVar13;
  bool bVar14;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  lVar6 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar7 + lVar6);
  *puVar10 = *puVar10 | 1 << ((byte)iVar9 & 0x1f);
  plVar7 = (longlong *)param_3[1];
  lVar1 = (longlong)iVar9 * 0x18;
  _Src = (longlong *)(*param_1 + lVar1);
  bVar14 = false;
  lVar2 = *(longlong *)*param_3;
  *_Src = lVar2;
  _Src[1] = *plVar7;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar5 = iVar13;
    if (iVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar5 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar5 = iVar13;
        } while (iVar8 != -1);
      }
    }
    bVar14 = iVar5 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar10 = (uint *)((longlong)plVar7 + lVar6);
      *puVar10 = *puVar10 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1417117ac;
    }
  }
  cVar4 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1417117ac:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 1417117e0 Emplace<TPairInitializer<FName_const_&,UFunction_*_const_&>_> body=509 status=ok
// SIG undefined Emplace<TPairInitializer<FName_const_&,UFunction_*_const_&>_>(void)

int * TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UFunction_*_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar9 = 0xffffffff;
  plVar5 = (longlong *)param_3[1];
  bVar12 = false;
  lVar2 = *(longlong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = lVar2;
  local_30[1] = *plVar5;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    iVar8 = -1;
    iVar7 = iVar8;
    if (iVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x18) == lVar2) break;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
          iVar7 = iVar8;
        } while (iVar6 != -1);
      }
    }
    bVar12 = iVar7 != -1;
    if (bVar12) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),local_30,0x10);
      bVar3 = (byte)local_38[0] & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = local_38[0];
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)local_38[0] * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar9 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + (longlong)local_38[0] * 0x18) = uVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = local_38[0];
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(local_38[0] + (local_38[0] >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1417119b0;
    }
  }
  cVar4 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    uVar10 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1417119b0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1417119e0 FUN_1417119e0 body=845 status=ok
// SIG undefined FUN_1417119e0(void)

void FUN_1417119e0(undefined8 *param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 local_res10;
  int local_res18;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  local_res18 = CONCAT31(local_res18._1_3_,param_3);
  iVar3 = (param_2 + -2) / 2;
  if (-1 < iVar3) {
    local_res18 = iVar3 * 2 + 1;
    iVar9 = local_res18;
    iVar6 = iVar3;
joined_r0x000141711a26:
    do {
      if (iVar9 < param_2) {
        iVar5 = iVar3 * 2;
        iVar9 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          lVar10 = param_1[(longlong)iVar5 + 2];
          local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
          FName::ToString(&local_res10,&local_70);
          local_88 = *(undefined8 *)(lVar10 + 0x18);
          FName::ToString(&local_88,&local_80);
          puVar8 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar8 = local_70;
          }
          puVar7 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar7 = local_80;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          if (local_80 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_70 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (iVar4 < 0) {
            iVar9 = iVar5;
          }
          iVar9 = iVar9 + 1;
        }
        lVar10 = param_1[iVar3];
        local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
        FName::ToString(&local_res10,&local_50);
        local_88 = *(undefined8 *)(lVar10 + 0x18);
        FName::ToString(&local_88,&local_60);
        puVar8 = &DAT_143f3eda8;
        if (local_48 != 0) {
          puVar8 = local_50;
        }
        puVar7 = &DAT_143f3eda8;
        if (local_58 != 0) {
          puVar7 = local_60;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
        if (local_60 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_50 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (iVar5 < 0) {
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar9];
          param_1[iVar9] = uVar1;
          iVar3 = iVar9;
          iVar9 = iVar9 * 2 + 1;
          goto joined_r0x000141711a26;
        }
      }
      local_res18 = local_res18 + -2;
      iVar3 = iVar6 + -1;
      iVar9 = local_res18;
      iVar6 = iVar3;
    } while (-1 < iVar3);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar1;
      iVar3 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar3 * 2;
          iVar9 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            lVar2 = param_1[(longlong)iVar6 + 2];
            local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
            FName::ToString(&local_res10,&local_60);
            local_88 = *(undefined8 *)(lVar2 + 0x18);
            FName::ToString(&local_88,&local_50);
            puVar8 = &DAT_143f3eda8;
            if (local_58 != 0) {
              puVar8 = local_60;
            }
            puVar7 = &DAT_143f3eda8;
            if (local_48 != 0) {
              puVar7 = local_50;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
            if (local_50 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_60 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (iVar5 < 0) {
              iVar9 = iVar6;
            }
            iVar9 = iVar9 + 1;
          }
          lVar2 = param_1[iVar3];
          local_res10 = *(undefined8 *)(param_1[iVar9] + 0x18);
          FName::ToString(&local_res10,&local_80);
          local_88 = *(undefined8 *)(lVar2 + 0x18);
          FName::ToString(&local_88,&local_70);
          puVar8 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar8 = local_80;
          }
          puVar7 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar7 = local_70;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          if (local_70 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_80 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (-1 < iVar6) break;
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar9];
          param_1[iVar9] = uVar1;
          iVar3 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 141711d30 HeapSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,`FClassNetCacheMgr::SortProperties'::`2'::FCompareUFieldOffsets>_> body=907 status=ok
// SIG undefined HeapSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,`FClassNetCacheMgr::SortProperties'::`2'::FCompareUFieldOffsets>_>(void)

void AlgoImpl::
     HeapSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,_FClassNetCacheMgr::SortProperties_::_2_::FCompareUFieldOffsets>_>
               (undefined8 *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 local_res10;
  int local_res18;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  local_res18 = CONCAT31(local_res18._1_3_,param_3);
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    local_res18 = iVar4 * 2 + 1;
    iVar10 = local_res18;
    iVar7 = iVar4;
joined_r0x000141711d76:
    do {
      if (iVar10 < param_2) {
        iVar6 = iVar4 * 2;
        iVar10 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          lVar11 = param_1[(longlong)iVar6 + 2];
          iVar1 = *(int *)(lVar11 + 0x44);
          iVar5 = *(int *)(param_1[iVar10] + 0x44);
          if (iVar1 == iVar5) {
            local_res10 = *(undefined8 *)(param_1[iVar10] + 0x18);
            FName::ToString(&local_res10,&local_70);
            local_88 = *(undefined8 *)(lVar11 + 0x18);
            FName::ToString(&local_88,&local_80);
            puVar9 = &DAT_143f3eda8;
            if (local_68 != 0) {
              puVar9 = local_70;
            }
            puVar8 = &DAT_143f3eda8;
            if (local_78 != 0) {
              puVar8 = local_80;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
            bVar12 = iVar5 < 0;
            if (local_80 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_70 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          else {
            bVar12 = iVar1 < iVar5;
          }
          if (bVar12) {
            iVar10 = iVar6;
          }
          iVar10 = iVar10 + 1;
        }
        lVar11 = param_1[iVar4];
        iVar5 = *(int *)(lVar11 + 0x44);
        iVar6 = *(int *)(param_1[iVar10] + 0x44);
        if (iVar5 == iVar6) {
          local_res10 = *(undefined8 *)(param_1[iVar10] + 0x18);
          FName::ToString(&local_res10,&local_50);
          local_88 = *(undefined8 *)(lVar11 + 0x18);
          FName::ToString(&local_88,&local_60);
          puVar9 = &DAT_143f3eda8;
          if (local_48 != 0) {
            puVar9 = local_50;
          }
          puVar8 = &DAT_143f3eda8;
          if (local_58 != 0) {
            puVar8 = local_60;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
          bVar12 = iVar6 < 0;
          if (local_60 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_50 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          bVar12 = iVar5 < iVar6;
        }
        if (bVar12) {
          uVar2 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar10];
          param_1[iVar10] = uVar2;
          iVar4 = iVar10;
          iVar10 = iVar10 * 2 + 1;
          goto joined_r0x000141711d76;
        }
      }
      local_res18 = local_res18 + -2;
      iVar4 = iVar7 + -1;
      iVar10 = local_res18;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar11 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = uVar2;
      if (1 < param_2) {
        do {
          iVar7 = iVar4 * 2;
          iVar10 = iVar7 + 1;
          if (iVar7 + 2 < param_2) {
            lVar3 = param_1[(longlong)iVar7 + 2];
            iVar5 = *(int *)(lVar3 + 0x44);
            iVar6 = *(int *)(param_1[iVar10] + 0x44);
            if (iVar5 == iVar6) {
              local_res10 = *(undefined8 *)(param_1[iVar10] + 0x18);
              FName::ToString(&local_res10,&local_60);
              local_88 = *(undefined8 *)(lVar3 + 0x18);
              FName::ToString(&local_88,&local_50);
              puVar9 = &DAT_143f3eda8;
              if (local_58 != 0) {
                puVar9 = local_60;
              }
              puVar8 = &DAT_143f3eda8;
              if (local_48 != 0) {
                puVar8 = local_50;
              }
              iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
              bVar12 = iVar6 < 0;
              if (local_50 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (local_60 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            }
            else {
              bVar12 = iVar5 < iVar6;
            }
            if (bVar12) {
              iVar10 = iVar7;
            }
            iVar10 = iVar10 + 1;
          }
          lVar3 = param_1[iVar4];
          iVar6 = *(int *)(lVar3 + 0x44);
          iVar7 = *(int *)(param_1[iVar10] + 0x44);
          if (iVar6 == iVar7) {
            local_res10 = *(undefined8 *)(param_1[iVar10] + 0x18);
            FName::ToString(&local_res10,&local_80);
            local_88 = *(undefined8 *)(lVar3 + 0x18);
            FName::ToString(&local_88,&local_70);
            puVar9 = &DAT_143f3eda8;
            if (local_78 != 0) {
              puVar9 = local_80;
            }
            puVar8 = &DAT_143f3eda8;
            if (local_68 != 0) {
              puVar8 = local_70;
            }
            iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
            bVar12 = iVar7 < 0;
            if (local_70 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_80 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          else {
            bVar12 = iVar6 < iVar7;
          }
          if (!bVar12) break;
          uVar2 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar10];
          param_1[iVar10] = uVar2;
          iVar4 = iVar10;
        } while (iVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}



// FUNCTION 1417120c0 HeapSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_> body=402 status=ok
// SIG undefined HeapSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar2 = iVar5;
    iVar8 = iVar4;
joined_r0x00014171210c:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = <lambda_309e34026e113ad4402ec395f84cd26c>::operator()
                            (param_4,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        uVar7 = param_1[iVar6];
        uVar1 = param_1[iVar4];
        cVar3 = <lambda_309e34026e113ad4402ec395f84cd26c>::operator()(param_4,uVar1);
        if (cVar3 != '\0') {
          param_1[iVar4] = uVar7;
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x00014171210c;
        }
      }
      iVar5 = iVar2 + -2;
      iVar4 = iVar8 + -1;
      iVar2 = iVar5;
      iVar8 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar9 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar7 = *param_1;
      *param_1 = param_1[lVar9];
      param_1[lVar9] = uVar7;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = <lambda_309e34026e113ad4402ec395f84cd26c>::operator()
                              (param_4,param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          uVar7 = param_1[iVar5];
          uVar1 = param_1[iVar4];
          cVar3 = <lambda_309e34026e113ad4402ec395f84cd26c>::operator()(param_4,uVar1);
          if (cVar3 == '\0') break;
          param_1[iVar4] = uVar7;
          param_1[iVar5] = uVar1;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  return;
}



// FUNCTION 141712280 InternalConstructor<UDelegateFunction> body=62 status=ok
// SIG undefined InternalConstructor<UDelegateFunction>(void)

void InternalConstructor<UDelegateFunction>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d04f28;
  }
  return;
}



// FUNCTION 1417122c0 InternalConstructor<UDynamicClass> body=134 status=ok
// SIG undefined InternalConstructor<UDynamicClass>(void)

void InternalConstructor<UDynamicClass>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1417142f0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d05590;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    puVar1[0x4b] = 0;
    puVar1[0x4c] = 0;
  }
  return;
}



// FUNCTION 141712350 FUN_141712350 body=41 status=ok
// SIG undefined FUN_141712350(void)

void FUN_141712350(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144d04680;
  }
  return;
}



// FUNCTION 141712380 InternalConstructor<UPackageMap> body=147 status=ok
// SIG undefined InternalConstructor<UPackageMap>(void)

void InternalConstructor<UPackageMap>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d05900;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
  }
  return;
}



// FUNCTION 141712420 InternalConstructor<UScriptStruct> body=81 status=ok
// SIG undefined InternalConstructor<UScriptStruct>(void)

void InternalConstructor<UScriptStruct>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d04c08;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x8c) = 0;
    puVar1[0x12] = 0;
  }
  return;
}



// FUNCTION 141712480 InternalConstructor<UStruct> body=62 status=ok
// SIG undefined InternalConstructor<UStruct>(void)

void InternalConstructor<UStruct>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d04908;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
  }
  return;
}



// FUNCTION 1417124c0 InternalVTableHelperCtorCaller<UClass> body=122 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UClass>(void)

undefined8 InternalVTableHelperCtorCaller<UClass>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = FUN_14171bfe0();
  lVar3 = FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (lVar3 != 0) {
    uVar1 = UClass::UClass(lVar3,param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 141712540 FUN_141712540 body=158 status=ok
// SIG undefined FUN_141712540(void)

undefined8 * FUN_141712540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = FUN_14171c1a0();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d04f28;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417125e0 InternalVTableHelperCtorCaller<UDynamicClass> body=223 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UDynamicClass>(void)

undefined8 * InternalVTableHelperCtorCaller<UDynamicClass>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UDynamicClass::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UClass::UClass(puVar3,param_1);
    *puVar3 = &PTR__scalar_deleting_destructor__144d05590;
    puVar3[0x40] = 0;
    puVar3[0x41] = 0;
    puVar3[0x42] = 0;
    puVar3[0x43] = 0;
    puVar3[0x44] = 0;
    puVar3[0x45] = 0;
    puVar3[0x46] = 0;
    puVar3[0x47] = 0;
    puVar3[0x48] = 0;
    puVar3[0x49] = 0;
    puVar3[0x4a] = 0;
    puVar3[0x4b] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417126c0 InternalVTableHelperCtorCaller<UInterface> body=139 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UInterface>(void)

undefined8 * InternalVTableHelperCtorCaller<UInterface>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = FUN_14171c410();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *puVar3 = &PTR_FUN_144d04680;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141712750 FUN_141712750 body=158 status=ok
// SIG undefined FUN_141712750(void)

undefined8 * FUN_141712750(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = FUN_14171c5d0();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d04f28;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417127f0 InternalVTableHelperCtorCaller<UPackageMap> body=247 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UPackageMap>(void)

undefined8 * InternalVTableHelperCtorCaller<UPackageMap>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = FUN_14171c790();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *puVar3 = &PTR__scalar_deleting_destructor__144d05900;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 100) = 0;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 0xf) = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xb4) = 0;
    puVar3[0x18] = 0;
    *(undefined4 *)(puVar3 + 0x19) = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417128f0 FUN_1417128f0 body=158 status=ok
// SIG undefined FUN_1417128f0(void)

undefined8 * FUN_1417128f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = FUN_14171c950();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d04c08;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141712990 InternalVTableHelperCtorCaller<UStruct> body=158 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UStruct>(void)

undefined8 * InternalVTableHelperCtorCaller<UStruct>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = FUN_14171cb10();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *puVar3 = &PTR__scalar_deleting_destructor__144d04908;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141712a30 FUN_141712a30 body=1098 status=ok
// SIG undefined FUN_141712a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141712a30(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_408 [32];
  longlong *local_3e8;
  int local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined2 *local_3c0;
  int local_3b8;
  undefined2 *local_3b0;
  int local_3a8;
  undefined2 *local_3a0;
  int local_398;
  undefined2 *local_390;
  int local_388;
  undefined2 *local_380;
  int local_378;
  undefined2 *local_370;
  int local_368;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_408;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_3c8 = param_4;
    local_348 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_3e8 = &local_348;
    do {
      plVar7 = (longlong *)*local_3e8;
      plVar8 = (longlong *)local_3e8[1];
      local_350 = local_3e8[2];
      local_3e0 = (int)local_350;
      lVar4 = ((longlong)plVar8 - (longlong)plVar7 >> 3) + 1;
      plVar6 = plVar7;
      if ((int)local_350 != 0) {
LAB_141712b10:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          plVar9 = plVar8 + 1;
          lVar1 = plVar6[lVar4 >> 1];
          plVar6[lVar4 >> 1] = *plVar6;
          *plVar6 = lVar1;
          plVar7 = plVar6;
LAB_141712b40:
          plVar7 = plVar7 + 1;
          if (plVar7 <= plVar8) goto code_r0x000141712b4d;
          goto LAB_141712be0;
        }
        for (; plVar9 = plVar6, plVar7 = plVar6, plVar6 < plVar8; plVar8 = plVar8 + -1) {
          while (plVar10 = plVar9, plVar7 = plVar7 + 1, plVar7 <= plVar8) {
            lVar4 = *plVar10;
            local_3d0 = *(undefined8 *)(*plVar7 + 0x18);
            FName::ToString(&local_3d0,&local_370);
            local_3d8 = *(undefined8 *)(lVar4 + 0x18);
            FName::ToString(&local_3d8,&local_380);
            puVar5 = &DAT_143f3eda8;
            if (local_368 != 0) {
              puVar5 = local_370;
            }
            puVar3 = &DAT_143f3eda8;
            if (local_378 != 0) {
              puVar3 = local_380;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar5);
            if (local_380 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_370 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            plVar9 = plVar7;
            if (-1 < iVar2) {
              plVar9 = plVar10;
            }
          }
          lVar4 = *plVar10;
          *plVar10 = *plVar8;
          *plVar8 = lVar4;
          param_4 = local_3c8;
        }
        goto LAB_141712d4b;
      }
LAB_141712d37:
      FUN_1417119e0(plVar7,lVar4,param_3,param_4);
LAB_141712d4b:
      local_3e8 = local_3e8 + -3;
    } while (&local_348 <= local_3e8);
  }
  return;
code_r0x000141712b4d:
  lVar4 = *plVar6;
  local_3d8 = *(undefined8 *)(*plVar7 + 0x18);
  FName::ToString(&local_3d8,&local_3b0);
  local_3d0 = *(undefined8 *)(lVar4 + 0x18);
  FName::ToString(&local_3d0,&local_3c0);
  puVar5 = &DAT_143f3eda8;
  if (local_3a8 != 0) {
    puVar5 = local_3b0;
  }
  puVar3 = &DAT_143f3eda8;
  if (local_3b8 != 0) {
    puVar3 = local_3c0;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar5);
  if (local_3c0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_3b0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (-1 < iVar2) goto LAB_141712b40;
LAB_141712be0:
  do {
    plVar10 = plVar9;
    plVar9 = plVar10 + -1;
    if (plVar9 <= plVar6) break;
    lVar4 = *plVar9;
    local_3d0 = *(undefined8 *)(*plVar6 + 0x18);
    FName::ToString(&local_3d0,&local_390);
    local_3d8 = *(undefined8 *)(lVar4 + 0x18);
    FName::ToString(&local_3d8,&local_3a0);
    puVar5 = &DAT_143f3eda8;
    if (local_388 != 0) {
      puVar5 = local_390;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_398 != 0) {
      puVar3 = local_3a0;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar5);
    if (local_3a0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_390 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  } while (-1 < iVar2);
  if (plVar7 <= plVar9) {
    lVar4 = *plVar7;
    *plVar7 = *plVar9;
    *plVar9 = lVar4;
    goto LAB_141712b40;
  }
  lVar4 = *plVar6;
  *plVar6 = *plVar9;
  local_3e0 = local_3e0 + -1;
  *plVar9 = lVar4;
  if ((longlong)((longlong)plVar9 + (-8 - (longlong)plVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar8 - (longlong)plVar7 & 0xfffffffffffffff8U)) {
    if (plVar7 < plVar8) {
      *local_3e8 = (longlong)plVar7;
      local_3e8[1] = (longlong)plVar8;
      *(int *)(local_3e8 + 2) = local_3e0;
      local_3e8 = local_3e8 + 3;
    }
    if (plVar9 <= plVar6 + 1) goto LAB_141712d4b;
    plVar8 = plVar10 + -2;
    plVar7 = plVar6;
  }
  else {
    if (plVar6 + 1 < plVar9) {
      *local_3e8 = (longlong)plVar6;
      local_3e8[1] = (longlong)(plVar10 + -2);
      *(int *)(local_3e8 + 2) = local_3e0;
      local_3e8 = local_3e8 + 3;
    }
    if (plVar8 <= plVar7) goto LAB_141712d4b;
  }
  lVar4 = ((longlong)plVar8 - (longlong)plVar7 >> 3) + 1;
  plVar6 = plVar7;
  if (local_3e0 == 0) goto LAB_141712d37;
  goto LAB_141712b10;
}



// FUNCTION 141712e80 IntroSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,`FClassNetCacheMgr::SortProperties'::`2'::FCompareUFieldOffsets>_> body=1161 status=ok
// SIG undefined IntroSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,`FClassNetCacheMgr::SortProperties'::`2'::FCompareUFieldOffsets>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,_FClassNetCacheMgr::SortProperties_::_2_::FCompareUFieldOffsets>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_418 [32];
  longlong *local_3f8;
  int local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  undefined2 *local_3c8;
  int local_3c0;
  undefined2 *local_3b8;
  int local_3b0;
  undefined2 *local_3a8;
  int local_3a0;
  undefined2 *local_398;
  int local_390;
  undefined2 *local_388;
  int local_380;
  undefined2 *local_378;
  int local_370;
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_418;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_3d0 = param_4;
    local_348 = param_1;
    fVar13 = ::_guard_xfg_dispatch_icall_nop(fVar13);
    local_338 = (undefined4)(longlong)(fVar13 + fVar13);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_3f8 = &local_348;
    do {
      plVar10 = (longlong *)*local_3f8;
      local_3d8 = (longlong *)local_3f8[1];
      local_358 = local_3f8[2];
      local_3f0 = (int)local_358;
      lVar6 = ((longlong)local_3d8 - (longlong)plVar10 >> 3) + 1;
      plVar9 = plVar10;
      if ((int)local_358 != 0) {
LAB_141712f61:
        plVar10 = local_3d8;
        if (8 < lVar6) {
          if (lVar6 < 0) {
            lVar6 = lVar6 + 1;
          }
          plVar8 = local_3d8 + 1;
          lVar2 = plVar9[lVar6 >> 1];
          plVar9[lVar6 >> 1] = *plVar9;
          *plVar9 = lVar2;
          plVar11 = local_3d8;
          plVar10 = plVar9;
LAB_141712f90:
          plVar10 = plVar10 + 1;
          if (plVar10 <= plVar11) goto code_r0x000141712f9d;
          goto LAB_141713040;
        }
        for (; plVar11 = plVar9, plVar8 = plVar9, plVar9 < plVar10; plVar10 = plVar10 + -1) {
          while (plVar3 = plVar11, plVar8 = plVar8 + 1, plVar8 <= plVar10) {
            lVar6 = *plVar3;
            iVar1 = *(int *)(lVar6 + 0x44);
            iVar4 = *(int *)(*plVar8 + 0x44);
            if (iVar1 == iVar4) {
              local_3e0 = *(undefined8 *)(*plVar8 + 0x18);
              FName::ToString(&local_3e0,&local_378);
              local_3e8 = *(undefined8 *)(lVar6 + 0x18);
              FName::ToString(&local_3e8,&local_388);
              puVar7 = &DAT_143f3eda8;
              if (local_370 != 0) {
                puVar7 = local_378;
              }
              puVar5 = &DAT_143f3eda8;
              if (local_380 != 0) {
                puVar5 = local_388;
              }
              iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
              bVar12 = iVar4 < 0;
              if (local_388 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (local_378 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            }
            else {
              bVar12 = iVar1 < iVar4;
            }
            plVar11 = plVar8;
            if (!bVar12) {
              plVar11 = plVar3;
            }
          }
          lVar6 = *plVar3;
          *plVar3 = *plVar10;
          *plVar10 = lVar6;
          param_4 = local_3d0;
        }
        goto LAB_1417131c5;
      }
LAB_1417131b1:
      HeapSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,_FClassNetCacheMgr::SortProperties_::_2_::FCompareUFieldOffsets>_>
                (plVar10,lVar6,param_3,param_4);
LAB_1417131c5:
      local_3f8 = local_3f8 + -3;
    } while (&local_348 <= local_3f8);
  }
  return;
code_r0x000141712f9d:
  lVar6 = *plVar9;
  iVar1 = *(int *)(lVar6 + 0x44);
  iVar4 = *(int *)(*plVar10 + 0x44);
  if (iVar1 == iVar4) {
    local_3e8 = *(undefined8 *)(*plVar10 + 0x18);
    FName::ToString(&local_3e8,&local_3b8);
    local_3e0 = *(undefined8 *)(lVar6 + 0x18);
    FName::ToString(&local_3e0,&local_3c8);
    puVar7 = &DAT_143f3eda8;
    if (local_3b0 != 0) {
      puVar7 = local_3b8;
    }
    puVar5 = &DAT_143f3eda8;
    if (local_3c0 != 0) {
      puVar5 = local_3c8;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
    bVar12 = iVar4 < 0;
    if (local_3c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_3b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    bVar12 = iVar1 < iVar4;
  }
  if (!bVar12) goto LAB_141712f90;
LAB_141713040:
  do {
    plVar11 = plVar8;
    lVar6 = plVar11[-1];
    plVar8 = plVar11 + -1;
    if (plVar8 <= plVar9) break;
    iVar4 = *(int *)(*plVar9 + 0x44);
    if (*(int *)(lVar6 + 0x44) == iVar4) {
      local_3e0 = *(undefined8 *)(*plVar9 + 0x18);
      FName::ToString(&local_3e0,&local_398);
      local_3e8 = *(undefined8 *)(lVar6 + 0x18);
      FName::ToString(&local_3e8,&local_3a8);
      puVar7 = &DAT_143f3eda8;
      if (local_390 != 0) {
        puVar7 = local_398;
      }
      puVar5 = &DAT_143f3eda8;
      if (local_3a0 != 0) {
        puVar5 = local_3a8;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
      bVar12 = iVar4 < 0;
      if (local_3a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_398 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      lVar6 = *plVar8;
    }
    else {
      bVar12 = *(int *)(lVar6 + 0x44) < iVar4;
    }
  } while (!bVar12);
  if (plVar10 <= plVar8) {
    lVar6 = *plVar10;
    *plVar10 = *plVar8;
    *plVar8 = lVar6;
    plVar11 = local_3d8;
    goto LAB_141712f90;
  }
  lVar2 = *plVar9;
  *plVar9 = lVar6;
  *plVar8 = lVar2;
  local_3f0 = local_3f0 + -1;
  if ((longlong)((longlong)plVar8 + (-8 - (longlong)plVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)local_3d8 - (longlong)plVar10 & 0xfffffffffffffff8U)) {
    if (plVar10 < local_3d8) {
      *local_3f8 = (longlong)plVar10;
      local_3f8[1] = (longlong)local_3d8;
      *(int *)(local_3f8 + 2) = local_3f0;
      local_3f8 = local_3f8 + 3;
    }
    if (plVar8 <= plVar9 + 1) goto LAB_1417131c5;
    local_3d8 = plVar11 + -2;
    plVar10 = plVar9;
  }
  else {
    if (plVar9 + 1 < plVar8) {
      *local_3f8 = (longlong)plVar9;
      local_3f8[1] = (longlong)(plVar11 + -2);
      *(int *)(local_3f8 + 2) = local_3f0;
      local_3f8 = local_3f8 + 3;
    }
    if (local_3d8 <= plVar10) goto LAB_1417131c5;
  }
  lVar6 = ((longlong)local_3d8 - (longlong)plVar10 >> 3) + 1;
  plVar9 = plVar10;
  if (local_3f0 == 0) goto LAB_1417131b1;
  goto LAB_141712f61;
}



// FUNCTION 141713310 IntroSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_> body=687 status=ok
// SIG undefined IntroSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [32];
  int local_368;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar6 = (undefined8 *)plVar7[1];
      local_350 = plVar7[2];
      local_368 = (int)local_350;
      lVar4 = ((longlong)puVar6 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      if ((int)local_350 != 0) {
LAB_1417133f1:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar8 = puVar6 + 1;
          uVar1 = puVar10[lVar4 >> 1];
          puVar10[lVar4 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_141713420:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar6) goto code_r0x000141713429;
          goto LAB_141713440;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar6; puVar6 = puVar6 + -1) {
          while (puVar9 = puVar8, puVar5 = puVar5 + 1, puVar5 <= puVar6) {
            cVar3 = <lambda_309e34026e113ad4402ec395f84cd26c>::operator()(param_4,*puVar9,*puVar5);
            puVar8 = puVar5;
            if (cVar3 == '\0') {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar6;
          *puVar6 = uVar1;
        }
        goto LAB_141713510;
      }
LAB_141713501:
      HeapSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_>
                (puVar5,lVar4,param_3,param_4);
LAB_141713510:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x000141713429:
  cVar3 = <lambda_309e34026e113ad4402ec395f84cd26c>::operator()(param_4,*puVar10,*puVar5);
  if (cVar3 == '\0') goto LAB_141713420;
LAB_141713440:
  do {
    puVar9 = puVar8;
    uVar1 = puVar9[-1];
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar3 = <lambda_309e34026e113ad4402ec395f84cd26c>::operator()(param_4,uVar1,*puVar10);
  } while (cVar3 == '\0');
  if (puVar5 <= puVar8) {
    uVar2 = *puVar5;
    *puVar5 = uVar1;
    *puVar8 = uVar2;
    goto LAB_141713420;
  }
  uVar2 = *puVar10;
  *puVar10 = uVar1;
  *puVar8 = uVar2;
  local_368 = local_368 + -1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar6 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar6) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar6;
      *(int *)(plVar7 + 2) = local_368;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_141713510;
    puVar6 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = local_368;
      plVar7 = plVar7 + 3;
    }
    if (puVar6 <= puVar5) goto LAB_141713510;
  }
  lVar4 = ((longlong)puVar6 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (local_368 == 0) goto LAB_141713501;
  goto LAB_1417133f1;
}



// FUNCTION 1417135c0 FUN_1417135c0 body=149 status=ok
// SIG undefined FUN_1417135c0(void)

void FUN_1417135c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar4 = 0;
  uVar3 = uVar4;
  if (*(int *)(param_2 + 8) != 0) {
    plVar5 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar5 = param_2 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  uVar2 = (*(code *)*param_2)(uVar3);
  puVar1 = (undefined8 *)*param_1;
  *(undefined1 *)(puVar1 + 0xc) = uVar2;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar5 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar5 = puVar1 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 8))();
      }
      (*(code *)*puVar1)(uVar4);
    }
  }
  return;
}



// FUNCTION 141713660 FUN_141713660 body=18 status=ok
// SIG undefined FUN_141713660(void)

undefined8 * FUN_141713660(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 141713680 FCoreRedirect body=141 status=ok
// SIG undefined FCoreRedirect(void)

undefined4 * FCoreRedirect::FCoreRedirect(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 141713710 FCoreRedirect body=176 status=ok
// SIG undefined FCoreRedirect(void)

undefined4 *
FCoreRedirect::FCoreRedirect
          (undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = *param_3;
  *(undefined8 *)(param_1 + 4) = param_3[1];
  *(undefined8 *)(param_1 + 6) = param_3[2];
  *(undefined8 *)(param_1 + 8) = *param_4;
  *(undefined8 *)(param_1 + 10) = param_4[1];
  *(undefined8 *)(param_1 + 0xc) = param_4[2];
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 2);
  }
  if (*(longlong *)(param_1 + 10) == 0) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 4);
  }
  if (*(longlong *)(param_1 + 0xc) == 0) {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 6);
  }
  return param_1;
}



// FUNCTION 1417137c0 FCoreRedirect body=227 status=ok
// SIG undefined FCoreRedirect(void)

undefined4 *
FCoreRedirect::FCoreRedirect
          (undefined4 *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  *param_1 = param_2;
  FCoreRedirectObjectName::FCoreRedirectObjectName(param_1 + 2,param_3);
  FCoreRedirectObjectName::FCoreRedirectObjectName(param_1 + 8,param_4);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 2);
  }
  if (*(longlong *)(param_1 + 10) == 0) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 4);
  }
  if (*(longlong *)(param_1 + 0xc) == 0) {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 6);
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1417138b0 FCoreRedirectObjectName body=104 status=ok
// SIG undefined FCoreRedirectObjectName(void)

undefined8 *
FCoreRedirectObjectName::FCoreRedirectObjectName(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cVar1 = FUN_1417191f0(param_2,param_1,param_1 + 1,param_1 + 2);
  if (cVar1 == '\0') {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 141713920 FCoreRedirectObjectName body=516 status=ok
// SIG undefined FCoreRedirectObjectName(void)

undefined8 * FCoreRedirectObjectName::FCoreRedirectObjectName(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 local_res10;
  undefined2 *local_58;
  uint local_50;
  uint local_4c;
  void *local_48;
  int local_40;
  
  puVar3 = (undefined2 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 != 0) {
    *param_1 = *(undefined8 *)(param_2 + 0x18);
    local_58 = (undefined2 *)0x0;
    local_4c = 0;
    puVar8 = puVar3;
    puVar9 = puVar3;
    while( true ) {
      lVar1 = *(longlong *)(lVar5 + 0x20);
      iVar6 = (int)puVar3;
      if (lVar1 == 0) break;
      iVar4 = 0;
      if (1 < iVar6) {
        iVar7 = iVar6 + -1;
        if (iVar6 < 1) {
          iVar7 = iVar4;
        }
        local_50 = (iVar6 < 1) + 1 + iVar6;
        if ((int)puVar8 < (int)local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
          puVar8 = (undefined2 *)(ulonglong)local_4c;
          puVar9 = local_58;
        }
        puVar3 = (undefined2 *)(ulonglong)local_50;
        *(undefined4 *)(puVar9 + iVar7) = 0x2e;
      }
      local_res10 = *(undefined8 *)(lVar5 + 0x18);
      FName::ToString(&local_res10,&local_48);
      _Src = local_48;
      if (local_40 != 0) {
        iVar4 = local_40 + -1;
      }
      if (iVar4 != 0) {
        iVar6 = (int)puVar3;
        local_50 = (uint)(iVar6 == 0) + iVar6 + iVar4;
        if ((int)puVar8 < (int)local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,puVar3);
          puVar8 = (undefined2 *)(ulonglong)local_4c;
          puVar9 = local_58;
        }
        puVar3 = (undefined2 *)(ulonglong)local_50;
        ::_guard_xfg_dispatch_icall_nop
                  (puVar9 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),_Src,(longlong)iVar4 * 2);
        (puVar9 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar4] = 0;
      }
      lVar5 = lVar1;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
    }
    puVar3 = &DAT_143f3eda8;
    if (iVar6 != 0) {
      puVar3 = puVar9;
    }
    puVar2 = (undefined8 *)FName::FName(&local_res10,puVar3,1);
    param_1[1] = *puVar2;
    param_1[2] = *(undefined8 *)(lVar5 + 0x18);
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    return param_1;
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 141713b30 FDeferredMessageLog body=302 status=ok
// SIG undefined FDeferredMessageLog(void)

longlong * FDeferredMessageLog::FDeferredMessageLog(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  longlong *local_18;
  undefined8 **local_10;
  
  *param_1 = *param_2;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  }
  puVar8 = (undefined8 *)0x0;
  lVar3 = *param_1;
  if (DAT_1464b49e8 != DAT_1464b4a14) {
    puVar5 = DAT_1464b4a20;
    if (DAT_1464b4a20 == (undefined *)0x0) {
      puVar5 = &DAT_1464b4a18;
    }
    iVar2 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                              (longlong)DAT_1464b4a28 - 1U) * 4);
    while (iVar2 != -1) {
      lVar1 = (longlong)iVar2 * 0x18;
      if (*(longlong *)(lVar1 + DAT_1464b49e0) == lVar3) {
        puVar7 = (undefined8 *)(lVar1 + DAT_1464b49e0);
        if (iVar2 != -1) goto LAB_141713bed;
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + DAT_1464b49e0);
    }
  }
  puVar7 = puVar8;
LAB_141713bed:
  puVar6 = puVar7 + 1;
  if (puVar7 == (undefined8 *)0x0) {
    puVar6 = puVar8;
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar8 = puVar7;
    }
    local_10 = &local_res10;
    local_res10 = puVar8;
    local_18 = param_1;
    FUN_141711540(&DAT_1464b49e0,local_res8,&local_18,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  return param_1;
}



// FUNCTION 141713c60 FUN_141713c60 body=125 status=ok
// SIG undefined FUN_141713c60(void)

undefined8 *
FUN_141713c60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  FArchive::FArchive();
  param_1[0x12] = param_2;
  *param_1 = &PTR_FUN_144d06010;
  param_1[0x13] = param_3;
  param_1[0x14] = 0;
  FArchive::SetIsLoading(param_1,1);
  FArchive::SetIsPersistent(param_1,1);
  param_1[6] = param_1[6] | param_4 | 0x1000;
  return param_1;
}



// FUNCTION 141713ce0 FUN_141713ce0 body=284 status=ok
// SIG undefined FUN_141713ce0(void)

undefined8 *
FUN_141713ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,ulonglong param_11)

{
  FArchive::FArchive();
  param_1[0x12] = param_2;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_144d06230;
  *(undefined4 *)(param_1 + 0x15) = param_6;
  *(undefined4 *)((longlong)param_1 + 0xac) = param_7;
  *(undefined4 *)(param_1 + 0x16) = param_8;
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_9;
  param_1[0x17] = param_10;
  param_1[0x13] = param_3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FArchive::SetIsSaving(param_1,1);
  FArchive::SetIsPersistent(param_1,1);
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0xfb;
  param_1[6] = param_1[6] | param_11 | 0x1000;
  FDuplicateDataWriter::AddDuplicate(param_1,param_4,param_5);
  return param_1;
}



// FUNCTION 141713e00 FNetBitReader body=61 status=ok
// SIG undefined FNetBitReader(void)

undefined8 *
FNetBitReader::FNetBitReader
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416883a0(param_1,param_3,param_4);
  param_1[0x16] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144d05df0;
  return param_1;
}



// FUNCTION 141713e40 FNetBitWriter body=61 status=ok
// SIG undefined FNetBitWriter(void)

undefined8 * FNetBitWriter::FNetBitWriter(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1416884c0(param_1,param_3,1);
  param_1[0x17] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144d05bf0;
  return param_1;
}



// FUNCTION 141713e80 FNetBitWriter body=38 status=ok
// SIG undefined FNetBitWriter(void)

undefined8 * FNetBitWriter::FNetBitWriter(undefined8 *param_1)

{
  FUN_1416884c0(param_1,0,0);
  *param_1 = &PTR__scalar_deleting_destructor__144d05bf0;
  return param_1;
}



// FUNCTION 141713eb0 FNetBitWriter body=47 status=ok
// SIG undefined FNetBitWriter(void)

undefined8 * FNetBitWriter::FNetBitWriter(undefined8 *param_1,undefined8 param_2)

{
  FUN_1416884c0(param_1,param_2,1);
  param_1[0x17] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d05bf0;
  return param_1;
}



// FUNCTION 141713ee0 FObjectInstancingGraph body=212 status=ok
// SIG undefined FObjectInstancingGraph(void)

undefined8 * FObjectInstancingGraph::FObjectInstancingGraph(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  undefined8 *local_18;
  longlong *local_10;
  
  *(undefined2 *)(param_1 + 2) = 0x100;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[1] = param_2;
  uVar1 = FUN_14178ca30(param_2);
  *param_1 = uVar1;
  local_18 = param_1;
  local_10 = param_1 + 1;
  TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
            (param_1 + 3,local_res8,&local_18,0);
  *(byte *)(param_1 + 2) = (byte)(*(uint *)(param_2 + 8) >> 5) & 1;
  return param_1;
}



// FUNCTION 141713fc0 FObjectInstancingGraph body=109 status=ok
// SIG undefined FObjectInstancingGraph(void)

undefined8 * FObjectInstancingGraph::FObjectInstancingGraph(undefined8 *param_1,byte param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(byte *)((longlong)param_1 + 0x11) = param_2 ^ 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 141714030 FUntypedBulkData body=255 status=ok
// SIG undefined FUntypedBulkData(void)

undefined8 * FUntypedBulkData::FUntypedBulkData(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d05fe8;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xd) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x6c) = local_resc;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  iVar2 = (**(code **)(*param_2 + 8))(param_2);
  iVar2 = iVar2 * iVar1;
  if (iVar2 == 0) {
    FMemory::Free(param_1[4]);
  }
  else {
    uVar3 = FMemory::Realloc(param_1[4],(longlong)iVar2,*(undefined4 *)((longlong)param_1 + 0x1c));
  }
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 5) = 1;
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[4],(void *)param_2[4],(longlong)(iVar2 * iVar1))
    ;
  }
  return param_1;
}



// FUNCTION 141714130 FUntypedBulkData body=121 status=ok
// SIG undefined FUntypedBulkData(void)

undefined8 * FUntypedBulkData::FUntypedBulkData(undefined8 *param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d05fe8;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xd) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x6c) = local_resc;
  return param_1;
}



// FUNCTION 1417141b0 UClass body=312 status=ok
// SIG undefined UClass(void)

undefined8 * UClass::UClass(undefined8 *param_1)

{
  UObject::UObject();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__144d05220;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x38),4000);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  return param_1;
}



// FUNCTION 1417142f0 FUN_1417142f0 body=359 status=ok
// SIG undefined FUN_1417142f0(void)

undefined8 * FUN_1417142f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__144d05220;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar1 = UObject::GetPrivateStaticClass();
  param_1[0x18] = uVar1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x38),4000);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return param_1;
}



// FUNCTION 141714460 FUN_141714460 body=471 status=ok
// SIG undefined FUN_141714460(void)

undefined8 *
FUN_141714460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             uint param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  UObject::UObject(param_1,0,param_8);
  *(undefined4 *)(param_1 + 8) = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__144d05220;
  param_1[0x13] = param_9;
  param_1[0x14] = param_10;
  param_1[0x15] = param_11;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(uint *)((longlong)param_1 + 0xb4) = param_5 | 0x80;
  param_1[0x17] = param_6;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x38),4000);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x1a] = param_7;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return param_1;
}



// FUNCTION 141714640 UDelegateFunction body=195 status=ok
// SIG undefined UDelegateFunction(void)

undefined8 *
UDelegateFunction::UDelegateFunction
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
          ulonglong param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_141781840();
  param_1[6] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__144d04908;
  param_1[7] = 0;
  if (param_5 == 0) {
    if (param_3 == 0) {
      param_5 = 0;
    }
    else {
      param_5 = (ulonglong)*(uint *)(param_3 + 0x40);
    }
  }
  *(int *)(param_1 + 8) = (int)param_5;
  iVar2 = 1;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + 0x44);
  }
  iVar1 = 1;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)((longlong)param_1 + 0x44) = iVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d04f28;
  *(undefined4 *)(param_1 + 0x11) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x92) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 141714710 UScriptStruct body=73 status=ok
// SIG undefined UScriptStruct(void)

undefined8 * UScriptStruct::UScriptStruct(undefined8 *param_1)

{
  FUN_141781840();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d04c08;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 141714760 UScriptStruct body=115 status=ok
// SIG undefined UScriptStruct(void)

undefined8 *
UScriptStruct::UScriptStruct
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint param_5)

{
  UStruct::UStruct();
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d04c08;
  param_1[0x12] = param_4;
  *(uint *)(param_1 + 0x11) = param_4 != 0 | param_5;
  FUN_14171f730(param_1);
  return param_1;
}



// FUNCTION 1417147e0 UStruct body=160 status=ok
// SIG undefined UStruct(void)

undefined8 *
UStruct::UStruct(undefined8 *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                ulonglong param_5)

{
  uint uVar1;
  
  FUN_141781840();
  param_1[6] = param_3;
  param_1[7] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d04908;
  if (param_4 == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_3 + 0x40);
    }
    param_4 = (ulonglong)uVar1;
  }
  *(int *)(param_1 + 8) = (int)param_4;
  if (param_5 == 0) {
    uVar1 = 1;
    if (param_3 != 0) {
      uVar1 = *(uint *)(param_3 + 0x44);
    }
    param_5 = 1;
    if (0 < (int)uVar1) {
      param_5 = (ulonglong)uVar1;
    }
  }
  *(int *)((longlong)param_1 + 0x44) = (int)param_5;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 141714880 ~TArray<FCoreRedirect,FDefaultAllocator> body=166 status=ok
// SIG undefined ~TArray<FCoreRedirect,FDefaultAllocator>(void)

void TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x90);
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar2 + -8,0);
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x14;
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



// FUNCTION 141714930 SetDebugSourceInfo body=8 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FSlateTextBlockLayout::SetDebugSourceInfo(undefined8 *param_1)

{
  FMemory::operator_delete(*param_1);
  return;
}



// FUNCTION 141714940 ~FUntypedBulkData body=178 status=ok
// SIG undefined ~FUntypedBulkData(void)

void FUntypedBulkData::~FUntypedBulkData(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d05fe8;
  if (param_1[9] != 0) {
    WaitForAsyncLoading();
  }
  FMemory::Free(param_1[4]);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FMemory::Free(param_1[6]);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[10];
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
  FMemory::Free(param_1[6]);
  FMemory::Free(param_1[4]);
  return;
}



// FUNCTION 141714a00 ~UClass body=247 status=ok
// SIG undefined ~UClass(void)

void UClass::~UClass(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141714b00 operator= body=672 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_141714bdd;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141714bdd:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_141714c93;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_141714c93:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>
                ((longlong)(int)uStack_3c * 0x20 + 8 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141714da0 operator= body=278 status=ok
// SIG undefined operator=(void)

longlong * FUntypedBulkData::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  FMemory::Free(param_1[4]);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  if ((char)param_2[5] == '\0') {
    FString::operator=(param_1 + 0xb,param_2 + 0xb);
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_1[2] = param_2[2];
    *(int *)(param_1 + 3) = (int)param_2[3];
  }
  else {
    MakeSureBulkDataIsLoaded(param_1);
    *(undefined4 *)(param_1 + 8) = 2;
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    iVar2 = (**(code **)(*param_1 + 8))(param_1);
    iVar2 = iVar2 * iVar1;
    if (iVar2 == 0) {
      FMemory::Free(param_1[4]);
    }
    else {
      lVar3 = FMemory::Realloc(param_1[4],(longlong)iVar2,*(undefined4 *)((longlong)param_1 + 0x1c))
      ;
    }
    param_1[4] = lVar3;
    *(undefined1 *)(param_1 + 5) = 1;
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    if (iVar1 != 0) {
      iVar2 = (**(code **)(*param_2 + 8))(param_2);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)param_1[4],(void *)param_2[4],(longlong)(iVar2 * iVar1));
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if ((*(byte *)(param_1 + 1) & 8) != 0) {
      FMemory::Free(param_1[4]);
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141714ec0 FUN_141714ec0 body=134 status=ok
// SIG undefined FUN_141714ec0(void)

longlong * FUN_141714ec0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*param_1 + 0x30))();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0xc);
  return param_1;
}



// FUNCTION 141714f50 FUN_141714f50 body=391 status=ok
// SIG undefined FUN_141714f50(void)

longlong * FUN_141714f50(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x100000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141714ec0(param_1,(longlong)(int)puVar6 * 0x10 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
      puVar5 = puVar4;
    }
    FUN_141714ec0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1417150e0 FUN_1417150e0 body=745 status=ok
// SIG undefined FUN_1417150e0(void)

longlong * FUN_1417150e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  plVar1 = param_2 + 2;
  iVar4 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar5 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar9 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar3 = *local_48 + (longlong)local_2c * 0x18;
        (**(code **)(*param_1 + 0x40))(param_1,lVar3);
        (**(code **)(*param_1 + 0x30))(param_1,lVar3 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar4 = 0;
  local_res8[0] = 0;
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  iVar5 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar5);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar5 = (int)param_2[6];
        iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar8 = *(int *)(*param_2 + 4 + (longlong)iVar5 * 0x18);
        *(int *)(param_2 + 6) = iVar8;
        *(int *)((longlong)param_2 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar8 * 0x18) = 0xffffffff;
        }
      }
      plVar9 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar8 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x18) = 0;
      lVar3 = lVar3 + (longlong)iVar5 * 0x18;
      *(undefined8 *)(lVar3 + 8) = 0;
      *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      (**(code **)(*param_1 + 0x30))(param_1,lVar3 + 8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1417153d0 FUN_1417153d0 body=267 status=ok
// SIG undefined FUN_1417153d0(void)

longlong * FUN_1417153d0(longlong *param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  longlong local_res10;
  
  local_res10 = *param_2;
  (**(code **)(*param_1 + 0x50))(param_1,&local_res10,8);
  lVar2 = local_res10;
  if (local_res10 != 0) {
    lVar1 = param_1[0x12];
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x58);
    BVar3 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar3 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (lVar2 != *(longlong *)(lVar1 + 0x80)) {
      *(longlong *)(lVar1 + 0x80) = lVar2;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar1 + 8,local_res8);
      puVar5 = (undefined8 *)0x0;
      if (local_res8[0] != -1) {
        puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)local_res8[0] * 0x18);
      }
      puVar4 = puVar5 + 1;
      if (puVar5 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x88) = 0;
      }
      else {
        *(undefined8 *)(lVar1 + 0x88) = *puVar4;
      }
    }
    lVar2 = *(longlong *)(lVar1 + 0x88);
    LeaveCriticalSection(lpCriticalSection);
    if (lVar2 != 0) {
      *param_2 = lVar2;
      return param_1;
    }
  }
  *param_2 = local_res10;
  return param_1;
}



// FUNCTION 1417154e0 FUN_1417154e0 body=166 status=ok
// SIG undefined FUN_1417154e0(void)

longlong FUN_1417154e0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  local_38 = 0;
  uStack_30 = 0;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,&local_38);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  if ((*(uint *)(param_1 + 0x30) >> 0x16 & 1) == 0) {
  }
  else {
    puVar1 = (undefined4 *)FUniqueObjectGuid::FixupForPIE(&local_38,local_28,DAT_1464aaa88);
    local_38._0_4_ = *puVar1;
    local_38._4_4_ = puVar1[1];
    uStack_30._0_4_ = puVar1[2];
    uStack_30._4_4_ = puVar1[3];
  }
  *(undefined8 *)(param_2 + 1) = 0;
  *param_2 = 0xffffffff;
  param_2[3] = (undefined4)local_38;
  param_2[4] = local_38._4_4_;
  param_2[5] = (undefined4)uStack_30;
  param_2[6] = uStack_30._4_4_;
  return param_1;
}



// FUNCTION 141715590 operator<< body=270 status=ok
// SIG undefined operator<<(void)

longlong FDuplicateDataReader::operator<<(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  undefined1 local_38 [32];
  
  FArchiveUObject::operator<<();
  lVar3 = FUN_141796df0(param_2);
  if (lVar3 == 0) {
    return param_1;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x58);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (lVar3 != *(longlong *)(lVar1 + 0x80)) {
    *(longlong *)(lVar1 + 0x80) = lVar3;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 8,local_res8);
    puVar6 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)local_res8[0] * 0x18);
    }
    puVar4 = puVar6 + 1;
    if (puVar6 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 *)(lVar1 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(lVar1 + 0x88) = *puVar4;
    }
  }
  lVar3 = *(longlong *)(lVar1 + 0x88);
  LeaveCriticalSection(lpCriticalSection);
  if (lVar3 != 0) {
    uVar5 = FSoftObjectPath::FSoftObjectPath(local_38,lVar3);
    FSoftObjectPath::operator=(param_2,uVar5);
  }
  return param_1;
}



// FUNCTION 1417156a0 FUN_1417156a0 body=186 status=ok
// SIG undefined FUN_1417156a0(void)

longlong * FUN_1417156a0(longlong *param_1,undefined8 *param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  
  (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,local_res8,4);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,local_res18,4);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,local_res10,4);
  }
  *param_2 = CONCAT44(local_res10[0],local_res8[0]);
  return param_1;
}



// FUNCTION 141715760 FUN_141715760 body=114 status=ok
// SIG undefined FUN_141715760(void)

longlong * FUN_141715760(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = *param_2;
  if (((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x17 & 1) != 0)) ||
     (((*(uint *)(lVar1 + 8) >> 0x19 & 1) != 0 && ((*(uint *)(param_1 + 6) >> 0x16 & 1) == 0)))) {
    local_res8 = 0;
    param_2 = &local_res8;
  }
  else {
    FDuplicateDataWriter::GetDuplicatedObject(param_1,lVar1,1);
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,8);
  return param_1;
}



// FUNCTION 1417157e0 FUN_1417157e0 body=348 status=ok
// SIG undefined FUN_1417157e0(void)

longlong FUN_1417157e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  if ((*(uint *)(param_1 + 0x30) >> 0x16 & 1) == 0) {
    lVar1 = FWeakObjectPtr::Get(param_2);
    if (lVar1 == 0) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      if ((DAT_1464b4c84 != *(int *)(param_2 + 8)) &&
         (((*(int *)(param_2 + 0x18) != 0 || *(int *)(param_2 + 0x14) != 0) ||
          *(int *)(param_2 + 0x10) != 0) || *(int *)(param_2 + 0xc) != 0)) {
        lVar1 = FUniqueObjectGuid::ResolveObject((int *)(param_2 + 0xc),0);
        FWeakObjectPtr::operator=(param_2,lVar1);
        if ((lVar1 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b4c84 == 0) {
            DAT_1464b4c84 = 0;
          }
          UNLOCK();
          *(int *)(param_2 + 8) = DAT_1464b4c84;
        }
        lVar1 = FWeakObjectPtr::Get(param_2);
      }
    }
    lVar1 = FDuplicateDataWriter::GetDuplicatedObject(param_1,lVar1,0);
    if (lVar1 != 0) {
      local_48 = 0xffffffff;
      local_44 = 0;
      uStack_34 = 0;
      local_3c = 0;
      puVar2 = (undefined8 *)FUniqueObjectGuid::GetOrCreateIDForObject(local_58,lVar1);
      local_3c = *puVar2;
      uStack_34 = puVar2[1];
      FWeakObjectPtr::operator=(&local_48,lVar1);
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      local_44 = CONCAT44(DAT_1464b4c84,(undefined4)local_44);
      lVar1 = operator<<(param_1,&local_3c);
      return lVar1;
    }
  }
  local_68 = *(undefined4 *)(param_2 + 0xc);
  uStack_64 = *(undefined4 *)(param_2 + 0x10);
  uStack_60 = *(undefined4 *)(param_2 + 0x14);
  uStack_5c = *(undefined4 *)(param_2 + 0x18);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,&local_68);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 141715940 FUN_141715940 body=167 status=ok
// SIG undefined FUN_141715940(void)

longlong * FUN_141715940(longlong *param_1,undefined4 *param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res8[0] = *param_2;
  local_res18[0] = param_2[1];
  local_res10[0] = local_res8[0];
  (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,local_res8,4);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,local_res10,4);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_res18,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,local_res18,4);
  }
  return param_1;
}



// FUNCTION 1417159f0 FUN_1417159f0 body=70 status=ok
// SIG undefined FUN_1417159f0(void)

longlong FUN_1417159f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = UObject::GetPrivateStaticClass();
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x280))
            (*(longlong **)(param_1 + 0xb0),param_1,uVar1,param_2,0);
  return param_1;
}



// FUNCTION 141715a40 operator<< body=128 status=ok
// SIG undefined operator<<(void)

longlong FNetBitReader::operator<<(longlong param_1,undefined8 param_2)

{
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  FSoftObjectPath::ToString(param_2,&local_28);
  FUN_14158ce90(param_1,&local_28);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    local_18 = local_28;
    local_10 = (undefined4)local_20;
    local_c = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    FUN_1417978e0(param_2,&local_18);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141715ac0 FUN_141715ac0 body=62 status=ok
// SIG undefined FUN_141715ac0(void)

longlong FUN_141715ac0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x288))(plVar1,param_1,param_2);
    return param_1;
  }
  FUN_141726eb0(param_1);
  return param_1;
}



// FUNCTION 141715b00 FUN_141715b00 body=64 status=ok
// SIG undefined FUN_141715b00(void)

longlong * FUN_141715b00(longlong *param_1,char *param_2)

{
  char local_res8 [8];
  
  local_res8[0] = *param_2;
  (**(code **)(*param_1 + 0x58))(param_1,local_res8,1);
  *param_2 = local_res8[0] != '\0';
  return param_1;
}



// FUNCTION 141715b40 operator<< body=70 status=ok
// SIG undefined operator<<(void)

longlong FNetBitReader::operator<<(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = UObject::GetPrivateStaticClass();
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x280))
            (*(longlong **)(param_1 + 0xb8),param_1,uVar1,param_2,0);
  return param_1;
}



// FUNCTION 141715b90 operator<< body=62 status=ok
// SIG undefined operator<<(void)

longlong FNetBitReader::operator<<(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x288))(plVar1,param_1,param_2);
    return param_1;
  }
  FUN_141726eb0(param_1);
  return param_1;
}



// FUNCTION 141715bd0 FUN_141715bd0 body=42 status=ok
// SIG undefined FUN_141715bd0(void)

longlong * FUN_141715bd0(longlong *param_1,undefined1 *param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *param_2;
  (**(code **)(*param_1 + 0x58))(param_1,local_res8,1);
  return param_1;
}



// FUNCTION 141715c00 FUN_141715c00 body=65 status=ok
// SIG undefined FUN_141715c00(void)

longlong * FUN_141715c00(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x50))(param_1,param_2,8);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,8);
  }
  return param_1;
}



// FUNCTION 141715c50 operator<< body=129 status=ok
// SIG undefined operator<<(void)

undefined8 FObjectReader::operator<<(undefined8 param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  local_38 = 0;
  uStack_30 = 0;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,&local_38);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  *(undefined8 *)(param_2 + 1) = 0;
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 3) = local_38;
  *(undefined8 *)(param_2 + 5) = uStack_30;
  return param_1;
}



// FUNCTION 141715d00 operator<< body=85 status=ok
// SIG undefined operator<<(void)

undefined8 FObjectWriter::operator<<(undefined8 param_1,longlong param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  local_38 = *(undefined4 *)(param_2 + 0xc);
  uStack_34 = *(undefined4 *)(param_2 + 0x10);
  uStack_30 = *(undefined4 *)(param_2 + 0x14);
  uStack_2c = *(undefined4 *)(param_2 + 0x18);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,&local_38);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 141715d70 FUN_141715d70 body=166 status=ok
// SIG undefined FUN_141715d70(void)

undefined8 FUN_141715d70(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  
  param_1 = (longlong *)*param_1;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  iVar2 = iVar2 * iVar1;
  if (iVar2 == 0) {
    FMemory::Free(param_1[6]);
    lVar3 = 0;
  }
  else {
    lVar3 = FMemory::Realloc(param_1[6],(longlong)iVar2,*(undefined4 *)((longlong)param_1 + 0x1c));
  }
  param_1[6] = lVar3;
  *(undefined1 *)(param_1 + 7) = 1;
  plVar4 = (longlong *)FUN_1415c3d50();
  if ((int)param_1[0xc] == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)param_1[0xb];
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,puVar5,2);
  (**(code **)(*plVar4 + 0xa8))(plVar4,param_1[2]);
  FUN_1417240a0(param_1,plVar4,param_1[6]);
  (**(code **)*plVar4)(plVar4,1);
  return 1;
}



// FUNCTION 141715e20 operator() body=171 status=ok
// SIG undefined operator()(void)

bool <lambda_309e34026e113ad4402ec395f84cd26c>::operator()
               (longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1 = (longlong *)*param_1;
  uVar1 = 0;
  uVar3 = 1;
  uVar2 = 1;
  if (*(longlong *)(param_2 + 8) == 0) {
LAB_141715e47:
    if (*(longlong *)(param_2 + 0x10) != 0) {
      if (*(longlong *)(param_2 + 0x10) != param_1[1]) goto LAB_141715e77;
      uVar2 = uVar2 + 4;
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      if (*(longlong *)(param_2 + 0x18) != param_1[2]) goto LAB_141715e77;
      uVar2 = uVar2 + 2;
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) == *param_1) {
      uVar2 = 9;
      goto LAB_141715e47;
    }
LAB_141715e77:
    uVar2 = 0;
  }
  uVar4 = uVar1;
  if (*(longlong *)(param_3 + 8) != 0) {
    if (*(longlong *)(param_3 + 8) != *param_1) goto LAB_141715ec5;
    uVar3 = 9;
  }
  if (*(longlong *)(param_3 + 0x10) != 0) {
    if (*(longlong *)(param_3 + 0x10) != param_1[1]) goto LAB_141715ec5;
    uVar3 = uVar3 + 4;
  }
  uVar4 = uVar3;
  if ((*(longlong *)(param_3 + 0x18) != 0) &&
     (uVar4 = uVar1, *(longlong *)(param_3 + 0x18) == param_1[2])) {
    uVar4 = uVar3 + 2;
  }
LAB_141715ec5:
  return uVar4 < uVar2;
}



// FUNCTION 141715ed0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FSlateRHIRenderer::DrawWindows_Private'::`37'::DrawWidgetRendererImmediateName,<lambda_3d188f92baafc49f2858efe92aeedc7f>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d065f8;
  if (param_1[0x11] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x11] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141715f40 FUN_141715f40 body=122 status=ok
// SIG undefined FUN_141715f40(void)

longlong FUN_141715f40(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141715fc0 FUN_141715fc0 body=52 status=ok
// SIG undefined FUN_141715fc0(void)

undefined8 FUN_141715fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_141661910();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141716000 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FNetBitWriter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141716050 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRestoreClassInfo::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1417160a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UClass::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~UClass();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 1417160e0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDelegateFunction::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141716140 `scalar_deleting_destructor' body=158 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDynamicClass::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  UClass::~UClass(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 1417161e0 `scalar_deleting_destructor' body=152 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPackageMap::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141716280 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UScriptStruct::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1417162e0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UStruct::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141716340 FUN_141716340 body=64 status=ok
// SIG undefined FUN_141716340(void)

void FUN_141716340(void)

{
  LowLevelFatalErrorHandler("Unknown",0xca,L"UField::AddCppProperty");
  FDebug::AssertFailed(&DAT_144cfeace,"Unknown",0xca,L"UField::AddCppProperty");
  return;
}



// FUNCTION 141716390 AddDuplicate body=386 status=ok
// SIG undefined AddDuplicate(void)

void FDuplicateDataWriter::AddDuplicate(longlong param_1,longlong param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  longlong *local_28;
  longlong *local_20;
  
  if ((param_3 != 0) && (cVar3 = UObjectBaseUtility::IsTemplate(param_3,0x30), cVar3 == '\0')) {
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x3000;
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x58);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_2 != *(longlong *)(lVar2 + 0x80)) {
    *(longlong *)(lVar2 + 0x80) = param_2;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 8,local_res8);
    puVar6 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)local_res8[0] * 0x18);
    }
    puVar5 = puVar6 + 1;
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(lVar2 + 0x88) = *puVar5;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x88);
  LeaveCriticalSection(lpCriticalSection);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x58));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x58));
    }
    *(longlong *)(lVar2 + 0x80) = param_2;
    *(longlong *)(lVar2 + 0x88) = param_3;
    if (param_3 == 0) {
      FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAnnotation(lVar2,param_2);
    }
    else {
      local_28 = (longlong *)(lVar2 + 0x80);
      local_20 = (longlong *)(lVar2 + 0x88);
      FUN_140a9d130(lVar2 + 8,local_res8,&local_28,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x58));
  }
  iVar1 = *(int *)(param_1 + 200);
  *(int *)(param_1 + 200) = iVar1 + 1;
  if (*(int *)(param_1 + 0xcc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0xc0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 141716520 AddKnownMissing body=191 status=ok
// SIG undefined AddKnownMissing(void)

undefined1 FCoreRedirects::AddKnownMissing(uint param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong local_38 [6];
  
  local_38[4] = 1;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
            (local_38 + 3,0);
  FCoreRedirect::FCoreRedirect(local_38[3],param_1 | 0x20000,param_2,local_38);
  local_38[0] = 0;
  local_38[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"AddKnownMissing",0x20);
  uVar1 = AddRedirectList(local_38 + 3,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>(local_38 + 3);
  return uVar1;
}



// FUNCTION 1417165e0 FUN_1417165e0 body=278 status=ok
// SIG undefined FUN_1417165e0(void)

void FUN_1417165e0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  }
  lVar2 = *param_1;
  plVar6 = (longlong *)0x0;
  if (DAT_1464b49e8 != DAT_1464b4a14) {
    puVar4 = DAT_1464b4a20;
    if (DAT_1464b4a20 == (undefined *)0x0) {
      puVar4 = &DAT_1464b4a18;
    }
    iVar1 = *(int *)(puVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                              (longlong)DAT_1464b4a28 - 1U) * 4);
    while (iVar1 != -1) {
      lVar7 = (longlong)iVar1;
      if (*(longlong *)(DAT_1464b49e0 + lVar7 * 0x18) == lVar2) {
        plVar6 = (longlong *)0x0;
        if ((iVar1 != -1) && (lVar2 = DAT_1464b49e0 + lVar7 * 0x18, lVar2 != 0)) {
          plVar6 = *(longlong **)(lVar2 + 8);
        }
        break;
      }
      iVar1 = *(int *)(DAT_1464b49e0 + 0x10 + lVar7 * 0x18);
    }
  }
  iVar1 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
  *puVar5 = *param_2;
  lVar2 = param_2[1];
  puVar5[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x0001417166ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  return;
}



// FUNCTION 141716700 AddNewInstance body=87 status=ok
// SIG undefined AddNewInstance(void)

void FObjectInstancingGraph::AddNewInstance(longlong param_1,longlong param_2,longlong param_3)

{
  longlong local_res10 [2];
  undefined1 local_res20 [8];
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_3 == 0) {
      param_3 = FUN_14178ca30(param_2);
    }
    local_20 = &local_28;
    local_18 = local_res10;
    local_28 = param_3;
    TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
              (param_1 + 0x18,local_res20,&local_20,0);
  }
  return;
}



// FUNCTION 141716760 AddNewObject body=111 status=ok
// SIG undefined AddNewObject(void)

void FObjectInstancingGraph::AddNewObject(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 local_res8 [24];
  longlong local_res20;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    SetDestinationRoot();
    return;
  }
  if (param_2 != 0) {
    local_28 = param_2;
    if (param_3 == 0) {
      param_3 = FUN_14178ca30(param_2);
    }
    local_20 = &local_res20;
    local_18 = &local_28;
    local_res20 = param_3;
    TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
              (param_1 + 0x18,local_res8,&local_20,0);
    return;
  }
  return;
}



// FUNCTION 1417167d0 AddRedirectList body=521 status=ok
// SIG undefined AddRedirectList(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FCoreRedirects::AddRedirectList(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_98 [4];
  longlong local_78;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = *param_1;
  uVar4 = 0;
  lVar5 = (longlong)(int)param_1[1] * 0xa0 + lVar2;
  if (lVar2 != lVar5) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    local_108 = 0;
    do {
      if ((((plVar3[-5] != 0) || (local_108 = 0, plVar3[-3] != 0)) &&
          ((local_100 = 0, plVar3[-2] != 0 || (local_f8 = 0, *plVar3 != 0)))) &&
         ((((cVar1 = FUN_14171d7b0(plVar3 + -5), cVar1 != '\0' &&
            (cVar1 = FUN_14171d7b0(), cVar1 != '\0')) &&
           ((*plVar3 == plVar3[-3] || (local_f0 = 0, plVar3[-4] == 0)))) &&
          (((cVar1 = FUN_141716dd0(lVar2,param_2), cVar1 != '\0' &&
            (((uVar4 = 1, plVar3[-5] != plVar3[-2] || (plVar3[-4] != plVar3[-1])) ||
             (plVar3[-3] != *plVar3)))) && (0 < (int)plVar3[5] - *(int *)((longlong)plVar3 + 0x54)))
          )))) {
        FCoreRedirect::FCoreRedirect(local_e8,lVar2);
        local_e0 = local_c8;
        uStack_dc = uStack_c4;
        uStack_d8 = uStack_c0;
        uStack_d4 = uStack_bc;
        local_d0 = local_b8;
        FUN_141716dd0(local_e8,param_2);
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(local_98,0);
        if (local_78 != 0) {
          FMemory::Free();
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
      lVar2 = lVar2 + 0xa0;
      plVar3 = plVar3 + 0x14;
    } while (lVar2 != lVar5);
  }
  return uVar4;
}



// FUNCTION 1417169e0 FUN_1417169e0 body=725 status=ok
// SIG undefined FUN_1417169e0(void)

void FUN_1417169e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  uint uStack_84;
  
  lVar7 = *(longlong *)(param_1 + 0x1a0);
  lVar10 = (longlong)*(int *)(param_1 + 0x1a8) * 0x10 + lVar7;
  for (; lVar7 != lVar10; lVar7 = lVar7 + 0x10) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar7,param_1,0);
  }
  uVar1 = *(uint *)(param_1 + 0x128);
  iVar8 = 0;
  uStack_84 = 0;
  if (uVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x110);
    }
    uVar4 = *puVar9;
    iVar5 = 0;
    while (uVar4 == 0) {
      iVar8 = iVar8 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141716afd;
      uVar4 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar4 = -uVar4 & uVar4;
    iVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iVar8 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_84) {
LAB_141716afd:
      uStack_84 = uVar1;
    }
  }
  uVar2 = uStack_84;
  uStack_84 = *(uint *)(param_1 + 0x128);
  uVar4 = uStack_84 & 0xffffffe0;
  if (uStack_84 != uVar1) {
    puVar9 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x110);
    }
    uVar6 = puVar9[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
    iVar8 = (int)uStack_84 >> 5;
    while (uVar6 == 0) {
      uVar4 = uVar4 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141716bc4;
      uVar6 = puVar9[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar8 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (uVar4 - iVar8) + 0x1f;
    if ((int)uVar1 < (int)uStack_84) {
LAB_141716bc4:
      uStack_84 = uVar1;
    }
  }
  while( true ) {
    if (uVar2 == uStack_84) break;
    (**(code **)(*param_2 + 0x38))
              (param_2,*(longlong *)(param_1 + 0x100) + ((longlong)(int)uVar2 * 3 + 1) * 8,param_1);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xc0,param_1,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 200,param_1,0);
  cVar3 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar3 == '\0') {
    (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xf8,param_1,0);
  }
  else if (*(longlong *)(param_1 + 0xf8) != 0) {
    (**(code **)(param_1 + 0xa8))(*(longlong *)(param_1 + 0xf8),param_2);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 141716cc0 AddReferencedObjects body=257 status=ok
// SIG undefined AddReferencedObjects(void)

void UDynamicClass::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x208),param_1,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218),param_1,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x228),param_1,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238),param_1,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x248),param_1,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600),param_1,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x260,param_1,0);
  FUN_1417169e0(param_1,param_2);
  return;
}



// FUNCTION 141716dd0 FUN_141716dd0 body=692 status=ok
// SIG undefined FUN_141716dd0(void)

undefined8 FUN_141716dd0(uint *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res8 [4];
  uint *local_res18;
  uint **local_res20;
  
  if (DAT_1464b4a88 != DAT_1464b4ab4) {
    puVar3 = DAT_1464b4ac0;
    if (DAT_1464b4ac0 == (undefined *)0x0) {
      puVar3 = &DAT_1464b4ab8;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)DAT_1464b4ac8 - 1U & (longlong)(int)*param_1) * 4);
    while (iVar2 != -1) {
      lVar6 = (longlong)iVar2 * 0x60;
      if (*(uint *)(lVar6 + DAT_1464b4a80) == *param_1) {
        if ((iVar2 != -1) && (lVar6 = lVar6 + DAT_1464b4a80, lVar6 != 0)) goto LAB_141716e8f;
        break;
      }
      iVar2 = *(int *)(lVar6 + DAT_1464b4a80 + 0x58);
    }
  }
  local_res18 = param_1;
  TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
            (&DAT_1464b4a80,local_res8,&local_res18,0);
  lVar6 = (longlong)local_res8[0] * 0x60 + DAT_1464b4a80;
LAB_141716e8f:
  plVar1 = (longlong *)(lVar6 + 8);
  if ((*param_1 >> 0x12 & 1) == 0) {
    if ((*param_1 & 0x40) == 0) {
      puVar4 = *(uint **)(param_1 + 2);
    }
    else {
      puVar4 = *(uint **)(param_1 + 6);
    }
  }
  else {
    puVar4 = DAT_1469e7080;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e7088) &&
       (_Init_thread_header(&DAT_1469e7088), puVar4 = DAT_1469e7080, DAT_1469e7088 == -1)) {
      FName::FName(&DAT_1469e7080,L"*SUBSTRING*",1);
      _Init_thread_footer(&DAT_1469e7088);
      puVar4 = DAT_1469e7080;
    }
  }
  local_res18 = puVar4;
  if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
    lVar8 = *(longlong *)(lVar6 + 0x48);
    if (*(longlong *)(lVar6 + 0x48) == 0) {
      lVar8 = lVar6 + 0x40;
    }
    iVar2 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)puVar4 >> 0x20) + (int)puVar4) &
                             (longlong)*(int *)(lVar6 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar2 * 0x20 + *plVar1);
        if ((uint *)*plVar9 == puVar4) {
          if ((iVar2 != -1) && (plVar9 != (longlong *)0x0)) goto LAB_141716f6f;
          break;
        }
        iVar2 = (int)plVar9[3];
      } while (iVar2 != -1);
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FCoreRedirect,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&&>_>(plVar1,local_res8,&local_res20,0);
  plVar9 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar1);
LAB_141716f6f:
  puVar5 = (uint *)plVar9[1];
  iVar2 = (int)plVar9[2];
  puVar4 = puVar5 + (longlong)iVar2 * 0x28;
  if (puVar5 != puVar4) {
    puVar7 = puVar5 + 6;
    do {
      if ((((*puVar5 == *param_1) && (*(longlong *)(puVar7 + -4) == *(longlong *)(param_1 + 2))) &&
          (*(longlong *)(puVar7 + -2) == *(longlong *)(param_1 + 4))) &&
         (*(longlong *)puVar7 == *(longlong *)(param_1 + 6))) {
        if (((*(longlong *)(puVar5 + 8) == *(longlong *)(param_1 + 8)) &&
            (*(longlong *)(puVar5 + 10) == *(longlong *)(param_1 + 10))) &&
           ((*(longlong *)(puVar5 + 0xc) == *(longlong *)(param_1 + 0xc) &&
            (0 < (int)(param_1[0x16] - param_1[0x21]))))) {
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          ::Append<FDefaultSetAllocator>(puVar5 + 0x14,param_1 + 0x14);
        }
        return 0;
      }
      puVar5 = puVar5 + 0x28;
      puVar7 = puVar7 + 0x28;
    } while (puVar5 != puVar4);
  }
  *(int *)(plVar9 + 2) = iVar2 + 1;
  if (*(int *)((longlong)plVar9 + 0x14) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar9 + 1,iVar2);
  }
  FCoreRedirect::FCoreRedirect((longlong)iVar2 * 0xa0 + plVar9[1],param_1);
  return 1;
}



// FUNCTION 141717090 FUN_141717090 body=301 status=ok
// SIG undefined FUN_141717090(void)

void FUN_141717090(void)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  
  uVar6 = 0;
  if ((int)DAT_1469e91c4 < 1) {
    return;
  }
  while (uVar5 = (int)uVar6 >> 0x1f & 0xffff, uVar2 = uVar6 + uVar5,
        plVar7 = *(longlong **)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18), plVar7 == (longlong *)0x0) {
    uVar6 = uVar6 + 1;
    if ((int)DAT_1469e91c4 <= (int)uVar6) {
      return;
    }
  }
  do {
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar2 = uVar6;
    if (bVar1) {
      if ((DAT_1468c2185 == '\0') && (plVar7[0x1f] == 0)) {
        (**(code **)(*plVar7 + 0x368))(plVar7);
      }
      if ((*(uint *)((longlong)plVar7 + 0xb4) >> 0x16 & 1) == 0) {
        FUN_14172cc50(plVar7,0);
      }
    }
    do {
      uVar6 = uVar2 + 1;
      if ((int)DAT_1469e91c4 <= (int)uVar6) {
        return;
      }
      uVar4 = uVar6 & 0xffff;
      uVar5 = uVar6;
      if ((int)uVar6 < 0) {
        uVar5 = uVar2 + 0x10000;
        uVar4 = uVar4 - 0x10000;
      }
      plVar7 = *(longlong **)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)uVar4 * 0x18);
      uVar2 = uVar6;
    } while (plVar7 == (longlong *)0x0);
  } while( true );
}



// FUNCTION 1417171c0 FUN_1417171c0 body=576 status=ok
// SIG undefined FUN_1417171c0(void)

void FUN_1417171c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong local_18 [2];
  
  puVar7 = &DAT_143f3eda8;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x19 & 1) != 0) {
      puVar5 = (undefined8 *)UObjectBaseUtility::GetPathName(param_1,local_18,0);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar5;
      }
      LowLevelFatalErrorHandler("Unknown",0xc6f,L"Can\'t bind to native class %s",puVar8);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      puVar5 = (undefined8 *)UObjectBaseUtility::GetPathName(param_1,local_18,0);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar5;
      }
      FDebug::AssertFailed(&DAT_144cfe3ff,"Unknown",0xc6f,L"Can\'t bind to native class %s",puVar8);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  if ((plVar2 != (longlong *)0x0) &&
     (((*(longlong *)(param_1 + 0x98) == 0 || (*(longlong *)(param_1 + 0xa8) == 0)) ||
      (*(longlong *)(param_1 + 0xa0) == 0)))) {
    (**(code **)(*plVar2 + 0x280))(plVar2);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      *(longlong *)(param_1 + 0x98) = plVar2[0x13];
    }
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      *(longlong *)(param_1 + 0xa0) = plVar2[0x14];
    }
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      *(longlong *)(param_1 + 0xa8) = plVar2[0x15];
    }
    *(ulonglong *)(param_1 + 0xb8) = *(ulonglong *)(param_1 + 0xb8) | plVar2[0x17];
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    puVar5 = (undefined8 *)UObjectBaseUtility::GetPathName(param_1,local_18,0);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    LowLevelFatalErrorHandler("Unknown",0xc8f,L"Can\'t find ClassConstructor for class %s",puVar8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar5 = (undefined8 *)UObjectBaseUtility::GetPathName(param_1,local_18,0);
    if (*(int *)(puVar5 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar5;
    }
    FDebug::AssertFailed
              (&DAT_144cfe45e,"Unknown",0xc8f,L"Can\'t find ClassConstructor for class %s",puVar7);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141717400 FUN_141717400 body=117 status=ok
// SIG undefined FUN_141717400(void)

void FUN_141717400(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = UField::GetOwnerClass();
  if ((*(uint *)(param_1 + 0x88) & 0x400) == 0) {
    *(code **)(param_1 + 0xb0) = FUN_141793f30;
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x1e8);
  plVar3 = plVar2 + (longlong)*(int *)(lVar1 + 0x1f0) * 2;
  if (plVar2 != plVar3) {
    while (*(longlong *)(param_1 + 0x18) != *plVar2) {
      plVar2 = plVar2 + 2;
      if (plVar2 == plVar3) {
        return;
      }
    }
    *(longlong *)(param_1 + 0xb0) = plVar2[1];
  }
  return;
}



// FUNCTION 141717490 CanLoadFromDisk body=166 status=ok
// SIG undefined CanLoadFromDisk(void)

undefined8 FUntypedBulkData::CanLoadFromDisk(longlong param_1)

{
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  longlong lVar4;
  undefined8 uVar5;
  wint_t *pwVar6;
  undefined2 *puVar7;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0x58);
  }
  pwVar6 = &DAT_144cfef84;
  do {
    wVar2 = *(wint_t *)((longlong)(puVar7 + -0xa267f7c2) + (longlong)pwVar6);
    if ((wVar2 == 0) && (*pwVar6 == 0)) goto LAB_1417174fe;
    if (wVar2 != *pwVar6) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar6);
      if (wVar2 != wVar3) break;
    }
    pwVar6 = pwVar6 + 1;
  } while( true );
  if (wVar2 == wVar3) {
LAB_1417174fe:
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x68);
    if (cVar1 != '\0') {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x68);
      if (*(longlong *)(lVar4 + 0x60) != 0) goto LAB_14171751f;
    }
    uVar5 = 0;
  }
  else {
LAB_14171751f:
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141717540 FUN_141717540 body=530 status=ok
// SIG undefined FUN_141717540(void)

void FUN_141717540(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint *puVar11;
  int iVar12;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_48;
  uint uStack_44;
  undefined *local_40;
  uint uStack_38;
  int iStack_34;
  undefined8 local_30;
  
  uStack_94 = 1;
  local_98 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  iVar12 = (int)DAT_1464b4a08;
  if (iVar12 != 0) {
    puVar11 = DAT_1464b4a00;
    if (DAT_1464b4a00 == (uint *)0x0) {
      puVar11 = (uint *)&DAT_1464b49f0;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar7 = (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar7) goto LAB_14171760f;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_84 = (iStack_80 - iVar8) + 0x1f;
    if (iVar12 < iStack_84) {
LAB_14171760f:
      iStack_84 = iVar12;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  local_30 = CONCAT44(uStack_7c,iStack_80);
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = &DAT_1464b49f0;
  while ((iStack_34 != iVar12 || (local_40 != &DAT_1464b49f0))) {
    plVar5 = *(longlong **)(DAT_1464b49e0 + 8 + (longlong)iStack_34 * 0x18);
    if (plVar5 != (longlong *)0x0) {
      iVar8 = (int)plVar5[1];
      lVar9 = *plVar5;
      if (iVar8 != 0) {
        plVar10 = (longlong *)(lVar9 + 8);
        do {
          plVar6 = (longlong *)*plVar10;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
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
          plVar10 = plVar10 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar9 = *plVar5;
      }
      if (lVar9 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar5,0x10);
    }
    uStack_38 = uStack_38 & ~uStack_44;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
  FUN_1406c5d90(&DAT_1464b49e0,0);
  return;
}



// FUNCTION 141717760 FUN_141717760 body=6 status=ok
// SIG undefined FUN_141717760(void)

void FUN_141717760(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~param_2;
  return;
}



// FUNCTION 141717770 ClearClassNetCache body=528 status=ok
// SIG undefined ClearClassNetCache(void)

void FClassNetCacheMgr::ClearClassNetCache(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
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
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x30);
  puStack_28 = (uint *)(param_1 + 0x18);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar5 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar5 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar5;
      if (bVar3) goto LAB_14171782f;
      uVar5 = puVar7[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_14171782f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x30);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 200) = 0;
        if (*(longlong *)(lVar6 + 0xc0) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar6 + 0x80);
        *(undefined4 *)(lVar6 + 0x78) = 0;
        if (*(longlong *)(lVar6 + 0x70) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar6 + 0x30);
        if (*(longlong *)(lVar6 + 0x20) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar6,0xd0);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
  return;
}



// FUNCTION 141717980 FUN_141717980 body=432 status=ok
// SIG undefined FUN_141717980(void)

void FUN_141717980(longlong param_1,void *param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar8 = *(int *)(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x90);
  uVar5 = (ulonglong)param_3;
  uVar4 = *(int *)(param_1 + 0x44) + -1 + iVar8 & -*(int *)(param_1 + 0x44);
  if (plVar1 != (longlong *)0x0) {
    if (0 < (int)param_3) {
      pvVar7 = param_2;
      do {
        cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
        if (cVar3 != '\0') {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        cVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (cVar3 == '\0') {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
        else {
          _guard_xfg_dispatch_icall_nop(pvVar7,0,(longlong)(int)uVar4);
        }
        pvVar7 = (void *)((longlong)pvVar7 + (longlong)(int)uVar4);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      iVar8 = *(int *)(param_1 + 0x40);
    }
    iVar9 = (int)plVar1[1];
  }
  if (iVar9 < iVar8) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    bVar2 = false;
    while ((plVar1 != (longlong *)0x0 && (uVar5 = (ulonglong)param_3, !bVar2))) {
      iVar8 = (int)plVar1[6];
      if (iVar9 < *(int *)((longlong)plVar1 + 0x34) * iVar8 + *(int *)((longlong)plVar1 + 0x44)) {
        bVar2 = false;
        if (0 < (int)param_3) {
          pvVar7 = param_2;
          do {
            iVar6 = 0;
            if (0 < iVar8) {
              do {
                if ((plVar1[7] & 0x1000000200U) == 0x1000000200) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)pvVar7 +
                                     (longlong)*(int *)((longlong)plVar1 + 0x44) +
                                     (longlong)(*(int *)((longlong)plVar1 + 0x34) * iVar6)),0,
                             (longlong)*(int *)((longlong)plVar1 + 0x34));
                }
                else {
                  (**(code **)(*plVar1 + 800))(plVar1);
                }
                iVar8 = (int)plVar1[6];
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar8);
            }
            pvVar7 = (void *)((longlong)pvVar7 + (longlong)(int)uVar4);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        bVar2 = true;
      }
      plVar1 = (longlong *)plVar1[10];
    }
  }
  return;
}



// FUNCTION 141717b30 CombineNames body=819 status=ok
// SIG undefined CombineNames(void)

undefined8
FCoreRedirectObjectName::CombineNames
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short *psVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  short *psVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  bool bVar9;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  short *local_68 [2];
  short *local_58;
  int local_50;
  short *local_48 [2];
  short *local_38 [2];
  
  local_68[0] = (short *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_3 != 0) {
    FName::ToString(&local_res18,&local_58);
    for (psVar4 = local_58; psVar1 = local_58, psVar4 != local_58 + local_50; psVar4 = psVar4 + 1) {
      if (*psVar4 == 0x2e) {
        if ((int)((longlong)psVar4 - (longlong)local_58 >> 1) != -1) goto LAB_141717bf5;
        break;
      }
    }
    do {
      if (psVar1 == local_58 + local_50) goto LAB_141717bb3;
      if (*psVar1 == 0x3a) {
        if ((int)((longlong)psVar1 - (longlong)local_58 >> 1) != -1) goto LAB_141717bf5;
        goto LAB_141717bb3;
      }
      psVar1 = psVar1 + 1;
    } while( true );
  }
  if (param_4 == 0) {
    plVar3 = &local_res10;
LAB_141717e4d:
    local_68[0] = (short *)0x0;
    FName::ToString(plVar3,param_1);
    return param_1;
  }
  local_68[0] = (short *)0x0;
  if (param_2 == 0) {
    plVar3 = &local_res20;
    goto LAB_141717e4d;
  }
  puVar2 = (undefined8 *)FName::ToString(&local_res10,local_48);
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FName::ToString(&local_res20,local_38);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar6 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(param_1,L"%s.%s",puVar6,puVar7);
  local_58 = local_48[0];
  if (local_38[0] != (short *)0x0) {
    FMemory::Free();
    local_58 = local_48[0];
  }
  goto LAB_141717e2b;
LAB_141717bf5:
  local_68[0] = (short *)0x0;
  if (local_res20 == 0) {
    puVar2 = (undefined8 *)FName::ToString(&local_res10,local_48);
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::ToString(&local_res18,local_38);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar2;
    }
    pwVar5 = L"%s.%s";
    goto LAB_141717ce1;
  }
  puVar2 = (undefined8 *)FName::ToString(&local_res10,local_38);
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FName::ToString(&local_res18,local_48);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FName::ToString(&local_res20,local_68);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar6 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(param_1,L"%s.%s.%s",puVar6,puVar8,puVar7);
  if (local_68[0] != (short *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != (short *)0x0) {
    FMemory::Free();
  }
  goto LAB_141717c93;
LAB_141717bb3:
  local_68[0] = (short *)0x0;
  if (local_res20 == 0) {
    puVar2 = (undefined8 *)FName::ToString(&local_res10,local_48);
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::ToString(&local_res18,local_38);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar2;
    }
    pwVar5 = L"%s:%s";
LAB_141717ce1:
    FString::PrintfImpl(param_1,pwVar5,puVar6,puVar7);
    bVar9 = local_38[0] != (short *)0x0;
    local_38[0] = local_48[0];
    if (bVar9) {
      FMemory::Free();
      local_38[0] = local_48[0];
    }
  }
  else {
    puVar2 = (undefined8 *)FName::ToString(&local_res10,local_68);
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::ToString(&local_res18,local_48);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FName::ToString(&local_res20,local_38);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(param_1,L"%s.%s:%s",puVar6,puVar8,puVar7);
    if (local_38[0] != (short *)0x0) {
      FMemory::Free();
    }
    local_38[0] = local_68[0];
    if (local_48[0] != (short *)0x0) {
      FMemory::Free();
      local_38[0] = local_68[0];
    }
  }
LAB_141717c93:
  if (local_38[0] != (short *)0x0) {
    FMemory::Free();
  }
LAB_141717e2b:
  if (local_58 == (short *)0x0) {
    return param_1;
  }
  FMemory::Free();
  return param_1;
}



// FUNCTION 141717e70 FUN_141717e70 body=263 status=ok
// SIG undefined FUN_141717e70(void)

undefined1 FUN_141717e70(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  byte local_res18 [16];
  longlong local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_3 == 0) {
LAB_141717f62:
    uVar3 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x88) & 2) != 0) {
      local_res18[0] = 0;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xb0))
                        (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,local_res18);
      if (cVar2 != '\0') {
        return local_res18[0];
      }
    }
    local_30 = *(longlong **)(param_1 + 0x38);
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    local_38 = param_1;
    FUN_140472e10(&local_38);
    plVar1 = local_30;
    while (plVar1 != (longlong *)0x0) {
      iVar5 = 0;
      local_30 = plVar1;
      if (0 < (int)plVar1[6]) {
        do {
          lVar4 = (longlong)(*(int *)((longlong)plVar1 + 0x34) * iVar5) +
                  (longlong)*(int *)((longlong)plVar1 + 0x44);
          cVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1,lVar4 + param_2,lVar4 + param_3,param_4);
          if (cVar2 == '\0') goto LAB_141717f62;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)plVar1[6]);
      }
      local_30 = (longlong *)plVar1[5];
      FUN_140472e10(&local_38);
      plVar1 = local_30;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141717f80 FUN_141717f80 body=366 status=ok
// SIG undefined FUN_141717f80(void)

void FUN_141717f80(longlong param_1,void *param_2,void *param_3,uint param_4)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar6 = *(int *)(param_1 + 0x44) + -1 + *(int *)(param_1 + 0x40) & -*(int *)(param_1 + 0x44);
  if (((*(uint *)(param_1 + 0x88) & 0x1000) == 0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x98))(), cVar2 == '\0')) {
    if ((*(uint *)(param_1 + 0x88) & 0x2000) != 0) {
      _guard_xfg_dispatch_icall_nop(param_2,param_3,(longlong)(int)(uVar6 * param_4));
      return;
    }
    local_40 = *(longlong **)(param_1 + 0x38);
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_1;
    FUN_140472e10(&local_48);
    plVar1 = local_40;
    while (plVar1 != (longlong *)0x0) {
      if (0 < (int)param_4) {
        lVar4 = 0;
        uVar5 = (ulonglong)param_4;
        local_40 = plVar1;
        do {
          lVar3 = *(int *)((longlong)plVar1 + 0x44) + lVar4;
          _Src = (void *)(lVar3 + (longlong)param_3);
          _Dst = (void *)(lVar3 + (longlong)param_2);
          if (_Dst != _Src) {
            if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar1 + 0x2e8))(plVar1,_Dst,_Src,(int)plVar1[6]);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (_Dst,_Src,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
            }
          }
          lVar4 = lVar4 + (int)uVar6;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      local_40 = (longlong *)plVar1[5];
      FUN_140472e10(&local_48);
      plVar1 = local_40;
    }
  }
  return;
}



// FUNCTION 1417180f0 FUN_1417180f0 body=37 status=ok
// SIG undefined FUN_1417180f0(void)

void FUN_1417180f0(undefined8 param_1,longlong *param_2)

{
  FUN_14168c340();
                    /* WARNING: Could not recover jumptable at 0x000141718111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,8,8);
  return;
}



// FUNCTION 141718120 FUN_141718120 body=1392 status=ok
// SIG undefined FUN_141718120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141718120(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  char local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  int local_1a4;
  longlong local_1a0 [2];
  longlong local_190 [2];
  undefined1 local_180 [336];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    return *(undefined8 *)(param_1 + 0xf8);
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  lVar7 = 0;
  if (plVar5 != (longlong *)0x0) {
    UObjectForceRegistration(plVar5);
    lVar7 = plVar5[0x1f];
    if (lVar7 != 0) goto LAB_14171819b;
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar7 = plVar5[0x1f];
    if (lVar7 != 0) goto LAB_14171819b;
  }
  lVar4 = UObject::GetPrivateStaticClass();
  if (param_1 != lVar4) {
    return *(undefined8 *)(param_1 + 0xf8);
  }
LAB_14171819b:
  if (((((*(uint *)(param_1 + 0xb4) >> 0x12 & 1) != 0) && (*(longlong *)(param_1 + 0x58) == 0)) &&
      (DAT_1468c2177 == '\0')) && (lVar4 = FUN_1417a53c0(param_1), lVar4 != 0)) {
    if (DAT_1468c21ab == '\0') {
      for (lVar1 = *(longlong *)(param_1 + 0x38);
          (lVar1 != 0 && (*(longlong *)(lVar1 + 0x20) == param_1));
          lVar1 = *(longlong *)(lVar1 + 0x28)) {
        if ((*(uint *)(lVar1 + 8) >> 10 & 1) != 0) {
          FUN_141740c00(lVar4 + 0x200,lVar1);
        }
      }
    }
    FUN_141726e60(param_1,1);
  }
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    puVar11 = (undefined2 *)0x0;
    local_1a8 = 0;
    local_1a4 = 0;
    local_1b8 = '\0';
    puVar12 = puVar11;
    puVar10 = puVar11;
    iVar14 = 0;
    iVar13 = 0;
    if ((DAT_1464aaa49 != '\0') &&
       (lVar4 = UObjectBaseUtility::GetOutermost(param_1), puVar12 = (undefined2 *)0x0,
       puVar10 = (undefined2 *)0x0, iVar14 = 0, iVar13 = 0, (*(uint *)(lVar4 + 0x50) >> 4 & 1) != 0)
       ) {
      lVar4 = UObjectBaseUtility::GetOutermost(param_1);
      local_1b0 = *(undefined8 *)(lVar4 + 0x18);
      plVar5 = (longlong *)FName::ToString(&local_1b0,local_1a0);
      puVar12 = puVar11;
      iVar13 = 0;
      if (local_190 != plVar5) {
        puVar12 = (undefined2 *)*plVar5;
        *plVar5 = 0;
        iVar13 = (int)plVar5[1];
        plVar5[1] = 0;
        local_1a8 = iVar13;
      }
      if (local_1a0[0] != 0) {
        FMemory::Free();
      }
      uVar6 = UClass::GetDefaultObjectName(param_1,&local_1b0);
      plVar5 = (longlong *)FName::ToString(uVar6,local_1a0);
      iVar14 = 0;
      if (local_190 != plVar5) {
        puVar11 = (undefined2 *)*plVar5;
        *plVar5 = 0;
        iVar14 = (int)plVar5[1];
        plVar5[1] = 0;
        local_1a4 = iVar14;
      }
      if (local_1a0[0] != 0) {
        FMemory::Free();
      }
      local_1e0 = local_1e0 & 0xffffffffffffff00;
      puVar10 = &DAT_143f3eda8;
      if (iVar14 != 0) {
        puVar10 = puVar11;
      }
      puVar8 = &DAT_143f3eda8;
      if (iVar13 != 0) {
        puVar8 = puVar12;
      }
      local_1e8 = 0;
      NotifyRegistrationEvent(puVar8,puVar10,1);
      local_1b8 = '\x01';
      puVar10 = puVar11;
    }
    local_1d8 = 0;
    local_1b0 = 0;
    local_1e0 = local_1e0 & 0xffffffffffffff00;
    local_1e8 = local_1e8 & 0xffffffff00000000;
    uVar6 = FUN_141797e10(param_1,*(undefined8 *)(param_1 + 0x20),0,0x31);
    local_1e0 = 0;
    *(undefined8 *)(param_1 + 0xf8) = uVar6;
    local_1e8 = CONCAT71(local_1e8._1_7_,(*(uint *)(param_1 + 0xb4) & 0x10000080) == 0);
    FUN_141781390(local_180,uVar6,lVar7,0);
    (**(code **)(param_1 + 0x98))(local_180);
    if ((*(uint *)(param_1 + 0xb4) >> 0x11 & 1) != 0) {
      for (plVar5 = *(longlong **)(param_1 + 0x58); plVar5 != (longlong *)0x0;
          plVar5 = (longlong *)plVar5[10]) {
        lVar7 = plVar5[4];
        if (lVar7 != 0) {
          lVar4 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar13 = *(int *)(lVar7 + 0xc);
            if (iVar13 < (int)DAT_1469e91c4) {
              uVar9 = iVar13 >> 0x1f & 0xffff;
              uVar3 = iVar13 + uVar9;
              lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                      (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
            }
            else {
              lVar7 = 0;
            }
            iVar14 = local_1a4;
            iVar13 = local_1a8;
            if ((*(uint *)(lVar7 + 8) >> 0x19 & 1) != 0) break;
          }
        }
        if (plVar5[7] < 0) {
          lVar7 = UObjectProperty::GetPrivateStaticClass();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (plVar5[0xe] != 0)) {
            lVar4 = ULinkerPlaceholderClass::GetPrivateStaticClass();
            lVar7 = plVar5[0xe];
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) && ((*(byte *)(lVar7 + 0xb4) & 1) == 0)) {
              lVar4 = *(longlong *)(param_1 + 0xf8);
              uVar3 = *(uint *)(lVar4 + 8) & 0x69;
              uVar9 = uVar3 | 0x40000;
              if ((*(uint *)(plVar5 + 7) >> 0xd & 1) != 0) {
                uVar9 = uVar3 | 0x40040;
              }
              lVar1 = plVar5[3];
              local_1b0 = 0;
              if (lVar1 == 0) {
                FUN_1417846f0(lVar4,
                              L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                             );
              }
              local_1c8 = 0;
              local_1d0 = 0;
              local_1d8 = local_1d8 & 0xffffffffffffff00;
              local_1e0 = 0;
              local_1e8 = local_1e8 & 0xffffffff00000000;
              lVar7 = FUN_1417985e0(lVar7,lVar4,lVar1,uVar9);
              if (lVar7 != 0) {
                (**(code **)(*plVar5 + 0x380))
                          (plVar5,(longlong)*(int *)((longlong)plVar5 + 0x44) +
                                  *(longlong *)(param_1 + 0xf8),lVar7);
              }
            }
          }
        }
        iVar14 = local_1a4;
        iVar13 = local_1a8;
      }
    }
    if (local_1b8 != '\0') {
      local_1e0 = local_1e0 & 0xffffffffffffff00;
      local_1e8 = 0;
      puVar11 = &DAT_143f3eda8;
      if (iVar14 != 0) {
        puVar11 = puVar10;
      }
      puVar8 = &DAT_143f3eda8;
      if (iVar13 != 0) {
        puVar8 = puVar12;
      }
      NotifyRegistrationEvent(puVar8,puVar11,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x50))();
    FUN_141781fc0(local_180);
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
    if (puVar12 != (undefined2 *)0x0) {
      FMemory::Free(puVar12);
    }
    uVar6 = *(undefined8 *)(param_1 + 0xf8);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xf8);
  }
  return uVar6;
}



// FUNCTION 1417186a0 CreateLinkAndAddChildFunctionsToMap body=444 status=ok
// SIG undefined CreateLinkAndAddChildFunctionsToMap(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UClass::CreateLinkAndAddChildFunctionsToMap(longlong param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined1 local_1a0 [8];
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong *local_178;
  undefined1 local_170 [8];
  undefined1 local_168 [256];
  undefined1 *local_68;
  undefined1 *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
    local_180 = &local_190;
    local_178 = &local_188;
    local_198 = param_1;
    do {
      puVar4 = (undefined1 *)0x0;
      lVar2 = param_2[1];
      lVar3 = (*(code *)*param_2)();
      local_68 = (undefined1 *)0x0;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0x38);
      *(longlong *)(param_1 + 0x38) = lVar3;
      if (lVar2 == 0) {
        local_58 = 0;
        local_60 = (undefined1 *)0x0;
      }
      else {
        uVar6 = 0xffffffffffffffff;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (*(char *)(lVar2 + uVar6) != '\0');
        local_1a8 = (undefined1 *)((ulonglong)local_1a8 & 0xffffffff00000000);
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_1a8,0x7fffffff,lVar2,uVar6 & 0xffffffff);
        local_58 = (int)local_1a8;
        uVar1 = (int)local_1a8 + 1;
        if ((0x80 < uVar1) && (uVar1 != 0)) {
          puVar4 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar1 * 2,0);
          local_68 = puVar4;
        }
        local_1a8 = local_168;
        if (puVar4 != (undefined1 *)0x0) {
          local_1a8 = puVar4;
        }
        local_60 = local_1a8;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_1a8,uVar1,lVar2,(int)uVar7 + 2);
        param_1 = local_198;
      }
      puVar5 = (undefined8 *)FName::FName(local_170,local_60,1);
      local_190 = *puVar5;
      local_188 = lVar3;
      TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UFunction_*_const_&>_>
                (param_1 + 0x100,local_1a0,&local_180,0);
      if (local_68 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141718860 DeferCppStructOps body=205 status=ok
// SIG undefined DeferCppStructOps(void)

void UScriptStruct::DeferCppStructOps(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_18;
  undefined8 *local_10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  plVar4 = (longlong *)FUN_14171b5a0();
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar5 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar5 = plVar4 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8) &
                    (longlong)(int)plVar4[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar1 = *plVar4;
      do {
        lVar6 = (longlong)iVar3;
        if (*(longlong *)(lVar1 + lVar6 * 0x18) == local_res8) {
          if (((iVar3 != -1) && (lVar1 = lVar1 + lVar6 * 0x18, lVar1 != 0)) &&
             (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 != (undefined8 *)0x0)) {
            (**(code **)*puVar2)(puVar2,1);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  local_18 = &local_res8;
  local_10 = &local_res10;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (plVar4,local_res18,&local_18,0);
  return;
}



// FUNCTION 141718930 DeferredRegister body=95 status=ok
// SIG undefined DeferredRegister(void)

void UClass::DeferredRegister(longlong param_1)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  
  UObjectBase::DeferredRegister();
  FName::FName(local_res8,*(undefined8 *)(param_1 + 0xd0),1);
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0xd0) = local_res8[0];
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | *(uint *)(lVar1 + 0xb4) & 0x4aa1060e;
    *(ulonglong *)(param_1 + 0xb8) = *(ulonglong *)(param_1 + 0xb8) | *(ulonglong *)(lVar1 + 0xb8);
  }
  return;
}



// FUNCTION 141718990 FUN_141718990 body=348 status=ok
// SIG undefined FUN_141718990(void)

void FUN_141718990(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if ((*(uint *)(param_1 + 0x88) & 0x6000) == 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    plVar1 = *(longlong **)(param_1 + 0x90);
    uVar5 = *(int *)(param_1 + 0x44) + -1 + iVar4 & -*(int *)(param_1 + 0x44);
    iVar8 = 0;
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if ((cVar3 != '\0') && (0 < (int)param_3)) {
        uVar6 = (ulonglong)param_3;
        lVar7 = param_2;
        do {
          (**(code **)(*plVar1 + 0x28))(plVar1,lVar7);
          lVar7 = lVar7 + (int)uVar5;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      iVar8 = (int)plVar1[1];
      iVar4 = *(int *)(param_1 + 0x40);
    }
    if (iVar8 < iVar4) {
      plVar1 = *(longlong **)(param_1 + 0x68);
      bVar2 = false;
      while ((plVar1 != (longlong *)0x0 && (!bVar2))) {
        if (iVar8 < *(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6] +
                    *(int *)((longlong)plVar1 + 0x44)) {
          bVar2 = false;
          if (((plVar1[7] & 0x1000000000U) == 0) && (0 < (int)param_3)) {
            lVar7 = 0;
            uVar6 = (ulonglong)param_3;
            do {
              if ((~(byte)((ulonglong)plVar1[7] >> 0x24) & 1) != 0) {
                (**(code **)(*plVar1 + 0x328))
                          (plVar1,*(int *)((longlong)plVar1 + 0x44) + lVar7 + param_2);
              }
              lVar7 = lVar7 + (int)uVar5;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        else {
          bVar2 = true;
        }
        plVar1 = (longlong *)plVar1[0xc];
      }
    }
  }
  return;
}



// FUNCTION 141718af0 FUN_141718af0 body=226 status=ok
// SIG undefined FUN_141718af0(void)

void FUN_141718af0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  bVar2 = false;
  plVar1 = *(longlong **)(param_1 + 0x68);
  uVar5 = *(int *)(param_1 + 0x44) + -1 + *(int *)(param_1 + 0x40) & -*(int *)(param_1 + 0x44);
  while ((plVar1 != (longlong *)0x0 && (!bVar2))) {
    if ((plVar1[7] & 0x1000000000U) == 0) {
      bVar2 = false;
      if ((*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6] + *(int *)((longlong)plVar1 + 0x44) <=
           (int)uVar5) && (0 < (int)param_3)) {
        lVar4 = 0;
        uVar3 = (ulonglong)param_3;
        do {
          if ((~(byte)((ulonglong)plVar1[7] >> 0x24) & 1) != 0) {
            (**(code **)(*plVar1 + 0x328))
                      (plVar1,*(int *)((longlong)plVar1 + 0x44) + lVar4 + param_2);
          }
          lVar4 = lVar4 + (int)uVar5;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    else {
      bVar2 = true;
    }
    plVar1 = (longlong *)plVar1[0xc];
  }
  return;
}



// FUNCTION 141718be0 FUN_141718be0 body=53 status=ok
// SIG undefined FUN_141718be0(void)

void FUN_141718be0(longlong *param_1)

{
  FUN_1417135c0(param_1 + 0xc,param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141718c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 141718c20 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
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



// FUNCTION 141718ce0 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_141718db1;
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
LAB_141718db1:
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
      TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 141718e70 Empty body=481 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_141718f41;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
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
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141718f41:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,TArray<FCoreRedirect,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(lVar5 + 8,0);
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141719060 Error body=54 status=ok
// SIG undefined Error(void)

undefined8 FDeferredMessageLog::Error(undefined8 param_1,undefined8 param_2)

{
  FUN_141624290(param_2,1);
  FUN_1417165e0(param_1,param_2);
  return param_2;
}



// FUNCTION 1417190a0 FUN_1417190a0 body=336 status=ok
// SIG undefined FUN_1417190a0(void)

void FUN_1417190a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_1417135c0(param_1 + 0xc,param_1 + 2);
  plVar7 = (longlong *)param_1[0xd];
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
  plVar7 = (longlong *)0x0;
  if (*(int *)(param_1 + 10) != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d065f8;
  if (param_1[0x11] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x11] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 1417191f0 FUN_1417191f0 body=1139 status=ok
// SIG undefined FUN_1417191f0(void)

/* WARNING: Removing unreachable block (ram,0x00014171938e) */

undefined8
FUN_1417191f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  bool bVar11;
  wchar_t *local_68;
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  uint local_40;
  undefined4 local_3c;
  
  FString::TrimStartAndEnd(param_1,&local_58);
  pwVar4 = local_58 + local_50;
  for (pwVar10 = local_58; pwVar5 = local_58, pwVar10 != pwVar4; pwVar10 = pwVar10 + 1) {
    if (*pwVar10 == L'/') {
      iVar9 = (int)((longlong)pwVar10 - (longlong)local_58 >> 1);
      goto joined_r0x00014171925c;
    }
  }
  iVar9 = -1;
joined_r0x00014171925c:
  do {
    pwVar10 = local_58;
    if (pwVar5 == pwVar4) break;
    if (*pwVar5 == L'.') {
      uVar7 = (uint)((longlong)pwVar5 - (longlong)local_58 >> 1);
      goto joined_r0x00014171927a;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
  uVar7 = 0xffffffff;
joined_r0x00014171927a:
  do {
    if (pwVar10 == pwVar4) break;
    if (*pwVar10 == L':') {
      uVar1 = (uint)((longlong)pwVar10 - (longlong)local_58 >> 1);
      if ((uVar1 != 0xffffffff) && ((uVar7 == 0xffffffff || ((int)uVar1 < (int)uVar7)))) {
        uVar7 = uVar1;
      }
      break;
    }
    pwVar10 = pwVar10 + 1;
  } while( true );
  pwVar10 = pwVar4;
  if (uVar7 == 0xffffffff) {
    if (iVar9 == -1) {
      pwVar4 = L"";
      if (local_50 != 0) {
        pwVar4 = local_58;
      }
      puVar2 = (undefined8 *)FName::FName(&local_68,pwVar4,1);
      *param_2 = *puVar2;
    }
    else {
      pwVar4 = L"";
      if (local_50 != 0) {
        pwVar4 = local_58;
      }
      puVar2 = (undefined8 *)FName::FName(&local_68,pwVar4,1);
      *param_4 = *puVar2;
    }
    goto LAB_14171962e;
  }
  do {
    if (pwVar10 == local_58) {
      uVar1 = 0xffffffff;
      goto joined_r0x00014171932c;
    }
    pwVar10 = pwVar10 + -1;
  } while (*pwVar10 != L'.');
  uVar1 = (uint)((longlong)pwVar10 - (longlong)local_58 >> 1);
joined_r0x00014171932c:
  do {
    if (pwVar4 == local_58) goto LAB_14171935f;
    pwVar4 = pwVar4 + -1;
  } while (*pwVar4 != L':');
  uVar3 = (uint)((longlong)pwVar4 - (longlong)local_58 >> 1);
  if ((uVar3 != 0xffffffff) && ((uVar1 == 0xffffffff || ((int)uVar1 < (int)uVar3)))) {
    uVar1 = uVar3;
  }
LAB_14171935f:
  pwVar4 = (wchar_t *)0x0;
  uVar3 = 0;
  if (iVar9 == -1) {
    uVar6 = 0;
    uVar8 = local_50 - 1;
    if (local_50 == 0) {
      uVar8 = uVar3;
    }
    if (uVar1 < uVar8) {
      uVar8 = uVar1;
    }
    local_48 = (wchar_t *)0x0;
    local_3c = 0;
    local_68 = L"";
    if (local_50 != 0) {
      local_68 = local_58;
    }
    uVar7 = uVar8 + 1;
    if (uVar8 == 0) {
      uVar7 = 0;
    }
    pwVar10 = pwVar4;
    local_40 = uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar10 = local_48;
      uVar7 = local_40;
joined_r0x00014171950e:
      local_48 = pwVar10;
      local_40 = uVar7;
      if (0 < (int)uVar7) {
        wcsncpy(pwVar10,local_68 + (int)uVar6,(longlong)(int)uVar8);
        pwVar10[(int)uVar8] = L'\0';
      }
    }
LAB_14171952f:
    pwVar5 = L"";
    if (uVar7 != 0) {
      pwVar5 = pwVar10;
    }
    puVar2 = (undefined8 *)FName::FName(local_60,pwVar5,1);
    *param_3 = *puVar2;
    if (pwVar10 != (wchar_t *)0x0) {
      FMemory::Free(pwVar10);
    }
  }
  else {
    if (local_50 == 0) {
      pwVar10 = L"";
      uVar6 = uVar3;
    }
    else {
      pwVar10 = local_58;
      uVar6 = local_50 - 1;
    }
    uVar8 = uVar3;
    if ((-1 < (int)uVar7) && (uVar8 = uVar6, (int)uVar7 < (int)uVar6)) {
      uVar8 = uVar7;
    }
    local_48 = (wchar_t *)0x0;
    local_3c = 0;
    local_40 = uVar8 + 1;
    if (uVar8 == 0) {
      local_40 = uVar3;
    }
    pwVar5 = pwVar4;
    uVar6 = local_40;
    if (0 < (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar5 = local_48;
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,local_40);
      uVar6 = local_40;
      if (0 < (int)local_40) {
        wcsncpy(local_48,pwVar10,(longlong)(int)uVar8);
        pwVar5[(int)uVar8] = L'\0';
        uVar6 = (uint)local_68;
      }
    }
    pwVar10 = L"";
    if (uVar6 != 0) {
      pwVar10 = pwVar5;
    }
    puVar2 = (undefined8 *)FName::FName(local_60,pwVar10,1);
    *param_4 = *puVar2;
    if (pwVar5 != (wchar_t *)0x0) {
      FMemory::Free(pwVar5);
    }
    if (uVar7 != uVar1) {
      uVar6 = local_50 - 1;
      if (local_50 == 0) {
        uVar6 = uVar3;
      }
      if (uVar7 + 1 < uVar6) {
        uVar6 = uVar7 + 1;
      }
      uVar7 = local_50 - 1;
      if (local_50 == 0) {
        uVar7 = uVar3;
      }
      uVar8 = uVar6;
      if ((uVar6 <= uVar1) && (uVar8 = uVar7, uVar1 < uVar7)) {
        uVar8 = uVar1;
      }
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      local_68 = L"";
      if (local_50 != 0) {
        local_68 = local_58;
      }
      pwVar10 = (wchar_t *)0x0;
      uVar8 = uVar8 - uVar6;
      uVar7 = uVar8 + 1;
      if (uVar8 == 0) {
        uVar7 = 0;
      }
      local_40 = uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        pwVar10 = local_48;
        uVar7 = local_40;
        goto joined_r0x00014171950e;
      }
      goto LAB_14171952f;
    }
  }
  uVar7 = uVar1 + 0x80000000;
  uVar6 = local_50 - 1;
  if (local_50 == 0) {
    uVar6 = uVar3;
  }
  if (uVar1 + 1 < uVar6) {
    uVar6 = uVar1 + 1;
  }
  uVar1 = local_50 - 1;
  if (local_50 == 0) {
    uVar1 = uVar3;
  }
  uVar8 = uVar6;
  if ((uVar6 <= uVar7) && (uVar8 = uVar1, uVar7 < uVar1)) {
    uVar8 = uVar7;
  }
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  pwVar10 = L"";
  if (local_50 != 0) {
    pwVar10 = local_58;
  }
  iVar9 = uVar8 - uVar6;
  local_40 = iVar9 + 1;
  if (iVar9 == 0) {
    local_40 = uVar3;
  }
  bVar11 = local_40 == 0;
  if (0 < (int)local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    uVar7 = local_40;
    pwVar4 = local_48;
    bVar11 = local_40 == 0;
    if (0 < (int)local_40) {
      wcsncpy(local_48,pwVar10 + (int)uVar6,(longlong)iVar9);
      bVar11 = uVar7 == 0;
      pwVar4[iVar9] = L'\0';
    }
  }
  pwVar10 = L"";
  if (!bVar11) {
    pwVar10 = pwVar4;
  }
  puVar2 = (undefined8 *)FName::FName(local_60,pwVar10,1);
  *param_2 = *puVar2;
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
LAB_14171962e:
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 141719670 FUN_141719670 body=1234 status=ok
// SIG undefined FUN_141719670(void)

void FUN_141719670(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,char param_8)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  longlong lVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  longlong local_78;
  ulonglong local_70;
  void *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  void *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  if ((((param_8 == '\0') || ((*(uint *)(param_1 + 0x88) & 0x10000) == 0)) ||
      (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xc0))
                         (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,param_5,param_6,
                          param_7), cVar5 == '\0')) && ((param_6 >> 0x1c & 1) == 0)) {
    local_88 = *(longlong *)(param_1 + 0x38);
    iVar13 = 0;
    lVar14 = param_3;
    if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
      lVar14 = param_4;
    }
    local_80 = 0xffffffff;
    local_7c = 0x101;
    local_7a = 0;
    local_90 = param_1;
    local_78 = lVar14;
    FUN_140472e10();
    if (local_88 != 0) {
      do {
        lVar4 = local_88;
        cVar5 = FUN_141764b90(local_88,param_6);
        iVar12 = 0;
        if ((cVar5 != '\0') && (0 < *(int *)(lVar4 + 0x30))) {
          local_70 = param_6 | 2;
          do {
            lVar11 = 0;
            local_a0 = (void *)0x0;
            local_98 = 0;
            iVar7 = *(int *)(lVar4 + 0x34) * iVar12;
            if (lVar14 != 0) {
              lVar11 = iVar7 + lVar14 + (longlong)*(int *)(lVar4 + 0x44);
            }
            cVar5 = FUN_141754d30(lVar4,&local_a0,
                                  (longlong)iVar7 + (longlong)*(int *)(lVar4 + 0x44) + param_3,
                                  lVar11,param_5,local_70,param_7);
            if (cVar5 != '\0') {
              iVar7 = (int)param_2[1];
              iVar13 = iVar13 + 1;
              if (iVar13 == 1) {
                iVar8 = (2 - (uint)(iVar7 != 0)) + iVar7;
                *(int *)(param_2 + 1) = iVar8;
                if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
                }
                puVar10 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2)
                ;
                uVar6 = 0x28;
              }
              else {
                iVar8 = (2 - (uint)(iVar7 != 0)) + iVar7;
                *(int *)(param_2 + 1) = iVar8;
                if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
                }
                puVar10 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2)
                ;
                uVar6 = 0x2c;
              }
              *puVar10 = uVar6;
              puVar10[1] = 0;
              local_a8 = *(undefined8 *)(lVar4 + 0x18);
              iVar7 = 0;
              if (*(int *)(lVar4 + 0x30) == 1) {
                FName::ToString(&local_a8,&local_58);
                puVar10 = &DAT_143f3eda8;
                if (local_50 != 0) {
                  puVar10 = local_58;
                }
                FString::PrintfImpl(&local_68,&DAT_144cff208,puVar10);
                pvVar3 = local_68;
                if (local_60 != 0) {
                  iVar7 = local_60 + -1;
                }
                if (iVar7 != 0) {
                  iVar8 = (int)param_2[1];
                  iVar9 = (uint)(iVar8 == 0) + iVar7 + iVar8;
                  *(int *)(param_2 + 1) = iVar9;
                  if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
                  }
                  pvVar1 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
                  _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
                  *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
                }
                puVar10 = local_58;
                if (local_68 != (void *)0x0) {
                  FMemory::Free(local_68);
                  puVar10 = local_58;
                }
              }
              else {
                FName::ToString(&local_a8,&local_38);
                puVar10 = &DAT_143f3eda8;
                if (local_30 != 0) {
                  puVar10 = local_38;
                }
                FString::PrintfImpl(&local_48,L"%s[%i]=",puVar10,iVar12);
                pvVar3 = local_48;
                if (local_40 != 0) {
                  iVar7 = local_40 + -1;
                }
                if (iVar7 != 0) {
                  iVar8 = (int)param_2[1];
                  iVar9 = (uint)(iVar8 == 0) + iVar7 + iVar8;
                  *(int *)(param_2 + 1) = iVar9;
                  if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
                  }
                  pvVar1 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
                  _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
                  *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
                }
                puVar10 = local_38;
                if (local_48 != (void *)0x0) {
                  FMemory::Free(local_48);
                  puVar10 = local_38;
                }
              }
              iVar7 = 0;
              if (puVar10 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              pvVar3 = local_a0;
              if ((int)local_98 != 0) {
                iVar7 = (int)local_98 + -1;
              }
              if (iVar7 != 0) {
                iVar8 = (int)param_2[1];
                iVar9 = (uint)(iVar8 == 0) + iVar7 + iVar8;
                *(int *)(param_2 + 1) = iVar9;
                if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
                }
                pvVar1 = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
                *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
              }
            }
            if (local_a0 != (void *)0x0) {
              FMemory::Free(local_a0);
            }
            iVar12 = iVar12 + 1;
            lVar14 = local_78;
          } while (iVar12 < *(int *)(lVar4 + 0x30));
        }
        local_88 = *(longlong *)(lVar4 + 0x28);
        FUN_140472e10();
      } while (local_88 != 0);
      if (0 < iVar13) {
        iVar13 = (int)param_2[1];
        iVar12 = (2 - (uint)(iVar13 != 0)) + iVar13;
        *(int *)(param_2 + 1) = iVar12;
        if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
        }
        puVar10 = (undefined2 *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
        *puVar10 = 0x29;
        puVar10[1] = 0;
        return;
      }
    }
    iVar13 = (int)param_2[1];
    iVar12 = (3 - (uint)(iVar13 != 0)) + iVar13;
    *(int *)(param_2 + 1) = iVar12;
    if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
    }
    puVar2 = (undefined4 *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
    *puVar2 = 0x290028;
    *(undefined2 *)(puVar2 + 1) = 0;
  }
  return;
}



// FUNCTION 141719b50 FUN_141719b50 body=267 status=ok
// SIG undefined FUN_141719b50(void)

longlong FUN_141719b50(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_1417a3f20();
  if ((lVar3 == 0) && ((param_3 & 0xffffffff) != param_3)) {
    plVar4 = *(longlong **)(param_1 + 0x240);
    plVar1 = plVar4 + *(int *)(param_1 + 0x248);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar3 = *plVar4;
      if ((lVar3 == 0) || (*(ulonglong *)(lVar3 + 0x18) != (param_3 & 0xffffffff))) {
LAB_141719bf0:
        bVar2 = false;
      }
      else {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_141719bf0;
        bVar2 = true;
      }
      if (bVar2) {
        if (plVar4 != (longlong *)0x0) goto LAB_141719c09;
        break;
      }
    }
    lVar3 = 0;
  }
LAB_141719c09:
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (lVar3 != 0) {
    return lVar3;
  }
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar1 + 0x350))(plVar1,param_2,param_3);
    return lVar3;
  }
  return 0;
}



// FUNCTION 141719c60 FUN_141719c60 body=753 status=ok
// SIG undefined FUN_141719c60(void)

undefined8 * FUN_141719c60(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  longlong local_res10 [2];
  undefined8 *local_res20;
  longlong *local_38;
  undefined8 **local_30;
  
  puVar9 = (undefined8 *)0x0;
  local_res20 = puVar9;
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
    lVar3 = *(longlong *)(param_1 + 0x140);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar3 = param_1 + 0x138;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x148) - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x100);
      do {
        lVar8 = (longlong)iVar1;
        if (*(longlong *)(lVar3 + lVar8 * 0x18) == param_2) {
          if ((iVar1 != -1) && (lVar3 = lVar3 + lVar8 * 0x18, lVar3 != 0)) {
            local_res20 = *(undefined8 **)(lVar3 + 8);
          }
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar8 * 0x18);
      } while (iVar1 != -1);
    }
  }
  if (((local_res20 == (undefined8 *)0x0) && (param_3 == 1)) &&
     ((lVar3 = *(longlong *)(param_1 + 0x30), lVar3 != 0 || (0 < *(int *)(param_1 + 0x1a8))))) {
    local_res10[0] = param_2;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e7188) &&
       (_Init_thread_header(&DAT_1469e7188), DAT_1469e7188 == -1)) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7160);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1469e7160,4000);
      atexit((_func_5014 *)&LAB_143e7c6a0);
      _Init_thread_footer(&DAT_1469e7188);
    }
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7160);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7160);
    }
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      lVar8 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar8 = param_1 + 0x188;
      }
      iVar1 = *(int *)(lVar8 + ((longlong)
                                ((int)((ulonglong)local_res10[0] >> 0x20) + (int)local_res10[0]) &
                               (longlong)*(int *)(param_1 + 0x198) - 1U) * 4);
      if (iVar1 != -1) {
        lVar8 = *(longlong *)(param_1 + 0x150);
        do {
          puVar4 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0x18);
          if (*(longlong *)(lVar8 + (longlong)iVar1 * 0x18) == local_res10[0]) {
            if (iVar1 != -1) goto LAB_141719df6;
            break;
          }
          iVar1 = *(int *)(puVar4 + 2);
        } while (iVar1 != -1);
      }
    }
    puVar4 = puVar9;
LAB_141719df6:
    puVar5 = puVar4 + 1;
    if (puVar4 == (undefined8 *)0x0) {
      puVar5 = puVar9;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7160);
    if (puVar5 == (undefined8 *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x1a0);
      plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x1a8) * 2;
      puVar4 = local_res20;
      for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
        puVar4 = puVar9;
        if (*plVar6 != 0) {
          puVar4 = (undefined8 *)FUN_141719c60(*plVar6,local_res10[0],1);
        }
        if (puVar4 != (undefined8 *)0x0) break;
        local_res20 = (undefined8 *)0x0;
      }
      local_res20 = puVar4;
      if ((lVar3 != 0) && (local_res20 == (undefined8 *)0x0)) {
        local_res20 = (undefined8 *)FUN_141719c60(lVar3,local_res10[0],1);
      }
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7160);
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7160);
      }
      local_38 = local_res10;
      local_30 = &local_res20;
      TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,UFunction_*_const_&>_>
                ((longlong *)(param_1 + 0x150),local_res8,&local_38,0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7160);
    }
    else {
      local_res20 = (undefined8 *)*puVar5;
    }
  }
  return local_res20;
}



// FUNCTION 141719f60 FinishDestroy body=84 status=ok
// SIG undefined FinishDestroy(void)

void UClass::FinishDestroy(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe8,0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 141719fc0 FinishDestroy body=46 status=ok
// SIG undefined FinishDestroy(void)

void UStruct::FinishDestroy(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 141719ff0 FUN_141719ff0 body=641 status=ok
// SIG undefined FUN_141719ff0(void)

void FUN_141719ff0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  BOOL BVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint *puVar13;
  int iVar14;
  int local_c8;
  uint uStack_c4;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  uint uStack_9c;
  undefined *local_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined1 local_58 [48];
  
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  }
  uStack_c4 = 1;
  local_c8 = 0;
  iStack_b4 = 0;
  iStack_b0 = 0;
  iVar14 = (int)DAT_1464b4a08;
  if (iVar14 != 0) {
    puVar13 = DAT_1464b4a00;
    if (DAT_1464b4a00 == (uint *)0x0) {
      puVar13 = (uint *)&DAT_1464b49f0;
    }
    uVar4 = *puVar13;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar9 = local_c8 + 1;
      bVar7 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar9;
      if (bVar7) goto LAB_14171a0df;
      uVar4 = puVar13[lVar10 + 1];
    }
    uStack_c4 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_b4 = (iStack_b0 - iVar9) + 0x1f;
    if (iVar14 < iStack_b4) {
LAB_14171a0df:
      iStack_b4 = iVar14;
    }
  }
  uStack_78 = CONCAT44(uStack_c4,local_c8);
  uStack_90 = 0xffffffff;
  iStack_8c = iStack_b4;
  local_88 = CONCAT44(uStack_ac,iStack_b0);
  local_80 = &DAT_1464b49e0;
  _iStack_70 = CONCAT44(iVar14,-1 << ((byte)DAT_1464b4a08 & 0x1f));
  iStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  local_98 = &DAT_1464b49f0;
  uStack_60 = local_88;
  uStack_68 = uStack_90;
  iStack_64 = iStack_8c;
  while ((iStack_8c != iVar14 || (local_98 != &DAT_1464b49f0))) {
    lVar10 = DAT_1464b49e0 + (longlong)iStack_8c * 0x18;
    if (*(int *)(*(longlong *)(DAT_1464b49e0 + 8 + (longlong)iStack_8c * 0x18) + 8) != 0) {
      FUN_14161fb50(local_58,lVar10);
      FUN_1404b8aa0(local_58,*(undefined8 *)(lVar10 + 8));
      plVar5 = *(longlong **)(lVar10 + 8);
      iVar9 = (int)plVar5[1];
      if (iVar9 != 0) {
        plVar12 = (longlong *)(*plVar5 + 8);
        iVar11 = iVar9;
        do {
          plVar6 = (longlong *)*plVar12;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
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
          plVar12 = plVar12 + 2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      *(undefined4 *)(plVar5 + 1) = 0;
      if (*(int *)((longlong)plVar5 + 0xc) != iVar9) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar5,iVar9);
      }
      FMessageLog::~FMessageLog(local_58);
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014171a26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e7038);
  return;
}



// FUNCTION 14171a280 FlushAsyncLoading body=111 status=ok
// SIG undefined FlushAsyncLoading(void)

bool FUntypedBulkData::FlushAsyncLoading(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    WaitForAsyncLoading();
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x30);
    if (puVar1 != puVar2) {
      uVar4 = *puVar1;
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
      *puVar2 = uVar4;
      *(undefined8 *)(param_1 + 0x38) = uVar5;
    }
    FMemory::Free(*puVar2);
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    ResetAsyncData(param_1);
  }
  return lVar3 != 0;
}



// FUNCTION 14171a2f0 FUN_14171a2f0 body=124 status=ok
// SIG undefined FUN_14171a2f0(void)

undefined8 FUN_14171a2f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e71e8) {
    _Init_thread_header(&DAT_1469e71e8);
    if (DAT_1469e71e8 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Color",1);
      DAT_1469e71e0 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e71e8);
    }
  }
  return DAT_1469e71e0;
}



// FUNCTION 14171a370 FUN_14171a370 body=124 status=ok
// SIG undefined FUN_14171a370(void)

undefined8 FUN_14171a370(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7208) {
    _Init_thread_header(&DAT_1469e7208);
    if (DAT_1469e7208 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"FallbackStruct",1);
      DAT_1469e7200 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e7208);
    }
  }
  return DAT_1469e7200;
}



// FUNCTION 14171a3f0 FUN_14171a3f0 body=124 status=ok
// SIG undefined FUN_14171a3f0(void)

undefined8 FUN_14171a3f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7218) {
    _Init_thread_header(&DAT_1469e7218);
    if (DAT_1469e7218 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"FloatRange",1);
      DAT_1469e7210 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e7218);
    }
  }
  return DAT_1469e7210;
}



// FUNCTION 14171a470 FUN_14171a470 body=124 status=ok
// SIG undefined FUN_14171a470(void)

undefined8 FUN_14171a470(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e71d8) {
    _Init_thread_header(&DAT_1469e71d8);
    if (DAT_1469e71d8 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"LinearColor",1);
      DAT_1469e71d0 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e71d8);
    }
  }
  return DAT_1469e71d0;
}



// FUNCTION 14171a4f0 FUN_14171a4f0 body=124 status=ok
// SIG undefined FUN_14171a4f0(void)

undefined8 FUN_14171a4f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e71b8) {
    _Init_thread_header(&DAT_1469e71b8);
    if (DAT_1469e71b8 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Rotator",1);
      DAT_1469e71b0 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e71b8);
    }
  }
  return DAT_1469e71b0;
}



// FUNCTION 14171a570 FUN_14171a570 body=124 status=ok
// SIG undefined FUN_14171a570(void)

undefined8 FUN_14171a570(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7238) {
    _Init_thread_header(&DAT_1469e7238);
    if (DAT_1469e7238 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"SoftClassPath",1);
      DAT_1469e7230 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e7238);
    }
  }
  return DAT_1469e7230;
}



// FUNCTION 14171a5f0 FUN_14171a5f0 body=124 status=ok
// SIG undefined FUN_14171a5f0(void)

undefined8 FUN_14171a5f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7228) {
    _Init_thread_header(&DAT_1469e7228);
    if (DAT_1469e7228 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"SoftObjectPath",1);
      DAT_1469e7220 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e7228);
    }
  }
  return DAT_1469e7220;
}



// FUNCTION 14171a670 FUN_14171a670 body=124 status=ok
// SIG undefined FUN_14171a670(void)

undefined8 FUN_14171a670(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e71c8) {
    _Init_thread_header(&DAT_1469e71c8);
    if (DAT_1469e71c8 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Transform",1);
      DAT_1469e71c0 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e71c8);
    }
  }
  return DAT_1469e71c0;
}



// FUNCTION 14171a6f0 FUN_14171a6f0 body=124 status=ok
// SIG undefined FUN_14171a6f0(void)

undefined8 FUN_14171a6f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e71f8) {
    _Init_thread_header(&DAT_1469e71f8);
    if (DAT_1469e71f8 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Vector",1);
      DAT_1469e71f0 = FUN_141726dc0(*puVar1);
      _Init_thread_footer(&DAT_1469e71f8);
    }
  }
  return DAT_1469e71f0;
}



// FUNCTION 14171a770 FUN_14171a770 body=101 status=ok
// SIG undefined FUN_14171a770(void)

undefined8 FUN_14171a770(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  cVar1 = *(char *)(lVar2 + 0x58);
  while (cVar1 == '\0') {
    (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x20))(*(longlong **)(lVar2 + 0x50),0x5d638865,0);
    cVar1 = *(char *)(lVar2 + 0x58);
  }
  return *(undefined8 *)(lVar2 + 0x60);
}



// FUNCTION 14171a7e0 FUN_14171a7e0 body=60 status=ok
// SIG undefined FUN_14171a7e0(void)

longlong FUN_14171a7e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      return plVar1[0x1f];
    }
  }
  return lVar2;
}



// FUNCTION 14171a820 FUN_14171a820 body=73 status=ok
// SIG undefined FUN_14171a820(void)

undefined8 FUN_14171a820(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0xd0),local_res8,param_2);
  if ((local_res8[0] != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0xd0) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 14171a870 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FDuplicateDataReader::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDuplicateDataReader",0x2a);
  return param_2;
}



// FUNCTION 14171a8b0 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FDuplicateDataWriter::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDuplicateDataWriter",0x2a);
  return param_2;
}



// FUNCTION 14171a8f0 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FObjectReader::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FObjectReader",0x1c);
  return param_2;
}



// FUNCTION 14171a930 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FObjectWriter::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FObjectWriter",0x1c);
  return param_2;
}



// FUNCTION 14171a970 GetBulkDataSize body=24 status=ok
// SIG undefined GetBulkDataSize(void)

int FUntypedBulkData::GetBulkDataSize(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (**(code **)(*param_1 + 8))();
  return iVar2 * iVar1;
}



// FUNCTION 14171a990 FUN_14171a990 body=1454 status=ok
// SIG undefined FUN_14171a990(void)

int * FUN_14171a990(ulonglong param_1,longlong param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  int local_res18 [2];
  longlong local_res20;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88 [2];
  undefined8 *local_78;
  undefined8 **local_70;
  int *local_68;
  undefined8 **local_60;
  longlong local_58;
  undefined8 local_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined7 uStack_3f;
  
  FWeakObjectPtr::operator=(&local_res20);
  local_98 = local_res20;
  TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,local_res18,&local_98);
  if (((local_res18[0] == -1) ||
      (lVar13 = *(longlong *)(param_1 + 8) + (longlong)local_res18[0] * 0x18, lVar13 == 0)) ||
     (piVar9 = *(int **)(lVar13 + 8), piVar9 == (int *)0x0)) {
    FUN_141726870(param_2);
    local_58 = operator_new(0xd0);
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FWeakObjectPtr::operator=(local_58 + 0x10,param_2);
      *(undefined8 *)(local_58 + 0x20) = 0;
      *(undefined8 *)(local_58 + 0x28) = 0;
      *(undefined8 *)(local_58 + 0x30) = 0;
      *(undefined8 *)(local_58 + 0x38) = 0;
      *(undefined8 *)(local_58 + 0x50) = 0;
      *(undefined8 *)(local_58 + 0x58) = 0;
      *(undefined4 *)(local_58 + 0x60) = 0xffffffff;
      *(undefined4 *)(local_58 + 100) = 0;
      *(undefined8 *)(local_58 + 0x70) = 0;
      *(undefined4 *)(local_58 + 0x78) = 0;
      *(undefined8 *)(local_58 + 0x80) = 0;
      *(undefined8 *)(local_58 + 0x88) = 0;
      *(undefined8 *)(local_58 + 0xa0) = 0;
      *(undefined8 *)(local_58 + 0xa8) = 0;
      *(undefined4 *)(local_58 + 0xb0) = 0xffffffff;
      *(undefined4 *)(local_58 + 0xb4) = 0;
      *(undefined8 *)(local_58 + 0xc0) = 0;
      *(undefined4 *)(local_58 + 200) = 0;
    }
    uVar15 = 0;
    FWeakObjectPtr::operator=(&local_98,param_2);
    local_a8 = &local_98;
    local_a0 = &local_58;
    FUN_141711030(param_1 + 8,local_res18,&local_a8,0);
    piVar9 = *(int **)(*(longlong *)(param_1 + 8) + 8 + (longlong)local_res18[0] * 0x18);
    piVar9[2] = 0;
    piVar9[3] = 0;
    *piVar9 = 0;
    piVar9[6] = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      piVar6 = (int *)FUN_14171a990(param_1);
      *(int **)(piVar9 + 2) = piVar6;
      *piVar9 = piVar6[10] + *piVar6;
      piVar9[6] = piVar6[6];
    }
    iVar3 = *(int *)(param_2 + 0xf0);
    piVar9[10] = 0;
    if (piVar9[0xb] != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (piVar9 + 8);
    }
    local_a8 = (longlong *)0x0;
    local_a0 = (longlong *)0x0;
    iVar3 = 0;
    uVar12 = uVar15;
    if (*(int *)(param_2 + 0xf0) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_a8,*(int *)(param_2 + 0xf0));
      iVar3 = *(int *)(param_2 + 0xf0);
      uVar12 = (ulonglong)local_a0 & 0xffffffff;
    }
    local_res18[0] = 0;
    if (0 < iVar3) {
      local_res20 = 0;
      do {
        lVar16 = local_res20;
        lVar13 = *(longlong *)(local_res20 + *(longlong *)(param_2 + 0xe8));
        if (lVar13 == 0) {
LAB_14171ad13:
          uVar4 = 0;
        }
        else {
          lVar7 = UProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar3 = (int)uVar12 + 1;
            local_a0 = (longlong *)CONCAT44(local_a0._4_4_,iVar3);
            if (local_a0._4_4_ < iVar3) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,uVar12);
            }
            local_a8[(int)uVar12] = lVar13;
          }
          lVar7 = UProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            uVar4 = FUN_14171cfa0(param_1,lVar13,0,0);
          }
          else {
            lVar7 = FUN_14171c5d0();
            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_14171ad13;
            local_90 = *(undefined8 *)(lVar13 + 0x18);
            FName::ToString(&local_90,local_88);
            puVar8 = (undefined8 *)FString::ToLower(local_88,&local_68);
            if (*(int *)(puVar8 + 1) == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*puVar8;
            }
            uVar4 = FCrc::StrCrc32<wchar_t>(puVar10,0);
            if (local_68 != (int *)0x0) {
              FMemory::Free();
            }
            if (local_88[0] != (undefined8 *)0x0) {
              FMemory::Free();
            }
            FString::PrintfImpl(&local_78,&DAT_144d04330,*(undefined4 *)(lVar13 + 0x88));
            puVar8 = local_78;
            puVar11 = (undefined8 *)&DAT_143f3eda8;
            if ((int)local_70 != 0) {
              puVar11 = local_78;
            }
            uVar4 = FCrc::StrCrc32<wchar_t>(puVar11,uVar4);
            lVar16 = local_res20;
            if (puVar8 != (undefined8 *)0x0) {
              FMemory::Free(puVar8);
              lVar16 = local_res20;
            }
          }
        }
        iStack_48 = *piVar9 + piVar9[10];
        iVar3 = piVar9[10];
        local_40 = 0;
        piVar9[10] = iVar3 + 1;
        local_50 = lVar13;
        uStack_44 = uVar4;
        if (piVar9[0xb] < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(piVar9 + 8,iVar3);
        }
        lVar13 = *(longlong *)(piVar9 + 8);
        local_res20 = lVar16 + 8;
        uVar12 = (ulonglong)local_a0 & 0xffffffff;
        puVar1 = (undefined4 *)(lVar13 + (longlong)iVar3 * 0x18);
        *puVar1 = (undefined4)local_50;
        puVar1[1] = local_50._4_4_;
        puVar1[2] = iStack_48;
        puVar1[3] = uStack_44;
        *(ulonglong *)(lVar13 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT71(uStack_3f,local_40);
        local_res18[0] = local_res18[0] + 1;
      } while (local_res18[0] < *(int *)(param_2 + 0xf0));
    }
    uVar12 = uVar15;
    if (piVar9[0xb] != piVar9[10]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (piVar9 + 8);
    }
    while( true ) {
      plVar14 = local_a8;
      iVar3 = (int)uVar12;
      if ((iVar3 < 0) || (piVar9[10] <= iVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      local_88[0] = (undefined8 *)(*(longlong *)(piVar9 + 8) + (longlong)iVar3 * 0x18);
      local_90 = *local_88[0];
      local_78 = &local_90;
      local_70 = local_88;
      TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                (piVar9 + 0xc,local_res18,&local_78,0);
      local_88[0] = (undefined8 *)(*(longlong *)(piVar9 + 8) + (longlong)iVar3 * 0x18);
      local_68 = (int *)((longlong)local_88[0] + 0xc);
      if (piVar9[0x22] != piVar9[0x2d]) {
        piVar6 = *(int **)(piVar9 + 0x30);
        if (*(int **)(piVar9 + 0x30) == (int *)0x0) {
          piVar6 = piVar9 + 0x2e;
        }
        iVar5 = piVar6[(longlong)piVar9[0x32] - 1U & (longlong)*local_68];
        if (iVar5 != -1) {
          lVar13 = *(longlong *)(piVar9 + 0x20);
          do {
            if (*(int *)(lVar13 + (longlong)iVar5 * 0x18) == *local_68) break;
            iVar5 = *(int *)(lVar13 + 0x10 + (longlong)iVar5 * 0x18);
          } while (iVar5 != -1);
        }
      }
      local_60 = local_88;
      FUN_141711280(piVar9 + 0x20,&local_res20,&local_68);
      uVar12 = (ulonglong)(iVar3 + 1);
    }
    lVar13 = (longlong)(int)local_a0;
    AlgoImpl::
    IntroSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,_FClassNetCacheMgr::SortProperties_::_2_::FCompareUFieldOffsets>_>
              (local_a8,lVar13,param_1 & 0xff,local_res18);
    uVar12 = (ulonglong)((longlong)(plVar14 + lVar13) + (7 - (longlong)plVar14)) >> 3;
    if (plVar14 + lVar13 < plVar14) {
      uVar12 = uVar15;
    }
    plVar17 = plVar14;
    if (uVar12 != 0) {
      do {
        iVar3 = FUN_14171cfa0(param_1,*plVar14,piVar9[6],1);
        uVar15 = uVar15 + 1;
        piVar9[6] = iVar3;
        plVar14 = plVar14 + 1;
        plVar17 = local_a8;
      } while (uVar15 != uVar12);
    }
    if (plVar17 != (longlong *)0x0) {
      FMemory::Free(plVar17);
    }
  }
  return piVar9;
}



// FUNCTION 14171af40 FUN_14171af40 body=687 status=ok
// SIG undefined FUN_14171af40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14171af40(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  uint in_stack_ffffffffffffff98;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 == 0x1f) {
    *param_2 = 0;
    iVar4 = (int)_DAT_1468e2368;
    _Src = DAT_1468e2360;
  }
  else {
    if (lVar1 != 0x20) {
      if (lVar1 == 0xce) {
        FString::FString(param_2,&DAT_1468e2400);
        return param_2;
      }
      if (lVar1 == 0xdd) {
        FString::FString(param_2,&DAT_1468e2410);
        return param_2;
      }
      if (lVar1 == 0xfb) {
        FString::FString(param_2,&DAT_1468e23a0);
        return param_2;
      }
      if (lVar1 == 600) {
        FString::FString(param_2,&DAT_1468e2390);
        return param_2;
      }
      if (lVar1 == 0x259) {
        FString::FString(param_2,&DAT_1468e2380);
        return param_2;
      }
      if (lVar1 == 0) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x11ed,
                   L"UObject::GetConfigName() called on class with config name \'None\'. Class flags = 0x%08X"
                   ,*(undefined4 *)(param_1 + 0xb4));
        FDebug::AssertFailed
                  (&DAT_144cff11f,"Unknown",0x11ed,
                   L"UObject::GetConfigName() called on class with config name \'None\'. Class flags = 0x%08X"
                   ,*(undefined4 *)(param_1 + 0xb4));
        *param_2 = 0;
        param_2[1] = 0;
        return param_2;
      }
      if (lVar1 == 0x25a) {
        FString::FString(param_2,&DAT_1468e2420);
        return param_2;
      }
      local_48 = 0;
      local_40 = 0;
      puVar2 = (undefined8 *)FPaths::GeneratedConfigDir(local_28);
      puVar5 = &DAT_143f3eda8;
      if (*(int *)(puVar2 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar2;
      }
      puVar2 = (undefined8 *)FName::ToString((longlong *)(param_1 + 0xd0),local_38);
      if (*(int *)(puVar2 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar2;
      }
      FConfigCacheIni::LoadGlobalIniFile
                (&local_48,puVar5,0,0,in_stack_ffffffffffffff98 & 0xffffff00,1,puVar3);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      *param_2 = local_48;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
      return param_2;
    }
    *param_2 = 0;
    iVar4 = (int)DAT_1468e2378;
    _Src = DAT_1468e2370;
  }
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar4,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar4 * 2);
  }
  return param_2;
}



// FUNCTION 14171b1f0 GetCopy body=325 status=ok
// SIG undefined GetCopy(void)

void FUntypedBulkData::GetCopy(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  
  FlushAsyncLoading();
  lVar4 = *param_2;
  if (lVar4 == 0) {
    if ((char)param_1[5] == '\0') {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      iVar3 = (**(code **)(*param_1 + 8))(param_1);
      iVar3 = iVar3 * iVar1;
      if (iVar3 != 0) {
        lVar4 = FMemory::Malloc((longlong)iVar3,*(undefined4 *)((longlong)param_1 + 0x1c));
        *param_2 = lVar4;
        goto LAB_14171b312;
      }
    }
    else {
      if ((param_3 != '\0') &&
         ((cVar2 = CanLoadFromDisk(param_1), cVar2 != '\0' || ((*(byte *)(param_1 + 1) & 8) != 0))))
      {
        lVar4 = param_1[4];
        param_1[4] = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        *param_2 = lVar4;
        ResetAsyncData(param_1);
        return;
      }
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      iVar3 = (**(code **)(*param_1 + 8))(param_1);
      iVar3 = iVar3 * iVar1;
      if (iVar3 != 0) {
        _Dst = (void *)FMemory::Malloc((longlong)iVar3,*(undefined4 *)((longlong)param_1 + 0x1c));
        *param_2 = (longlong)_Dst;
        ::_guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],(longlong)iVar3);
        return;
      }
    }
    *param_2 = 0;
  }
  else {
    if ((char)param_1[5] != '\0') {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      iVar3 = (**(code **)(*param_1 + 8))();
      ::_guard_xfg_dispatch_icall_nop((void *)*param_2,(void *)param_1[4],(longlong)(iVar3 * iVar1))
      ;
      if (param_3 == '\0') {
        return;
      }
      cVar2 = CanLoadFromDisk(param_1);
      if ((cVar2 == '\0') && ((*(byte *)(param_1 + 1) & 8) == 0)) {
        return;
      }
      FMemory::Free(param_1[4]);
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
LAB_14171b312:
    FUN_14171ebf0(param_1,lVar4);
  }
  return;
}



// FUNCTION 14171b340 GetDefaultObjectName body=239 status=ok
// SIG undefined GetDefaultObjectName(void)

undefined8 UClass::GetDefaultObjectName(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res8;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x401);
  uVar2 = local_10;
  iVar1 = (int)local_10;
  lVar4 = (longlong)(int)local_10;
  iVar5 = (10 - (uint)((int)local_10 != 0)) + (int)local_10;
  local_10 = CONCAT44(local_10._4_4_,iVar5);
  if (local_10._4_4_ < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,uVar2 & 0xffffffff);
  }
  builtin_wcsncpy(local_18 + (lVar4 - (ulonglong)(iVar1 != 0)),L"Default__",10);
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::AppendString(&local_res8,&local_18);
  puVar3 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar3 = local_18;
  }
  FName::FName(param_2,puVar3,1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14171b430 GetDefaultObjectSubobjects body=104 status=ok
// SIG undefined GetDefaultObjectSubobjects(void)

void UClass::GetDefaultObjectSubobjects(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x1f];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar1 = param_1[0x1f];
    if (lVar1 == 0) {
      *(undefined4 *)(param_2 + 8) = 0;
      if (*(int *)(param_2 + 0xc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
      }
      return;
    }
  }
  FUN_1417571e0(lVar1,param_2);
  return;
}



// FUNCTION 14171b4a0 FUN_14171b4a0 body=155 status=ok
// SIG undefined FUN_14171b4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14171b4a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7158) {
    _Init_thread_header(&DAT_1469e7158);
    if (DAT_1469e7158 == -1) {
      FFeedbackContext::FFeedbackContext(&DAT_1469e70d0);
      _DAT_1469e7150 = 0;
      _DAT_1469e70d0 = &PTR_FUN_144d064e8;
      DAT_1469e70e0 = 1;
      atexit((_func_5014 *)&LAB_143e7c670);
      _Init_thread_footer(&DAT_1469e7158);
      return &DAT_1469e70d0;
    }
  }
  return &DAT_1469e70d0;
}



// FUNCTION 14171b540 GetDefaultSubobjectByName body=83 status=ok
// SIG undefined GetDefaultSubobjectByName(void)

undefined8 UClass::GetDefaultSubobjectByName(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar2 = param_1[0x1f];
    if (lVar2 == 0) {
      return 0;
    }
  }
  uVar1 = UObject::GetDefaultSubobjectByName(lVar2,param_2);
  return uVar1;
}



// FUNCTION 14171b5a0 FUN_14171b5a0 body=108 status=ok
// SIG undefined FUN_14171b5a0(void)

undefined * FUN_14171b5a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e70b8) {
    _Init_thread_header(&DAT_1469e70b8);
    if (DAT_1469e70b8 == -1) {
      atexit(`GetDeferredCppStructOps'::`2'::_dynamic_atexit_destructor_for__DeferredCppStructOps__)
      ;
      _Init_thread_footer(&DAT_1469e70b8);
      return &DAT_1464b4c10;
    }
  }
  return &DAT_1464b4c10;
}



// FUNCTION 14171b610 GetDestinationObject body=70 status=ok
// SIG undefined GetDestinationObject(void)

undefined8 FObjectInstancingGraph::GetDestinationObject(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x18),local_res8,param_2);
  if ((local_res8[0] != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x18) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}



// FUNCTION 14171b660 GetDuplicatedObject body=550 status=ok
// SIG undefined GetDuplicatedObject(void)

undefined8 *
FDuplicateDataWriter::GetDuplicatedObject(longlong param_1,longlong param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  BOOL BVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  int local_res10 [2];
  
  puVar15 = (undefined8 *)0x0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    puVar13 = puVar15;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar14 = iVar1 >> 0x1f & 0xffff;
      uVar8 = iVar1 + uVar14;
      puVar13 = (undefined8 *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18);
    }
    if ((*(uint *)(puVar13 + 1) >> 0x1d & 1) == 0) {
      lVar11 = *(longlong *)(param_1 + 0x90);
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar11 + 0x58);
      BVar9 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar9 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (param_2 != *(longlong *)(lVar11 + 0x80)) {
        *(longlong *)(lVar11 + 0x80) = param_2;
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar11 + 8,local_res10,param_2);
        puVar13 = puVar15;
        if (local_res10[0] != -1) {
          puVar13 = (undefined8 *)(*(longlong *)(lVar11 + 8) + (longlong)local_res10[0] * 0x18);
        }
        puVar10 = puVar13 + 1;
        if (puVar13 == (undefined8 *)0x0) {
          puVar10 = puVar15;
        }
        if (puVar10 == (undefined8 *)0x0) {
          *(undefined8 *)(lVar11 + 0x88) = 0;
        }
        else {
          *(undefined8 *)(lVar11 + 0x88) = *puVar10;
        }
      }
      puVar13 = *(undefined8 **)(lVar11 + 0x88);
      LeaveCriticalSection(lpCriticalSection);
      if (((puVar13 == (undefined8 *)0x0) && (puVar13 = puVar15, param_3 != '\0')) &&
         (lVar11 = GetDuplicatedObject(param_1,*(undefined8 *)(param_2 + 0x20),1), lVar11 != 0)) {
        iVar1 = *(int *)(param_2 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar14 = iVar1 >> 0x1f & 0xffff;
          uVar8 = iVar1 + uVar14;
          puVar15 = (undefined8 *)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                    (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18);
        }
        uVar8 = *(uint *)(puVar15 + 1);
        uVar14 = *(uint *)(param_1 + 0xa8);
        uVar2 = *(uint *)(param_1 + 0xb0);
        uVar3 = *(uint *)(param_2 + 8);
        uVar4 = *(uint *)(param_1 + 0xb4);
        uVar5 = *(uint *)(param_1 + 0xac);
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        uVar7 = *(undefined8 *)(param_2 + 0x10);
        uVar12 = FUN_14178ca30(param_2);
        puVar13 = (undefined8 *)
                  FUN_1417985e0(uVar7,lVar11,uVar6,uVar14 & uVar3 | uVar5,uVar8 & uVar2 | uVar4,
                                uVar12,1,*(undefined8 *)(param_1 + 0xb8),0);
        AddDuplicate(param_1,param_2,puVar13);
      }
      return puVar13;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14171b890 FUN_14171b890 body=717 status=ok
// SIG undefined FUN_14171b890(void)

longlong *
FUN_14171b890(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,char param_5,
             char param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  uint in_stack_ffffffffffffffa8;
  ulonglong in_stack_ffffffffffffffb0;
  
  plVar9 = (longlong *)&DAT_ffffffffffffffff;
  if (((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) &&
     ((((param_6 != '\0' && (param_2 == (longlong *)*param_1)) ||
       (cVar4 = UObjectBaseUtility::IsIn(param_2,*param_1), cVar4 != '\0')) ||
      ((lVar11 = param_3[4], lVar7 = FUN_14178ca30(param_4), lVar11 == lVar7 &&
       ((param_4 == 0 || (plVar9 = param_2, param_2[4] != param_4)))))))) {
    plVar8 = (longlong *)FObjectInstancingGraph::GetDestinationObject(param_1,param_2);
    plVar9 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      if (param_5 == '\0') {
        if ((param_3 == param_2) || (plVar9 = param_3, param_3[4] != param_4)) {
          cVar4 = (**(code **)(*param_2 + 0xd8))(param_2);
          cVar5 = (**(code **)(*param_2 + 0xe0))(param_2);
          if (((DAT_1468c2172 != '\0') && (cVar4 != '\0')) ||
             ((plVar9 = plVar8, DAT_1468c2173 != '\0' && (cVar5 != '\0')))) {
            lVar11 = param_2[4];
            lVar7 = FObjectInstancingGraph::GetDestinationObject(param_1,lVar11);
            if (lVar7 == 0) {
              in_stack_ffffffffffffffb0 = CONCAT71((int7)(in_stack_ffffffffffffffb0 >> 8),param_6);
              in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffff00;
              lVar7 = FUN_14171b890(param_1,lVar11,lVar11,param_4,in_stack_ffffffffffffffa8,
                                    in_stack_ffffffffffffffb0);
            }
            lVar2 = param_2[3];
            FUN_14178ca30(param_3);
            lVar11 = 0;
            if ((*(uint *)(*(longlong *)(lVar7 + 0x10) + 0xb4) >> 0x12 & 1) == 0) {
              in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffffff00000000;
              in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffff00;
              plVar9 = (longlong *)
                       FUN_141799680(0,lVar7,lVar2,0,in_stack_ffffffffffffffa8,
                                     in_stack_ffffffffffffffb0,0);
              if (plVar9 != (longlong *)0x0) {
                if (*(char *)(param_1 + 2) == '\0') {
                  return plVar9;
                }
                if (*(char *)((longlong)param_1 + 0x12) != '\0') {
                  return plVar9;
                }
              }
            }
            plVar9 = (longlong *)
                     FUN_141799680(0,lVar7,lVar2,1,in_stack_ffffffffffffffa8 & 0xffffff00,
                                   in_stack_ffffffffffffffb0 & 0xffffffff00000000,0);
            if (plVar9 != (longlong *)0x0) {
              for (lVar3 = plVar9[2]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
                if (lVar3 == param_2[2]) goto LAB_14171babf;
              }
              lVar3 = *plVar9;
              uVar10 = GetTransientPackage();
              (**(code **)(lVar3 + 0x138))(plVar9,0,uVar10,0x10);
              iVar1 = *(int *)((longlong)plVar9 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar12 = iVar1 >> 0x1f & 0xffff;
                uVar6 = iVar1 + uVar12;
                lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                         (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
              }
              *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | 0x20000000;
            }
LAB_14171babf:
            uVar12 = *(uint *)(lVar7 + 8) & 0x69;
            uVar6 = uVar12 | 0x40000;
            cVar4 = UObjectBaseUtility::IsTemplate(lVar7,0x30);
            if ((cVar4 == '\0') && ((*(uint *)(param_2 + 1) >> 0x12 & 1) == 0)) {
              uVar6 = uVar12;
            }
            plVar9 = (longlong *)FUN_1417985e0(param_2[2],lVar7,lVar2,uVar6,0,param_2,1,param_1,0);
          }
        }
      }
      else {
        plVar9 = (longlong *)&DAT_ffffffffffffffff;
      }
    }
    else if ((*(char *)((longlong)param_1 + 0x12) != '\0') &&
            ((*(uint *)(plVar8[2] + 0xb4) >> 0x17 & 1) != 0)) {
      UObject::ConditionalPostLoadSubobjects(plVar8,param_1);
    }
  }
  return plVar9;
}



// FUNCTION 14171bb60 FUN_14171bb60 body=517 status=ok
// SIG undefined FUN_14171bb60(void)

byte FUN_14171bb60(uint param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  longlong *plVar9;
  uint *puVar10;
  byte bVar11;
  undefined1 local_res20 [8];
  
  bVar11 = 0;
  plVar9 = (longlong *)0x0;
  if (DAT_1464b4a88 != DAT_1464b4ab4) {
    puVar4 = DAT_1464b4ac0;
    if (DAT_1464b4ac0 == (undefined *)0x0) {
      puVar4 = &DAT_1464b4ab8;
    }
    iVar3 = *(int *)(puVar4 + ((longlong)DAT_1464b4ac8 - 1U & (longlong)(int)param_1) * 4);
    while (iVar3 != -1) {
      lVar7 = (longlong)iVar3 * 0x60;
      if (*(uint *)(lVar7 + DAT_1464b4a80) == param_1) {
        plVar5 = (longlong *)(lVar7 + DAT_1464b4a80);
        if (iVar3 != -1) goto LAB_14171bbfb;
        break;
      }
      iVar3 = *(int *)(lVar7 + DAT_1464b4a80 + 0x58);
    }
  }
  plVar5 = plVar9;
LAB_14171bbfb:
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar9;
  }
  if (plVar6 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_14171d4f0(param_2,local_res20,param_1);
    lVar7 = *plVar5;
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar5 = (longlong *)plVar6[8];
      if ((longlong *)plVar6[8] == (longlong *)0x0) {
        plVar5 = plVar6 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                      (longlong)(int)plVar6[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *plVar6);
          if (*plVar5 == lVar7) {
            if (iVar3 != -1) goto LAB_14171bc82;
            break;
          }
          iVar3 = (int)plVar5[3];
        } while (iVar3 != -1);
      }
    }
    plVar5 = plVar9;
LAB_14171bc82:
    plVar6 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar6 = plVar9;
    }
    if (plVar6 != (longlong *)0x0) {
      puVar8 = (uint *)*plVar6;
      puVar10 = puVar8 + (longlong)(int)plVar6[1] * 0x28;
      for (; puVar8 != puVar10; puVar8 = puVar8 + 0x28) {
        if ((param_1 == *puVar8) &&
           (cVar1 = FCoreRedirectObjectName::Matches(puVar8 + 2,param_2,(byte)(*puVar8 >> 0x12) & 1)
           , cVar1 != '\0')) {
          iVar3 = (int)param_3[1];
          bVar11 = 1;
          *(int *)(param_3 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
          }
          *(uint **)(*param_3 + (longlong)iVar3 * 8) = puVar8;
        }
      }
    }
  }
  if ((~(byte)(param_1 >> 6) & 1) != 0) {
    bVar2 = FUN_14171bb60(0x40,param_2,param_3);
    bVar11 = bVar11 | bVar2;
  }
  if ((~(byte)(param_1 >> 0x12) & 1) == 0) {
    return bVar11;
  }
  bVar2 = FUN_14171bb60(param_1 | 0x40000,param_2,param_3);
  return bVar2 | bVar11;
}



// FUNCTION 14171bd70 FUN_14171bd70 body=102 status=ok
// SIG undefined FUN_14171bd70(void)

int FUN_14171bd70(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146862724) {
    _Init_thread_header(&DAT_146862724);
    if (DAT_146862724 == -1) {
      DAT_146862720 = 0;
      _Init_thread_footer(&DAT_146862724);
    }
  }
  LOCK();
  iVar1 = DAT_146862720;
  DAT_146862720 = DAT_146862720 + 1;
  UNLOCK();
  return iVar1;
}



// FUNCTION 14171bde0 GetOwnerClass body=102 status=ok
// SIG undefined GetOwnerClass(void)

void UField::GetOwnerClass(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    if ((param_1 == 0) || (lVar2 != 0)) {
      return;
    }
    if (param_1 == 0) {
LAB_14171be35:
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar2 = param_1;
      if (!bVar1) goto LAB_14171be35;
    }
    param_1 = *(longlong *)(param_1 + 0x20);
  } while( true );
}



// FUNCTION 14171be50 GetOwnerStruct body=94 status=ok
// SIG undefined GetOwnerStruct(void)

longlong UField::GetOwnerStruct(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0) goto LAB_14171be94;
  while( true ) {
    lVar2 = FUN_14171cb10();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
LAB_14171be94:
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
  }
  return param_1;
}



// FUNCTION 14171bf20 GetPreloadDependencies body=192 status=ok
// SIG undefined GetPreloadDependencies(void)

void UStruct::GetPreloadDependencies(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  
  UObject::GetPreloadDependencies();
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  for (lVar3 = *(longlong *)(param_1 + 0x38); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
    lVar5 = FUN_14171c5d0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
    }
  }
  return;
}



// FUNCTION 14171bfe0 FUN_14171bfe0 body=440 status=ok
// SIG undefined FUN_14171bfe0(void)

longlong * FUN_14171bfe0(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_1469e7190 == (longlong *)0x0) {
    uVar2 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    DAT_1469e7190 = (longlong *)uVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"Class",1);
    uVar7 = 0;
    DAT_1469e7190 =
         (longlong *)
         FUN_141714460(uVar2,0,*puVar3,0x200,CONCAT44(uVar6,0x10000000),0x20,L"Engine",199,
                       &LAB_141712260,InternalVTableHelperCtorCaller<UClass>,FUN_1417169e0);
    lVar4 = UPackage::GetPrivateStaticClass();
    plVar1 = DAT_1469e7190;
    plVar5 = (longlong *)FUN_14171cb10();
    uVar7 = uVar7 & 0xffffffffffffff00;
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Class",0,1,0,uVar7);
    if (plVar5 == plVar1) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,plVar5);
    plVar1[0x18] = lVar4;
    (**(code **)(*plVar1 + 8))(plVar1);
    if ((*(uint *)(plVar1 + 1) >> 0x1a & 1) == 0) {
      UObjectBase::Register(plVar1,L"/Script/CoreUObject",L"Class");
    }
    else {
      lVar4 = *plVar1;
      uVar2 = UDynamicClass::GetPrivateStaticClass();
      (**(code **)(lVar4 + 0x10))(plVar1,uVar2,L"/Script/CoreUObject",L"Class");
    }
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Class",0,2,0,uVar7 & 0xffffffffffffff00);
  }
  return DAT_1469e7190;
}



// FUNCTION 14171c1a0 FUN_14171c1a0 body=446 status=ok
// SIG undefined FUN_14171c1a0(void)

longlong * FUN_14171c1a0(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_1469e7250 == (longlong *)0x0) {
    uVar2 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    DAT_1469e7250 = (longlong *)uVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"DelegateFunction",1);
    uVar7 = 0x100000000000;
    DAT_1469e7250 =
         (longlong *)
         FUN_141714460(uVar2,0,*puVar3,0xb8,CONCAT44(uVar6,0x10000000),0x100000000000,L"Engine",199,
                       InternalConstructor<UDelegateFunction>,FUN_141712540,
                       AK::MemoryMgr::StartProfileThreadUsage);
    lVar4 = UObject::GetPrivateStaticClass();
    plVar1 = DAT_1469e7250;
    plVar5 = (longlong *)FUN_14171c5d0();
    uVar7 = uVar7 & 0xffffffffffffff00;
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"DelegateFunction",0,1,0,uVar7);
    if (plVar5 == plVar1) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,plVar5);
    plVar1[0x18] = lVar4;
    (**(code **)(*plVar1 + 8))(plVar1);
    if ((*(uint *)(plVar1 + 1) >> 0x1a & 1) == 0) {
      UObjectBase::Register(plVar1,L"/Script/CoreUObject",L"DelegateFunction");
    }
    else {
      lVar4 = *plVar1;
      uVar2 = UDynamicClass::GetPrivateStaticClass();
      (**(code **)(lVar4 + 0x10))(plVar1,uVar2,L"/Script/CoreUObject",L"DelegateFunction");
    }
    NotifyRegistrationEvent
              (L"/Script/CoreUObject",L"DelegateFunction",0,2,0,uVar7 & 0xffffffffffffff00);
  }
  return DAT_1469e7250;
}



// FUNCTION 14171c360 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDynamicClass::GetPrivateStaticClass(void)

{
  if (DAT_1469e7260 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"DynamicClass",&DAT_1469e7260,
                  AK::MemoryMgr::StartProfileThreadUsage,0x268,0x10000000,0,L"Engine",
                  InternalConstructor<UDynamicClass>,InternalVTableHelperCtorCaller<UDynamicClass>,
                  AddReferencedObjects,FUN_14171bfe0,UPackage::StaticClass,0);
  }
  return DAT_1469e7260;
}



// FUNCTION 14171c410 FUN_14171c410 body=440 status=ok
// SIG undefined FUN_14171c410(void)

longlong * FUN_14171c410(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_1469e7090 == (longlong *)0x0) {
    uVar2 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    DAT_1469e7090 = (longlong *)uVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"Field",1);
    uVar7 = 0;
    DAT_1469e7090 =
         (longlong *)
         FUN_141714460(uVar2,0,*puVar3,0x30,CONCAT44(uVar6,0x10000001),1,L"Engine",199,FUN_141712350
                       ,InternalVTableHelperCtorCaller<UInterface>,
                       AK::MemoryMgr::StartProfileThreadUsage);
    lVar4 = UObject::GetPrivateStaticClass();
    plVar5 = (longlong *)UObject::GetPrivateStaticClass();
    plVar1 = DAT_1469e7090;
    uVar7 = uVar7 & 0xffffffffffffff00;
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Field",0,1,0,uVar7);
    if (plVar5 == plVar1) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,plVar5);
    plVar1[0x18] = lVar4;
    (**(code **)(*plVar1 + 8))(plVar1);
    if ((*(uint *)(plVar1 + 1) >> 0x1a & 1) == 0) {
      UObjectBase::Register(plVar1,L"/Script/CoreUObject",L"Field");
    }
    else {
      lVar4 = *plVar1;
      uVar2 = UDynamicClass::GetPrivateStaticClass();
      (**(code **)(lVar4 + 0x10))(plVar1,uVar2,L"/Script/CoreUObject",L"Field");
    }
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Field",0,2,0,uVar7 & 0xffffffffffffff00);
  }
  return DAT_1469e7090;
}



// FUNCTION 14171c5d0 FUN_14171c5d0 body=440 status=ok
// SIG undefined FUN_14171c5d0(void)

longlong * FUN_14171c5d0(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_1469e7240 == (longlong *)0x0) {
    uVar2 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    DAT_1469e7240 = (longlong *)uVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"Function",1);
    uVar7 = 0x80000;
    DAT_1469e7240 =
         (longlong *)
         FUN_141714460(uVar2,0,*puVar3,0xb8,CONCAT44(uVar6,0x10000000),0x80000,L"Engine",199,
                       InternalConstructor<UDelegateFunction>,FUN_141712750,
                       AK::MemoryMgr::StartProfileThreadUsage);
    lVar4 = FUN_14171bfe0();
    plVar1 = DAT_1469e7240;
    plVar5 = (longlong *)FUN_14171cb10();
    uVar7 = uVar7 & 0xffffffffffffff00;
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Function",0,1,0,uVar7);
    if (plVar5 == plVar1) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,plVar5);
    plVar1[0x18] = lVar4;
    (**(code **)(*plVar1 + 8))(plVar1);
    if ((*(uint *)(plVar1 + 1) >> 0x1a & 1) == 0) {
      UObjectBase::Register(plVar1,L"/Script/CoreUObject",L"Function");
    }
    else {
      lVar4 = *plVar1;
      uVar2 = UDynamicClass::GetPrivateStaticClass();
      (**(code **)(lVar4 + 0x10))(plVar1,uVar2,L"/Script/CoreUObject",L"Function");
    }
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Function",0,2,0,uVar7 & 0xffffffffffffff00);
  }
  return DAT_1469e7240;
}



// FUNCTION 14171c790 FUN_14171c790 body=440 status=ok
// SIG undefined FUN_14171c790(void)

longlong * FUN_14171c790(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_1469e7270 == (longlong *)0x0) {
    uVar2 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    DAT_1469e7270 = (longlong *)uVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"PackageMap",1);
    uVar7 = 0;
    DAT_1469e7270 =
         (longlong *)
         FUN_141714460(uVar2,0,*puVar3,0xe0,CONCAT44(uVar6,0x10000009),0,L"Engine",199,
                       InternalConstructor<UPackageMap>,InternalVTableHelperCtorCaller<UPackageMap>,
                       AK::MemoryMgr::StartProfileThreadUsage);
    lVar4 = UObject::GetPrivateStaticClass();
    plVar5 = (longlong *)UObject::GetPrivateStaticClass();
    plVar1 = DAT_1469e7270;
    uVar7 = uVar7 & 0xffffffffffffff00;
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"PackageMap",0,1,0,uVar7);
    if (plVar5 == plVar1) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,plVar5);
    plVar1[0x18] = lVar4;
    (**(code **)(*plVar1 + 8))(plVar1);
    if ((*(uint *)(plVar1 + 1) >> 0x1a & 1) == 0) {
      UObjectBase::Register(plVar1,L"/Script/CoreUObject",L"PackageMap");
    }
    else {
      lVar4 = *plVar1;
      uVar2 = UDynamicClass::GetPrivateStaticClass();
      (**(code **)(lVar4 + 0x10))(plVar1,uVar2,L"/Script/CoreUObject",L"PackageMap");
    }
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"PackageMap",0,2,0,uVar7 & 0xffffffffffffff00);
  }
  return DAT_1469e7270;
}



// FUNCTION 14171c950 FUN_14171c950 body=440 status=ok
// SIG undefined FUN_14171c950(void)

longlong * FUN_14171c950(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_1469e70c0 == (longlong *)0x0) {
    uVar2 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    DAT_1469e70c0 = (longlong *)uVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"ScriptStruct",1);
    uVar7 = 0;
    DAT_1469e70c0 =
         (longlong *)
         FUN_141714460(uVar2,0,*puVar3,0x98,CONCAT44(uVar6,0x10000000),0x10,L"Engine",199,
                       InternalConstructor<UScriptStruct>,FUN_1417128f0,
                       AK::MemoryMgr::StartProfileThreadUsage);
    lVar4 = UObject::GetPrivateStaticClass();
    plVar1 = DAT_1469e70c0;
    plVar5 = (longlong *)FUN_14171cb10();
    uVar7 = uVar7 & 0xffffffffffffff00;
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"ScriptStruct",0,1,0,uVar7);
    if (plVar5 == plVar1) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,plVar5);
    plVar1[0x18] = lVar4;
    (**(code **)(*plVar1 + 8))(plVar1);
    if ((*(uint *)(plVar1 + 1) >> 0x1a & 1) == 0) {
      UObjectBase::Register(plVar1,L"/Script/CoreUObject",L"ScriptStruct");
    }
    else {
      lVar4 = *plVar1;
      uVar2 = UDynamicClass::GetPrivateStaticClass();
      (**(code **)(lVar4 + 0x10))(plVar1,uVar2,L"/Script/CoreUObject",L"ScriptStruct");
    }
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"ScriptStruct",0,2,0,uVar7 & 0xffffffffffffff00)
    ;
  }
  return DAT_1469e70c0;
}



// FUNCTION 14171cb10 FUN_14171cb10 body=440 status=ok
// SIG undefined FUN_14171cb10(void)

longlong * FUN_14171cb10(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (DAT_1469e70a8 == (longlong *)0x0) {
    uVar2 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    DAT_1469e70a8 = (longlong *)uVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,L"Struct",1);
    uVar7 = 0;
    DAT_1469e70a8 =
         (longlong *)
         FUN_141714460(uVar2,0,*puVar3,0x88,CONCAT44(uVar6,0x10000000),8,L"Engine",199,
                       InternalConstructor<UStruct>,InternalVTableHelperCtorCaller<UStruct>,
                       AK::MemoryMgr::StartProfileThreadUsage);
    lVar4 = UObject::GetPrivateStaticClass();
    plVar1 = DAT_1469e70a8;
    plVar5 = (longlong *)FUN_14171c410();
    uVar7 = uVar7 & 0xffffffffffffff00;
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Struct",0,1,0,uVar7);
    if (plVar5 == plVar1) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,plVar5);
    plVar1[0x18] = lVar4;
    (**(code **)(*plVar1 + 8))(plVar1);
    if ((*(uint *)(plVar1 + 1) >> 0x1a & 1) == 0) {
      UObjectBase::Register(plVar1,L"/Script/CoreUObject",L"Struct");
    }
    else {
      lVar4 = *plVar1;
      uVar2 = UDynamicClass::GetPrivateStaticClass();
      (**(code **)(lVar4 + 0x10))(plVar1,uVar2,L"/Script/CoreUObject",L"Struct");
    }
    NotifyRegistrationEvent(L"/Script/CoreUObject",L"Struct",0,2,0,uVar7 & 0xffffffffffffff00);
  }
  return DAT_1469e70a8;
}



// FUNCTION 14171ccd0 FUN_14171ccd0 body=705 status=ok
// SIG undefined FUN_14171ccd0(void)

void FUN_14171ccd0(undefined8 param_1,undefined8 param_2,longlong *param_3,
                  code *UNRECOVERED_JUMPTABLE,undefined4 param_5,undefined4 param_6,
                  ulonglong param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
                  undefined8 param_11,code *param_12,code *param_13,char param_14)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_res18 [8];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_14 == '\0') {
    lVar1 = FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x200,8,1);
    *param_3 = lVar1;
    puVar2 = (undefined8 *)FName::FName(local_res18,param_2,1);
    puVar2 = (undefined8 *)
             FUN_141714460(lVar1,0,*puVar2,param_5,CONCAT44(uVar7,param_6),param_7,param_8,199,
                           param_9,param_10,param_11);
  }
  else {
    puVar2 = (undefined8 *)FUObjectAllocator::AllocateUObject(&DAT_1469e8ef0,0x268,8,DAT_1464aaa49);
    *param_3 = (longlong)puVar2;
    bVar6 = DAT_1464aaa49 != '\0';
    puVar3 = (undefined8 *)FName::FName(local_res18,param_2,1);
    FUN_141714460(puVar2,0,*puVar3,param_5,CONCAT44(uVar7,param_6),param_7,param_8,
                  -(uint)bVar6 & 0x80 | 0x4000043,param_9,param_10,param_11);
    *puVar2 = &PTR__scalar_deleting_destructor__144d05590;
    puVar2[0x40] = 0;
    puVar2[0x41] = 0;
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[0x46] = 0;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    puVar2[0x4a] = 0;
    puVar2[0x4b] = 0;
    puVar2[0x4c] = 0;
  }
  *param_3 = (longlong)puVar2;
  lVar1 = (*param_13)();
  param_3 = (longlong *)*param_3;
  plVar4 = (longlong *)(*param_12)();
  param_7 = param_7 & 0xffffffffffffff00;
  NotifyRegistrationEvent(param_1,param_2,0,1,0,param_7);
  if (plVar4 == param_3) {
    plVar4 = (longlong *)0x0;
  }
  (**(code **)(*param_3 + 0x2c8))(param_3,plVar4);
  param_3[0x18] = lVar1;
  (**(code **)(*param_3 + 8))(param_3);
  if ((*(uint *)(param_3 + 1) >> 0x1a & 1) == 0) {
    UObjectBase::Register(param_3,param_1,param_2);
  }
  else {
    lVar1 = *param_3;
    uVar5 = UDynamicClass::GetPrivateStaticClass();
    (**(code **)(lVar1 + 0x10))(param_3,uVar5,param_1,param_2);
  }
  NotifyRegistrationEvent(param_1,param_2,0,2,0,param_7 & 0xffffffffffffff00);
                    /* WARNING: Could not recover jumptable at 0x00014171cf8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14171cfa0 FUN_14171cfa0 body=862 status=ok
// SIG undefined FUN_14171cfa0(void)

undefined4 FUN_14171cfa0(longlong param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong local_res10;
  undefined4 local_res20 [2];
  undefined8 *local_98;
  int local_90;
  int local_8c;
  undefined2 *local_88;
  int local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  puVar9 = &DAT_143f3eda8;
  while( true ) {
    local_res10 = param_2[3];
    FName::ToString(&local_res10,&local_98);
    puVar3 = (undefined8 *)FString::ToLower(&local_98,local_78);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar3;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>(puVar6,param_3);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_98 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    uVar4 = (**(code **)(*param_2 + 0x298))(param_2,&local_58,0,0);
    puVar3 = (undefined8 *)FString::ToLower(uVar4,local_68);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar3;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>(puVar6,uVar2);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_88,&DAT_144d03074,(int)param_2[6]);
    puVar6 = local_88;
    puVar7 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar7 = local_88;
    }
    param_3 = FCrc::StrCrc32<wchar_t>(puVar7,uVar2);
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
    if (param_4 == '\0') break;
    lVar5 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar5 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return param_3;
      }
      local_res10 = *(longlong *)(param_2[0xe] + 0x18);
      FName::ToString(&local_res10,&local_88);
      puVar3 = (undefined8 *)FString::ToLower(&local_88,&local_58);
      if (*(int *)(puVar3 + 1) != 0) {
        puVar9 = (undefined2 *)*puVar3;
      }
      uVar2 = FCrc::StrCrc32<wchar_t>(puVar9,param_3);
      local_res20[0] = uVar2;
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_88 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar12 = 0;
      uVar13 = 0;
      puVar3 = (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      local_8c = 0;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      local_58 = param_2[0xe];
      if (local_58 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = *(longlong *)(local_58 + 0x38);
      }
      local_48 = 0xffffffff;
      local_44 = 0x101;
      local_42 = 0;
      FUN_140472e10(&local_58);
      iVar11 = iVar12;
      lVar5 = local_50;
      while (local_50 = lVar5, lVar5 != 0) {
        if ((*(uint *)(lVar5 + 0x38) & 0x80000000) == 0) {
          local_90 = iVar12 + 1;
          if (iVar11 < local_90) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar12);
            puVar3 = local_98;
            iVar11 = local_8c;
          }
          puVar3[iVar12] = lVar5;
          iVar12 = local_90;
        }
        local_50 = *(longlong *)(lVar5 + 0x28);
        FUN_140472e10(&local_58);
        uVar2 = local_res20[0];
        lVar5 = local_50;
      }
      AlgoImpl::
      IntroSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,_FClassNetCacheMgr::SortProperties_::_2_::FCompareUFieldOffsets>_>
                (puVar3,(longlong)iVar12,(undefined1)local_res20[0],local_res20);
      uVar10 = (ulonglong)((longlong)(puVar3 + iVar12) + (7 - (longlong)puVar3)) >> 3;
      if (puVar3 + iVar12 < puVar3) {
        uVar10 = uVar13;
      }
      puVar8 = puVar3;
      if (uVar10 != 0) {
        do {
          uVar2 = FUN_14171cfa0(param_1,*puVar8,uVar2,1);
          uVar13 = uVar13 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar13 != uVar10);
      }
      if (puVar3 != (undefined8 *)0x0) {
        FMemory::Free(puVar3);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      return uVar2;
    }
    param_2 = (longlong *)param_2[0xe];
  }
  return param_3;
}



// FUNCTION 14171d300 GetRedirectedName body=54 status=ok
// SIG undefined GetRedirectedName(void)

undefined8 *
FCoreRedirects::GetRedirectedName(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_141720cb0(param_2,param_3,param_1,0);
  return param_1;
}



// FUNCTION 14171d340 GetRestoreForUObjectOverwrite body=285 status=ok
// SIG undefined GetRestoreForUObjectOverwrite(void)

undefined8 * UClass::GetRestoreForUObjectOverwrite(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)operator_new(0x60);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR__scalar_deleting_destructor__144d064d8;
  puVar2[2] = *(undefined8 *)(param_1 + 0xc0);
  puVar2[3] = *(undefined8 *)(param_1 + 200);
  lVar3 = *(longlong *)(param_1 + 0xf8);
  if ((lVar3 == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    lVar3 = 0;
  }
  puVar2[4] = lVar3;
  *(uint *)(puVar2 + 5) = *(uint *)(param_1 + 0xb4) & 1;
  puVar2[6] = *(undefined8 *)(param_1 + 0xb8);
  puVar2[7] = *(undefined8 *)(param_1 + 0x98);
  puVar2[8] = *(undefined8 *)(param_1 + 0xa0);
  puVar2[9] = *(undefined8 *)(param_1 + 0xa8);
  puVar2[10] = 0;
  iVar1 = *(int *)(param_1 + 0x1f0);
  _Src = *(void **)(param_1 + 0x1e8);
  *(int *)(puVar2 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
    return puVar2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 10,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)puVar2[10],_Src,(longlong)iVar1 << 4);
  return puVar2;
}



// FUNCTION 14171d460 GetReturnProperty body=131 status=ok
// SIG undefined GetReturnProperty(void)

longlong UFunction::GetReturnProperty(longlong param_1)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(longlong *)(param_1 + 0x38);
  }
  local_18 = 0xffffffff;
  local_14 = 0x101;
  local_12 = 0;
  local_28 = param_1;
  FUN_140472e10(&local_28);
  while ((local_20 != 0 && ((char)*(ulonglong *)(local_20 + 0x38) < '\0'))) {
    if ((*(ulonglong *)(local_20 + 0x38) >> 10 & 1) != 0) {
      return local_20;
    }
    local_20 = *(longlong *)(local_20 + 0x28);
    FUN_140472e10(&local_28);
  }
  return 0;
}



// FUNCTION 14171d4f0 FUN_14171d4f0 body=167 status=ok
// SIG undefined FUN_14171d4f0(void)

undefined8 * FUN_14171d4f0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  if ((param_3 >> 0x12 & 1) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1469e7088) {
      _Init_thread_header(&DAT_1469e7088);
      if (DAT_1469e7088 == -1) {
        FName::FName(&DAT_1469e7080,L"*SUBSTRING*",1);
        _Init_thread_footer(&DAT_1469e7088);
      }
    }
    *param_2 = DAT_1469e7080;
    return param_2;
  }
  if ((param_3 & 0x40) != 0) {
    *param_2 = param_1[2];
    return param_2;
  }
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14171d5a0 GetStructCPPName body=90 status=ok
// SIG undefined GetStructCPPName(void)

undefined8 UScriptStruct::GetStructCPPName(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  int local_10;
  
  local_res8[0] = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(local_res8,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,&DAT_144cff4b0,puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14171d600 GetValueRedirects body=72 status=ok
// SIG undefined GetValueRedirects(void)

longlong FCoreRedirects::GetValueRedirects(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_res18[0] = 0;
  FUN_141720cb0(param_1,param_2,&local_28,local_res18);
  if ((local_res18[0] == 0) ||
     (lVar1 = local_res18[0] + 0x50,
     *(int *)(local_res18[0] + 0x58) - *(int *)(local_res18[0] + 0x84) < 1)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14171d650 FUN_14171d650 body=219 status=ok
// SIG undefined FUN_14171d650(void)

void FUN_14171d650(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  lVar1 = *param_1;
  local_res10 = param_1;
  if (lVar1 != 0) {
    lVar3 = ULinkerPlaceholderClass::GetPrivateStaticClass();
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
      FUN_14058cbf0(lVar1 + 0x318,local_res8,&local_res10,0);
      return;
    }
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
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
      FUN_14058cbf0(lVar1 + 0x1d0,local_res8,&local_res10,0);
    }
  }
  return;
}



// FUNCTION 14171d730 HasProperty body=117 status=ok
// SIG undefined HasProperty(void)

bool UClass::HasProperty(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_14171bfe0();
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
      lVar3 = UObjectBaseUtility::FindNearestCommonBaseClass(lVar3,param_1);
      return lVar3 != 0;
    }
  }
  return false;
}



// FUNCTION 14171d7b0 FUN_14171d7b0 body=342 status=ok
// SIG undefined FUN_14171d7b0(void)

undefined8 FUN_14171d7b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7280) {
    _Init_thread_header(&DAT_1469e7280);
    if (DAT_1469e7280 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464b4c60,0);
      FGenericPlatformString::Memcpy(DAT_1464b4c60,L"\"\' ,|&!~\n\r\t@#(){}[]=;^%$`",0x34);
      atexit((_func_5014 *)&LAB_143e7c680);
      _Init_thread_footer(&DAT_1469e7280);
    }
  }
  uVar2 = FName::ToString(param_1,local_18);
  cVar1 = FName::IsValidXName(uVar2,&DAT_1464b4c60,0,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    uVar2 = FName::ToString(param_1 + 8,local_18);
    cVar1 = FName::IsValidXName(uVar2,&DAT_1464b4c60,0,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      uVar2 = FName::ToString(param_1 + 0x10,local_18);
      cVar1 = FName::IsValidXName(uVar2,&DAT_1464b4c60,0,0);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14171d910 ImplementsInterface body=138 status=ok
// SIG undefined ImplementsInterface(void)

ulonglong UClass::ImplementsInterface(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong in_RAX;
  int iVar3;
  
  if (((param_2 != 0) &&
      (uVar2 = *(uint *)(param_2 + 0xb4) >> 0xe, in_RAX = (ulonglong)uVar2, (uVar2 & 1) != 0)) &&
     (in_RAX = UInterface::GetPrivateStaticClass(), param_2 != in_RAX)) {
    for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x30)) {
      for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x1a8))); iVar3 = iVar3 + 1) {
        for (uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar3 * 0x10);
            uVar1 != 0; uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
          if (uVar1 == param_2) {
            return CONCAT71((int7)(uVar1 >> 8),1);
          }
        }
        in_RAX = 0;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14171d9a0 FUN_14171d9a0 body=916 status=ok
// SIG undefined FUN_14171d9a0(void)

wint_t * FUN_14171d9a0(longlong param_1,wint_t *param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5,undefined8 param_6,undefined8 *param_7,char param_8)

{
  wint_t *pwVar1;
  char cVar2;
  wint_t wVar3;
  int iVar4;
  int iVar5;
  wint_t *pwVar6;
  wchar_t *pwVar7;
  wint_t *pwVar8;
  wint_t *pwVar9;
  undefined *puVar10;
  undefined2 *puVar11;
  wint_t *local_res10;
  longlong local_38;
  undefined8 local_30;
  
  local_res10 = param_2;
  if (((param_8 != '\0') && ((*(uint *)(param_1 + 0x88) & 0x20000) != 0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xd0))
                        (*(longlong **)(param_1 + 0x90),&local_res10,param_3,param_5,param_4,param_6
                        ), cVar2 != '\0')) {
    return local_res10;
  }
  pwVar6 = local_res10 + 1;
  pwVar8 = (wint_t *)0x0;
  local_38 = 0;
  local_30 = 0;
  if (*local_res10 == 0x28) {
    if (*pwVar6 != 0x29) {
      do {
        pwVar6 = (wint_t *)
                 FUN_141758b20(pwVar6,param_3,param_1,param_4,param_5 | 2,param_6,&local_38);
        iVar4 = iswspace(*pwVar6);
        while (iVar4 != 0) {
          pwVar9 = pwVar6 + 1;
          pwVar6 = pwVar6 + 1;
          iVar4 = iswspace(*pwVar9);
        }
        wVar3 = *pwVar6;
        pwVar9 = pwVar8;
        if (wVar3 != 0) {
          do {
            iVar4 = (int)pwVar9;
            if (((wVar3 == 0xd) || (wVar3 == 10)) ||
               ((iVar4 < 1 && ((wVar3 == 0x29 || (wVar3 == 0x2c)))))) break;
            iVar5 = iswspace(wVar3);
            while (iVar5 != 0) {
              pwVar1 = pwVar6 + 1;
              pwVar6 = pwVar6 + 1;
              iVar5 = iswspace(*pwVar1);
            }
            wVar3 = *pwVar6;
            if (wVar3 == 0x22) {
              while( true ) {
                wVar3 = pwVar6[1];
                pwVar6 = pwVar6 + 1;
                if (wVar3 == 0) break;
                if (wVar3 == 0x22) goto LAB_14171db88;
                if ((wVar3 == 10) || (wVar3 == 0xd)) break;
              }
              if (wVar3 != 0x22) {
                if (*(int *)(param_7 + 1) == 0) {
                  puVar11 = &DAT_143f3eda8;
                }
                else {
                  puVar11 = (undefined2 *)*param_7;
                }
                puVar10 = &DAT_144cfe38c;
                pwVar7 = L"%sImportText (%s): Bad quoted string at: %s";
                goto LAB_14171dcee;
              }
            }
            else if (wVar3 == 0x28) {
              pwVar9 = (wint_t *)(ulonglong)(iVar4 + 1);
            }
            else if ((wVar3 == 0x29) &&
                    (pwVar9 = (wint_t *)(ulonglong)(iVar4 - 1U), (int)(iVar4 - 1U) < 0)) {
              if (*(int *)(param_7 + 1) == 0) {
                puVar11 = &DAT_143f3eda8;
              }
              else {
                puVar11 = (undefined2 *)*param_7;
              }
              puVar10 = &DAT_144cfe3fc;
              pwVar7 = L"%sImportText (%s): Too many closing parenthesis in: %s";
              pwVar6 = local_res10;
              goto LAB_14171dcee;
            }
LAB_14171db88:
            iVar4 = (int)pwVar9;
            wVar3 = pwVar6[1];
            pwVar6 = pwVar6 + 1;
          } while (wVar3 != 0);
          if (0 < iVar4) {
            if (*(int *)(param_7 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*param_7;
            }
            puVar10 = &DAT_144cfe45c;
            pwVar7 = L"%sImportText(%s): Not enough closing parenthesis in: %s";
            pwVar6 = local_res10;
            goto LAB_14171dcee;
          }
        }
        wVar3 = *pwVar6;
        if (wVar3 == 0x2c) {
          wVar3 = pwVar6[1];
          pwVar6 = pwVar6 + 1;
        }
        else if (wVar3 != 0x29) {
          if (*(int *)(param_7 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*param_7;
          }
          puVar10 = &DAT_144cfe4cc;
          pwVar7 = L"%sImportText (%s): Missing closing parenthesis: %s";
          pwVar6 = local_res10;
          goto LAB_14171dcee;
        }
        iVar4 = iswspace(wVar3);
        while (iVar4 != 0) {
          pwVar9 = pwVar6 + 1;
          pwVar6 = pwVar6 + 1;
          iVar4 = iswspace(*pwVar9);
        }
      } while (*pwVar6 != 0x29);
    }
    pwVar8 = pwVar6 + 1;
  }
  else {
    if (*(int *)(param_7 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_7;
    }
    puVar10 = &DAT_144cfe52c;
    pwVar7 = L"%sImportText (%s): Missing opening parenthesis: %s";
    pwVar6 = local_res10;
LAB_14171dcee:
    FOutputDevice::LogfImpl(param_6,pwVar7,puVar10,puVar11,pwVar6);
  }
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  return pwVar8;
}



// FUNCTION 14171dd50 InitializeDerivedMembers body=274 status=ok
// SIG undefined InitializeDerivedMembers(void)

void UFunction::InitializeDerivedMembers(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xffff0000;
  if (lVar3 != 0) {
    lVar2 = UProperty::GetPrivateStaticClass();
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
      do {
        if ((char)*(ulonglong *)(lVar3 + 0x38) < '\0') {
          *(char *)(param_1 + 0x8c) = *(char *)(param_1 + 0x8c) + '\x01';
          *(short *)(param_1 + 0x8e) =
               *(short *)(lVar3 + 0x34) * *(short *)(lVar3 + 0x30) + *(short *)(lVar3 + 0x44);
          if ((*(uint *)(lVar3 + 0x38) >> 10 & 1) != 0) {
            *(short *)(param_1 + 0x90) = (short)*(undefined4 *)(lVar3 + 0x44);
          }
        }
        else {
          if ((*(uint *)(param_1 + 0x88) & 0x800000) == 0) {
            return;
          }
          if ((*(ulonglong *)(lVar3 + 0x38) >> 9 & 1) == 0) {
            *(longlong *)(param_1 + 0x98) = lVar3;
            return;
          }
        }
        lVar3 = *(longlong *)(lVar3 + 0x28);
        if (lVar3 == 0) {
          return;
        }
        lVar2 = UProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      } while (bVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14171de70 FUN_14171de70 body=39 status=ok
// SIG undefined FUN_14171de70(void)

void FUN_14171de70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144d04640;
    return;
  }
  return;
}



// FUNCTION 14171dea0 FUN_14171dea0 body=313 status=ok
// SIG undefined FUN_14171dea0(void)

void FUN_14171dea0(longlong param_1,void *param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  void *pvVar6;
  int iVar7;
  
  uVar4 = *(int *)(param_1 + 0x40) + -1 + *(int *)(param_1 + 0x44) & -*(int *)(param_1 + 0x44);
  _guard_xfg_dispatch_icall_nop(param_2,0,(longlong)(int)(uVar4 * param_3));
  plVar1 = *(longlong **)(param_1 + 0x90);
  iVar7 = 0;
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((cVar3 == '\0') && (uVar5 = (ulonglong)param_3, 0 < (int)param_3)) {
      do {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    iVar7 = (int)plVar1[1];
  }
  if (iVar7 < *(int *)(param_1 + 0x40)) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    bVar2 = false;
    while ((plVar1 != (longlong *)0x0 && (!bVar2))) {
      if (iVar7 < (int)plVar1[6] * *(int *)((longlong)plVar1 + 0x34) +
                  *(int *)((longlong)plVar1 + 0x44)) {
        bVar2 = false;
        if (0 < (int)param_3) {
          uVar5 = (ulonglong)param_3;
          pvVar6 = param_2;
          do {
            if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
              (**(code **)(*plVar1 + 0x330))(plVar1);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)*(int *)((longlong)plVar1 + 0x44) + (longlong)pvVar6),0,
                         (longlong)((int)plVar1[6] * *(int *)((longlong)plVar1 + 0x34)));
            }
            pvVar6 = (void *)((longlong)pvVar6 + (longlong)(int)uVar4);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        bVar2 = true;
      }
      plVar1 = (longlong *)plVar1[10];
    }
  }
  return;
}



// FUNCTION 14171dfe0 FUN_14171dfe0 body=232 status=ok
// SIG undefined FUN_14171dfe0(void)

void FUN_14171dfe0(longlong param_1,void *param_2,uint param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  void *pvVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + 0x40) + -1 + *(int *)(param_1 + 0x44) & -*(int *)(param_1 + 0x44);
  _guard_xfg_dispatch_icall_nop(param_2,0,(longlong)(int)uVar4);
  for (plVar1 = *(longlong **)(param_1 + 0x58);
      (plVar1 != (longlong *)0x0 &&
      ((int)plVar1[6] * *(int *)((longlong)plVar1 + 0x34) + *(int *)((longlong)plVar1 + 0x44) <=
       (int)uVar4)); plVar1 = (longlong *)plVar1[10]) {
    uVar2 = (ulonglong)param_3;
    pvVar3 = param_2;
    if (0 < (int)param_3) {
      do {
        if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar1 + 0x330))(plVar1);
        }
        else {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)*(int *)((longlong)plVar1 + 0x44) + (longlong)pvVar3),0,
                     (longlong)((int)plVar1[6] * *(int *)((longlong)plVar1 + 0x34)));
        }
        uVar2 = uVar2 - 1;
        pvVar3 = (void *)((longlong)pvVar3 + (longlong)(int)uVar4);
      } while (uVar2 != 0);
    }
  }
  return;
}



// FUNCTION 14171e0d0 FUN_14171e0d0 body=503 status=ok
// SIG undefined FUN_14171e0d0(void)

longlong FUN_14171e0d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      undefined8 param_5,char param_6,char param_7)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 local_res8 [8];
  longlong local_res18;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return param_3;
  }
  cVar4 = '\x01';
  if ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0xb4) >> 0x15 & 1) == 0) {
    cVar4 = param_6;
  }
  if ((cVar4 == '\0') && (param_7 == '\0')) {
    return param_3;
  }
  local_res18 = param_3;
  local_58 = param_3;
  if (param_2 == 0) {
    if ((param_4 != 0) && (lVar3 = *(longlong *)(param_3 + 0x20), lVar3 != param_4)) {
      for (lVar1 = FUN_14178ca30(param_4); lVar1 != 0; lVar1 = FUN_14178ca30(lVar1)) {
        if (lVar3 == lVar1) {
          return 0;
        }
      }
    }
    param_2 = local_res18;
    if (local_res18 == 0) goto LAB_14171e255;
  }
  if (((param_4 != 0) && (lVar3 = *(longlong *)(param_2 + 0x20), lVar3 != param_4)) &&
     (local_50 = FUN_14178ca30(param_4), lVar3 != local_50)) {
    local_50 = *(longlong *)(local_50 + 0x20);
    lVar1 = *(longlong *)(param_4 + 0x20);
    local_48 = lVar1;
    if (lVar1 != 0) {
      while (local_48 = lVar1, local_50 != 0) {
        if (lVar3 == local_50) {
          piVar2 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                          ::FindId(param_1 + 0x18,local_res8);
          param_4 = lVar1;
          if (*piVar2 == -1) {
            local_40 = &local_50;
            local_38 = &local_48;
            TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                      (param_1 + 0x18,local_res8,&local_40,0);
            param_4 = local_48;
          }
          break;
        }
        local_50 = *(longlong *)(local_50 + 0x20);
        lVar1 = *(longlong *)(lVar1 + 0x20);
        local_48 = lVar1;
        if (lVar1 == 0) break;
      }
    }
  }
LAB_14171e255:
  lVar3 = FUN_14171b890(param_1,param_2,local_res18,param_4,param_7,param_7);
  if (lVar3 != -1) {
    local_40 = &local_res18;
    local_38 = &local_58;
    local_58 = lVar3;
    TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
              (param_1 + 0x68,local_res8,&local_40,0);
  }
  return local_58;
}



// FUNCTION 14171e2d0 FUN_14171e2d0 body=189 status=ok
// SIG undefined FUN_14171e2d0(void)

void FUN_14171e2d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  do {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    if ((plVar1[7] & 0x8000080000U) != 0) {
      if (param_3 == 0) {
        iVar2 = *(int *)((longlong)plVar1 + 0x44);
LAB_14171e34a:
        lVar4 = 0;
      }
      else {
        if (param_4 == 0) {
          iVar3 = 0x7fffffff;
        }
        else {
          iVar3 = *(int *)(param_4 + 0x40);
        }
        iVar2 = *(int *)((longlong)plVar1 + 0x44);
        if (iVar3 < *(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6] + iVar2) goto LAB_14171e34a;
        lVar4 = param_3 + iVar2;
      }
      (**(code **)(*plVar1 + 0x340))(plVar1,iVar2 + param_2,lVar4,param_5,param_6);
    }
    plVar1 = (longlong *)plVar1[0xb];
  } while( true );
}



// FUNCTION 14171e390 FUN_14171e390 body=162 status=ok
// SIG undefined FUN_14171e390(void)

void FUN_14171e390(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = UInterface::GetPrivateStaticClass();
  lVar1 = lVar4;
  do {
    if (lVar1 == 0) {
LAB_14171e3f3:
      uVar2 = *(undefined8 *)(param_3 + 0x88);
      *(longlong *)(param_3 + 0x88) = param_1;
      (**(code **)(param_1 + 0xb0))(param_2,param_3,param_4);
      *(undefined8 *)(param_3 + 0x88) = uVar2;
      return;
    }
    if (lVar1 == lVar3) {
      param_2 = UObjectBaseUtility::GetInterfaceAddress(param_2,lVar4);
      goto LAB_14171e3f3;
    }
    lVar1 = *(longlong *)(lVar1 + 0x30);
  } while( true );
}



// FUNCTION 14171e440 IsBulkDataLoaded body=8 status=ok
// SIG undefined IsBulkDataLoaded(void)

bool FUntypedBulkData::IsBulkDataLoaded(longlong param_1)

{
  return *(char *)(param_1 + 0x28) != '\0';
}



// FUNCTION 14171e450 IsKnownMissing body=59 status=ok
// SIG undefined IsKnownMissing(void)

undefined1 FCoreRedirects::IsKnownMissing(uint param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  uVar1 = FUN_14171bb60(param_1 | 0x20000,param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14171e490 FUN_14171e490 body=350 status=ok
// SIG undefined FUN_14171e490(void)

undefined8 FUN_14171e490(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  longlong local_20;
  longlong *local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (param_1 == 0) {
    local_30 = (longlong *)0x0;
  }
  else {
    local_30 = *(longlong **)(param_1 + 0x38);
  }
  local_28 = 0xffffffff;
  local_24 = 0x101;
  local_22 = 0;
  local_38 = param_1;
  FUN_140472e10(&local_38);
  if (param_2 == 0) {
    local_18 = (longlong *)0x0;
  }
  else {
    local_18 = *(longlong **)(param_2 + 0x38);
  }
  local_10 = 0xffffffff;
  local_c = 0x101;
  local_a = 0;
  local_20 = param_2;
  FUN_140472e10(&local_20);
  if (local_30 != (longlong *)0x0) {
    while (plVar4 = local_18, plVar3 = local_30, uVar1 = local_30[7], (char)uVar1 < '\0') {
      if ((((local_18 == (longlong *)0x0) || (uVar2 = local_18[7], -1 < (char)uVar2)) ||
          ((local_30 != local_18 &&
           (((*(int *)((longlong)local_30 + 0x34) * (int)local_30[6] !=
              *(int *)((longlong)local_18 + 0x34) * (int)local_18[6] ||
             (*(int *)((longlong)local_30 + 0x44) != *(int *)((longlong)local_18 + 0x44))) ||
            (cVar5 = (**(code **)(*local_30 + 0x368))(local_30,local_18), cVar5 == '\0')))))) ||
         (((uVar2 ^ uVar1) & 0xff81fb6fbff7fde1) != 0)) goto LAB_14171e5ce;
      local_30 = (longlong *)plVar3[5];
      FUN_140472e10(&local_38);
      local_18 = (longlong *)plVar4[5];
      FUN_140472e10(&local_20);
      if (local_30 == (longlong *)0x0) break;
    }
  }
  if ((local_18 == (longlong *)0x0) || ((*(byte *)(local_18 + 7) & 0x80) == 0)) {
    uVar6 = 1;
  }
  else {
LAB_14171e5ce:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 14171e5f0 IsStoredCompressedOnDisk body=8 status=ok
// SIG undefined IsStoredCompressedOnDisk(void)

uint FUntypedBulkData::IsStoredCompressedOnDisk(longlong param_1)

{
  return CONCAT31((uint3)(*(uint *)(param_1 + 8) >> 9),(char)(*(uint *)(param_1 + 8) >> 1)) &
         0xffffff01;
}



// FUNCTION 14171e600 Link body=46 status=ok
// SIG undefined Link(void)

void UClass::Link(longlong param_1)

{
  FUN_14171e6d0();
  if ((*(uint *)(param_1 + 0xb4) >> 7 & 1) != 0) {
    FUN_141726870(param_1);
    return;
  }
  return;
}



// FUNCTION 14171e630 FUN_14171e630 body=27 status=ok
// SIG undefined FUN_14171e630(void)

void FUN_14171e630(undefined8 param_1)

{
  FUN_14171e6d0();
  UFunction::InitializeDerivedMembers(param_1);
  return;
}



// FUNCTION 14171e650 FUN_14171e650 body=128 status=ok
// SIG undefined FUN_14171e650(void)

void FUN_14171e650(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_14171e6d0();
  if (*(longlong *)(param_1 + 0x90) == 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0xe000;
    for (lVar1 = *(longlong *)(param_1 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
      uVar2 = *(ulonglong *)(lVar1 + 0x38);
      if ((uVar2 >> 9 & 1) == 0) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffff7fff;
        uVar2 = *(ulonglong *)(lVar1 + 0x38);
      }
      if ((uVar2 & 0x1000000000) == 0) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffbfff;
      }
      if ((*(uint *)(lVar1 + 0x38) >> 0x1e & 1) == 0) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffdfff;
      }
    }
  }
  return;
}



// FUNCTION 14171e6d0 FUN_14171e6d0 body=1298 status=ok
// SIG undefined FUN_14171e6d0(void)

void FUN_14171e6d0(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (param_3 == '\0') {
    for (plVar3 = (longlong *)param_1[7];
        (plVar3 != (longlong *)0x0 && ((longlong *)plVar3[4] == param_1));
        plVar3 = (longlong *)plVar3[5]) {
      lVar9 = UProperty::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
      }
    }
  }
  else {
    lVar9 = (**(code **)(*param_1 + 0x288))();
    if (lVar9 != 0) {
      (**(code **)(*param_2 + 0x70))(param_2,lVar9);
    }
    for (lVar11 = param_1[7]; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x28)) {
      if ((DAT_1468c21ab == '\0') || (lVar11 == 0)) {
LAB_14171e774:
        (**(code **)(*param_2 + 0x70))(param_2,lVar11);
      }
      else {
        lVar10 = FUN_14171c5d0();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14171e774;
      }
    }
    iVar14 = 1;
    iVar16 = 0;
    do {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)((longlong)param_1 + 0x44) = 1;
      if (lVar9 != 0) {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar9 + 0x40);
        *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(lVar9 + 0x44);
      }
      plVar3 = (longlong *)param_1[7];
joined_r0x00014171e7cc:
      if ((plVar3 == (longlong *)0x0) || ((longlong *)plVar3[4] != param_1)) goto LAB_14171e878;
      lVar11 = UProperty::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
LAB_14171e867:
        plVar3 = (longlong *)plVar3[5];
        goto joined_r0x00014171e7cc;
      }
      uVar2 = *(uint *)(plVar3 + 1);
      lVar11 = plVar3[3];
      (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
      uVar7 = FUN_141764ac0(plVar3);
      *(undefined4 *)(param_1 + 8) = uVar7;
      if ((((byte)(uVar2 >> 6) & 1) == ((byte)(*(uint *)(plVar3 + 1) >> 6) & 1)) &&
         (lVar11 == plVar3[3])) {
        iVar8 = (**(code **)(*plVar3 + 0x348))(plVar3);
        if (iVar8 <= *(int *)((longlong)param_1 + 0x44)) {
          iVar8 = *(int *)((longlong)param_1 + 0x44);
        }
        *(int *)((longlong)param_1 + 0x44) = iVar8;
        goto LAB_14171e867;
      }
      iVar14 = iVar14 + 1;
LAB_14171e878:
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar14);
    lVar9 = param_1[2];
    lVar11 = FUN_14171c950();
    if (lVar9 != 0) {
LAB_14171e892:
      if (lVar9 != lVar11) goto code_r0x00014171e89b;
      for (lVar9 = param_1[7]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x28)) {
        lVar11 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar11 = *(longlong *)(lVar9 + 0x70), lVar11 != 0)) {
          lVar10 = UStructProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(longlong **)(lVar11 + 0x70) == param_1)) {
            LowLevelFatalErrorHandler
                      ("Unknown",0x2c7,
                       L"\'Struct recursion via arrays is unsupported for properties.");
            FDebug::AssertFailed
                      (&DAT_144cff197,"Unknown",0x2c7,
                       L"\'Struct recursion via arrays is unsupported for properties.");
          }
        }
      }
      FUN_14171f730(param_1);
      lVar9 = param_1[0x12];
      if (lVar9 != 0) {
        *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(lVar9 + 0xc);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar9 + 8);
      }
    }
  }
LAB_14171e8a7:
  plVar18 = (longlong *)0x0;
  UObjectBaseUtility::GetOutermost(param_1);
  local_40 = (longlong *)param_1[7];
  plVar3 = param_1 + 0xb;
  plVar17 = param_1 + 0xd;
  local_58 = 0;
  plVar15 = param_1 + 0xc;
  local_50 = 0;
  plVar19 = param_1 + 0xe;
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = param_1;
  FUN_140472e10(&local_48);
  plVar5 = local_40;
  do {
    local_40 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      *plVar3 = 0;
      *plVar17 = 0;
      *plVar15 = 0;
      *plVar19 = 0;
      if (local_58 != 0) {
        FMemory::Free();
      }
      return;
    }
    cVar6 = (**(code **)(*plVar5 + 0x350))(plVar5,&local_58);
    plVar12 = plVar18;
    plVar13 = plVar5;
    if ((cVar6 != '\0') || (cVar6 = (**(code **)(*plVar5 + 0x358))(plVar5), cVar6 != '\0')) {
      *plVar15 = (longlong)plVar5;
      plVar15 = plVar5 + 0xb;
    }
    do {
      if (plVar12 != (longlong *)0x0) goto LAB_14171eb1b;
      if (plVar13 == (longlong *)0x0) {
LAB_14171eb06:
        plVar12 = plVar18;
      }
      else {
        lVar9 = FUN_14171bfe0();
        if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        plVar12 = plVar13;
        if (!bVar4) goto LAB_14171eb06;
      }
      plVar1 = plVar13 + 4;
      plVar13 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    if (plVar12 == (longlong *)0x0) {
LAB_14171eb2b:
      bVar4 = false;
    }
    else {
LAB_14171eb1b:
      if ((*(uint *)((longlong)plVar12 + 0xb4) & 0x10000080) == 0) goto LAB_14171eb2b;
      bVar4 = true;
    }
    if (((plVar5[7] & 0x1040000000U) == 0) && (!bVar4)) {
      *plVar17 = (longlong)plVar5;
      plVar17 = plVar5 + 0xc;
    }
    if ((plVar12 != (longlong *)0x0) &&
       ((!bVar4 ||
        (((*(uint *)(plVar5 + 7) >> 0xe & 1) != 0 &&
         ((*(uint *)((longlong)plVar12 + 0xb4) >> 10 & 1) == 0)))))) {
      *plVar19 = (longlong)plVar5;
      plVar19 = plVar5 + 0xd;
    }
    *plVar3 = (longlong)plVar5;
    local_40 = (longlong *)plVar5[5];
    plVar3 = plVar5 + 10;
    FUN_140472e10(&local_48);
    plVar5 = local_40;
  } while( true );
code_r0x00014171e89b:
  lVar9 = *(longlong *)(lVar9 + 0x30);
  if (lVar9 == 0) goto LAB_14171e8a7;
  goto LAB_14171e892;
}



// FUNCTION 14171ebf0 FUN_14171ebf0 body=945 status=ok
// SIG undefined FUN_14171ebf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14171ebf0(longlong *param_1,void *param_2)

{
  undefined8 *puVar1;
  DWORD DVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  longlong local_48;
  int local_40;
  int local_3c;
  longlong local_38 [2];
  
  cVar4 = FUntypedBulkData::FlushAsyncLoading();
  if (cVar4 != '\0') {
    iVar11 = *(int *)((longlong)param_1 + 0xc);
    iVar5 = (**(code **)(*param_1 + 8))(param_1);
    _guard_xfg_dispatch_icall_nop(param_2,(void *)param_1[4],(longlong)(iVar5 * iVar11));
    return;
  }
  cVar4 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  if (((cVar4 != '\0') && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xd), cVar4 != '\0')) &&
     (lVar7 = FWeakObjectPtr::Get(param_1 + 0xd), *(longlong *)(lVar7 + 0x60) != 0)) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0xd);
    DVar2 = *(DWORD *)(*(longlong *)(lVar7 + 0x60) + 0x784);
    DVar6 = GetCurrentThreadId();
    if ((DVar2 == DVar6) && ((*(uint *)(param_1 + 1) & 0x100) == 0)) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0xd);
      lVar7 = *(longlong *)(lVar7 + 0x60);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x318) != 0)) {
        plVar12 = (longlong *)(lVar7 + 0x200);
        uVar8 = (**(code **)(*plVar12 + 0x90))(plVar12);
        (**(code **)(*plVar12 + 0xa8))(plVar12,param_1[2]);
        FUN_1417240a0(param_1,plVar12,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014171ecf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0xa8))(plVar12,uVar8);
        return;
      }
    }
  }
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e7078) && (_Init_thread_header(&DAT_1469e7078), DAT_1469e7078 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TextureStreaming");
    if (plVar12 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    _DAT_1469e7070 = uVar8;
    _Init_thread_footer(&DAT_1469e7078);
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  puVar13 = &DAT_143f3eda8;
  if (DAT_1468c21ab != '\0') {
    plVar12 = param_1 + 0xb;
    cVar4 = FString::EndsWith(plVar12,L".uasset",1);
    if ((cVar4 != '\0') || (cVar4 = FString::EndsWith(plVar12,L".umap",1), cVar4 != '\0')) {
      plVar9 = (longlong *)FUN_1415c3d50();
      if ((int)param_1[0xc] == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*plVar12;
      }
      lVar7 = (**(code **)(*plVar9 + 0xe8))(plVar9,puVar10);
      param_1[2] = param_1[2] - lVar7;
      plVar9 = (longlong *)FUN_141671940(local_38,plVar12,0);
      lVar7 = plVar9[1];
      local_48 = *plVar9;
      *plVar9 = 0;
      local_40 = (int)plVar9[1];
      local_3c = *(int *)((longlong)plVar9 + 0xc);
      plVar9[1] = 0;
      iVar11 = local_40;
      if (local_3c < (int)((6 - (uint)((int)lVar7 != 0)) + local_40)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
        iVar11 = local_40;
      }
      local_40 = (6 - (uint)(iVar11 != 0)) + iVar11;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      }
      iVar3 = local_3c;
      iVar5 = local_40;
      lVar7 = local_48;
      puVar1 = (undefined8 *)(local_48 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
      *puVar1 = 0x7800650075002e;
      *(undefined2 *)(puVar1 + 1) = 0x70;
      *(undefined2 *)((longlong)puVar1 + 10) = 0;
      if (plVar12 == &local_48) {
        if (local_48 != 0) {
          FMemory::Free(local_48);
        }
      }
      else {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        *plVar12 = lVar7;
        *(int *)(param_1 + 0xc) = iVar5;
        *(int *)((longlong)param_1 + 100) = iVar3;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar12 = (longlong *)FUN_1415c3d50();
  if ((int)param_1[0xc] != 0) {
    puVar13 = (undefined2 *)param_1[0xb];
  }
  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x18))(plVar12,puVar13,2);
  (**(code **)(*plVar12 + 0xa8))(plVar12,param_1[2]);
  FUN_1417240a0(param_1,plVar12,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014171ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar12)(plVar12,1);
  return;
}



// FUNCTION 14171efb0 FUN_14171efb0 body=154 status=ok
// SIG undefined FUN_14171efb0(void)

undefined8 FUN_14171efb0(longlong param_1,uint param_2)

{
  FUntypedBulkData::MakeSureBulkDataIsLoaded();
  if ((param_2 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 2;
    return *(undefined8 *)(param_1 + 0x20);
  }
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 1;
    return *(undefined8 *)(param_1 + 0x20);
  }
  LowLevelFatalErrorHandler("Unknown",0x208,L"Unknown lock flag %i",param_2);
  FDebug::AssertFailed(&DAT_144cfe4cf,"Unknown",0x208,L"Unknown lock flag %i",param_2);
  return *(undefined8 *)(param_1 + 0x20);
}


