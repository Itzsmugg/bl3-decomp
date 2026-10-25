// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140ac2d40 FUN_140ac2d40 body=75 status=ok
// SIG undefined FUN_140ac2d40(void)

void FUN_140ac2d40(longlong *param_1)

{
  int iVar1;
  
  if (((char)param_1[0x25] == '\x03') &&
     (iVar1 = (int)param_1[0xaf] + 1, (int)param_1[0xad] != iVar1)) {
    (**(code **)(*param_1 + 0x600))();
    *(int *)(param_1 + 0xad) = iVar1;
    FUN_14130a1b0(param_1,iVar1);
  }
  return;
}



// FUNCTION 140ac2d90 FUN_140ac2d90 body=152 status=ok
// SIG undefined FUN_140ac2d90(void)

void FUN_140ac2d90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x610) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146867bf0) {
      _Init_thread_header(&DAT_146867bf0);
      if (DAT_146867bf0 == -1) {
        FName::FName(&DAT_146867be8,L"SurfaceArea",1);
        _Init_thread_footer(&DAT_146867bf0);
      }
    }
    FUN_14260f0c0(*(undefined8 *)(param_1 + 0x610),DAT_146867be8,*(undefined4 *)(param_1 + 0x4c4));
    return;
  }
  return;
}



// FUNCTION 140ac2e30 FUN_140ac2e30 body=116 status=ok
// SIG undefined FUN_140ac2e30(void)

undefined1 FUN_140ac2e30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_2);
  if ((lVar3 != 0) && (lVar3 = FWeakObjectPtr::Get(param_2), lVar3 != 0)) {
    lVar1 = *(longlong *)(lVar3 + 0x50);
    while (lVar2 = lVar1, lVar2 != 0) {
      lVar3 = lVar2;
      lVar1 = *(longlong *)(lVar2 + 0x50);
    }
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    if (lVar3 == lVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ac2eb0 FUN_140ac2eb0 body=1644 status=ok
// SIG undefined FUN_140ac2eb0(void)

ulonglong FUN_140ac2eb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong in_RAX;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *_Dst;
  longlong *plVar19;
  void *pvVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_90;
  uint local_88;
  uint local_84;
  longlong *local_80;
  undefined8 local_78;
  void *local_70;
  uint local_68;
  longlong local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  
  plVar15 = *(longlong **)(param_2 + 0x560);
  if ((plVar15 == (longlong *)0x0) ||
     (local_res10 = plVar15, local_res18 = param_3, in_RAX = FUN_140ab3e80(), (char)in_RAX != '\0'))
  {
    return in_RAX & 0xffffffffffffff00;
  }
  local_68 = *(uint *)(param_2 + 0x578);
  uVar11 = (ulonglong)(int)local_68;
  pvVar20 = *(void **)(param_2 + 0x570);
  local_70 = (void *)0x0;
  if (local_68 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_70,local_68,0);
    _guard_xfg_dispatch_icall_nop(local_70,pvVar20,uVar11 << 3);
    uVar11 = (ulonglong)local_68;
  }
  iVar4 = (int)uVar11;
  iVar16 = iVar4 + -1;
  if (-1 < iVar16) {
    puVar13 = (undefined8 *)((longlong)local_70 + (longlong)iVar16 * 8);
    pvVar20 = (void *)((longlong)local_70 + (longlong)iVar4 * 8);
    _Dst = puVar13;
    do {
      cVar3 = FUN_140ab3e80(param_1,*puVar13);
      if (cVar3 != '\0') {
        iVar4 = ((int)uVar11 - iVar16) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar20,(longlong)iVar4 << 3);
        }
        uVar11 = (ulonglong)((int)uVar11 - 1);
      }
      iVar4 = (int)uVar11;
      pvVar20 = (void *)((longlong)pvVar20 + -8);
      _Dst = _Dst + -1;
      puVar13 = puVar13 + -1;
      iVar16 = iVar16 + -1;
      plVar15 = local_res10;
      param_3 = local_res18;
    } while (-1 < iVar16);
  }
  if (iVar4 < 1) {
    bVar10 = false;
  }
  else {
    local_80 = (longlong *)0x0;
    local_78 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,0);
    *local_80 = (longlong)plVar15;
    iVar16 = (int)local_78;
    if (iVar4 != 0) {
      if (local_78._4_4_ < (int)local_78 + iVar4) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_80);
        iVar16 = (int)local_78;
      }
      _guard_xfg_dispatch_icall_nop(local_80 + iVar16,local_70,(longlong)iVar4 << 3);
      iVar16 = iVar16 + iVar4;
    }
    if (*(char *)(param_2 + 0x592) == '\x01') {
      plVar14 = (longlong *)0x0;
      plVar15 = local_80 + iVar16;
      local_90 = (longlong *)0x0;
      iVar4 = 0;
      local_84 = 0;
      plVar18 = plVar14;
      plVar19 = plVar14;
      plVar21 = local_90;
      plVar17 = local_80;
      for (local_res20 = local_80; local_90 = plVar21, local_80 = plVar17, local_res20 != plVar15;
          local_res20 = local_res20 + 1) {
        lVar1 = *local_res20;
        lVar6 = FUN_140c41820(lVar1);
        if ((lVar6 != 0) && (lVar7 = FUN_141227a00(lVar6), lVar7 == lVar1)) {
          lVar7 = param_3[1];
          iVar4 = (int)lVar7 + 1;
          *(int *)(param_3 + 1) = iVar4;
          if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3);
          }
          lVar2 = *param_3;
          lVar7 = (longlong)(int)lVar7 * 0x10;
          *(undefined8 *)(lVar7 + lVar2) = 0;
          *(undefined8 *)(lVar7 + 8 + lVar2) = 0;
          plVar21 = (longlong *)(*param_3 + lVar7);
          iVar4 = (int)plVar21[1];
          *(int *)(plVar21 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar21 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar21,iVar4);
          }
          iVar16 = (int)plVar19;
          *(longlong *)(*plVar21 + (longlong)iVar4 * 8) = lVar1;
          for (plVar17 = plVar18; plVar17 != plVar18 + iVar16; plVar17 = plVar17 + 1) {
            if (*plVar17 == lVar1) {
              if ((int)((longlong)plVar17 - (longlong)plVar18 >> 3) != -1) goto LAB_140ac313c;
              break;
            }
          }
          local_88 = iVar16 + 1;
          if ((int)plVar14 < (int)local_88) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_90,plVar19);
            plVar18 = local_90;
          }
          plVar19 = (longlong *)(ulonglong)local_88;
          plVar18[iVar16] = lVar1;
LAB_140ac313c:
          FUN_141223c50(lVar6,&local_60);
          local_res10 = &local_60;
          FUN_140ac37c0(&local_res10);
          plVar17 = local_48;
          plVar14 = (longlong *)(local_60 + (longlong)local_58 * 8);
          local_res10 = plVar14;
          if (local_50 != plVar14) {
            do {
              plVar12 = local_50;
              lVar1 = *local_50;
              if (lVar1 != 0) {
                iVar4 = *(int *)(lVar1 + 0xc);
                if (iVar4 < (int)DAT_1469e91c4) {
                  uVar9 = iVar4 >> 0x1f & 0xffff;
                  uVar5 = iVar4 + uVar9;
                  lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                          (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
                }
                else {
                  lVar6 = 0;
                }
                if ((((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) &&
                    (cVar3 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(lVar1),
                    cVar3 == '\0')) && (cVar3 = FUN_140e1ace0(lVar1), cVar3 != '\0')) {
                  plVar14 = (longlong *)*plVar21;
                  iVar4 = (int)plVar21[1];
                  for (plVar8 = plVar14; plVar8 != plVar14 + iVar4; plVar8 = plVar8 + 1) {
                    if (*plVar8 == lVar1) {
                      if ((int)((longlong)plVar8 - (longlong)plVar14 >> 3) != -1)
                      goto LAB_140ac3244;
                      break;
                    }
                  }
                  *(int *)(plVar21 + 1) = iVar4 + 1;
                  if (*(int *)((longlong)plVar21 + 0xc) < iVar4 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar21,iVar4)
                    ;
                  }
                  *(longlong *)(*plVar21 + (longlong)iVar4 * 8) = lVar1;
LAB_140ac3244:
                  iVar4 = (int)plVar19;
                  for (plVar8 = plVar18; plVar8 != plVar18 + iVar4; plVar8 = plVar8 + 1) {
                    if (*plVar8 == lVar1) {
                      plVar14 = local_res10;
                      if ((int)((longlong)plVar8 - (longlong)plVar18 >> 3) != -1)
                      goto LAB_140ac32b0;
                      break;
                    }
                  }
                  local_88 = iVar4 + 1;
                  if ((int)local_84 < (int)local_88) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_90);
                    plVar18 = local_90;
                  }
                  plVar19 = (longlong *)(ulonglong)local_88;
                  plVar18[iVar4] = lVar1;
                  plVar14 = local_res10;
                }
              }
LAB_140ac32b0:
              do {
                do {
                  plVar12 = plVar12 + 1;
                  if (plVar12 == plVar17) goto LAB_140ac32f7;
                  lVar1 = *plVar12;
                } while (lVar1 == 0);
                lVar6 = FUN_1413ffe00();
                lVar1 = *(longlong *)(lVar1 + 0x10);
                if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                    lVar6 + 0x88)) {
                  bVar10 = false;
                }
                else {
                  bVar10 = true;
                }
              } while (!bVar10);
LAB_140ac32f7:
              local_50 = plVar12;
            } while (plVar12 != plVar14);
          }
          if (local_60 != 0) {
            FMemory::Free();
          }
          plVar14 = (longlong *)(ulonglong)local_84;
        }
        iVar4 = (int)plVar19;
        param_3 = local_res18;
        plVar21 = local_90;
        plVar17 = local_80;
      }
      uVar22 = 0;
      uVar11 = (ulonglong)((longlong)plVar15 + (7 - (longlong)plVar17)) >> 3;
      if (plVar15 < plVar17) {
        uVar11 = uVar22;
      }
      if (uVar11 != 0) {
        plVar15 = plVar21 + iVar4;
        do {
          plVar18 = local_res18;
          lVar1 = *plVar17;
          for (plVar14 = plVar21; plVar14 != plVar15; plVar14 = plVar14 + 1) {
            if (*plVar14 == lVar1) goto LAB_140ac33f6;
          }
          iVar4 = (int)local_res18[1];
          *(int *)(local_res18 + 1) = iVar4 + 1;
          if (*(int *)((longlong)local_res18 + 0xc) < iVar4 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_res18,iVar4);
          }
          lVar6 = *plVar18;
          lVar7 = (longlong)iVar4 * 0x10;
          *(undefined8 *)(lVar7 + lVar6) = 0;
          *(undefined8 *)(lVar7 + 8 + lVar6) = 0;
          plVar14 = (longlong *)(*plVar18 + lVar7);
          iVar4 = (int)plVar14[1];
          *(int *)(plVar14 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
          }
          *(longlong *)(*plVar14 + (longlong)iVar4 * 8) = lVar1;
          plVar21 = local_90;
LAB_140ac33f6:
          plVar17 = plVar17 + 1;
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar11);
      }
      if (local_90 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      uVar22 = 0;
      uVar11 = (ulonglong)((longlong)(local_80 + iVar16) + (7 - (longlong)local_80)) >> 3;
      if (local_80 + iVar16 < local_80) {
        uVar11 = uVar22;
      }
      plVar15 = local_80;
      if (uVar11 != 0) {
        do {
          plVar14 = local_res18;
          lVar1 = *plVar15;
          iVar4 = (int)local_res18[1];
          *(int *)(local_res18 + 1) = iVar4 + 1;
          if (*(int *)((longlong)local_res18 + 0xc) < iVar4 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_res18,iVar4);
          }
          lVar6 = *plVar14;
          lVar7 = (longlong)iVar4 * 0x10;
          *(undefined8 *)(lVar7 + lVar6) = 0;
          *(undefined8 *)(lVar7 + 8 + lVar6) = 0;
          plVar14 = (longlong *)(*plVar14 + lVar7);
          iVar4 = (int)plVar14[1];
          *(int *)(plVar14 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar4);
          }
          uVar22 = uVar22 + 1;
          *(longlong *)(*plVar14 + (longlong)iVar4 * 8) = lVar1;
          plVar15 = plVar15 + 1;
        } while (uVar22 != uVar11);
      }
    }
    bVar10 = 1 < (int)local_res18[1];
    if (local_80 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return (ulonglong)bVar10;
}



// FUNCTION 140ac3520 FUN_140ac3520 body=143 status=ok
// SIG undefined FUN_140ac3520(void)

ulonglong FUN_140ac3520(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar4 = GetTransientPackage();
  uVar5 = UObjectBaseUtility::IsIn(param_3,uVar4);
  if (((char)uVar5 == '\0') &&
     (uVar1 = *(uint *)(param_3 + 8) >> 6, uVar5 = (ulonglong)uVar1, (uVar1 & 1) == 0)) {
    uVar4 = FUN_142ff6920();
    uVar2 = FUN_142fffbb0(uVar4,param_2,param_3);
    uVar4 = FUN_142ff6920();
    uVar3 = FUN_142ff71d0(uVar4,param_2,0xffffffff);
    uVar5 = FUN_140ac35b0(param_1,uVar2,uVar3);
    return uVar5;
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 140ac35b0 FUN_140ac35b0 body=523 status=ok
// SIG undefined FUN_140ac35b0(void)

undefined1 * FUN_140ac35b0(char *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint local_res8;
  byte local_res10;
  
  if ((*param_1 == '\x01') && (param_3 != 0)) {
    iVar3 = *(int *)(param_1 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x18) >> 3;
    iVar4 = *(uint *)(param_1 + 0x18) + uVar7 * -8;
    iVar6 = uVar7 + 1;
    uVar2 = 8 - iVar4;
    local_res8 = uVar2;
    if (param_3 <= uVar2) {
      local_res8 = param_3;
    }
    if (iVar3 < iVar6) {
      *(int *)(param_1 + 0x10) = iVar6;
      if (*(int *)(param_1 + 0x14) < iVar6) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar3 + *(longlong *)(param_1 + 8)),0,(longlong)(iVar6 - iVar3))
      ;
    }
    else if ((iVar6 < iVar3) && (iVar6 != iVar3)) {
      *(int *)(param_1 + 0x10) = iVar6;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 8);
    }
    param_3 = param_3 - local_res8;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7);
    *pbVar1 = *pbVar1 & (byte)(0xff >> ((byte)uVar2 & 0x1f));
    iVar3 = 0x20 - local_res8;
    local_res10 = (byte)param_2;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7);
    *pbVar1 = *pbVar1 | ((byte)(0xffffffff >> ((byte)iVar3 & 0x1f)) & local_res10) <<
                        ((byte)iVar4 & 0x1f);
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + local_res8;
    uVar2 = 8;
    if (param_3 < 9) {
      uVar2 = param_3;
    }
    if (param_3 != 0) {
      iVar4 = uVar7 + 2;
      do {
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 < iVar4) {
          *(int *)(param_1 + 0x10) = iVar4;
          if (*(int *)(param_1 + 0x14) < iVar4) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 8);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar3 + *(longlong *)(param_1 + 8)),0,
                     (longlong)(iVar4 - iVar3));
        }
        else if ((iVar4 < iVar3) && (iVar4 != iVar3)) {
          *(int *)(param_1 + 0x10) = iVar4;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 8);
        }
        param_3 = param_3 - uVar2;
        pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)iVar6);
        *pbVar1 = *pbVar1 & -1 << ((byte)uVar2 & 0x1f);
        bVar5 = (byte)local_res8;
        local_res8 = local_res8 + uVar2;
        iVar3 = param_2 >> (bVar5 & 0x1f);
        pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)iVar6);
        *pbVar1 = *pbVar1 | (byte)(0xffffffff >> (0x20 - (byte)uVar2 & 0x1f)) & (byte)iVar3;
        *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar2;
        uVar2 = 8;
        if (param_3 < 9) {
          uVar2 = param_3;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 1;
      } while (param_3 != 0);
    }
    return (undefined1 *)CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
  }
  return &stack0x00000000;
}



// FUNCTION 140ac37c0 FUN_140ac37c0 body=158 status=ok
// SIG undefined FUN_140ac37c0(void)

longlong * FUN_140ac37c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)*param_1;
  lVar3 = ((longlong *)*param_1)[1];
  *param_2 = (longlong)plVar5;
  plVar1 = plVar5 + (int)lVar3;
  param_2[1] = (longlong)plVar1;
  if (plVar5 == plVar1) {
    return param_2;
  }
  do {
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      lVar4 = FUN_1413ffe00();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
    plVar5 = (longlong *)(*param_2 + 8);
    *param_2 = (longlong)plVar5;
    if (plVar5 == plVar1) {
      return param_2;
    }
  } while( true );
}



// FUNCTION 140ac3860 FUN_140ac3860 body=66 status=ok
// SIG undefined FUN_140ac3860(void)

void FUN_140ac3860(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14425d6a0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14425d6e8;
  }
  return;
}



// FUNCTION 140ac38b0 FUN_140ac38b0 body=62 status=ok
// SIG undefined FUN_140ac38b0(void)

void FUN_140ac38b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140ad3e20();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return;
}



// FUNCTION 140ac38f0 FUN_140ac38f0 body=64 status=ok
// SIG undefined FUN_140ac38f0(void)

undefined1 FUN_140ac38f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140ad3e20();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return 1;
}



// FUNCTION 140ac3930 FUN_140ac3930 body=261 status=ok
// SIG undefined FUN_140ac3930(void)

longlong FUN_140ac3930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28 [4];
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_14217e740(local_28);
  FUN_142194380(local_28,0x28,0,0,0);
  local_28[0] = *param_4;
  if (*(int *)(param_1 + 0x8c) < 1) {
    FUN_140a70170(param_1,1);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar1 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
    TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  FUN_14217e5b0((longlong)iVar1 * 0x20 + lVar2,local_28);
  FUN_14217f430(local_28);
  *(undefined8 *)(param_1 + 0x90) = param_2;
  FString::FString(param_1 + 0x98,param_3);
  return param_1;
}



// FUNCTION 140ac3a40 FUN_140ac3a40 body=170 status=ok
// SIG undefined FUN_140ac3a40(void)

longlong FUN_140ac3a40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_14217bdd0(param_1,0,param_3,param_4,param_2);
  cVar2 = FUN_14218fca0(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_14218fca0(param_1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x2e0);
      *(int *)(param_1 + 0x2e0) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2e4) < iVar1 + 1) {
        FUN_140ae1b70(param_1 + 0x38,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(param_1 + 0x2d8) == 0) {
        lVar3 = param_1 + 0x38;
      }
      FUN_140ac3930(lVar3 + (longlong)iVar1 * 0xa8,param_4,param_1 + 8,param_5);
    }
  }
  return param_1;
}



// FUNCTION 140ac3af0 FUN_140ac3af0 body=51 status=ok
// SIG undefined FUN_140ac3af0(void)

undefined8
FUN_140ac3af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_140ac3a40(param_1,&local_18,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 140ac3b30 FUN_140ac3b30 body=225 status=ok
// SIG undefined FUN_140ac3b30(void)

undefined8 FUN_140ac3b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar1 + 1,param_3);
    plVar1[2] = param_4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f4d1b8;
  }
  TBaseMulticastDelegate<void>::Add(param_1,param_2,&local_18);
  plVar1 = local_18;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140ac3c20 FUN_140ac3c20 body=418 status=ok
// SIG undefined FUN_140ac3c20(void)

int * FUN_140ac3c20(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  FUN_140acb440(param_1,local_28);
  *param_2 = local_28[0];
  TTuple<int,FFastArraySerializerGuidReferences>::TTuple<int,FFastArraySerializerGuidReferences>
            (local_20,param_3);
  local_20[0x30] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 200 + *param_1) == *local_20) goto LAB_140ac3ce1;
          iVar3 = *(int *)((longlong)iVar3 * 200 + 0xc0 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140ac3ce1:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 200 + *param_1);
      FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0xc0);
      TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140ac3d97;
    }
  }
  cVar1 = TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[0x31] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[0x30] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140ac3d97:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140ac3dd0 FUN_140ac3dd0 body=524 status=ok
// SIG undefined FUN_140ac3dd0(void)

int * FUN_140ac3dd0(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0xc) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  lVar5 = (longlong)iVar7;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + lVar5 * 0xc) = *param_3;
  *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) = 0xffffffff;
  puVar1 = (uint *)(lVar2 + lVar5 * 0xc);
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0xc) == *puVar1) goto LAB_140ac3f0b;
          iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140ac3f0b:
    bVar10 = iVar4 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0xc),puVar1,4);
      TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar4;
      goto LAB_140ac3fb4;
    }
  }
  cVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *puVar1;
    puVar1[2] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[1] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_140ac3fb4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 140ac3fe0 FUN_140ac3fe0 body=704 status=ok
// SIG undefined FUN_140ac3fe0(void)

int * FUN_140ac3fe0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_res8 [2];
  undefined1 local_48 [32];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (ulonglong *)*param_3;
  _Src = (ulonglong *)(*param_1 + (longlong)iVar11 * 0x28);
  lVar6 = FUN_140590080(local_48);
  *_Src = *puVar3;
  FUN_14058f8f0(_Src + 1,lVar6);
  *(undefined4 *)(_Src + 3) = *(undefined4 *)(lVar6 + 0x10);
  FUN_140591060(local_48);
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar13 = false;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      FUN_140591060((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140ac4276;
    }
  }
  if (3 < uVar10) {
    uVar5 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar8 = '\0';
    if (uVar5 != 0) {
      iVar11 = 0x1f - iVar9;
    }
    uVar5 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar8 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar12 = -(iVar9 + uVar5) ^ uVar5 >> 0xd;
    uVar10 = (iVar9 - uVar5) - uVar12 ^ uVar12 >> 0xc;
    uVar5 = (uVar5 - uVar10) - uVar12 ^ uVar10 << 0x10;
    uVar12 = (uVar12 - uVar5) - uVar10 ^ uVar5 >> 5;
    uVar10 = (uVar10 - uVar5) - uVar12 ^ uVar12 >> 3;
    uVar5 = (uVar5 - uVar10) - uVar12 ^ uVar10 << 10;
    uVar10 = ((uVar12 - uVar5) - uVar10 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140ac4276:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 140ac42a0 FUN_140ac42a0 body=196 status=ok
// SIG undefined FUN_140ac42a0(void)

undefined8 * FUN_140ac42a0(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float local_28;
  float fStack_24;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = puVar3 + (longlong)*(int *)(param_1 + 1) * 2;
  if (puVar3 != puVar4) {
    fStack_24 = (float)((ulonglong)*param_2 >> 0x20);
    local_28 = (float)*param_2;
    do {
      pfVar1 = (float *)*puVar3;
      pfVar2 = pfVar1 + (longlong)*(int *)(puVar3 + 1) * 4;
      while( true ) {
        if (pfVar1 == pfVar2) {
          return puVar3;
        }
        if (*(float *)((longlong)param_2 + 0xc) <
            (fStack_24 * pfVar1[1] + local_28 * *pfVar1 + *(float *)(param_2 + 1) * pfVar1[2]) -
            pfVar1[3]) break;
        pfVar1 = pfVar1 + 4;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar4);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ac4370 GetAuthGameMode<ABaseGameMode> body=89 status=ok
// SIG undefined GetAuthGameMode<ABaseGameMode>(void)

longlong UWorld::GetAuthGameMode<ABaseGameMode>(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 != 0) {
    lVar3 = FUN_141425c60();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140ac43d0 FUN_140ac43d0 body=917 status=ok
// SIG undefined FUN_140ac43d0(void)

longlong FUN_140ac43d0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140ac447f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140ac447f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140ac4494;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140ac4494:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140ac461d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413976e0();
LAB_140ac461d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413976e0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140ac469a;
  }
  lVar12 = 0;
LAB_140ac469a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
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
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 140ac4770 FUN_140ac4770 body=666 status=ok
// SIG undefined FUN_140ac4770(void)

longlong FUN_140ac4770(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140ac48d6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UAnimSharingStateInstance::GetPrivateStaticClass();
LAB_140ac48d6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UAnimSharingStateInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140ac4949;
  }
  lVar7 = 0;
LAB_140ac4949:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140ac4a10 GetGameState<APVPGameState> body=89 status=ok
// SIG undefined GetGameState<APVPGameState>(void)

longlong UWorld::GetGameState<APVPGameState>(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 != 0) {
    lVar3 = FUN_14131fc50();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140ac4a70 FUN_140ac4a70 body=69 status=ok
// SIG undefined FUN_140ac4a70(void)

ulonglong FUN_140ac4a70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14148cad0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140ac4ac0 FUN_140ac4ac0 body=89 status=ok
// SIG undefined FUN_140ac4ac0(void)

void FUN_140ac4ac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = AArchVisCharacter::StaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140ac4b20 FUN_140ac4b20 body=273 status=ok
// SIG undefined FUN_140ac4b20(void)

void FUN_140ac4b20(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_38;
  longlong local_30 [5];
  
  if (*(longlong *)*param_2 != 0) {
    cVar2 = FUN_1407ce010((longlong *)*param_2 + 1);
    if (cVar2 != '\0') {
      plVar5 = (longlong *)*param_1;
      plVar4 = plVar5 + (longlong)(int)param_1[1] * 5;
      if (plVar5 != plVar4) {
        do {
          if ((*(longlong *)*plVar5 == *(longlong *)*param_2) &&
             (*(longlong *)(((longlong *)*plVar5)[1] + 0x28) ==
              *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
            uVar3 = FUN_14217e610(&local_38,param_3);
            FUN_14217f450(plVar5 + 1,uVar3);
            plVar4 = &local_38;
            goto LAB_140ac4bf7;
          }
          plVar5 = plVar5 + 5;
        } while (plVar5 != plVar4);
      }
      local_38 = *param_2;
      FUN_14217e610(local_30,param_3);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar4 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      *plVar4 = local_38;
      FUN_14217e5b0(plVar4 + 1,local_30);
      plVar4 = local_30;
LAB_140ac4bf7:
      FUN_14217f430(plVar4);
    }
  }
  return;
}



// FUNCTION 140ac4c40 TTuple<int,FFastArraySerializerGuidReferences> body=261 status=ok
// SIG undefined TTuple<int,FFastArraySerializerGuidReferences>(void)

undefined4 *
TTuple<int,FFastArraySerializerGuidReferences>::TTuple<int,FFastArraySerializerGuidReferences>
          (undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0x16,param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  iVar1 = param_2[0x2c];
  _Src = *(void **)(param_2 + 0x2a);
  param_1[0x2c] = iVar1;
  if (iVar1 == 0) {
    param_1[0x2d] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x2a,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x2a),_Src,(longlong)iVar1);
  }
  param_1[0x2e] = param_2[0x2e];
  return param_1;
}



// FUNCTION 140ac4d50 FUN_140ac4d50 body=539 status=ok
// SIG undefined FUN_140ac4d50(void)

undefined8 * FUN_140ac4d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_140aeb790();
  *param_1 = &PTR__scalar_deleting_destructor__14425f608;
  param_1[0x8b] = &PTR_LAB_14425fdb0;
  param_1[0x8c] = &PTR_LAB_14425fe10;
  param_1[0x8d] = &PTR_LAB_14425fe38;
  param_1[0x8e] = &PTR_LAB_14425fe50;
  param_1[0x8f] = &PTR_LAB_14425fe78;
  param_1[0x90] = &PTR_LAB_14425fe88;
  param_1[0x92] = &PTR_LAB_14425fec8;
  param_1[0x93] = &PTR_LAB_14425fee0;
  param_1[0xab] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined1 *)(param_1 + 0xcb) = 1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RootComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DefaultUsableComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e80f20();
  lVar4 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xbc] = lVar4;
  *(byte *)(lVar4 + 0x228) = *(byte *)(lVar4 + 0x228) & 0xfd;
  *(undefined1 *)(param_1 + 0xb7) = 1;
  *(undefined1 *)(param_1 + 0xae) = 1;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0xbf800000;
  *(undefined2 *)(param_1 + 0xb1) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x58b) = 1;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 140ac4f70 FUN_140ac4f70 body=189 status=ok
// SIG undefined FUN_140ac4f70(void)

undefined8 * FUN_140ac4f70(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1442618f8;
  param_1[0x8b] = &PTR_LAB_144262060;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  FName::FName(param_1 + 0x8f,L"BeamTarget",1);
  *(undefined1 *)(param_1 + 0x93) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x49c,0);
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x20;
  param_1[0x98] = 0xcc;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  return param_1;
}



// FUNCTION 140ac5030 FUN_140ac5030 body=559 status=ok
// SIG undefined FUN_140ac5030(void)

undefined8 * FUN_140ac5030(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_140aeb790();
  *(undefined4 *)(param_1 + 0xaa) = 0x5dc;
  *param_1 = &PTR_FUN_144263ee8;
  *(undefined4 *)((longlong)param_1 + 0x554) = 1000;
  param_1[0x8b] = &PTR_LAB_144264660;
  *(undefined4 *)(param_1 + 0xab) = 5000;
  param_1[0x8c] = &PTR_LAB_1442646c0;
  param_1[0x8d] = &PTR_LAB_1442646e8;
  param_1[0x8e] = &PTR_LAB_144264700;
  param_1[0x8f] = &PTR_LAB_144264728;
  param_1[0x90] = &PTR_LAB_144264738;
  param_1[0x92] = &PTR_LAB_144264778;
  param_1[0x93] = &PTR_LAB_144264790;
  *(undefined1 *)(param_1 + 0xad) = 0;
  param_1[0xae] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 1000;
  param_1[0xac] = 1000;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  FName::FName(local_res8,L"WarningTrigger",1);
  param_1[0xba] = local_res8[0];
  FName::FName(local_res8,L"KillTrigger",1);
  param_1[0xbb] = local_res8[0];
  FName::FName(local_res8,L"TurretSkeletalMesh",1);
  param_1[0xbc] = local_res8[0];
  FName::FName(local_res8,L"FXSwitch",1);
  param_1[0xbd] = local_res8[0];
  FName::FName(local_res8,L"LaserSwitch",1);
  param_1[0xbe] = local_res8[0];
  FName::FName(local_res8,L"Warning",1);
  param_1[0xbf] = local_res8[0];
  FName::FName(local_res8,L"WarningLaser",1);
  param_1[0xc0] = local_res8[0];
  return param_1;
}



// FUNCTION 140ac5260 FUN_140ac5260 body=753 status=ok
// SIG undefined FUN_140ac5260(void)

undefined8 * FUN_140ac5260(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_140ac4d50();
  *param_1 = &PTR__scalar_deleting_destructor__1442648c8;
  param_1[0x8b] = &PTR_LAB_144265070;
  param_1[0x8c] = &PTR_LAB_1442650d0;
  param_1[0x8d] = &PTR_LAB_1442650f8;
  param_1[0x8e] = &PTR_LAB_144265110;
  param_1[0x8f] = &PTR_LAB_144265138;
  param_1[0x90] = &PTR_LAB_144265148;
  param_1[0x92] = &PTR_LAB_144265188;
  param_1[0x93] = &PTR_LAB_1442651a0;
  param_1[0xcc] = &PTR_LAB_144265270;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0x101;
  FText::FText(param_1 + 0xd6);
  FText::FText(param_1 + 0xd9);
  FText::FText(param_1 + 0xdc);
  FText::FText(param_1 + 0xdf);
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0x43310000;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"Catch-A-Ride",L"CatchARide",L"StationName");
  FText::operator=(param_1 + 0xd6,uVar5);
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
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,L"Platform Blocked!",L"CatchARide",L"CannotSpawn");
  FText::operator=(param_1 + 0xd9,uVar5);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Console locked!",L"CatchARide",L"CatchARideLocked");
  FText::operator=(param_1 + 0xdc,uVar5);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_30,L"Console disabled!",L"CatchARide",L"CatchARideDisabled");
  FText::operator=(param_1 + 0xdf,uVar5);
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
  return param_1;
}



// FUNCTION 140ac5560 FUN_140ac5560 body=1142 status=ok
// SIG undefined FUN_140ac5560(void)

undefined8 * FUN_140ac5560(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  FUN_14221fbd0();
  uVar6 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1442652d8;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x3f000000;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar6 * 8);
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x40000000;
  *(undefined1 *)(param_1 + 0x92) = 1;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x41200000;
  param_1[0x96] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146868400) {
    _Init_thread_header(&DAT_146868400);
    if (DAT_146868400 == -1) {
      FName::FName(&DAT_1468683f8,L"PlatformMesh",1);
      _Init_thread_footer(&DAT_146868400);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146868410) {
    _Init_thread_header(&DAT_146868410);
    if (DAT_146868410 == -1) {
      FName::FName(&DAT_146868408,L"PlatformSafeZone",1);
      _Init_thread_footer(&DAT_146868410);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146868420) {
    _Init_thread_header(&DAT_146868420);
    if (DAT_146868420 == -1) {
      FName::FName(&DAT_146868418,L"SmallVehicleSafeZone1",1);
      _Init_thread_footer(&DAT_146868420);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146868430) {
    _Init_thread_header(&DAT_146868430);
    if (DAT_146868430 == -1) {
      FName::FName(&DAT_146868428,L"SmallVehicleSafeZone2",1);
      _Init_thread_footer(&DAT_146868430);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146868440) {
    _Init_thread_header(&DAT_146868440);
    if (DAT_146868440 == -1) {
      FName::FName(&DAT_146868438,L"SmallVehicleSocket1",1);
      _Init_thread_footer(&DAT_146868440);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146868450) {
    _Init_thread_header(&DAT_146868450);
    if (DAT_146868450 == -1) {
      FName::FName(&DAT_146868448,L"SmallVehicleSocket2",1);
      _Init_thread_footer(&DAT_146868450);
    }
  }
  uVar4 = DAT_1468683f8;
  uVar3 = FUN_142a232e0();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8b] = uVar4;
  FUN_14223f010(param_1,uVar4);
  uVar4 = DAT_146868408;
  uVar3 = FUN_14290f330();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8c] = uVar4;
  FUN_1423974f0(uVar4,1);
  plVar5 = (longlong *)param_1[0x8c];
  FUN_142399e30(plVar5,param_1[0x8b],0);
  (**(code **)(*plVar5 + 0x500))(plVar5,0);
  uVar4 = DAT_146868418;
  uVar3 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8d] = plVar5;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  (**(code **)(*plVar5 + 0x500))(plVar5,0);
  uVar4 = DAT_146868428;
  uVar3 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8f] = plVar5;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  (**(code **)(*plVar5 + 0x500))(plVar5,0);
  uVar4 = DAT_146868438;
  uVar3 = USoundSourceBus::GetPrivateStaticClass();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8e] = uVar4;
  FUN_142399e30(uVar4,param_1[0x8b],0);
  uVar4 = DAT_146868448;
  uVar3 = USoundSourceBus::GetPrivateStaticClass();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x90] = uVar4;
  FUN_142399e30(uVar4,param_1[0x8b],0);
  return param_1;
}



// FUNCTION 140ac59e0 FUN_140ac59e0 body=56 status=ok
// SIG undefined FUN_140ac59e0(void)

undefined8 * FUN_140ac59e0(undefined8 *param_1)

{
  FUN_140ac4f70();
  *(undefined2 *)(param_1 + 0x9d) = 0;
  *param_1 = &PTR_FUN_1442659c0;
  param_1[0x8b] = &PTR_LAB_144266168;
  return param_1;
}



// FUNCTION 140ac5a20 FUN_140ac5a20 body=159 status=ok
// SIG undefined FUN_140ac5a20(void)

undefined8 * FUN_140ac5a20(undefined8 *param_1)

{
  FUN_140aec390();
  *param_1 = &PTR__scalar_deleting_destructor__144262088;
  param_1[0x8b] = &PTR_LAB_1442627f8;
  param_1[0x8c] = &PTR_LAB_144262858;
  param_1[0x8d] = &PTR_LAB_144262880;
  param_1[0x8e] = &PTR_LAB_144262898;
  param_1[0x8f] = &PTR_LAB_1442628c0;
  param_1[0x90] = &PTR_LAB_1442628d0;
  param_1[0x92] = &PTR_LAB_144262910;
  param_1[0x93] = &PTR_LAB_144262928;
  param_1[0xaa] = &PTR_LAB_1442629f8;
  return param_1;
}



// FUNCTION 140ac5ac0 FUN_140ac5ac0 body=140 status=ok
// SIG undefined FUN_140ac5ac0(void)

undefined8 * FUN_140ac5ac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__144260280;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 140ac5b50 FUN_140ac5b50 body=798 status=ok
// SIG undefined FUN_140ac5b50(void)

