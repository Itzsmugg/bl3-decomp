// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408c8d80 FUN_1408c8d80 body=52 status=ok
// SIG undefined FUN_1408c8d80(void)

void FUN_1408c8d80(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x760) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x720) = 1;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x0001408c8dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1,param_1);
  return;
}



// FUNCTION 1408c8dc0 FUN_1408c8dc0 body=64 status=ok
// SIG undefined FUN_1408c8dc0(void)

void FUN_1408c8dc0(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_1 + 0x764);
  *(undefined4 *)(param_1 + 0x760) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x720) = 1;
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x0001408c8df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1,param_1);
  return;
}



// FUNCTION 1408c8e00 PostInitProperties body=40 status=ok
// SIG undefined PostInitProperties(void)

void UGeometryCacheTrackStreamable::PostInitProperties(undefined8 param_1)

{
  longlong *plVar1;
  
  FUN_1417931d0();
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x0001408c8e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,param_1);
  return;
}



// FUNCTION 1408c8e40 FUN_1408c8e40 body=79 status=ok
// SIG undefined FUN_1408c8e40(void)

void FUN_1408c8e40(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  UObject::PostLoad();
  plVar1 = (longlong *)IGeometryCacheStreamingManager::Get();
  (**(code **)(*plVar1 + 0x98))(plVar1,param_1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x280))();
  *(longlong *)(param_1 + 0x178) = param_1;
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  FUN_141edf270(param_1 + 0x140);
  return;
}



// FUNCTION 1408c8e90 FUN_1408c8e90 body=238 status=ok
// SIG undefined FUN_1408c8e90(void)

void FUN_1408c8e90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int local_res10 [2];
  
  lVar2 = *(longlong *)(param_2 + 0x718);
  if (lVar2 != 0) {
    plVar6 = *(longlong **)(lVar2 + 0x40);
    plVar1 = plVar6 + *(int *)(lVar2 + 0x48);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        lVar4 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x18,local_res10,lVar2);
          if ((local_res10[0] == -1) ||
             (lVar2 = *(longlong *)(param_1 + 0x18) + (longlong)local_res10[0] * 0x18, lVar2 == 0))
          {
            puVar5 = (undefined8 *)0x0;
          }
          else {
            puVar5 = (undefined8 *)(lVar2 + 8);
          }
          FUN_1408c8f80(*puVar5,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 1408c8f80 FUN_1408c8f80 body=1164 status=ok
// SIG undefined FUN_1408c8f80(void)

void FUN_1408c8f80(longlong *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong *plVar2;
  BOOL BVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong **pplVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong *local_res8;
  int local_res10 [2];
  longlong **local_res18;
  ulonglong local_res20;
  longlong **local_58;
  undefined8 local_50;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  local_res8 = param_1;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  fVar19 = *(float *)(param_2 + 0x724);
  fVar18 = -14400.0;
  if ((-14400.0 <= fVar19) && (fVar18 = fVar19, 14400.0 <= fVar19)) {
    fVar18 = 14400.0;
  }
  fVar18 = fVar18 + *(float *)(param_2 + 0x730);
  uVar7 = 0;
  local_58 = (longlong **)0x0;
  local_50 = 0;
  fVar17 = *(float *)(param_2 + 0x760) * *DAT_146861480 + fVar18;
  fVar19 = fVar18;
  if (fVar18 <= fVar17) {
    fVar19 = fVar17;
  }
  if (fVar17 <= fVar18) {
    fVar18 = fVar17;
  }
  FUN_1408c4bc0(*param_1,fVar18,fVar19,*(undefined1 *)(param_2 + 0x721),&local_58);
  local_res18 = local_58;
  pplVar14 = (longlong **)((longlong)local_58 + (longlong)(int)local_50 * 4);
  uVar11 = (ulonglong)((longlong)pplVar14 + (3 - (longlong)local_58)) >> 2;
  if (pplVar14 < local_58) {
    uVar11 = uVar7;
  }
  pplVar14 = local_58;
  if (uVar11 != 0) {
    do {
      piVar10 = (int *)param_1[2];
      iVar1 = (int)param_1[3];
      iVar8 = *(int *)pplVar14;
      for (piVar4 = piVar10; piVar4 != piVar10 + iVar1; piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar8) {
          if ((int)((longlong)piVar4 - (longlong)piVar10 >> 2) != -1) goto LAB_1408c90bb;
          break;
        }
      }
      *(int *)(param_1 + 3) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
      }
      *(int *)(param_1[2] + (longlong)iVar1 * 4) = iVar8;
LAB_1408c90bb:
      pplVar14 = (longlong **)((longlong)pplVar14 + 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar11);
  }
  plVar2 = local_res8;
  local_res20 = 0;
  pplVar14 = (longlong **)((longlong)local_58 + (longlong)(int)local_50 * 4);
  uVar7 = (ulonglong)((longlong)pplVar14 + (3 - (longlong)local_58)) >> 2;
  if (pplVar14 < local_58) {
    uVar7 = 0;
  }
  local_res18 = local_58;
  if (uVar7 != 0) {
    do {
      uVar11 = local_res20;
      pplVar14 = local_res18;
      iVar1 = *(int *)local_res18;
      FUN_1408c9410(plVar2);
      piVar4 = (int *)plVar2[4];
      piVar10 = piVar4 + (int)plVar2[5];
      for (; piVar4 != piVar10; piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar1) goto LAB_1408c93bb;
      }
      piVar10 = (int *)plVar2[0x12];
      lVar6 = (longlong)(int)plVar2[0x13];
      for (piVar4 = piVar10; piVar4 != piVar10 + lVar6; piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar1) {
          if ((int)plVar2[0x13] != 0) {
            uVar9 = 0;
            bVar16 = *piVar10 != iVar1;
            uVar11 = uVar9;
            uVar13 = uVar9;
            do {
              iVar8 = (int)uVar9;
              uVar11 = uVar11 + 1;
              uVar9 = (ulonglong)(iVar8 + 1);
              if ((longlong)uVar11 < lVar6) {
                piVar10 = (int *)(plVar2[0x12] + uVar11 * 4);
                do {
                  if (bVar16 != (*piVar10 != iVar1)) break;
                  uVar9 = (ulonglong)((int)uVar9 + 1);
                  uVar11 = uVar11 + 1;
                  piVar10 = piVar10 + 1;
                } while ((longlong)uVar11 < lVar6);
              }
              iVar15 = (int)uVar9 - iVar8;
              if (bVar16 != false) {
                iVar12 = (int)uVar13;
                if (iVar12 != iVar8) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(plVar2[0x12] + (longlong)iVar12 * 4),
                             (void *)(plVar2[0x12] + (longlong)iVar8 * 4),(longlong)iVar15 << 2);
                }
                uVar13 = (ulonglong)(uint)(iVar12 + iVar15);
              }
              bVar16 = (bool)(bVar16 ^ 1);
            } while ((longlong)uVar11 < lVar6);
            *(int *)(plVar2 + 0x13) = (int)uVar13;
            pplVar14 = local_res18;
            uVar11 = local_res20;
          }
          goto LAB_1408c939c;
        }
      }
      piVar10 = (int *)plVar2[0x10];
      lVar6 = (longlong)(int)plVar2[0x11];
      for (piVar4 = piVar10; piVar4 != piVar10 + lVar6; piVar4 = piVar4 + 1) {
        if (*piVar4 == iVar1) {
          if ((int)plVar2[0x11] != 0) {
            uVar9 = 0;
            bVar16 = *piVar10 != iVar1;
            uVar11 = uVar9;
            uVar13 = uVar9;
            do {
              iVar8 = (int)uVar9;
              uVar11 = uVar11 + 1;
              uVar9 = (ulonglong)(iVar8 + 1);
              if ((longlong)uVar11 < lVar6) {
                piVar10 = (int *)(plVar2[0x10] + uVar11 * 4);
                do {
                  if (bVar16 != (*piVar10 != iVar1)) break;
                  uVar9 = (ulonglong)((int)uVar9 + 1);
                  uVar11 = uVar11 + 1;
                  piVar10 = piVar10 + 1;
                } while ((longlong)uVar11 < lVar6);
              }
              iVar15 = (int)uVar9 - iVar8;
              if (bVar16 != false) {
                iVar12 = (int)uVar13;
                if (iVar12 != iVar8) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(plVar2[0x10] + (longlong)iVar12 * 4),
                             (void *)(plVar2[0x10] + (longlong)iVar8 * 4),(longlong)iVar15 << 2);
                }
                uVar13 = (ulonglong)(uint)(iVar12 + iVar15);
              }
              bVar16 = (bool)(bVar16 ^ 1);
            } while ((longlong)uVar11 < lVar6);
            *(int *)(plVar2 + 0x11) = (int)uVar13;
            pplVar14 = local_res18;
            uVar11 = local_res20;
          }
          break;
        }
      }
      local_res8 = (longlong *)CONCAT44(local_res8._4_4_,iVar1);
      piVar10 = (int *)((longlong)iVar1 * 0x80 + *(longlong *)(*plVar2 + 0x68));
      local_res18 = &local_res8;
      FUN_1408ba390(plVar2 + 6,local_res10,&local_res18,0);
      lVar6 = plVar2[6] + (longlong)local_res10[0] * 0x28;
      *(undefined4 *)(lVar6 + 0x14) = 0;
      *(undefined8 *)(lVar6 + 8) = 0;
      *(int *)(lVar6 + 0x10) = *piVar10;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      uVar5 = FMemory::Malloc((longlong)*piVar10,0);
      *(undefined8 *)(lVar6 + 8) = uVar5;
      FUntypedBulkData::GetCopy(piVar10 + 4,lVar6 + 8,1);
LAB_1408c939c:
      iVar8 = (int)plVar2[5];
      *(int *)(plVar2 + 5) = iVar8 + 1;
      if (*(int *)((longlong)plVar2 + 0x2c) < iVar8 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2 + 4,iVar8);
      }
      *(int *)(plVar2[4] + (longlong)iVar8 * 4) = iVar1;
LAB_1408c93bb:
      local_res18 = (longlong **)((longlong)pplVar14 + 4);
      local_res20 = uVar11 + 1;
    } while (local_res20 != uVar7);
  }
  if (local_58 != (longlong **)0x0) {
    FMemory::Free(local_58);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1408c9410 FUN_1408c9410 body=752 status=ok
// SIG undefined FUN_1408c9410(void)

void FUN_1408c9410(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  bool bVar17;
  undefined4 uStack_3c;
  int iStack_30;
  
  do {
    lVar6 = **(longlong **)(param_1 + 0xb8);
    if (lVar6 == 0) {
      return;
    }
    lVar4 = *(longlong *)(lVar6 + 8);
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(longlong *)(param_1 + 0xb8) = lVar6;
    *(undefined4 *)(lVar6 + 8) = 0;
    *(undefined4 *)(lVar6 + 0xc) = 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x14) = uStack_3c;
    FMemory::operator_delete(uVar1,0x18);
    plVar9 = (longlong *)0x0;
    iStack_30 = (int)uVar3;
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
      lVar6 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar6 = param_1 + 0x68;
      }
      iVar12 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)iStack_30) * 4)
      ;
      if (iVar12 != -1) {
        do {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar12 * 0x28);
          if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar12 * 0x28) == iStack_30) {
            if (iVar12 != -1) goto LAB_1408c94e3;
            break;
          }
          iVar12 = (int)plVar5[4];
        } while (iVar12 != -1);
      }
    }
    plVar5 = plVar9;
LAB_1408c94e3:
    plVar11 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar11 = plVar9;
    }
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    lVar6 = *(longlong *)(lVar4 + 0x10);
    if (((*(char *)(lVar4 + 0x73) == '\0') || (lVar6 == 0)) &&
       (*(undefined8 *)(lVar4 + 0x10) = 0, lVar6 != 0)) {
      *plVar11 = lVar6;
      iVar12 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar12 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar12 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar12);
      }
      uVar8 = 0;
      *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 4) = iStack_30;
      lVar6 = (longlong)*(int *)(param_1 + 0x88);
      if (*(int *)(param_1 + 0x88) != 0) {
        bVar17 = **(int **)(param_1 + 0x80) != iStack_30;
        uVar13 = uVar8;
        uVar15 = uVar8;
        do {
          iVar12 = (int)uVar13;
          uVar8 = uVar8 + 1;
          uVar13 = (ulonglong)(iVar12 + 1);
          if ((longlong)uVar8 < lVar6) {
            piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + uVar8 * 4);
            do {
              if (bVar17 != (*piVar7 != iStack_30)) break;
              uVar13 = (ulonglong)((int)uVar13 + 1);
              uVar8 = uVar8 + 1;
              piVar7 = piVar7 + 1;
            } while ((longlong)uVar8 < lVar6);
          }
          iVar10 = (int)uVar13 - iVar12;
          if (bVar17 != false) {
            iVar14 = (int)uVar15;
            if (iVar14 != iVar12) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar14 * 4),
                         (void *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar12 * 4),
                         (longlong)iVar10 << 2);
            }
            uVar15 = (ulonglong)(uint)(iVar14 + iVar10);
          }
          bVar17 = (bool)(bVar17 ^ 1);
        } while ((longlong)uVar8 < lVar6);
        *(int *)(param_1 + 0x88) = (int)uVar15;
      }
      lVar6 = plVar11[1];
      lVar4 = IGeometryCacheStreamingManager::Get();
      LOCK();
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + (int)lVar6;
      UNLOCK();
    }
    else {
      lVar6 = (longlong)*(int *)(param_1 + 0x88);
      if (*(int *)(param_1 + 0x88) != 0) {
        bVar17 = **(int **)(param_1 + 0x80) != iStack_30;
        plVar5 = plVar9;
        plVar16 = plVar9;
        do {
          iVar12 = (int)plVar5;
          plVar9 = (longlong *)((longlong)plVar9 + 1);
          plVar5 = (longlong *)(ulonglong)(iVar12 + 1);
          if ((longlong)plVar9 < lVar6) {
            piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + (longlong)plVar9 * 4);
            do {
              if (bVar17 != (*piVar7 != iStack_30)) break;
              plVar5 = (longlong *)(ulonglong)((int)plVar5 + 1);
              plVar9 = (longlong *)((longlong)plVar9 + 1);
              piVar7 = piVar7 + 1;
            } while ((longlong)plVar9 < lVar6);
          }
          iVar10 = (int)plVar5 - iVar12;
          if (bVar17 != false) {
            iVar14 = (int)plVar16;
            if (iVar14 != iVar12) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar14 * 4),
                         (void *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar12 * 4),
                         (longlong)iVar10 << 2);
            }
            plVar16 = (longlong *)(ulonglong)(uint)(iVar14 + iVar10);
          }
          bVar17 = (bool)(bVar17 ^ 1);
        } while ((longlong)plVar9 < lVar6);
        *(int *)(param_1 + 0x88) = (int)plVar16;
      }
    }
    puVar2 = (undefined8 *)plVar11[2];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar11[2] = 0;
  } while( true );
}



// FUNCTION 1408c9700 ReadCodedStreamDescription body=995 status=ok
// SIG undefined ReadCodedStreamDescription(void)

void FCodecV1Decoder::ReadCodedStreamDescription(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  uVar6 = 1;
  uVar4 = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar7 = uVar6;
    if (uVar8 <= uVar6) {
      uVar7 = uVar8;
    }
    uVar8 = uVar8 - uVar7;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar4 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar7 & 0x1f)) - 1U |
            uVar4 << ((byte)uVar7 & 0x1f);
    uVar6 = uVar6 - uVar7;
  } while (uVar6 != 0);
  uVar7 = 1;
  uVar6 = 0;
  *(bool *)(lVar2 + 0xa0) = uVar4 == 1;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar4 = uVar7;
    if (uVar8 <= uVar7) {
      uVar4 = uVar8;
    }
    uVar8 = uVar8 - uVar4;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar6 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar4 & 0x1f)) - 1U |
            uVar6 << ((byte)uVar4 & 0x1f);
    uVar7 = uVar7 - uVar4;
  } while (uVar7 != 0);
  uVar7 = 1;
  uVar4 = 0;
  *(bool *)(lVar2 + 0xa1) = uVar6 == 1;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar6 = uVar7;
    if (uVar8 <= uVar7) {
      uVar6 = uVar8;
    }
    uVar8 = uVar8 - uVar6;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar4 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar6 & 0x1f)) - 1U |
            uVar4 << ((byte)uVar6 & 0x1f);
    uVar7 = uVar7 - uVar6;
  } while (uVar7 != 0);
  uVar7 = 1;
  uVar6 = 0;
  *(bool *)(lVar2 + 0xa2) = uVar4 == 1;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar4 = uVar7;
    if (uVar8 <= uVar7) {
      uVar4 = uVar8;
    }
    uVar8 = uVar8 - uVar4;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar6 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar4 & 0x1f)) - 1U |
            uVar6 << ((byte)uVar4 & 0x1f);
    uVar7 = uVar7 - uVar4;
  } while (uVar7 != 0);
  uVar7 = 1;
  uVar4 = 0;
  *(bool *)(lVar2 + 0xa3) = uVar6 == 1;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar6 = uVar7;
    if (uVar8 <= uVar7) {
      uVar6 = uVar8;
    }
    uVar8 = uVar8 - uVar6;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar4 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar6 & 0x1f)) - 1U |
            uVar4 << ((byte)uVar6 & 0x1f);
    uVar7 = uVar7 - uVar6;
  } while (uVar7 != 0);
  uVar7 = 1;
  uVar6 = 0;
  *(bool *)(lVar2 + 0xa4) = uVar4 == 1;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar4 = uVar7;
    if (uVar8 <= uVar7) {
      uVar4 = uVar8;
    }
    uVar8 = uVar8 - uVar4;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar6 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar4 & 0x1f)) - 1U |
            uVar6 << ((byte)uVar4 & 0x1f);
    uVar7 = uVar7 - uVar4;
  } while (uVar7 != 0);
  uVar7 = 1;
  uVar4 = 0;
  *(bool *)(lVar2 + 0xa5) = uVar6 == 1;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar6 = uVar7;
    if (uVar8 <= uVar7) {
      uVar6 = uVar8;
    }
    uVar8 = uVar8 - uVar6;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar4 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar6 & 0x1f)) - 1U |
            uVar4 << ((byte)uVar6 & 0x1f);
    uVar7 = uVar7 - uVar6;
  } while (uVar7 != 0);
  uVar6 = 1;
  *(bool *)(lVar2 + 0xa6) = uVar4 == 1;
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar8 = *(uint *)((longlong)plVar3 + 0x14);
  iVar9 = (int)plVar3[2];
  do {
    if (uVar8 == 0) {
      iVar9 = iVar9 + 1;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 8;
      *(int *)(plVar3 + 2) = iVar9;
      uVar8 = 8;
    }
    uVar4 = uVar6;
    if (uVar8 <= uVar6) {
      uVar4 = uVar8;
    }
    uVar8 = uVar8 - uVar4;
    bVar1 = *(byte *)((longlong)iVar9 + *plVar3);
    *(uint *)((longlong)plVar3 + 0x14) = uVar8;
    uVar5 = (uint)(bVar1 >> ((byte)uVar8 & 0x1f)) & (1 << ((byte)uVar4 & 0x1f)) - 1U |
            uVar5 << ((byte)uVar4 & 0x1f);
    uVar6 = uVar6 - uVar4;
  } while (uVar6 != 0);
  *(bool *)(lVar2 + 0xa7) = uVar5 == 1;
  return;
}



// FUNCTION 1408c9af0 ReleaseRHI body=42 status=ok
// SIG undefined ReleaseRHI(void)

void FGeometryCacheTrackStreamableRenderResource::ReleaseRHI(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1408c9b20 RemoveGeometryCache body=139 status=ok
// SIG undefined RemoveGeometryCache(void)

void FGeometryCacheStreamingManager::RemoveGeometryCache(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x18);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  plVar3 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)(*plVar1 + (longlong)local_res8[0] * 0x18);
  }
  plVar4 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      FStreamingGeometryCacheData::~FStreamingGeometryCacheData(lVar2);
      FMemory::operator_delete(lVar2,0xf0);
    }
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(plVar1,param_2);
  }
  return;
}



// FUNCTION 1408c9bb0 RemoveStreamingComponent body=235 status=ok
// SIG undefined RemoveStreamingComponent(void)

void FGeometryCacheStreamingManager::RemoveStreamingComponent(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x68) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x68) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x70) = iVar6;
  }
  return;
}



// FUNCTION 1408c9ca0 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<5,FDefaultAllocator>::ForElementType<FIntVector4>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x50);
  if (param_3 < 6) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x50);
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
        *(void **)((longlong)param_1 + 0x50) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
  return;
}



// FUNCTION 1408c9d40 ResizeAllocation body=151 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<9,TSizedDefaultAllocator<32>_>::ForElementType<FVector>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x70);
  if (param_3 < 10) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xc);
    pvVar1 = *(void **)((longlong)param_1 + 0x70);
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
        *(void **)((longlong)param_1 + 0x70) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xc);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar2;
  return;
}



// FUNCTION 1408c9de0 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_int,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x20);
  if (uVar1 < 6) {
    uVar2 = 5;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x24) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x24) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x18);
  if (uVar2 < 6) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x18);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 0x18) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
  return;
}



// FUNCTION 1408c9ed0 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_int,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x30);
  if (uVar1 < 10) {
    uVar2 = 9;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x34) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x34) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x28);
  if (uVar2 < 10) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 0x28);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 0x28) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar5;
  return;
}



// FUNCTION 1408c9fc0 ResizeGrow body=128 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FIntVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 < 6) {
    iVar2 = 5;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x5c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  TInlineAllocator<5,FDefaultAllocator>::ForElementType<FIntVector4>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 1408ca040 ResizeGrow body=148 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 < 10) {
    iVar4 = 9;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x7c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0xc,0);
    iVar4 = (int)(uVar3 / 0xc);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x7c) = iVar4;
  TInlineAllocator<9,TSizedDefaultAllocator<32>_>::ForElementType<FVector>::ResizeAllocation
            (param_1,param_2,iVar4,0xc);
  return;
}