undefined8 * FUN_140ac5b50(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 local_res8;
  undefined4 uStack_1c;
  
  FUN_140a9e6f0();
  *param_1 = &PTR__scalar_deleting_destructor__14425d730;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  param_1[0x8b] = &PTR_LAB_14424ccb0;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[0x9b] + 0x608,&DAT_146867cf0);
  lVar7 = param_1[0x9b];
  plVar9 = (longlong *)(lVar7 + 0x208);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = 0x40addf80;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_res8);
    iVar1 = *(int *)(lVar7 + 0x210);
    *(int *)(lVar7 + 0x210) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x214) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    lVar7 = *plVar9;
    *(longlong **)(lVar7 + (longlong)iVar1 * 0x10) = plVar4;
    *(undefined4 *)(lVar7 + 8 + (longlong)iVar1 * 0x10) = 3;
  }
  *(undefined4 *)((longlong)param_1 + 0x47c) = 1;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    plVar4 = (longlong *)param_1[2];
    lVar7 = plVar4[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar7 = plVar4[0x1f];
    }
    *(undefined4 *)((longlong)param_1 + 0x514) = *(undefined4 *)(lVar7 + 0x514);
  }
  else {
    FConfigCacheIni::GetFloat
              (DAT_1468b6148,L"ElementalPuddle",L"LargeLiquidBodyPuddleScale",
               (longlong)param_1 + 0x514,&DAT_1468e2410);
  }
  pvVar3 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar8 * 8) + 0x38) < DAT_146868148) &&
     (_Init_thread_header(&DAT_146868148), DAT_146868148 == -1)) {
    FName::FName(&DAT_146868140,L"NoCollision",1);
    _Init_thread_footer(&DAT_146868148);
  }
  uVar2 = DAT_146867cf0;
  uVar6 = UCheckBox::GetPrivateStaticClass();
  lVar7 = FUN_141752410(param_1,uVar2,uVar6,uVar6,1,0,0);
  param_1[0xc3] = lVar7;
  *(byte *)(lVar7 + 0x2f1) = *(byte *)(lVar7 + 0x2f1) & 0xef;
  FUN_1423974f0(param_1[0xc3],0);
  *(byte *)(param_1[0xc3] + 0x24c) = *(byte *)(param_1[0xc3] + 0x24c) & 0xbf;
  *(byte *)(param_1[0xc3] + 0x24c) = *(byte *)(param_1[0xc3] + 0x24c) | 0x20;
  *(byte *)(param_1[0xc3] + 0x2f0) = *(byte *)(param_1[0xc3] + 0x2f0) & 0xf7;
  *(byte *)(param_1[0xc3] + 0x2f0) = *(byte *)(param_1[0xc3] + 0x2f0) & 0xef;
  *(undefined1 *)(param_1[0xc3] + 0x24e) = 2;
  *(byte *)(param_1[0xc3] + 0x3c) = *(byte *)(param_1[0xc3] + 0x3c) & 0xfd;
  (**(code **)(*(longlong *)param_1[0xc3] + 0x640))((longlong *)param_1[0xc3],DAT_146868140);
  FUN_142397000(param_1[0xc3],0,0,1);
  local_res8 = 0;
  *(undefined4 *)(param_1[0xc3] + 0x34c) = 1;
  *(byte *)(param_1[0xc3] + 0x2ee) = *(byte *)(param_1[0xc3] + 0x2ee) | 1;
  FUN_142399e30(param_1[0xc3],param_1[0x2d],0);
  param_1[0x9d] = param_1[0xc3];
  *(undefined1 *)((longlong)param_1 + 0x621) = 0;
  return param_1;
}



// FUNCTION 140ac5e70 FUN_140ac5e70 body=726 status=ok
// SIG undefined FUN_140ac5e70(void)

undefined8 * FUN_140ac5e70(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 local_res8;
  undefined4 uStack_c;
  
  FUN_140a9e6f0();
  *param_1 = &PTR__scalar_deleting_destructor__14425ea78;
  param_1[0x8b] = &PTR_LAB_14424ccb0;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[0x9b] + 0x608,&DAT_146867cf8);
  lVar7 = param_1[0x9b];
  plVar9 = (longlong *)(lVar7 + 0x208);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = 0x40ade0c0;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_res8);
    iVar1 = *(int *)(lVar7 + 0x210);
    *(int *)(lVar7 + 0x210) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x214) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    lVar7 = *plVar9;
    *(longlong **)(lVar7 + (longlong)iVar1 * 0x10) = plVar4;
    *(undefined4 *)(lVar7 + 8 + (longlong)iVar1 * 0x10) = 3;
  }
  pvVar3 = ThreadLocalStoragePointer;
  uVar8 = (ulonglong)_tls_index;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 1;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar8 * 8) + 0x38) < DAT_146868158) &&
     (_Init_thread_header(&DAT_146868158), DAT_146868158 == -1)) {
    FName::FName(&DAT_146868150,L"NoCollision",1);
    _Init_thread_footer(&DAT_146868158);
  }
  uVar2 = DAT_146867cf8;
  uVar6 = FUN_142a232e0();
  lVar7 = FUN_141752410(param_1,uVar2,uVar6,uVar6,1,0,0);
  param_1[0xc3] = lVar7;
  *(byte *)(lVar7 + 0x2f1) = *(byte *)(lVar7 + 0x2f1) & 0xef;
  FUN_1423974f0(param_1[0xc3],0);
  *(byte *)(param_1[0xc3] + 0x24c) = *(byte *)(param_1[0xc3] + 0x24c) & 0xbf;
  *(byte *)(param_1[0xc3] + 0x24c) = *(byte *)(param_1[0xc3] + 0x24c) | 0x20;
  *(byte *)(param_1[0xc3] + 0x2f0) = *(byte *)(param_1[0xc3] + 0x2f0) & 0xf7;
  *(byte *)(param_1[0xc3] + 0x2f0) = *(byte *)(param_1[0xc3] + 0x2f0) & 0xef;
  *(undefined1 *)(param_1[0xc3] + 0x24e) = 2;
  *(byte *)(param_1[0xc3] + 0x3c) = *(byte *)(param_1[0xc3] + 0x3c) & 0xfd;
  (**(code **)(*(longlong *)param_1[0xc3] + 0x640))((longlong *)param_1[0xc3],DAT_146868150);
  *(undefined4 *)(param_1[0xc3] + 500) = 0x3dcccccd;
  lVar7 = param_1[0xc3];
  *(undefined8 *)(lVar7 + 0x204) = 0x40b3333340b33333;
  *(undefined4 *)(lVar7 + 0x20c) = 0x3f800000;
  FUN_142397000(param_1[0xc3],0,0,1);
  local_res8 = 0;
  FUN_142399e30(param_1[0xc3],param_1[0x2d],0);
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfe;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 2;
  param_1[0x9d] = param_1[0xc3];
  return param_1;
}



// FUNCTION 140ac6150 FUN_140ac6150 body=135 status=ok
// SIG undefined FUN_140ac6150(void)

undefined8 * FUN_140ac6150(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140e69240(param_1,uVar1);
  *param_1 = &PTR_FUN_144260968;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x5f1) = 0;
  return param_1;
}



// FUNCTION 140ac61e0 FUN_140ac61e0 body=193 status=ok
// SIG undefined FUN_140ac61e0(void)

undefined8 * FUN_140ac61e0(undefined8 *param_1)

{
  FUN_140ac5a20();
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *param_1 = &PTR_FUN_144262a20;
  param_1[0x8b] = &PTR_LAB_144263190;
  param_1[0x8c] = &PTR_LAB_1442631f0;
  param_1[0x8d] = &PTR_LAB_144263218;
  param_1[0x8e] = &PTR_LAB_144263230;
  param_1[0x8f] = &PTR_LAB_144263258;
  param_1[0x90] = &PTR_LAB_144263268;
  param_1[0x92] = &PTR_LAB_1442632a8;
  param_1[0x93] = &PTR_LAB_1442632c0;
  param_1[0xaa] = &PTR_LAB_144263390;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x40000000;
  return param_1;
}



// FUNCTION 140ac62b0 FUN_140ac62b0 body=1137 status=ok
// SIG undefined FUN_140ac62b0(void)

undefined8 * FUN_140ac62b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined4 uStack_2c;
  
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_14425e330;
  param_1[0x92] = &PTR_LAB_14425ea50;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  uVar4 = DAT_146868038;
  uVar2 = UCheckBox::GetPrivateStaticClass();
  plVar3 = (longlong *)FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xa0] = plVar3;
  (**(code **)(*plVar3 + 0x640))(plVar3,DAT_146868038);
  *(byte *)(param_1[0xa0] + 0x2f1) = *(byte *)(param_1[0xa0] + 0x2f1) & 0xef;
  *(undefined1 *)(param_1[0xa0] + 0x24e) = 0;
  *(byte *)(param_1[0xa0] + 0x3c) = *(byte *)(param_1[0xa0] + 0x3c) & 0xfd;
  *(byte *)(param_1[0xa0] + 0x2f0) = *(byte *)(param_1[0xa0] + 0x2f0) & 0xf7;
  *(byte *)(param_1[0xa0] + 0x2f0) = *(byte *)(param_1[0xa0] + 0x2f0) & 0xef;
  FUN_1423974f0(param_1[0xa0],1);
  local_res8 = 0;
  FUN_142399e30(param_1[0xa0],param_1[0x8e],0);
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 1;
  *(undefined4 *)(param_1 + 0x96) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9d) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x9e) = 0x41200000;
  uVar4 = DAT_146868040;
  uVar2 = FUN_1414ba0d0();
  uVar4 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xa1] = uVar4;
  uVar4 = DAT_146868048;
  uVar2 = UInputKeySelector::GetPrivateStaticClass();
  lVar5 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xa2] = lVar5;
  plVar3 = (longlong *)(lVar5 + 0x1b0);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = 0x40add940;
    *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_res8);
    iVar1 = *(int *)(lVar5 + 0x1b8);
    *(int *)(lVar5 + 0x1b8) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x1bc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar1);
    }
    lVar5 = *plVar3;
    *(longlong **)(lVar5 + (longlong)iVar1 * 0x10) = plVar6;
    *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = 3;
  }
  lVar5 = param_1[0xa2];
  plVar6 = (longlong *)(lVar5 + 0x1c8);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = 0x40ade130;
    *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
    *(undefined4 *)(plVar3 + 3) = 0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_2c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar7;
    *plVar3 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_res8);
    iVar1 = *(int *)(lVar5 + 0x1d0);
    *(int *)(lVar5 + 0x1d0) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x1d4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    lVar5 = *plVar6;
    *(longlong **)(lVar5 + (longlong)iVar1 * 0x10) = plVar3;
    *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0x10) = 3;
  }
  puVar8 = (undefined8 *)FName::FName(&local_res8,L"PainterComponent",1);
  uVar4 = *puVar8;
  uVar2 = UNewbieHelperWidget::GetPrivateStaticClass();
  lVar5 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xa3] = lVar5;
  if ((lVar5 != 0) && (param_1[0x2d] != 0)) {
    FUN_142fb3d10(lVar5,0);
    FUN_142fb4450(param_1[0xa3],0);
    local_res8 = *(undefined8 *)(param_1[0x2d] + 0x18);
    CEnvironmentSystem::AddLightningStrikePoint(param_1[0xa3],&local_res8);
    plVar3 = (longlong *)param_1[0x8e];
    if (plVar3 != (longlong *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146868268) &&
         (_Init_thread_header(&DAT_146868268), DAT_146868268 == -1)) {
        FName::FName(&DAT_146868260,L"NoCollisionQuery",1);
        _Init_thread_footer(&DAT_146868268);
      }
      (**(code **)(*plVar3 + 0x640))(plVar3,DAT_146868260);
    }
  }
  return param_1;
}



// FUNCTION 140ac6730 FUN_140ac6730 body=33 status=ok
// SIG undefined FUN_140ac6730(void)

undefined8 * FUN_140ac6730(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1440f1c20;
  return param_1;
}



// FUNCTION 140ac6870 FUN_140ac6870 body=33 status=ok
// SIG undefined FUN_140ac6870(void)

undefined8 * FUN_140ac6870(undefined8 *param_1)

{
  FUN_140675e80();
  *param_1 = &PTR_FUN_144263430;
  return param_1;
}



// FUNCTION 140ac68a0 FUN_140ac68a0 body=33 status=ok
// SIG undefined FUN_140ac68a0(void)

undefined8 * FUN_140ac68a0(undefined8 *param_1)

{
  FUN_140675e80();
  *param_1 = &PTR_FUN_1442634a0;
  return param_1;
}



// FUNCTION 140ac68d0 FUN_140ac68d0 body=51 status=ok
// SIG undefined FUN_140ac68d0(void)

undefined8 * FUN_140ac68d0(undefined8 *param_1)

{
  FUN_140675e80();
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_144263510;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f000000;
  return param_1;
}



// FUNCTION 140ac6910 FUN_140ac6910 body=868 status=ok
// SIG undefined FUN_140ac6910(void)

undefined8 * FUN_140ac6910(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((*(int *)((longlong)param_1 + 0x5c) < 0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
  }
  if ((undefined2 *)param_1[10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[10] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(int *)((longlong)param_1 + 0x84) < 0) && (*(int *)((longlong)param_1 + 0x84) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
  }
  if ((undefined2 *)param_1[0xf] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xf] = 0;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((*(int *)((longlong)param_1 + 0xac) < 0) && (*(int *)((longlong)param_1 + 0xac) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x14,0);
  }
  if ((undefined2 *)param_1[0x14] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x14] = 0;
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((*(int *)((longlong)param_1 + 0xd4) < 0) && (*(int *)((longlong)param_1 + 0xd4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x19,0);
  }
  if ((undefined2 *)param_1[0x19] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x19] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((*(int *)((longlong)param_1 + 0xfc) < 0) && (*(int *)((longlong)param_1 + 0xfc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1e,0);
  }
  if ((undefined2 *)param_1[0x1e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1e] = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(int *)((longlong)param_1 + 0x124) < 0) && (*(int *)((longlong)param_1 + 0x124) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x23,0);
  }
  if ((undefined2 *)param_1[0x23] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x23] = 0;
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((*(int *)((longlong)param_1 + 0x14c) < 0) && (*(int *)((longlong)param_1 + 0x14c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  if ((undefined2 *)param_1[0x28] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x28] = 0;
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((*(int *)((longlong)param_1 + 0x174) < 0) && (*(int *)((longlong)param_1 + 0x174) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2d,0);
  }
  if ((undefined2 *)param_1[0x2d] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x2d] = 0;
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return param_1;
}



// FUNCTION 140ac6c80 FUN_140ac6c80 body=401 status=ok
// SIG undefined FUN_140ac6c80(void)

undefined8 * FUN_140ac6c80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[0x1e] = 0;
  iVar1 = *(int *)(param_2 + 0x1f);
  _Src = (undefined8 *)param_2[0x1e];
  *(int *)(param_1 + 0x1f) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeForCopy(param_1 + 6,iVar1,0);
    if (_Src == (undefined8 *)0x0) {
      _Src = param_2 + 6;
    }
    _Dst = (undefined8 *)param_1[0x1e];
    if ((undefined8 *)param_1[0x1e] == (undefined8 *)0x0) {
      _Dst = param_1 + 6;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  return param_1;
}



// FUNCTION 140ac6e20 FUN_140ac6e20 body=167 status=ok
// SIG undefined FUN_140ac6e20(void)

undefined1 * FUN_140ac6e20(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *_Src;
  undefined1 *_Dst;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  _Src = *(undefined1 **)(param_2 + 0x88);
  *(int *)(param_1 + 0x90) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  else {
    TArray<FGameplayTag,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
              (param_1 + 8,iVar1,0);
    if (_Src == (undefined1 *)0x0) {
      _Src = param_2 + 8;
    }
    _Dst = *(undefined1 **)(param_1 + 0x88);
    if (*(undefined1 **)(param_1 + 0x88) == (undefined1 *)0x0) {
      _Dst = param_1 + 8;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140ac6ed0 FUN_140ac6ed0 body=461 status=ok
// SIG undefined FUN_140ac6ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ac6ed0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144263820;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb) = 2;
  FUN_142741540(param_1 + 0x10);
  uVar3 = DAT_1468b5d98;
  uVar2 = _DAT_1468b5d90;
  iVar1 = *(int *)(param_1 + 7);
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    FUN_1404a2c10(param_1 + 6,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x98 + param_1[6]);
  puVar4[1] = uVar2;
  *(undefined8 *)((longlong)puVar4 + 0x14) = uVar2;
  puVar4[4] = uVar2;
  *(undefined8 *)((longlong)puVar4 + 0x2c) = uVar2;
  puVar4[7] = uVar2;
  *(undefined8 *)((longlong)puVar4 + 0x44) = uVar2;
  puVar4[10] = uVar2;
  *(undefined8 *)((longlong)puVar4 + 0x5c) = uVar2;
  *puVar4 = 0xcc;
  *(undefined4 *)(puVar4 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar3;
  *(undefined4 *)(puVar4 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar3;
  *(undefined4 *)(puVar4 + 8) = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uVar3;
  *(undefined4 *)(puVar4 + 0xb) = uVar3;
  *(undefined4 *)((longlong)puVar4 + 100) = uVar3;
  *(undefined1 *)(puVar4 + 0xd) = 7;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = 0x40000000;
  *(undefined4 *)(puVar4 + 0xe) = 2;
  puVar4[0xf] = local_40;
  puVar4[0x10] = uStack_38;
  *(undefined4 *)((longlong)puVar4 + 0x74) = 0x3f000000;
  puVar4[0x11] = local_30;
  puVar4[0x12] = uStack_28;
  *(undefined4 *)((longlong)param_1 + 100) = 0x428c0000;
  *(undefined4 *)(param_1 + 0xd) = 0x428c0000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x428c0000;
  *(undefined4 *)(param_1 + 0xe) = 0x428c0000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 10) = 7;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f000000;
  return param_1;
}



// FUNCTION 140ac70a0 FUN_140ac70a0 body=116 status=ok
// SIG undefined FUN_140ac70a0(void)

undefined8 * FUN_140ac70a0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_144263ab8;
  param_1[5] = &PTR_LAB_144263eb8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 140ac7120 FUN_140ac7120 body=83 status=ok
// SIG undefined FUN_140ac7120(void)

undefined8 * FUN_140ac7120(undefined8 *param_1)

{
  FUN_140aedcb0();
  *param_1 = &PTR__scalar_deleting_destructor__144266248;
  param_1[5] = &PTR_LAB_144266bd0;
  param_1[0x5a] = &DAT_144266c00;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  param_1[0xf7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  return param_1;
}



// FUNCTION 140ac7180 FUN_140ac7180 body=135 status=ok
// SIG undefined FUN_140ac7180(void)

undefined8 * FUN_140ac7180(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14425de30;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x1f) = 0x38d1b717;
  return param_1;
}



// FUNCTION 140ac7210 FUN_140ac7210 body=58 status=ok
// SIG undefined FUN_140ac7210(void)

undefined8 * FUN_140ac7210(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14422d798;
  param_1[6] = 0;
  uVar1 = FUN_14130c760();
  param_1[6] = uVar1;
  param_1[9] = 0x43000000;
  return param_1;
}



// FUNCTION 140ac7250 FUN_140ac7250 body=100 status=ok
// SIG undefined FUN_140ac7250(void)

undefined8 * FUN_140ac7250(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14425ffe8;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140ac72c0 FUN_140ac72c0 body=826 status=ok
// SIG undefined FUN_140ac72c0(void)

undefined8 * FUN_140ac72c0(undefined8 *param_1)

{
  FUN_142de3ad0();
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14425f178;
  param_1[0x78] = 0;
  param_1[5] = &PTR_LAB_14425f5d8;
  *(undefined4 *)(param_1 + 0x79) = 3;
  *(undefined1 *)(param_1 + 0x7a) = 0xff;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0x41200000;
  FText::FText(param_1 + 0x7f);
  FUN_142741540(param_1 + 0x84);
  FUN_142741540(param_1 + 0x146);
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  *(undefined1 *)(param_1 + 0x211) = 0;
  param_1[0x212] = 0;
  *(undefined1 *)(param_1 + 0x213) = 0xff;
  param_1[0x214] = 0;
  *(undefined4 *)(param_1 + 0x215) = 0;
  *(undefined1 *)(param_1 + 0x216) = 0xff;
  param_1[0x217] = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10e4) = 0;
  FText::FText(param_1 + 0x21f);
  FAudioDeviceHandle::FAudioDeviceHandle(param_1 + 0x223);
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x240] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 2;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  param_1[0x260] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  *(undefined4 *)(param_1 + 0x265) = 0x3f800000;
  param_1[0x266] = 0;
  *(undefined1 *)(param_1 + 0x267) = 0;
  *(undefined4 *)((longlong)param_1 + 0x133c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x268) = 0x41800000;
  param_1[0x269] = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfd;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined1 *)((longlong)param_1 + 0x3ec) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined1 *)((longlong)param_1 + 0x184) = 1;
  *(undefined4 *)(param_1 + 0x31) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 140ac7600 FUN_140ac7600 body=62 status=ok
// SIG undefined FUN_140ac7600(void)

undefined8 * FUN_140ac7600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140b170a0(param_1,uVar1);
  *(undefined1 *)(param_1 + 0x6e) = 3;
  *param_1 = &PTR_FUN_1442613b0;
  param_1[5] = &PTR_LAB_1442618c8;
  return param_1;
}



// FUNCTION 140ac7640 FUN_140ac7640 body=41 status=ok
// SIG undefined FUN_140ac7640(void)

undefined8 * FUN_140ac7640(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14425e0b0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 140ac7670 FUN_140ac7670 body=106 status=ok
// SIG undefined FUN_140ac7670(void)

undefined8 * FUN_140ac7670(undefined8 *param_1)

{
  FUN_14289c820();
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *param_1 = &PTR_FUN_144263580;
  return param_1;
}



// FUNCTION 140ac76e0 FUN_140ac76e0 body=158 status=ok
// SIG undefined FUN_140ac76e0(void)

void FUN_140ac76e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140ac7780 FUN_140ac7780 body=397 status=ok
// SIG undefined FUN_140ac7780(void)

void FUN_140ac7780(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140ac7841;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_140ac7841:
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
      if (*(longlong *)((longlong)iStack_1c * 0x40 + *param_1 + 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ac7910 FUN_140ac7910 body=336 status=ok
// SIG undefined FUN_140ac7910(void)

void FUN_140ac7910(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x700);
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
  plVar4 = *(longlong **)(param_1 + 0x6e8);
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
  plVar4 = *(longlong **)(param_1 + 0x6d0);
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
  plVar4 = *(longlong **)(param_1 + 0x6b8);
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
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x660) = &PTR_FUN_144264860;
  FUN_140a51170(param_1);
  return;
}



// FUNCTION 140ac7a60 FUN_140ac7a60 body=268 status=ok
// SIG undefined FUN_140ac7a60(void)

void FUN_140ac7a60(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x4e8);
  iVar6 = *(int *)(param_1 + 0x4f0);
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
          goto LAB_140ac7abe;
        }
      }
      else {
        lVar2 = *plVar3;
        plVar4 = plVar3;
LAB_140ac7abe:
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
    plVar5 = *(longlong **)(param_1 + 0x4e8);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  plVar5 = *(longlong **)(param_1 + 0x4d0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140ac7b70 FUN_140ac7b70 body=111 status=ok
// SIG undefined FUN_140ac7b70(void)

void FUN_140ac7b70(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5c8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5b0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x598);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x580);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x568);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x550);
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  FUN_140ac7a60(param_1);
  return;
}



// FUNCTION 140ac7be0 FUN_140ac7be0 body=241 status=ok
// SIG undefined FUN_140ac7be0(void)

void FUN_140ac7be0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x5b8);
  iVar6 = *(int *)(param_1 + 0x5c0);
  if (iVar6 != 0) {
    plVar9 = (longlong *)(lVar5 + 0x10);
    do {
      iVar7 = (int)plVar9[1];
      lVar5 = *plVar9;
      if (iVar7 != 0) {
        plVar8 = (longlong *)(lVar5 + 8);
        do {
          plVar4 = (longlong *)*plVar8;
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
          plVar8 = plVar8 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar5 = *plVar9;
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x5b8);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x550) = &PTR_FUN_143fcb7e0;
  FUN_1409c4a20(param_1);
  return;
}



// FUNCTION 140ac7ce0 FUN_140ac7ce0 body=177 status=ok
// SIG undefined FUN_140ac7ce0(void)

void FUN_140ac7ce0(longlong *param_1)

{
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140ac7da0 FUN_140ac7da0 body=745 status=ok
// SIG undefined FUN_140ac7da0(void)

void FUN_140ac7da0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x1310) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12a8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1290);
  if (*(longlong *)(param_1 + 0x1280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1190) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1130) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x1100);
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
  if (*(longlong *)(param_1 + 0x10c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1018) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1008) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9f8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x400);
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
  FUN_140a51cb0(param_1);
  return;
}



// FUNCTION 140ac8090 FUN_140ac8090 body=393 status=ok
// SIG undefined FUN_140ac8090(void)

void FUN_140ac8090(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x248);
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1d0,0);
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x178);
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140ac8220 operator= body=147 status=ok
// SIG undefined operator=(void)

longlong * TMulticastScriptDelegate<FWeakObjectPtr>::operator=(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar4 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
    if (iVar4 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 8);
      puVar3 = (undefined4 *)*param_1;
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
  return param_1;
}



// FUNCTION 140ac82c0 operator= body=468 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140ac83fd;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_140ac83fd:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_140ac3c20(param_1,local_res8,(longlong)iStack_3c * 200 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140ac84a0 operator= body=373 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_140ac857d;
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
      if (iVar1 < local_48._4_4_) {
LAB_140ac857d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        FUN_140ac3dd0(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0xc,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140ac8620 FUN_140ac8620 body=671 status=ok
// SIG undefined FUN_140ac8620(void)

longlong * FUN_140ac8620(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58);
  if (param_1 != param_2) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0x100000000;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar10 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar10 = puStack_30;
      }
      uVar5 = *puVar10;
      uStack_50 = 0;
      iVar6 = 0;
      while (uVar5 == 0) {
        uStack_50 = uStack_50 + 0x20;
        uVar4 = (ulonglong)local_68 >> 0x20;
        local_68 = CONCAT44((int)uVar4,iVar6 + 1);
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140ac86ef;
        uVar5 = puVar10[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_68 = CONCAT44(uVar5,(undefined4)local_68);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_140ac86ef:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    iStack_20 = uStack_50;
    iStack_1c = iStack_4c;
    uStack_38 = local_68;
    uStack_60 = local_68;
    local_48 = uStack_50;
    iStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar3 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar3) {
      do {
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned_int,bool>_const_&>
                  (param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0xb,param_2 + 0xb);
  plVar1 = param_1 + 0x16;
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  if (plVar1 != param_2 + 0x16) {
    iVar9 = (int)param_2[0x17];
    lVar2 = param_2[0x16];
    *(int *)(param_1 + 0x17) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    }
    else {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
      if (iVar9 != 0) {
        puVar7 = (undefined8 *)*plVar1;
        puVar8 = (undefined1 *)(lVar2 + 0x18);
        do {
          *puVar7 = 0xffffffffffffffff;
          *(undefined4 *)(puVar7 + 1) = 0xffffffff;
          puVar7[2] = *(undefined8 *)(puVar8 + -8);
          *(undefined1 *)(puVar7 + 3) = *puVar8;
          *(undefined1 *)((longlong)puVar7 + 0x19) = puVar8[1];
          puVar7[4] = *(undefined8 *)(puVar8 + 8);
          puVar7[5] = *(undefined8 *)(puVar8 + 0x10);
          puVar7[6] = *(undefined8 *)(puVar8 + 0x18);
          puVar7[7] = *(undefined8 *)(puVar8 + 0x20);
          iVar9 = iVar9 + -1;
          puVar7 = puVar7 + 8;
          puVar8 = puVar8 + 0x40;
        } while (iVar9 != 0);
      }
    }
  }
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}



// FUNCTION 140ac88c0 FUN_140ac88c0 body=174 status=ok
// SIG undefined FUN_140ac88c0(void)

undefined1 * FUN_140ac88c0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  
  puVar1 = param_1 + 8;
  *param_1 = *param_2;
  if (puVar1 != param_2 + 8) {
    iVar2 = *(int *)(param_2 + 0x90);
    _Src = *(undefined1 **)(param_2 + 0x88);
    *(int *)(param_1 + 0x90) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x94) == 0)) {
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      TArray<FGameplayTag,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
                (puVar1,iVar2);
      if (_Src == (undefined1 *)0x0) {
        _Src = param_2 + 8;
      }
      _Dst = *(undefined1 **)(param_1 + 0x88);
      if (*(undefined1 **)(param_1 + 0x88) == (undefined1 *)0x0) {
        _Dst = puVar1;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 << 3);
    }
  }
  return param_1;
}



// FUNCTION 140ac8970 FUN_140ac8970 body=849 status=ok
// SIG undefined FUN_140ac8970(void)

longlong * FUN_140ac8970(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  void *_Src;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  
  if (param_1 != param_2) {
    iVar11 = (int)param_1[1];
    if (iVar11 != 0) {
      plVar8 = (longlong *)(*param_1 + 200);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 0x1f;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = (int)param_2[1];
    lVar7 = *param_2;
    *(int *)(param_1 + 1) = iVar11;
    if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140aba210(param_1,iVar11);
      if (iVar11 != 0) {
        puVar9 = (undefined8 *)*param_1;
        puVar12 = (undefined8 *)(lVar7 + 0x10);
        do {
          *puVar9 = puVar12[-2];
          puVar9[1] = puVar12[-1];
          puVar9[2] = *puVar12;
          puVar9[3] = puVar12[1];
          puVar9[4] = puVar12[2];
          puVar9[5] = puVar12[3];
          puVar9[6] = puVar12[4];
          *(byte *)(puVar9 + 7) =
               *(byte *)(puVar9 + 7) ^ (*(byte *)(puVar9 + 7) ^ *(byte *)(puVar12 + 5)) & 1;
          bVar6 = (*(byte *)(puVar9 + 7) ^ *(byte *)(puVar12 + 5)) & 2 ^ *(byte *)(puVar9 + 7);
          *(byte *)(puVar9 + 7) = bVar6;
          bVar6 = (bVar6 ^ *(byte *)(puVar12 + 5)) & 4 ^ bVar6;
          *(byte *)(puVar9 + 7) = bVar6;
          *(byte *)(puVar9 + 7) = (bVar6 ^ *(byte *)(puVar12 + 5)) & 8 ^ bVar6;
          FUN_140ac6e20(puVar9 + 8,puVar12 + 6);
          *(undefined4 *)(puVar9 + 0x1b) = *(undefined4 *)(puVar12 + 0x19);
          uVar2 = *(undefined4 *)((longlong)puVar12 + 0xd4);
          uVar3 = *(undefined4 *)(puVar12 + 0x1b);
          uVar4 = *(undefined4 *)((longlong)puVar12 + 0xdc);
          *(undefined4 *)(puVar9 + 0x1c) = *(undefined4 *)(puVar12 + 0x1a);
          *(undefined4 *)((longlong)puVar9 + 0xe4) = uVar2;
          *(undefined4 *)(puVar9 + 0x1d) = uVar3;
          *(undefined4 *)((longlong)puVar9 + 0xec) = uVar4;
          puVar9[0x1e] = puVar12[0x1c];
          iVar11 = iVar11 + -1;
          puVar9 = puVar9 + 0x1f;
          puVar12 = puVar12 + 0x1f;
        } while (iVar11 != 0);
      }
    }
  }
  param_1[2] = param_2[2];
  TMulticastScriptDelegate<FWeakObjectPtr>::operator=(param_1 + 3,param_2 + 3);
  TMulticastScriptDelegate<FWeakObjectPtr>::operator=(param_1 + 5,param_2 + 5);
  TMulticastScriptDelegate<FWeakObjectPtr>::operator=(param_1 + 7,param_2 + 7);
  plVar8 = param_1 + 9;
  if (plVar8 != param_2 + 9) {
    iVar11 = (int)param_1[0x56];
    plVar10 = (longlong *)param_1[0x55];
    if ((longlong *)param_1[0x55] == (longlong *)0x0) {
      plVar10 = plVar8;
    }
    if (iVar11 != 0) {
      plVar10 = plVar10 + 0x11;
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 0x13;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = (int)param_2[0x56];
    plVar10 = (longlong *)param_2[0x55];
    *(int *)(param_1 + 0x56) = iVar11;
    if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 0x2b4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
    }
    else {
      FUN_140ae18d0(plVar8);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_2 + 9;
      }
      plVar5 = (longlong *)param_1[0x55];
      if ((longlong *)param_1[0x55] == (longlong *)0x0) {
        plVar5 = plVar8;
      }
      if (iVar11 != 0) {
        lVar7 = (longlong)plVar10 - (longlong)plVar5;
        plVar5 = plVar5 + 0x11;
        do {
          *(char *)(plVar5 + -0x11) = (char)*plVar10;
          *plVar5 = 0;
          iVar1 = *(int *)((longlong)plVar5 + lVar7 + 8);
          _Src = *(void **)((longlong)plVar5 + lVar7);
          *(int *)(plVar5 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
          }
          else {
            TArray<FGameplayTag,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
                      (plVar5 + -0x10,iVar1,0);
            if (_Src == (void *)0x0) {
              _Src = (void *)((longlong)plVar5 + lVar7 + -0x80);
            }
            plVar8 = (longlong *)*plVar5;
            if ((longlong *)*plVar5 == (longlong *)0x0) {
              plVar8 = plVar5 + -0x10;
            }
            _guard_xfg_dispatch_icall_nop(plVar8,_Src,(longlong)iVar1 << 3);
          }
          plVar10 = plVar10 + 0x13;
          plVar5 = plVar5 + 0x13;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  FUN_140ac88c0(param_1 + 0x57,param_2 + 0x57);
  FUN_140ac88c0(param_1 + 0x6a,param_2 + 0x6a);
  FUN_140ac88c0(param_1 + 0x7d,param_2 + 0x7d);
  FUN_140ac88c0(param_1 + 0x90,param_2 + 0x90);
  FUN_140ac88c0(param_1 + 0xa3,param_2 + 0xa3);
  *(int *)(param_1 + 0xb6) = (int)param_2[0xb6];
  return param_1;
}



// FUNCTION 140ac8cd0 FUN_140ac8cd0 body=258 status=ok
// SIG undefined FUN_140ac8cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140ac8cd0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar5;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *param_1;
  if (*(char *)(param_1 + 1) == '\0') {
    uVar3 = FUN_140adaed0(*(undefined8 *)(param_2 + 0x460),uVar1);
    if ((char)uVar3 != '\0') {
LAB_140ac8dc0:
      return uVar3 & 0xffffffffffffff00;
    }
    puVar4 = *(undefined4 **)(param_2 + 0x168);
    if (puVar4 == (undefined4 *)0x0) {
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar6 = _DAT_146867c40 & _DAT_146867c50;
      uVar7 = uRam0000000146867c44 & uRam0000000146867c54;
      uVar8 = uRam0000000146867c48 & uRam0000000146867c58;
      uVar9 = uRam0000000146867c4c & uRam0000000146867c5c;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = uRam0000000146867c4c;
    }
    else {
      uVar10 = puVar4[0x84];
      uVar11 = puVar4[0x85];
      uVar12 = puVar4[0x86];
      uVar14 = puVar4[0x88];
      uVar15 = puVar4[0x89];
      uVar16 = puVar4[0x8a];
      uVar17 = puVar4[0x8b];
      uVar6 = puVar4[0x8c];
      uVar7 = puVar4[0x8d];
      uVar8 = puVar4[0x8e];
      uVar9 = puVar4[0x8f];
      uVar13 = puVar4[0x87];
    }
  }
  else {
    cVar2 = FUN_140adaed0(*(undefined8 *)(param_2 + 0x468),uVar1);
    if (cVar2 == '\0') {
      lVar5 = *(longlong *)(param_2 + 0x470);
    }
    else {
      uVar3 = FUN_140adaed0(*(undefined8 *)(param_2 + 0x478),uVar1);
      if ((char)uVar3 != '\0') goto LAB_140ac8dc0;
      lVar5 = *(longlong *)(param_2 + 0x480);
    }
    puVar4 = (undefined4 *)(lVar5 + 0x210);
    uVar6 = *(uint *)(lVar5 + 0x230);
    uVar7 = *(uint *)(lVar5 + 0x234);
    uVar8 = *(uint *)(lVar5 + 0x238);
    uVar9 = *(uint *)(lVar5 + 0x23c);
    uVar14 = *(undefined4 *)(lVar5 + 0x220);
    uVar15 = *(undefined4 *)(lVar5 + 0x224);
    uVar16 = *(undefined4 *)(lVar5 + 0x228);
    uVar17 = *(undefined4 *)(lVar5 + 0x22c);
    uVar10 = *puVar4;
    uVar11 = *(undefined4 *)(lVar5 + 0x214);
    uVar12 = *(undefined4 *)(lVar5 + 0x218);
    uVar13 = *(uint *)(lVar5 + 0x21c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar10;
    param_3[1] = uVar11;
    param_3[2] = uVar12;
    param_3[3] = uVar13;
    param_3[4] = uVar14;
    param_3[5] = uVar15;
    param_3[6] = uVar16;
    param_3[7] = uVar17;
    param_3[8] = uVar6;
    param_3[9] = uVar7;
    param_3[10] = uVar8;
    param_3[0xb] = uVar9;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}



// FUNCTION 140ac8de0 FUN_140ac8de0 body=343 status=ok
// SIG undefined FUN_140ac8de0(void)

void FUN_140ac8de0(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  
  if (*(longlong *)(*param_1 + 0xf30) != 0) {
    *(undefined1 *)(*(longlong *)(*param_1 + 0xf30) + 0x330) = 3;
    FText::operator=(*(longlong *)(*param_1 + 0xf30) + 0x350,*param_1 + 0xf68);
    FText::operator=(*(longlong *)(*param_1 + 0xf30) + 0x338,*param_1 + 0xf80);
    FString::operator=(*(longlong *)(*param_1 + 0xf30) + 1000,*param_1 + 0xf98);
    *(undefined1 *)(*(longlong *)(*param_1 + 0xf30) + 0x428) = 1;
    UItemViewerScrollSelector::SetNumPages(*(undefined8 *)(*param_1 + 0xf30),0);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = *(longlong *)(*param_1 + 0xf30);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = *(longlong *)(*param_1 + 0xf30);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = *(longlong *)(*param_1 + 0xf30);
    FWeakObjectPtr::operator=(lVar1 + 0x210);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140ac8f40 FUN_140ac8f40 body=401 status=ok
// SIG undefined FUN_140ac8f40(void)

void FUN_140ac8f40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar2 + 0x330) = 1;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x350,*param_1 + 0xf38);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x338,*param_1 + 0xc60);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar3,0);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0xc28);
    *(int *)(lVar2 + 0xc28) = iVar1 + 1;
    if (*(int *)(lVar2 + 0xc2c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0xc20,iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0xc20) + (longlong)iVar1 * 8) = uVar3;
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,*param_1);
    *(undefined8 *)(lVar2 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1d0,*param_1);
    *(undefined8 *)(lVar2 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x210,*param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140ac90e0 FUN_140ac90e0 body=228 status=ok
// SIG undefined FUN_140ac90e0(void)

void FUN_140ac90e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(&local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  local_28 = local_res8;
  local_24 = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  local_18 = local_res8;
  local_14 = local_resc;
  FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf28));
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  local_20 = local_res8;
  local_1c = local_resc;
  lVar1 = *(longlong *)(lVar3 + 0xf20);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,&local_28);
  return;
}



// FUNCTION 140ac91d0 FUN_140ac91d0 body=318 status=ok
// SIG undefined FUN_140ac91d0(void)

void FUN_140ac91d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar1 + 0x330) = 2;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x350,*param_1 + 0xf50);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x338,*param_1 + 0xc60);
    uVar2 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar2,0);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,*param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0,*param_1);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x210,*param_1);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140ac9310 FUN_140ac9310 body=418 status=ok
// SIG undefined FUN_140ac9310(void)

void FUN_140ac9310(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  lVar3 = FUN_142f6c9f0(uVar2);
  lVar8 = 0;
  if (lVar3 == 0) goto LAB_140ac946b;
  lVar4 = UWebSocketNetDriver::StaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140ac946b;
  lVar4 = *(longlong *)(*param_1 + 0x608);
  lVar7 = lVar4 + 0x130;
  lVar5 = FWeakObjectPtr::Get(lVar7);
  lVar6 = lVar8;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar4 + 0x138)) && (*(longlong *)(lVar4 + 0x140) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar7,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar4 + 0x138) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar7);
      if (lVar5 != 0) goto LAB_140ac9407;
    }
  }
  else {
LAB_140ac9407:
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar7 = FUN_142f71d80();
      lVar4 = lVar5;
      do {
        lVar6 = lVar5;
        if (lVar4 == lVar7) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
        lVar6 = lVar8;
      } while (lVar4 != 0);
    }
  }
  FUN_142f6cbf0(lVar3,lVar6);
LAB_140ac946b:
  (**(code **)(**(longlong **)(*param_1 + 0x610) + 0x310))(*(longlong **)(*param_1 + 0x610),1);
  *(undefined8 *)(*(longlong *)(*param_1 + 0x600) + 0xbd8) = 0;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x600) + 3000) = 3;
  FUN_141321a60(*param_1);
  return;
}



// FUNCTION 140ac94c0 FUN_140ac94c0 body=717 status=ok
// SIG undefined FUN_140ac94c0(void)

void FUN_140ac94c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong local_res18 [2];
  int local_48;
  int local_44;
  longlong local_40;
  
  if (param_2 != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ACatchARidePlatform::OnSafeZoneBeginOverlap",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(local_res18,pwVar5 + 2,1);
    lVar8 = local_res18[0];
    uVar3 = *param_1;
    plVar1 = (longlong *)(param_2 + 0x570);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,uVar3);
    local_40 = lVar8;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_40);
    }
    piVar9 = (int *)*plVar1;
    iVar2 = *(int *)(param_2 + 0x578);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar2 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_48) && (piVar10[1] == local_44)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar10), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_40)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140ac9623;
        break;
      }
    }
    iVar2 = *(int *)(param_2 + 0x578);
    *(int *)(param_2 + 0x578) = iVar2 + 1;
    if (*(int *)(param_2 + 0x57c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar9 = local_48;
    piVar9[1] = local_44;
    *(longlong *)(piVar9 + 2) = local_40;
LAB_140ac9623:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ACatchARidePlatform::OnSafeZoneEndOverlap",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(local_res18,pwVar5 + 2,1);
    uVar3 = *param_1;
    plVar1 = (longlong *)(param_2 + 0x580);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,uVar3);
    local_40 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_40);
    }
    piVar9 = (int *)*plVar1;
    iVar2 = *(int *)(param_2 + 0x588);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar2 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_48) && (piVar10[1] == local_44)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar10), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_48), cVar6 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_40)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_140ac9767;
        break;
      }
    }
    iVar2 = *(int *)(param_2 + 0x588);
    *(int *)(param_2 + 0x588) = iVar2 + 1;
    if (*(int *)(param_2 + 0x58c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar9 = local_48;
    piVar9[1] = local_44;
    *(longlong *)(piVar9 + 2) = local_40;
LAB_140ac9767:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140ac9790 FUN_140ac9790 body=231 status=ok
// SIG undefined FUN_140ac9790(void)

void FUN_140ac9790(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  local_28 = local_res8;
  local_24 = local_resc;
  FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf20));
  FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf30));
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  local_20 = local_res8;
  local_1c = local_resc;
  lVar1 = *(longlong *)(lVar3 + 0xf28);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,&local_28);
  return;
}



// FUNCTION 140ac9880 FUN_140ac9880 body=228 status=ok
// SIG undefined FUN_140ac9880(void)

void FUN_140ac9880(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  
  FWeakObjectPtr::operator=(&local_28,0);
  FWeakObjectPtr::operator=(&local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(&local_10,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  local_28 = local_res8;
  local_24 = local_resc;
  FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf28));
  FWeakObjectPtr::operator=(&local_res8,0);
  local_10 = local_res8;
  local_c = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  lVar3 = *param_1;
  local_20 = local_res8;
  local_1c = local_resc;
  lVar1 = *(longlong *)(lVar3 + 0xf30);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar3 = *param_1;
  }
  FUN_142ecfd10(lVar3,&local_38,&local_28);
  return;
}



// FUNCTION 140ac9970 FUN_140ac9970 body=202 status=ok
// SIG undefined FUN_140ac9970(void)

void FUN_140ac9970(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  FUN_1425a2750(param_2,DAT_1468681c0,*(undefined4 *)(*(longlong *)*param_1 + 0x548));
  FUN_1425a2750(param_2,DAT_1468681d0,*(undefined4 *)(*(longlong *)*param_1 + 0x54c));
  FUN_1425a2750(param_2,DAT_1468681e0,*(undefined4 *)(*(longlong *)*param_1 + 0x550));
  lVar1 = *(longlong *)param_1[1];
  local_38 = *(undefined4 *)(lVar1 + 0x220);
  local_34 = *(undefined4 *)(lVar1 + 0x224);
  local_30 = *(undefined4 *)(lVar1 + 0x228);
  puVar2 = (undefined4 *)FLinearColor::FLinearColor(local_18,&local_38);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  FUN_1425a2be0(param_2,DAT_1468681f0,&local_28);
  return;
}



// FUNCTION 140ac9cb0 FUN_140ac9cb0 body=65 status=ok
// SIG undefined FUN_140ac9cb0(void)

undefined8 * FUN_140ac9cb0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140ac9d00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ALandscapeStreamingProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a51170();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x660);
  }
  return param_1;
}



// FUNCTION 140ac9d40 FUN_140ac9d40 body=66 status=ok
// SIG undefined FUN_140ac9d40(void)

longlong FUN_140ac9d40(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e8);
  }
  return param_1;
}



// FUNCTION 140ac9d90 FUN_140ac9d90 body=90 status=ok
// SIG undefined FUN_140ac9d90(void)

longlong FUN_140ac9d90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x608);
  }
  return param_1;
}



// FUNCTION 140ac9df0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AFGBuildableConveyorBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ac7910();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x738);
  }
  return param_1;
}



// FUNCTION 140ac9e30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TGPUSkinVertexFactory<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b8);
  }
  return param_1;
}



// FUNCTION 140ac9e70 FUN_140ac9e70 body=66 status=ok
// SIG undefined FUN_140ac9e70(void)

longlong FUN_140ac9e70(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f0);
  }
  return param_1;
}



// FUNCTION 140ac9ec0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWeapon::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ac7be0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5d0);
  }
  return param_1;
}



// FUNCTION 140ac9f00 FUN_140ac9f00 body=124 status=ok
// SIG undefined FUN_140ac9f00(void)

longlong FUN_140ac9f00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    FMemory::Free();
  }
  FUN_140ac7b70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c0);
  }
  return param_1;
}



// FUNCTION 140ac9f80 FUN_140ac9f80 body=52 status=ok
// SIG undefined FUN_140ac9f80(void)

undefined8 FUN_140ac9f80(undefined8 param_1,ulonglong param_2)

{
  FUN_140ac7be0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5d8);
  }
  return param_1;
}



// FUNCTION 140ac9fc0 FUN_140ac9fc0 body=128 status=ok
// SIG undefined FUN_140ac9fc0(void)

longlong FUN_140ac9fc0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x540);
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  FUN_140ac76e0(param_1 + 0x520);
  *(undefined ***)(param_1 + 0x490) = &PTR_FUN_1441b39d0;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x558);
  }
  return param_1;
}



// FUNCTION 140aca040 FUN_140aca040 body=52 status=ok
// SIG undefined FUN_140aca040(void)

undefined8 FUN_140aca040(undefined8 param_1,ulonglong param_2)

{
  FUN_140676990();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 140aca080 FUN_140aca080 body=43 status=ok
// SIG undefined FUN_140aca080(void)

undefined8 * FUN_140aca080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144264860;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140aca0b0 FUN_140aca0b0 body=118 status=ok
// SIG undefined FUN_140aca0b0(void)

longlong FUN_140aca0b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x690);
  }
  return param_1;
}



// FUNCTION 140aca130 FUN_140aca130 body=190 status=ok
// SIG undefined FUN_140aca130(void)

longlong FUN_140aca130(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 400);
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x188);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 140aca1f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UMovieSceneSequencePlayer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1423c53e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7e0);
  }
  return param_1;
}



// FUNCTION 140aca230 FUN_140aca230 body=119 status=ok
// SIG undefined FUN_140aca230(void)

longlong FUN_140aca230(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  FUN_140ac7780(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 140aca2b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ABossDismantlerCharacter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ac7da0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1360);
  }
  return param_1;
}



// FUNCTION 140aca2f0 FUN_140aca2f0 body=52 status=ok
// SIG undefined FUN_140aca2f0(void)

undefined8 FUN_140aca2f0(undefined8 param_1,ulonglong param_2)

{
  FUN_140ac8090();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x378);
  }
  return param_1;
}



// FUNCTION 140aca330 FUN_140aca330 body=122 status=ok
// SIG undefined FUN_140aca330(void)

longlong FUN_140aca330(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x3d8);
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FMemory::Free();
  }
  FUN_140681f60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x428);
  }
  return param_1;
}



// FUNCTION 140aca3b0 FUN_140aca3b0 body=290 status=ok
// SIG undefined FUN_140aca3b0(void)

void FUN_140aca3b0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  undefined1 local_28 [32];
  
  if ((*(char *)(param_1 + 0x10e5) == '\x01') && (*(char *)(param_1 + 0x1338) == '\0')) {
    if ((*(byte *)(param_1 + 0x1350) & 2) != 0) {
      *(byte *)(param_1 + 0x1350) = *(byte *)(param_1 + 0x1350) | 4;
      return;
    }
    if (*(char *)(param_1 + 0x10e6) == '\x01') {
      FUN_140accfa0(param_1,0);
    }
    uVar3 = FUN_1404b03b0();
    uVar3 = FText::FText(local_28,uVar3);
    FUN_140ad1be0(param_1,2,uVar3,0);
    if (*(longlong *)(param_1 + 0x1320) != 0) {
      uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      FUN_142880530(uVar3,param_1 + 0x1330);
      *(undefined8 *)(param_1 + 0x1330) = 0;
      pwVar4 = _guard_xfg_dispatch_icall_nop
                         (L"&UFightForYourLifeComponent::SecondWindTargetDied",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(param_1 + 0x1320) + 600,param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 140aca4e0 FUN_140aca4e0 body=248 status=ok
// SIG undefined FUN_140aca4e0(void)

void FUN_140aca4e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  int local_2c;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  
  if ((((param_2 != (longlong *)0x0) &&
       (lVar1 = (**(code **)(*param_2 + 0x688))(param_2), lVar1 != 0)) &&
      (*(longlong *)(param_1 + 0x608) != 0)) &&
     (local_60 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400), local_60 != 0)) {
    local_50 = 0;
    local_58 = param_2;
    piVar2 = (int *)FUN_142dd6f80(local_78,param_2,&local_60);
    local_2c = *piVar2;
    if (local_2c == 0) {
      local_40 = 0xffffffff;
      uStack_38 = 0xffffffff;
      local_30 = 1;
      local_28 = 0;
      lStack_20 = 0;
      local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 400);
      local_18 = local_2c;
      FWeakObjectPtr::operator=(&local_40,param_2);
      local_30 = 1;
      lStack_20 = param_1;
      FUN_142dc4b70(local_78,param_2,&local_48);
    }
  }
  return;
}



// FUNCTION 140aca5e0 FUN_140aca5e0 body=235 status=ok
// SIG undefined FUN_140aca5e0(void)

void FUN_140aca5e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FDateTime::UtcNow(local_res8);
  plVar4 = (longlong *)FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
  plVar6 = (longlong *)(param_1 + 0xc08);
  plVar2 = (longlong *)*plVar6;
  lVar5 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*plVar3 - *plVar4),8) + (*plVar3 - *plVar4);
  iVar1 = *(int *)(param_1 + 0xc10);
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + (longlong)iVar1 * 2) {
LAB_140aca69c:
      *(int *)(param_1 + 0xc10) = iVar1 + 1;
      if (*(int *)(param_1 + 0xc14) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6);
      }
      plVar2 = (longlong *)(*plVar6 + (longlong)iVar1 * 0x10);
      *plVar2 = param_2;
      plVar2[1] = (lVar5 >> 0x17) - (lVar5 >> 0x3f);
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 4) != -1) {
        return;
      }
      goto LAB_140aca69c;
    }
    plVar3 = plVar3 + 2;
  } while( true );
}



// FUNCTION 140aca6d0 FUN_140aca6d0 body=267 status=ok
// SIG undefined FUN_140aca6d0(void)

void FUN_140aca6d0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x198) == 0) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x1bc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x1b0,0);
    }
    plVar2 = *(longlong **)(param_1 + 0x118);
    if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x25] == '\x03')) {
      (**(code **)(*plVar2 + 0x600))();
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 400)) {
      do {
        iVar1 = *(int *)(param_1 + 0x1a8);
        *(int *)(param_1 + 0x1a8) = iVar1 + 1;
        if (*(int *)(param_1 + 0x1ac) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a0,iVar1);
        }
        *(int *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar1 * 4) = iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 400));
    }
    *(undefined4 *)(param_1 + 0x198) = 0;
    FUN_140ace600(param_1);
    *(undefined4 *)(param_1 + 0x198) = 1;
    FUN_140aca7e0(param_1);
    FUN_140aca7e0(param_1);
  }
  else if ((*(int *)(param_1 + 0x198) == 1) && (*(int *)(param_1 + 0x1b8) < 4)) {
    FUN_140aca7e0(param_1);
    return;
  }
  return;
}



// FUNCTION 140aca7e0 FUN_140aca7e0 body=326 status=ok
// SIG undefined FUN_140aca7e0(void)

void FUN_140aca7e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x1a8);
  if (iVar6 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = rand();
    iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar6);
    iVar4 = iVar6 + -1;
    if (iVar5 <= iVar6 + -1) {
      iVar4 = iVar5;
    }
  }
  iVar6 = *(int *)(param_1 + 0x1b8);
  plVar1 = (longlong *)(param_1 + 0x1a0);
  lVar2 = *plVar1;
  *(int *)(param_1 + 0x1b8) = iVar6 + 1;
  if (*(int *)(param_1 + 0x1bc) < iVar6 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x1b0,iVar6);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar6 * 4) =
       *(undefined4 *)(lVar2 + (longlong)iVar4 * 4);
  plVar3 = *(longlong **)(param_1 + 0x118);
  if ((plVar3 != (longlong *)0x0) && ((char)plVar3[0x25] == '\x03')) {
    (**(code **)(*plVar3 + 0x600))();
  }
  iVar6 = *(int *)(param_1 + 0x1a8);
  iVar5 = (iVar6 - iVar4) + -1;
  if (iVar5 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar4 * 4),(void *)(*plVar1 + (longlong)(iVar4 + 1) * 4)
               ,(longlong)iVar5 << 2);
    iVar6 = *(int *)(param_1 + 0x1a8);
  }
  *(int *)(param_1 + 0x1a8) = iVar6 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
  FUN_140ace600(param_1);
  if ((0x14 < *(int *)(param_1 + 0x19c)) || (3 < *(int *)(param_1 + 0x1b8))) {
    *(undefined4 *)(param_1 + 0x198) = 2;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x178,0);
  return;
}



// FUNCTION 140aca930 FUN_140aca930 body=224 status=ok
// SIG undefined FUN_140aca930(void)

void FUN_140aca930(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 local_78 [24];
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  int local_2c;
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x608) != 0)) &&
     (local_60 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 0x198), local_60 != 0)) {
    local_50 = 0;
    local_58 = param_2;
    piVar1 = (int *)FUN_142dd6f80(local_78,param_2,&local_60);
    local_2c = *piVar1;
    if (local_2c == 0) {
      local_40 = 0xffffffff;
      uStack_38 = 0xffffffff;
      local_30 = 1;
      local_28 = 0;
      lStack_20 = 0;
      local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x198);
      local_18 = local_2c;
      FWeakObjectPtr::operator=(&local_40,param_2);
      local_30 = 1;
      lStack_20 = param_1;
      FUN_142dc4b70(local_78,param_2,&local_48);
    }
  }
  return;
}



// FUNCTION 140acaa10 FUN_140acaa10 body=1696 status=ok
// SIG undefined FUN_140acaa10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140acaa10(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  undefined ***pppuVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  byte bVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b8;
  undefined **local_b0 [2];
  undefined1 local_a0 [16];
  char local_90;
  undefined **local_88 [2];
  undefined1 local_78 [16];
  char local_68;
  longlong local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  ppuVar12 = (undefined **)0x0;
  local_138 = (undefined4 *)((ulonglong)local_138 & 0xffffffff00000000);
  _guard_xfg_dispatch_icall_nop(&local_130,0,0x58);
  FWeakObjectPtr::operator=(&local_130,0);
  iVar1 = (int)param_4[1];
  local_118 = &PTR__scalar_deleting_destructor__1440385f8;
  uVar15 = 0;
  local_128 = 0;
  local_f8 = &PTR__scalar_deleting_destructor__144038610;
  local_124 = 0;
  local_120 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  *(int *)(param_4 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_4,iVar1);
  }
  puVar10 = (undefined4 *)((longlong)iVar1 * 0x58 + *param_4);
  *puVar10 = local_130;
  puVar10[1] = local_12c;
  puVar10[2] = local_128;
  *(undefined1 *)(puVar10 + 3) = local_124;
  puVar10[4] = local_120;
  FUN_140675d60(puVar10 + 6,&local_118);
  local_138 = puVar10 + 0xe;
  FUN_140675ca0(local_138,&local_f8);
  local_f8 = &PTR__scalar_deleting_destructor__144038610;
  FUN_140676620(&local_e8);
  local_118 = &PTR__scalar_deleting_destructor__1440385f8;
  local_f8 = &PTR_FUN_1440385e0;
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_108);
  local_118 = &PTR_FUN_1440385e0;
  FUN_14067a380(param_2,&local_60,&DAT_1468680e8);
  if (local_58 != '\x01') {
    return;
  }
  if (local_60 == DAT_146868108) {
    puVar10[2] = 2;
    local_d0 = *(int *)(param_2 + 5);
    lVar8 = (longlong)local_d0;
    pvVar2 = (void *)param_2[4];
    local_d8 = (undefined **)0x0;
    bVar13 = local_d0 == 0;
    if (!bVar13) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_d8,local_d0,0);
      ppuVar12 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,lVar8 << 3);
      bVar13 = local_d0 == 0;
    }
    ppuVar9 = local_d8;
    bVar14 = false;
    if (!bVar13 && -1 < local_d0) {
      local_d0 = *(int *)(param_2 + 5);
      lVar8 = (longlong)local_d0;
      ppuVar9 = (undefined **)0x0;
      pvVar2 = (void *)param_2[4];
      bVar13 = true;
      local_d8 = (undefined **)0x0;
      if (local_d0 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_d8,local_d0,0);
        ppuVar9 = local_d8;
        _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,lVar8 << 3);
      }
      puVar11 = *ppuVar9;
      bVar14 = true;
      if (puVar11 != (undefined *)0x0) {
        lVar8 = FUN_140680590();
        if ((*(int *)(*(longlong *)(puVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(puVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_140acac7c;
      }
    }
    bVar13 = bVar14;
    puVar11 = (undefined *)0x0;
LAB_140acac7c:
    if ((bVar13) && (ppuVar9 != (undefined **)0x0)) {
      FMemory::Free(ppuVar9);
    }
    if (ppuVar12 != (undefined **)0x0) {
      FMemory::Free(ppuVar12);
    }
    if (puVar11 == (undefined *)0x0) {
      iVar1 = *(int *)(param_2 + 3);
      if (iVar1 < 1) {
        local_d0 = 0;
        uStack_cc = 0;
        local_d8 = &PTR__scalar_deleting_destructor__144038610;
        pppuVar4 = &local_d8;
        local_c8 = 0;
        local_c0 = 0;
      }
      else {
        pppuVar4 = (undefined ***)FUN_140675ca0(local_b0,param_2[2]);
      }
      FUN_140682460(local_138,pppuVar4);
      if (iVar1 < 1) {
        local_d8 = &PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(&local_c8);
      }
      else {
        local_b0[0] = &PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(local_a0);
      }
    }
    else {
      bVar13 = param_3 == 0;
      if (bVar13) {
        local_b8 = '\0';
        pppuVar4 = &local_d8;
      }
      else {
        pppuVar4 = (undefined ***)FUN_1406799c0(param_3,local_88,puVar11);
      }
      local_90 = 0;
      bVar14 = *(char *)(pppuVar4 + 4) != '\0';
      if (bVar14) {
        FUN_140675ca0(local_b0,pppuVar4);
      }
      local_90 = bVar14;
      if ((bVar13) && (local_b8 != '\0')) {
        local_b8 = '\0';
        local_d8 = &PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(&local_c8);
      }
      if ((!bVar13) && (local_68 != '\0')) {
        local_68 = '\0';
        local_88[0] = &PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(local_78);
      }
      if ((bVar14) && (FUN_140682460(local_138,local_b0), local_90 != '\0')) {
        local_90 = 0;
        local_b0[0] = &PTR__scalar_deleting_destructor__144038610;
        FUN_140676620(local_a0);
      }
    }
    return;
  }
  if (local_60 != DAT_146868100) {
    return;
  }
  puVar10[2] = 1;
  local_d0 = *(int *)(param_2 + 5);
  lVar8 = (longlong)local_d0;
  pvVar2 = (void *)param_2[4];
  local_d8 = (undefined **)0x0;
  bVar13 = local_d0 == 0;
  if (!bVar13) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_d8,local_d0,0);
    ppuVar12 = local_d8;
    _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,lVar8 << 3);
    bVar13 = local_d0 == 0;
  }
  ppuVar9 = local_d8;
  bVar14 = false;
  if (bVar13 || local_d0 < 0) {
LAB_140acaeda:
    bVar13 = bVar14;
    puVar11 = (undefined *)0x0;
  }
  else {
    local_d0 = *(int *)(param_2 + 5);
    lVar8 = (longlong)local_d0;
    ppuVar9 = (undefined **)0x0;
    local_138 = (undefined4 *)param_2[4];
    bVar13 = true;
    local_d8 = (undefined **)0x0;
    if (local_d0 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_d8,local_d0,0);
      ppuVar9 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,local_138,lVar8 << 3);
    }
    puVar11 = *ppuVar9;
    bVar14 = true;
    if (puVar11 == (undefined *)0x0) goto LAB_140acaeda;
    lVar8 = FUN_1406804e0();
    if ((*(int *)(*(longlong *)(puVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140acaeda;
  }
  if ((bVar13) && (ppuVar9 != (undefined **)0x0)) {
    FMemory::Free(ppuVar9);
  }
  if (ppuVar12 != (undefined **)0x0) {
    FMemory::Free(ppuVar12);
  }
  if (puVar11 == (undefined *)0x0) {
    if (*(int *)(param_2 + 1) < 1) {
      bVar7 = 0x80;
      local_d8 = &PTR__scalar_deleting_destructor__1440385f8;
      local_d0 = 0;
      uStack_cc = 0;
      local_c8 = 0;
      local_c0 = 0;
      pppuVar4 = &local_d8;
    }
    else {
      bVar7 = 0x40;
      pppuVar4 = (undefined ***)FUN_140675d60(local_b0,*param_2);
    }
    FUN_140682520(puVar10 + 6,pppuVar4);
    if ((char)bVar7 < '\0') {
      bVar7 = bVar7 & 0x7f;
      local_d8 = &PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_c8);
    }
    if ((bVar7 & 0x40) == 0) goto LAB_140acb02a;
  }
  else {
    bVar13 = param_3 == 0;
    if (bVar13) {
      local_b8 = '\0';
      pppuVar4 = &local_d8;
    }
    else {
      pppuVar4 = (undefined ***)FUN_140679a20(param_3,local_88,puVar11);
    }
    local_90 = 0;
    bVar14 = *(char *)(pppuVar4 + 4) != '\0';
    if (bVar14) {
      FUN_140675d60(local_b0,pppuVar4);
    }
    local_90 = bVar14;
    if ((bVar13) && (local_b8 != '\0')) {
      local_b8 = '\0';
      local_d8 = &PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_c8);
    }
    if ((!bVar13) && (local_68 != '\0')) {
      local_68 = '\0';
      local_88[0] = &PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(local_78);
    }
    if ((!bVar14) || (FUN_140682520(puVar10 + 6,local_b0), local_90 == '\0')) goto LAB_140acb02a;
    local_90 = '\0';
  }
  local_b0[0] = &PTR__scalar_deleting_destructor__1440385f8;
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(local_a0);
LAB_140acb02a:
  lVar8 = DAT_146868118;
  plVar5 = (longlong *)FUN_14067a380(param_2,&local_d8,&DAT_1468680f0);
  if ((char)plVar5[1] != '\x01') {
    return;
  }
  if (*plVar5 != lVar8) {
    return;
  }
  *(undefined1 *)(puVar10 + 3) = 1;
  local_138 = (undefined4 *)((ulonglong)local_138 & 0xffffffff00000000);
  puVar6 = (undefined4 *)FUN_14067a350(param_2,&local_d8,&DAT_1468680f8);
  if (*(char *)(puVar6 + 1) != '\0') {
    uVar15 = *puVar6;
  }
  puVar10[4] = uVar15;
  return;
}



// FUNCTION 140acb0b0 FUN_140acb0b0 body=127 status=ok
// SIG undefined FUN_140acb0b0(void)

void FUN_140acb0b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_1422223a0();
  if (param_2 != 0) {
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_1 + 0x4d8) != 0)) {
      uVar2 = FUN_140d000a0();
      FUN_142398e60(param_2,*(uint *)(param_2 + 0x6b8) | uVar2,0);
    }
  }
  return;
}



// FUNCTION 140acb130 FUN_140acb130 body=377 status=ok
// SIG undefined FUN_140acb130(void)

undefined8 FUN_140acb130(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  
  if ((param_2 == (longlong *)0x0) || ((int)param_1[0x79] <= (int)param_1[0x21a])) {
    return 0;
  }
  (**(code **)(*param_1 + 0x260))();
  uVar6 = FUN_141312e30();
  lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
  if (lVar7 != 0) {
    FUN_140ae2500(lVar7,param_1[0x23]);
    FUN_140acb2b0(lVar7);
  }
  plVar9 = param_1 + 0x219;
  iVar3 = (int)param_1[0x21a];
  *(int *)(param_1 + 0x21a) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x10d4) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
  }
  *(longlong **)(*plVar9 + (longlong)iVar3 * 8) = param_2;
  *(int *)(param_1 + 0x21c) = (int)param_1[0x21a];
  plVar9 = (longlong *)*plVar9;
  plVar1 = plVar9 + (int)param_1[0x21a];
  for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
    lVar7 = *plVar9;
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140acb229;
  }
  plVar9 = (longlong *)0x0;
LAB_140acb229:
  *(bool *)((longlong)param_1 + 0x10e4) = plVar9 != (longlong *)0x0;
  cVar5 = FUN_142d52a00(param_1 + 0x216);
  if (cVar5 != '\0') {
    fVar10 = (float)FUN_140ad62b0(param_1);
    fVar2 = *(float *)((longlong)param_1 + 0x130c);
    uVar6 = FUN_142d52a20(param_1 + 0x216);
    lVar7 = FArchive::operator<<(uVar6);
    FUN_14246fd50(lVar7 + 0x34,fVar10 * fVar2);
  }
  return 1;
}



// FUNCTION 140acb2b0 FUN_140acb2b0 body=387 status=ok
// SIG undefined FUN_140acb2b0(void)

void FUN_140acb2b0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x1080) != 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140acb316;
  }
  lVar5 = 0;
LAB_140acb316:
  if ((*(longlong *)(param_1 + 0x1078) != 0) && (lVar5 != 0)) {
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      *(undefined1 *)(param_1 + 0x1088) = 1;
    }
    local_48 = 0x3f8000003f800000;
    local_40 = 0x3f800000;
    local_30 = DAT_1468b5da8;
    local_38 = DAT_1468b5da0;
    local_10 = 0;
    local_20 = 0;
    local_28 = 0;
    uVar4 = FUN_14245fd00(*(undefined8 *)(param_1 + 0x1078),*(undefined8 *)(lVar5 + 0x168),0,
                          &local_28,&local_38,&local_48,2,1,0,1,0);
    *(undefined8 *)(param_1 + 0x1080) = uVar4;
    FUN_1423979a0(uVar4,1);
  }
  return;
}



// FUNCTION 140acb440 FUN_140acb440 body=219 status=ok
// SIG undefined FUN_140acb440(void)

int * FUN_140acb440(longlong *param_1,int *param_2)

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
      FUN_140ae1ad0(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 200 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 200 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 200 + *param_1;
  return param_2;
}



// FUNCTION 140acb520 FUN_140acb520 body=307 status=ok
// SIG undefined FUN_140acb520(void)

void FUN_140acb520(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_18;
  int local_10;
  
  if (((char)param_1[0xd4] != '\0') &&
     (lVar4 = (**(code **)(*param_1 + 0x148))(), (*(uint *)(lVar4 + 0x830) & 0x400) == 0)) {
    iVar3 = FUN_140e80cd0(param_1);
    if (iVar3 == 0) {
      if (param_1[0xc0] != 0) {
        FUN_1414bb150();
      }
      FUN_1414bbcb0(param_1);
      return;
    }
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar5,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar4 = FWeakObjectPtr::Get();
      if (lVar4 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (cVar2 = FUN_140cfdb70(), cVar2 != '\0')) {
          FUN_140cf9c50();
        }
      }
      local_10 = local_10 + 1;
    }
    if (((char)param_1[0x25] == '\x03') && (param_1[0xc0] != 0)) {
      FUN_140e914a0(param_1[0xc0],iVar3);
    }
  }
  return;
}



// FUNCTION 140acb660 FUN_140acb660 body=972 status=ok
// SIG undefined FUN_140acb660(void)

void FUN_140acb660(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar7 + 0x38) < DAT_146868208) {
    _Init_thread_header(&DAT_146868208);
    if (DAT_146868208 == -1) {
      FName::FName(&DAT_146868200,L"Color",1);
      _Init_thread_footer(&DAT_146868208);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146868218) {
    _Init_thread_header(&DAT_146868218);
    if (DAT_146868218 == -1) {
      FName::FName(&DAT_146868210,L"Color_Highlights",1);
      _Init_thread_footer(&DAT_146868218);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146868228) {
    _Init_thread_header(&DAT_146868228);
    if (DAT_146868228 == -1) {
      FName::FName(&DAT_146868220,L"Normal_Strength",1);
      _Init_thread_footer(&DAT_146868228);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146868238) {
    _Init_thread_header(&DAT_146868238);
    if (DAT_146868238 == -1) {
      FName::FName(&DAT_146868230,L"Movement_Speed",1);
      _Init_thread_footer(&DAT_146868238);
    }
  }
  if (*(int *)(lVar7 + 0x38) < DAT_146868248) {
    _Init_thread_header(&DAT_146868248);
    if (DAT_146868248 == -1) {
      FName::FName(&DAT_146868240,L"Opacity",1);
      _Init_thread_footer(&DAT_146868248);
    }
  }
  if (param_2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x118);
    if (lVar7 == 0) {
LAB_140acb752:
      lVar7 = 0;
    }
    else {
      lVar4 = FUN_1413c2e10();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140acb752;
      if ((*(byte *)(lVar7 + 0x4a0) & 8) != 0) {
        puVar6 = (undefined8 *)(lVar7 + 0x4c4);
        goto LAB_140acb76f;
      }
    }
    if (*(char *)(param_2 + 0x520) != '\0') {
      puVar6 = (undefined8 *)(param_2 + 0x524);
      goto LAB_140acb76f;
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0xb8);
LAB_140acb76f:
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x4a0) & 8) == 0)) {
    if ((param_2 == 0) ||
       (puVar5 = (undefined8 *)(param_2 + 0x534), *(char *)(param_2 + 0x520) == '\0')) {
      puVar5 = (undefined8 *)(param_1 + 200);
    }
  }
  else {
    puVar5 = (undefined8 *)(lVar7 + 0x4d4);
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x4a0) & 0x20) == 0)) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 0x544) & 2) == 0)) {
      uVar10 = *(undefined4 *)(param_1 + 0xd8);
    }
    else {
      uVar10 = *(undefined4 *)(param_2 + 0x554);
    }
  }
  else {
    uVar10 = *(undefined4 *)(lVar7 + 0x4e8);
  }
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x4a0) & 0x40) == 0)) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 0x544) & 4) == 0)) {
      uVar9 = *(undefined4 *)(param_1 + 0xdc);
    }
    else {
      uVar9 = *(undefined4 *)(param_2 + 0x558);
    }
  }
  else {
    uVar9 = *(undefined4 *)(lVar7 + 0x4ec);
  }
  local_48 = *puVar6;
  uStack_40 = puVar6[1];
  FUN_1425a2be0(param_3,DAT_146868200,&local_48);
  local_48 = uVar1;
  uStack_40 = uVar2;
  FUN_1425a2be0(param_3,DAT_146868210,&local_48);
  FUN_1425a2750(param_3,DAT_146868220,uVar10);
  FUN_1425a2750(param_3,DAT_146868230,uVar9);
  if (param_2 == 0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = *(float *)(param_2 + 0x510);
  }
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x4a0) & 0x10) != 0)) {
    fVar8 = fVar8 * *(float *)(lVar7 + 0x4e4);
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  FUN_1425a2750(param_3,DAT_146868240,fVar8);
  return;
}