// FUNCTION 1408ca0e0 FUN_1408ca0e0 body=255 status=ok
// SIG undefined FUN_1408ca0e0(void)

void FUN_1408ca0e0(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x80);
  if (uVar1 < 2) {
    uVar5 = 1;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x84) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x78,0);
    uVar5 = (uint)(uVar2 / 0x78);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x84) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x78);
  if (uVar5 < 2) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x78);
    pvVar3 = *(void **)((longlong)param_1 + 0x78);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x78,0);
        *(void **)((longlong)param_1 + 0x78) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x78);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x78;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar4;
  return;
}



// FUNCTION 1408ca1e0 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
     ::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  if (uVar1 < 2) {
    uVar2 = 1;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x14) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 8);
  if (uVar2 < 2) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 8);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 8) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar5;
  return;
}



// FUNCTION 1408ca2d0 ResizeGrow body=8 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 4;
  return;
}



// FUNCTION 1408ca2e0 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<FIntVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 6) {
      iVar1 = 5;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = iVar1;
    TInlineAllocator<5,FDefaultAllocator>::ForElementType<FIntVector4>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x58),iVar1,0x10);
  }
  return;
}



// FUNCTION 1408ca350 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FIntVector,TInlineAllocator<9,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 10) {
      iVar2 = 9;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x7c)) {
    *(int *)(param_1 + 0x7c) = iVar2;
    TInlineAllocator<9,TSizedDefaultAllocator<32>_>::ForElementType<FVector>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x78),iVar2,0xc);
  }
  return;
}



// FUNCTION 1408ca3d0 FUN_1408ca3d0 body=803 status=ok
// SIG undefined FUN_1408ca3d0(void)

void FUN_1408ca3d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [24];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined4 local_108;
  undefined1 local_104;
  undefined2 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  iVar4 = FArchive::CustomVer(param_2,&DAT_1464b0138);
  if (0x10 < iVar4) {
    FUN_141763960(param_1,param_2);
    return;
  }
  FUN_1408bdc30(param_2,param_1 + 0x40);
  plVar2 = (longlong *)param_2[1];
  if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = (longlong *)param_2[1];
  if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res20,4);
    }
  }
  else {
    local_res20[0] = *(undefined4 *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  iVar4 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (0x10 < iVar4) {
    FUN_1408bdc30(param_2,param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_48,
             L"Geometry Cache asset has been emptied as it does not support backwards compatibility"
             ,L"GeometryCache",L"GeometryCacheEmptied");
  local_158 = 0;
  uStack_150 = 0;
  FText::FText(local_148,local_48);
  local_118 = 0x3f000000;
  local_110 = 0x3f800000;
  local_108 = 0xbf800000;
  local_114 = 0x40000000;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_10c = 0x101;
  local_10a = 1;
  local_104 = 1;
  local_100 = 0x100;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  FText::FText(local_d8);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_30,L"Show Log",L"EditorNotification",L"DefaultHyperlinkText");
  FText::FText(local_98,uVar5);
  local_78 = 0;
  local_70 = 0;
  local_80 = 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  local_110 = 0x40a00000;
  local_68 = 1;
  uVar5 = FUN_1418fca90();
  FUN_1418d8b50(uVar5,local_58,&local_158);
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
  FUN_1408bc4f0(&local_158);
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
  return;
}



// FUNCTION 1408ca700 FUN_1408ca700 body=181 status=ok
// SIG undefined FUN_1408ca700(void)

void FUN_1408ca700(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0138);
  if (0x10 < iVar2) {
    FUN_141763960(param_1,param_2);
  }
  FUN_1408be0f0(param_2,param_1 + 0x30);
  FUN_1408bda20(param_2,param_1 + 0x40);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x50) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x50,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x50,4);
  }
  return;
}



// FUNCTION 1408ca7c0 FUN_1408ca7c0 body=708 status=ok
// SIG undefined FUN_1408ca7c0(void)

void FUN_1408ca7c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  iVar4 = FArchive::CustomVer(param_2,&DAT_1464b0138);
  if (0x10 < iVar4) {
    FUN_141763960(param_1,param_2);
  }
  FUN_1408be0f0(param_2,param_1 + 0x30);
  FUN_1408bda20(param_2,param_1 + 0x40);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x50,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x50,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar3 = (longlong *)param_2[1];
  local_res8[0] = *(int *)(param_1 + 0x70);
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  iVar4 = local_res8[0];
  uVar6 = 0;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar1 + local_res8[0];
    if (*(int *)(param_1 + 0x74) < iVar1 + local_res8[0]) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x68,iVar1);
    }
    puVar7 = (undefined8 *)((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x68));
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      FUntypedBulkData::FUntypedBulkData(puVar7 + 2);
      puVar7[2] = &PTR__scalar_deleting_destructor__143f48b90;
      puVar7 = puVar7 + 0x10;
    }
  }
  uVar9 = uVar6;
  if (0 < local_res8[0]) {
    do {
      puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + uVar9);
      FUntypedBulkData::SetBulkDataFlags(puVar8 + 4,0x400);
      FUN_1417225e0(puVar8 + 4,param_2,param_1,uVar6);
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar8,4);
        }
      }
      else {
        *puVar8 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 1,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar8 + 1,4);
        }
      }
      else {
        puVar8[1] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar8 + 2,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar8 + 2,4);
        }
      }
      else {
        puVar8[2] = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar9 = uVar9 + 0x80;
    } while ((int)uVar5 < local_res8[0]);
  }
  FUN_1408bdf50(param_2,param_1 + 0x78);
  FUN_1408be270(param_2,param_1 + 0x88);
  return;
}



// FUNCTION 1408caaa0 FUN_1408caaa0 body=130 status=ok
// SIG undefined FUN_1408caaa0(void)

void FUN_1408caaa0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_141edf360(param_1 + 0x140);
  FUN_141edede0(param_1 + 0x180,0);
  FRenderCommandFence::Wait(param_1 + 0x180,0);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x280))();
  *(longlong *)(param_1 + 0x178) = param_1;
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  FUN_141edf270(param_1 + 0x140);
  return;
}



// FUNCTION 1408cab30 FUN_1408cab30 body=1037 status=ok
// SIG undefined FUN_1408cab30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1408cab30(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [8];
  longlong *local_108;
  longlong local_100 [2];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [40];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (param_2 != param_1[0xe3]) {
    lVar7 = param_1[0x23];
    cVar5 = FUN_142341170();
    if ((((cVar5 != '\0') || ((*(byte *)(param_1 + 0x17) & 1) == 0)) ||
        (*(char *)((longlong)param_1 + 0x24e) != '\0')) || (lVar7 == 0)) {
      param_1[0xe3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x72c) = 0;
      *(undefined4 *)(param_1 + 0xeb) = 0;
      if (*(int *)((longlong)param_1 + 0x75c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0xea,0);
      }
      FUN_141edede0(param_1 + 0xc9,0);
      FRenderCommandFence::Wait(param_1 + 0xc9,0);
      *(undefined4 *)((longlong)param_1 + 0x72c) = 0;
      param_1[0xe3] = param_2;
      *(undefined4 *)(param_1 + 0xeb) = 0;
      if (*(int *)((longlong)param_1 + 0x75c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0xea,0);
      }
      FUN_1408cb300(param_1);
      plVar9 = (longlong *)IGeometryCacheStreamingManager::Get();
      (**(code **)(*plVar9 + 200))(plVar9,param_1);
      FUN_1423424e0(param_1);
      FUN_14234b040(param_1);
      plVar9 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar9 + 0x70))(plVar9,param_1);
      (**(code **)(*param_1 + 0x4b8))(param_1);
      return 1;
    }
    FName::FName(local_138,&DAT_14412aa74,1);
    uVar6 = UObjectBaseUtility::GetPathName(param_1,local_100,0);
    lVar7 = FText::FromString(local_70,uVar6);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c0,L"Calling SetGeometryCache on \'{0}\' but Mobility is Static.",
                       L"GeometryCacheComponent",L"SetGeometryCache");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar6);
    local_58[0] = 4;
    FText::FText(local_48,lVar7);
    local_130 = *puVar8;
    local_148 = local_58;
    puStack_140 = local_28;
    local_128 = puVar8[1];
    local_30 = '\x01';
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_120,&local_148);
    uVar6 = FText::Format(local_d8,&local_130,uVar6);
    FText::FText(local_f0,uVar6);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_d0 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_120);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_40 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar9 = (longlong *)puVar8[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar9 = *(longlong **)(lVar7 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    uVar6 = FUN_14161fb50(local_98,local_138);
    FMessageLog::Warning(uVar6,local_110,local_f0);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_108 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FMessageLog::~FMessageLog(local_98);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_e8 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_b8 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if (local_100[0] != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 1408caf40 FUN_1408caf40 body=7 status=ok
// SIG undefined FUN_1408caf40(void)

void FUN_1408caf40(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x721) = param_2;
  return;
}



// FUNCTION 1408caf50 SetSizingRule body=7 status=ok
// SIG undefined SetSizingRule(void)

void SWindow::SetSizingRule(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x768) = param_2;
  return;
}



// FUNCTION 1408caf60 SetMatrixSamples body=182 status=ok
// SIG undefined SetMatrixSamples(void)

void UGeometryCacheTrack::SetMatrixSamples(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) < iVar2 + iVar1) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x38);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x30)),(void *)*param_2,
               (longlong)iVar1 << 6);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar1;
  }
  iVar1 = *(int *)(param_3 + 1);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x4c) < iVar2 + iVar1) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0x48);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 4),(void *)*param_3,
               (longlong)iVar1 << 2);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar1;
  }
  return;
}



// FUNCTION 1408cb020 SetMesh body=42 status=ok
// SIG undefined SetMesh(void)

void UDEPRECATED_GeometryCacheTrack_TransformAnimation::SetMesh(longlong param_1,longlong param_2)

{
  FGeometryCacheMeshData::operator=(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x68);
  return;
}



// FUNCTION 1408cb050 FUN_1408cb050 body=34 status=ok
// SIG undefined FUN_1408cb050(void)

void FUN_1408cb050(longlong param_1,float param_2)

{
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x728) = 0;
    return;
  }
  if (512.0 <= param_2) {
    param_2 = 512.0;
  }
  *(float *)(param_1 + 0x728) = param_2;
  return;
}



// FUNCTION 1408cb080 FUN_1408cb080 body=13 status=ok
// SIG undefined FUN_1408cb080(void)

void FUN_1408cb080(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x724) = param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 1408cb090 FUN_1408cb090 body=611 status=ok
// SIG undefined FUN_1408cb090(void)

void FUN_1408cb090(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1408cb247;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1408cb247:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1408cb300 FUN_1408cb300 body=416 status=ok
// SIG undefined FUN_1408cb300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cb300(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x48);
    lVar8 = 0;
    *(int *)(param_1 + 0x72c) = iVar7;
    *(undefined4 *)(param_1 + 0x764) = 0;
    if (0 < iVar7) {
      iVar7 = 1;
      do {
        if (*(int *)(param_1 + 0x758) <= iVar7 + -1) {
          iVar1 = *(int *)(param_1 + 0x758);
          if (iVar1 < iVar7) {
            *(int *)(param_1 + 0x758) = iVar7;
            iVar6 = iVar7 - iVar1;
            if (*(int *)(param_1 + 0x75c) < iVar7) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
              ResizeGrow((longlong *)(param_1 + 0x750),iVar1);
            }
            puVar5 = (undefined8 *)((longlong)iVar1 * 0x70 + *(longlong *)(param_1 + 0x750));
            if (iVar6 != 0) {
              puVar4 = (undefined8 *)((longlong)puVar5 + 0x4c);
              do {
                uVar2 = _DAT_1464aa7d8;
                *puVar5 = _DAT_1464aa7d0;
                puVar5[1] = uVar2;
                uVar2 = _DAT_1464aa7e8;
                puVar5[2] = _DAT_1464aa7e0;
                puVar5[3] = uVar2;
                uVar2 = _DAT_1464aa7f8;
                puVar5[4] = _DAT_1464aa7f0;
                puVar5[5] = uVar2;
                uVar2 = uRam00000001464aa808;
                puVar5[6] = _DAT_1464aa800;
                puVar5[7] = uVar2;
                *puVar4 = _DAT_1468b5d90;
                uVar3 = DAT_1468b5d98;
                *(undefined4 *)(puVar4 + 1) = DAT_1468b5d98;
                *(undefined8 *)((longlong)puVar4 + -0xc) = *puVar4;
                *(undefined4 *)((longlong)puVar4 + -4) = uVar3;
                *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
                puVar4[2] = 0xffffffffffffffff;
                iVar6 = iVar6 + -1;
                puVar4 = puVar4 + 0xe;
                puVar5 = puVar5 + 0xe;
              } while (iVar6 != 0);
            }
          }
          else if ((iVar7 < iVar1) && (iVar7 != iVar1)) {
            *(int *)(param_1 + 0x758) = iVar7;
          }
        }
        FUN_1408cd3a0(param_1,iVar7 + -1);
        FUN_1423424e0(param_1);
        fVar9 = (float)(**(code **)(**(longlong **)
                                      (lVar8 + *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x40))
                                   + 0x2b0))();
        iVar7 = iVar7 + 1;
        fVar10 = *(float *)(param_1 + 0x764);
        if (*(float *)(param_1 + 0x764) <= fVar9) {
          fVar10 = fVar9;
        }
        lVar8 = lVar8 + 8;
        *(float *)(param_1 + 0x764) = fVar10;
      } while (iVar7 <= *(int *)(param_1 + 0x72c));
    }
  }
  FUN_1408cc210(param_1);
  return;
}



// FUNCTION 1408cb4c0 FUN_1408cb4c0 body=743 status=ok
// SIG undefined FUN_1408cb4c0(void)

void FUN_1408cb4c0(longlong param_1,undefined4 param_2,char param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (((*(char *)(param_1 + 0x768) != '\0') && (*(longlong *)(param_1 + 0x718) != 0)) &&
     (*(char *)(param_1 + 0x720) != '\0')) {
    bVar13 = 0;
    plVar11 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x730) = param_2;
    plVar8 = plVar11;
    if (0 < *(int *)(param_1 + 0x72c)) {
      do {
        bVar4 = FUN_1408cd3a0(param_1,plVar8);
        bVar13 = bVar13 | bVar4;
        uVar14 = (int)plVar8 + 1;
        plVar8 = (longlong *)(ulonglong)uVar14;
      } while ((int)uVar14 < *(int *)(param_1 + 0x72c));
      if (bVar13 != 0) {
        FUN_1408cc210(param_1);
        UActorComponent::MarkRenderDynamicDataDirty(param_1);
      }
    }
    if (param_3 == '\0') {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)(param_1 + 0x728);
    }
    lVar3 = *(longlong *)(param_1 + 0x640);
    if (lVar3 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_50);
        *(undefined1 *)(lVar3 + 0x3ac) = param_5;
        *(undefined4 *)(lVar3 + 0x3a8) = param_2;
        *(undefined4 *)(lVar3 + 0x3b0) = uVar15;
        *(undefined1 *)(lVar3 + 0x3ad) = param_4;
        QueryPerformanceCounter(&local_res8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_50._0_4_);
      }
      else {
        pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar8 = TlsGetValue(*pDVar7);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = 0;
            plVar8[1] = 0;
            *(undefined4 *)(plVar8 + 2) = 0;
            plVar11 = plVar8;
          }
          TlsSetValue(*pDVar7,plVar11);
          plVar8 = plVar11;
        }
        plVar11 = (longlong *)plVar8[1];
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)*plVar8;
          if (plVar11 == (longlong *)0x0) {
            lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
            plVar8[1] = lVar9;
            if (lVar9 == 0) {
              puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar8[1] = (longlong)puVar10;
              lVar9 = 0x1f;
              do {
                puVar2 = puVar10 + 0x20;
                *puVar10 = puVar2;
                lVar9 = lVar9 + -1;
                puVar10 = puVar2;
              } while (lVar9 != 0);
              *puVar2 = 0;
            }
            plVar11 = (longlong *)plVar8[1];
            iVar12 = 0x20;
            *(undefined4 *)(plVar8 + 2) = 0x20;
          }
          else {
            iVar12 = 0x20;
            plVar8[1] = (longlong)plVar11;
            *(undefined4 *)(plVar8 + 2) = 0x20;
            *plVar8 = 0;
          }
        }
        else {
          iVar12 = (int)plVar8[2];
        }
        plVar8[1] = *plVar11;
        *(int *)(plVar8 + 2) = iVar12 + -1;
        *plVar11 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar11 + 1) = 0xff;
        local_48 = 0;
        local_40 = 0;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_14412e2e0;
        *(undefined1 *)(plVar11 + 5) = 0;
        plVar11[6] = 0;
        plVar11[2] = lVar3;
        *(undefined1 *)((longlong)plVar11 + 0x1c) = param_5;
        *(undefined4 *)(plVar11 + 3) = param_2;
        *(undefined4 *)(plVar11 + 4) = uVar15;
        *(undefined1 *)((longlong)plVar11 + 0x1d) = param_4;
        lVar3 = plVar11[6];
        piVar1 = (int *)(lVar3 + 0x48);
        if (lVar3 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a160(plVar11,0,0xff,1);
        if (lVar3 != 0) {
          LOCK();
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            FGraphEvent::Recycle(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1408cb7b0 FUN_1408cb7b0 body=967 status=ok
// SIG undefined FUN_1408cb7b0(void)

void FUN_1408cb7b0(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  DWORD DVar8;
  DWORD *pDVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (((*(longlong *)(param_1 + 0x718) != 0) && (*(char *)(param_1 + 0x720) != '\0')) &&
     (*(char *)(param_1 + 0x768) == '\0')) {
    fVar17 = *(float *)(param_1 + 0x728);
    uVar19 = 0;
    if (0.0 <= fVar17) {
      if (512.0 <= fVar17) {
        fVar17 = 512.0;
      }
    }
    else {
      fVar17 = 0.0;
    }
    fVar17 = param_2 * *(float *)(param_1 + 0x760) * fVar17 + *(float *)(param_1 + 0x730);
    *(float *)(param_1 + 0x730) = fVar17;
    if ((fVar17 < 0.0) && (*(char *)(param_1 + 0x721) != '\0')) {
      *(float *)(param_1 + 0x730) = fVar17 + *(float *)(param_1 + 0x764);
    }
    plVar13 = (longlong *)0x0;
    bVar15 = 0;
    plVar10 = plVar13;
    if (0 < *(int *)(param_1 + 0x72c)) {
      do {
        bVar6 = FUN_1408cd3a0(param_1,plVar10);
        bVar15 = bVar15 | bVar6;
        uVar16 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar16;
      } while ((int)uVar16 < *(int *)(param_1 + 0x72c));
      if (bVar15 != 0) {
        FUN_1408cc210(param_1);
        UActorComponent::MarkRenderDynamicDataDirty(param_1);
      }
    }
    if (*(char *)(param_1 + 0x720) != '\0') {
      uVar19 = *(undefined4 *)(param_1 + 0x728);
    }
    lVar5 = *(longlong *)(param_1 + 0x640);
    if (lVar5 != 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        fVar17 = *(float *)(param_1 + 0x760);
        uVar4 = *(undefined1 *)(param_1 + 0x721);
        fVar3 = *(float *)(param_1 + 0x724);
        fVar18 = -14400.0;
        if ((-14400.0 <= fVar3) && (fVar18 = fVar3, 14400.0 <= fVar3)) {
          fVar18 = 14400.0;
        }
        fVar3 = *(float *)(param_1 + 0x730);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_50);
        *(float *)(lVar5 + 0x3a8) = fVar18 + fVar3;
        *(undefined4 *)(lVar5 + 0x3b0) = uVar19;
        *(undefined1 *)(lVar5 + 0x3ac) = uVar4;
        *(bool *)(lVar5 + 0x3ad) = ABS(fVar17 - -1.0) <= 1e-08;
        QueryPerformanceCounter(&local_res8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_50._0_4_);
      }
      else {
        fVar17 = *(float *)(param_1 + 0x760);
        uVar4 = *(undefined1 *)(param_1 + 0x721);
        fVar3 = *(float *)(param_1 + 0x724);
        fVar18 = -14400.0;
        if ((-14400.0 <= fVar3) && (fVar18 = fVar3, 14400.0 <= fVar3)) {
          fVar18 = 14400.0;
        }
        fVar3 = *(float *)(param_1 + 0x730);
        pDVar9 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar10 = TlsGetValue(*pDVar9);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)operator_new(0x18);
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = 0;
            plVar10[1] = 0;
            *(undefined4 *)(plVar10 + 2) = 0;
            plVar13 = plVar10;
          }
          TlsSetValue(*pDVar9,plVar13);
          plVar10 = plVar13;
        }
        plVar13 = (longlong *)plVar10[1];
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)*plVar10;
          if (plVar13 == (longlong *)0x0) {
            lVar11 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar9 + 2);
            plVar10[1] = lVar11;
            if (lVar11 == 0) {
              puVar12 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar10[1] = (longlong)puVar12;
              lVar11 = 0x1f;
              do {
                puVar2 = puVar12 + 0x20;
                *puVar12 = puVar2;
                lVar11 = lVar11 + -1;
                puVar12 = puVar2;
              } while (lVar11 != 0);
              *puVar2 = 0;
            }
            plVar13 = (longlong *)plVar10[1];
            iVar14 = 0x20;
            *(undefined4 *)(plVar10 + 2) = 0x20;
          }
          else {
            iVar14 = 0x20;
            plVar10[1] = (longlong)plVar13;
            *(undefined4 *)(plVar10 + 2) = 0x20;
            *plVar10 = 0;
          }
        }
        else {
          iVar14 = (int)plVar10[2];
        }
        plVar10[1] = *plVar13;
        *(int *)(plVar10 + 2) = iVar14 + -1;
        *plVar13 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar13 + 1) = 0xff;
        local_48 = 0;
        local_40 = 0;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        *plVar13 = (longlong)&PTR_FUN_14412e2e0;
        *(undefined1 *)(plVar13 + 5) = 0;
        plVar13[6] = 0;
        plVar13[2] = lVar5;
        *(undefined1 *)((longlong)plVar13 + 0x1c) = uVar4;
        *(float *)(plVar13 + 3) = fVar18 + fVar3;
        *(undefined4 *)(plVar13 + 4) = uVar19;
        *(bool *)((longlong)plVar13 + 0x1d) = ABS(fVar17 - -1.0) <= 1e-08;
        lVar5 = plVar13[6];
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a160(plVar13,0,0xff,1);
        if (lVar5 != 0) {
          LOCK();
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1408cbb80 TriggerSerializationCrash body=654 status=ok
// SIG undefined TriggerSerializationCrash(void)

void UGeometryCacheTrackStreamable::TriggerSerializationCrash(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined8 in_stack_ffffffffffffff58;
  uint uVar12;
  uint in_stack_ffffffffffffff78;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_60 = 0x1a;
  local_68 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"/Game/CrashTest/CrashTest",0x34);
  puVar7 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar7 = local_68;
  }
  uVar2 = FUN_1417894a0(0,puVar7);
  local_58 = (undefined2 *)0x0;
  local_50 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  puVar7 = local_58;
  FGenericPlatformString::Memcpy(local_58,L"DeleteMe",0x12);
  puVar8 = &DAT_143f3eda8;
  if ((int)local_50 != 0) {
    puVar8 = puVar7;
  }
  plVar3 = (longlong *)FName::FName(local_res10,puVar8,1);
  local_res8 = 0;
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    FUN_1417846f0(uVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = GetPrivateStaticClass();
  lVar5 = FUN_1417985e0(uVar4,uVar2,lVar5,3,(ulonglong)uVar12 << 0x20,0,0,0,
                        in_stack_ffffffffffffff78 & 0xffffff00);
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  lVar9 = 0x180;
  do {
    iVar1 = *(int *)(lVar5 + 0x70);
    *(int *)(lVar5 + 0x70) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x74) < iVar1 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (lVar5 + 0x68,iVar1);
    }
    puVar10 = (undefined8 *)((longlong)iVar1 * 0x80 + *(longlong *)(lVar5 + 0x68));
    puVar11 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      FUntypedBulkData::FUntypedBulkData(puVar10 + 2);
      puVar10[2] = &PTR__scalar_deleting_destructor__143f48b90;
      puVar11 = puVar10;
    }
    *puVar11 = 0x1000000;
    *(undefined4 *)(puVar11 + 1) = 0;
    FUN_14171efb0(puVar11 + 2,2);
    puVar6 = (undefined1 *)FUntypedBulkData::Realloc(puVar11 + 2,0x1000000);
    *puVar6 = 0xff;
    puVar6[0xffffff] = 0xff;
    FUntypedBulkData::Unlock(puVar11 + 2);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar1 = *(int *)(lVar5 + 0x80) + 0x199999a;
  *(int *)(lVar5 + 0x80) = iVar1;
  if (*(int *)(lVar5 + 0x84) < iVar1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
  }
  FUN_1416fecc0(&local_48,&local_68,&DAT_1464b4428);
  local_res8 = 0;
  puVar7 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar7 = local_48;
  }
  uVar4 = FUN_141672640();
  FOutputDevice::CanBeUsedOnAnyThread(uVar2,lVar5,2,puVar7,uVar4,0,0,1,0,0,&local_res8,1);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408cbe10 UnmapChunk body=264 status=ok
// SIG undefined UnmapChunk(void)

void FGeometryCacheStreamingManager::UnmapChunk(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x18),local_res8,param_2);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)local_res8[0] * 0x18);
  }
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar1 = *plVar5;
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xc0));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xc0));
    }
    if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
      lVar4 = *(longlong *)(lVar1 + 0x70);
      if (*(longlong *)(lVar1 + 0x70) == 0) {
        lVar4 = lVar1 + 0x68;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(lVar1 + 0x78) - 1U & (longlong)param_3) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x28);
          if (*(int *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x28) == param_3) {
            if (iVar3 != -1) goto LAB_1408cbee3;
            break;
          }
          iVar3 = (int)plVar6[4];
        } while (iVar3 != -1);
      }
    }
    plVar6 = plVar7;
LAB_1408cbee3:
    plVar5 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    if (plVar5 != (longlong *)0x0) {
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + -1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xc0));
  }
  return;
}



// FUNCTION 1408cbf20 FUN_1408cbf20 body=345 status=ok
// SIG undefined FUN_1408cbf20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cbf20(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 *local_78;
  void **local_70;
  void *local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = *(int *)(param_2 + 1);
  local_68 = (void *)0x0;
  if (*(int *)(param_1 + 0x40) < local_88) {
    local_34 = 0;
    local_70 = &local_68;
    *(int *)(param_1 + 0x40) = local_88;
    local_78 = &local_58;
    local_48 = 1;
    local_88 = local_88 * 4;
    local_58 = 0;
    uStack_50 = 0;
    local_80 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_60,&DAT_146ab6e78,4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_60);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_60);
  }
  else {
    local_88 = local_88 * 4;
    local_80 = 1;
    local_68 = (void *)(**(code **)(*DAT_146ab6358 + 0x4f8))
                                 (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30),0);
  }
  _guard_xfg_dispatch_icall_nop(local_68,(void *)*param_2,(longlong)*(int *)(param_2 + 1) << 2);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1408cc080 UpdateBoundsData body=394 status=ok
// SIG undefined UpdateBoundsData(void)

undefined8
UGeometryCacheTrackStreamable::UpdateBoundsData
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int *param_5,
          float *param_6)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res8 [2];
  int local_a8 [9];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  char cStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 local_60 [12];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  FindSampleIndexesFromTime(param_1,param_2,param_3,param_4,local_res8,local_a8,local_60);
  lVar4 = *(longlong *)(param_1 + 0x78);
  pfVar2 = (float *)(lVar4 + 0x10 + (longlong)local_res8[0] * 0x28);
  fVar15 = *pfVar2;
  cVar9 = *(char *)(pfVar2 + 3);
  uVar10 = *(undefined1 *)((longlong)pfVar2 + 0xd);
  uVar11 = *(undefined1 *)((longlong)pfVar2 + 0xe);
  uVar12 = *(undefined1 *)((longlong)pfVar2 + 0xf);
  puVar1 = (undefined8 *)(lVar4 + (longlong)local_res8[0] * 0x28);
  uVar5 = puVar1[1];
  puVar3 = (undefined8 *)(lVar4 + 0x10 + (longlong)local_a8[0] * 0x28);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  puVar3 = (undefined8 *)(lVar4 + (longlong)local_a8[0] * 0x28);
  uVar8 = puVar3[1];
  fStack_54 = (float)((ulonglong)*puVar1 >> 0x20);
  fStack_50 = (float)uVar5;
  fStack_4c = (float)((ulonglong)uVar5 >> 0x20);
  local_78 = (float)uVar6;
  fStack_74 = (float)((ulonglong)uVar6 >> 0x20);
  fStack_70 = (float)uVar7;
  cStack_6c = (char)((ulonglong)uVar7 >> 0x20);
  uStack_6b = (undefined1)((ulonglong)uVar7 >> 0x28);
  uStack_6a = (undefined1)((ulonglong)uVar7 >> 0x30);
  uStack_69 = (undefined1)((ulonglong)uVar7 >> 0x38);
  fVar13 = (float)*(undefined6 *)(pfVar2 + 1);
  fVar14 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 1) >> 0x20);
  fStack_84 = (float)((ulonglong)*puVar3 >> 0x20);
  fStack_80 = (float)uVar8;
  fStack_7c = (float)((ulonglong)uVar8 >> 0x20);
  if ((cVar9 == '\0') || (cStack_6c == '\0')) {
    if (cStack_6c != '\0') {
      fVar13 = fStack_74;
      fVar14 = fStack_70;
      fStack_54 = fStack_84;
      fStack_50 = fStack_80;
      fStack_4c = fStack_7c;
      fVar15 = local_78;
      cVar9 = cStack_6c;
      uVar10 = uStack_6b;
      uVar11 = uStack_6a;
      uVar12 = uStack_69;
    }
  }
  else {
    if (fStack_84 <= fStack_54) {
      fStack_54 = fStack_84;
    }
    if (fVar13 <= fStack_74) {
      fVar13 = fStack_74;
    }
    if (fStack_80 <= fStack_50) {
      fStack_50 = fStack_80;
    }
    if (fStack_7c <= fStack_4c) {
      fStack_4c = fStack_7c;
    }
    if (fVar14 <= fStack_70) {
      fVar14 = fStack_70;
    }
    if (fVar15 <= local_78) {
      fVar15 = local_78;
    }
  }
  *param_6 = fStack_54;
  param_6[1] = fStack_50;
  param_6[2] = fStack_4c;
  param_6[3] = fVar15;
  *(ulonglong *)(param_6 + 4) = CONCAT44(fVar14,fVar13);
  *(char *)(param_6 + 6) = cVar9;
  *(undefined1 *)((longlong)param_6 + 0x19) = uVar10;
  *(undefined1 *)((longlong)param_6 + 0x1a) = uVar11;
  *(undefined1 *)((longlong)param_6 + 0x1b) = uVar12;
  if (*param_5 == local_res8[0]) {
    return 0;
  }
  *param_5 = local_res8[0];
  return 1;
}



// FUNCTION 1408cc210 FUN_1408cc210 body=676 status=ok
// SIG undefined FUN_1408cc210(void)