// FUNCTION 140acba30 FUN_140acba30 body=49 status=ok
// SIG undefined FUN_140acba30(void)

void FUN_140acba30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    (**(code **)(param_1[0x8b] + 0x10))();
  }
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 140acba80 FUN_140acba80 body=1069 status=ok
// SIG undefined FUN_140acba80(void)

void FUN_140acba80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_140af1d80();
  FUN_140acf9d0(param_1);
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    pwVar11 = (wchar_t *)0x0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AAdvancedInteractiveObject::NotifyUsed",L"::");
    pwVar7 = pwVar11;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res10,pwVar7 + 2,1);
    lVar6 = local_res10;
    lVar2 = *(longlong *)(param_1 + 0x5e0);
    plVar10 = (longlong *)(lVar2 + 0x318);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar6;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 800);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_30)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140acbbf4;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 800);
    *(int *)(lVar2 + 800) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_38;
    piVar8[1] = local_34;
    *(longlong *)(piVar8 + 2) = local_30;
LAB_140acbbf4:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop
                         (L"&AAdvancedInteractiveObject::OnLookedAtByPlayer",L"::");
      pwVar7 = pwVar11;
      while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar7 = pwVar3;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      lVar6 = local_res10;
      lVar2 = *(longlong *)(param_1 + 0x5e0);
      plVar10 = (longlong *)(lVar2 + 0x368);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = lVar6;
      if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_30);
      }
      piVar8 = (int *)*plVar10;
      iVar1 = *(int *)(lVar2 + 0x370);
      for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
        if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
           (*(longlong *)(piVar9 + 2) == local_30)) {
          if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140acbd44;
          break;
        }
      }
      iVar1 = *(int *)(lVar2 + 0x370);
      *(int *)(lVar2 + 0x370) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x374) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
      *piVar8 = local_38;
      piVar8[1] = local_34;
      *(longlong *)(piVar8 + 2) = local_30;
LAB_140acbd44:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&AAdvancedInteractiveObject::OnLookedAwayFromByPlayer",L"::");
      while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar11 = pwVar5;
      }
      FName::FName(&local_res10,pwVar11 + 2,1);
      lVar2 = *(longlong *)(param_1 + 0x5e0);
      plVar10 = (longlong *)(lVar2 + 0x378);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_30);
      }
      piVar8 = (int *)*plVar10;
      iVar1 = *(int *)(lVar2 + 0x380);
      for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
        if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
           (*(longlong *)(piVar9 + 2) == local_30)) {
          if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140acbe84;
          break;
        }
      }
      iVar1 = *(int *)(lVar2 + 0x380);
      *(int *)(lVar2 + 0x380) = iVar1 + 1;
      if (*(int *)(lVar2 + 900) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
      *piVar8 = local_38;
      piVar8[1] = local_34;
      *(longlong *)(piVar8 + 2) = local_30;
LAB_140acbe84:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    }
  }
  return;
}



// FUNCTION 140acbeb0 FUN_140acbeb0 body=604 status=ok
// SIG undefined FUN_140acbeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140acbeb0(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  undefined1 *puVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8 [192];
  ulonglong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  undefined1 *puVar9;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_142223710();
  puVar10 = (undefined1 *)0x0;
  if (param_1[0x8c] != 0) {
    lVar4 = FUN_142956f50();
    for (lVar6 = param_1[0x8c]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar4) {
        if (param_1[0x8c] != 0) {
          local_108 = 0;
          puVar5 = (undefined1 *)FUN_142956f50();
          lVar6 = local_108;
          for (puVar9 = (undefined1 *)param_1[0x8c];
              (puVar7 = puVar10, puVar9 != (undefined1 *)0x0 &&
              (puVar7 = (undefined1 *)param_1[0x8c], puVar9 != puVar5));
              puVar9 = *(undefined1 **)(puVar9 + 0x30)) {
          }
          local_100 = 0;
          if (local_108 == 0) {
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          local_118 = 0;
          local_120 = 0;
          local_128 = 0;
          local_130 = 0;
          local_138 = 0;
          lVar6 = FUN_1417985e0(puVar7,param_1,lVar6,0);
          param_1[0x26] = lVar6;
          if (lVar6 != 0) {
            FUN_14234b150(lVar6);
            pbVar1 = (byte *)(param_1[0x26] + 0x1fc);
            *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)param_1 + 0x91) >> 5 ^
                                *(byte *)(param_1[0x26] + 0x1fc)) & 1;
            *(undefined4 *)(param_1[0x26] + 0x1f8) = *(undefined4 *)((longlong)param_1 + 300);
            (**(code **)(*param_1 + 0x760))(param_1);
          }
        }
        break;
      }
    }
  }
  local_2c = 0;
  local_38 = 0;
  local_30 = 0;
  if (param_1 != (longlong *)0x0) {
    FUN_140725150(param_1,local_f8,0);
  }
  puVar9 = local_f8;
  if (local_38 != 0) {
    puVar9 = puVar10;
  }
  plVar8 = (longlong *)((ulonglong)puVar9 | local_38);
  puVar9 = (undefined1 *)((longlong)local_30 & 0x1fffffffffffffff);
  if (plVar8 + local_30 < plVar8) {
    puVar9 = puVar10;
  }
  if (puVar9 != (undefined1 *)0x0) {
    do {
      plVar2 = (longlong *)*plVar8;
      if (plVar2 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar2 + 0x4f0))(plVar2,0x13);
        if (iVar3 == 2) {
          (**(code **)(*plVar2 + 0x830))(plVar2,0x13,1);
        }
        (**(code **)(*plVar2 + 0x830))(plVar2,2);
      }
      plVar8 = plVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar9);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140acc110 FUN_140acc110 body=116 status=ok
// SIG undefined FUN_140acc110(void)

void FUN_140acc110(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140af1d80();
  if ((*(longlong *)(param_1 + 0x5a0) != 0) && (lVar2 = FUN_1423ac7e0(), lVar2 != 0)) {
    lVar3 = FUN_1412f00f0();
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
      ABP_TechUnitHiddenDoor_C__pf239202814::bpf__StartSelectBuild__pf(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 140acc190 FUN_140acc190 body=63 status=ok
// SIG undefined FUN_140acc190(void)

void FUN_140acc190(longlong *param_1)

{
  FUN_140acba80();
  FUN_140adf5e0(param_1);
  (**(code **)(*param_1 + 0x730))(param_1,4);
  (**(code **)(*param_1 + 0x740))(param_1,1);
  *(undefined1 *)((longlong)param_1 + 0x58a) = 1;
  return;
}



// FUNCTION 140acc1d0 FUN_140acc1d0 body=42 status=ok
// SIG undefined FUN_140acc1d0(void)

void FUN_140acc1d0(longlong param_1)

{
  longlong local_res8 [4];
  
  FUN_142223710();
  local_res8[0] = param_1;
  FUN_140ac94c0(local_res8,*(undefined8 *)(param_1 + 0x460));
  return;
}



// FUNCTION 140acc200 FUN_140acc200 body=1733 status=ok
// SIG undefined FUN_140acc200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140acc200(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b8 = param_1;
  FUN_140c6aaf0();
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  local_a8 = lVar9;
  local_a0 = FUN_141488bb0();
  if (local_a0 != 0) {
    lVar10 = FUN_141488bb0();
    lVar19 = local_a0;
    do {
      if (lVar19 == lVar10) goto LAB_140acc263;
      lVar19 = *(longlong *)(lVar19 + 0x30);
    } while (lVar19 != 0);
  }
  local_a0 = 0;
LAB_140acc263:
  local_98[0] = 5;
  local_40 = '\0';
  local_b0 = lVar9;
  FUN_14044bc80(&local_90,&local_b0,&local_a0);
  FUN_14045a130(local_98);
  if (local_74 == '\0') {
LAB_140acc2c0:
    lVar9 = local_68;
    if (local_68 != 0) {
      plVar17 = param_1 + 0x17d;
      plVar2 = (longlong *)*plVar17;
      iVar20 = (int)param_1[0x17e];
      for (plVar11 = plVar2; plVar11 != plVar2 + iVar20; plVar11 = plVar11 + 1) {
        if (*plVar11 == local_68) {
          if ((int)((longlong)plVar11 - (longlong)plVar2 >> 3) != -1) goto LAB_140acc31c;
          break;
        }
      }
      *(int *)(param_1 + 0x17e) = iVar20 + 1;
      if (*(int *)((longlong)param_1 + 0xbf4) < iVar20 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,iVar20);
      }
      *(longlong *)(*plVar17 + (longlong)iVar20 * 8) = lVar9;
    }
LAB_140acc31c:
    lVar9 = local_90;
    iVar20 = local_78 + 1;
    if (iVar20 < local_58 + local_80) {
      lVar19 = (longlong)iVar20 * 8;
      iVar18 = local_58;
      iVar15 = local_80;
      do {
        if (iVar20 < iVar15) {
          lVar10 = *(longlong *)(local_88 + lVar19);
        }
        else {
          lVar10 = *(longlong *)(local_60 + (longlong)(iVar20 - iVar15) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar10 != 0) &&
           (lVar12 = AActor::GetLevel(lVar10), iVar18 = local_58, iVar15 = local_80, lVar12 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar10 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar16 = iVar1 >> 0x1f & 0xffff;
              uVar8 = iVar1 + uVar16;
              lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18;
            }
            else {
              lVar14 = 0;
            }
            if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) != 0) goto LAB_140acc4bb;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar10), iVar18 = local_58,
             iVar15 = local_80, cVar7 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar12 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar12 + 0x205) & 0x10) == 0)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              piVar3 = *(int **)(lVar12 + 600);
              if (((*(longlong *)(lVar12 + 0xc0) == 0) ||
                  (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                 (piVar3 == piVar13)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((bVar4) || (bVar4 = false, bVar5)) {
                bVar4 = true;
              }
              iVar18 = local_58;
              iVar15 = local_80;
              if ((!bVar6) || (!bVar4)) goto LAB_140acc4bb;
            }
            lVar12 = ULevel::GetWorld(lVar12);
            iVar18 = local_58;
            iVar15 = local_80;
            if (lVar12 == lVar9) {
              lVar12 = AActor::GetLevel(lVar10);
              if (lVar12 == *(longlong *)(lVar9 + 0x30)) goto LAB_140acc5b2;
              lVar12 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              iVar18 = local_58;
              iVar15 = local_80;
              if (!bVar6) goto LAB_140acc5b2;
            }
          }
        }
LAB_140acc4bb:
        iVar20 = iVar20 + 1;
        lVar19 = lVar19 + 8;
        if (iVar18 + iVar15 <= iVar20) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
    lVar9 = local_a8;
    param_1 = local_b8;
  }
LAB_140acc4e3:
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
  lVar19 = FUN_14131f750();
  if (lVar19 != 0) {
    lVar12 = FUN_14131f750();
    lVar10 = lVar19;
    do {
      if (lVar10 == lVar12) goto LAB_140acc540;
      lVar10 = *(longlong *)(lVar10 + 0x30);
    } while (lVar10 != 0);
  }
  lVar19 = 0;
LAB_140acc540:
  local_98[0] = 5;
  local_40 = '\0';
  local_b0 = lVar19;
  local_a0 = lVar9;
  FUN_14044bc80(&local_90,&local_a0,&local_b0);
  FUN_14045a130(local_98);
  iVar20 = local_78;
  lVar19 = local_68;
joined_r0x000140acc571:
  local_78 = iVar20;
  local_68 = lVar19;
  if (local_74 == '\0') {
    if (lVar19 != 0) {
      plVar17 = param_1 + 0x17f;
      plVar2 = (longlong *)*plVar17;
      iVar20 = (int)param_1[0x180];
      for (plVar11 = plVar2; plVar11 != plVar2 + iVar20; plVar11 = plVar11 + 1) {
        if (*plVar11 == lVar19) {
          if ((int)((longlong)plVar11 - (longlong)plVar2 >> 3) != -1) goto LAB_140acc5f7;
          break;
        }
      }
      *(int *)(param_1 + 0x180) = iVar20 + 1;
      if (*(int *)((longlong)param_1 + 0xc04) < iVar20 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,iVar20);
      }
      *(longlong *)(*plVar17 + (longlong)iVar20 * 8) = lVar19;
    }
LAB_140acc5f7:
    lVar10 = local_90;
    iVar20 = local_78 + 1;
    if (iVar20 < local_58 + local_80) {
      lVar12 = (longlong)iVar20 * 8;
      iVar18 = local_58;
      iVar15 = local_80;
      do {
        if (iVar20 < iVar15) {
          lVar19 = *(longlong *)(lVar12 + local_88);
        }
        else {
          lVar19 = *(longlong *)(local_60 + (longlong)(iVar20 - iVar15) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar19 != 0) &&
           (lVar9 = AActor::GetLevel(lVar19), iVar18 = local_58, iVar15 = local_80, lVar9 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar19 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar16 = iVar1 >> 0x1f & 0xffff;
              uVar8 = iVar1 + uVar16;
              lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18;
            }
            else {
              lVar14 = 0;
            }
            if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) != 0) goto LAB_140acc796;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar19), iVar18 = local_58,
             iVar15 = local_80, cVar7 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              piVar3 = *(int **)(lVar9 + 600);
              if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                  (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                 (piVar3 == piVar13)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((bVar4) || (bVar4 = false, bVar5)) {
                bVar4 = true;
              }
              iVar18 = local_58;
              iVar15 = local_80;
              if ((!bVar6) || (!bVar4)) goto LAB_140acc796;
            }
            lVar9 = ULevel::GetWorld(lVar9);
            iVar18 = local_58;
            iVar15 = local_80;
            if (lVar9 == lVar10) {
              lVar14 = AActor::GetLevel(lVar19);
              lVar9 = local_a8;
              param_1 = local_b8;
              if (lVar14 == *(longlong *)(lVar10 + 0x30)) goto joined_r0x000140acc571;
              lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              iVar18 = local_58;
              iVar15 = local_80;
              lVar9 = local_a8;
              param_1 = local_b8;
              if (!bVar6) goto joined_r0x000140acc571;
            }
          }
        }
LAB_140acc796:
        iVar20 = iVar20 + 1;
        lVar12 = lVar12 + 8;
        if (iVar18 + iVar15 <= iVar20) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
    lVar9 = local_a8;
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
  if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x140), lVar9 != 0)) {
    lVar19 = FUN_141425c60();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar19 + 0x90) * 8)
        != lVar19 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FUN_140ac3b30(lVar9 + 0x5b0,&local_b0,local_b8,FUN_140ad71e0);
      FUN_140ac3b30(lVar9 + 0x5c8,&local_b0,local_b8,FUN_140ad7280);
    }
  }
  return;
LAB_140acc5b2:
  lVar9 = local_a8;
  param_1 = local_b8;
  local_78 = iVar20;
  local_68 = lVar10;
  if (local_74 != '\0') goto LAB_140acc4e3;
  goto LAB_140acc2c0;
}



// FUNCTION 140acc8d0 FUN_140acc8d0 body=301 status=ok
// SIG undefined FUN_140acc8d0(void)

void FUN_140acc8d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_142223710();
  if ((param_1[0x93] != 0) && (*(longlong *)(param_1[0x93] + 0x40) != 0)) {
    FUN_140abb430(param_1[0xa2]);
  }
  if ((((*(byte *)(param_1 + 0x94) & 4) != 0) &&
      (lVar1 = (**(code **)(*param_1 + 0x148))(param_1), lVar1 != 0)) &&
     (lVar1 = param_1[0x97], lVar1 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = FUN_1428cccb0(uVar2,lVar1);
    if (lVar1 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146868278) &&
         (_Init_thread_header(&DAT_146868278), DAT_146868278 == -1)) {
        FName::FName(&DAT_146868270,L"Wetness_SeaLevel",1);
        _Init_thread_footer(&DAT_146868278);
      }
      UMaterialParameterCollectionInstance::SetScalarParameterValue
                (lVar1,DAT_146868270,(int)param_1[0x98]);
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar1 = FUN_140aab610(uVar2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140ab8a30(lVar1,param_1,1);
  return;
}



// FUNCTION 140acca00 FUN_140acca00 body=348 status=ok
// SIG undefined FUN_140acca00(void)

void FUN_140acca00(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_142385110();
  if (*(longlong *)(param_1 + 0x7b8) == 0) {
    local_res8 = 0;
    uVar4 = FUN_142a232e0();
    local_res10 = 0;
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x7b8) = lVar5;
    if (lVar5 != 0) {
      FUN_14234b150(lVar5);
      puVar6 = (undefined8 *)FName::FName(&local_res8,L"Trophy",1);
      uVar2 = FUN_142382f60(*(undefined8 *)(param_1 + 0x7b8),param_1,&DAT_146af29ec,*puVar6);
      lVar5 = *(longlong *)(param_1 + 0x7b8);
      local_28 = *(float *)(lVar5 + 0x210);
      fStack_24 = *(float *)(lVar5 + 0x214);
      fStack_20 = *(float *)(lVar5 + 0x218);
      fStack_1c = *(float *)(lVar5 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_24);
      auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_28);
      auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_20);
      auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_1c);
      iVar3 = movmskps(uVar2,auVar1);
      if (iVar3 != 0) {
        *(float *)(lVar5 + 0x250) = local_28;
        *(float *)(lVar5 + 0x254) = fStack_24;
        *(float *)(lVar5 + 600) = fStack_20;
        *(float *)(lVar5 + 0x25c) = fStack_1c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_28,local_38);
        *(undefined8 *)(lVar5 + 0x260) = *puVar6;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(lVar5 + 0x260);
      *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(lVar5 + 0x268);
    }
  }
  return;
}



// FUNCTION 140accb60 FUN_140accb60 body=1084 status=ok
// SIG undefined FUN_140accb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140accb60(longlong *param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_128 [32];
  code *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined4 local_b8;
  code *local_a8;
  longlong lStack_a0;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar6 = FUN_14233f450();
  if (iVar6 != 3) {
    return 0;
  }
  lVar3 = param_1[0x21c];
  cVar4 = FUN_140acb130(param_1,param_2);
  if (cVar4 == '\0') {
    return 0;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  if (((*(char *)((longlong)param_1 + 0x10e6) != '\x01') ||
      (cVar4 = FUN_142d52a00(param_1 + 0x213), cVar4 == '\0')) &&
     (iVar6 = FUN_14233f450(param_1), iVar6 == 3)) {
    plVar12 = param_1 + 0x213;
    cVar4 = FUN_142d52a00(plVar12);
    if ((cVar4 == '\0') && (param_1[0x23] != 0)) {
      local_108 = (code *)0x0;
      plVar7 = (longlong *)FUN_142d61d40(&local_a8,&local_108,param_1[0x23],param_1[0x78]);
      lVar9 = plVar7[1];
      *plVar12 = *plVar7;
      param_1[0x214] = lVar9;
      param_1[0x215] = plVar7[2];
    }
    cVar4 = FUN_142d52a00(plVar12);
    if (cVar4 != '\0') {
      uVar8 = FUN_142d52a20(plVar12);
      uVar8 = FArchive::operator<<(uVar8);
      FUN_142d6cbd0(uVar8);
      uVar8 = FUN_142d52a20(plVar12);
      uVar8 = FArchive::operator<<(uVar8);
      lVar9 = FDuplicateDataWriter::GetSerializeContext(uVar8);
      if (lVar9 != 0) {
        lVar9 = FUN_142d62010(lVar9,param_1[0x78]);
        uStack_100 = 0;
        local_108 = thunk_FUN_140accfa0;
        lStack_a0 = (ulonglong)uStack_fc << 0x20;
        local_a8 = thunk_FUN_140accfa0;
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&UFightForYourLifeComponent::BeingRevivedTimeExpired",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar10, pwVar1 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_108,pwVar2 + 2,1);
        FUN_1407260e0(lVar9 + 8,param_1,&local_a8,local_108);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x10e6) = 1;
  (**(code **)(*param_1 + 0x358))(param_1,1);
  plVar12 = (longlong *)param_1[0x23];
  if (plVar12 == (longlong *)0x0) goto LAB_140accf60;
  lVar9 = FUN_1413f82e0();
  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_140accf60;
  if ((param_1[0x83] != 0) && (cVar4 = FUN_142dd3d30(param_1 + 0x223), cVar4 == '\0')) {
    uVar8 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar9 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar8);
    if (lVar9 != 0) {
      local_f8 = (code *)param_1[0x83];
      local_f0 = 0xffffffff;
      uStack_e8 = 0xffffffff;
      local_e0 = 1;
      local_dc = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = local_c8 & 0xffffffff00000000;
      FWeakObjectPtr::operator=(&local_f0,lVar9);
      plVar7 = (longlong *)FUN_142dc49a0(lVar9,&local_a8,&local_f8);
      lVar9 = plVar7[1];
      param_1[0x223] = *plVar7;
      param_1[0x224] = lVar9;
      param_1[0x225] = plVar7[2];
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x240,0);
  plVar12 = (longlong *)plVar12[0x92];
  if (plVar12 != (longlong *)0x0) {
    lVar9 = FUN_1429e18b0();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (cVar4 = (**(code **)(*plVar12 + 0x768))(plVar12), cVar4 != '\0')) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23e,0)
      ;
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = param_1;
    *puVar11 = &PTR_FUN_143f77b70;
  }
  local_c8 = 0;
  local_88 = FUN_140ace8d0;
  local_b8 = 0;
  if (local_48 == 0) {
LAB_140accf14:
    local_f8 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar12 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar12 = local_58;
    }
    if (plVar12 == (longlong *)0x0) goto LAB_140accf14;
    plVar12 = (longlong *)(**(code **)*plVar12)(plVar12,&uStack_e8);
    (**(code **)(*plVar12 + 8))(plVar12);
    local_f8 = local_88;
  }
  FUN_140acd4a0(param_1,&local_f8);
  if (local_48 != 0) {
    plVar12 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar12 = local_58;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140accf60:
  if ((int)lVar3 == 0) {
    FUN_140acb2b0(param_1);
  }
  return 1;
}



// FUNCTION 140accfa0 FUN_140accfa0 body=1252 status=ok
// SIG undefined FUN_140accfa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140accfa0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStack_138 [32];
  undefined8 local_118 [2];
  code *local_108 [2];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined1 local_b8 [32];
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar8 = FUN_14233f450();
  if (iVar8 != 3) {
    return;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  *(char *)((longlong)param_1 + 0x10e7) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x10e6) = 0;
  (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e5) != '\0');
  uVar9 = FUN_142d52a20(param_1 + 0x213);
  uVar9 = FArchive::operator<<(uVar9);
  cVar7 = FConstraintInstance::IsValidConstraintInstance(uVar9);
  pwVar14 = (wchar_t *)0x0;
  if (cVar7 != '\0') {
    uVar9 = FUN_142d52a20(param_1 + 0x213);
    uVar9 = FArchive::operator<<(uVar9);
    lVar10 = FDuplicateDataWriter::GetSerializeContext(uVar9);
    if ((lVar10 != 0) && (lVar10 = FUN_142d62990(lVar10,param_1[0x78]), lVar10 != 0)) {
      pwVar11 = _guard_xfg_dispatch_icall_nop
                          (L"&UFightForYourLifeComponent::BeingRevivedTimeExpired",L"::");
      pwVar15 = pwVar14;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar15 = pwVar3;
      }
      FName::FName(local_118,pwVar15 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar10 + 8,param_1,local_118[0]);
    }
    FUN_142d5ac70(param_1 + 0x213);
    FUN_142d5ac70(param_1 + 0x216);
  }
  plVar13 = (longlong *)param_1[0x23];
  if (plVar13 == (longlong *)0x0) goto LAB_140acd301;
  lVar10 = FUN_1413f82e0();
  if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
      lVar10 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140acd301;
  cVar7 = FUN_142dd3d30(param_1 + 0x223);
  if (cVar7 != '\0') {
    uVar9 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar10 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar9);
    if (lVar10 != 0) {
      FUN_142dd99b0(lVar10,param_1 + 0x223);
      uVar6 = uRam00000001466ad834;
      uVar5 = uRam00000001466ad830;
      uVar4 = uRam00000001466ad82c;
      *(undefined4 *)(param_1 + 0x223) = _DAT_1466ad828;
      *(undefined4 *)((longlong)param_1 + 0x111c) = uVar4;
      *(undefined4 *)(param_1 + 0x224) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x1124) = uVar6;
      param_1[0x225] = DAT_1466ad838;
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x246,0);
  plVar13 = (longlong *)plVar13[0x92];
  if (plVar13 != (longlong *)0x0) {
    lVar10 = FUN_1429e18b0();
    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar7 = (**(code **)(*plVar13 + 0x768))(plVar13), cVar7 != '\0')) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x244,0)
      ;
    }
  }
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = param_1;
    *puVar12 = &PTR_FUN_143f77b70;
  }
  local_d8 = 0;
  local_98 = FUN_140acea00;
  local_c8 = 0;
  if (local_58 == 0) {
LAB_140acd2a5:
    local_108[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar13 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar13 = local_68;
    }
    if (plVar13 == (longlong *)0x0) goto LAB_140acd2a5;
    plVar13 = (longlong *)(**(code **)*plVar13)(plVar13,local_f8);
    (**(code **)(*plVar13 + 8))(plVar13);
    local_108[0] = local_98;
  }
  FUN_140acd4a0(param_1,local_108);
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
LAB_140acd301:
  if (param_2 != '\0') {
    uVar9 = FUN_1404b03b0();
    uVar9 = FText::FText(local_b8,uVar9);
    FUN_140ad1be0(param_1,1,uVar9,0);
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  plVar13 = (longlong *)param_1[0x219];
  pwVar15 = (wchar_t *)((longlong)(int)param_1[0x21a] & 0x1fffffffffffffff);
  if (plVar13 + (int)param_1[0x21a] < plVar13) {
    pwVar15 = pwVar14;
  }
  if (pwVar15 != (wchar_t *)0x0) {
    do {
      plVar1 = (longlong *)*plVar13;
      if (plVar1 != (longlong *)0x0) {
        uVar9 = FUN_141312e30();
        lVar10 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar9);
        if ((lVar10 != 0) && (FUN_140ae2650(lVar10,param_2), *(longlong *)(lVar10 + 0x1080) != 0)) {
          iVar8 = FUN_14233f450(lVar10);
          if (iVar8 == 3) {
            *(undefined1 *)(lVar10 + 0x1088) = 0;
          }
          (**(code **)(**(longlong **)(lVar10 + 0x1080) + 0x3b0))(*(longlong **)(lVar10 + 0x1080),0)
          ;
          *(undefined8 *)(lVar10 + 0x1080) = 0;
        }
      }
      plVar13 = plVar13 + 1;
      pwVar14 = (wchar_t *)((longlong)pwVar14 + 1);
    } while (pwVar14 != pwVar15);
  }
  *(undefined4 *)(param_1 + 0x21a) = 0;
  if (*(int *)((longlong)param_1 + 0x10d4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x219,0);
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10e4) = 0;
  if (param_1[0x210] != 0) {
    iVar8 = FUN_14233f450(param_1);
    if (iVar8 == 3) {
      *(undefined1 *)(param_1 + 0x211) = 0;
    }
    (**(code **)(*(longlong *)param_1[0x210] + 0x3b0))((longlong *)param_1[0x210],0);
    param_1[0x210] = 0;
  }
  return;
}



// FUNCTION 140acd490 thunk_FUN_140accfa0 body=7 status=ok
// SIG undefined thunk_FUN_140accfa0(void)

void thunk_FUN_140accfa0(undefined8 param_1)

{
  FUN_140accfa0(param_1,1);
  return;
}



// FUNCTION 140acd4a0 FUN_140acd4a0 body=460 status=ok
// SIG undefined FUN_140acd4a0(void)

void FUN_140acd4a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong local_38;
  longlong *local_30;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar7 = 0;
  lVar6 = lVar7;
  if (lVar3 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar6 = *(longlong *)(lVar3 + 400);
  }
  if (lVar6 != 0) {
    plVar4 = (longlong *)UListView::OnItemSelectionChanged();
    puVar9 = (undefined8 *)*plVar4;
    puVar1 = puVar9 + (int)plVar4[1];
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      uVar5 = *puVar9;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      lVar3 = UPlayer::GetPlayerController(uVar5,lVar3);
      if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x498), plVar4 != (longlong *)0x0)) {
        lVar3 = FUN_1413f82e0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (plVar8 != plVar4)) {
          uVar5 = FUN_141312e30();
          lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
          if (lVar3 != 0) {
            lVar6 = lVar7;
            local_38 = lVar3;
            local_30 = plVar4;
            if (*(int *)(param_2 + 8) != 0) {
              plVar4 = (longlong *)param_2[6];
              if ((longlong *)param_2[6] == (longlong *)0x0) {
                plVar4 = param_2 + 2;
              }
              if (plVar4 != (longlong *)0x0) {
                lVar6 = (**(code **)(*plVar4 + 8))();
              }
            }
            (*(code *)*param_2)(lVar6,&local_30,&local_38);
          }
        }
      }
    }
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar8 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar8 = param_2 + 2;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140acd690 FUN_140acd690 body=38 status=ok
// SIG undefined FUN_140acd690(void)

void FUN_140acd690(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xc60,0);
  FUN_140ad0790(param_1,0x11);
  return;
}



// FUNCTION 140acd6e0 FUN_140acd6e0 body=38 status=ok
// SIG undefined FUN_140acd6e0(void)

void FUN_140acd6e0(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xc70,0);
  FUN_140ad0790(param_1,0x12);
  return;
}



// FUNCTION 140acd730 FUN_140acd730 body=38 status=ok
// SIG undefined FUN_140acd730(void)

void FUN_140acd730(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xc40,0);
  FUN_140ad0790(param_1,0xd);
  return;
}



// FUNCTION 140acd780 FUN_140acd780 body=38 status=ok
// SIG undefined FUN_140acd780(void)

void FUN_140acd780(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xc50,0);
  FUN_140ad0790(param_1,0x10);
  return;
}



// FUNCTION 140acd7b0 FUN_140acd7b0 body=1152 status=ok
// SIG undefined FUN_140acd7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140acd7b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  float local_res20 [2];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  float local_a0;
  
  lVar7 = *(longlong *)(param_2 + 0x10);
  cVar4 = *(char *)(lVar7 + 0x2c);
  cVar5 = *(char *)(lVar7 + 0x2b);
  cVar6 = *(char *)(lVar7 + 0x35);
  if (*(char *)(param_2 + 0x22) == '\0') {
    if (*(char *)(param_2 + 0x20) == '\0') {
      fVar14 = *(float *)(lVar7 + 0x38);
    }
    else {
      fVar14 = *(float *)(lVar7 + 0x168);
    }
  }
  else {
    fVar14 = *(float *)(lVar7 + 0x16c);
  }
  puVar11 = (undefined8 *)param_4[0x28];
  if ((undefined8 *)param_4[0x28] == (undefined8 *)0x0) {
    puVar11 = param_4;
  }
  puVar13 = puVar11 + (longlong)*(int *)(param_4 + 0x29) * 4;
  do {
    if (puVar11 == puVar13) {
      return;
    }
    local_b8 = *puVar11;
    local_b0 = puVar11[1];
    local_a8 = (longlong *)puVar11[2];
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
    local_res20[0] = *(float *)(puVar11 + 3);
    local_a0 = local_res20[0];
    cVar9 = FKey::IsGamepadKey(&local_b8);
    if (cVar9 != '\0') {
      FUN_140679df0(param_3,&local_e8,&local_b8);
      if (*(char *)(param_2 + 0x22) == '\0') {
        if (((local_e8 == 1.0) && (local_e4 == 0.0)) && (local_e0 == 0.0)) {
          puVar12 = &local_c8;
          puVar10 = &local_c4;
          local_c8 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 200);
          local_c4 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0xc4);
        }
        else {
          if ((local_e8 != 0.0) ||
             (((local_e4 != 1.0 || (local_e0 != 0.0)) &&
              ((local_e8 != 0.0 || ((local_e4 != -1.0 || (local_e0 != 0.0))))))))
          goto LAB_140acda32;
          puVar12 = &local_c0;
          puVar10 = &local_bc;
          local_c0 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0xd0);
          local_bc = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0xcc);
        }
      }
      else if (((local_e8 == 1.0) && (local_e4 == 0.0)) && (local_e0 == 0.0)) {
        puVar12 = &local_d8;
        puVar10 = &local_d4;
        local_d8 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0xe0);
        local_d4 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0xdc);
      }
      else {
        if ((local_e8 != 0.0) ||
           (((local_e4 != 1.0 || (local_e0 != 0.0)) &&
            ((local_e8 != 0.0 || ((local_e4 != -1.0 || (local_e0 != 0.0)))))))) goto LAB_140acda32;
        puVar12 = &local_d0;
        puVar10 = &local_cc;
        local_d0 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0xe8);
        local_cc = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0xe4);
      }
      local_res20[0] = (float)FUN_140677ab0(local_res20,puVar10,puVar12);
    }
LAB_140acda32:
    if (0.0001 <= ABS(local_res20[0])) {
      FUN_140679e30(param_3,&local_f8,&local_b8);
      cVar9 = FKey::IsGamepadKey(&local_b8);
      if (cVar9 == '\0') {
        cVar9 = FKey::IsMouseButton(&local_b8);
        if (cVar9 == '\0') {
          *(float *)(param_2 + 0x24) = local_f8 + *(float *)(param_2 + 0x24);
          *(float *)(param_2 + 0x28) = local_f4 + *(float *)(param_2 + 0x28);
          *(float *)(param_2 + 0x2c) = local_f0 + *(float *)(param_2 + 0x2c);
        }
        else {
          if (cVar6 != '\0') {
            local_f8 = local_f8 * _DAT_146296538;
            local_f4 = local_f4 * _DAT_14629653c;
            local_f0 = local_f0 * _DAT_146296540;
          }
          *(float *)(param_2 + 0x38) = local_f0 + *(float *)(param_2 + 0x38);
          *(float *)(param_2 + 0x30) = local_f8 * fVar14 + *(float *)(param_2 + 0x30);
          *(float *)(param_2 + 0x34) = local_f4 * fVar14 + *(float *)(param_2 + 0x34);
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x48) = 1;
        if (cVar5 == '\0') {
          local_f8 = local_f8 * _DAT_146296538;
          local_f4 = local_f4 * _DAT_14629653c;
          local_f0 = local_f0 * _DAT_146296540;
        }
        if (cVar4 != '\0') {
          local_f8 = local_f8 * _DAT_146296548;
          local_f4 = local_f4 * _DAT_14629654c;
          local_f0 = local_f0 * _DAT_146296550;
        }
        *(float *)(param_2 + 0x3c) = local_f8 + *(float *)(param_2 + 0x3c);
        *(float *)(param_2 + 0x40) = local_f4 + *(float *)(param_2 + 0x40);
        *(float *)(param_2 + 0x44) = local_f0 + *(float *)(param_2 + 0x44);
      }
    }
    plVar8 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a8)(local_a8);
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
    puVar11 = puVar11 + 4;
  } while( true );
}



// FUNCTION 140acdc30 FUN_140acdc30 body=48 status=ok
// SIG undefined FUN_140acdc30(void)

undefined8 FUN_140acdc30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_140ad6050(param_2,param_3,param_4);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140acdc60 FUN_140acdc60 body=329 status=ok
// SIG undefined FUN_140acdc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140acdc60(longlong param_1,undefined8 *param_2,longlong param_3,char param_4,longlong *param_5,
             char param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_28;
  char local_20;
  
  uVar5 = uRam00000001468b5b78;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar5;
  uVar8 = uRam00000001468b5b8c;
  uVar7 = uRam00000001468b5b88;
  uVar6 = uRam00000001468b5b84;
  lVar11 = 0;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
  *(undefined4 *)(param_2 + 3) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
  uVar8 = uRam00000001468b5b9c;
  uVar7 = uRam00000001468b5b98;
  uVar6 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
  *(undefined4 *)(param_2 + 5) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar8;
  if ((param_3 != 0) && (lVar3 = *(longlong *)(param_3 + 0x848), lVar3 != 0)) {
    lVar10 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_28 = FUN_140c41db0(lVar3);
      if (((local_28 != 0) && (param_6 == '\0')) &&
         (cVar9 = FUN_14122f1b0(local_28,lVar3), cVar9 == '\0')) {
        local_28 = 0;
      }
      local_20 = param_4;
      cVar9 = FUN_140ac8cd0(&local_28,*(undefined8 *)(param_1 + 0x30),param_2);
      if (cVar9 == '\0') {
        cVar9 = FUN_140ac8cd0(&local_28,*(undefined8 *)(param_1 + 0x38),param_2);
        lVar11 = 0;
        if (cVar9 != '\0') {
          lVar11 = *(longlong *)(param_1 + 0x38);
        }
      }
      else {
        lVar11 = *(longlong *)(param_1 + 0x30);
      }
    }
  }
  *param_5 = lVar11;
  if ((lVar11 != 0) && (param_4 == '\0')) {
    fVar1 = *(float *)(param_1 + 0x4c);
    fVar2 = *(float *)(param_1 + 0x48);
    *(float *)(param_2 + 2) = *(float *)(param_1 + 0x44) + *(float *)(param_2 + 2);
    *(float *)((longlong)param_2 + 0x14) = fVar2 + *(float *)((longlong)param_2 + 0x14);
    *(float *)(param_2 + 3) = fVar1 + *(float *)(param_2 + 3);
    *(float *)((longlong)param_2 + 0x1c) = *(float *)((longlong)param_2 + 0x1c) + 0.0;
  }
  return param_2;
}