void FUN_1408cc210(longlong *param_1)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  undefined1 local_90 [136];
  
  lVar3 = param_1[0xea];
  cVar1 = '\0';
  lVar4 = (longlong)(int)param_1[0xeb] * 0x70 + lVar3;
  fStack_a0 = DAT_1468b5d94;
  fVar6 = DAT_1468b5d98;
  fVar7 = DAT_1468b5d90;
  local_b0 = DAT_1468b5d90;
  fStack_ac = DAT_1468b5d94;
  fStack_a8 = DAT_1468b5d98;
  if (lVar3 != lVar4) {
    do {
      pfVar2 = (float *)FBox::TransformBy(lVar3 + 0x40,local_90,lVar3);
      if (cVar1 == '\0') {
        if (*(char *)(pfVar2 + 6) != '\0') {
          local_b0 = *pfVar2;
          fStack_ac = pfVar2[1];
          fStack_a8 = pfVar2[2];
          fVar7 = pfVar2[3];
          cVar1 = SUB41(pfVar2[6],0);
          fVar6 = (float)((ulonglong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
          fStack_a0 = (float)*(undefined8 *)(pfVar2 + 4);
        }
      }
      else if (*(char *)(pfVar2 + 6) != '\0') {
        if (*pfVar2 < local_b0) {
          local_b0 = *pfVar2;
        }
        if (pfVar2[1] < fStack_ac) {
          fStack_ac = pfVar2[1];
        }
        if (pfVar2[2] < fStack_a8) {
          fStack_a8 = pfVar2[2];
        }
        if (fVar7 < pfVar2[3]) {
          fVar7 = pfVar2[3];
        }
        if (fStack_a0 < pfVar2[4]) {
          fStack_a0 = pfVar2[4];
        }
        if (fVar6 < pfVar2[5]) {
          fVar6 = pfVar2[5];
        }
      }
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != lVar4);
    if (cVar1 != '\0') {
      fVar5 = fStack_a0 - fStack_ac;
      fVar7 = fVar7 - local_b0;
      fVar6 = fVar6 - fStack_a8;
      fStack_a0 = fVar5 * 0.5;
      fStack_a4 = fVar7 * 0.5;
      fStack_9c = fVar6 * 0.5;
      local_b0 = fStack_a4 + local_b0;
      fStack_ac = fStack_a0 + fStack_ac;
      fStack_a8 = fStack_9c + fStack_a8;
      local_98 = SQRT((fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) * 0.25);
      goto LAB_1408cc446;
    }
  }
  local_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  local_98 = 0.0;
LAB_1408cc446:
  *(float *)((longlong)param_1 + 0x734) = local_b0;
  *(float *)(param_1 + 0xe7) = fStack_ac;
  *(float *)((longlong)param_1 + 0x73c) = fStack_a8;
  *(float *)(param_1 + 0xe8) = fStack_a4;
  *(ulonglong *)((longlong)param_1 + 0x744) = CONCAT44(fStack_9c,fStack_a0);
  *(float *)((longlong)param_1 + 0x74c) = local_98;
                    /* WARNING: Could not recover jumptable at 0x0001408cc4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4b8))(param_1);
  return;
}



// FUNCTION 1408cc4c0 UpdateMatrixData body=114 status=ok
// SIG undefined UpdateMatrixData(void)

ulonglong UGeometryCacheTrack::UpdateMatrixData
                    (longlong param_1,undefined4 param_2,undefined1 param_3,int *param_4,
                    undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = FindSampleIndexFromTime(param_1,param_1 + 0x40,param_2,param_3);
  iVar4 = (int)uVar5;
  if (iVar4 != *param_4) {
    *param_4 = iVar4;
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar6 = (longlong)iVar4 * 0x40;
    uVar3 = ((undefined8 *)(lVar6 + lVar2))[1];
    *param_5 = *(undefined8 *)(lVar6 + lVar2);
    param_5[1] = uVar3;
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar2);
    uVar3 = puVar1[1];
    param_5[2] = *puVar1;
    param_5[3] = uVar3;
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar2);
    uVar3 = puVar1[1];
    param_5[4] = *puVar1;
    param_5[5] = uVar3;
    puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar2);
    uVar3 = puVar1[1];
    param_5[6] = *puVar1;
    param_5[7] = uVar3;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1408cc540 UpdateMeshData body=86 status=ok
// SIG undefined UpdateMeshData(void)

undefined4
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::UpdateMeshData
          (longlong param_1,undefined4 param_2,undefined1 param_3,int *param_4,longlong *param_5)

{
  int iVar1;
  
  iVar1 = UGeometryCacheTrack::FindSampleIndexFromTime(param_1,param_1 + 0x70,param_2,param_3);
  if (iVar1 != *param_4) {
    *param_5 = (longlong)iVar1 * 0xa8 + *(longlong *)(param_1 + 0x60);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1408cc5c0 FUN_1408cc5c0 body=413 status=ok
// SIG undefined FUN_1408cc5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cc5c0(longlong param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  void *_Dst;
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined8 *local_b0;
  void **local_a8;
  void *local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar1 = (ulonglong)param_3;
  iVar2 = param_4 * param_3;
  local_b8 = *(int *)(param_1 + 0x38);
  local_98 = (void *)0x0;
  if (local_b8 < iVar2) {
    local_78 = 1;
    local_a8 = &local_98;
    local_64 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_b0 = &local_88;
    *(int *)(param_1 + 0x38) = iVar2;
    local_74 = _DAT_1468b5d78;
    uStack_70 = uRam00000001468b5d7c;
    uStack_6c = uRam00000001468b5d80;
    uStack_68 = uRam00000001468b5d84;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b8 = 1;
    (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_90,&DAT_146ab6e78,iVar2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_90);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90);
  }
  else {
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
    local_98 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                 (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30),0);
  }
  if (param_4 == param_5) {
    _guard_xfg_dispatch_icall_nop(local_98,param_2,(longlong)iVar2);
  }
  else {
    _Dst = local_98;
    if (0 < (int)param_3) {
      do {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)param_4);
        param_2 = (void *)((longlong)param_2 + (longlong)param_5);
        uVar1 = uVar1 - 1;
        _Dst = (void *)((longlong)_Dst + (longlong)param_4);
      } while (uVar1 != 0);
    }
  }
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1408cc760 FUN_1408cc760 body=1484 status=ok
// SIG undefined FUN_1408cc760(void)

void FUN_1408cc760(LARGE_INTEGER param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  bool bVar5;
  double dVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  LARGE_INTEGER local_res8;
  int local_res20 [2];
  int local_150;
  uint uStack_14c;
  int iStack_13c;
  int iStack_138;
  undefined4 local_128;
  undefined4 uStack_124;
  uint local_120;
  uint uStack_11c;
  int iStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  int local_48;
  longlong *local_40;
  
  plVar16 = (longlong *)(param_1.QuadPart + 0x18);
  iVar13 = *(int *)(param_1.QuadPart + 0x40);
  local_b8 = (uint *)(param_1.QuadPart + 0x28);
  local_120 = 0;
  uStack_11c = 1;
  iStack_10c = 0;
  uStack_108 = 0;
  if (iVar13 != 0) {
    puVar19 = *(uint **)(param_1.QuadPart + 0x38);
    if (*(uint **)(param_1.QuadPart + 0x38) == (uint *)0x0) {
      puVar19 = local_b8;
    }
    uVar18 = *puVar19;
    local_120 = 0;
    uStack_108 = 0;
    while (uVar18 == 0) {
      lVar14 = (longlong)(int)local_120;
      uStack_108 = uStack_108 + 0x20;
      uVar18 = local_120 + 1;
      bVar5 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_120;
      local_120 = uVar18;
      if (bVar5) goto LAB_1408cc842;
      uVar18 = puVar19[lVar14 + 1];
    }
    uStack_11c = uVar18 - 1 & uVar18 ^ uVar18;
    local_48 = 0x1f;
    if (uStack_11c != 0) {
      for (; uStack_11c >> local_48 == 0; local_48 = local_48 + -1) {
      }
    }
    if (uStack_11c == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_48;
    }
    iStack_10c = (uStack_108 - iVar10) + 0x1f;
    if (iVar13 < iStack_10c) {
LAB_1408cc842:
      iStack_10c = iVar13;
    }
  }
  uStack_b0 = CONCAT44(iStack_10c,0xffffffff);
  auVar9._8_4_ = uStack_108;
  auVar9._0_8_ = uStack_b0;
  auVar9._12_4_ = uStack_104;
  local_128 = SUB84(plVar16,0);
  uStack_124 = (undefined4)((ulonglong)plVar16 >> 0x20);
  local_90 = 0;
  uStack_c0 = local_120;
  uStack_bc = uStack_11c;
  local_a8._8_4_ = local_128;
  local_a8._0_8_ = auVar9._8_8_;
  local_a8._12_4_ = uStack_124;
  iVar13 = iStack_10c;
  local_res8 = param_1;
  local_e8 = plVar16;
  local_c8 = plVar16;
  local_98 = plVar16;
  if (iStack_10c < *(int *)(param_1.QuadPart + 0x40)) {
    do {
      lVar14 = *(longlong *)(*local_c8 + 8 + (longlong)iVar13 * 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (*(int *)(lVar14 + 0x1c) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(lVar14 + 0x10,0);
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar13 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  local_d0 = *(longlong **)(param_1.QuadPart + 0x68);
  local_40 = local_d0 + *(int *)(param_1.QuadPart + 0x70);
  if (local_d0 != local_40) {
    do {
      local_e0 = *local_d0;
      lVar14 = *(longlong *)(local_e0 + 0x718);
      if (lVar14 != 0) {
        plVar17 = *(longlong **)(lVar14 + 0x40);
        plVar2 = plVar17 + *(int *)(lVar14 + 0x48);
        lVar14 = local_e0;
        for (; local_d8 = plVar17, plVar17 != plVar2; plVar17 = plVar17 + 1) {
          uVar21 = 0;
          lVar3 = *plVar17;
          if (lVar3 != 0) {
            lVar11 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(plVar16,local_res20,lVar3);
              if (((local_res20[0] != -1) &&
                  (lVar11 = *plVar16 + (longlong)local_res20[0] * 0x18, lVar11 != 0)) &&
                 (plVar1 = (longlong *)(lVar11 + 8), plVar1 != (longlong *)0x0)) {
                fVar22 = (float)FUN_1408c4a70(lVar14);
                local_f8 = (int *)0x0;
                local_f0 = 0;
                fVar23 = *(float *)(lVar14 + 0x760) * *DAT_146861458 + fVar22;
                fVar7 = fVar23;
                if (fVar22 <= fVar23) {
                  fVar7 = fVar22;
                }
                if (fVar23 <= fVar22) {
                  fVar23 = fVar22;
                }
                FUN_1408c4bc0(lVar3,fVar7,fVar23,*(undefined1 *)(lVar14 + 0x721),&local_f8);
                uVar20 = (ulonglong)
                         ((longlong)(local_f8 + (int)local_f0) + (3 - (longlong)local_f8)) >> 2;
                if (local_f8 + (int)local_f0 < local_f8) {
                  uVar20 = uVar21;
                }
                piVar15 = local_f8;
                if (uVar20 != 0) {
                  do {
                    lVar14 = *plVar1;
                    iVar13 = *piVar15;
                    piVar4 = *(int **)(lVar14 + 0x10);
                    iVar10 = *(int *)(lVar14 + 0x18);
                    for (piVar12 = piVar4; piVar12 != piVar4 + iVar10; piVar12 = piVar12 + 1) {
                      if (*piVar12 == iVar13) {
                        if ((int)((longlong)piVar12 - (longlong)piVar4 >> 2) != -1)
                        goto LAB_1408ccaeb;
                        break;
                      }
                    }
                    *(int *)(lVar14 + 0x18) = iVar10 + 1;
                    if (*(int *)(lVar14 + 0x1c) < iVar10 + 1) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar14 + 0x10,iVar10);
                    }
                    *(int *)(*(longlong *)(lVar14 + 0x10) + (longlong)iVar10 * 4) = iVar13;
LAB_1408ccaeb:
                    piVar15 = piVar15 + 1;
                    uVar21 = uVar21 + 1;
                    plVar17 = local_d8;
                  } while (uVar21 != uVar20);
                }
                plVar16 = local_e8;
                lVar14 = local_e0;
                if (local_f8 != (int *)0x0) {
                  FMemory::Free(local_f8);
                  plVar16 = local_e8;
                  lVar14 = local_e0;
                }
              }
            }
          }
        }
      }
      local_d0 = local_d0 + 1;
      param_1 = local_res8;
    } while (local_d0 != local_40);
  }
  QueryPerformanceCounter(&local_res8);
  local_78 = (uint *)(plVar16 + 2);
  dVar6 = (double)local_res8.QuadPart * DAT_1468b02f8;
  LOCK();
  *(undefined4 *)(param_1.QuadPart + 0x10) = 0;
  UNLOCK();
  local_150 = 0;
  uStack_14c = 1;
  iStack_13c = 0;
  iStack_138 = 0;
  *(double *)(param_1.QuadPart + 0xa0) = dVar6 + 16777216.0;
  iVar13 = (int)plVar16[5];
  if (iVar13 != 0) {
    puVar19 = (uint *)plVar16[4];
    if ((uint *)plVar16[4] == (uint *)0x0) {
      puVar19 = local_78;
    }
    uVar18 = *puVar19;
    while (uVar18 == 0) {
      lVar14 = (longlong)local_150;
      iStack_138 = iStack_138 + 0x20;
      iVar10 = local_150 + 1;
      bVar5 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_150;
      local_150 = iVar10;
      if (bVar5) goto LAB_1408ccc4d;
      uVar18 = puVar19[lVar14 + 1];
    }
    uStack_14c = -uVar18 & uVar18;
    iVar10 = 0x1f;
    if (uStack_14c != 0) {
      for (; uStack_14c >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_14c == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_13c = (iStack_138 - iVar10) + 0x1f;
    if (iVar13 < iStack_13c) {
LAB_1408ccc4d:
      iStack_13c = iVar13;
    }
  }
  uStack_70 = CONCAT44(iStack_13c,0xffffffff);
  auVar8._8_4_ = iStack_138;
  auVar8._0_8_ = uStack_70;
  auVar8._12_4_ = iStack_10c;
  local_128 = SUB84(plVar16,0);
  uStack_124 = (undefined4)((ulonglong)plVar16 >> 0x20);
  uStack_100 = auVar8._8_8_;
  local_50 = 0;
  iStack_80 = local_150;
  uStack_7c = uStack_14c;
  local_68._8_4_ = local_128;
  local_68._0_8_ = uStack_100;
  local_68._12_4_ = uStack_124;
  local_88 = plVar16;
  local_58 = plVar16;
  if (iStack_13c < (int)plVar16[5]) {
    do {
      FUN_1408ccd30(*(undefined8 *)(*local_88 + 8 + (longlong)iStack_13c * 0x18));
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
      iStack_13c = uStack_70._4_4_;
    } while (uStack_70._4_4_ < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1408ccd30 FUN_1408ccd30 body=1648 status=ok
// SIG undefined FUN_1408ccd30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408ccd30(longlong *param_1)

{
  WriteBytesMem *this;
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *_Src;
  longlong *plVar8;
  uchar *puVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_c0;
  byte local_b8;
  int *local_b0;
  int *local_a8;
  longlong *local_a0;
  int iStack_98;
  undefined4 uStack_94;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  local_b0 = (int *)param_1[2];
  local_a8 = local_b0 + (int)param_1[3];
  if (local_b0 != local_a8) {
    do {
      uVar16 = 0;
      plVar8 = param_1 + 4;
      iVar14 = *local_b0;
      piVar5 = (int *)*plVar8;
      piVar15 = piVar5 + (int)param_1[5];
      for (; piVar5 != piVar15; piVar5 = piVar5 + 1) {
        if (*piVar5 == iVar14) goto LAB_1408cd0fc;
      }
      piVar15 = (int *)param_1[0x12];
      lVar11 = (longlong)(int)param_1[0x13];
      piVar5 = piVar15;
      if (piVar15 != piVar15 + lVar11) {
LAB_1408cce14:
        if (*piVar5 != iVar14) goto code_r0x0001408cce1c;
        if ((int)param_1[0x13] != 0) {
          local_b8 = *piVar15 != iVar14;
          uVar17 = uVar16;
          uVar20 = uVar16;
          do {
            iVar13 = (int)uVar16;
            uVar17 = uVar17 + 1;
            uVar16 = (ulonglong)(iVar13 + 1);
            if ((longlong)uVar17 < lVar11) {
              piVar15 = (int *)(param_1[0x12] + uVar17 * 4);
              do {
                if ((bool)local_b8 != (*piVar15 != iVar14)) break;
                uVar16 = (ulonglong)((int)uVar16 + 1);
                uVar17 = uVar17 + 1;
                piVar15 = piVar15 + 1;
              } while ((longlong)uVar17 < lVar11);
            }
            iVar10 = (int)uVar16 - iVar13;
            if (local_b8 != 0) {
              iVar19 = (int)uVar20;
              if (iVar19 != iVar13) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_1[0x12] + (longlong)iVar19 * 4),
                           (void *)(param_1[0x12] + (longlong)iVar13 * 4),(longlong)iVar10 << 2);
              }
              uVar20 = (ulonglong)(uint)(iVar19 + iVar10);
            }
            local_b8 = local_b8 ^ 1;
          } while ((longlong)uVar17 < lVar11);
          *(int *)(param_1 + 0x13) = (int)uVar20;
        }
        iVar13 = (int)param_1[5];
        *(int *)(param_1 + 5) = iVar13 + 1;
        if (*(int *)((longlong)param_1 + 0x2c) < iVar13 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar13);
        }
        *(int *)(param_1[4] + (longlong)iVar13 * 4) = iVar14;
        goto LAB_1408cd0fc;
      }
LAB_1408cce25:
      plVar1 = param_1 + 0x10;
      piVar5 = (int *)*plVar1;
      piVar15 = piVar5 + (int)param_1[0x11];
      for (; piVar5 != piVar15; piVar5 = piVar5 + 1) {
        if (*piVar5 == iVar14) {
          bVar2 = true;
          goto LAB_1408cce53;
        }
      }
      bVar2 = false;
LAB_1408cce53:
      if (!bVar2) {
        piVar15 = (int *)((longlong)iVar14 * 0x80 + *(longlong *)(*param_1 + 0x68));
        this = (WriteBytesMem *)(piVar15 + 4);
        cVar3 = FUntypedBulkData::IsBulkDataLoaded(this);
        if (cVar3 == '\0') {
          lVar11 = FStreamingGeometryCacheData::AddResidentChunk(param_1,iVar14,piVar15);
          if (param_1[1] == 0) {
            uVar7 = FPlatformFileManager::Get();
            plVar8 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar7);
            if (piVar15[0x1c] == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = *(undefined2 **)(piVar15 + 0x1a);
            }
            lVar22 = (**(code **)(*plVar8 + 0x100))(plVar8,puVar12);
            param_1[1] = lVar22;
          }
          local_58 = (longlong *)0x0;
          local_48 = 0;
          local_a0 = param_1;
          iStack_98 = iVar14;
          puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_78);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &PTR_FUN_143f77c18;
            puVar6[1] = local_a0;
            puVar6[2] = CONCAT44(uStack_94,iStack_98);
          }
          local_88[0] = FUN_1408bfc50;
          iVar13 = *(int *)(lVar11 + 8);
          lVar22 = *(longlong *)param_1[1];
          puVar9 = AK::WriteBytesMem::Bytes(this);
          local_c0 = 0;
          local_c8 = local_88;
          lVar22 = (**(code **)(lVar22 + 0x10))(param_1[1],puVar9,(longlong)iVar13,2);
          *(longlong *)(lVar11 + 0x10) = lVar22;
          if (lVar22 == 0) {
            if (local_48 != 0) {
              plVar8 = local_78;
              if (local_58 != (longlong *)0x0) {
                plVar8 = local_58;
              }
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8,0);
              }
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
            goto LAB_1408cd34d;
          }
          iVar13 = (int)param_1[0x11];
          *(int *)(param_1 + 0x11) = iVar13 + 1;
          if (*(int *)((longlong)param_1 + 0x8c) < iVar13 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar13);
          }
          *(int *)(*plVar1 + (longlong)iVar13 * 4) = iVar14;
          if (local_48 != 0) {
            plVar8 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar8 = local_58;
            }
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x10))(plVar8,0);
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        else {
          puVar6 = (undefined8 *)
                   FStreamingGeometryCacheData::AddResidentChunk(param_1,iVar14,piVar15);
          uVar7 = FMemory::Malloc((longlong)*piVar15,0);
          *puVar6 = uVar7;
          _Src = (void *)FUntypedBulkData::LockReadOnly(this);
          _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)*piVar15);
          FUntypedBulkData::Unlock(this);
          iVar13 = (int)param_1[5];
          *(int *)(param_1 + 5) = iVar13 + 1;
          if (*(int *)((longlong)param_1 + 0x2c) < iVar13 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8,iVar13);
          }
          *(int *)(*plVar8 + (longlong)iVar13 * 4) = iVar14;
        }
      }
LAB_1408cd0fc:
      local_b0 = local_b0 + 1;
    } while (local_b0 != local_a8);
  }
  FUN_1408c9410(param_1);
  iVar14 = (int)param_1[5] + -1;
  if (-1 < iVar14) {
    lVar11 = (longlong)iVar14 * 4;
    lVar21 = (longlong)(int)param_1[5] << 2;
    lVar22 = lVar11;
    do {
      piVar5 = (int *)param_1[2];
      piVar15 = piVar5 + (int)param_1[3];
      if (piVar5 != piVar15) {
        do {
          if (*piVar5 == *(int *)(lVar22 + param_1[4])) goto LAB_1408cd1cb;
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar15);
      }
      TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                (param_1 + 0x12,param_1[4] + lVar11);
      iVar13 = (int)param_1[5];
      iVar10 = (iVar13 - iVar14) + -1;
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_1[4] + lVar11),(void *)(param_1[4] + lVar21),(longlong)iVar10 << 2
                  );
        iVar13 = (int)param_1[5];
      }
      *(int *)(param_1 + 5) = iVar13 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 4);
LAB_1408cd1cb:
      lVar21 = lVar21 + -4;
      lVar11 = lVar11 + -4;
      lVar22 = lVar22 + -4;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  iVar14 = (int)param_1[0x13] + -1;
  if (-1 < iVar14) {
    lVar11 = (longlong)iVar14 * 4;
    lVar21 = (longlong)(int)param_1[0x13] << 2;
    lVar22 = lVar11;
    do {
      if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
        plVar8 = (longlong *)param_1[0xe];
        if ((longlong *)param_1[0xe] == (longlong *)0x0) {
          plVar8 = param_1 + 0xd;
        }
        iVar13 = *(int *)((longlong)plVar8 +
                         ((longlong)(int)param_1[0xf] - 1U &
                         (longlong)*(int *)(lVar11 + param_1[0x12])) * 4);
        if (iVar13 != -1) {
          do {
            lVar18 = param_1[6] + (longlong)iVar13 * 0x28;
            if (*(int *)(param_1[6] + (longlong)iVar13 * 0x28) == *(int *)(lVar11 + param_1[0x12]))
            {
              if (iVar13 != -1) goto LAB_1408cd2cc;
              break;
            }
            iVar13 = *(int *)(lVar18 + 0x20);
          } while (iVar13 != -1);
        }
      }
      lVar18 = 0;
LAB_1408cd2cc:
      if (*(int *)(lVar18 + 0x14) == 0) {
        if (*(longlong *)(lVar18 + 8) != 0) {
          FMemory::Free();
        }
        *(undefined8 *)(lVar18 + 8) = 0;
        *(undefined8 *)(lVar18 + 0x18) = 0;
        *(undefined8 *)(lVar18 + 0x10) = 0;
        iVar13 = (int)param_1[0x13];
        iVar10 = (iVar13 - iVar14) + -1;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0x12] + lVar22),(void *)(param_1[0x12] + lVar21),
                     (longlong)iVar10 << 2);
          iVar13 = (int)param_1[0x13];
        }
        *(int *)(param_1 + 0x13) = iVar13 + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x12);
      }
      lVar21 = lVar21 + -4;
      lVar22 = lVar22 + -4;
      lVar11 = lVar11 + -4;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
LAB_1408cd34d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
code_r0x0001408cce1c:
  piVar5 = piVar5 + 1;
  if (piVar5 == piVar15 + lVar11) goto LAB_1408cce25;
  goto LAB_1408cce14;
}



// FUNCTION 1408cd3a0 FUN_1408cd3a0 body=338 status=ok
// SIG undefined FUN_1408cd3a0(void)

undefined1 FUN_1408cd3a0(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  fVar5 = *(float *)(param_1 + 0x724);
  puVar4 = (undefined8 *)((longlong)param_2 * 0x70 + *(longlong *)(param_1 + 0x750));
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x40) + (longlong)param_2 * 8);
  if (-14400.0 <= fVar5) {
    if (14400.0 <= fVar5) {
      fVar5 = 14400.0;
    }
  }
  else {
    fVar5 = -14400.0;
  }
  cVar2 = (**(code **)(*plVar1 + 0x278))
                    (plVar1,fVar5 + *(float *)(param_1 + 0x730),*(undefined1 *)(param_1 + 0x721),
                     (longlong)puVar4 + 0x5c,&local_58);
  fVar5 = *(float *)(param_1 + 0x724);
  fVar6 = -14400.0;
  if ((-14400.0 <= fVar5) && (fVar6 = fVar5, 14400.0 <= fVar5)) {
    fVar6 = 14400.0;
  }
  cVar3 = (**(code **)(*plVar1 + 0x280))
                    (plVar1,fVar6 + *(float *)(param_1 + 0x730),*(undefined1 *)(param_1 + 0x721),
                     *(float *)(param_1 + 0x760) <= 0.0 && *(float *)(param_1 + 0x760) != 0.0,
                     puVar4 + 0xc,&local_78);
  if (cVar3 != '\0') {
    puVar4[8] = local_78;
    puVar4[9] = uStack_70;
    puVar4[10] = local_68;
    *(undefined4 *)(puVar4 + 0xb) = local_60;
  }
  if (cVar2 == '\0') {
    if (cVar3 == '\0') {
      return 0;
    }
  }
  else {
    *puVar4 = local_58;
    puVar4[1] = uStack_50;
    puVar4[2] = local_48;
    puVar4[3] = uStack_40;
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
    puVar4[6] = local_28;
    puVar4[7] = uStack_20;
  }
  return 1;
}



// FUNCTION 1408cd500 FUN_1408cd500 body=47 status=ok
// SIG undefined FUN_1408cd500(void)

longlong FUN_1408cd500(void)

{
  if (DAT_1468616f8 == 0) {
    FUN_141786440(&DAT_1468616f8,&PTR_GetPrivateStaticClass_14412e570);
  }
  return DAT_1468616f8;
}



// FUNCTION 1408cd530 FUN_1408cd530 body=47 status=ok
// SIG undefined FUN_1408cd530(void)

longlong FUN_1408cd530(void)

{
  if (DAT_1468616f0 == 0) {
    FUN_141786a30(&DAT_1468616f0,&PTR_FUN_14627f090);
  }
  return DAT_1468616f0;
}



// FUNCTION 1408cd580 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGeometryCacheTrackStreamable::GetPrivateStaticClass(void)

{
  if (DAT_146861710 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheTrackStreamable",&DAT_146861710,
                  FUN_140447710,400,0x10000000,0,L"Engine",&LAB_1408ce500,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGeometryCacheTrack::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861710;
}



// FUNCTION 1408cd630 FUN_1408cd630 body=47 status=ok
// SIG undefined FUN_1408cd630(void)

longlong FUN_1408cd630(void)

{
  if (DAT_1468615a0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468615a0,&PTR_s__Script_GeometryCache_144130248);
  }
  return DAT_1468615a0;
}



// FUNCTION 1408cd680 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDEPRECATED_GeometryCacheTrack_TransformAnimation::GetPrivateStaticClass(void)

{
  if (DAT_146861728 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheTrack_TransformAnimation",&DAT_146861728,
                  StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformAnimation,0x100,
                  0x12000000,0,L"Engine",&LAB_1408ce420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGeometryCacheTrack::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861728;
}



// FUNCTION 1408cd730 FUN_1408cd730 body=47 status=ok
// SIG undefined FUN_1408cd730(void)

longlong FUN_1408cd730(void)

{
  if (DAT_146861720 == 0) {
    FUN_141786440(&DAT_146861720,&PTR_GetPrivateStaticClass_14412ead0);
  }
  return DAT_146861720;
}



// FUNCTION 1408cd760 FUN_1408cd760 body=47 status=ok
// SIG undefined FUN_1408cd760(void)

longlong FUN_1408cd760(void)

{
  if (DAT_146861718 == 0) {
    FUN_141786a30(&DAT_146861718,&PTR_FUN_14627f220);
  }
  return DAT_146861718;
}



// FUNCTION 1408cd7a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::GetPrivateStaticClass(void)

{
  if (DAT_146861740 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheTrack_TransformGroupAnimation",
                  &DAT_146861740,
                  StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation,0x100,
                  0x12000000,0,L"Engine",&LAB_1408ce420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGeometryCacheTrack::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861740;
}



// FUNCTION 1408cd850 FUN_1408cd850 body=47 status=ok
// SIG undefined FUN_1408cd850(void)

longlong FUN_1408cd850(void)

{
  if (DAT_146861738 == 0) {
    FUN_141786440(&DAT_146861738,&PTR_GetPrivateStaticClass_14412ed00);
  }
  return DAT_146861738;
}



// FUNCTION 1408cd880 FUN_1408cd880 body=47 status=ok
// SIG undefined FUN_1408cd880(void)

longlong FUN_1408cd880(void)

{
  if (DAT_146861730 == 0) {
    FUN_141786a30(&DAT_146861730,&PTR_FUN_14627f2d0);
  }
  return DAT_146861730;
}



// FUNCTION 1408cd8c0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UGeometryCacheCodecBase::StaticClass(void)

{
  if (DAT_1468615c8 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheCodecBase",&DAT_1468615c8,FUN_140447710,
                  0x38,0x10000000,0,L"Engine",&LAB_1408ce460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468615c8;
}



// FUNCTION 1408cd960 FUN_1408cd960 body=47 status=ok
// SIG undefined FUN_1408cd960(void)

longlong FUN_1408cd960(void)

{
  if (DAT_1468615c0 == 0) {
    FUN_141786440(&DAT_1468615c0,&PTR_StaticClass_14412ef00);
  }
  return DAT_1468615c0;
}



// FUNCTION 1408cd9a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UGeometryCacheCodecRaw::StaticClass(void)

{
  if (DAT_1468615d8 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheCodecRaw",&DAT_1468615d8,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",&LAB_1408ce480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGeometryCacheCodecBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468615d8;
}



// FUNCTION 1408cda60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UGeometryCacheCodecV1::StaticClass(void)

{
  if (DAT_1468615e8 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheCodecV1",&DAT_1468615e8,FUN_140447710,0x40
                  ,0x10000000,0,L"Engine",&LAB_1408ce4a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGeometryCacheCodecBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468615e8;
}



// FUNCTION 1408cdb20 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UGeometryCache::StaticClass(void)

{
  if (DAT_146861598 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCache",&DAT_146861598,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",&LAB_1408ce440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146861598;
}



// FUNCTION 1408cdbc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheckBox::GetPrivateStaticClass(void)

{
  if (DAT_1468616a8 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheComponent",&DAT_1468616a8,FUN_1408cead0,
                  0x770,0x10000000,0,L"Engine",&LAB_1408ce4c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429bed90,&LAB_140447700,0);
  }
  return DAT_1468616a8;
}



// FUNCTION 1408cdc70 FUN_1408cdc70 body=47 status=ok
// SIG undefined FUN_1408cdc70(void)

longlong FUN_1408cdc70(void)

{
  if (DAT_1468616a0 == 0) {
    FUN_141786440(&DAT_1468616a0,&PTR_GetPrivateStaticClass_14412fb90);
  }
  return DAT_1468616a0;
}



// FUNCTION 1408cdca0 FUN_1408cdca0 body=47 status=ok
// SIG undefined FUN_1408cdca0(void)

longlong FUN_1408cdca0(void)

{
  if (DAT_146861600 == 0) {
    FUN_141786a30(&DAT_146861600,&PTR_FUN_14627e230);
  }
  return DAT_146861600;
}



// FUNCTION 1408cdcd0 FUN_1408cdcd0 body=47 status=ok
// SIG undefined FUN_1408cdcd0(void)

longlong FUN_1408cdcd0(void)

{
  if (DAT_146861608 == 0) {
    FUN_141786a30(&DAT_146861608,&PTR_FUN_14627e2b0);
  }
  return DAT_146861608;
}



// FUNCTION 1408cdd00 FUN_1408cdd00 body=47 status=ok
// SIG undefined FUN_1408cdd00(void)

longlong FUN_1408cdd00(void)

{
  if (DAT_146861610 == 0) {
    FUN_141786a30(&DAT_146861610,&PTR_FUN_14627e330);
  }
  return DAT_146861610;
}



// FUNCTION 1408cdd30 FUN_1408cdd30 body=47 status=ok
// SIG undefined FUN_1408cdd30(void)

longlong FUN_1408cdd30(void)

{
  if (DAT_146861618 == 0) {
    FUN_141786a30(&DAT_146861618,&PTR_FUN_14627e3b0);
  }
  return DAT_146861618;
}



// FUNCTION 1408cdd60 FUN_1408cdd60 body=47 status=ok
// SIG undefined FUN_1408cdd60(void)

longlong FUN_1408cdd60(void)

{
  if (DAT_146861620 == 0) {
    FUN_141786a30(&DAT_146861620,&PTR_FUN_14627e430);
  }
  return DAT_146861620;
}



// FUNCTION 1408cdd90 FUN_1408cdd90 body=47 status=ok
// SIG undefined FUN_1408cdd90(void)

longlong FUN_1408cdd90(void)

{
  if (DAT_146861628 == 0) {
    FUN_141786a30(&DAT_146861628,&PTR_FUN_14627e4b0);
  }
  return DAT_146861628;
}



// FUNCTION 1408cddc0 FUN_1408cddc0 body=47 status=ok
// SIG undefined FUN_1408cddc0(void)

longlong FUN_1408cddc0(void)

{
  if (DAT_146861630 == 0) {
    FUN_141786a30(&DAT_146861630,&PTR_FUN_14627e540);
  }
  return DAT_146861630;
}



// FUNCTION 1408cddf0 FUN_1408cddf0 body=47 status=ok
// SIG undefined FUN_1408cddf0(void)

longlong FUN_1408cddf0(void)

{
  if (DAT_146861638 == 0) {
    FUN_141786a30(&DAT_146861638,&PTR_FUN_14627e5d0);
  }
  return DAT_146861638;
}



// FUNCTION 1408cde20 FUN_1408cde20 body=47 status=ok
// SIG undefined FUN_1408cde20(void)

longlong FUN_1408cde20(void)

{
  if (DAT_146861640 == 0) {
    FUN_141786a30(&DAT_146861640,&PTR_FUN_14627e660);
  }
  return DAT_146861640;
}



// FUNCTION 1408cde50 FUN_1408cde50 body=47 status=ok
// SIG undefined FUN_1408cde50(void)

longlong FUN_1408cde50(void)

{
  if (DAT_146861648 == 0) {
    FUN_141786a30(&DAT_146861648,&PTR_FUN_14627e6a0);
  }
  return DAT_146861648;
}



// FUNCTION 1408cde80 FUN_1408cde80 body=47 status=ok
// SIG undefined FUN_1408cde80(void)

longlong FUN_1408cde80(void)

{
  if (DAT_146861650 == 0) {
    FUN_141786a30(&DAT_146861650,&PTR_FUN_14627e6e0);
  }
  return DAT_146861650;
}



// FUNCTION 1408cdeb0 FUN_1408cdeb0 body=47 status=ok
// SIG undefined FUN_1408cdeb0(void)

longlong FUN_1408cdeb0(void)

{
  if (DAT_146861658 == 0) {
    FUN_141786a30(&DAT_146861658,&PTR_FUN_14627e720);
  }
  return DAT_146861658;
}



// FUNCTION 1408cdee0 FUN_1408cdee0 body=47 status=ok
// SIG undefined FUN_1408cdee0(void)

longlong FUN_1408cdee0(void)

{
  if (DAT_146861660 == 0) {
    FUN_141786a30(&DAT_146861660,&PTR_FUN_14627e760);
  }
  return DAT_146861660;
}



// FUNCTION 1408cdf10 FUN_1408cdf10 body=47 status=ok
// SIG undefined FUN_1408cdf10(void)

longlong FUN_1408cdf10(void)

{
  if (DAT_146861668 == 0) {
    FUN_141786a30(&DAT_146861668,&PTR_FUN_14627e7a0);
  }
  return DAT_146861668;
}



// FUNCTION 1408cdf40 FUN_1408cdf40 body=47 status=ok
// SIG undefined FUN_1408cdf40(void)

longlong FUN_1408cdf40(void)

{
  if (DAT_146861670 == 0) {
    FUN_141786a30(&DAT_146861670,&PTR_FUN_14627e870);
  }
  return DAT_146861670;
}



// FUNCTION 1408cdf70 FUN_1408cdf70 body=47 status=ok
// SIG undefined FUN_1408cdf70(void)

longlong FUN_1408cdf70(void)

{
  if (DAT_146861678 == 0) {
    FUN_141786a30(&DAT_146861678,&PTR_FUN_14627e900);
  }
  return DAT_146861678;
}



// FUNCTION 1408cdfa0 FUN_1408cdfa0 body=47 status=ok
// SIG undefined FUN_1408cdfa0(void)

longlong FUN_1408cdfa0(void)

{
  if (DAT_146861680 == 0) {
    FUN_141786a30(&DAT_146861680,&PTR_FUN_14627e980);
  }
  return DAT_146861680;
}



// FUNCTION 1408cdfd0 FUN_1408cdfd0 body=47 status=ok
// SIG undefined FUN_1408cdfd0(void)

longlong FUN_1408cdfd0(void)

{
  if (DAT_146861688 == 0) {
    FUN_141786a30(&DAT_146861688,&PTR_FUN_14627ea00);
  }
  return DAT_146861688;
}



// FUNCTION 1408ce000 FUN_1408ce000 body=47 status=ok
// SIG undefined FUN_1408ce000(void)

longlong FUN_1408ce000(void)

{
  if (DAT_146861690 == 0) {
    FUN_141786a30(&DAT_146861690,&PTR_FUN_14627ea40);
  }
  return DAT_146861690;
}



// FUNCTION 1408ce030 FUN_1408ce030 body=47 status=ok
// SIG undefined FUN_1408ce030(void)

longlong FUN_1408ce030(void)

{
  if (DAT_146861698 == 0) {
    FUN_141786a30(&DAT_146861698,&PTR_FUN_14627eba0);
  }
  return DAT_146861698;
}



// FUNCTION 1408ce060 FUN_1408ce060 body=53 status=ok
// SIG undefined FUN_1408ce060(void)

void FUN_1408ce060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_144130280;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1408ce0a0 FUN_1408ce0a0 body=53 status=ok
// SIG undefined FUN_1408ce0a0(void)

void FUN_1408ce0a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_1441304e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408ce0e0 FUN_1408ce0e0 body=53 status=ok
// SIG undefined FUN_1408ce0e0(void)

void FUN_1408ce0e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_143ffdea8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1408ce120 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UGeometryCacheTrack::StaticClass(void)

{
  if (DAT_1468616e8 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheTrack",&DAT_1468616e8,FUN_140447710,0x58,
                  0x10000000,0,L"Engine",&LAB_1408ce4e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468616e8;
}



// FUNCTION 1408ce1d0 FUN_1408ce1d0 body=47 status=ok
// SIG undefined FUN_1408ce1d0(void)

longlong FUN_1408ce1d0(void)

{
  if (DAT_1468616e0 == 0) {
    FUN_141786440(&DAT_1468616e0,&PTR_StaticClass_14412fea0);
  }
  return DAT_1468616e0;
}



// FUNCTION 1408ce210 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::GetPrivateStaticClass(void)

{
  if (DAT_146861700 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheTrack_FlipbookAnimation",&DAT_146861700,
                  StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation,0x80,
                  0x12000000,0,L"Engine",&LAB_1408ce400,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGeometryCacheTrack::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861700;
}



// FUNCTION 1408ce2c0 FUN_1408ce2c0 body=162 status=ok
// SIG undefined FUN_1408ce2c0(void)

longlong FUN_1408ce2c0(void)

{
  if (DAT_1468615b8 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCache",L"GeometryCacheActor",&DAT_1468615b8,FUN_1408cea10,0x460,
                  0x10000000,0,L"Engine",&LAB_1408ce3e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468615b8;
}



// FUNCTION 1408ce370 FUN_1408ce370 body=47 status=ok
// SIG undefined FUN_1408ce370(void)

longlong FUN_1408ce370(void)

{
  if (DAT_1468615b0 == 0) {
    FUN_141786440(&DAT_1468615b0,&PTR_FUN_144130030);
  }
  return DAT_1468615b0;
}



// FUNCTION 1408ce3a0 FUN_1408ce3a0 body=47 status=ok
// SIG undefined FUN_1408ce3a0(void)

longlong FUN_1408ce3a0(void)

{
  if (DAT_1468615a8 == 0) {
    FUN_141786a30(&DAT_1468615a8,&PTR_FUN_14627e000);
  }
  return DAT_1468615a8;
}



// FUNCTION 1408ce5d0 Copy body=514 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FGeometryCacheMeshData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_4 != 0) {
    piVar6 = (int *)(param_3 + 0x48);
    do {
      TArray<FVector,FDefaultAllocator>::operator=(param_2,piVar6 + -0x12);
      piVar1 = (int *)(param_2 + 0x10);
      if (piVar1 != piVar6 + -0xe) {
        iVar2 = piVar6[-0xc];
        pvVar3 = *(void **)(piVar6 + -0xe);
        *(int *)(param_2 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x20,piVar6 + -10);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x30,piVar6 + -6);
      piVar1 = (int *)(param_2 + 0x40);
      if (piVar1 != piVar6 + -2) {
        iVar2 = *piVar6;
        pvVar3 = *(void **)(piVar6 + -2);
        *(int *)(param_2 + 0x48) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x4c) == 0)) {
          *(undefined4 *)(param_2 + 0x4c) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 2);
        }
      }
      TArray<FVector,FDefaultAllocator>::operator=(param_2 + 0x50,piVar6 + 2);
      piVar1 = (int *)(param_2 + 0x60);
      if (piVar1 != piVar6 + 6) {
        iVar2 = piVar6[8];
        pvVar3 = *(void **)(piVar6 + 6);
        *(int *)(param_2 + 0x68) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 * 0xc);
        }
      }
      iVar2 = piVar6[0xb];
      iVar4 = piVar6[0xc];
      iVar5 = piVar6[0xd];
      piVar1 = (int *)(param_2 + 0x90);
      *(int *)(param_2 + 0x70) = piVar6[10];
      *(int *)(param_2 + 0x74) = iVar2;
      *(int *)(param_2 + 0x78) = iVar4;
      *(int *)(param_2 + 0x7c) = iVar5;
      *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(piVar6 + 0xe);
      *(int *)(param_2 + 0x88) = piVar6[0x10];
      if (piVar1 != piVar6 + 0x12) {
        iVar2 = piVar6[0x14];
        pvVar3 = *(void **)(piVar6 + 0x12);
        *(int *)(param_2 + 0x98) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x9c) == 0)) {
          *(undefined4 *)(param_2 + 0x9c) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 2);
        }
      }
      piVar1 = piVar6 + 0x16;
      piVar6 = piVar6 + 0x2a;
      *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xa8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408ce860 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC(void)

{
  return 0x7552c71c;
}



// FUNCTION 1408ce870 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC(void)

{
  return 0xb80fe696;
}



// FUNCTION 1408ce880 Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_CRC(void)

{
  return 0x2e93b450;
}



// FUNCTION 1408ce890 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC(void)

{
  return 0xd2daac35;
}



// FUNCTION 1408ce8c0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_1408ca3d0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408ce930 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_1408ca700(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408ce9a0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_1408ca7c0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408cea10 FUN_1408cea10 body=34 status=ok
// SIG undefined FUN_1408cea10(void)

void FUN_1408cea10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408ce2c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetGeometryCacheComponent_144130270,1);
  return;
}



// FUNCTION 1408cea40 StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation body=34 status=ok
// SIG undefined StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation(void)

void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::
     StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddMeshSample_1441305f8,1);
  return;
}



// FUNCTION 1408cea70 StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformAnimation body=34 status=ok
// SIG undefined StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformAnimation(void)

void UDEPRECATED_GeometryCacheTrack_TransformAnimation::
     StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformAnimation(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetMesh_144130608,1);
  return;
}



// FUNCTION 1408ceaa0 StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation body=34 status=ok
// SIG undefined StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation(void)

void UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::
     StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetMesh_144130618,1);
  return;
}



// FUNCTION 1408cead0 FUN_1408cead0 body=34 status=ok
// SIG undefined FUN_1408cead0(void)

void FUN_1408cead0(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBox::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAnimationTime_1441303a0,0x14);
  return;
}



// FUNCTION 1408ceb00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGeometryCacheMeshBatchInfo::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468616d0 == 0) {
    if (DAT_1468615a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468615a0,&PTR_s__Script_GeometryCache_144130248);
    }
    lVar1 = DAT_1468615a0;
    uVar2 = Get_Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_CRC();
    DAT_1468616d0 = GetStaticStruct(FUN_1408cedc0,lVar1,L"GeometryCacheMeshBatchInfo",0xc,uVar2);
  }
  return;
}



// FUNCTION 1408ceb80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGeometryCacheMeshData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468616b0 == 0) {
    if (DAT_1468615a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468615a0,&PTR_s__Script_GeometryCache_144130248);
    }
    lVar1 = DAT_1468615a0;
    uVar2 = Get_Z_Construct_UScriptStruct_FGeometryCacheMeshData_CRC();
    DAT_1468616b0 = GetStaticStruct(FUN_1408cedf0,lVar1,L"GeometryCacheMeshData",0xa8,uVar2);
  }
  return;
}



// FUNCTION 1408cec00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGeometryCacheVertexInfo::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468616c0 == 0) {
    if (DAT_1468615a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468615a0,&PTR_s__Script_GeometryCache_144130248);
    }
    lVar1 = DAT_1468615a0;
    uVar2 = Get_Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_CRC();
    DAT_1468616c0 = GetStaticStruct(FUN_1408cee20,lVar1,L"GeometryCacheVertexInfo",8,uVar2);
  }
  return;
}



// FUNCTION 1408cec80 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTrackRenderData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468615f0 == 0) {
    if (DAT_1468615a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468615a0,&PTR_s__Script_GeometryCache_144130248);
    }
    lVar1 = DAT_1468615a0;
    uVar2 = Get_Z_Construct_UScriptStruct_FTrackRenderData_CRC();
    DAT_1468615f0 = GetStaticStruct(FUN_1408cee50,lVar1,L"TrackRenderData",0x70,uVar2);
  }
  return;
}



// FUNCTION 1408ced00 FUN_1408ced00 body=47 status=ok
// SIG undefined FUN_1408ced00(void)

longlong FUN_1408ced00(void)

{
  if (DAT_146861590 == 0) {
    FUN_141786440(&DAT_146861590,&PTR_StaticClass_14412e7c0);
  }
  return DAT_146861590;
}



// FUNCTION 1408ced30 FUN_1408ced30 body=47 status=ok
// SIG undefined FUN_1408ced30(void)

longlong FUN_1408ced30(void)

{
  if (DAT_1468615d0 == 0) {
    FUN_141786440(&DAT_1468615d0,&PTR_StaticClass_14412f060);
  }
  return DAT_1468615d0;
}



// FUNCTION 1408ced60 FUN_1408ced60 body=47 status=ok
// SIG undefined FUN_1408ced60(void)

longlong FUN_1408ced60(void)

{
  if (DAT_1468615e0 == 0) {
    FUN_141786440(&DAT_1468615e0,&PTR_StaticClass_14412f1b0);
  }
  return DAT_1468615e0;
}



// FUNCTION 1408ced90 FUN_1408ced90 body=47 status=ok
// SIG undefined FUN_1408ced90(void)

longlong FUN_1408ced90(void)

{
  if (DAT_146861708 == 0) {
    FUN_141786440(&DAT_146861708,&PTR_GetPrivateStaticClass_14412e860);
  }
  return DAT_146861708;
}



// FUNCTION 1408cedc0 FUN_1408cedc0 body=47 status=ok
// SIG undefined FUN_1408cedc0(void)

longlong FUN_1408cedc0(void)

{
  if (DAT_1468616d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468616d8,&PTR_FUN_14627ef70);
  }
  return DAT_1468616d8;
}



// FUNCTION 1408cedf0 FUN_1408cedf0 body=47 status=ok
// SIG undefined FUN_1408cedf0(void)

longlong FUN_1408cedf0(void)

{
  if (DAT_1468616b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468616b8,&PTR_FUN_14627eed0);
  }
  return DAT_1468616b8;
}



// FUNCTION 1408cee20 FUN_1408cee20 body=47 status=ok
// SIG undefined FUN_1408cee20(void)

longlong FUN_1408cee20(void)

{
  if (DAT_1468616c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468616c8,&PTR_FUN_14627ef20);
  }
  return DAT_1468616c8;
}



// FUNCTION 1408cee50 FUN_1408cee50 body=47 status=ok
// SIG undefined FUN_1408cee50(void)

longlong FUN_1408cee50(void)

{
  if (DAT_1468615f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468615f8,&PTR_FUN_14627e1b0);
  }
  return DAT_1468615f8;
}



// FUNCTION 1408cee80 execAddMeshSample body=297 status=ok
// SIG undefined execAddMeshSample(void)

void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::execAddMeshSample
               (undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
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
  undefined8 local_60;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_res10[0] = 0;
  puVar1 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AddMeshSample(param_1,puVar1,local_res10[0]);
  FGeometryCacheMeshData::~FGeometryCacheMeshData(&local_c8);
  return;
}



// FUNCTION 1408cefb0 FUN_1408cefb0 body=45 status=ok
// SIG undefined FUN_1408cefb0(void)

void FUN_1408cefb0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408c4a70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cefe0 execGetBoundaryMin body=45 status=ok
// SIG undefined execGetBoundaryMin(void)

void USplineMeshComponent::execGetBoundaryMin
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetBoundaryMin();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf010 FUN_1408cf010 body=44 status=ok
// SIG undefined FUN_1408cf010(void)

void FUN_1408cf010(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408c70a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf040 FUN_1408cf040 body=43 status=ok
// SIG undefined FUN_1408cf040(void)

void FUN_1408cf040(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408c7200();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf070 execGetPlayRate body=45 status=ok
// SIG undefined execGetPlayRate(void)

void UPaperFlipbookComponent::execGetPlayRate
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetPlayRate();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf0a0 FUN_1408cf0a0 body=45 status=ok
// SIG undefined FUN_1408cf0a0(void)

void FUN_1408cf0a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408c7230();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf0d0 execGetSlopeValue body=45 status=ok
// SIG undefined execGetSlopeValue(void)

void USystemAnimInstance::execGetSlopeValue(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetSlopeValue();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf100 FUN_1408cf100 body=43 status=ok
// SIG undefined FUN_1408cf100(void)

void FUN_1408cf100(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408c85c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf130 FUN_1408cf130 body=43 status=ok
// SIG undefined FUN_1408cf130(void)

void FUN_1408cf130(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SCheckBox::SupportsKeyboardFocus();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf160 FUN_1408cf160 body=43 status=ok
// SIG undefined FUN_1408cf160(void)

void FUN_1408cf160(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408c8630();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf230 FUN_1408cf230 body=143 status=ok
// SIG undefined FUN_1408cf230(void)

void FUN_1408cf230(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1408cab30(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408cf2c0 FUN_1408cf2c0 body=130 status=ok
// SIG undefined FUN_1408cf2c0(void)

void FUN_1408cf2c0(undefined8 param_1,longlong param_2)

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
  FUN_1408caf40(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1408cf350 execSetMesh body=233 status=ok
// SIG undefined execSetMesh(void)

void UDEPRECATED_GeometryCacheTrack_TransformAnimation::execSetMesh
               (undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_b8;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetMesh(param_1,puVar1);
  FGeometryCacheMeshData::~FGeometryCacheMeshData(&local_b8);
  return;
}



// FUNCTION 1408cf440 FUN_1408cf440 body=123 status=ok
// SIG undefined FUN_1408cf440(void)

void FUN_1408cf440(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_1408cb050(param_1,local_res10[0]);
  return;
}



// FUNCTION 1408cf4c0 FUN_1408cf4c0 body=123 status=ok
// SIG undefined FUN_1408cf4c0(void)

void FUN_1408cf4c0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_1408cb080(param_1,local_res10[0]);
  return;
}



// FUNCTION 1408cf560 execTickAtThisTime body=347 status=ok
// SIG undefined execTickAtThisTime(void)

void UGeometryCacheComponent::execTickAtThisTime(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  int local_28;
  undefined4 local_24 [3];
  
  local_24[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1408cb4c0(param_1,local_24[0],bVar1,bVar2,local_28 != 0);
  return;
}



// FUNCTION 1408cf6c0 FMovieSceneGeometryCacheParams body=156 status=ok
// SIG undefined FMovieSceneGeometryCacheParams(void)

undefined8 *
FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(uint *)((longlong)param_1 + 0x24) =
       *(uint *)((longlong)param_1 + 0x24) ^
       (*(uint *)((longlong)param_2 + 0x24) ^ *(uint *)((longlong)param_1 + 0x24)) & 1;
  return param_1;
}



// FUNCTION 1408cf760 FMovieSceneGeometryCacheParams body=32 status=ok
// SIG undefined FMovieSceneGeometryCacheParams(void)

undefined8 * FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffffe;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return param_1;
}



// FUNCTION 1408cf780 UMovieSceneGeometryCacheSection body=95 status=ok
// SIG undefined UMovieSceneGeometryCacheSection(void)

undefined8 * UMovieSceneGeometryCacheSection::UMovieSceneGeometryCacheSection(undefined8 *param_1)

{
  UMovieSceneSection::UMovieSceneSection();
  *param_1 = &PTR__scalar_deleting_destructor__1441307f0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(uint *)((longlong)param_1 + 0x104) = *(uint *)((longlong)param_1 + 0x104) & 0xfffffffe;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xc9) = 0x101;
  *(undefined2 *)(param_1 + 10) = 0x201;
  return param_1;
}



// FUNCTION 1408cf7e0 FUN_1408cf7e0 body=58 status=ok
// SIG undefined FUN_1408cf7e0(void)

undefined8 * FUN_1408cf7e0(undefined8 *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack();
  *param_1 = &PTR__scalar_deleting_destructor__144130b78;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FMovieSceneBlendTypeField::Add((longlong)param_1 + 0x54,1);
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 5;
  return param_1;
}



// FUNCTION 1408cf820 ~UMovieSceneSignedObject body=148 status=ok
// SIG undefined ~UMovieSceneSignedObject(void)

void UMovieSceneSignedObject::~UMovieSceneSignedObject(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 != 0) {
    do {
      if (((int)plVar3[1] != 0) && (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar3 != 0) {
          lVar2 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar2;
        }
        *(undefined4 *)(plVar3 + 1) = 0;
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = *(longlong **)(param_1 + 0x38);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1408cf8c0 operator* body=168 status=ok
// SIG undefined operator*(void)

int * operator*(int *param_1,float param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  dVar6 = ((double)(int)param_3 * (double)param_2) / (double)(int)((ulonglong)param_3 >> 0x20);
  lVar4 = (longlong)dVar6;
  dVar2 = dVar6;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar6)) {
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar6;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  dVar6 = dVar6 - dVar2;
  dVar7 = dVar6;
  if ((0.0 < dVar6) && (dVar7 = 0.9999999403953552, dVar6 <= 0.9999999403953552)) {
    dVar7 = dVar6;
  }
  fVar8 = (float)dVar7;
  *param_1 = (int)dVar2;
  if (0.0 <= fVar8) {
    fVar5 = 0.99999994;
    if (fVar8 <= 0.99999994) {
      fVar5 = fVar8;
    }
    param_1[1] = (int)fVar5;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1408cf970 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGeometryCacheExecutionToken::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = &PTR__scalar_deleting_destructor__144130ae0;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408cf9d0 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneGeometryCacheSectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  param_1[4] = &PTR__scalar_deleting_destructor__144130ae0;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408cfa30 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneGeometryCacheSectionTemplateParameters::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144130ae0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1408cfa80 FUN_1408cfa80 body=43 status=ok
// SIG undefined FUN_1408cfa80(void)

undefined8 * FUN_1408cfa80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1408cfab0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FGetMaterialFromMaterialsArrayDataflowNode::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1408cfb00 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneGeometryCacheTrack::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  UMovieSceneSignedObject::~UMovieSceneSignedObject(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1408cfb50 FUN_1408cfb50 body=248 status=ok
// SIG undefined FUN_1408cfb50(void)

longlong * FUN_1408cfb50(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_res8 [2];
  undefined1 local_38 [32];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2e8))();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = UMovieSceneGeometryCacheSection::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1408cfbb3;
  }
  plVar2 = (longlong *)0x0;
LAB_1408cfbb3:
  uVar4 = UMovieScene::GetPrivateStaticClass();
  lVar3 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
  uVar4 = *(undefined8 *)(lVar3 + 0xb8);
  uVar5 = USplineMeshComponent::GetBoundaryMin(param_3);
  operator*(local_res8,uVar5,uVar4);
  (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1 + 0xb,param_2,local_res8[0],0xffffffff);
  uVar4 = FSoftObjectPath::FSoftObjectPath(local_38,param_3);
  FSoftObjectPath::operator=(plVar2 + 0x1c,uVar4);
  (**(code **)(*param_1 + 0x2e0))(param_1,plVar2);
  return plVar2;
}



// FUNCTION 1408cfc50 CacheExistingState body=43 status=ok
// SIG undefined CacheExistingState(void)

undefined8 *
FPreAnimatedGeometryCacheTokenProducer::CacheExistingState
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1408c70b0(param_3);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *(undefined1 *)(param_2 + 1) = uVar1;
  *param_2 = &PTR_FUN_144130b58;
  return param_2;
}



// FUNCTION 1408cfc80 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneGeometryCacheTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneGeometryCacheSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 1408cfd00 Evaluate body=378 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneGeometryCacheSectionTemplate::Evaluate(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined ****ppppuVar4;
  longlong *in_stack_00000028;
  undefined1 auStack_188 [32];
  undefined ***local_168;
  undefined **local_158;
  undefined **local_150;
  undefined1 local_148 [8];
  longlong local_140;
  undefined4 local_120;
  undefined4 local_11c;
  undefined ***local_118;
  undefined **local_110;
  undefined1 local_108 [40];
  undefined4 local_e0;
  undefined4 local_dc;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_158 = &PTR__scalar_deleting_destructor__144130b68;
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams(local_148,param_1 + 0x28);
  local_120 = *(undefined4 *)(param_1 + 0x50);
  local_d8 = local_d8 | 3;
  local_11c = *(undefined4 *)(param_1 + 0x54);
  local_150 = &PTR__scalar_deleting_destructor__144130ae0;
  local_118 = (undefined ***)&PTR__scalar_deleting_destructor__144130b68;
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams(local_108,local_148);
  local_e0 = local_120;
  local_dc = local_11c;
  local_168 = (undefined ***)&local_118;
  local_110 = &PTR__scalar_deleting_destructor__144130ae0;
  uVar2 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_d0,in_stack_00000028 + 0x22,(longlong)in_stack_00000028 + 0x124,
                     (longlong)in_stack_00000028 + 0x134);
  iVar1 = (int)in_stack_00000028[1];
  *(int *)(in_stack_00000028 + 1) = iVar1 + 1;
  if (*(int *)((longlong)in_stack_00000028 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
              (in_stack_00000028,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *in_stack_00000028,uVar2);
  if ((local_28 & 1) != 0) {
    pppuVar3 = local_68;
    if ((local_28 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_68[0];
    }
    local_28 = local_28 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_28 & 2) == 0) {
      FMemory::Free(local_68[0]);
    }
  }
  if ((local_d8 & 1) != 0) {
    ppppuVar4 = &local_118;
    if ((local_d8 & 2) == 0) {
      ppppuVar4 = (undefined ****)local_118;
    }
    local_d8 = local_d8 & 0xfe;
    (*(code *)**ppppuVar4)(ppppuVar4,0);
    if ((local_d8 & 2) == 0) {
      FMemory::Free(local_118);
    }
  }
  if (local_140 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408cfe80 Execute body=341 status=ok
// SIG undefined Execute(void)

void FGeometryCacheExecutionToken::Execute
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  undefined **local_res8;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = FUN_141796df0(param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_141796df0(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar3 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1408cfef0;
  }
  lVar2 = 0;
LAB_1408cfef0:
  local_res8 = &PTR_FUN_144130b40;
  lVar3 = DAT_146861780;
  if (DAT_146861780 == 0) {
    lVar3 = FMovieSceneAnimTypeID::Initialize(&DAT_146861780,0);
  }
  local_10 = *(undefined4 *)(param_5 + 0x2d8);
  local_18 = *(undefined8 *)(param_5 + 0x2d0);
  FMovieScenePreAnimatedState::SavePreAnimatedState
            (param_5 + 0xf8,lVar3,&local_res8,lVar2,*(undefined1 *)(param_5 + 0x2dc),&local_18);
  SWindow::SetSizingRule(lVar2,1);
  if (*(uint *)(param_2 + 0x24) == 0x80000000) {
    puVar4 = (undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x20) != 0) {
      puVar4 = (undefined8 *)(param_2 + 4);
    }
    ppuVar5 = (undefined **)*puVar4;
  }
  else {
    local_res8 = (undefined **)(ulonglong)*(uint *)(param_2 + 0x24);
    ppuVar5 = local_res8;
  }
  uVar6 = (**(code **)(*(longlong *)(param_1 + 8) + 8))
                    (param_1 + 8,ppuVar5,*(undefined8 *)(param_2 + 0x18));
  FUN_1408cb4c0(lVar2,uVar6,1,*(byte *)(param_1 + 0x34) & 1,1);
  return;
}



// FUNCTION 1408cffe0 GenerateTemplate body=272 status=ok
// SIG undefined GenerateTemplate(void)

undefined8 *
UMovieSceneGeometryCacheSection::GenerateTemplate
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined1 local_40 [8];
  longlong local_38;
  int local_18;
  int local_14;
  
  iVar4 = *(int *)(param_1 + 0x9c);
  ppuVar5 = &PTR__scalar_deleting_destructor__144130af0;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    iVar4 = iVar4 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\x01') {
    iVar2 = iVar2 + 1;
  }
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams
            (local_40,param_1 + 0xe0,param_3,param_4,&PTR__scalar_deleting_destructor__144130af0);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_18 = iVar2;
  local_14 = iVar4;
  puVar1 = (undefined8 *)FMemory::Malloc(0x58);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  puVar3 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar3 = param_2;
  }
  *param_2 = puVar1;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR__scalar_deleting_destructor__144130af0;
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams
            (puVar3 + 5,local_40,param_3,param_4,ppuVar5);
  *(int *)(puVar3 + 10) = local_18;
  *(int *)((longlong)puVar3 + 0x54) = local_14;
  puVar3[4] = &PTR__scalar_deleting_destructor__144130ae0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1408d00f0 GetAutoSizeRange body=150 status=ok
// SIG undefined GetAutoSizeRange(void)

undefined1 * UMovieSceneGeometryCacheSection::GetAutoSizeRange(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int local_res8 [2];
  
  uVar4 = UMovieScene::GetPrivateStaticClass();
  lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
  uVar4 = *(undefined8 *)(lVar5 + 0xb8);
  uVar7 = FMovieSceneGeometryCacheParams::GetSequenceLength(param_1 + 0xe0);
  operator*(local_res8,uVar7,uVar4);
  iVar2 = *(int *)(param_1 + 0x94);
  cVar1 = *(char *)(param_1 + 0x90);
  iVar3 = iVar2;
  if (cVar1 != '\x01') {
    iVar3 = iVar2 + 1;
  }
  *param_2 = 1;
  iVar6 = iVar2 + 1;
  if (cVar1 == '\x01') {
    iVar6 = iVar2;
  }
  *(int *)(param_2 + 4) = iVar6;
  param_2[8] = 0;
  *(int *)(param_2 + 0xc) = iVar3 + local_res8[0];
  param_2[0x10] = 1;
  return param_2;
}



// FUNCTION 1408d0190 GetOffsetTime body=81 status=ok
// SIG undefined GetOffsetTime(void)

undefined8 * UMovieSceneGeometryCacheSection::GetOffsetTime(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  uVar1 = UMovieScene::GetPrivateStaticClass();
  lVar2 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  puVar3 = (undefined8 *)
           operator*(local_res8,*(undefined4 *)(param_1 + 0xf8),*(undefined8 *)(lVar2 + 0xb8));
  *param_2 = *puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 1408d0200 GetSequenceLength body=109 status=ok
// SIG undefined GetSequenceLength(void)

undefined8 FMovieSceneGeometryCacheParams::GetSequenceLength(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_141796df0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_141796df0(param_1);
  if (lVar2 != 0) {
    lVar3 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1408d0257;
  }
  lVar2 = 0;
LAB_1408d0257:
  uVar4 = USplineMeshComponent::GetBoundaryMin(lVar2);
  return uVar4;
}



// FUNCTION 1408d0270 GetSnapTimes body=616 status=ok
// SIG undefined GetSnapTimes(void)

void UMovieSceneGeometryCacheSection::GetSnapTimes(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  int local_res8;
  float fStackX_c;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x90) != '\x02') {
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = *(undefined4 *)(param_1 + 0x94);
    }
    if (*(char *)(param_1 + 0x98) != '\x02') {
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  uVar4 = UMovieScene::GetPrivateStaticClass();
  lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
  fVar14 = *(float *)(param_1 + 0x100);
  uVar4 = *(undefined8 *)(lVar5 + 0xb8);
  iVar7 = *(int *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\x01') {
    iVar7 = *(int *)(param_1 + 0x94) + 1;
  }
  iVar8 = *(int *)(param_1 + 0x9c) + 1;
  if (*(char *)(param_1 + 0x98) != '\x01') {
    iVar8 = *(int *)(param_1 + 0x9c);
  }
  if (ABS(fVar14) <= 1e-08) {
    fVar14 = 1.0;
  }
  uVar9 = FMovieSceneGeometryCacheParams::GetSequenceLength(param_1 + 0xe0);
  auVar11._8_4_ = (int)extraout_XMM0_Qb;
  auVar11._0_8_ = uVar9;
  auVar11._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ =
       ((float)uVar9 - (*(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0xf8))) / fVar14;
  operator*(&local_res8,auVar12._0_8_,uVar4);
  fVar14 = fStackX_c;
  iVar1 = local_res8;
  if (1 < local_res8) {
    for (fVar15 = 0.0; (iVar7 < iVar8 + -1 || ((iVar7 == iVar8 + -1 && (fVar15 < 0.0))));
        fVar15 = fVar15 - fVar10) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        local_res8 = iVar7;
        fStackX_c = fVar15;
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      fVar15 = fVar15 + fVar14;
      *(int *)(*param_2 + (longlong)iVar2 * 4) = iVar7;
      iVar2 = ((int)ROUND(fVar15 * 2.0 - 0.5) >> 1) + iVar1;
      iVar7 = iVar7 + iVar2;
      iVar6 = (int)fVar15;
      fVar10 = fVar15;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar15)) {
        auVar13._4_4_ = fVar15;
        auVar13._0_4_ = fVar15;
        auVar13._8_8_ = 0;
        uVar3 = movmskps(iVar2,auVar13);
        fVar10 = (float)(int)(iVar6 - (uVar3 & 1));
      }
    }
  }
  return;
}



// FUNCTION 1408d04e0 GetStartOffsetAtTrimTime body=420 status=ok
// SIG undefined GetStartOffsetAtTrimTime(void)

void GetStartOffsetAtTrimTime(undefined8 param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x18);
  lVar2 = param_2;
  fVar3 = (float)FMovieSceneGeometryCacheParams::GetSequenceLength();
  if (ABS(fVar3 - (fVar1 + *(float *)(param_2 + 0x1c))) <= 1e-08) {
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar2);
  }
  return;
}



// FUNCTION 1408d0690 MapTimeToAnimation body=730 status=ok
// SIG undefined MapTimeToAnimation(void)

/* WARNING: Removing unreachable block (ram,0x0001408d074a) */

void FMovieSceneGeometryCacheSectionTemplateParameters::MapTimeToAnimation
               (longlong param_1,ulonglong param_2,undefined8 param_3)

{
  float fVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong *puVar8;
  float fVar9;
  undefined1 auVar10 [16];
  double dVar11;
  float fVar12;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong local_88 [13];
  
  uVar5 = *(int *)(param_1 + 0x34) - 1;
  uVar4 = *(uint *)(param_1 + 0x30);
  local_res8 = (ulonglong)uVar5;
  local_res10 = (ulonglong)uVar4;
  local_88[0] = local_res10;
  local_res20 = local_res8;
  uVar7 = (uint)param_2;
  if (((int)uVar7 < (int)uVar4) ||
     ((local_res8._4_4_ = (float)(param_2 >> 0x20), uVar7 == uVar4 && (local_res8._4_4_ < 0.0)))) {
    puVar8 = local_88;
  }
  else if (((int)uVar7 < (int)uVar5) || ((uVar7 == uVar5 && (local_res8._4_4_ < 0.0)))) {
    puVar8 = &local_res18;
  }
  else {
    puVar8 = &local_res20;
  }
  fVar12 = *(float *)(param_1 + 0x28);
  uVar2 = *puVar8;
  if (ABS(fVar12) <= 1e-08) {
    fVar12 = 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x20);
  local_res18 = param_2;
  fVar9 = (float)FMovieSceneGeometryCacheParams::GetSequenceLength(param_1 + 8);
  fVar9 = fVar9 - (fVar1 + *(float *)(param_1 + 0x24));
  local_res8._4_4_ = (float)(uVar2 >> 0x20);
  local_res8._4_4_ = local_res8._4_4_ - 0.0;
  iVar3 = (int)ROUND((local_res8._4_4_ + local_res8._4_4_) - 0.5) >> 1;
  local_res8._4_4_ = local_res8._4_4_ - (float)iVar3;
  if (0.0 <= local_res8._4_4_) {
    if (0.99999994 <= local_res8._4_4_) {
      local_res8._4_4_ = 0.99999994;
    }
  }
  else {
    local_res8._4_4_ = 0.0;
  }
  dVar11 = ((double)(((int)uVar2 - *(int *)(param_1 + 0x30)) + iVar3) + (double)local_res8._4_4_) *
           (double)fVar12;
  lVar6 = (longlong)dVar11;
  if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar11)) {
    auVar10._8_8_ = dVar11;
    auVar10._0_8_ = dVar11;
    uVar4 = movmskpd(0,auVar10);
    dVar11 = (double)(longlong)(lVar6 - (ulonglong)(uVar4 & 1));
  }
  if ((0.0 < fVar9) && (ABS(fVar9) <= 1e-08)) {
    AK::MemoryMgr::StartProfileThreadUsage((int)((ulonglong)param_3 >> 0x20) * (int)dVar11);
  }
  return;
}



// FUNCTION 1408d0970 MapTimeToAnimation body=182 status=ok
// SIG undefined MapTimeToAnimation(void)

undefined8
UMovieSceneGeometryCacheSection::MapTimeToAnimation
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_58;
  undefined1 local_50 [8];
  longlong local_48;
  int local_28;
  int local_24;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  if (*(char *)(param_1 + 0x98) == '\x01') {
    iVar2 = iVar2 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\x01') {
    iVar1 = iVar1 + 1;
  }
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams(local_50,param_1 + 0xe0);
  local_58 = &PTR__scalar_deleting_destructor__144130ae0;
  local_28 = iVar1;
  local_24 = iVar2;
  uVar3 = FMovieSceneGeometryCacheSectionTemplateParameters::MapTimeToAnimation
                    (&local_58,param_2,param_3);
  local_58 = &PTR__scalar_deleting_destructor__144130ae0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 1408d0a40 FUN_1408d0a40 body=52 status=ok
// SIG undefined FUN_1408d0a40(void)

void FUN_1408d0a40(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00f8);
  UMovieSceneSection::Serialize(param_1,param_2);
  return;
}



// FUNCTION 1408d0a80 SplitSection body=190 status=ok
// SIG undefined SplitSection(void)

longlong UMovieSceneGeometryCacheSection::SplitSection(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x90) == '\x02') {
    uVar5 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x94);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    if (*(char *)(param_1 + 0x90) != '\x01') {
      iVar4 = iVar4 + 1;
    }
    uVar5 = GetStartOffsetAtTrimTime(&local_28,param_1 + 0xe0,iVar4);
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar2 = FUN_141f66b60(param_1,&local_28);
  if (lVar2 != 0) {
    lVar3 = GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = 0;
    if (bVar1) {
      lVar3 = lVar2;
    }
    *(undefined4 *)(lVar3 + 0xf8) = uVar5;
  }
  return lVar2;
}