// FUNCTION 140acddc0 FUN_140acddc0 body=281 status=ok
// SIG undefined FUN_140acddc0(void)

void FUN_140acddc0(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined8 local_20;
  
  if (param_3 == 0) {
    *param_4 = 0;
    return;
  }
  if ((param_2 != 0) && (*(longlong *)(param_3 + 0x460) != 0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar4 = FUN_14148cad0();
    FUN_14238c280(*(undefined8 *)(param_3 + 0x460),&local_28,uVar4);
    plVar1 = local_28 + (int)local_20;
    for (plVar6 = local_28; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        lVar5 = FUN_14148cad0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(longlong *)(lVar2 + 0x8d8) == param_2)) {
          if (local_28 != (longlong *)0x0) {
            FMemory::Free();
          }
          *param_4 = lVar2;
          return;
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  *param_4 = 0;
  return;
}



// FUNCTION 140acdee0 FUN_140acdee0 body=30 status=ok
// SIG undefined FUN_140acdee0(void)

undefined8 FUN_140acdee0(longlong param_1,undefined8 param_2)

{
  FText::FText(param_2,param_1 + 0x50);
  return param_2;
}



// FUNCTION 140acdf10 FUN_140acdf10 body=506 status=ok
// SIG undefined FUN_140acdf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140acdf10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108 [2];
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)(param_1 + -0x660);
  lVar1 = (**(code **)(*plVar4 + 0x148))(plVar4);
  if ((lVar1 != 0) && (param_2 != 0)) {
    local_108[0] = 0;
    FWeakObjectPtr::operator=(&local_118,param_2);
    FWeakObjectPtr::operator=(&local_110,plVar4);
    local_c8 = (longlong *)0x0;
    local_b8 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_e8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_144266c58;
      *(undefined4 *)(puVar2 + 1) = local_118;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_114;
      *(undefined4 *)(puVar2 + 2) = local_110;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_10c;
    }
    local_f8[0] = FUN_140ace970;
    lVar1 = (**(code **)(*plVar4 + 0x148))(plVar4);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_a8 = 0;
    local_a0 = 0;
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_f8);
    local_120 = 0xbf800000;
    local_128 = 0;
    FUN_142880850(uVar3,local_108,&local_a8,0x3f000000);
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (local_b8 != 0) {
      plVar4 = local_e8;
      if (local_c8 != (longlong *)0x0) {
        plVar4 = local_c8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140ace110 FUN_140ace110 body=154 status=ok
// SIG undefined FUN_140ace110(void)

void FUN_140ace110(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xb0) + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140ace179;
  }
  lVar3 = 0;
LAB_140ace179:
  if ((lVar3 == param_2) && (cVar2 = FUN_142ebd930(*(undefined8 *)(param_1 + 0xb0)), cVar2 != '\0'))
  {
    FUN_142eb3990(*(undefined8 *)(param_1 + 0xb0));
  }
  return;
}



// FUNCTION 140ace1b0 FUN_140ace1b0 body=76 status=ok
// SIG undefined FUN_140ace1b0(void)

void FUN_140ace1b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    FUN_1412f3c00(param_2,0);
  }
  local_18 = param_1 + -0x660;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 8,&local_18)
  ;
  return;
}



// FUNCTION 140ace200 FUN_140ace200 body=1021 status=ok
// SIG undefined FUN_140ace200(void)

/* WARNING: Removing unreachable block (ram,0x000140ace2b0) */

void FUN_140ace200(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  longlong *local_48;
  int local_40;
  longlong *local_38;
  int local_30;
  code *local_28;
  ulonglong uStack_20;
  
  uVar4 = FUN_14290f330();
  AActor::GetComponentsByClass(param_1,&local_38,uVar4);
  uVar4 = FUN_142a07000();
  AActor::GetComponentsByClass(param_1,&local_48,uVar4);
  pwVar9 = (wchar_t *)0x0;
  plVar1 = local_38 + local_30;
  for (plVar8 = local_38; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    pwVar7 = (wchar_t *)*plVar8;
    if (*(longlong *)(pwVar7 + 0xc) == *(longlong *)(param_1 + 0x5d0)) {
      lVar5 = FUN_14290f330();
      if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
          != lVar5 + 0x88)) {
        *(undefined8 *)(param_1 + 0x590) = 0;
      }
      else {
        *(wchar_t **)(param_1 + 0x590) = pwVar7;
      }
    }
    else if (*(longlong *)(pwVar7 + 0xc) == *(longlong *)(param_1 + 0x5d8)) {
      lVar5 = FUN_14290f330();
      if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
          != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        pwVar7 = pwVar9;
      }
      *(wchar_t **)(param_1 + 0x598) = pwVar7;
    }
  }
  plVar1 = local_48 + local_40;
  for (plVar8 = local_48; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    pwVar7 = (wchar_t *)*plVar8;
    if (*(longlong *)(pwVar7 + 0xc) == *(longlong *)(param_1 + 0x5e0)) {
      lVar5 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
          != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        pwVar7 = pwVar9;
      }
      *(wchar_t **)(param_1 + 0x5a0) = pwVar7;
    }
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_140ae9060;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ABoundaryTurret::WarningTrigger_OnBeginOverlap",L"::")
    ;
    pwVar7 = pwVar9;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x590) + 0x570,param_1,&local_28,local_res8);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_140ae9260;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ABoundaryTurret::WarningTrigger_OnEndOverlap",L"::");
    pwVar7 = pwVar9;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x590) + 0x580,param_1,&local_28,local_res8);
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_140adaf90;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ABoundaryTurret::KillTrigger_OnBeginOverlap",L"::");
    pwVar7 = pwVar9;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x598) + 0x570,param_1,&local_28,local_res8);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = AK::MemoryMgr::StartProfileThreadUsage;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ABoundaryTurret::KillTrigger_OnEndOverlap",L"::");
    while (pwVar6 = pwVar7, pwVar6 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar9 = pwVar6;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x598) + 0x580,param_1,&local_28,local_res8);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ace600 FUN_140ace600 body=176 status=ok
// SIG undefined FUN_140ace600(void)

void FUN_140ace600(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = 0;
  piVar5 = *(int **)(param_1 + 0x1b0);
  uVar4 = (longlong)*(int *)(param_1 + 0x1b8) & 0x3fffffffffffffff;
  if (piVar5 + *(int *)(param_1 + 0x1b8) < piVar5) {
    uVar4 = uVar3;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x19c) = 0;
    return;
  }
  uVar6 = uVar3;
  uVar7 = uVar3;
  do {
    iVar2 = *(int *)((longlong)*piVar5 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x188));
    if ((iVar2 == 1) || (iVar2 == 0xb)) {
      uVar3 = (ulonglong)((int)uVar3 + 1);
      iVar2 = 0xb;
    }
    piVar5 = piVar5 + 1;
    uVar1 = iVar2 + (int)uVar7;
    uVar6 = uVar6 + 1;
    uVar7 = (ulonglong)uVar1;
  } while (uVar6 != uVar4);
  for (; (0x15 < (int)uVar1 && (0 < (int)uVar3)); uVar3 = (ulonglong)((int)uVar3 - 1)) {
    uVar1 = uVar1 - 10;
  }
  *(uint *)(param_1 + 0x19c) = uVar1;
  return;
}



// FUNCTION 140ace6b0 FUN_140ace6b0 body=275 status=ok
// SIG undefined FUN_140ace6b0(void)

void FUN_140ace6b0(longlong param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  
  dVar3 = (double)param_2 * 10000000.0 + 0.5;
  uVar7 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (0.0 <= dVar3) {
    lVar6 = (longlong)dVar3;
    if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar3)) {
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar3;
      auVar2._12_4_ = uVar7;
      uVar4 = movmskpd(0,auVar2);
      dVar3 = (double)(longlong)(lVar6 - (ulonglong)(uVar4 & 1));
    }
  }
  else {
    lVar6 = (longlong)dVar3;
    if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar3)) {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = uVar7;
      uVar4 = movmskpd(0,auVar1);
      dVar3 = (double)(longlong)(lVar6 + (ulonglong)(uVar4 & 1 ^ 1));
    }
  }
  plVar5 = (longlong *)FDateTime::UtcNow(local_res8);
  lVar6 = *plVar5;
  plVar5 = (longlong *)FDateTime::FDateTime(local_res8,0x7b2,1,1,0,0,0,0);
  lVar6 = ((longlong)dVar3 + lVar6) - *plVar5;
  lVar6 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar6),8) + lVar6;
  *(longlong *)(param_1 + 0xc18) = (lVar6 >> 0x17) - (lVar6 >> 0x3f);
  return;
}



// FUNCTION 140ace830 FUN_140ace830 body=101 status=ok
// SIG undefined FUN_140ace830(void)

void FUN_140ace830(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1425a2750(uVar1,DAT_146868160,*(undefined4 *)(*(longlong *)*param_1 + 0x620));
  FUN_1425a2750(uVar1,DAT_146868170,*(undefined4 *)param_1[1]);
  FUN_1425a2750(uVar1,DAT_146868180,*(undefined4 *)param_1[2]);
  return;
}



// FUNCTION 140ace8d0 FUN_140ace8d0 body=47 status=ok
// SIG undefined FUN_140ace8d0(void)

void FUN_140ace8d0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_res10 [3];
  
  local_res10[0] = *param_1;
  if (*param_3 != local_res10[0]) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*param_3 + 0x1210,local_res10);
  }
  return;
}



// FUNCTION 140ace920 FUN_140ace920 body=47 status=ok
// SIG undefined FUN_140ace920(void)

void FUN_140ace920(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_res10 [3];
  
  local_res10[0] = *param_1;
  if (*param_3 != local_res10[0]) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*param_3 + 0x1150,local_res10);
  }
  return;
}



// FUNCTION 140ace970 FUN_140ace970 body=82 status=ok
// SIG undefined FUN_140ace970(void)

void FUN_140ace970(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid();
  if ((cVar3 != '\0') && (cVar3 = FWeakObjectPtr::IsValid(param_1 + 8), cVar3 != '\0')) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_14145da30(uVar2,lVar1 + 0x6c8);
  }
  return;
}



// FUNCTION 140ace9d0 FUN_140ace9d0 body=47 status=ok
// SIG undefined FUN_140ace9d0(void)

void FUN_140ace9d0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_res10 [3];
  
  local_res10[0] = *param_1;
  if (*param_3 != local_res10[0]) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*param_3 + 0x11a0,local_res10);
  }
  return;
}



// FUNCTION 140acea00 FUN_140acea00 body=47 status=ok
// SIG undefined FUN_140acea00(void)

void FUN_140acea00(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_res10 [3];
  
  local_res10[0] = *param_1;
  if (*param_3 != local_res10[0]) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*param_3 + 0x1240,local_res10);
  }
  return;
}



// FUNCTION 140acea50 FUN_140acea50 body=298 status=ok
// SIG undefined FUN_140acea50(void)

void FUN_140acea50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  
  cVar2 = *(char *)(param_1 + 0x4fb);
  bVar9 = cVar2 == '\x02';
  if ((bVar9) && (*(char *)(param_1 + 0x4fd) == '\x01')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  plVar7 = *(longlong **)(param_1 + 0x638);
  plVar1 = plVar7 + *(int *)(param_1 + 0x640);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      lVar6 = FUN_1412f6630();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (bVar9 != (bool)*(char *)(lVar3 + 0x4e9)) {
          if (cVar2 == '\x02') {
            FUN_1412f8f90();
          }
          else {
            FUN_1412f8f50(lVar3);
          }
        }
        if ((bVar5) && (cVar2 == '\x02')) {
          cVar8 = '\x01';
        }
        else {
          cVar8 = '\0';
        }
        if (cVar8 != *(char *)(lVar3 + 0x4e8)) {
          if (cVar8 == '\0') {
            FUN_1412f8e70(lVar3);
          }
          else {
            FUN_1412f8eb0();
          }
        }
        *(bool *)(lVar3 + 0x4e9) = bVar9;
        *(char *)(lVar3 + 0x4e8) = cVar8;
      }
    }
  }
  return;
}



// FUNCTION 140aceb80 FUN_140aceb80 body=132 status=ok
// SIG undefined FUN_140aceb80(void)

undefined8 FUN_140aceb80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x718);
  plVar1 = plVar4 + *(int *)(param_1 + 0x720);
  while( true ) {
    if (plVar4 == plVar1) {
      return 0;
    }
    plVar2 = *(longlong **)(param_1 + 0x5e0);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x438))(plVar2,*(undefined8 *)(*plVar4 + 0x2c70),0),
       cVar3 != '\0')) break;
    plVar4 = plVar4 + 1;
  }
  return 1;
}



// FUNCTION 140acec10 FUN_140acec10 body=20 status=ok
// SIG undefined FUN_140acec10(void)

void FUN_140acec10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    return;
  }
  FUN_140cef470(param_2,param_3);
  return;
}



// FUNCTION 140acec30 FUN_140acec30 body=11 status=ok
// SIG undefined FUN_140acec30(void)

bool FUN_140acec30(longlong param_1)

{
  return *(int *)(param_1 + 0x198) != 2;
}



// FUNCTION 140acec40 FUN_140acec40 body=11 status=ok
// SIG undefined FUN_140acec40(void)

bool FUN_140acec40(longlong param_1)

{
  return *(int *)(param_1 + 0x198) == 1;
}



// FUNCTION 140acec50 FUN_140acec50 body=65 status=ok
// SIG undefined FUN_140acec50(void)

void FUN_140acec50(longlong param_1)

{
  longlong *plVar1;
  
  AActor::SetActorTickEnabled(param_1,0);
  plVar1 = (longlong *)FUN_140ad5d40(param_1,param_1 + 0x468);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140acec84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x290))(plVar1,0,0);
    return;
  }
  return;
}



// FUNCTION 140aceca0 FUN_140aceca0 body=233 status=ok
// SIG undefined FUN_140aceca0(void)

void FUN_140aceca0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_28 [32];
  
  (**(code **)(*param_1 + 0x260))();
  uVar6 = FUN_1404b03b0();
  lVar7 = FText::FText(local_28,uVar6);
  *(undefined1 *)(param_1 + 0x21d) = 0;
  param_1[0x21e] = 0;
  FText::operator=(param_1 + 0x21f,lVar7);
  plVar4 = *(longlong **)(lVar7 + 8);
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
  lVar7 = param_1[0x23];
  if (lVar7 != 0) {
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_140c5bd00(lVar7,(char)param_1[0x21d]);
    }
  }
  return;
}



// FUNCTION 140aced90 FUN_140aced90 body=210 status=ok
// SIG undefined FUN_140aced90(void)

void FUN_140aced90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0x94] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0x94);
      param_1[0x94] = 0;
    }
  }
  if (param_1[0x95] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_1 + 0x95);
      param_1[0x95] = 0;
    }
  }
  param_1[0x96] = 0;
  return;
}



// FUNCTION 140acee70 FUN_140acee70 body=160 status=ok
// SIG undefined FUN_140acee70(void)

void FUN_140acee70(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x1320) == 0) {
    *(undefined8 *)(param_1 + 0x1320) = 0;
    return;
  }
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UFightForYourLifeComponent::SecondWindTargetDied",L"::")
  ;
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove
            (*(longlong *)(param_1 + 0x1320) + 600,param_1,local_res8);
  *(undefined8 *)(param_1 + 0x1320) = 0;
  return;
}



// FUNCTION 140acef10 FUN_140acef10 body=1246 status=ok
// SIG undefined FUN_140acef10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140acef10(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 *_Src;
  undefined1 *_Src_00;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_4a8 [32];
  byte local_488;
  longlong *local_480;
  longlong *local_478;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_444;
  undefined4 local_43c;
  undefined1 local_438 [192];
  undefined1 *local_378;
  int local_370;
  int local_36c;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined8 local_32c;
  undefined8 uStack_324;
  undefined8 local_31c;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  undefined1 local_2d8 [192];
  undefined1 *local_218;
  int local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined1 local_1a8 [240];
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  iVar6 = (int)param_3[1];
  local_488 = 0;
  if (iVar1 < iVar2) {
    if (iVar6 != 0) {
      plVar9 = (longlong *)(*param_3 + 0xf0);
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 0x2b;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar1 = *(int *)((longlong)param_3 + 0xc);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (iVar1 != iVar2) {
      TArray<FPoly,FDefaultAllocator>::ResizeTo(param_3,iVar2);
    }
  }
  else {
    if (iVar6 != 0) {
      plVar9 = (longlong *)(*param_3 + 0xf0);
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 0x2b;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_3 + 1) = 0;
  }
  plVar9 = *(longlong **)(param_1 + 8);
  local_478 = plVar9 + (longlong)*(int *)(param_1 + 0x10) * 2;
  if (plVar9 == local_478) {
    uVar3 = (ulonglong)local_478 & 0xffffffffffffff00;
  }
  else {
    do {
      local_468 = *param_2;
      local_460 = *(undefined4 *)(param_2 + 1);
      local_370 = *(int *)(param_2 + 0x1f);
      lVar7 = (longlong)local_370;
      _Src = (undefined8 *)param_2[0x1e];
      local_45c = *(undefined8 *)((longlong)param_2 + 0xc);
      local_454 = *(undefined4 *)((longlong)param_2 + 0x14);
      local_450 = param_2[3];
      local_448 = *(undefined4 *)(param_2 + 4);
      local_444 = *(undefined8 *)((longlong)param_2 + 0x24);
      local_43c = *(undefined4 *)((longlong)param_2 + 0x2c);
      local_378 = (undefined1 *)0x0;
      local_480 = plVar9;
      if (local_370 == 0) {
        local_36c = 0;
      }
      else {
        TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeForCopy
                  (local_438,local_370,0);
        if (_Src == (undefined8 *)0x0) {
          _Src = param_2 + 6;
        }
        puVar4 = local_438;
        if (local_378 != (undefined1 *)0x0) {
          puVar4 = local_378;
        }
        _guard_xfg_dispatch_icall_nop(puVar4,_Src,lVar7 * 0xc);
      }
      local_368 = *(undefined4 *)(param_2 + 0x20);
      local_330 = *(undefined4 *)(param_2 + 0x27);
      lVar7 = *plVar9;
      local_32c = *(undefined8 *)((longlong)param_2 + 0x13c);
      uStack_324 = *(undefined8 *)((longlong)param_2 + 0x144);
      local_360 = param_2[0x21];
      local_358 = param_2[0x22];
      local_350 = param_2[0x23];
      local_348 = param_2[0x24];
      local_340 = *(undefined4 *)(param_2 + 0x25);
      local_33c = *(undefined4 *)((longlong)param_2 + 300);
      lVar10 = (longlong)(int)plVar9[1] * 0x10 + lVar7;
      local_338 = *(undefined4 *)(param_2 + 0x26);
      local_31c = *(undefined8 *)((longlong)param_2 + 0x14c);
      local_334 = *(undefined4 *)((longlong)param_2 + 0x134);
      for (; lVar7 != lVar10; lVar7 = lVar7 + 0x10) {
        FPoly::FPoly(local_1a8);
        FPoly::FPoly(&local_308);
        FPoly::Init(local_1a8);
        FPoly::Init(&local_308);
        iVar2 = FUN_142718e60(&local_468,lVar7,local_1a8,&local_308);
        puVar4 = local_218;
        if (iVar2 == 1) {
          bVar5 = 1;
          local_488 = 1;
          if (local_218 != (undefined1 *)0x0) {
            FMemory::Free();
          }
          plVar9 = local_480;
          if (local_b8 != 0) {
            FMemory::Free();
            plVar9 = local_480;
          }
          goto LAB_140acf397;
        }
        if (iVar2 == 3) {
          lVar8 = (longlong)local_210;
          local_468 = local_308;
          local_460 = local_300;
          local_45c = local_2fc;
          local_454 = local_2f4;
          local_450 = local_2f0;
          local_448 = local_2e8;
          local_444 = local_2e4;
          local_488 = 1;
          local_43c = local_2dc;
          local_370 = local_210;
          if ((local_210 == 0) && (local_36c == 0)) {
            local_36c = 0;
          }
          else {
            TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeForCopy
                      (local_438,local_210);
            _Src_00 = local_2d8;
            if (puVar4 != (undefined1 *)0x0) {
              _Src_00 = puVar4;
            }
            puVar4 = local_438;
            if (local_378 != (undefined1 *)0x0) {
              puVar4 = local_378;
            }
            _guard_xfg_dispatch_icall_nop(puVar4,_Src_00,lVar8 * 0xc);
          }
          local_368 = local_208;
          local_360 = local_200;
          local_358 = local_1f8;
          local_350 = local_1f0;
          local_348 = local_1e8;
          local_340 = local_1e0;
          local_33c = local_1dc;
          local_330 = local_1d0;
          local_338 = local_1d8;
          local_334 = local_1d4;
          local_32c = local_1cc;
          uStack_324 = uStack_1c4;
          local_31c = local_1bc;
        }
        if (local_218 != (undefined1 *)0x0) {
          FMemory::Free(local_218);
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
        plVar9 = local_480;
      }
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<FPoly,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      FUN_140ac6c80((longlong)iVar2 * 0x158 + *param_3,&local_468);
      bVar5 = local_488;
LAB_140acf397:
      if (local_378 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != local_478);
    uVar3 = (ulonglong)bVar5;
  }
  return uVar3;
}



// FUNCTION 140acf3f0 FUN_140acf3f0 body=46 status=ok
// SIG undefined FUN_140acf3f0(void)

void FUN_140acf3f0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x750))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140acf411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x758))(param_1);
    return;
  }
  return;
}



// FUNCTION 140acf420 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140acf4d0 FUN_140acf4d0 body=1085 status=ok
// SIG undefined FUN_140acf4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140acf4d0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  if (param_2 != (longlong *)0x0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
    if (param_2[0x55c] != 0) {
      FUN_1409bd140();
    }
    lVar2 = FUN_140c428a0(param_2);
    FUN_140ac8620(param_2 + 0x5a6,lVar2);
    lVar6 = *(longlong *)(lVar2 + 0xb0);
    lVar7 = (longlong)*(int *)(lVar2 + 0xb8) * 0x40 + lVar6;
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
      FUN_140e948e0(lVar2,*(undefined8 *)(lVar6 + 0x20),1,0);
    }
    FUN_140ac8970(param_2 + 0x5c3,param_2 + 0x2a3);
    iVar5 = 0;
    if (0 < (int)param_2[0x2a4]) {
      do {
        local_d8 = CONCAT31(local_d8._1_3_,1);
        FUN_140c57820(param_2,0,0,1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_2[0x2a4]);
    }
    FUN_140e75d40(param_2 + 0x2a3,0);
    lVar6 = FUN_140c430a0(param_2,3);
    if (lVar6 == 0) {
      FUN_1417846f0(param_2,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_a8[0] = 0;
      uVar3 = ANavLinkProxy::GetPrivateStaticClass();
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      lVar6 = FUN_1417985e0(uVar3,param_2,0,0);
      *(undefined1 *)(lVar6 + 0x368) = 0;
      FUN_14234b150(lVar6);
      uVar3 = FUN_140c41f70(param_2);
      FUN_140b3dd10(lVar6,uVar3);
      lVar2 = FUN_140c430a0(param_2,0);
      if (lVar2 != 0) {
        FUN_1407af220(lVar6 + 0x2c0,lVar2 + 0x2c0);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x2d8,lVar2 + 0x2d8);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x2e8,lVar2 + 0x2e8);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x2f8,lVar2 + 0x2f8);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x308,lVar2 + 0x308);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x318,lVar2 + 0x318);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x328,lVar2 + 0x328);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x338,lVar2 + 0x338);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x348,lVar2 + 0x348);
        TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar6 + 0x358,lVar2 + 0x358);
        FUN_14246d9c0(local_a8,lVar2 + 0x2a4);
        FUN_14246fd60(lVar6 + 0x2a4,local_a8);
        thunk_FUN_142478640(local_a8);
      }
    }
    lVar6 = (**(code **)(*param_2 + 0x670))(param_2);
    if (lVar6 != 0) {
      lVar2 = FUN_14145f370();
      iVar5 = *(int *)(lVar2 + 0x90);
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar5) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar5 * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(lVar6 + 0xc78) != 0)) {
        FUN_140e48b60(*(longlong *)(lVar6 + 0xc78),CONCAT71((int7)(int3)((uint)iVar5 >> 8),1));
      }
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_1441bfda8;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_140ae22c0;
      plVar4[3] = (longlong)param_2;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar6;
      *plVar4 = (longlong)&PTR_FUN_1441bfdf0;
    }
    uVar3 = AActor::GetWorldTimerManager(param_1);
    local_98 = 0;
    local_90 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_d0 = CONCAT44(local_d0._4_4_,0xbf800000);
    local_d8 = local_d8 & 0xffffff00;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x6a8,&local_98,0x3f800000);
    if (local_38 != 0) {
      plVar8 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar8 = local_48;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar6 = FMemory::Realloc(plVar4,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  return;
}



// FUNCTION 140acf910 FUN_140acf910 body=111 status=ok
// SIG undefined FUN_140acf910(void)

undefined8 * FUN_140acf910(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144266c70;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140acf980 CopyToEmptyStorage body=80 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_9b263b0d366e836c10dc01844bab891f>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144266c58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140acf9d0 FUN_140acf9d0 body=277 status=ok
// SIG undefined FUN_140acf9d0(void)

void FUN_140acf9d0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_18;
  int local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && (param_1[0xb6] != 0)) {
    lVar4 = FUN_1412d7880();
    lVar3 = param_1[0xb6];
    lVar7 = lVar3;
    if (lVar3 != 0) {
      while (lVar7 != lVar4) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPlayerControllerIterator(uVar5,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          plVar6 = (longlong *)FWeakObjectPtr::Get();
          if (plVar6 != (longlong *)0x0) {
            lVar3 = FUN_14145f370();
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && (cVar2 = (**(code **)(*plVar6 + 0x768))(), cVar2 != '\0')) {
              FUN_140acfe90(param_1,plVar6);
            }
          }
          local_10 = local_10 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140acfaf0 FUN_140acfaf0 body=914 status=ok
// SIG undefined FUN_140acfaf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140acfaf0(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar31 [16];
  
  fVar29 = *(float *)(param_1 + 0x514) * 280.0;
  auVar31 = *(undefined1 (*) [16])(param_2 + 0x230);
  fVar4 = auVar31._0_4_;
  fVar5 = auVar31._4_4_;
  fVar6 = auVar31._8_4_;
  fVar7 = *(float *)(param_2 + 0x210);
  fVar8 = *(float *)(param_2 + 0x214);
  fVar9 = *(float *)(param_2 + 0x218);
  fVar10 = *(float *)(param_2 + 0x21c);
  fVar11 = *(float *)(param_2 + 0x220);
  fVar12 = *(float *)(param_2 + 0x224);
  fVar13 = *(float *)(param_2 + 0x228);
  iVar2 = *(int *)(param_3 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < iVar2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_4);
  }
  iVar2 = *(int *)(param_3 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) <
      iVar2 / 3 + (iVar2 >> 0x1f) +
      (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_5);
  }
  if ((param_6 != (longlong *)0x0) &&
     (iVar2 = *(int *)(param_3 + 1), *(undefined4 *)(param_6 + 1) = 0,
     *(int *)((longlong)param_6 + 0xc) < iVar2)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_6);
  }
  pfVar18 = (float *)*param_3;
  pfVar1 = pfVar18 + (longlong)*(int *)(param_3 + 1) * 3;
  if (pfVar18 != pfVar1) {
    auVar31 = rcpps(unaff_XMM9,auVar31);
    fVar30 = auVar31._0_4_;
    fVar32 = auVar31._4_4_;
    fVar33 = auVar31._8_4_;
    fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar4;
    fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar5;
    fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar6;
    fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar4;
    fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar5;
    fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar6;
    do {
      pfVar3 = (float *)*param_4;
      fVar22 = fVar7 * _DAT_146867d10;
      fVar23 = fVar8 * fRam0000000146867d14;
      fVar24 = fVar9 * fRam0000000146867d18;
      fVar25 = fVar10 * fRam0000000146867d1c;
      iVar2 = (int)param_4[1];
      lVar17 = (longlong)iVar2;
      fVar26 = (float)((uint)(*pfVar18 - fVar11) & _DAT_146867c50);
      fVar27 = (float)((uint)(pfVar18[1] - fVar12) & uRam0000000146867c54);
      fVar28 = (float)((uint)(pfVar18[2] - fVar13) & uRam0000000146867c58);
      fVar19 = fVar28 * fVar23 - fVar27 * fVar24;
      fVar20 = fVar26 * fVar24 - fVar28 * fVar22;
      fVar21 = fVar27 * fVar22 - fVar26 * fVar23;
      fVar19 = fVar19 + fVar19;
      fVar20 = fVar20 + fVar20;
      fVar21 = fVar21 + fVar21;
      fVar26 = ((fVar21 * fVar23 - fVar20 * fVar24) + fVar25 * fVar19 + fVar26) *
               (float)(-(uint)((float)((uint)fVar4 & _DAT_146867cd0) <= _DAT_146867d00) &
                       (uint)fVar30 ^ (uint)fVar30);
      fVar24 = ((fVar19 * fVar24 - fVar21 * fVar22) + fVar25 * fVar20 + fVar27) *
               (float)(-(uint)((float)((uint)fVar5 & uRam0000000146867cd4) <= fRam0000000146867d04)
                       & (uint)fVar32 ^ (uint)fVar32);
      fVar19 = ((fVar20 * fVar22 - fVar19 * fVar23) + fVar25 * fVar21 + fVar28) *
               (float)(-(uint)((float)((uint)fVar6 & uRam0000000146867cd8) <= fRam0000000146867d08)
                       & (uint)fVar33 ^ (uint)fVar33);
      for (pfVar14 = pfVar3; pfVar14 != pfVar3 + lVar17 * 3; pfVar14 = pfVar14 + 3) {
        if (((fVar26 == *pfVar14) && (fVar24 == pfVar14[1])) && (fVar19 == pfVar14[2])) {
          lVar15 = ((longlong)pfVar14 - (longlong)pfVar3) / 6 +
                   ((longlong)pfVar14 - (longlong)pfVar3 >> 0x3f);
          iVar16 = (int)(lVar15 >> 1) - (int)(lVar15 >> 0x3f);
          goto LAB_140acfd53;
        }
      }
      iVar16 = -1;
LAB_140acfd53:
      if (iVar16 == -1) {
        *(int *)(param_4 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar2 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar2);
        }
        lVar15 = *param_4;
        *(ulonglong *)(lVar15 + lVar17 * 0xc) = CONCAT44(fVar24,fVar26);
        *(float *)(lVar15 + 8 + lVar17 * 0xc) = fVar19;
        iVar16 = iVar2;
        if (param_6 != (longlong *)0x0) {
          iVar2 = (int)param_6[1];
          *(int *)(param_6 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_6 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_6,iVar2);
          }
          lVar17 = *param_6;
          *(float *)(lVar17 + (longlong)iVar2 * 8) = (fVar26 + fVar29) * (0.5 / fVar29);
          *(float *)(lVar17 + 4 + (longlong)iVar2 * 8) = (fVar24 + fVar29) * (0.5 / fVar29);
        }
      }
      iVar2 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
      }
      pfVar18 = pfVar18 + 3;
      *(int *)(*param_5 + (longlong)iVar2 * 4) = iVar16;
    } while (pfVar18 != pfVar1);
  }
  return;
}



// FUNCTION 140acfe90 FUN_140acfe90 body=919 status=ok
// SIG undefined FUN_140acfe90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140acfe90(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [40];
  undefined1 local_80;
  ushort local_7e;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_1[0xb6] == 0) {
    return;
  }
  lVar6 = FUN_1412d7880();
  lVar7 = param_1[0xb6];
  while( true ) {
    if (lVar7 == 0) {
      return;
    }
    if (lVar7 == lVar6) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  }
  if (param_1[0xb6] == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  plVar1 = param_1 + 199;
  plVar12 = (longlong *)*plVar1;
  plVar11 = plVar12 + (int)param_1[200];
  for (; plVar12 != plVar11; plVar12 = plVar12 + 1) {
    if ((*plVar12 != 0) && (*(longlong *)(*plVar12 + 0x4d8) == param_2)) {
      return;
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop
                       (L"&AAdvancedInteractiveObject::HandleActorDestroyed",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_b0,pwVar4 + 2,1);
    plVar11 = (longlong *)(param_2 + 0x290);
    FWeakObjectPtr::operator=(&local_c8,0);
    local_c0 = 0;
    FWeakObjectPtr::operator=(&local_c8,param_1);
    local_c0 = local_b0;
    local_b8 = 0;
    if ((local_b0 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_c8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_c0);
    }
    piVar13 = (int *)*plVar11;
    iVar2 = *(int *)(param_2 + 0x298);
    for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar2 * 4; piVar14 = piVar14 + 4) {
      if ((((*piVar14 == local_c8) && (piVar14[1] == local_c4)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_c8), cVar5 == '\0')))) &&
         (*(longlong *)(piVar14 + 2) == local_c0)) {
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140ad00b1;
        break;
      }
    }
    iVar2 = *(int *)(param_2 + 0x298);
    *(int *)(param_2 + 0x298) = iVar2 + 1;
    if (*(int *)(param_2 + 0x29c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
    }
    piVar13 = (int *)((longlong)iVar2 * 0x10 + *plVar11);
    *piVar13 = local_c8;
    piVar13[1] = local_c4;
    *(longlong *)(piVar13 + 2) = local_c0;
LAB_140ad00b1:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    FActorSpawnParameters::FActorSpawnParameters(local_a8);
    lVar7 = param_1[0x2d];
    local_7e = local_7e | 2;
    local_80 = 1;
    if (lVar7 == 0) {
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = _DAT_146867c40 & _DAT_146867c50;
      uStack_54 = uRam0000000146867c44 & uRam0000000146867c54;
      uStack_50 = uRam0000000146867c48 & uRam0000000146867c58;
      uStack_4c = uRam0000000146867c4c & uRam0000000146867c5c;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = uRam0000000146867c4c;
    }
    else {
      local_78 = *(undefined4 *)(lVar7 + 0x210);
      uStack_74 = *(undefined4 *)(lVar7 + 0x214);
      uStack_70 = *(undefined4 *)(lVar7 + 0x218);
      local_68 = *(undefined4 *)(lVar7 + 0x220);
      uStack_64 = *(undefined4 *)(lVar7 + 0x224);
      uStack_60 = *(undefined4 *)(lVar7 + 0x228);
      uStack_5c = *(undefined4 *)(lVar7 + 0x22c);
      local_58 = *(uint *)(lVar7 + 0x230);
      uStack_54 = *(uint *)(lVar7 + 0x234);
      uStack_50 = *(uint *)(lVar7 + 0x238);
      uStack_4c = *(uint *)(lVar7 + 0x23c);
      uStack_6c = *(uint *)(lVar7 + 0x21c);
    }
    if (param_1[0xb6] != 0) {
      lVar9 = FUN_1412d7880();
      lVar7 = param_1[0xb6];
      for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar9) goto LAB_140ad0156;
      }
    }
    lVar7 = 0;
LAB_140ad0156:
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar11 = (longlong *)FUN_142550d00(uVar10,lVar7,&local_78,local_a8);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x700))(plVar11,param_1);
      (**(code **)(*plVar11 + 0x6f8))(plVar11,param_2);
      plVar11[0x11] = param_1[0x11];
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_1428daf80(uVar10,plVar11,0);
      iVar2 = (int)param_1[200];
      *(int *)(param_1 + 200) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x644) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = plVar11;
      (**(code **)(*param_1 + 0x790))(param_1,plVar11);
    }
  }
  return;
}