// FUNCTION 1408d0b40 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_1408d0b66;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_1408d0b66:
  lVar2 = UMovieSceneGeometryCacheSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 1408d0b80 TrimSection body=149 status=ok
// SIG undefined TrimSection(void)

void UMovieSceneGeometryCacheSection::TrimSection(longlong param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  cVar1 = UMovieSceneSection::TryModify(param_1,1);
  if (cVar1 != '\0') {
    if (param_3 != '\0') {
      if (*(char *)(param_1 + 0x90) == '\x02') {
        uVar3 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x94);
        local_18 = *param_2;
        uStack_14 = param_2[1];
        uStack_10 = param_2[2];
        uStack_c = param_2[3];
        if (*(char *)(param_1 + 0x90) != '\x01') {
          iVar2 = iVar2 + 1;
        }
        uVar3 = GetStartOffsetAtTrimTime(&local_18,param_1 + 0xe0,iVar2);
      }
      *(undefined4 *)(param_1 + 0xf8) = uVar3;
    }
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    FUN_141f67180(param_1,&local_18,param_3);
  }
  return;
}



// FUNCTION 1408d0c20 FUN_1408d0c20 body=47 status=ok
// SIG undefined FUN_1408d0c20(void)

longlong FUN_1408d0c20(void)

{
  if (DAT_1468617d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468617d0,&PTR_FUN_14627f480);
  }
  return DAT_1468617d0;
}



// FUNCTION 1408d0c50 FUN_1408d0c50 body=53 status=ok
// SIG undefined FUN_1408d0c50(void)

void FUN_1408d0c50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144131718;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d0c90 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneGeometryCacheTrack::StaticClass(void)

{
  if (DAT_146861810 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCacheTracks",L"MovieSceneGeometryCacheTrack",&DAT_146861810,
                  FUN_140447710,0x68,0x10000000,0,L"Engine",&LAB_1408d0ef0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7830,&LAB_140447700,0);
  }
  return DAT_146861810;
}



// FUNCTION 1408d0d70 FUN_1408d0d70 body=47 status=ok
// SIG undefined FUN_1408d0d70(void)

longlong FUN_1408d0d70(void)

{
  if (DAT_1468617c0 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_1468617c0,&PTR_s__Script_GeometryCacheTracks_1441316b8);
  }
  return DAT_1468617c0;
}



// FUNCTION 1408d0da0 FUN_1408d0da0 body=53 status=ok
// SIG undefined FUN_1408d0da0(void)

void FUN_1408d0da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144131830;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d0de0 FUN_1408d0de0 body=53 status=ok
// SIG undefined FUN_1408d0de0(void)

void FUN_1408d0de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144131948;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d0e20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneGeometryCacheSection::GetPrivateStaticClass(void)

{
  if (DAT_1468617e0 == 0) {
    FUN_14171ccd0(L"/Script/GeometryCacheTracks",L"MovieSceneGeometryCacheSection",&DAT_1468617e0,
                  FUN_140447710,0x108,0x10000000,0,L"Engine",&LAB_1408d0ed0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_1468617e0;
}



// FUNCTION 1408d0f10 operator= body=118 status=ok
// SIG undefined operator=(void)

longlong FMovieSceneGeometryCacheSectionTemplateParameters::operator=
                   (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 8,uVar1);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) ^ (*(uint *)(param_2 + 0x2c) ^ *(uint *)(param_1 + 0x2c)) & 1;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return param_1;
}



// FUNCTION 1408d0fa0 Construct body=69 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplate>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = &PTR__scalar_deleting_destructor__144130af0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams(param_2 + 5);
  param_2[4] = &PTR__scalar_deleting_destructor__144130ae0;
  param_2[10] = 0;
  return;
}



// FUNCTION 1408d0ff0 Construct body=40 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplateParameters>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  FMovieSceneGeometryCacheParams::FMovieSceneGeometryCacheParams(param_2 + 1);
  *param_2 = &PTR__scalar_deleting_destructor__144130ae0;
  param_2[6] = 0;
  return;
}



// FUNCTION 1408d1020 Copy body=121 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheParams>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_28 [32];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar2 = (undefined4 *)(param_2 + 0x1c);
    do {
      uVar1 = FSoftObjectPath::FSoftObjectPath(local_28,param_3 + -0x1c + (longlong)puVar2);
      FSoftObjectPath::operator=(puVar2 + -7,uVar1);
      puVar2[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar2);
      *puVar2 = *(undefined4 *)(param_3 + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar2);
      puVar2[2] = puVar2[2] ^ (*(uint *)(param_3 + 8 + (longlong)puVar2) ^ puVar2[2]) & 1;
      puVar2 = puVar2 + 10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d10a0 Copy body=114 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      FMovieSceneGeometryCacheSectionTemplateParameters::operator=
                (puVar1 + 0x10,puVar1 + param_3 + 0x10);
      puVar1 = puVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d1120 Copy body=135 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplateParameters>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_28 [32];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar2 = (undefined4 *)(param_2 + 0x24);
    do {
      uVar1 = FSoftObjectPath::FSoftObjectPath(local_28,param_3 + -0x1c + (longlong)puVar2);
      FSoftObjectPath::operator=(puVar2 + -7,uVar1);
      puVar2[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar2);
      *puVar2 = *(undefined4 *)(param_3 + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar2);
      puVar2[2] = puVar2[2] ^ (*(uint *)(param_3 + 8 + (longlong)puVar2) ^ puVar2[2]) & 1;
      puVar2[3] = *(undefined4 *)(param_3 + 0xc + (longlong)puVar2);
      puVar2[4] = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar2);
      puVar2 = puVar2 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d11b0 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_CRC(void)

{
  return 0x767ad736;
}



// FUNCTION 1408d11c0 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_CRC(void)

{
  return 0x5bb27139;
}



// FUNCTION 1408d11d0 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_CRC(void)

{
  return 0xc3a8a8c8;
}



// FUNCTION 1408d11f0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_1408d0a40(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408d1260 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneGeometryCacheParams::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468617c8 == 0) {
    if (DAT_1468617c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1468617c0,&PTR_s__Script_GeometryCacheTracks_1441316b8);
    }
    lVar1 = DAT_1468617c0;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_CRC();
    DAT_1468617c8 = GetStaticStruct(FUN_1408d0c20,lVar1,L"MovieSceneGeometryCacheParams",0x28,uVar2)
    ;
  }
  return;
}



// FUNCTION 1408d12e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneGeometryCacheSectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468617e8 == 0) {
    if (DAT_1468617c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1468617c0,&PTR_s__Script_GeometryCacheTracks_1441316b8);
    }
    lVar1 = DAT_1468617c0;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_CRC();
    DAT_1468617e8 =
         GetStaticStruct(FUN_1408d1440,lVar1,L"MovieSceneGeometryCacheSectionTemplate",0x58,uVar2);
  }
  return;
}



// FUNCTION 1408d1360 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneGeometryCacheSectionTemplateParameters::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468617f8 == 0) {
    if (DAT_1468617c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1468617c0,&PTR_s__Script_GeometryCacheTracks_1441316b8);
    }
    lVar1 = DAT_1468617c0;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_CRC();
    DAT_1468617f8 =
         GetStaticStruct(FUN_1408d1470,lVar1,L"MovieSceneGeometryCacheSectionTemplateParameters",
                         0x38,uVar2);
  }
  return;
}



// FUNCTION 1408d13e0 FUN_1408d13e0 body=47 status=ok
// SIG undefined FUN_1408d13e0(void)

longlong FUN_1408d13e0(void)

{
  if (DAT_1468617d8 == 0) {
    FUN_141786440(&DAT_1468617d8,&PTR_GetPrivateStaticClass_144131020);
  }
  return DAT_1468617d8;
}



// FUNCTION 1408d1410 FUN_1408d1410 body=47 status=ok
// SIG undefined FUN_1408d1410(void)

longlong FUN_1408d1410(void)

{
  if (DAT_146861808 == 0) {
    FUN_141786440(&DAT_146861808,&PTR_StaticClass_1441310b0);
  }
  return DAT_146861808;
}



// FUNCTION 1408d1440 FUN_1408d1440 body=47 status=ok
// SIG undefined FUN_1408d1440(void)

longlong FUN_1408d1440(void)

{
  if (DAT_1468617f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468617f0,&PTR_FUN_14627f580);
  }
  return DAT_1468617f0;
}



// FUNCTION 1408d1470 FUN_1408d1470 body=47 status=ok
// SIG undefined FUN_1408d1470(void)

longlong FUN_1408d1470(void)

{
  if (DAT_146861800 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861800,&PTR_FUN_14627f650);
  }
  return DAT_146861800;
}



// FUNCTION 1408d14a0 ConvertToJPEG body=797 status=ok
// SIG undefined ConvertToJPEG(void)

longlong *
FAppleImageUtilsPlugin::ConvertToJPEG(undefined8 param_1,longlong *param_2,longlong param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res18;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  void *local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_res18 = param_3;
  if (param_3 != 0) {
    uVar8 = UAppleImageInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar8);
    if (plVar9 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if (2 < (byte)(cVar6 - 1U)) {
        uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
        FString::PrintfImpl(&local_38,L"ConvertToJPEG texture type (%d) was not supported",uVar7);
        local_60 = (longlong *)operator_new(0x30);
        _Src = local_38;
        if (local_60 != (longlong *)0x0) {
          *(undefined4 *)(local_60 + 1) = 1;
          ppvVar1 = (void **)(local_60 + 4);
          *(undefined4 *)((longlong)local_60 + 0xc) = 1;
          *local_60 = (longlong)&PTR_FUN_144132778;
          local_60[2] = (longlong)&PTR_LAB_1441326d8;
          *(undefined4 *)(local_60 + 3) = 0;
          *(undefined4 *)((longlong)local_60 + 0x1c) = 0;
          *ppvVar1 = (void *)0x0;
          local_60[5] = 0;
          local_60[2] = (longlong)&PTR_LAB_144132710;
          if (ppvVar1 != &local_38) {
            iVar10 = (int)local_30;
            *(int *)(local_60 + 5) = iVar10;
            if ((iVar10 == 0) && (*(int *)((longlong)local_60 + 0x2c) == 0)) {
              *(undefined4 *)((longlong)local_60 + 0x2c) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_30 & 0xffffffff);
              ::_guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar10 * 2);
            }
          }
          LOCK();
          *(undefined4 *)((longlong)local_60 + 0x1c) = 1;
          UNLOCK();
          LOCK();
          *(undefined4 *)(local_60 + 3) = 1;
          UNLOCK();
        }
        local_68 = local_60 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
        plVar9 = local_60;
        *param_2 = (longlong)local_68;
        param_2[1] = (longlong)local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_60 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              iVar10 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
        }
        if (local_38 == (void *)0x0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
      local_20 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsConversionTask,UTexture_*_&>
                           (&local_res18);
      local_28 = local_20 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
      plVar9 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_20 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      local_50 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                           (L"ConvertToJPEG requires iOS 10.0+ or macOS 10.12+");
      local_58 = local_50 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
      plVar2 = local_50;
      *param_2 = (longlong)local_58;
      param_2[1] = (longlong)local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
      goto joined_r0x0001408d1775;
    }
  }
  local_40 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                       (L"ConvertToJPEG only supports UAppleImageInterface derived textures");
  local_48 = local_40 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
  *param_2 = (longlong)local_48;
  param_2[1] = (longlong)local_40;
  if (local_40 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  UNLOCK();
  plVar9 = local_40;
joined_r0x0001408d1775:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1408d17c0 ConvertToHEIF body=797 status=ok
// SIG undefined ConvertToHEIF(void)

longlong *
FAppleImageUtilsPlugin::ConvertToHEIF(undefined8 param_1,longlong *param_2,longlong param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res18;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  void *local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_res18 = param_3;
  if (param_3 != 0) {
    uVar8 = UAppleImageInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar8);
    if (plVar9 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if (2 < (byte)(cVar6 - 1U)) {
        uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
        FString::PrintfImpl(&local_38,L"ConvertToHEIF texture type (%d) was not supported",uVar7);
        local_60 = (longlong *)operator_new(0x30);
        _Src = local_38;
        if (local_60 != (longlong *)0x0) {
          *(undefined4 *)(local_60 + 1) = 1;
          ppvVar1 = (void **)(local_60 + 4);
          *(undefined4 *)((longlong)local_60 + 0xc) = 1;
          *local_60 = (longlong)&PTR_FUN_144132778;
          local_60[2] = (longlong)&PTR_LAB_1441326d8;
          *(undefined4 *)(local_60 + 3) = 0;
          *(undefined4 *)((longlong)local_60 + 0x1c) = 0;
          *ppvVar1 = (void *)0x0;
          local_60[5] = 0;
          local_60[2] = (longlong)&PTR_LAB_144132710;
          if (ppvVar1 != &local_38) {
            iVar10 = (int)local_30;
            *(int *)(local_60 + 5) = iVar10;
            if ((iVar10 == 0) && (*(int *)((longlong)local_60 + 0x2c) == 0)) {
              *(undefined4 *)((longlong)local_60 + 0x2c) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_30 & 0xffffffff);
              ::_guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar10 * 2);
            }
          }
          LOCK();
          *(undefined4 *)((longlong)local_60 + 0x1c) = 1;
          UNLOCK();
          LOCK();
          *(undefined4 *)(local_60 + 3) = 1;
          UNLOCK();
        }
        local_68 = local_60 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
        plVar9 = local_60;
        *param_2 = (longlong)local_68;
        param_2[1] = (longlong)local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_60 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              iVar10 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
        }
        if (local_38 == (void *)0x0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
      local_20 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsConversionTask,UTexture_*_&>
                           (&local_res18);
      local_28 = local_20 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
      plVar9 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_20 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      local_50 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                           (L"ConvertToHEIF requires iOS 11.0+ or macOS 10.13.4+");
      local_58 = local_50 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
      plVar2 = local_50;
      *param_2 = (longlong)local_58;
      param_2[1] = (longlong)local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
      goto joined_r0x0001408d1a95;
    }
  }
  local_40 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                       (L"ConvertToHEIF only supports UAppleImageInterface derived textures");
  local_48 = local_40 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
  *param_2 = (longlong)local_48;
  param_2[1] = (longlong)local_40;
  if (local_40 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  UNLOCK();
  plVar9 = local_40;
joined_r0x0001408d1a95:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1408d1ae0 ConvertToPNG body=797 status=ok
// SIG undefined ConvertToPNG(void)

longlong *
FAppleImageUtilsPlugin::ConvertToPNG(undefined8 param_1,longlong *param_2,longlong param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res18;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  void *local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_res18 = param_3;
  if (param_3 != 0) {
    uVar8 = UAppleImageInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar8);
    if (plVar9 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if (2 < (byte)(cVar6 - 1U)) {
        uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
        FString::PrintfImpl(&local_38,L"ConvertToPNG texture type (%d) was not supported",uVar7);
        local_60 = (longlong *)operator_new(0x30);
        _Src = local_38;
        if (local_60 != (longlong *)0x0) {
          *(undefined4 *)(local_60 + 1) = 1;
          ppvVar1 = (void **)(local_60 + 4);
          *(undefined4 *)((longlong)local_60 + 0xc) = 1;
          *local_60 = (longlong)&PTR_FUN_144132778;
          local_60[2] = (longlong)&PTR_LAB_1441326d8;
          *(undefined4 *)(local_60 + 3) = 0;
          *(undefined4 *)((longlong)local_60 + 0x1c) = 0;
          *ppvVar1 = (void *)0x0;
          local_60[5] = 0;
          local_60[2] = (longlong)&PTR_LAB_144132710;
          if (ppvVar1 != &local_38) {
            iVar10 = (int)local_30;
            *(int *)(local_60 + 5) = iVar10;
            if ((iVar10 == 0) && (*(int *)((longlong)local_60 + 0x2c) == 0)) {
              *(undefined4 *)((longlong)local_60 + 0x2c) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_30 & 0xffffffff);
              ::_guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar10 * 2);
            }
          }
          LOCK();
          *(undefined4 *)((longlong)local_60 + 0x1c) = 1;
          UNLOCK();
          LOCK();
          *(undefined4 *)(local_60 + 3) = 1;
          UNLOCK();
        }
        local_68 = local_60 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
        plVar9 = local_60;
        *param_2 = (longlong)local_68;
        param_2[1] = (longlong)local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_60 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              iVar10 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
        }
        if (local_38 == (void *)0x0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
      local_20 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsConversionTask,UTexture_*_&>
                           (&local_res18);
      local_28 = local_20 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
      plVar9 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_20 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      local_50 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                           (L"ConvertToPNG requires iOS 11.0+ or macOS 10.13+");
      local_58 = local_50 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
      plVar2 = local_50;
      *param_2 = (longlong)local_58;
      param_2[1] = (longlong)local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
      goto joined_r0x0001408d1db5;
    }
  }
  local_40 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                       (L"ConvertToPNG only supports UAppleImageInterface derived textures");
  local_48 = local_40 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
  *param_2 = (longlong)local_48;
  param_2[1] = (longlong)local_40;
  if (local_40 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  UNLOCK();
  plVar9 = local_40;
joined_r0x0001408d1db5:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1408d1e00 ConvertToTIFF body=797 status=ok
// SIG undefined ConvertToTIFF(void)

longlong *
FAppleImageUtilsPlugin::ConvertToTIFF(undefined8 param_1,longlong *param_2,longlong param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res18;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  void *local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_res18 = param_3;
  if (param_3 != 0) {
    uVar8 = UAppleImageInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar8);
    if (plVar9 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if (2 < (byte)(cVar6 - 1U)) {
        uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
        FString::PrintfImpl(&local_38,L"ConvertToTIFF texture type (%d) was not supported",uVar7);
        local_60 = (longlong *)operator_new(0x30);
        _Src = local_38;
        if (local_60 != (longlong *)0x0) {
          *(undefined4 *)(local_60 + 1) = 1;
          ppvVar1 = (void **)(local_60 + 4);
          *(undefined4 *)((longlong)local_60 + 0xc) = 1;
          *local_60 = (longlong)&PTR_FUN_144132778;
          local_60[2] = (longlong)&PTR_LAB_1441326d8;
          *(undefined4 *)(local_60 + 3) = 0;
          *(undefined4 *)((longlong)local_60 + 0x1c) = 0;
          *ppvVar1 = (void *)0x0;
          local_60[5] = 0;
          local_60[2] = (longlong)&PTR_LAB_144132710;
          if (ppvVar1 != &local_38) {
            iVar10 = (int)local_30;
            *(int *)(local_60 + 5) = iVar10;
            if ((iVar10 == 0) && (*(int *)((longlong)local_60 + 0x2c) == 0)) {
              *(undefined4 *)((longlong)local_60 + 0x2c) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_30 & 0xffffffff);
              ::_guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar10 * 2);
            }
          }
          LOCK();
          *(undefined4 *)((longlong)local_60 + 0x1c) = 1;
          UNLOCK();
          LOCK();
          *(undefined4 *)(local_60 + 3) = 1;
          UNLOCK();
        }
        local_68 = local_60 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
        plVar9 = local_60;
        *param_2 = (longlong)local_68;
        param_2[1] = (longlong)local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_60 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              iVar10 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
        }
        if (local_38 == (void *)0x0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
      local_20 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsConversionTask,UTexture_*_&>
                           (&local_res18);
      local_28 = local_20 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
      plVar9 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_20 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      local_50 = (longlong *)
                 SharedPointerInternals::
                 NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                           (L"ConvertToTIFF requires iOS 10.0+ or macOS 10.12+");
      local_58 = local_50 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
      plVar2 = local_50;
      *param_2 = (longlong)local_58;
      param_2[1] = (longlong)local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
      goto joined_r0x0001408d20d5;
    }
  }
  local_40 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
                       (L"ConvertToTIFF only supports UAppleImageInterface derived textures");
  local_48 = local_40 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
  *param_2 = (longlong)local_48;
  param_2[1] = (longlong)local_40;
  if (local_40 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  UNLOCK();
  plVar9 = local_40;
joined_r0x0001408d20d5:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1408d2120 NewIntrusiveReferenceController<FAppleImageUtilsConversionTask,UTexture_*_&> body=377 status=ok
// SIG undefined NewIntrusiveReferenceController<FAppleImageUtilsConversionTask,UTexture_*_&>(void)

undefined8 *
SharedPointerInternals::NewIntrusiveReferenceController<FAppleImageUtilsConversionTask,UTexture_*_&>
          (undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  
  puVar4 = (undefined8 *)operator_new(0x58);
  lVar7 = 0;
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_DestroyObject_144132788;
  uVar2 = *param_1;
  puVar4[2] = &PTR_LAB_1441326d8;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = &PTR__scalar_deleting_destructor__143f73ca8;
  *(undefined1 *)(puVar4 + 7) = 0;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar5 = GetTransientPackage();
      FUN_1417846f0(uVar5,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar6 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar6,uVar5,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,puVar4 + 6);
    *(undefined1 *)(puVar4 + 7) = 1;
  }
  puVar4[2] = &PTR_LAB_144132738;
  puVar4[6] = &PTR_LAB_144132760;
  puVar4[8] = uVar2;
  puVar4[9] = 0;
  puVar4[10] = 0;
  return puVar4;
}



// FUNCTION 1408d22a0 NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]> body=342 status=ok
// SIG undefined NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<FAppleImageUtilsFailedConversionTask,wchar_t_const_(&)[48]>
          (short *param_1)

{
  void **ppvVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  void *_Src;
  void *local_28;
  ulonglong local_20;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = 0;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_144132778;
    local_28 = (void *)0x0;
    local_20 = 0;
    _Src = (void *)0x0;
    if ((param_1 != (short *)0x0) && (_Src = (void *)0x0, *param_1 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_1[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_20 = (ulonglong)uVar3;
      uVar5 = uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        uVar5 = (uint)local_20;
      }
      _Src = local_28;
      FGenericPlatformString::Memcpy(local_28,param_1,(longlong)(int)uVar3 * 2);
    }
    ppvVar1 = (void **)(puVar2 + 4);
    puVar2[2] = &PTR_LAB_1441326d8;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    *ppvVar1 = (void *)0x0;
    puVar2[5] = 0;
    puVar2[2] = &PTR_LAB_144132710;
    if (ppvVar1 != &local_28) {
      *(uint *)(puVar2 + 5) = uVar5;
      if ((uVar5 == 0) && (*(int *)((longlong)puVar2 + 0x2c) == 0)) {
        *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,uVar5);
        ::_guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)(int)uVar5 * 2);
      }
    }
    LOCK();
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(puVar2 + 3) = 1;
    UNLOCK();
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408d2400 UAppleImageUtilsBaseAsyncTaskBlueprintProxy body=177 status=ok
// SIG undefined UAppleImageUtilsBaseAsyncTaskBlueprintProxy(void)

undefined8 *
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::UAppleImageUtilsBaseAsyncTaskBlueprintProxy
          (undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR__scalar_deleting_destructor__144132418;
  *puVar1 = &PTR_Tick_144132690;
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
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 1408d24d0 `scalar_deleting_destructor' body=123 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAppleImageUtilsConversionTask::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  param_1[4] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 5) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = &PTR_LAB_1441326d8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1408d2550 FUN_1408d2550 body=72 status=ok
// SIG undefined FUN_1408d2550(void)

undefined8 * FUN_1408d2550(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_1441326d8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1408d25a0 `scalar_deleting_destructor' body=197 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAppleImageUtilsBaseAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1408d2670 Broadcast body=198 status=ok
// SIG undefined Broadcast(void)

void FAppleImageConversionDelegate::Broadcast(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong local_28 [2];
  void *local_18;
  undefined8 local_10;
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  FString::operator=(local_28);
  if (&local_18 != (void **)(param_2 + 0x10)) {
    iVar1 = *(int *)(param_2 + 0x18);
    _Src = *(void **)(param_2 + 0x10);
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if ((iVar1 == 0) && (local_10._4_4_ == 0)) {
      local_10 = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_18,iVar1);
      ::_guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar1);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,local_28);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408d2740 CreateProxyObjectForConvertToHEIF body=324 status=ok
// SIG undefined CreateProxyObjectForConvertToHEIF(void)

longlong UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF
                   (undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x1000000;
  puVar7 = (undefined8 *)FName::FName(local_30,"AppleImageUtils",1);
  uVar4 = *puVar7;
  uVar5 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar5,uVar4);
  puVar7 = (undefined8 *)
           (**(code **)(*plVar8 + 0x48))(plVar8,local_28,param_1,param_2,param_3,param_4);
  if ((undefined8 *)(lVar6 + 0x50) != puVar7) {
    *(undefined8 *)(lVar6 + 0x50) = *puVar7;
    *puVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar6 + 0x58,puVar7 + 1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return lVar6;
}



// FUNCTION 1408d2890 CreateProxyObjectForConvertToJPEG body=324 status=ok
// SIG undefined CreateProxyObjectForConvertToJPEG(void)

longlong UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG
                   (undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x1000000;
  puVar7 = (undefined8 *)FName::FName(local_30,"AppleImageUtils",1);
  uVar4 = *puVar7;
  uVar5 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar5,uVar4);
  puVar7 = (undefined8 *)
           (**(code **)(*plVar8 + 0x40))(plVar8,local_28,param_1,param_2,param_3,param_4);
  if ((undefined8 *)(lVar6 + 0x50) != puVar7) {
    *(undefined8 *)(lVar6 + 0x50) = *puVar7;
    *puVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar6 + 0x58,puVar7 + 1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return lVar6;
}



// FUNCTION 1408d29e0 CreateProxyObjectForConvertToPNG body=308 status=ok
// SIG undefined CreateProxyObjectForConvertToPNG(void)

longlong UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG
                   (undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x1000000;
  puVar7 = (undefined8 *)FName::FName(local_38,"AppleImageUtils",1);
  uVar4 = *puVar7;
  uVar5 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar5,uVar4);
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x50))(plVar8,local_30,param_1,param_2,param_3);
  if ((undefined8 *)(lVar6 + 0x50) != puVar7) {
    *(undefined8 *)(lVar6 + 0x50) = *puVar7;
    *puVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar6 + 0x58,puVar7 + 1);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_28 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return lVar6;
}



// FUNCTION 1408d2b20 CreateProxyObjectForConvertToTIFF body=308 status=ok
// SIG undefined CreateProxyObjectForConvertToTIFF(void)

longlong UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF
                   (undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x1000000;
  puVar7 = (undefined8 *)FName::FName(local_38,"AppleImageUtils",1);
  uVar4 = *puVar7;
  uVar5 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar5,uVar4);
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x58))(plVar8,local_30,param_1,param_2,param_3);
  if ((undefined8 *)(lVar6 + 0x50) != puVar7) {
    *(undefined8 *)(lVar6 + 0x50) = *puVar7;
    *puVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar6 + 0x58,puVar7 + 1);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_28 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return lVar6;
}