// FUNCTION 140ad0230 FUN_140ad0230 body=149 status=ok
// SIG undefined FUN_140ad0230(void)

void FUN_140ad0230(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x638);
  uVar2 = (longlong)*(int *)(param_1 + 0x640) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x640) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142227350(*plVar1,0,1);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x640) = 0;
  if (*(int *)(param_1 + 0x644) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x638),0);
  }
  return;
}



// FUNCTION 140ad02d0 FUN_140ad02d0 body=195 status=ok
// SIG undefined FUN_140ad02d0(void)

void FUN_140ad02d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    (**(code **)(param_1[0x8e] + 0x10))();
  }
  FUN_142227880(param_1);
  FUN_140ad8180(param_1);
  uVar4 = 0;
  plVar2 = (longlong *)param_1[199];
  uVar3 = (longlong)(int)param_1[200] & 0x1fffffffffffffff;
  if (plVar2 + (int)param_1[200] < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FUN_142227350(*plVar2,0,1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)((longlong)param_1 + 0x644) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 199,0);
  }
  return;
}



// FUNCTION 140ad03a0 FUN_140ad03a0 body=665 status=ok
// SIG undefined FUN_140ad03a0(void)

void FUN_140ad03a0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = AActor::GetWorldTimerManager();
  if (param_1 != (longlong *)0x0) {
    FUN_1428800b0(uVar3,param_1);
  }
  lVar9 = 0;
  if (param_1[0xc1] == 0) goto LAB_140ad0519;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_142f6c9f0(uVar3);
  if (lVar4 == 0) goto LAB_140ad0519;
  lVar5 = UWebSocketNetDriver::StaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140ad0519;
  lVar5 = param_1[0xc1];
  lVar8 = lVar5 + 0x130;
  lVar6 = FWeakObjectPtr::Get(lVar8);
  lVar7 = lVar9;
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar5 + 0x138)) && (*(longlong *)(lVar5 + 0x140) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar8,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar5 + 0x138) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar8);
      if (lVar6 != 0) goto LAB_140ad04b5;
    }
  }
  else {
LAB_140ad04b5:
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar8 = FUN_142f71d80();
      lVar5 = lVar6;
      do {
        lVar7 = lVar6;
        if (lVar5 == lVar8) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar7 = lVar9;
      } while (lVar5 != 0);
    }
  }
  FUN_142f6cbf0(lVar4,lVar7);
LAB_140ad0519:
  plVar1 = (longlong *)param_1[0xc5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    param_1[0xc5] = 0;
  }
  plVar1 = (longlong *)param_1[0xc2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x310))(plVar1,1);
  }
  plVar1 = (longlong *)param_1[0xc4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    param_1[0xc4] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x644) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x664)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xcb,0);
  }
  *(undefined4 *)(param_1 + 0xce) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x674)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xcd,0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x684)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xcf,0);
  }
  *(undefined4 *)(param_1 + 0xd3) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x69c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xd2,0);
  }
  lVar9 = param_1[0xc0];
  if (lVar9 != 0) {
    uVar3 = AActor::GetWorldTimerManager(lVar9);
    if (lVar9 != 0) {
      FUN_1428800b0(uVar3,lVar9);
    }
    *(undefined4 *)(lVar9 + 0xc28) = 0;
    *(undefined1 *)(lVar9 + 0xbd0) = 0xff;
    *(undefined8 *)(lVar9 + 0xbd8) = 0;
    *(undefined8 *)(lVar9 + 0xbe0) = 0;
    FUN_140ae5960(lVar9);
    *(undefined1 *)(param_1[0xc0] + 3000) = 0;
  }
  return;
}



// FUNCTION 140ad0640 FUN_140ad0640 body=322 status=ok
// SIG undefined FUN_140ad0640(void)

void FUN_140ad0640(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)(lVar4 + 0x2c70);
      goto LAB_140ad069a;
    }
  }
  lVar4 = 0;
LAB_140ad069a:
  if (lVar4 != 0) {
    lVar4 = FUN_140cff1b0();
    if (lVar4 != 0) {
      if ((byte)(*(char *)(param_1 + 0x10e8) - 1U) < 2) {
        uVar6 = FText::FText(local_28,param_1 + 0x3f8);
        FUN_140c70250(lVar4,*(undefined8 *)(param_1 + 0x3f0),uVar6,*(undefined4 *)(param_1 + 0x410),
                      0,0);
        return;
      }
      if (*(char *)(param_1 + 0x10e8) == '\x06') {
        uVar1 = *(undefined4 *)(param_1 + 0x410);
        if (*(longlong *)(param_1 + 0x10f0) == 0) {
          uVar5 = FText::FText(local_28,param_1 + 0x10f8);
          uVar6 = *(undefined8 *)(param_1 + 0x3f0);
        }
        else {
          uVar5 = FText::FText(local_28,param_1 + 0x10f8);
          uVar6 = *(undefined8 *)(param_1 + 0x10f0);
        }
        FUN_140c70250(lVar4,uVar6,uVar5,uVar1,0,0);
      }
    }
  }
  return;
}



// FUNCTION 140ad0790 FUN_140ad0790 body=304 status=ok
// SIG undefined FUN_140ad0790(void)

void FUN_140ad0790(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_38 [32];
  
  plVar9 = *(longlong **)(param_1 + 0x470);
  plVar1 = plVar9 + *(int *)(param_1 + 0x478);
  if (plVar9 != plVar1) {
    plVar8 = (longlong *)0x0;
    do {
      plVar7 = plVar8;
      plVar10 = plVar8;
      if (((longlong *)*plVar9 != (longlong *)0x0) &&
         (plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x670))(),
         plVar4 != (longlong *)0x0)) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar7 = (longlong *)plVar4[0x93];
          plVar10 = plVar4;
        }
      }
      if (((plVar7 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar7 + 0x950))(), cVar3 == '\0'))
         && (lVar5 = FUN_140cff1b0(plVar10), lVar5 != 0)) {
        uVar6 = FUN_1404b03b0();
        uVar6 = FText::FText(local_38,uVar6);
        FUN_140c70350(lVar5,*(undefined8 *)(param_1 + 0xa50),param_2,uVar6,
                      *(undefined4 *)(param_1 + 0xb08),0,1,0);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  return;
}



// FUNCTION 140ad08c0 FUN_140ad08c0 body=119 status=ok
// SIG undefined FUN_140ad08c0(void)

ulonglong FUN_140ad08c0(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      in_RAX = 0;
      if (lVar1 == 0) goto LAB_140ad092f;
    }
    in_RAX = UWorld::GetGameState<APVPGameState>(lVar1);
    if ((((in_RAX != 0) && (*(longlong *)(in_RAX + 0xbb0) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(in_RAX + 0xbb0) + 0x1b0), lVar1 != 0)) &&
       (((in_RAX = 0, *(longlong *)(param_1 + 0x210) != 0 &&
         (in_RAX = *(ulonglong *)(*(longlong *)(param_1 + 0x210) + 0x108), in_RAX != 0)) &&
        (*(longlong *)(in_RAX + 0x30) == lVar1)))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_140ad092f:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140ad0940 FUN_140ad0940 body=73 status=ok
// SIG undefined FUN_140ad0940(void)

void FUN_140ad0940(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x10e5) == '\x01') {
    (**(code **)(*param_1 + 0x260))();
    *(undefined1 *)((longlong)param_1 + 0x10e5) = 2;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23a,0);
    return;
  }
  return;
}



// FUNCTION 140ad0990 FUN_140ad0990 body=73 status=ok
// SIG undefined FUN_140ad0990(void)

void FUN_140ad0990(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x10e5) == '\x02') {
    (**(code **)(*param_1 + 0x260))();
    *(undefined1 *)((longlong)param_1 + 0x10e5) = 1;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23c,0);
    return;
  }
  return;
}



// FUNCTION 140ad09e0 FUN_140ad09e0 body=42 status=ok
// SIG undefined FUN_140ad09e0(void)

void FUN_140ad09e0(undefined8 param_1)

{
  undefined8 in_stack_00000030;
  longlong in_stack_00000038;
  
  FUN_140adb170(param_1,in_stack_00000030);
  if (*(longlong *)(in_stack_00000038 + 0x38) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140ad0a10 FUN_140ad0a10 body=49 status=ok
// SIG undefined FUN_140ad0a10(void)

void FUN_140ad0a10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  uVar1 = FUN_1404b03b0();
  uVar1 = FText::FText(local_28,uVar1);
  FUN_140ad1be0(param_1,3,uVar1,0);
  return;
}



// FUNCTION 140ad0a50 FUN_140ad0a50 body=714 status=ok
// SIG undefined FUN_140ad0a50(void)

void FUN_140ad0a50(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_res10;
  undefined7 uStackX_11;
  
  iVar6 = FUN_14233f450();
  if (iVar6 != 3) {
    return;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  plVar11 = (longlong *)param_1[0x23];
  bVar3 = false;
  if (plVar11 != (longlong *)0x0) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140c3c950(plVar11,0);
      if ((((char)param_1[0x21d] - 1U & 0xfa) == 0) && ((char)param_1[0x21d] != '\x05')) {
        if (plVar11[0x122] != 0) {
          FUN_142d15b40(plVar11[0x122],0);
        }
        bVar3 = true;
      }
      goto LAB_140ad0b01;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_140ad0b01:
  FUN_140ad6ef0(param_1);
  *(undefined2 *)((longlong)param_1 + 0x10e6) = 0;
  (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e5) != '\0');
  if (*(char *)((longlong)param_1 + 0x10e5) == '\x03') {
    local_res10 = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x25f,&local_res10);
  }
  *(undefined1 *)((longlong)param_1 + 0x10e5) = 0;
  (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e6) != '\0');
  FUN_140ae84d0(param_1);
  if (plVar11 != (longlong *)0x0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x238,0);
    plVar1 = (longlong *)plVar11[0x92];
    if (plVar1 != (longlong *)0x0) {
      lVar7 = FUN_1429e18b0();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (cVar5 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar5 != '\0')) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x236,0);
      }
    }
    if (((!bVar3) && (plVar11[0x225] != 0)) && ((wchar_t *)plVar11[0x226] != (wchar_t *)0x0)) {
      pwVar10 = (wchar_t *)plVar11[0x226];
      if (plVar11[0x225] == 0) {
        pwVar10 = (wchar_t *)0x0;
      }
      (**(code **)(*(longlong *)pwVar10 + 0x18))(pwVar10,plVar11);
    }
    cVar5 = FUN_142d52a00(param_1 + 0x7a);
    if (cVar5 == '\0') {
      uVar12 = 0;
    }
    else {
      uVar8 = FUN_142d52a20(param_1 + 0x7a);
      uVar8 = FArchive::operator<<(uVar8);
      uVar12 = FUN_142d5fea0(uVar8);
    }
    uVar13 = FUN_140ad61c0(param_1);
    FUN_140c581f0(plVar11,*(undefined1 *)((longlong)param_1 + 0x10e5),uVar12,
                  *(undefined1 *)((longlong)param_1 + 0x10e6),uVar13,param_1 + 0x219);
    uVar8 = FUN_142e0a580();
    lVar7 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar8);
    if (lVar7 != 0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UFightForYourLifeComponent::DownStateCausedDamage",L"::");
      pwVar10 = (wchar_t *)0x0;
      while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar10 = pwVar4;
      }
      FName::FName(&local_res10,pwVar10 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (lVar7 + 0x1e8,param_1,CONCAT71(uStackX_11,local_res10));
    }
  }
  return;
}



// FUNCTION 140ad0d20 FUN_140ad0d20 body=3765 status=ok
// SIG undefined FUN_140ad0d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ad0d20(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  undefined4 *puVar17;
  wchar_t *pwVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  int *piVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  ulonglong *puVar25;
  longlong *plVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined1 auStack_558 [32];
  undefined4 local_538;
  char local_528;
  undefined8 local_518;
  ulonglong uStack_510;
  longlong local_508;
  longlong local_500;
  ulonglong *local_4f8;
  ulonglong *local_4f0;
  undefined8 local_4e8;
  ulonglong local_4e0;
  float local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  ulonglong local_4a8;
  longlong *local_4a0;
  longlong local_498;
  ulonglong local_490;
  undefined4 local_488;
  longlong local_480 [2];
  longlong local_470 [2];
  longlong local_460 [2];
  undefined8 local_450;
  code *local_448;
  ulonglong uStack_440;
  code *local_438 [2];
  undefined1 local_428 [32];
  undefined8 local_408;
  undefined4 local_3f8;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [32];
  code *local_388;
  longlong local_378 [4];
  longlong *local_358;
  int local_348;
  undefined1 local_338 [8];
  undefined1 local_330 [48];
  undefined1 local_300 [672];
  undefined1 *local_60;
  int local_58;
  int local_54;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  local_528 = param_2;
  iVar7 = FUN_14233f450();
  if (iVar7 != 3) {
    return;
  }
  plVar26 = (longlong *)param_1[0x23];
  if (plVar26 != (longlong *)0x0) {
    local_450 = FUN_1407a6820();
    lVar8 = (**(code **)(*plVar26 + 0x628))(plVar26,local_450);
    if (lVar8 != 0) {
      FUN_14072b710(lVar8);
    }
  }
  plVar26 = (longlong *)param_1[0x23];
  if (plVar26 == (longlong *)0x0) {
LAB_140ad11bb:
    plVar26 = (longlong *)0x0;
  }
  else {
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(plVar26[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar26[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar27 = false;
    }
    else {
      bVar27 = true;
    }
    if (!bVar27) goto LAB_140ad11bb;
    local_508 = plVar26[3];
    FName::ToString(&local_508,local_480);
    local_538 = 0xffffffff;
    iVar7 = FUN_141592950(local_480,L"DudeBro",1);
    if (local_480[0] != 0) {
      FMemory::Free();
    }
    uVar23 = 0;
    if (iVar7 != -1) {
      lVar8 = param_1[0x24];
      if (lVar8 == 0) {
        lVar8 = FUN_1423407b0(param_1);
      }
      local_500 = FUN_142f6c9f0(lVar8);
      if (local_500 != 0) {
        local_4f0 = (ulonglong *)0x0;
        local_4e8 = 0;
        FUN_142f5b8e0(local_500,&local_4f0,1);
        local_4f8 = local_4f0 + (int)local_4e8;
        puVar25 = local_4f0;
        if (local_4f0 != local_4f8) {
          do {
            uVar13 = *puVar25;
            uVar10 = uVar23;
            if (uVar13 != 0) {
              uVar9 = FUN_142f71d80();
              uVar20 = uVar13;
              do {
                uVar10 = uVar13;
                if (uVar20 == uVar9) break;
                uVar20 = *(ulonglong *)(uVar20 + 0x30);
                uVar10 = uVar23;
              } while (uVar20 != 0);
            }
            local_4c0 = *(undefined8 *)(uVar10 + 0x18);
            FName::ToString(&local_4c0,local_470);
            local_538 = 0xffffffff;
            iVar7 = FUN_141592950(local_470,L"DudeBro",1);
            if (local_470[0] != 0) {
              FMemory::Free();
            }
            if (iVar7 != -1) {
              lVar8 = FUN_142f5c680(local_500,uVar13);
              local_4b8 = *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + 0x18);
              FName::ToString(&local_4b8,local_460);
              local_538 = 0xffffffff;
              iVar7 = FUN_141592950(local_460,L"ReviveChaddJump",1);
              if (local_460[0] != 0) {
                FMemory::Free();
              }
              if (iVar7 != -1) {
                lVar8 = plVar26[0x2d];
                if (lVar8 == 0) {
                  local_488 = DAT_1468b5d98;
                  puVar11 = &local_490;
                  local_490 = _DAT_1468b5d90;
                }
                else {
                  local_3e8 = *(undefined4 *)(lVar8 + 0x220);
                  uStack_3e4 = *(undefined4 *)(lVar8 + 0x224);
                  uStack_3e0 = *(undefined4 *)(lVar8 + 0x228);
                  uStack_3dc = *(undefined4 *)(lVar8 + 0x22c);
                  puVar11 = (ulonglong *)&local_4d0;
                  local_4d0 = local_3e8;
                  local_4c8 = uStack_3e0;
                  uStack_4cc = uStack_3e4;
                }
                local_4e0 = *puVar11;
                local_4d8 = *(float *)(puVar11 + 1);
                if (1150.0 < local_4d8) {
                  if (local_4f0 == (ulonglong *)0x0) {
                    return;
                  }
                  FMemory::Free();
                  return;
                }
              }
            }
            puVar25 = puVar25 + 1;
            param_2 = local_528;
          } while (puVar25 != local_4f8);
        }
        if (local_4f0 != (ulonglong *)0x0) {
          FMemory::Free(local_4f0);
        }
      }
    }
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(plVar26[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar26[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar27 = false;
    }
    else {
      bVar27 = true;
    }
    if (bVar27) {
      thunk_FUN_141400bb0(plVar26);
    }
    uVar12 = FUN_140ad3db0();
    uVar13 = uVar23;
    if ((longlong *)plVar26[0x3ae] != (longlong *)0x0) {
      uVar13 = (**(code **)(*(longlong *)plVar26[0x3ae] + 0x688))();
    }
    FUN_140adc3a0(uVar12,plVar26,uVar13);
    FUN_140c3c950(plVar26,1);
    FUN_140c3c6e0(plVar26);
    cVar6 = (**(code **)(*plVar26 + 0x780))(plVar26);
    if ((cVar6 != '\0') && (lVar8 = (**(code **)(*plVar26 + 0x670))(plVar26), lVar8 != 0)) {
      lVar14 = FUN_14145f370();
      iVar7 = *(int *)(lVar14 + 0x90);
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < iVar7) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)iVar7 * 8) !=
          lVar14 + 0x88)) {
        bVar27 = false;
      }
      else {
        bVar27 = true;
      }
      if (bVar27) {
        FUN_1414602d0(lVar8,CONCAT71((int7)(int3)((uint)iVar7 >> 8),3));
      }
    }
    plVar15 = (longlong *)param_1[0x21b];
    if (plVar15 != (longlong *)0x0) {
      local_4e0 = FUN_141312e30();
      plVar15 = (longlong *)(**(code **)(*plVar15 + 0x628))(plVar15,local_4e0);
      if (plVar15 != (longlong *)0x0) {
        uVar13 = plVar26[0x138];
        if (uVar13 == 0) {
LAB_140ad11a4:
          uVar13 = uVar23;
        }
        else {
          lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar27 = false;
          }
          else {
            bVar27 = true;
          }
          if (!bVar27) goto LAB_140ad11a4;
        }
        (**(code **)(*plVar15 + 0x418))(plVar15,uVar13,0);
      }
    }
  }
  pwVar24 = (wchar_t *)0x0;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x260))(param_1);
    uVar12 = FUN_1404b03b0();
    lVar8 = FText::FText(local_3d8,uVar12);
    param_1[0x21e] = 0;
    *(char *)(param_1 + 0x21d) = (*(char *)((longlong)param_1 + 0x10e5) == '\0') + '\x04';
    FText::operator=(param_1 + 0x21f,lVar8);
    plVar15 = *(longlong **)(lVar8 + 8);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar15 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    FUN_140c5bd00(plVar26,(char)param_1[0x21d]);
    if (*(char *)((longlong)param_1 + 0x10e5) != '\0') {
      cVar6 = FUN_142d52a00(param_1 + 0x7a);
      if (cVar6 != '\0') {
        uVar12 = FUN_142d52a20(param_1 + 0x7a);
        uVar12 = FArchive::operator<<(uVar12);
        lVar8 = FDuplicateDataWriter::GetSerializeContext(uVar12);
        if ((lVar8 != 0) && (lVar8 = FUN_142d62990(lVar8,param_1[0x77]), lVar8 != 0)) {
          pwVar16 = _guard_xfg_dispatch_icall_nop
                              (L"&UFightForYourLifeComponent::DownStateTimeExpired",L"::");
          while (pwVar18 = pwVar16, pwVar18 != (wchar_t *)0x0) {
            pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar18 + 1,L"::");
            pwVar24 = pwVar18;
          }
          FName::FName(&local_4f8,pwVar24 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar8 + 8,param_1,local_4f8);
        }
        FUN_142d5ac70(param_1 + 0x7a);
      }
      (**(code **)(*param_1 + 0x288))(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x10e5) = 1;
    (**(code **)(*param_1 + 0x358))(param_1,1);
    FUN_140ae84d0(param_1);
    if ((param_1[0x24] == 0) && (lVar8 = FUN_1423407b0(param_1), lVar8 == 0)) {
      uVar28 = 0;
    }
    else {
      lVar8 = param_1[0x24];
      if (lVar8 == 0) {
        lVar8 = FUN_1423407b0(param_1);
      }
      uVar28 = *(undefined4 *)(lVar8 + 0x790);
    }
    *(undefined4 *)((longlong)param_1 + 0x1354) = uVar28;
    *(undefined2 *)((longlong)param_1 + 0x10e6) = 0;
    (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e5) != '\0');
    *(undefined4 *)(param_1 + 0x21a) = 0;
    if (*(int *)((longlong)param_1 + 0x10d4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x219,0);
    }
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x10e4) = 0;
    if (plVar26 != (longlong *)0x0) {
      if (plVar26[0x122] != 0) {
        FUN_142d15b40(plVar26[0x122],0);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x232,0)
      ;
      plVar26 = (longlong *)plVar26[0x138];
      if (plVar26 != (longlong *)0x0) {
        lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar26[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar26[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
            != lVar8 + 0x88)) {
          bVar27 = false;
        }
        else {
          bVar27 = true;
        }
        if ((bVar27) && (cVar6 = (**(code **)(*plVar26 + 0x768))(plVar26), cVar6 != '\0')) {
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x230,0);
        }
      }
    }
    goto LAB_140ad1a3a;
  }
  if (*(char *)((longlong)param_1 + 0x10e5) != '\0') goto LAB_140ad1a3a;
  *(byte *)(param_1 + 0x26a) = *(byte *)(param_1 + 0x26a) | 2;
  (**(code **)(*param_1 + 0x260))(param_1);
  iVar7 = FUN_14233f450(param_1);
  if (iVar7 == 3) {
    plVar15 = param_1 + 0x7a;
    cVar6 = FUN_142d52a00(plVar15);
    if ((cVar6 == '\0') && (param_1[0x23] != 0)) {
      local_500 = 0;
      puVar17 = (undefined4 *)FUN_142d61d40(local_3c0,&local_500,param_1[0x23],param_1[0x77]);
      uVar28 = puVar17[1];
      uVar3 = puVar17[2];
      uVar4 = puVar17[3];
      *(undefined4 *)plVar15 = *puVar17;
      *(undefined4 *)((longlong)param_1 + 0x3d4) = uVar28;
      *(undefined4 *)(param_1 + 0x7b) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x3dc) = uVar4;
      param_1[0x7c] = *(longlong *)(puVar17 + 4);
      cVar6 = FUN_142d52a00(plVar15);
      if (cVar6 != '\0') {
        uVar12 = FUN_142d52a20(plVar15);
        lVar8 = FArchive::operator<<(uVar12);
        *(undefined4 *)(param_1 + 0x261) = *(undefined4 *)(lVar8 + 0x38);
      }
    }
    cVar6 = FUN_142d52a00(plVar15);
    if (cVar6 != '\0') {
      uVar12 = FUN_142d52a20(plVar15);
      uVar12 = FArchive::operator<<(uVar12);
      FUN_142d6cbd0(uVar12);
      uVar12 = FUN_142d52a20(plVar15);
      uVar12 = FArchive::operator<<(uVar12);
      lVar8 = FDuplicateDataWriter::GetSerializeContext(uVar12);
      if (lVar8 != 0) {
        lVar8 = FUN_142d62010(lVar8,param_1[0x77]);
        uStack_510 = uStack_510 & 0xffffffff00000000;
        local_518 = FUN_140ad0a10;
        local_448 = FUN_140ad0a10;
        uStack_440 = uStack_510;
        pwVar18 = _guard_xfg_dispatch_icall_nop
                            (L"&UFightForYourLifeComponent::DownStateTimeExpired",L"::");
        pwVar16 = pwVar24;
        while (pwVar5 = pwVar18, pwVar5 != (wchar_t *)0x0) {
          pwVar18 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar16 = pwVar5;
        }
        FName::FName(&local_4b0,pwVar16 + 2,1);
        FUN_1407260e0(lVar8 + 8,param_1,&local_448,local_4b0);
      }
      cVar6 = *(char *)((longlong)param_1 + 0x3ec);
      uVar12 = FUN_142d52a20(plVar15);
      lVar8 = FArchive::operator<<(uVar12);
      FUN_14246fd70(lVar8 + 0x94,cVar6 != '\0');
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x10e5) = 1;
  (**(code **)(*param_1 + 0x358))(param_1,1);
  FUN_140ae84d0(param_1);
  if ((param_1[0x24] == 0) && (lVar8 = FUN_1423407b0(param_1), lVar8 == 0)) {
    uVar28 = 0;
  }
  else {
    lVar8 = param_1[0x24];
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    uVar28 = *(undefined4 *)(lVar8 + 0x790);
  }
  *(undefined4 *)((longlong)param_1 + 0x1354) = uVar28;
  *(undefined2 *)((longlong)param_1 + 0x10e6) = 0;
  (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e5) != '\0');
  uVar12 = FUN_1404b03b0();
  lVar8 = FText::FText(local_3a8,uVar12);
  *(undefined1 *)(param_1 + 0x21d) = 0;
  param_1[0x21e] = 0;
  FText::operator=(param_1 + 0x21f,lVar8);
  plVar15 = *(longlong **)(lVar8 + 8);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  (**(code **)(*param_1 + 0x280))(param_1,1);
  *(undefined4 *)(param_1 + 0x21a) = 0;
  if (*(int *)((longlong)param_1 + 0x10d4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x219,0);
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10e4) = 0;
  if (plVar26 != (longlong *)0x0) {
    FUN_140c5bd00(plVar26,(char)param_1[0x21d]);
    FUN_140c5a150(plVar26,1,0);
    FUN_140c47b20(plVar26);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x228,0);
    plVar15 = (longlong *)plVar26[0x92];
    if (plVar15 != (longlong *)0x0) {
      lVar8 = FUN_1429e18b0();
      if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar27 = false;
      }
      else {
        bVar27 = true;
      }
      if ((bVar27) && (cVar6 = (**(code **)(*plVar15 + 0x768))(plVar15), cVar6 != '\0')) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x226,0);
        FUN_140adfcd0(param_1,param_1[0x207]);
      }
    }
    local_358 = (longlong *)0x0;
    local_348 = 0;
    puVar19 = (undefined8 *)FUN_140438ef0(0x10,local_378);
    if (puVar19 != (undefined8 *)0x0) {
      puVar19[1] = param_1;
      *puVar19 = &PTR_FUN_143f77b70;
    }
    local_388 = FUN_140ace920;
    local_408 = 0;
    local_3f8 = 0;
    if (local_348 == 0) {
LAB_140ad185c:
      local_438[0] = AK::MemoryMgr::StartProfileThreadUsage;
    }
    else {
      plVar15 = local_378;
      if (local_358 != (longlong *)0x0) {
        plVar15 = local_358;
      }
      if (plVar15 == (longlong *)0x0) goto LAB_140ad185c;
      plVar15 = (longlong *)(**(code **)*plVar15)(plVar15,local_428);
      (**(code **)(*plVar15 + 8))(plVar15);
      local_438[0] = local_388;
    }
    FUN_140acd4a0(param_1,local_438);
    uVar12 = FUN_142e0a580();
    lVar8 = (**(code **)(*plVar26 + 0x628))(plVar26,uVar12);
    if (lVar8 != 0) {
      pwVar16 = _guard_xfg_dispatch_icall_nop
                          (L"&UFightForYourLifeComponent::DownStateCausedDamage",L"::");
      while (pwVar18 = pwVar16, pwVar18 != (wchar_t *)0x0) {
        pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar18 + 1,L"::");
        pwVar24 = pwVar18;
      }
      FName::FName(&local_4a8,pwVar24 + 2,1);
      plVar26 = (longlong *)(lVar8 + 0x1e8);
      FWeakObjectPtr::operator=(&local_518,0);
      uStack_510 = 0;
      FWeakObjectPtr::operator=(&local_518,param_1);
      local_508 = 0;
      uStack_510 = local_4a8;
      if ((local_4a8 != 0) && (lVar14 = FWeakObjectPtr::Get(&local_518), lVar14 != 0)) {
        UObject::FindFunction(lVar14,uStack_510);
      }
      piVar2 = (int *)*plVar26;
      iVar7 = *(int *)(lVar8 + 0x1f0);
      for (piVar21 = piVar2; piVar21 != piVar2 + (longlong)iVar7 * 4; piVar21 = piVar21 + 4) {
        if (((*piVar21 == (int)local_518) &&
            (local_518._4_4_ = (int)((ulonglong)local_518 >> 0x20),
            bVar27 = piVar21[1] == local_518._4_4_, bVar27)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar21), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_518), cVar6 == '\0')))) {
          bVar27 = true;
        }
        else {
          bVar27 = false;
        }
        if ((bVar27) && (*(ulonglong *)(piVar21 + 2) == uStack_510)) {
          bVar27 = true;
        }
        else {
          bVar27 = false;
        }
        if (bVar27) {
          if ((int)((longlong)piVar21 - (longlong)piVar2 >> 4) != -1) goto LAB_140ad19ec;
          break;
        }
      }
      iVar7 = *(int *)(lVar8 + 0x1f0);
      *(int *)(lVar8 + 0x1f0) = iVar7 + 1;
      if (*(int *)(lVar8 + 500) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar26,iVar7);
      }
      puVar17 = (undefined4 *)((longlong)iVar7 * 0x10 + *plVar26);
      *puVar17 = (int)local_518;
      puVar17[1] = local_518._4_4_;
      *(ulonglong *)(puVar17 + 2) = uStack_510;
LAB_140ad19ec:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar26);
    }
    if (local_348 != 0) {
      plVar26 = local_378;
      if (local_358 != (longlong *)0x0) {
        plVar26 = local_358;
      }
      if (plVar26 != (longlong *)0x0) {
        (**(code **)(*plVar26 + 0x10))(plVar26,0);
      }
    }
    if (local_358 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  *(byte *)(param_1 + 0x26a) = *(byte *)(param_1 + 0x26a) & 0xfd;
LAB_140ad1a3a:
  local_498 = param_1[0x23];
  local_4a0 = param_1;
  if ((DAT_146aeafc8 == '\0') &&
     (puVar19 = (undefined8 *)FUN_14218d320(), puVar19 != &DAT_146aeaf98)) {
    DAT_146aeaf98 = *puVar19;
    uRam0000000146aeafa0 = puVar19[1];
    _DAT_146aeafa8 = puVar19[2];
    uRam0000000146aeafb0 = puVar19[3];
    _DAT_146aeafb8 = *(undefined4 *)(puVar19 + 4);
    uRam0000000146aeafbc = *(undefined4 *)((longlong)puVar19 + 0x24);
    uRam0000000146aeafc0 = *(undefined4 *)(puVar19 + 5);
    uRam0000000146aeafc4 = *(undefined4 *)((longlong)puVar19 + 0x2c);
    DAT_146aeafc8 = '\x01';
  }
  uVar12 = DAT_146aeaf98;
  if ((DAT_1468680b8 == '\0') &&
     (puVar19 = (undefined8 *)FUN_140ad3e20(), puVar19 != &DAT_1468680a0)) {
    DAT_1468680a0._0_4_ = *(undefined4 *)puVar19;
    DAT_1468680a0._4_4_ = *(undefined4 *)((longlong)puVar19 + 4);
    DAT_1468680a8._0_4_ = *(undefined4 *)(puVar19 + 1);
    DAT_1468680a8._4_4_ = *(undefined4 *)((longlong)puVar19 + 0xc);
    DAT_1468680b0 = puVar19[2];
    DAT_1468680b8 = '\x01';
  }
  FUN_140ac3af0(local_338,L"FightForYourLife",
                CONCAT44(DAT_1468680a0._4_4_,(undefined4)DAT_1468680a0),&local_4a0);
  cVar6 = FUN_14218fca0(local_338);
  iVar7 = local_58;
  if (cVar6 != '\0') {
    lVar8 = (longlong)local_58;
    local_58 = local_58 + 1;
    if (local_54 < local_58) {
      FUN_140ae1b70(local_300,iVar7);
    }
    puVar22 = local_300;
    if (local_60 != (undefined1 *)0x0) {
      puVar22 = local_60;
    }
    FUN_140ac3930(puVar22 + lVar8 * 0xa8,uVar12,local_330,&local_498);
  }
  FUN_14217f3d0(local_338);
  if ((*(byte *)(param_1 + 0x26a) & 4) != 0) {
    *(byte *)(param_1 + 0x26a) = *(byte *)(param_1 + 0x26a) & 0xfb;
    FUN_140aca3b0(param_1);
  }
  return;
}



// FUNCTION 140ad1be0 FUN_140ad1be0 body=1577 status=ok
// SIG undefined FUN_140ad1be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ad1be0(longlong *param_1,char param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 auStack_448 [32];
  longlong local_428;
  longlong *local_420;
  longlong local_418;
  undefined8 local_410;
  undefined8 local_408;
  code *local_3f8 [2];
  undefined1 local_3e8 [32];
  undefined8 local_3c8;
  undefined4 local_3b8;
  undefined1 local_3a8 [32];
  code *local_388;
  longlong local_378 [4];
  longlong *local_358;
  int local_348;
  undefined1 local_338 [8];
  undefined1 local_330 [48];
  undefined1 local_300 [672];
  undefined1 *local_60;
  int local_58;
  int local_54;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  local_428 = param_3;
  iVar7 = FUN_14233f450();
  if (iVar7 != 3) goto LAB_140ad2198;
  lVar10 = param_1[0x23];
  if (lVar10 != 0) {
    lVar9 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      thunk_FUN_141400bb0(lVar10);
    }
  }
  plVar15 = (longlong *)param_1[0x23];
  if (plVar15 == (longlong *)0x0) {
LAB_140ad1cd2:
    plVar15 = (longlong *)0x0;
  }
  else {
    lVar10 = FUN_1413f82e0();
    if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140ad1cd2;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  lVar10 = FText::FText(local_3a8,param_3);
  *(char *)(param_1 + 0x21d) = param_2;
  param_1[0x21e] = param_4;
  FText::operator=(param_1 + 0x21f,lVar10);
  plVar14 = *(longlong **)(lVar10 + 8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_140c5bd00(plVar15,(char)param_1[0x21d]);
  local_418 = param_1[0x23];
  local_420 = param_1;
  if ((DAT_146aeafc8 == '\0') &&
     (puVar11 = (undefined8 *)FUN_14218d320(), puVar11 != &DAT_146aeaf98)) {
    DAT_146aeaf98 = *puVar11;
    uRam0000000146aeafa0 = puVar11[1];
    _DAT_146aeafa8 = puVar11[2];
    uRam0000000146aeafb0 = puVar11[3];
    _DAT_146aeafb8 = *(undefined4 *)(puVar11 + 4);
    uRam0000000146aeafbc = *(undefined4 *)((longlong)puVar11 + 0x24);
    uRam0000000146aeafc0 = *(undefined4 *)(puVar11 + 5);
    uRam0000000146aeafc4 = *(undefined4 *)((longlong)puVar11 + 0x2c);
    DAT_146aeafc8 = '\x01';
  }
  uVar12 = DAT_146aeaf98;
  if ((DAT_1468680b8 == '\0') &&
     (puVar11 = (undefined8 *)FUN_140ad3e20(), puVar11 != &DAT_1468680a0)) {
    DAT_1468680a0._0_4_ = *(undefined4 *)puVar11;
    DAT_1468680a0._4_4_ = *(undefined4 *)((longlong)puVar11 + 4);
    DAT_1468680a8._0_4_ = *(undefined4 *)(puVar11 + 1);
    DAT_1468680a8._4_4_ = *(undefined4 *)((longlong)puVar11 + 0xc);
    DAT_1468680b0 = puVar11[2];
    DAT_1468680b8 = '\x01';
  }
  FUN_140ac3af0(local_338,L"FightForYourLife",
                CONCAT44(DAT_1468680a0._4_4_,(undefined4)DAT_1468680a0),&local_420);
  cVar6 = FUN_14218fca0(local_338);
  iVar7 = local_58;
  if (cVar6 != '\0') {
    lVar10 = (longlong)local_58;
    local_58 = local_58 + 1;
    if (local_54 < local_58) {
      FUN_140ae1b70(local_300,iVar7);
    }
    puVar17 = local_300;
    if (local_60 != (undefined1 *)0x0) {
      puVar17 = local_60;
    }
    FUN_140ac3930(puVar17 + lVar10 * 0xa8,uVar12,local_330,&local_418);
  }
  FUN_14217f3d0(local_338);
  *(undefined1 *)((longlong)param_1 + 0x10e6) = 0;
  *(bool *)((longlong)param_1 + 0x10e7) = param_2 == '\x01';
  (**(code **)(*param_1 + 0x358))(param_1,*(char *)((longlong)param_1 + 0x10e5) != '\0');
  if (*(char *)((longlong)param_1 + 0x10e5) == '\x04') {
    FUN_140ad6ef0(param_1);
  }
  cVar6 = FUN_142d52a00(param_1 + 0x7a);
  if (cVar6 != '\0') {
    uVar12 = FUN_142d52a20(param_1 + 0x7a);
    uVar12 = FArchive::operator<<(uVar12);
    lVar10 = FDuplicateDataWriter::GetSerializeContext(uVar12);
    if ((lVar10 != 0) &&
       (lVar10 = FUN_142d62990(lVar10,param_1[0x77]), param_3 = local_428, lVar10 != 0)) {
      pwVar13 = _guard_xfg_dispatch_icall_nop
                          (L"&UFightForYourLifeComponent::DownStateTimeExpired",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar13, pwVar4 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_410,pwVar5 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar10 + 8,param_1,local_410);
      param_3 = local_428;
    }
    FUN_142d5ac70(param_1 + 0x7a);
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  if (plVar15 == (longlong *)0x0) goto LAB_140ad2198;
  plVar14 = (longlong *)FUN_140ad3db0();
  FUN_140ae8e10(plVar14);
  iVar7 = FUN_140ad38c0(plVar15,plVar14);
  if (iVar7 != -1) {
    uVar12 = FWeakObjectPtr::Get(*plVar14 + 8 + (longlong)iVar7 * 0x14);
    FUN_140ae3180(uVar12,0);
    iVar8 = (int)plVar14[1];
    iVar16 = (iVar8 - iVar7) + -1;
    if (iVar16 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar14 + (longlong)iVar7 * 0x14),
                 (void *)(*plVar14 + (longlong)(iVar7 + 1) * 0x14),(longlong)iVar16 * 0x14);
      iVar8 = (int)plVar14[1];
    }
    *(int *)(plVar14 + 1) = iVar8 + -1;
    TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(plVar14);
  }
  cVar6 = FUN_142dd3d30(param_1 + 0x223);
  if (cVar6 != '\0') {
    local_408 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar10 = (**(code **)(*plVar15 + 0x628))(plVar15,local_408);
    if (lVar10 != 0) {
      FUN_142dd99b0(lVar10,param_1 + 0x223);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x232,0);
  plVar15 = (longlong *)plVar15[0x92];
  if (plVar15 != (longlong *)0x0) {
    lVar10 = FUN_1429e18b0();
    if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (cVar6 = (**(code **)(*plVar15 + 0x768))(plVar15), cVar6 != '\0')) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x230,0)
      ;
      FUN_140adfcd0(param_1,param_1[0x208]);
    }
  }
  local_358 = (longlong *)0x0;
  local_348 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_378);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = param_1;
    *puVar11 = &PTR_FUN_143f77b70;
  }
  local_3c8 = 0;
  local_388 = FUN_140ace9d0;
  local_3b8 = 0;
  if (local_348 == 0) {
LAB_140ad2145:
    local_3f8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar15 = local_378;
    if (local_358 != (longlong *)0x0) {
      plVar15 = local_358;
    }
    if (plVar15 == (longlong *)0x0) goto LAB_140ad2145;
    plVar15 = (longlong *)(**(code **)*plVar15)(plVar15,local_3e8);
    (**(code **)(*plVar15 + 8))(plVar15);
    local_3f8[0] = local_388;
  }
  FUN_140acd4a0(param_1,local_3f8);
  if (local_348 != 0) {
    plVar15 = local_378;
    if (local_358 != (longlong *)0x0) {
      plVar15 = local_358;
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15,0);
    }
  }
  if (local_358 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140ad2198:
  plVar15 = *(longlong **)(param_3 + 8);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  return;
}



// FUNCTION 140ad2210 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
               (longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::ConditionalRehash
                    (param_1,param_2,1);
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



// FUNCTION 140ad22d0 Empty body=403 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_140ad23a1;
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
LAB_140ad23a1:
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
      FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences
                ((longlong)iStack_1c * 200 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<200,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 140ad2470 FUN_140ad2470 body=27 status=ok
// SIG undefined FUN_140ad2470(void)

void FUN_140ad2470(undefined8 param_1)

{
  FUN_140af8460();
  FUN_140ad8180(param_1);
  return;
}



// FUNCTION 140ad2490 FUN_140ad2490 body=178 status=ok
// SIG undefined FUN_140ad2490(void)

void FUN_140ad2490(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x5a8);
  uVar2 = (longlong)*(int *)(param_1 + 0x5b0) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x5b0) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_140ae14c0(param_1,*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  if (*(int *)(param_1 + 0x5b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x5a8,0);
  }
  FUN_140af8460(param_1,param_2);
  return;
}



// FUNCTION 140ad2550 FUN_140ad2550 body=676 status=ok
// SIG undefined FUN_140ad2550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ad2550(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  
  FUN_14222a250();
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = FUN_1407c74b0(uVar2);
  if (lVar3 != 0) {
    lVar3 = param_1[0xd6];
    uVar8 = 0;
    uVar7 = uVar8;
    uVar11 = uVar8;
    iVar5 = DAT_14625a710;
    if (0 < DAT_14625a710) {
      do {
        plVar10 = (longlong *)(DAT_14625a708 + uVar11);
        if ((((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0))
           && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
              iVar5 = DAT_14625a710, *plVar4 == lVar3)) {
          if (((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0))
          {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar10 != 0) {
              lVar3 = FMemory::Realloc(*plVar10,0,0);
              *plVar10 = lVar3;
            }
            *(undefined4 *)(plVar10 + 1) = 0;
            iVar5 = DAT_14625a710;
          }
          break;
        }
        uVar9 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar9;
        uVar11 = uVar11 + 0x10;
      } while ((int)uVar9 < iVar5);
    }
    if (DAT_14625a71c < 1) {
      uVar7 = uVar8;
      uVar11 = uVar8;
      iVar6 = iVar5;
      if (0 < iVar5) {
        do {
          if (((*(int *)(uVar11 + 8 + DAT_14625a708) == 0) ||
              (*(longlong **)(uVar11 + DAT_14625a708) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar11 + DAT_14625a708) + 0x10))(), cVar1 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_14625a708,uVar7,1,1);
          }
          else {
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar11 = uVar11 + 0x10;
          }
          iVar6 = DAT_14625a710;
        } while ((int)uVar7 < DAT_14625a710);
      }
      _DAT_14625a718 = iVar6 * 2;
      if (_DAT_14625a718 < 3) {
        _DAT_14625a718 = 2;
      }
      if ((_DAT_14625a718 < iVar5) && (DAT_14625a714 != iVar6)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_14625a708);
      }
    }
    lVar3 = param_1[0xd7];
    uVar7 = uVar8;
    uVar11 = uVar8;
    iVar5 = DAT_14625a6f8;
    if (0 < DAT_14625a6f8) {
      do {
        plVar10 = (longlong *)(DAT_14625a6f0 + uVar11);
        if ((((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0))
           && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
              iVar5 = DAT_14625a6f8, *plVar4 == lVar3)) {
          if (((int)plVar10[1] != 0) && (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0))
          {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar10 != 0) {
              lVar3 = FMemory::Realloc(*plVar10,0,0);
              *plVar10 = lVar3;
            }
            *(undefined4 *)(plVar10 + 1) = 0;
            iVar5 = DAT_14625a6f8;
          }
          break;
        }
        uVar9 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar9;
        uVar11 = uVar11 + 0x10;
      } while ((int)uVar9 < iVar5);
    }
    if (DAT_14625a704 < 1) {
      uVar7 = uVar8;
      iVar6 = iVar5;
      if (0 < iVar5) {
        do {
          if (((*(int *)(uVar8 + 8 + DAT_14625a6f0) == 0) ||
              (*(longlong **)(uVar8 + DAT_14625a6f0) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar8 + DAT_14625a6f0) + 0x10))(), cVar1 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_14625a6f0,uVar7,1,1);
          }
          else {
            uVar7 = (ulonglong)((int)uVar7 + 1);
            uVar8 = uVar8 + 0x10;
          }
          iVar6 = DAT_14625a6f8;
        } while ((int)uVar7 < DAT_14625a6f8);
      }
      _DAT_14625a700 = iVar6 * 2;
      if (_DAT_14625a700 < 3) {
        _DAT_14625a700 = 2;
      }
      if ((_DAT_14625a700 < iVar5) && (DAT_14625a6fc != iVar6)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_14625a6f0);
      }
    }
  }
  FUN_140ad3b90(param_1);
  return;
}



// FUNCTION 140ad2800 FUN_140ad2800 body=313 status=ok
// SIG undefined FUN_140ad2800(void)

void FUN_140ad2800(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *local_18;
  int local_10;
  
  FUN_142d7f8b0();
  *(undefined4 *)(param_1 + 0x17e) = 0;
  if (*(int *)((longlong)param_1 + 0xbf4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x17d,0);
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)((longlong)param_1 + 0xc04) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x17f,0);
  }
  *(undefined4 *)(param_1 + 0x182) = 0;
  if (*(int *)((longlong)param_1 + 0xc14) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x181,0);
  }
  FUN_140ae5960(param_1);
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    lVar2 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar2);
    if (lVar2 != 0) {
      FUN_140483870(lVar2 + 0x5b0,param_1);
      FUN_140483870(lVar2 + 0x5c8,param_1);
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar3,&local_18);
  do {
    if ((local_10 < 0) || ((int)local_18[1] <= local_10)) {
      return;
    }
    plVar4 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if ((plVar4 == (longlong *)0x0) || ((*(uint *)((longlong)plVar4 + 0x4cc) >> 1 & 1) == 0)) {
LAB_140ad2913:
      lVar2 = 0;
    }
    else {
      cVar1 = (**(code **)(*plVar4 + 0x768))(plVar4);
      if (cVar1 == '\0') goto LAB_140ad2913;
      lVar2 = plVar4[0x93];
    }
    if (lVar2 != 0) {
      FUN_140ae1030(param_1);
    }
    local_10 = local_10 + 1;
  } while( true );
}



// FUNCTION 140ad2940 FUN_140ad2940 body=64 status=ok
// SIG undefined FUN_140ad2940(void)

void FUN_140ad2940(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_14222a250();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_140aab610(uVar1);
  if (lVar2 != 0) {
    FUN_140ab8a30(lVar2,param_1,0);
    return;
  }
  return;
}



// FUNCTION 140ad2980 FUN_140ad2980 body=350 status=ok
// SIG undefined FUN_140ad2980(void)

void FUN_140ad2980(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x95);
    param_1[0x95] = 0;
  }
  if (param_1[0x9b] != 0) {
    plVar2 = (longlong *)FUN_140ad5f70(param_1);
    if (plVar2 != (longlong *)0x0) {
      lVar1 = param_1[0x9c];
      if (*(longlong *)(lVar1 + 0x578) != 0) {
        FUN_140e36a90(plVar2,lVar1 + 0x578,0);
        lVar1 = param_1[0x9c];
      }
      if (*(longlong *)(lVar1 + 0x580) != 0) {
        FUN_140e36a80(plVar2,*(undefined8 *)(lVar1 + 0x580));
      }
      FUN_140e1df50(plVar2,0,0,0,1);
      lVar1 = (**(code **)(*plVar2 + 0xa58))(plVar2);
      if (lVar1 != 0) {
        uVar3 = (**(code **)(*plVar2 + 0xa58))(plVar2);
        FUN_1423be6d0(uVar3,0,0);
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0xa58))(plVar2);
        (**(code **)(*plVar2 + 0x960))(plVar2,0);
      }
    }
    if (param_1[0x9b] != 0) {
      FUN_142dbb5d0(param_1[0x9b] + 0xd58,&DAT_146868130);
    }
  }
  return;
}



// FUNCTION 140ad2ae0 FUN_140ad2ae0 body=307 status=ok
// SIG undefined FUN_140ad2ae0(void)

ulonglong FUN_140ad2ae0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_198 [400];
  
  if (param_2 == 0) {
LAB_140ad2b2e:
    param_2 = 0;
  }
  else {
    lVar3 = UUGButton::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX == '\0') goto LAB_140ad2b2e;
  }
  if (param_3 != 0) {
    lVar3 = FUN_14145f370();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') goto LAB_140ad2b6d;
  }
  param_3 = 0;
LAB_140ad2b6d:
  if ((((param_2 != 0) && (param_3 != 0)) && (lVar3 = *(longlong *)(param_3 + 0xc70), lVar3 != 0))
     && (in_RAX = (**(code **)(*(longlong *)(param_2 + 0x660) + 0x10))(), (char)in_RAX != '\0')) {
    FUN_140ac6910(local_198);
    FUN_140e7f5c0(lVar3,local_198,param_2);
    cVar2 = FUN_140e85920(lVar3,param_2);
    if ((cVar2 == '\0') && (cVar2 = FUN_140cef470(param_3,local_198), cVar2 == '\0')) {
      FUN_140ac7ce0(local_198);
      return 0;
    }
    FUN_140ac7ce0(local_198);
    return 1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140ad2c20 FUN_140ad2c20 body=1665 status=ok
// SIG undefined FUN_140ad2c20(void)

void FUN_140ad2c20(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar12 = &stack0xfffffffffffffff8;
  plVar8 = (longlong *)*param_2;
  if ((int)plVar8[0x11] < 1) {
    return;
  }
  plVar10 = (longlong *)plVar8[0x10];
  if ((longlong *)plVar8[0x10] == (longlong *)0x0) {
    plVar10 = plVar8;
  }
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  if ((short)plVar10[3] == 0x28) {
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      lVar5 = UObject::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_140ad2cdc;
    }
    lVar6 = 0;
  }
  else {
    if ((short)plVar10[3] != 0x27) {
      return;
    }
    local_48 = (longlong *)*plVar10;
    uStack_40 = (undefined4)plVar10[1];
    uStack_3c = *(undefined4 *)((longlong)plVar10 + 0xc);
    lVar6 = FHardwareCursor::GetHandle(&local_48);
  }
LAB_140ad2cdc:
  if (lVar6 == 0) {
    return;
  }
  lVar5 = FUN_141312e30();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if ((DAT_1468680b8 == '\0') && (puVar7 = (undefined8 *)FUN_140ad3e20(), puVar7 != &DAT_1468680a0))
  {
    DAT_1468680a0._0_4_ = *(undefined4 *)puVar7;
    DAT_1468680a0._4_4_ = *(undefined4 *)((longlong)puVar7 + 4);
    DAT_1468680a8._0_4_ = *(undefined4 *)(puVar7 + 1);
    DAT_1468680a8._4_4_ = *(undefined4 *)((longlong)puVar7 + 0xc);
    DAT_1468680b0 = (longlong *)puVar7[2];
    DAT_1468680b8 = '\x01';
  }
  plVar8 = (longlong *)FUN_1407ca3d0(param_2[2],*(undefined8 *)(*param_2 + 0x90));
  switch(*(undefined1 *)(lVar6 + 0x10e8)) {
  case 0:
    plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
    if (*plVar10 == 0) {
LAB_140ad31ce:
      bVar3 = false;
    }
    else {
      cVar4 = FUN_1407ce010(plVar10 + 1);
      plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
      if (cVar4 == '\0') goto LAB_140ad31ce;
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    plVar14 = (longlong *)*plVar8;
    plVar13 = plVar14 + (longlong)(int)plVar8[1] * 5;
    if (plVar14 != plVar13) {
      do {
        if ((*(longlong *)*plVar14 == *plVar10) &&
           (*(longlong *)(((longlong *)*plVar14)[1] + 0x28) == *(longlong *)(plVar10[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          uVar9 = FUN_14217e610(&local_48,L"DOWN");
          FUN_14217f450(plVar14 + 1,uVar9);
          FUN_14217f430(&local_48);
          return;
        }
        plVar14 = plVar14 + 5;
      } while (plVar14 != plVar13);
    }
    pwVar11 = L"DOWN";
    break;
  case 1:
    FUN_140ac4b20(plVar8,&DAT_1468680a8,L"REVIVED");
    uVar1 = *(undefined4 *)(lVar6 + 0x10d0);
    if ((*DAT_1468680b0 == 0) || (cVar4 = FUN_1407ce010(DAT_1468680b0 + 1), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    plVar13 = (longlong *)*plVar8;
    plVar10 = plVar13 + (longlong)(int)plVar8[1] * 5;
    if (plVar13 != plVar10) {
      do {
        if ((*(longlong *)*plVar13 == *DAT_1468680b0) &&
           (*(longlong *)(((longlong *)*plVar13)[1] + 0x28) ==
            *(longlong *)(DAT_1468680b0[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          FUN_14217e740(&local_48);
          FUN_142194380(&local_48,0xe,0,1,0);
          local_48 = (longlong *)CONCAT44(local_48._4_4_,uVar1);
          FUN_14217f450(plVar13 + 1,&local_48);
          goto LAB_140ad2ea6;
        }
        plVar13 = plVar13 + 5;
      } while (plVar13 != plVar10);
    }
    local_48 = DAT_1468680b0;
    FUN_14217e740(&uStack_40);
    FUN_142194380(&uStack_40,0xe,0,1,0);
    iVar2 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar2 + 1;
    uStack_40 = uVar1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar2);
    }
    puVar7 = (undefined8 *)(*plVar8 + (longlong)iVar2 * 0x28);
    *puVar7 = local_48;
    FUN_14217e5b0(puVar7 + 1,&uStack_40);
    puVar12 = (undefined1 *)register0x00000020;
LAB_140ad2ea6:
    FUN_14217f430(puVar12 + -0x40);
    return;
  case 2:
    plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
    if (*plVar10 == 0) {
LAB_140ad2f2a:
      bVar3 = false;
    }
    else {
      cVar4 = FUN_1407ce010(plVar10 + 1);
      plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
      if (cVar4 == '\0') goto LAB_140ad2f2a;
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    plVar14 = (longlong *)*plVar8;
    plVar13 = plVar14 + (longlong)(int)plVar8[1] * 5;
    if (plVar14 != plVar13) {
      do {
        if ((*(longlong *)*plVar14 == *plVar10) &&
           (*(longlong *)(((longlong *)*plVar14)[1] + 0x28) == *(longlong *)(plVar10[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          pwVar11 = L"SECOND_WIND";
LAB_140ad3180:
          uVar9 = FUN_14217e610(&local_48,pwVar11);
          FUN_14217f450(plVar14 + 1,uVar9);
          FUN_14217f430(&local_48);
          return;
        }
        plVar14 = plVar14 + 5;
      } while (plVar14 != plVar13);
    }
    pwVar11 = L"SECOND_WIND";
    break;
  case 3:
    if (*(char *)(lVar6 + 0x10e5) == '\x04') {
      FUN_140ac4b20(plVar8,&DAT_1468680a8,L"GAVE_UP");
      return;
    }
    plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
    if (*plVar10 == 0) {
LAB_140ad2fdb:
      bVar3 = false;
    }
    else {
      cVar4 = FUN_1407ce010(plVar10 + 1);
      plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
      if (cVar4 == '\0') goto LAB_140ad2fdb;
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    plVar14 = (longlong *)*plVar8;
    plVar13 = plVar14 + (longlong)(int)plVar8[1] * 5;
    if (plVar14 != plVar13) {
      do {
        if ((*(longlong *)*plVar14 == *plVar10) &&
           (*(longlong *)(((longlong *)*plVar14)[1] + 0x28) == *(longlong *)(plVar10[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          pwVar11 = L"TIMER_EXPIRED";
          goto LAB_140ad3180;
        }
        plVar14 = plVar14 + 5;
      } while (plVar14 != plVar13);
    }
    pwVar11 = L"TIMER_EXPIRED";
    break;
  case 4:
    plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
    if (*plVar10 == 0) {
LAB_140ad3070:
      bVar3 = false;
    }
    else {
      cVar4 = FUN_1407ce010(plVar10 + 1);
      plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
      if (cVar4 == '\0') goto LAB_140ad3070;
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    plVar14 = (longlong *)*plVar8;
    plVar13 = plVar14 + (longlong)(int)plVar8[1] * 5;
    if (plVar14 != plVar13) {
      do {
        if ((*(longlong *)*plVar14 == *plVar10) &&
           (*(longlong *)(((longlong *)*plVar14)[1] + 0x28) == *(longlong *)(plVar10[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          pwVar11 = L"INTERRUPTED";
          goto LAB_140ad3180;
        }
        plVar14 = plVar14 + 5;
      } while (plVar14 != plVar13);
    }
    pwVar11 = L"INTERRUPTED";
    break;
  case 5:
    FUN_140ac4b20(plVar8,&DAT_1468680a8,L"INSTANT");
    return;
  case 6:
    plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
    if (*plVar10 == 0) {
LAB_140ad311c:
      bVar3 = false;
    }
    else {
      cVar4 = FUN_1407ce010(plVar10 + 1);
      plVar10 = (longlong *)CONCAT44(DAT_1468680a8._4_4_,(undefined4)DAT_1468680a8);
      if (cVar4 == '\0') goto LAB_140ad311c;
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    plVar14 = (longlong *)*plVar8;
    plVar13 = plVar14 + (longlong)(int)plVar8[1] * 5;
    if (plVar14 != plVar13) {
      do {
        if ((*(longlong *)*plVar14 == *plVar10) &&
           (*(longlong *)(((longlong *)*plVar14)[1] + 0x28) == *(longlong *)(plVar10[1] + 0x28))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          pwVar11 = L"CUSTOM";
          goto LAB_140ad3180;
        }
        plVar14 = plVar14 + 5;
      } while (plVar14 != plVar13);
    }
    pwVar11 = L"CUSTOM";
    break;
  default:
    goto switchD_140ad2d97_default;
  }
  local_48 = plVar10;
  FUN_14217e610(&uStack_40,pwVar11);
  iVar2 = (int)plVar8[1];
  *(int *)(plVar8 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar8 + 0xc) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar2);
  }
  puVar7 = (undefined8 *)(*plVar8 + (longlong)iVar2 * 0x28);
  *puVar7 = local_48;
  FUN_14217e5b0(puVar7 + 1,&uStack_40);
  FUN_14217f430(&uStack_40);
switchD_140ad2d97_default:
  return;
}



// FUNCTION 140ad32c0 FUN_140ad32c0 body=365 status=ok
// SIG undefined FUN_140ad32c0(void)

void FUN_140ad32c0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1[0x96] != 0) {
    uVar3 = AActor::GetWorldTimerManager();
    FUN_142880530(uVar3,param_1 + 0x96);
    param_1[0x96] = 0;
  }
  if (param_1[0x9b] != 0) {
    FUN_140d134c0(param_1[0x9b],0,DAT_146868130);
    if (((param_1[0x9c] != 0) && (*(longlong *)(param_1[0x9c] + 0x558) != 0)) &&
       (lVar5 = *(longlong *)(param_1[0x9b] + 0x528), lVar5 != 0)) {
      lVar4 = FUN_142fd5420();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_142fcc0b0(lVar5,*(undefined8 *)(param_1[0x9c] + 0x558),
                      *(undefined4 *)(param_1[0x9c] + 0x564),0);
      }
    }
  }
  lVar5 = FUN_140ad5f70(param_1);
  if (lVar5 != 0) {
    lVar4 = FUN_142cc1670(lVar5);
    if (lVar4 != 0) {
      uVar3 = FUN_142cc1670(lVar5);
      FUN_142cd0010(uVar3,0,DAT_146868130);
    }
  }
  *(undefined4 *)(param_1 + 0x97) = 0xbf800000;
  if (*(char *)((longlong)param_1 + 0x4d4) == '\0') {
    FUN_1412d9830(param_1);
  }
  cVar2 = (**(code **)(*param_1 + 0x750))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x758))(param_1);
  }
  if (param_1[0x9b] != 0) {
    *(undefined8 *)(param_1[0x9b] + 0x1858) = 0;
  }
  return;
}



// FUNCTION 140ad3430 FUN_140ad3430 body=1158 status=ok
// SIG undefined FUN_140ad3430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ad3430(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  float local_c0;
  longlong *local_b8 [2];
  undefined8 local_a8;
  float local_a0;
  undefined1 local_98 [12];
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_1[0xc1] == 0) {
    return;
  }
  if (param_1[0xc0] == 0) {
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x148))();
  lVar4 = FUN_142f6c9f0(uVar3);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = UWebSocketNetDriver::StaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar5 = *(longlong *)(param_1[0xc0] + 0xbe0);
  local_b8[0] = param_1;
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)((longlong)param_1 + 0x644);
    *(longlong *)(param_1[0xc0] + 0xbd8) = lVar5;
    cVar8 = *(char *)(param_1[0xc0] + 0xbd0);
    iVar11 = cVar8 + 1;
    if ((iVar11 < 0) || (*(int *)(param_1[0xc1] + 0x38) <= iVar11)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar8 = cVar8 + '\x01';
      *(char *)(param_1[0xc0] + 0xbd0) = cVar8;
      FUN_140ae33d0(param_1,lVar5);
      if ((*(longlong *)(param_1[0xc1] + 0x78) == 0) || (param_1[0xc3] == 0)) goto LAB_140ad3875;
      UStaticMesh::GetBounds(*(longlong *)(param_1[0xc1] + 0x78),local_98);
      local_c8 = 0x3f8000003f800000;
      local_c0 = 1.0;
      iVar2 = _finite((double)local_8c);
      if ((iVar2 == 0) ||
         ((iVar2 = _finite((double)local_88), iVar2 == 0 ||
          (iVar2 = _finite((double)local_84), iVar2 == 0)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        uVar3 = FUN_142caac20((longlong)iVar11 * 0xa8 + *(longlong *)(param_1[0xc1] + 0x30),local_6c
                              ,param_1);
        fVar12 = (float)FUN_142cc4350(uVar3,0);
        uVar3 = FUN_142caac20(param_1[0xc1] + 0x40,local_60,param_1);
        local_c0 = (float)FUN_142cc4350(uVar3,0);
        local_c0 = (1.0 / local_84 + 1.0 / local_84) * local_c0;
        local_a8 = CONCAT44(fVar12 / local_88,fVar12 / local_8c);
        local_a0 = local_c0;
        FUN_142399c30(param_1[0xc3],&local_a8);
        FUN_1423424e0(param_1[0xc3]);
        uVar3 = FUN_140ad3fb0(param_1[0xc0],local_78);
        local_d8 = 0;
        FUN_14223c850(param_1[0xc2],uVar3,0,0);
      }
      iVar2 = *(int *)(lVar5 + 0x468);
      if (iVar2 == 0) {
        FUN_141321ca0(param_1);
      }
      *(undefined1 *)(param_1[0xc0] + 3000) = 1;
      uVar3 = FUN_142caac20((longlong)iVar11 * 0xa8 + *(longlong *)(param_1[0xc1] + 0x30) + 0x38,
                            local_54,param_1);
      fVar12 = (float)FUN_142cc4350(uVar3,0);
      fVar13 = (float)(**(code **)(*(longlong *)param_1[0xc0] + 0x6f0))();
      *(float *)(param_1[0xc0] + 0xbbc) = fVar13 + fVar12;
      FUN_141321aa0(param_1,(int)cVar8,fVar12,iVar2 == 0);
      FUN_140ace6b0(param_1[0xc0],fVar12);
      lVar5 = param_1[0xc1];
      lVar10 = lVar5 + 0x130;
      lVar6 = FWeakObjectPtr::Get(lVar10);
      lVar9 = 0;
      lVar7 = lVar9;
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar5 + 0x138)) &&
           (local_c8 = 0, *(longlong *)(lVar5 + 0x140) != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar10,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar5 + 0x138) = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(lVar10);
          if (lVar6 != 0) goto LAB_140ad3804;
        }
      }
      else {
LAB_140ad3804:
        lVar5 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar10 = FUN_142f71d80();
          lVar5 = lVar6;
          do {
            lVar7 = lVar6;
            if (lVar5 == lVar10) break;
            lVar5 = *(longlong *)(lVar5 + 0x30);
            lVar7 = lVar9;
          } while (lVar5 != 0);
        }
      }
      FUN_142f6c2f0(lVar4,lVar7,fVar12);
      goto LAB_140ad3875;
    }
  }
  FUN_140ac9310(local_b8);
LAB_140ad3875:
  FUN_140c1f7f0(lVar4);
  return;
}



// FUNCTION 140ad38c0 FUN_140ad38c0 body=105 status=ok
// SIG undefined FUN_140ad38c0(void)

int FUN_140ad38c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar2 = 0, 0 < (int)param_2[1])) {
    do {
      cVar1 = FUN_14058c1e0(*param_2 + (longlong)iVar2 * 0x14,param_1);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_2[1]);
  }
  return -1;
}



// FUNCTION 140ad3930 FUN_140ad3930 body=317 status=ok
// SIG undefined FUN_140ad3930(void)

void FUN_140ad3930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_res10;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x690);
  plVar5 = (longlong *)*plVar1;
  iVar4 = *(int *)(param_1 + 0x698);
  plVar2 = plVar5 + iVar4;
  for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
    if (*plVar5 == param_2) {
      return;
    }
  }
  *(int *)(param_1 + 0x698) = iVar4 + 1;
  if (*(int *)(param_1 + 0x69c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = param_2;
  FUN_140ae11d0(param_1,param_2);
  local_res10 = *(longlong *)(param_2 + 0x490);
  if (local_res10 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(local_res10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res10 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140ad39eb;
  }
  local_res10 = 0;
LAB_140ad39eb:
  iVar4 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x668,&local_res10);
  if (((0 < iVar4) && (local_res10 != 0)) && (*(longlong *)(local_res10 + 0x978) != 0)) {
    FUN_142e724b0(*(longlong *)(local_res10 + 0x978),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x98),DAT_1468680c8,1);
  }
  iVar4 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x678,&local_res10);
  if (iVar4 != 0) {
    FUN_140ae1160(param_1,param_2);
  }
  return;
}



// FUNCTION 140ad3a70 FUN_140ad3a70 body=42 status=ok
// SIG undefined FUN_140ad3a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ad3a70(longlong param_1)

{
  FUN_140679b20();
  *(undefined8 *)(param_1 + 0x70) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x78) = DAT_1468b5d98;
  return;
}



// FUNCTION 140ad3aa0 FUN_140ad3aa0 body=234 status=ok
// SIG undefined FUN_140ad3aa0(void)

void FUN_140ad3aa0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong local_res10;
  
  iVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar2 = (**(code **)(*param_2 + 0x560))(param_2,iVar4);
      if (lVar2 == 0) {
LAB_140ad3b2e:
        lVar3 = UMaterialInstanceDynamic::Create(lVar2,param_1);
        bVar5 = lVar3 != lVar2;
        lVar2 = lVar3;
        if (bVar5) {
          (**(code **)(*param_2 + 0x568))(param_2,iVar4,lVar3);
        }
      }
      else {
        lVar3 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_140ad3b2e;
      }
      if (lVar2 != 0) {
        local_res10 = lVar2;
        (*(code *)*param_3)(param_3[1],&local_res10);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



// FUNCTION 140ad3b90 FUN_140ad3b90 body=524 status=ok
// SIG undefined FUN_140ad3b90(void)

void FUN_140ad3b90(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_18;
  int local_10;
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar4,&local_18);
LAB_140ad3bc7:
  do {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    lVar5 = FWeakObjectPtr::Get();
    if (lVar5 != 0) {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar6 = *(longlong *)(lVar5 + 0x498), lVar6 != 0)) {
        lVar7 = FUN_1413ffe00();
        lVar1 = *(longlong *)(lVar6 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar8 = (longlong *)FUN_140c430a0(lVar6,CONCAT71((int7)((ulonglong)lVar1 >> 8),3));
          if (plVar8 != (longlong *)0x0) {
            iVar9 = 0;
            if (0 < *(int *)(lVar6 + 0x1520)) {
              do {
                FUN_140c57820(lVar6,0,0,1,1);
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(lVar6 + 0x1520));
            }
            (**(code **)(*plVar8 + 0x4a8))(plVar8,1);
          }
          if (param_1[0xc1] != 0) {
            FUN_142d49dd0(lVar6,lVar6,*(undefined8 *)(param_1[0xc1] + 0x120));
            if (*(longlong *)(lVar5 + 0x978) != 0) {
              FUN_142e724b0(*(longlong *)(lVar5 + 0x978),*(undefined8 *)(param_1[0xc1] + 0x98),
                            DAT_1468680c8,0);
            }
            plVar8 = *(longlong **)(lVar5 + 0x498);
            if (((plVar8 != (longlong *)0x0) && (*(longlong *)(param_1[0xc1] + 0xe0) != 0)) &&
               (param_1[0xc0] != 0)) {
              cVar3 = (**(code **)(*plVar8 + 0x778))(plVar8);
              if (cVar3 != '\0') {
                FUN_140ae1030();
                local_10 = local_10 + 1;
                goto LAB_140ad3bc7;
              }
              FUN_141321d40(param_1[0xc0],plVar8);
            }
          }
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}



// FUNCTION 140ad3db0 FUN_140ad3db0 body=108 status=ok
// SIG undefined FUN_140ad3db0(void)

undefined8 * FUN_140ad3db0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468682a0) {
    _Init_thread_header(&DAT_1468682a0);
    if (DAT_1468682a0 == -1) {
      atexit((_func_5014 *)&LAB_143e495d0);
      _Init_thread_footer(&DAT_1468682a0);
      return &DAT_146868290;
    }
  }
  return &DAT_146868290;
}



// FUNCTION 140ad3e20 FUN_140ad3e20 body=388 status=ok
// SIG undefined FUN_140ad3e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ad3e20(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468682d0) {
    _Init_thread_header(&DAT_1468682d0);
    if (DAT_1468682d0 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"FFYLState",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"ffyl_state",&DAT_14424db94);
      FUN_14217c110(&DAT_1468682b8,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_1468682c0);
      FUN_14217bd20(&DAT_1468682c8);
      uVar2 = DAT_1468682b8;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"ffyl_state",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468682b8;
      _DAT_1468682c0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"ffyl_revivers",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_1468682c8 = *puVar1;
      _Init_thread_footer(&DAT_1468682d0);
      return &DAT_1468682b8;
    }
  }
  return &DAT_1468682b8;
}



// FUNCTION 140ad3fb0 FUN_140ad3fb0 body=163 status=ok
// SIG undefined FUN_140ad3fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ad3fb0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  if ((*(longlong *)(param_1 + 0xbd8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xbd8) + 0x168), lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x220);
    uVar2 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 140ad4060 IsClothingSimulationSuspended body=8 status=ok
// SIG undefined IsClothingSimulationSuspended(void)

undefined1 USkeletalMeshComponent::IsClothingSimulationSuspended(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xbd0);
}



// FUNCTION 140ad4070 FUN_140ad4070 body=117 status=ok
// SIG undefined FUN_140ad4070(void)

void FUN_140ad4070(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_2 != (undefined8 *)(param_1 + 0xc08)) {
    _Src = *(void **)(param_1 + 0xc08);
    iVar1 = *(int *)(param_1 + 0xc10);
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 4);
  }
  return;
}



// FUNCTION 140ad4100 FUN_140ad4100 body=292 status=ok
// SIG undefined FUN_140ad4100(void)

longlong FUN_140ad4100(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (**(code **)(*param_2 + 0x560))(param_2,param_3);
  bVar2 = false;
  lVar5 = lVar3;
  if (param_4 != 0) {
    lVar5 = param_4;
  }
  if (lVar3 != 0) {
    lVar4 = FUN_1429ba110();
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
      if ((lVar3 != lVar5) && (*(longlong *)(lVar3 + 0x90) != lVar5)) {
        FUN_1425a2620(lVar3,lVar5);
        thunk_FUN_142588c20(lVar3);
        bVar2 = true;
      }
      if (!bVar2) {
        return lVar3;
      }
      (**(code **)(*param_2 + 0x568))(param_2,param_3,0);
      (**(code **)(*param_2 + 0x568))(param_2,param_3,lVar3);
      return lVar3;
    }
  }
  lVar5 = UMaterialInstanceDynamic::Create(lVar5,param_1);
  if (lVar5 != lVar3) {
    (**(code **)(*param_2 + 0x568))(param_2,param_3,lVar5);
  }
  return lVar5;
}



// FUNCTION 140ad4230 FUN_140ad4230 body=286 status=ok
// SIG undefined FUN_140ad4230(void)