// FUNCTION 1408d2c60 DestroyObject body=96 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FAppleImageUtilsConversionTask>::
     DestroyObject(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x30) = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0x38) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_1441326d8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408d2cc0 FUN_1408d2cc0 body=25 status=ok
// SIG undefined FUN_1408d2cc0(void)

void FUN_1408d2cc0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_1441326d8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1408d2d10 FUN_1408d2d10 body=109 status=ok
// SIG undefined FUN_1408d2d10(void)

undefined8 * FUN_1408d2d10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar1,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 2);
  return param_2;
}



// FUNCTION 1408d2d90 FUN_1408d2d90 body=39 status=ok
// SIG undefined FUN_1408d2d90(void)

void FUN_1408d2d90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441323b8;
    return;
  }
  return;
}



// FUNCTION 1408d2de0 Tick body=488 status=ok
// SIG undefined Tick(void)

void UAppleImageUtilsBaseAsyncTaskBlueprintProxy::Tick(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong local_18 [2];
  
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    if (*(wchar_t **)(param_1 + 0x38) != L"Invalid conversion task") {
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x44) != 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0x18);
        iVar5 = *(int *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x40) = iVar5 + 0x18;
      if (*(int *)(param_1 + 0x44) < iVar5 + 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar5);
      }
      builtin_wcsncpy(*(wchar_t **)(param_1 + 0x38),L"Invalid conversion task",0x18);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    FAppleImageConversionDelegate::Broadcast(param_1 + 0x18,param_1 + 0x38);
    return;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  if (cVar2 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x58) = 0;
    cVar2 = (**(code **)**(undefined8 **)(param_1 + 0x28))();
    if (cVar2 == '\0') {
      iVar5 = 0;
      if ((wchar_t *)*plVar1 != L"Success") {
        *(undefined4 *)(param_1 + 0x40) = 0;
        if (*(int *)(param_1 + 0x44) != 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,8);
          iVar5 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar5 + 8;
        if (*(int *)(param_1 + 0x44) < iVar5 + 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        builtin_wcsncpy((wchar_t *)*plVar1,L"Success",8);
      }
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                         (*(longlong **)(param_1 + 0x28),local_18);
      plVar4 = (longlong *)(param_1 + 0x48);
      if (plVar4 != plVar3) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        *plVar4 = *plVar3;
        *plVar3 = 0;
        *(int *)(param_1 + 0x50) = (int)plVar3[1];
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((longlong)plVar3 + 0xc);
        plVar3[1] = 0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      param_1 = param_1 + 8;
    }
    else {
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
                         (*(longlong **)(param_1 + 0x28),local_18);
      if (plVar1 != plVar4) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = *plVar4;
        *plVar4 = 0;
        *(int *)(param_1 + 0x40) = (int)plVar4[1];
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)plVar4 + 0xc);
        plVar4[1] = 0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      param_1 = param_1 + 0x18;
    }
    FAppleImageConversionDelegate::Broadcast(param_1,plVar1);
  }
  return;
}



// FUNCTION 1408d2fd0 FUN_1408d2fd0 body=47 status=ok
// SIG undefined FUN_1408d2fd0(void)

longlong FUN_1408d2fd0(void)

{
  if (DAT_146861828 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146861828,&PTR_s__Script_AppleImageUtils_1441331c8);
  }
  return DAT_146861828;
}



// FUNCTION 1408d3000 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAppleImageInterface::GetPrivateStaticClass(void)

{
  if (DAT_146861890 == 0) {
    FUN_14171ccd0(L"/Script/AppleImageUtils",L"AppleImageInterface",&DAT_146861890,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146861890;
}



// FUNCTION 1408d30b0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_146861878 == 0) {
    FUN_14171ccd0(L"/Script/AppleImageUtils",L"AppleImageUtilsBaseAsyncTaskBlueprintProxy",
                  &DAT_146861878,StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy,
                  0x88,0x10000000,0,L"Engine",&LAB_1408d32b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146861878;
}



// FUNCTION 1408d3150 FUN_1408d3150 body=47 status=ok
// SIG undefined FUN_1408d3150(void)

longlong FUN_1408d3150(void)

{
  if (DAT_146861870 == 0) {
    FUN_141786440(&DAT_146861870,&PTR_GetPrivateStaticClass_144132c90);
  }
  return DAT_146861870;
}



// FUNCTION 1408d3180 FUN_1408d3180 body=47 status=ok
// SIG undefined FUN_1408d3180(void)

longlong FUN_1408d3180(void)

{
  if (DAT_146861850 == 0) {
    FUN_141786a30(&DAT_146861850,&PTR_FUN_14627fa60);
  }
  return DAT_146861850;
}



// FUNCTION 1408d31b0 FUN_1408d31b0 body=47 status=ok
// SIG undefined FUN_1408d31b0(void)

longlong FUN_1408d31b0(void)

{
  if (DAT_146861858 == 0) {
    FUN_141786a30(&DAT_146861858,&PTR_FUN_14627fbe0);
  }
  return DAT_146861858;
}



// FUNCTION 1408d31e0 FUN_1408d31e0 body=47 status=ok
// SIG undefined FUN_1408d31e0(void)

longlong FUN_1408d31e0(void)

{
  if (DAT_146861860 == 0) {
    FUN_141786a30(&DAT_146861860,&PTR_FUN_14627fd40);
  }
  return DAT_146861860;
}



// FUNCTION 1408d3210 FUN_1408d3210 body=47 status=ok
// SIG undefined FUN_1408d3210(void)

longlong FUN_1408d3210(void)

{
  if (DAT_146861868 == 0) {
    FUN_141786a30(&DAT_146861868,&PTR_FUN_14627fea0);
  }
  return DAT_146861868;
}



// FUNCTION 1408d3240 FUN_1408d3240 body=53 status=ok
// SIG undefined FUN_1408d3240(void)

void FUN_1408d3240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144133220;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408d32d0 Copy body=247 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAppleImageUtilsImageConversionResult>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar3 + -2) {
        iVar1 = *(int *)(puVar3 + -1);
        pvVar2 = (void *)puVar3[-2];
        *(int *)(param_2 + 1) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,pvVar2,(longlong)iVar1 * 2);
        }
      }
      puVar4 = param_2 + 2;
      if (puVar4 != puVar3) {
        iVar1 = *(int *)(puVar3 + 1);
        pvVar2 = (void *)*puVar3;
        *(int *)(param_2 + 3) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1);
        }
      }
      puVar3 = puVar3 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408d33d0 EAppleTextureType_StaticEnum body=85 status=ok
// SIG undefined EAppleTextureType_StaticEnum(void)

void EAppleTextureType_StaticEnum(void)

{
  if (DAT_146861820 == 0) {
    if (DAT_146861828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146861828,&PTR_s__Script_AppleImageUtils_1441331c8)
      ;
    }
    DAT_146861820 = GetStaticEnum(FUN_1408d3560,DAT_146861828,L"EAppleTextureType");
  }
  return;
}



// FUNCTION 1408d3430 Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_CRC(void)

{
  return 0x9d2dfbf5;
}



// FUNCTION 1408d3450 StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy body=34 status=ok
// SIG undefined StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(void)

void UAppleImageUtilsBaseAsyncTaskBlueprintProxy::
     StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_CreateProxyObjectForConvertToHEI_144133340,4);
  return;
}



// FUNCTION 1408d3480 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAppleImageUtilsImageConversionResult::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146861838 == 0) {
    if (DAT_146861828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146861828,&PTR_s__Script_AppleImageUtils_1441331c8)
      ;
    }
    lVar1 = DAT_146861828;
    uVar2 = Get_Z_Construct_UScriptStruct_FAppleImageUtilsImageConversionResult_CRC();
    DAT_146861838 =
         GetStaticStruct(FUN_1408d3590,lVar1,L"AppleImageUtilsImageConversionResult",0x20,uVar2);
  }
  return;
}



// FUNCTION 1408d3500 FUN_1408d3500 body=47 status=ok
// SIG undefined FUN_1408d3500(void)

longlong FUN_1408d3500(void)

{
  if (DAT_146861888 == 0) {
    FUN_141786440(&DAT_146861888,&PTR_GetPrivateStaticClass_144133030);
  }
  return DAT_146861888;
}



// FUNCTION 1408d3530 FUN_1408d3530 body=47 status=ok
// SIG undefined FUN_1408d3530(void)

longlong FUN_1408d3530(void)

{
  if (DAT_146861830 == 0) {
    FUN_141786a30(&DAT_146861830,&PTR_FUN_14627f780);
  }
  return DAT_146861830;
}



// FUNCTION 1408d3560 FUN_1408d3560 body=47 status=ok
// SIG undefined FUN_1408d3560(void)

longlong FUN_1408d3560(void)

{
  if (DAT_146861880 == 0) {
    FUN_1417866a0(&DAT_146861880,&PTR_FUN_14627ffa0);
  }
  return DAT_146861880;
}



// FUNCTION 1408d3590 FUN_1408d3590 body=47 status=ok
// SIG undefined FUN_1408d3590(void)

longlong FUN_1408d3590(void)

{
  if (DAT_146861848 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861848,&PTR_FUN_14627f870);
  }
  return DAT_146861848;
}



// FUNCTION 1408d35c0 FUN_1408d35c0 body=319 status=ok
// SIG undefined FUN_1408d35c0(void)

void FUN_1408d35c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF
                    (local_28[0],local_res20[0],bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408d3700 FUN_1408d3700 body=319 status=ok
// SIG undefined FUN_1408d3700(void)

void FUN_1408d3700(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG
                    (local_28[0],local_res20[0],bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408d3840 execGFERequestPermissions body=258 status=ok
// SIG undefined execGFERequestPermissions(void)

void URequestPermissionsAsync::execGFERequestPermissions
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
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
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG
                    (local_res20,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408d3950 execGFERequestPermissions body=258 status=ok
// SIG undefined execGFERequestPermissions(void)

void URequestPermissionsAsync::execGFERequestPermissions
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
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
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF
                    (local_res20,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1408d3a60 DetectFaces body=418 status=ok
// SIG undefined DetectFaces(void)

undefined8 *
FAppleVisionPlugin::DetectFaces(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  void *local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_20 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FAppleVisionDetectFacesAsyncTask>();
  local_28 = local_20 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  plVar6 = local_20;
  plVar4 = local_28;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  plVar4[8] = param_3;
  if (param_3 != 0) {
    uVar7 = UAppleImageInterface::GetPrivateStaticClass();
    lVar8 = UObjectBaseUtility::GetInterfaceAddress(param_3,uVar7);
    if (lVar8 != 0) goto LAB_1408d3bad;
  }
  local_38 = (void *)0x0;
  local_30 = 0x40;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy
            (local_38,L"DetectFaces only supports UAppleImageInterface derived textures",0x80);
  ppvVar3 = (void **)(plVar4 + 2);
  if (ppvVar3 != &local_38) {
    lVar8 = (longlong)(int)local_30;
    *(int *)(plVar4 + 3) = (int)local_30;
    if (((int)local_30 == 0) && (*(int *)((longlong)plVar4 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)plVar4 + 0x1c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar3,local_30 & 0xffffffff);
      ::_guard_xfg_dispatch_icall_nop(*ppvVar3,local_38,lVar8 * 2);
    }
  }
  LOCK();
  *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(plVar4 + 1) = 1;
  UNLOCK();
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
LAB_1408d3bad:
  *param_2 = plVar4;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1408d3c10 NewIntrusiveReferenceController<FAppleVisionDetectFacesAsyncTask> body=407 status=ok
// SIG undefined NewIntrusiveReferenceController<FAppleVisionDetectFacesAsyncTask>(void)

undefined8 *
SharedPointerInternals::NewIntrusiveReferenceController<FAppleVisionDetectFacesAsyncTask>(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  puVar3 = (undefined8 *)operator_new(0x58);
  lVar7 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &PTR_LAB_144133b00;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[2] = &PTR_FUN_144133ac0;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = &PTR__scalar_deleting_destructor__144133ac8;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = &PTR__scalar_deleting_destructor__143f73ca8;
    *(undefined1 *)(puVar3 + 9) = 0;
    if (DAT_1468c217e == '\0') {
      if (DAT_1469e6880 == 0) {
        uVar4 = GetTransientPackage();
        FUN_1417846f0(uVar4,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar5 = UGCObjectReferencer::GetPrivateStaticClass();
        DAT_1469e6880 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
        iVar1 = *(int *)(DAT_1469e6880 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar6;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
        }
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
      }
      UGCObjectReferencer::AddObject(DAT_1469e6880,puVar3 + 8);
      *(undefined1 *)(puVar3 + 9) = 1;
    }
    puVar3[2] = &PTR__scalar_deleting_destructor__144133ae0;
    puVar3[8] = &PTR_LAB_144133ae8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408d3db0 FDetectedFeatureRegion body=114 status=ok
// SIG undefined FDetectedFeatureRegion(void)

undefined4 * FDetectedFeatureRegion::FDetectedFeatureRegion(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1408d3e30 UAppleVisionDetectFacesAsyncTaskBlueprintProxy body=166 status=ok
// SIG undefined UAppleVisionDetectFacesAsyncTaskBlueprintProxy(void)

undefined8 *
UAppleVisionDetectFacesAsyncTaskBlueprintProxy::UAppleVisionDetectFacesAsyncTaskBlueprintProxy
          (undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR__scalar_deleting_destructor__144133800;
  *puVar1 = &PTR_Tick_144133a78;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



// FUNCTION 1408d3ee0 ~TArray<FDetectedFace,FDefaultAllocator> body=118 status=ok
// SIG undefined ~TArray<FDetectedFace,FDefaultAllocator>(void)

void TArray<FDetectedFace,FDefaultAllocator>::~TArray<FDetectedFace,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      FUN_1408708d0(plVar2 + 2);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-5] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
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



// FUNCTION 1408d3f60 ~FAppleVisionDetectFacesAsyncTask body=100 status=ok
// SIG undefined ~FAppleVisionDetectFacesAsyncTask(void)

void FAppleVisionDetectFacesAsyncTask::~FAppleVisionDetectFacesAsyncTask(undefined8 *param_1)

{
  param_1[6] = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 7) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144133ac8;
  TArray<FDetectedFace,FDefaultAllocator>::~TArray<FDetectedFace,FDefaultAllocator>(param_1 + 4);
  *param_1 = &PTR_FUN_144133ac0;
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408d3fd0 operator= body=431 status=ok
// SIG undefined operator=(void)

longlong * TArray<FDetectedFace,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  if (param_1 != param_2) {
    iVar7 = (int)param_1[1];
    if (iVar7 != 0) {
      plVar4 = (longlong *)(*param_1 + 0x30);
      do {
        FUN_1408708d0(plVar4 + 2);
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        if (plVar4[-5] != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (int)param_2[1];
    lVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
      lVar9 = *param_1;
      if (iVar7 != 0) {
        piVar11 = (int *)(lVar5 + 0x48);
        puVar10 = (undefined4 *)(lVar9 + 0x3c);
        do {
          FDetectedFeatureRegion::FDetectedFeatureRegion(lVar9,piVar11 + -0x12);
          iVar6 = piVar11[-0xb];
          iVar2 = piVar11[-10];
          iVar3 = piVar11[-9];
          puVar10[-9] = piVar11[-0xc];
          puVar10[-8] = iVar6;
          puVar10[-7] = iVar2;
          puVar10[-6] = iVar3;
          puVar10[-5] = piVar11[-8];
          *(undefined8 *)(puVar10 + -3) = 0;
          iVar6 = piVar11[-4];
          _Src = *(void **)(piVar11 + -6);
          puVar10[-1] = iVar6;
          if (iVar6 == 0) {
            *puVar10 = 0;
          }
          else {
            TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar10 + -3,iVar6,0);
            ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar10 + -3),_Src,(longlong)iVar6 * 0x1c);
          }
          *(undefined8 *)(puVar10 + 1) = 0;
          iVar6 = *piVar11;
          lVar5 = *(longlong *)(piVar11 + -2);
          puVar10[3] = iVar6;
          if (iVar6 == 0) {
            puVar10[4] = 0;
          }
          else {
            TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar10 + 1,iVar6);
            lVar8 = *(longlong *)(puVar10 + 1);
            do {
              FDetectedFeatureRegion::FDetectedFeatureRegion(lVar8,lVar5);
              puVar1 = (undefined1 *)(lVar5 + 0x18);
              lVar5 = lVar5 + 0x20;
              *(undefined1 *)(lVar8 + 0x18) = *puVar1;
              lVar8 = lVar8 + 0x20;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar9 = lVar9 + 0x50;
          puVar10 = puVar10 + 0x14;
          piVar11 = piVar11 + 0x14;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1408d41a0 FUN_1408d41a0 body=72 status=ok
// SIG undefined FUN_1408d41a0(void)

undefined8 * FUN_1408d41a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144133ac0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1408d41f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAppleVisionDetectFacesAsyncTask::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FAppleVisionDetectFacesAsyncTask();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1408d4230 `scalar_deleting_destructor' body=91 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAppleVisionDetectFacesAsyncTaskBase::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144133ac8;
  TArray<FDetectedFace,FDefaultAllocator>::~TArray<FDetectedFace,FDefaultAllocator>(param_1 + 4);
  *param_1 = &PTR_FUN_144133ac0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1408d4290 `scalar_deleting_destructor' body=178 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAppleVisionDetectFacesAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FDetectedFace,FDefaultAllocator>::~TArray<FDetectedFace,FDefaultAllocator>(param_1 + 0x60);
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1408d4350 CreateProxyObjectForDetectFaces body=271 status=ok
// SIG undefined CreateProxyObjectForDetectFaces(void)

longlong UAppleVisionDetectFacesAsyncTaskBlueprintProxy::CreateProxyObjectForDetectFaces
                   (undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res18 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x1000000;
  puVar7 = (undefined8 *)FName::FName(local_res18,"AppleVision",1);
  uVar4 = *puVar7;
  uVar5 = FUN_14168dc80();
  plVar8 = (longlong *)FUN_141690010(uVar5,uVar4);
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x40))(plVar8,local_28,param_1);
  if ((undefined8 *)(lVar6 + 0x50) != puVar7) {
    *(undefined8 *)(lVar6 + 0x50) = *puVar7;
    *puVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar6 + 0x58,puVar7 + 1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return lVar6;
}



// FUNCTION 1408d4470 FUN_1408d4470 body=39 status=ok
// SIG undefined FUN_1408d4470(void)

void FUN_1408d4470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441337b8;
    return;
  }
  return;
}



// FUNCTION 1408d44b0 Tick body=246 status=ok
// SIG undefined Tick(void)

void UAppleVisionDetectFacesAsyncTaskBlueprintProxy::Tick(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
    LOCK();
    bVar3 = *piVar1 == 0;
    if (bVar3) {
      *piVar1 = 0;
    }
    UNLOCK();
    if (!bVar3) {
      *(undefined1 *)(param_1 + 0x48) = 0;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0xc);
      LOCK();
      bVar3 = *piVar1 == 0;
      if (bVar3) {
        *piVar1 = 0;
      }
      UNLOCK();
      if (bVar3) {
        TArray<FDetectedFace,FDefaultAllocator>::operator=
                  (param_1 + 0x38,*(longlong *)(param_1 + 0x28) + 0x20);
        local_28 = 0;
        local_20 = 0;
        TArray<FDetectedFace,FDefaultAllocator>::operator=(&local_28,param_1 + 0x38);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 8,&local_28);
        puVar2 = &local_28;
      }
      else {
        local_18 = 0;
        local_10 = 0;
        TArray<FDetectedFace,FDefaultAllocator>::operator=(&local_18,param_1 + 0x38);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x18,&local_18);
        puVar2 = &local_18;
      }
      TArray<FDetectedFace,FDefaultAllocator>::~TArray<FDetectedFace,FDefaultAllocator>(puVar2);
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  local_38 = 0;
  local_30 = 0;
  TArray<FDetectedFace,FDefaultAllocator>::operator=(&local_38,param_1 + 0x38);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x18,&local_38);
  TArray<FDetectedFace,FDefaultAllocator>::~TArray<FDetectedFace,FDefaultAllocator>(&local_38);
  return;
}



// FUNCTION 1408d45b0 FUN_1408d45b0 body=47 status=ok
// SIG undefined FUN_1408d45b0(void)

longlong FUN_1408d45b0(void)

{
  if (DAT_1468618a8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468618a8,&PTR_s__Script_AppleVision_144134798);
  }
  return DAT_1468618a8;
}



// FUNCTION 1408d45e0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAppleVisionDetectFacesAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_1468618c8 == 0) {
    FUN_14171ccd0(L"/Script/AppleVision",L"AppleVisionDetectFacesAsyncTaskBlueprintProxy",
                  &DAT_1468618c8,StaticRegisterNativesUAppleVisionDetectFacesAsyncTaskBlueprintProxy
                  ,0x78,0x10000000,0,L"Engine",&LAB_1408d48d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468618c8;
}



// FUNCTION 1408d4680 FUN_1408d4680 body=47 status=ok
// SIG undefined FUN_1408d4680(void)

longlong FUN_1408d4680(void)

{
  if (DAT_1468618c0 == 0) {
    FUN_141786440(&DAT_1468618c0,&PTR_GetPrivateStaticClass_144133c40);
  }
  return DAT_1468618c0;
}



// FUNCTION 1408d46b0 FUN_1408d46b0 body=47 status=ok
// SIG undefined FUN_1408d46b0(void)

longlong FUN_1408d46b0(void)

{
  if (DAT_1468618b8 == 0) {
    FUN_141786a30(&DAT_1468618b8,&PTR_FUN_1462800f0);
  }
  return DAT_1468618b8;
}



// FUNCTION 1408d4700 FUN_1408d4700 body=47 status=ok
// SIG undefined FUN_1408d4700(void)

longlong FUN_1408d4700(void)

{
  if (DAT_146861930 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146861930,&PTR_FUN_1462806a0);
  }
  return DAT_146861930;
}