longlong FUN_140ad4230(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_2 + 0x678))(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
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
      return lVar2;
    }
  }
  lVar2 = (**(code **)(*param_2 + 0x670))(param_2);
  if (lVar2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x848), lVar2 != 0)) {
      lVar3 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140ad4350 FUN_140ad4350 body=120 status=ok
// SIG undefined FUN_140ad4350(void)

longlong FUN_140ad4350(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_2 + 0x690))(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140ad43d0 FUN_140ad43d0 body=83 status=ok
// SIG undefined FUN_140ad43d0(void)

undefined8 * FUN_140ad43d0(longlong param_1,undefined8 *param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x1b8))) {
    FString::FString(param_2,(longlong)
                             *(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)param_3 * 4) * 0x20
                             + *(longlong *)(param_1 + 0x188));
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140ad4430 FUN_140ad4430 body=46 status=ok
// SIG undefined FUN_140ad4430(void)

undefined4 FUN_140ad4430(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1b8))) {
    return *(undefined4 *)
            ((longlong)*(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)param_2 * 4) * 0x20 +
             0x14 + *(longlong *)(param_1 + 0x188));
  }
  return 0;
}



// FUNCTION 140ad4460 FUN_140ad4460 body=46 status=ok
// SIG undefined FUN_140ad4460(void)

undefined4 FUN_140ad4460(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1b8))) {
    return *(undefined4 *)
            ((longlong)*(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)param_2 * 4) * 0x20 +
             0x18 + *(longlong *)(param_1 + 0x188));
  }
  return 0;
}



// FUNCTION 140ad4490 FUN_140ad4490 body=921 status=ok
// SIG undefined FUN_140ad4490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ad4490(longlong param_1,float *param_2,undefined8 *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar13 = *(longlong **)(param_1 + 0x500);
  uVar17 = 0;
  iVar18 = 0;
  auVar23 = *(undefined1 (*) [16])(plVar13 + 0x46);
  fVar2 = auVar23._0_4_;
  fVar3 = auVar23._4_4_;
  fVar4 = auVar23._8_4_;
  fVar5 = *(float *)(plVar13 + 0x42);
  fVar6 = *(float *)((longlong)plVar13 + 0x214);
  fVar7 = *(float *)(plVar13 + 0x43);
  fVar8 = *(float *)((longlong)plVar13 + 0x21c);
  fVar9 = *(float *)(plVar13 + 0x44);
  fVar10 = *(float *)((longlong)plVar13 + 0x224);
  fVar11 = *(float *)(plVar13 + 0x45);
  fVar26 = fVar5 * _DAT_146867d10;
  fVar27 = fVar6 * fRam0000000146867d14;
  fVar28 = fVar7 * fRam0000000146867d18;
  fVar29 = fVar8 * fRam0000000146867d1c;
  auVar23 = rcpps(in_XMM5,auVar23);
  fVar30 = (float)((uint)(*param_2 - fVar9) & _DAT_146867c50);
  fVar32 = (float)((uint)(param_2[1] - fVar10) & uRam0000000146867c54);
  fVar33 = (float)((uint)(param_2[2] - fVar11) & uRam0000000146867c58);
  fVar19 = fVar33 * fVar27 - fVar32 * fVar28;
  fVar20 = fVar30 * fVar28 - fVar33 * fVar26;
  fVar21 = fVar32 * fVar26 - fVar30 * fVar27;
  fVar31 = auVar23._0_4_;
  fVar24 = auVar23._4_4_;
  fVar25 = auVar23._8_4_;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  fVar21 = fVar21 + fVar21;
  fVar22 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar2;
  fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar3;
  fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar4;
  fVar31 = 3.4028235e+38;
  fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar2;
  fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar3;
  fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar4;
  local_e8 = ((fVar21 * fVar27 - fVar20 * fVar28) + fVar29 * fVar19 + fVar30) *
             (float)(-(uint)((float)((uint)fVar2 & _DAT_146867cd0) <= _DAT_146867d00) & (uint)fVar22
                    ^ (uint)fVar22);
  local_e4 = ((fVar19 * fVar28 - fVar21 * fVar26) + fVar29 * fVar20 + fVar32) *
             (float)(-(uint)((float)((uint)fVar3 & uRam0000000146867cd4) <= fRam0000000146867d04) &
                     (uint)fVar24 ^ (uint)fVar24);
  local_e0 = ((fVar20 * fVar26 - fVar19 * fVar27) + fVar29 * fVar21 + fVar33) *
             (float)(-(uint)((float)((uint)fVar4 & uRam0000000146867cd8) <= fRam0000000146867d08) &
                     (uint)fVar25 ^ (uint)fVar25);
  iVar12 = (**(code **)(*plVar13 + 0x6c8))();
  if (0 < iVar12) {
    do {
      plVar13 = (longlong *)FUN_140975c20(*(undefined8 *)(param_1 + 0x500),iVar18);
      if (((plVar13 != (longlong *)0x0) && (2 < (int)plVar13[3])) &&
         (iVar12 = 0, 0 < (int)plVar13[3])) {
        lVar16 = 8;
        do {
          lVar1 = *plVar13;
          lVar15 = plVar13[2];
          lVar14 = (longlong)*(int *)(lVar15 + -8 + lVar16) * 0x4c;
          local_b8 = *(undefined8 *)(lVar14 + lVar1);
          local_b0 = *(undefined4 *)(lVar14 + 8 + lVar1);
          lVar14 = (longlong)*(int *)(lVar15 + -4 + lVar16) * 0x4c;
          local_ac = *(undefined8 *)(lVar14 + lVar1);
          local_a4 = *(undefined4 *)(lVar14 + 8 + lVar1);
          lVar15 = (longlong)*(int *)(lVar15 + lVar16) * 0x4c;
          local_a0 = *(undefined8 *)(lVar15 + lVar1);
          local_98 = *(undefined4 *)(lVar15 + 8 + lVar1);
          local_f8 = &local_a0;
          FUN_141622e50(&local_d8,&local_e8,&local_b8,&local_ac);
          fVar19 = (local_d4 - local_e4) * (local_d4 - local_e4) +
                   (local_d8 - local_e8) * (local_d8 - local_e8) +
                   (local_d0 - local_e0) * (local_d0 - local_e0);
          if (fVar19 < fVar31) {
            fVar22 = local_d8 * fVar2;
            fVar24 = local_d4 * fVar3;
            fVar25 = local_d0 * fVar4;
            uVar17 = 1;
            fVar31 = fVar25 * fVar6 - fVar24 * fVar7;
            fVar20 = fVar22 * fVar7 - fVar25 * fVar5;
            fVar21 = fVar24 * fVar5 - fVar22 * fVar6;
            fVar31 = fVar31 + fVar31;
            fVar20 = fVar20 + fVar20;
            fVar21 = fVar21 + fVar21;
            local_c0 = (fVar20 * fVar5 - fVar31 * fVar6) + fVar8 * fVar21 + fVar25 + fVar11;
            *param_3 = CONCAT44((fVar31 * fVar7 - fVar21 * fVar5) + fVar8 * fVar20 + fVar24 + fVar10
                                ,(fVar21 * fVar6 - fVar20 * fVar7) + fVar8 * fVar31 + fVar22 + fVar9
                               );
            *(float *)(param_3 + 1) = local_c0;
            fVar31 = fVar19;
          }
          iVar12 = iVar12 + 3;
          lVar16 = lVar16 + 0xc;
        } while (iVar12 < (int)plVar13[3]);
      }
      iVar18 = iVar18 + 1;
      iVar12 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x6c8))();
    } while (iVar18 < iVar12);
  }
  return uVar17;
}



// FUNCTION 140ad4830 GetForceShadowLOD body=7 status=ok
// SIG undefined GetForceShadowLOD(void)

undefined4 FStaticMeshSceneProxy::GetForceShadowLOD(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x19c);
}



// FUNCTION 140ad4840 FUN_140ad4840 body=8 status=ok
// SIG undefined FUN_140ad4840(void)

undefined8 FUN_140ad4840(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc18);
}



// FUNCTION 140ad4850 IsLoadoutLoaded body=8 status=ok
// SIG undefined IsLoadoutLoaded(void)

undefined1 ASBZPlayerState::IsLoadoutLoaded(longlong param_1)

{
  return *(undefined1 *)(param_1 + 3000);
}



// FUNCTION 140ad4860 FUN_140ad4860 body=493 status=ok
// SIG undefined FUN_140ad4860(void)

undefined8 * FUN_140ad4860(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *_Src;
  longlong lVar6;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  ulonglong local_30;
  
  local_60 = 5;
  local_68 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  pvVar2 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"none",10);
  local_38 = (void *)0x0;
  local_30 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  pvVar5 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"stable",0xe);
  local_48 = (void *)0x0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  pvVar4 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"transitioning",0x1c);
  local_58 = (void *)0x0;
  local_50 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  pvVar3 = local_58;
  FGenericPlatformString::Memcpy(local_58,L"complete",0x12);
  cVar1 = *(char *)(param_1 + 3000);
  *param_2 = 0;
  if (cVar1 == '\0') {
LAB_140ad495d:
    lVar6 = (longlong)(int)local_60;
    *(int *)(param_2 + 1) = (int)local_60;
    if ((int)local_60 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_140ad49f8;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_60 & 0xffffffff,0);
    _Src = pvVar2;
  }
  else if (cVar1 == '\x01') {
    lVar6 = (longlong)(int)local_30;
    *(int *)(param_2 + 1) = (int)local_30;
    if ((int)local_30 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_140ad49f8;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_30 & 0xffffffff,0);
    _Src = pvVar5;
  }
  else if (cVar1 == '\x02') {
    lVar6 = (longlong)(int)local_40;
    *(int *)(param_2 + 1) = (int)local_40;
    if ((int)local_40 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_140ad49f8;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_40 & 0xffffffff,0);
    _Src = pvVar4;
  }
  else {
    if (cVar1 != '\x03') goto LAB_140ad495d;
    lVar6 = (longlong)(int)local_50;
    *(int *)(param_2 + 1) = (int)local_50;
    if ((int)local_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_140ad49f8;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_50 & 0xffffffff,0);
    _Src = pvVar3;
  }
  _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,lVar6 * 2);
LAB_140ad49f8:
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return param_2;
}



// FUNCTION 140ad4a50 FUN_140ad4a50 body=97 status=ok
// SIG undefined FUN_140ad4a50(void)

undefined8 FUN_140ad4a50(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x58;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"Prioritizes enemies that are in the down-state and for whom I am the assigned attacker."
             ,0xb0);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140ad4ac0 FUN_140ad4ac0 body=97 status=ok
// SIG undefined FUN_140ad4ac0(void)

undefined8 FUN_140ad4ac0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x27;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Is Assigned Attacker for Downed Target",0x4e);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140ad4b30 FUN_140ad4b30 body=63 status=ok
// SIG undefined FUN_140ad4b30(void)

undefined8 FUN_140ad4b30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x3d0);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x3d0);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fea0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140ad4b70 FUN_140ad4b70 body=9 status=ok
// SIG undefined FUN_140ad4b70(void)

undefined4 FUN_140ad4b70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc28);
}



// FUNCTION 140ad4b80 FUN_140ad4b80 body=6 status=ok
// SIG undefined FUN_140ad4b80(void)

undefined4 FUN_140ad4b80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 140ad4b90 FUN_140ad4b90 body=28 status=ok
// SIG undefined FUN_140ad4b90(void)

longlong FUN_140ad4b90(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x48))) {
    return (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x40);
  }
  return 0;
}



// FUNCTION 140ad4bb0 FUN_140ad4bb0 body=21 status=ok
// SIG undefined FUN_140ad4bb0(void)

undefined1 FUN_140ad4bb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xbb0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0xbb0) + 0x1c1);
  }
  return 0;
}



// FUNCTION 140ad4bd0 FUN_140ad4bd0 body=21 status=ok
// SIG undefined FUN_140ad4bd0(void)

undefined1 FUN_140ad4bd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xbb0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0xbb0) + 0x1c0);
  }
  return 0;
}



// FUNCTION 140ad4bf0 FUN_140ad4bf0 body=21 status=ok
// SIG undefined FUN_140ad4bf0(void)

undefined8 FUN_140ad4bf0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xbb0) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x1b8);
  }
  return 0;
}



// FUNCTION 140ad4c10 FUN_140ad4c10 body=117 status=ok
// SIG undefined FUN_140ad4c10(void)

void FUN_140ad4c10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_2 != (undefined8 *)(param_1 + 0xbe8)) {
    _Src = *(void **)(param_1 + 0xbe8);
    iVar1 = *(int *)(param_1 + 0xbf0);
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return;
}



// FUNCTION 140ad4c90 FUN_140ad4c90 body=387 status=ok
// SIG undefined FUN_140ad4c90(void)

undefined8 * FUN_140ad4c90(longlong param_1,undefined8 *param_2)

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
  
  if ((*(longlong *)(param_1 + 0x158) != 0) && (*(longlong *)(param_1 + 0x160) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x160) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_20 = *(longlong **)(param_1 + 0x160);
      local_28 = 0;
      if (local_20 == (longlong *)0x0) {
LAB_140ad4d32:
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
              local_28 = *(undefined8 *)(param_1 + 0x158);
            }
            goto LAB_140ad4d32;
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
      goto LAB_140ad4d59;
    }
  }
  puVar8 = &local_18;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  bVar3 = false;
  bVar9 = true;
  uVar7 = 0;
LAB_140ad4d59:
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



// FUNCTION 140ad4e20 FUN_140ad4e20 body=8 status=ok
// SIG undefined FUN_140ad4e20(void)

undefined8 FUN_140ad4e20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xbb0);
}



// FUNCTION 140ad4e30 FUN_140ad4e30 body=42 status=ok
// SIG undefined FUN_140ad4e30(void)

longlong * FUN_140ad4e30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x38) * 0x13;
  while( true ) {
    if (plVar1 == plVar2) {
      return (longlong *)0x0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 0x13;
  }
  return plVar1;
}



// FUNCTION 140ad4e60 FUN_140ad4e60 body=232 status=ok
// SIG undefined FUN_140ad4e60(void)

void FUN_140ad4e60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140afc270();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468683d0) && (_Init_thread_header(&DAT_1468683d0), DAT_1468683d0 == -1))
  {
    uVar1 = ALandscapeStreamingProxy::StaticClass();
    ALandscapeStreamingProxy::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsAnyoneInteracting",1);
    DAT_1468683c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468683d0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_1468683c8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468683c8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468683c8 + 0x30));
  }
  return;
}



// FUNCTION 140ad4f50 FUN_140ad4f50 body=232 status=ok
// SIG undefined FUN_140ad4f50(void)

void FUN_140ad4f50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140afc270();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468683f0) && (_Init_thread_header(&DAT_1468683f0), DAT_1468683f0 == -1))
  {
    uVar1 = ADragonHeart::GetPrivateStaticClass();
    ADragonHeart::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PriorityTrackedTarget",1);
    DAT_1468683e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468683f0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_1468683e8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468683e8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468683e8 + 0x30));
  }
  return;
}



// FUNCTION 140ad5040 FUN_140ad5040 body=433 status=ok
// SIG undefined FUN_140ad5040(void)

void FUN_140ad5040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140e80390();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468683a0) && (_Init_thread_header(&DAT_1468683a0), DAT_1468683a0 == -1)) {
    uVar1 = FUN_14131fc50();
    FUN_14131fc50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GearUpDataPrivate",1);
    DAT_146868398 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468683a0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868398 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146868398 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868398 + 0x30));
  }
  if ((*piVar5 < DAT_1468683b0) && (_Init_thread_header(&DAT_1468683b0), DAT_1468683b0 == -1)) {
    uVar1 = FUN_14131fc50();
    FUN_14131fc50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DeathCirclePrivate",1);
    DAT_1468683a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468683b0);
  }
  if (0 < *(int *)(DAT_1468683a8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468683a8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468683a8 + 0x30));
  }
  return;
}



// FUNCTION 140ad5200 FUN_140ad5200 body=232 status=ok
// SIG undefined FUN_140ad5200(void)

void FUN_140ad5200(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140afc270();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468683c0) && (_Init_thread_header(&DAT_1468683c0), DAT_1468683c0 == -1))
  {
    uVar1 = FUN_14131f750();
    FUN_14131f750();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bAlreadyUsed",1);
    DAT_1468683b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468683c0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_1468683b8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468683b8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468683b8 + 0x30));
  }
  return;
}



// FUNCTION 140ad52f0 FUN_140ad52f0 body=232 status=ok
// SIG undefined FUN_140ad52f0(void)

void FUN_140ad52f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468683e0) && (_Init_thread_header(&DAT_1468683e0), DAT_1468683e0 == -1))
  {
    uVar1 = FUN_1412ea9c0();
    FUN_1412ea9c0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"IndicesOfCurrentCards",1);
    DAT_1468683d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468683e0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_1468683d8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468683d8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468683d8 + 0x30));
  }
  return;
}



// FUNCTION 140ad53e0 FUN_140ad53e0 body=2176 status=ok
// SIG undefined FUN_140ad53e0(void)

void FUN_140ad53e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468682e0) && (_Init_thread_header(&DAT_1468682e0), DAT_1468682e0 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DownTimeResourcePool",1);
    DAT_1468682d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468682e0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468682d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468682d8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468682d8 + 0x30));
  }
  if ((*piVar5 < DAT_1468682f0) && (_Init_thread_header(&DAT_1468682f0), DAT_1468682f0 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentDownState",1);
    DAT_1468682e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468682f0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468682e8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468682e8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468682e8 + 0x30));
  }
  if ((*piVar5 < DAT_146868300) && (_Init_thread_header(&DAT_146868300), DAT_146868300 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BeingRevivedTimeResourcePool",1);
    DAT_1468682f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868300);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468682f8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468682f8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468682f8 + 0x30));
  }
  if ((*piVar5 < DAT_146868310) && (_Init_thread_header(&DAT_146868310), DAT_146868310 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RevivingTimeResourcePool",1);
    DAT_146868308 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868310);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868308 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868308 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868308 + 0x30));
  }
  if ((*piVar5 < DAT_146868320) && (_Init_thread_header(&DAT_146868320), DAT_146868320 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReviveState",1);
    DAT_146868318 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868320);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868318 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868318 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868318 + 0x30));
  }
  if ((*piVar5 < DAT_146868330) && (_Init_thread_header(&DAT_146868330), DAT_146868330 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bReviveSuccessful",1);
    DAT_146868328 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868330);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868328 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868328 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868328 + 0x30));
  }
  if ((*piVar5 < DAT_146868340) && (_Init_thread_header(&DAT_146868340), DAT_146868340 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DownStateExitReason",1);
    DAT_146868338 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868340);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868338 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868338 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868338 + 0x30));
  }
  if ((*piVar5 < DAT_146868350) && (_Init_thread_header(&DAT_146868350), DAT_146868350 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActorToRevive",1);
    DAT_146868348 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868350);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868348 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868348 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868348 + 0x30));
  }
  if ((*piVar5 < DAT_146868360) && (_Init_thread_header(&DAT_146868360), DAT_146868360 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActorsRevivingCount",1);
    DAT_146868358 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868360);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868358 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868358 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868358 + 0x30));
  }
  if ((*piVar5 < DAT_146868370) && (_Init_thread_header(&DAT_146868370), DAT_146868370 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bBeingRevivedByPlayer",1);
    DAT_146868368 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868370);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868368 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868368 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868368 + 0x30));
  }
  if ((*piVar5 < DAT_146868380) && (_Init_thread_header(&DAT_146868380), DAT_146868380 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bSuppressWidget",1);
    DAT_146868378 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868380);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146868378 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868378 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146868378 + 0x30));
  }
  if ((*piVar5 < DAT_146868390) && (_Init_thread_header(&DAT_146868390), DAT_146868390 == -1)) {
    uVar1 = FUN_141312e30();
    FUN_141312e30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bRevivingParticleActive",1);
    DAT_146868388 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146868390);
  }
  if (0 < *(int *)(DAT_146868388 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146868388 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146868388 + 0x30));
  }
  return;
}



// FUNCTION 140ad5c60 FUN_140ad5c60 body=27 status=ok
// SIG undefined FUN_140ad5c60(void)

undefined8 FUN_140ad5c60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x40);
  }
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x38);
  }
  return 0;
}



// FUNCTION 140ad5c80 GetResponseCode body=7 status=ok
// SIG undefined GetResponseCode(void)

undefined4 UVaRestRequestJSON::GetResponseCode(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1b8);
}



// FUNCTION 140ad5c90 FUN_140ad5c90 body=163 status=ok
// SIG undefined FUN_140ad5c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ad5c90(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  if ((*(longlong *)(param_1 + 0xbe0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xbe0) + 0x168), lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x220);
    uVar2 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 140ad5d40 FUN_140ad5d40 body=261 status=ok
// SIG undefined FUN_140ad5d40(void)

longlong FUN_140ad5d40(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = param_2[5];
  if ((lVar3 == 0) && (lVar3 = 0, *param_2 != 0)) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar3 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
    param_2[5] = lVar3;
    FUN_14260f940(lVar3,*param_2);
    plVar4 = (longlong *)FUN_14222b250(param_1,param_2[1],0);
    if ((((plVar4 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar4 + 0x440))(plVar4,param_2[1]), cVar1 == '\0')) &&
        (*(longlong *)(param_1 + 0x4e0) != 0)) &&
       (plVar5 = (longlong *)FUN_14222b250(*(longlong *)(param_1 + 0x4e0),param_2[1],0),
       plVar5 != (longlong *)0x0)) {
      plVar4 = plVar5;
    }
    FUN_142399e30(param_2[5],plVar4,param_2[1]);
    FUN_14234b150(param_2[5]);
    return param_2[5];
  }
  return lVar3;
}



// FUNCTION 140ad5e50 FUN_140ad5e50 body=286 status=ok
// SIG undefined FUN_140ad5e50(void)

longlong FUN_140ad5e50(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  undefined8 local_10;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x460) != 0)) {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar5 = FUN_14148cad0();
    FUN_14238c280(*(undefined8 *)(param_1 + 0x460),&local_18,uVar5);
    plVar1 = local_18 + (int)local_10;
    for (plVar7 = local_18; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar6 = FUN_14148cad0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (param_3 == '\0') {
            cVar4 = FUN_14122f0d0(lVar2,param_2);
            if (cVar4 != '\0') goto LAB_140ad5f13;
          }
          else if (*(longlong *)(lVar2 + 0x8d8) == param_2) {
LAB_140ad5f13:
            if (local_18 == (longlong *)0x0) {
              return lVar2;
            }
            FMemory::Free();
            return lVar2;
          }
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return 0;
}



// FUNCTION 140ad5f70 FUN_140ad5f70 body=103 status=ok
// SIG undefined FUN_140ad5f70(void)

longlong FUN_140ad5f70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x848);
  if (lVar1 != 0) {
    lVar3 = FUN_1413ffe00();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140ad5fe0 FUN_140ad5fe0 body=9 status=ok
// SIG undefined FUN_140ad5fe0(void)

undefined4 FUN_140ad5fe0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



// FUNCTION 140ad5ff0 FUN_140ad5ff0 body=81 status=ok
// SIG undefined FUN_140ad5ff0(void)

undefined8 FUN_140ad5ff0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x500);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*plVar2 + 0x560))(plVar2,0);
    if (lVar1 != 0) {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x500) + 0x560))
                         (*(longlong **)(param_1 + 0x500),0);
                    /* WARNING: Could not recover jumptable at 0x000140ad6032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140ad6050 FUN_140ad6050 body=117 status=ok
// SIG undefined FUN_140ad6050(void)

undefined1 FUN_140ad6050(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  
  if (param_3 == '\0') {
    uVar1 = FUN_140adaed0(*(undefined8 *)(param_1 + 0x460));
    return uVar1;
  }
  cVar2 = FUN_140adaed0(*(undefined8 *)(param_1 + 0x468));
  cVar3 = FUN_140adaed0(*(undefined8 *)(param_1 + 0x478),param_2);
  if ((cVar2 != '\0') && (cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140ad60e0 FUN_140ad60e0 body=23 status=ok
// SIG undefined FUN_140ad60e0(void)

undefined8 FUN_140ad60e0(longlong param_1)

{
  if (*(int *)(param_1 + 0x640) != 0) {
    return **(undefined8 **)(param_1 + 0x638);
  }
  return 0;
}



// FUNCTION 140ad6100 FUN_140ad6100 body=58 status=ok
// SIG undefined FUN_140ad6100(void)

longlong FUN_140ad6100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x638);
    plVar1 = plVar3 + *(int *)(param_1 + 0x640);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x4d8) == param_2)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140ad6140 FUN_140ad6140 body=117 status=ok
// SIG undefined FUN_140ad6140(void)

void FUN_140ad6140(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_2 != (undefined8 *)(param_1 + 0xbf8)) {
    _Src = *(void **)(param_1 + 0xbf8);
    iVar1 = *(int *)(param_1 + 0xc00);
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return;
}



// FUNCTION 140ad61c0 FUN_140ad61c0 body=236 status=ok
// SIG undefined FUN_140ad61c0(void)

undefined8 FUN_140ad61c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x10e6) == '\x02') {
    if (*(longlong *)(param_1 + 0x10d8) != 0) {
      cVar1 = FUN_142d52a00(param_1 + 0x10b0);
      if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x10d8) != 0)) {
        FUN_140ada660(param_1);
      }
      cVar1 = FUN_142d52a00(param_1 + 0x10b0);
      if (cVar1 == '\0') {
        return 0;
      }
      param_1 = param_1 + 0x10b0;
      goto LAB_140ad627f;
    }
  }
  else if (*(char *)(param_1 + 0x10e6) == '\x01') {
    cVar1 = FUN_142d52a00(param_1 + 0x10b0);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x118) != 0)) {
      FUN_140ada660(param_1);
    }
    cVar1 = FUN_142d52a00(param_1 + 0x10b0);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1 = param_1 + 0x10b0;
    goto LAB_140ad627f;
  }
  cVar1 = FUN_142d52a00(param_1 + 0x1098);
  if (cVar1 == '\0') {
    return 0;
  }
  param_1 = param_1 + 0x1098;
LAB_140ad627f:
  uVar2 = FUN_142d52a20(param_1);
  uVar2 = FArchive::operator<<(uVar2);
  uVar2 = FUN_142d5fea0(uVar2);
  return uVar2;
}



// FUNCTION 140ad62b0 FUN_140ad62b0 body=66 status=ok
// SIG undefined FUN_140ad62b0(void)

void FUN_140ad62b0(longlong param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *(undefined8 *)(param_1 + 0x118);
  uStack_10 = 0;
  FUN_142ca2f00(*(undefined8 *)(param_1 + 0x1090),&local_18,0x3f800000);
  return;
}



// FUNCTION 140ad6300 FUN_140ad6300 body=796 status=ok
// SIG undefined FUN_140ad6300(void)

float * FUN_140ad6300(longlong *param_1,float *param_2,float param_3,char param_4,float *param_5,
                     char param_6,float param_7)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (*param_5 - 1.0) * 0.11111111;
  if (param_6 == '\0') {
    fVar5 = fVar3 * *(float *)((longlong)param_1 + 0x2c);
    fVar3 = fVar3 * *(float *)(param_1 + 5);
  }
  else if (param_6 == '\x01') {
    fVar5 = fVar3 * *(float *)(param_1 + 9);
    fVar3 = fVar3 * *(float *)((longlong)param_1 + 0x44);
  }
  else {
    fVar5 = fVar3 * *(float *)((longlong)param_1 + 100);
    fVar3 = fVar3 * *(float *)(param_1 + 0xc);
  }
  *param_2 = fVar3;
  param_2[1] = fVar5;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    fVar3 = 0.85;
  }
  else {
    fVar3 = *(float *)(lVar2 + 0x88);
  }
  if (param_3 < fVar3) {
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    goto LAB_140ad65db;
  }
  fVar5 = param_7 + *(float *)((longlong)param_1 + 0xc);
  fVar3 = param_7 + *(float *)(param_1 + 1);
  *(float *)((longlong)param_1 + 0xc) = fVar5;
  *(float *)(param_1 + 1) = fVar3;
  if (param_6 == '\x01') {
    if (*(float *)(param_1 + 0xb) <= fVar5) {
      if (param_4 == '\0') {
        fVar3 = *(float *)(param_1 + 4) + param_7;
        param_7 = *(float *)((longlong)param_1 + 0x1c) - param_7;
      }
      else {
        fVar3 = *(float *)(param_1 + 4) - param_7;
        param_7 = *(float *)((longlong)param_1 + 0x1c) + param_7;
      }
      fVar5 = *(float *)((longlong)param_1 + 0x54);
      if (0.0 <= param_7) {
        fVar6 = fVar5;
        if (param_7 <= fVar5) {
          fVar6 = param_7;
        }
      }
      else {
        fVar6 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x1c) = fVar6;
      if (0.0 <= fVar3) {
        fVar4 = fVar5;
        if (fVar3 <= fVar5) {
          fVar4 = fVar3;
        }
      }
      else {
        fVar4 = 0.0;
      }
      fVar7 = *param_2;
      fVar3 = *(float *)(param_1 + 10);
      fVar1 = param_2[1];
      *(float *)(param_1 + 4) = fVar4;
      if (fVar5 <= 0.0) {
        *param_2 = *(float *)((longlong)param_1 + 0x4c) + fVar7;
        param_2[1] = fVar1 + fVar3;
      }
      else {
        fVar6 = fVar6 * (1.0 / fVar5) * *(float *)((longlong)param_1 + 0x4c);
        param_2[1] = (1.0 / fVar5) * fVar4 * fVar3 + fVar1;
LAB_140ad65b0:
        *param_2 = fVar6 + fVar7;
      }
    }
  }
  else if (param_6 == '\0') {
    if ((char)param_1[2] != '\0') {
      fVar3 = 0.0;
      param_1[1] = 0;
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    }
    if (*(float *)((longlong)param_1 + 0x3c) <= fVar3) {
      if (param_4 == '\0') {
        fVar3 = *(float *)(param_1 + 3) + param_7;
        param_7 = *(float *)((longlong)param_1 + 0x14) - param_7;
      }
      else {
        fVar3 = *(float *)(param_1 + 3) - param_7;
        param_7 = *(float *)((longlong)param_1 + 0x14) + param_7;
      }
      fVar5 = *(float *)(param_1 + 7);
      if (0.0 <= param_7) {
        if (fVar5 <= param_7) {
          param_7 = fVar5;
        }
      }
      else {
        param_7 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x14) = param_7;
      if (0.0 <= fVar3) {
        fVar6 = *(float *)(param_1 + 6);
        if (fVar5 <= fVar3) {
          fVar3 = fVar5;
        }
        fVar4 = *(float *)((longlong)param_1 + 0x34);
      }
      else {
        fVar6 = *(float *)(param_1 + 6);
        fVar3 = 0.0;
        fVar4 = *(float *)((longlong)param_1 + 0x34);
      }
LAB_140ad656a:
      fVar1 = param_2[1];
      fVar7 = *param_2;
      *(float *)(param_1 + 3) = fVar3;
      if (fVar5 <= 0.0) {
        param_2[1] = fVar4 + fVar1;
        goto LAB_140ad65b0;
      }
      *param_2 = param_7 * (1.0 / fVar5) * fVar6 + fVar7;
      param_2[1] = (1.0 / fVar5) * fVar3 * fVar4 + fVar1;
    }
  }
  else {
    if ((char)param_1[2] != '\x02') {
      fVar3 = 0.0;
      param_1[1] = 0;
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    }
    if (*(float *)((longlong)param_1 + 0x74) <= fVar3) {
      if (param_4 == '\0') {
        fVar3 = *(float *)(param_1 + 3) + param_7;
        param_7 = *(float *)((longlong)param_1 + 0x14) - param_7;
      }
      else {
        fVar3 = *(float *)(param_1 + 3) - param_7;
        param_7 = *(float *)((longlong)param_1 + 0x14) + param_7;
      }
      fVar5 = *(float *)(param_1 + 0xe);
      if (0.0 <= param_7) {
        if (fVar5 <= param_7) {
          param_7 = fVar5;
        }
      }
      else {
        param_7 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x14) = param_7;
      if (0.0 <= fVar3) {
        if (fVar5 <= fVar3) {
          fVar3 = fVar5;
        }
      }
      else {
        fVar3 = 0.0;
      }
      fVar6 = *(float *)(param_1 + 0xd);
      fVar4 = *(float *)((longlong)param_1 + 0x6c);
      goto LAB_140ad656a;
    }
  }
  *(char *)(param_1 + 2) = param_6;
LAB_140ad65db:
  fVar3 = 720.0;
  *(char *)((longlong)param_1 + 0x11) = param_4;
  if (lVar2 == 0) {
    fVar5 = 720.0;
  }
  else {
    fVar5 = *(float *)(lVar2 + 0x34);
  }
  if (*param_2 <= fVar5) {
    fVar5 = *param_2;
  }
  *param_2 = fVar5;
  if (lVar2 != 0) {
    fVar3 = *(float *)(lVar2 + 0x34);
  }
  if (param_2[1] <= fVar3) {
    fVar3 = param_2[1];
  }
  param_2[1] = fVar3;
  return param_2;
}



// FUNCTION 140ad6620 FUN_140ad6620 body=93 status=ok
// SIG undefined FUN_140ad6620(void)

undefined1 * FUN_140ad6620(longlong param_1,undefined1 *param_2,float param_3)

{
  byte bVar1;
  
  FUN_140aae440();
  bVar1 = *(byte *)(param_1 + 0x620);
  if ((bVar1 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 1;
    bVar1 = *(byte *)(param_1 + 0x620);
  }
  if ((bVar1 & 2) == 0) {
    *(float *)(param_2 + 4) = param_3 * 280.0;
  }
  return param_2;
}



// FUNCTION 140ad6680 FUN_140ad6680 body=82 status=ok
// SIG undefined FUN_140ad6680(void)

undefined4 FUN_140ad6680(longlong param_1,undefined4 param_2,int param_3)

{
  switch(param_2) {
  default:
    return *(undefined4 *)(param_1 + 100);
  case 2:
    goto switchD_140ad669a_caseD_2;
  case 3:
    if (param_3 != 0) goto switchD_140ad669a_caseD_7;
  case 1:
    return *(undefined4 *)(param_1 + 0x68);
  case 4:
    if (param_3 == 2) {
      return *(undefined4 *)(param_1 + 0x68);
    }
    goto switchD_140ad669a_caseD_7;
  case 5:
    break;
  case 6:
    param_3 = param_3 + -2;
    break;
  case 7:
    goto switchD_140ad669a_caseD_7;
  }
  if (param_3 == 0) {
switchD_140ad669a_caseD_2:
    return *(undefined4 *)(param_1 + 0x6c);
  }
switchD_140ad669a_caseD_7:
  return *(undefined4 *)(param_1 + 0x70);
}



// FUNCTION 140ad6700 FUN_140ad6700 body=205 status=ok
// SIG undefined FUN_140ad6700(void)

undefined8 * FUN_140ad6700(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  switch(param_3) {
  default:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *param_2 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *param_2 = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 3:
    lVar2 = 0x14;
    break;
  case 4:
    lVar2 = 0x14;
    if (param_4 != 2) {
      lVar2 = 0x2c;
    }
    uVar1 = *(undefined4 *)(lVar2 + 8 + param_1);
    *param_2 = *(undefined8 *)(lVar2 + param_1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 5:
    lVar2 = 0x20;
    break;
  case 6:
    lVar2 = 0x20;
    param_4 = param_4 + -2;
    break;
  case 7:
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    *param_2 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  if (param_4 != 0) {
    lVar2 = 0x2c;
  }
  uVar1 = *(undefined4 *)(lVar2 + 8 + param_1);
  *param_2 = *(undefined8 *)(lVar2 + param_1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140ad67f0 FUN_140ad67f0 body=205 status=ok
// SIG undefined FUN_140ad67f0(void)

undefined8 * FUN_140ad67f0(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  switch(param_3) {
  default:
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *param_2 = *(undefined8 *)(param_1 + 0x44);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    *param_2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 3:
    lVar2 = 0x44;
    break;
  case 4:
    lVar2 = 0x44;
    if (param_4 != 2) {
      lVar2 = 0x5c;
    }
    uVar1 = *(undefined4 *)(lVar2 + 8 + param_1);
    *param_2 = *(undefined8 *)(lVar2 + param_1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 5:
    lVar2 = 0x50;
    break;
  case 6:
    lVar2 = 0x50;
    param_4 = param_4 + -2;
    break;
  case 7:
    uVar1 = *(undefined4 *)(param_1 + 100);
    *param_2 = *(undefined8 *)(param_1 + 0x5c);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  if (param_4 != 0) {
    lVar2 = 0x5c;
  }
  uVar1 = *(undefined4 *)(lVar2 + 8 + param_1);
  *param_2 = *(undefined8 *)(lVar2 + param_1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}


