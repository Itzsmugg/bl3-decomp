// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1411f1490 FUN_1411f1490 body=563 status=ok
// SIG undefined FUN_1411f1490(void)

longlong * FUN_1411f1490(longlong *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  iVar6 = 0;
  FGenericPlatformString::Memcpy(*param_1,L"none",10);
  if ((param_2 != '\a') && ((wchar_t *)*param_1 != L"generic")) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,8);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + 8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    builtin_wcsncpy((wchar_t *)*param_1,L"generic",8);
  }
  if (param_2 == '\x02') {
    uVar3 = FName::FName(local_res8,&DAT_1446ef528,1);
    cVar1 = IOnlineSubsystem::IsLoaded(uVar3);
    if (cVar1 == '\0') {
      uVar3 = FName::FName(local_res8,L"EPIC",1);
      cVar1 = IOnlineSubsystem::IsLoaded(uVar3);
      if (cVar1 == '\0') {
        return param_1;
      }
    }
    if ((undefined *)*param_1 != &DAT_1446ef608) {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,5);
        iVar6 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar6 + 5;
      if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
      }
      puVar4 = (undefined8 *)*param_1;
      *puVar4 = 0x63006900700065;
      *(undefined2 *)(puVar4 + 1) = 0;
      return param_1;
    }
  }
  else {
    if (param_2 == '\x03') {
      uVar3 = FName::FName(local_res8,L"STEAM",1);
      cVar1 = IOnlineSubsystem::IsLoaded(uVar3);
      if (cVar1 == '\0') {
        return param_1;
      }
      if ((wchar_t *)*param_1 == L"steam") {
        return param_1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,6);
        iVar6 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar6 + 6;
      if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
      }
      puVar4 = (undefined8 *)*param_1;
      *puVar4 = 0x61006500740073;
      uVar2 = 0x6d;
    }
    else {
      if (param_2 != '\x06') {
        return param_1;
      }
      if ((wchar_t *)*param_1 == L"shift") {
        return param_1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,6);
        iVar6 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar6 + 6;
      if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
      }
      puVar4 = (undefined8 *)*param_1;
      *puVar4 = 0x66006900680073;
      uVar2 = 0x74;
    }
    *(undefined4 *)(puVar4 + 1) = uVar2;
  }
  return param_1;
}



// FUNCTION 1411f16d0 FUN_1411f16d0 body=683 status=ok
// SIG undefined FUN_1411f16d0(void)

undefined8 * FUN_1411f16d0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint in_stack_fffffffffffffe08;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  int local_1a0;
  int local_19c;
  undefined1 local_198;
  undefined1 local_197;
  undefined4 local_194;
  byte local_190;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  byte local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  if ((param_2 != (longlong *)0x0) && (*param_3 != 0)) {
    lVar3 = USafeZone::GetPrivateStaticClass();
    for (lVar5 = *param_3; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar3) {
        if (*param_3 != 0) {
          uVar4 = FUN_142e27720();
          lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
          if (lVar5 == 0) {
            FUN_1417846f0(param_2,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar4 = FUN_142e27720();
            in_stack_fffffffffffffe08 = 0;
            lVar5 = FUN_1417985e0(uVar4,param_2,0,0,0,0,0,0,0);
            FUN_14234b150(lVar5);
          }
          FUN_142c62180(local_1c8);
          iVar2 = local_1a0;
          lVar3 = (longlong)local_1a0;
          local_197 = 2;
          local_1a0 = local_1a0 + 1;
          if (local_19c < local_1a0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_1a8,iVar2);
          }
          FUN_142c62570((void *)(lVar3 * 0x38 + (longlong)local_1a8),&DAT_146b31790,1);
          lVar3 = (longlong)local_1a0;
          local_f8 = &PTR_FUN_143ff6170;
          local_f0 = local_1c0;
          local_e8 = local_1b8;
          local_e0 = local_1b0;
          local_d8 = (void *)0x0;
          local_d0 = local_1a0;
          if (local_1a0 == 0) {
            local_cc = 0;
          }
          else {
            TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_d8,local_1a0,0)
            ;
            _guard_xfg_dispatch_icall_nop(local_d8,local_1a8,lVar3 * 0x38);
          }
          local_c8 = local_198;
          local_c7 = local_197;
          local_c4 = local_194;
          local_c0 = local_c0 ^ (local_c0 ^ local_190) & 7;
          FUN_1405e0d90(local_b8,local_188);
          FUN_1405e0d90(local_a0,local_170);
          FUN_1405e0d90(local_88,local_158);
          FUN_1405e0d90(local_70,local_140);
          local_58 = local_128;
          local_54 = local_124;
          local_50 = local_120;
          local_48 = local_118;
          local_40 = local_110;
          local_4c = local_11c;
          local_38 = local_108;
          if (local_108 != 0) {
            LOCK();
            *(int *)(local_108 + 0xc) = *(int *)(local_108 + 0xc) + 1;
            UNLOCK();
          }
          lVar3 = 0;
          if (*param_3 != 0) {
            lVar6 = USafeZone::GetPrivateStaticClass();
            for (lVar1 = *param_3; (lVar3 = 0, lVar1 != 0 && (lVar3 = *param_3, lVar1 != lVar6));
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
            }
          }
          FUN_142c7bb40(lVar5,param_1,lVar3,&local_f8,in_stack_fffffffffffffe08 & 0xffffff00);
          FUN_142c63c50(local_1c8);
          return param_1;
        }
        break;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1411f1980 FUN_1411f1980 body=1607 status=ok
// SIG undefined FUN_1411f1980(void)

undefined8 *
FUN_1411f1980(undefined8 *param_1,undefined8 param_2,char param_3,char *param_4,char *param_5)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_38;
  undefined8 local_30;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 0xd0);
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  if (param_3 == '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x40)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0x48) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar7 + 0x38,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x40) = DAT_1464b56f4;
        }
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x38);
        if (plVar3 != (longlong *)0x0) goto LAB_1411f1b2f;
      }
    }
    else {
LAB_1411f1b2f:
      lVar4 = FUN_14171bfe0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar5 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar9 = plVar3;
        do {
          if (plVar9 == plVar5) goto LAB_1411f1b81;
          plVar9 = (longlong *)plVar9[6];
        } while (plVar9 != (longlong *)0x0);
      }
    }
  }
  else {
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x60);
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x68)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0x70) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar7 + 0x60,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x68) = DAT_1464b56f4;
        }
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x60);
        if (plVar3 != (longlong *)0x0) goto LAB_1411f1a58;
      }
    }
    else {
LAB_1411f1a58:
      lVar4 = FUN_14171bfe0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar5 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar9 = plVar3;
        do {
          if (plVar9 == plVar5) goto LAB_1411f1b81;
          plVar9 = (longlong *)plVar9[6];
        } while (plVar9 != (longlong *)0x0);
      }
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1411f1b81:
  plVar9 = (longlong *)0x0;
  local_38 = plVar3;
  if (param_5 == (char *)0x0) goto LAB_1411f1fa8;
  if (param_5[0x49] == '\0') {
    if (param_5[0x4a] == '\0') {
      if ((byte)(*param_5 - 4U) < 2) {
        lVar4 = lVar7 + 0x218;
        plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
        if (plVar5 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          plVar3 = plVar9;
          if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x220)) &&
             (local_30 = 0, *(longlong *)(lVar7 + 0x228) != 0)) {
            lVar6 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar4,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar7 + 0x220) = DAT_1464b56f4;
            }
            plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
            if (plVar5 != (longlong *)0x0) goto LAB_1411f1eea;
          }
        }
        else {
LAB_1411f1eea:
          lVar7 = FUN_14171bfe0();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          plVar3 = plVar9;
          if (bVar1) {
            plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
            plVar10 = plVar5;
            do {
              plVar3 = plVar5;
              if (plVar10 == plVar8) break;
              plVar10 = (longlong *)plVar10[6];
              plVar3 = plVar9;
            } while (plVar10 != (longlong *)0x0);
          }
        }
      }
    }
    else {
      lVar4 = lVar7 + 0x1c8;
      plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
      if (plVar5 == (longlong *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        plVar3 = plVar9;
        if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x1d0)) &&
           (local_30 = 0, *(longlong *)(lVar7 + 0x1d8) != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar7 + 0x1d0) = DAT_1464b56f4;
          }
          plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
          if (plVar5 != (longlong *)0x0) goto LAB_1411f1df6;
        }
      }
      else {
LAB_1411f1df6:
        lVar7 = FUN_14171bfe0();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar3 = plVar9;
        if (bVar1) {
          plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
          plVar10 = plVar5;
          do {
            plVar3 = plVar5;
            if (plVar10 == plVar8) break;
            plVar10 = (longlong *)plVar10[6];
            plVar3 = plVar9;
          } while (plVar10 != (longlong *)0x0);
        }
      }
    }
    goto LAB_1411f1f3e;
  }
  if (*param_4 == '\x02') {
    lVar4 = lVar7 + 0x178;
    plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
    if (plVar5 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      plVar3 = plVar9;
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x180)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0x188) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar4,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x180) = DAT_1464b56f4;
        }
        plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
        if (plVar5 != (longlong *)0x0) goto LAB_1411f1c30;
      }
    }
    else {
LAB_1411f1c30:
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      plVar3 = plVar9;
      if (bVar1) {
        plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar10 = plVar5;
        do {
          plVar3 = plVar5;
          if (plVar10 == plVar8) break;
          plVar10 = (longlong *)plVar10[6];
          plVar3 = plVar9;
        } while (plVar10 != (longlong *)0x0);
      }
    }
  }
  else {
    lVar4 = lVar7 + 0x128;
    plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
    if (plVar5 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      plVar3 = plVar9;
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x130)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0x138) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar4,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x130) = DAT_1464b56f4;
        }
        plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
        if (plVar5 != (longlong *)0x0) goto LAB_1411f1d0d;
      }
    }
    else {
LAB_1411f1d0d:
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      plVar3 = plVar9;
      if (bVar1) {
        plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar10 = plVar5;
        do {
          plVar3 = plVar5;
          if (plVar10 == plVar8) break;
          plVar10 = (longlong *)plVar10[6];
          plVar3 = plVar9;
        } while (plVar10 != (longlong *)0x0);
      }
    }
  }
LAB_1411f1f3e:
  local_38 = plVar3;
  if (((*(int *)(param_5 + 0x38) == 0) || (*(longlong **)(param_5 + 0x30) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_5 + 0x30) + 0x18))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (*(int *)(param_5 + 0x38) != 0) {
      plVar9 = *(longlong **)(param_5 + 0x30);
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,param_1,param_2,&local_38,1);
    return param_1;
  }
LAB_1411f1fa8:
  FUN_1411f16d0(param_1,param_2,&local_38);
  return param_1;
}



// FUNCTION 1411f1fd0 FUN_1411f1fd0 body=1607 status=ok
// SIG undefined FUN_1411f1fd0(void)

undefined8 *
FUN_1411f1fd0(undefined8 *param_1,undefined8 param_2,char param_3,char *param_4,char *param_5)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_38;
  undefined8 local_30;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 0xd0);
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  if (param_3 == '\0') {
    lVar5 = lVar7 + 0x88;
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5);
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x90)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0x98) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x90) = DAT_1464b56f4;
        }
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if (plVar3 != (longlong *)0x0) goto LAB_1411f2183;
      }
    }
    else {
LAB_1411f2183:
      lVar5 = FUN_14171bfe0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar6 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar9 = plVar3;
        do {
          if (plVar9 == plVar6) goto LAB_1411f21d2;
          plVar9 = (longlong *)plVar9[6];
        } while (plVar9 != (longlong *)0x0);
      }
    }
  }
  else {
    lVar5 = lVar7 + 0xb0;
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5);
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0xb8)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0xc0) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0xb8) = DAT_1464b56f4;
        }
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if (plVar3 != (longlong *)0x0) goto LAB_1411f20ac;
      }
    }
    else {
LAB_1411f20ac:
      lVar5 = FUN_14171bfe0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar6 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar9 = plVar3;
        do {
          if (plVar9 == plVar6) goto LAB_1411f21d2;
          plVar9 = (longlong *)plVar9[6];
        } while (plVar9 != (longlong *)0x0);
      }
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1411f21d2:
  plVar9 = (longlong *)0x0;
  local_38 = plVar3;
  if (param_5 == (char *)0x0) goto LAB_1411f25f8;
  if (param_5[0x49] == '\0') {
    if (param_5[0x4a] == '\0') {
      if ((byte)(*param_5 - 4U) < 2) {
        lVar5 = lVar7 + 0x1f0;
        plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if (plVar6 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          plVar3 = plVar9;
          if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x1f8)) &&
             (local_30 = 0, *(longlong *)(lVar7 + 0x200) != 0)) {
            lVar4 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar5,lVar4);
            if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar7 + 0x1f8) = DAT_1464b56f4;
            }
            plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
            if (plVar6 != (longlong *)0x0) goto LAB_1411f253a;
          }
        }
        else {
LAB_1411f253a:
          lVar7 = FUN_14171bfe0();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          plVar3 = plVar9;
          if (bVar1) {
            plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
            plVar10 = plVar6;
            do {
              plVar3 = plVar6;
              if (plVar10 == plVar8) break;
              plVar10 = (longlong *)plVar10[6];
              plVar3 = plVar9;
            } while (plVar10 != (longlong *)0x0);
          }
        }
      }
    }
    else {
      lVar5 = lVar7 + 0x1a0;
      plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
      if (plVar6 == (longlong *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        plVar3 = plVar9;
        if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x1a8)) &&
           (local_30 = 0, *(longlong *)(lVar7 + 0x1b0) != 0)) {
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar5,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar7 + 0x1a8) = DAT_1464b56f4;
          }
          plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
          if (plVar6 != (longlong *)0x0) goto LAB_1411f2446;
        }
      }
      else {
LAB_1411f2446:
        lVar7 = FUN_14171bfe0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar3 = plVar9;
        if (bVar1) {
          plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
          plVar10 = plVar6;
          do {
            plVar3 = plVar6;
            if (plVar10 == plVar8) break;
            plVar10 = (longlong *)plVar10[6];
            plVar3 = plVar9;
          } while (plVar10 != (longlong *)0x0);
        }
      }
    }
    goto LAB_1411f258e;
  }
  if (*param_4 == '\x02') {
    lVar5 = lVar7 + 0x150;
    plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
    if (plVar6 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      plVar3 = plVar9;
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x158)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0x160) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x158) = DAT_1464b56f4;
        }
        plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if (plVar6 != (longlong *)0x0) goto LAB_1411f2281;
      }
    }
    else {
LAB_1411f2281:
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      plVar3 = plVar9;
      if (bVar1) {
        plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar10 = plVar6;
        do {
          plVar3 = plVar6;
          if (plVar10 == plVar8) break;
          plVar10 = (longlong *)plVar10[6];
          plVar3 = plVar9;
        } while (plVar10 != (longlong *)0x0);
      }
    }
  }
  else {
    lVar5 = lVar7 + 0x100;
    plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
    if (plVar6 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      plVar3 = plVar9;
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x108)) &&
         (local_30 = 0, *(longlong *)(lVar7 + 0x110) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0x108) = DAT_1464b56f4;
        }
        plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if (plVar6 != (longlong *)0x0) goto LAB_1411f235e;
      }
    }
    else {
LAB_1411f235e:
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      plVar3 = plVar9;
      if (bVar1) {
        plVar8 = (longlong *)USafeZone::GetPrivateStaticClass();
        plVar10 = plVar6;
        do {
          plVar3 = plVar6;
          if (plVar10 == plVar8) break;
          plVar10 = (longlong *)plVar10[6];
          plVar3 = plVar9;
        } while (plVar10 != (longlong *)0x0);
      }
    }
  }
LAB_1411f258e:
  local_38 = plVar3;
  if (((*(int *)(param_5 + 0x38) == 0) || (*(longlong **)(param_5 + 0x30) == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(**(longlong **)(param_5 + 0x30) + 0x18))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (*(int *)(param_5 + 0x38) != 0) {
      plVar9 = *(longlong **)(param_5 + 0x30);
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,param_1,param_2,&local_38,2);
    return param_1;
  }
LAB_1411f25f8:
  FUN_1411f16d0(param_1,param_2,&local_38);
  return param_1;
}



// FUNCTION 1411f2620 FUN_1411f2620 body=442 status=ok
// SIG undefined FUN_1411f2620(void)

void FUN_1411f2620(longlong *param_1,char param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1[0x6b] != 0) {
    FUN_142135b70(param_1[0x6b],param_3 + 0x30);
  }
  if (param_1[0x69] != 0) {
    FUN_142135b70(param_1[0x69],param_3);
  }
  if (param_2 == '\x02') {
    lVar5 = param_1[100];
joined_r0x0001411f2685:
    if (lVar5 != 0) {
      (**(code **)(*param_1 + 0x4c8))(param_1,param_2);
    }
  }
  else if (param_2 == '\x01') {
    lVar5 = param_1[0x66];
    goto joined_r0x0001411f2685;
  }
  if (param_1[0x71] != 0) {
    UUserWidget::PlayAnimation(param_1,param_1[0x71],0,1,0,0x3f800000);
  }
  lVar5 = param_1[0x60];
  if (lVar5 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411f270e;
  }
  lVar5 = 0;
LAB_1411f270e:
  lVar2 = param_1[0x6e];
  if (lVar2 != 0) {
    if ((*(char *)(param_3 + 0x98) == '\0') || (lVar5 == 0)) {
      *(byte *)(lVar2 + 0x1fc) = *(byte *)(lVar2 + 0x1fc) & 0xfe;
    }
    else {
      *(byte *)(lVar2 + 0x1fc) = *(byte *)(lVar2 + 0x1fc) | 1;
      *(undefined4 *)(param_1[0x6e] + 0x1f8) = 10000;
      FUN_142713b70(lVar5,param_1[0x6e]);
    }
  }
  plVar3 = (longlong *)param_1[0x6d];
  if (plVar3 != (longlong *)0x0) {
    uVar4 = 3;
    if (*(char *)(param_3 + 0xa4) == '\0') {
      uVar4 = 2;
    }
    (**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
  }
  plVar3 = (longlong *)param_1[0x6c];
  if (plVar3 != (longlong *)0x0) {
    if (*(char *)(param_3 + 0x138) == '\0') {
      uVar4 = 2;
    }
    else {
      UImage::SetBrush(plVar3,param_3 + 0xb0);
      plVar3 = (longlong *)param_1[0x6c];
      uVar4 = 4;
    }
    (**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
  }
  if (param_1[0x6a] != 0) {
    FUN_142135b70(param_1[0x6a],param_3 + 0x18);
  }
  return;
}



// FUNCTION 1411f27e0 FUN_1411f27e0 body=328 status=ok
// SIG undefined FUN_1411f27e0(void)

void FUN_1411f27e0(longlong param_1,undefined8 *param_2,int param_3,int param_4,char param_5)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    if ((param_3 < 0) || (*(int *)(param_1 + 0x378) <= param_3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((param_4 < 0) || (*(int *)(param_1 + 0x378) <= param_4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1411f4e50(*param_2,(longlong)param_3 * 0xd8 + *(longlong *)(param_1 + 0x370));
        FUN_1411f4e50(param_2[1],(longlong)param_4 * 0xd8 + *(longlong *)(param_1 + 0x370),param_4);
        plVar1 = *(longlong **)(param_1 + 0x38);
        if (plVar1 != (longlong *)0x0) {
          lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (param_5 == '\0')) {
            lVar3 = *plVar1;
            local_28 = 0;
            local_20 = 0;
            puVar4 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
            (**(code **)(lVar3 + 0x4e8))(plVar1,*puVar4,&local_28);
          }
        }
        FUN_142088910(*(undefined8 *)(param_1 + 0x2e8),param_2 + 2);
        *(int *)(param_1 + 0x380) = param_4;
        FUN_1411ff180(param_1);
        FUN_1411e7890(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1411f2930 FUN_1411f2930 body=3111 status=ok
// SIG undefined FUN_1411f2930(void)

void FUN_1411f2930(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  void *pvVar3;
  wint_t wVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong lVar15;
  ushort *puVar16;
  longlong lVar17;
  char *pcVar18;
  short *psVar19;
  longlong *plVar20;
  int iVar21;
  bool bVar22;
  longlong *local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined1 local_res20;
  int *piVar23;
  longlong **pplVar24;
  int local_ea8 [2];
  int local_ea0;
  int local_e9c;
  int local_e98;
  short *local_e90;
  int local_e88;
  int iStack_e84;
  longlong *local_e80;
  longlong *local_e78;
  ushort *local_e70;
  int local_e68;
  longlong local_e60;
  ulonglong local_e58;
  longlong local_e50;
  ulonglong local_e48;
  short *local_e40;
  int local_e38;
  undefined8 local_e30;
  void *local_e28;
  undefined8 local_e20;
  undefined8 local_e18;
  longlong *plStack_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  longlong *local_df0;
  undefined8 local_de8;
  longlong *local_de0;
  undefined8 *local_dd8;
  undefined1 *local_dd0;
  undefined1 *local_dc8;
  undefined1 local_dc0 [8];
  undefined1 local_db8 [8];
  undefined1 local_db0 [8];
  undefined1 local_da8 [8];
  undefined1 local_da0 [8];
  longlong *local_d98;
  undefined1 local_d90 [8];
  longlong *local_d88;
  undefined1 local_d80 [8];
  longlong *local_d78;
  undefined1 local_d70 [8];
  longlong *local_d68;
  undefined1 local_d58 [8];
  longlong *local_d50;
  undefined1 local_d38 [48];
  undefined1 local_d08 [104];
  undefined1 local_ca0;
  undefined1 local_c94;
  undefined1 local_bc8 [152];
  undefined1 local_b30;
  int local_b2c;
  undefined1 local_b24;
  undefined1 local_a58 [368];
  undefined1 local_8e8 [368];
  undefined1 local_778 [320];
  undefined8 local_638;
  undefined1 local_608 [320];
  undefined8 local_4c8;
  undefined1 local_498 [360];
  undefined1 local_330 [360];
  undefined1 local_1c8 [392];
  
  local_res18 = 0;
  if ((int)param_1[1] < 5) {
    return;
  }
  puVar12 = (undefined8 *)*param_1;
  local_e9c = *(int *)(puVar12 + 1);
  lVar17 = (longlong)local_e9c;
  pvVar3 = (void *)*puVar12;
  local_e40 = (short *)0x0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_e38 = local_e9c;
  if (local_e9c != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e40,local_e9c,0);
    _guard_xfg_dispatch_icall_nop(local_e40,pvVar3,lVar17 * 2);
    puVar12 = (undefined8 *)*param_1;
  }
  if (*(int *)(puVar12 + 3) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (ushort *)puVar12[2];
  }
  pcVar18 = "true";
  local_e9c = local_e38;
  do {
    uVar2 = *puVar16;
    if ((uVar2 == 0) && (*pcVar18 == '\0')) {
      iVar5 = 0;
      goto LAB_1411f2a25;
    }
    if ((uint)uVar2 != (int)*pcVar18) {
      wVar4 = towlower(uVar2);
      iVar5 = tolower((int)*pcVar18);
      if ((uint)wVar4 != (int)(char)iVar5) break;
    }
    puVar16 = puVar16 + 1;
    pcVar18 = pcVar18 + 1;
  } while( true );
  iVar5 = (uint)wVar4 - (int)(char)iVar5;
LAB_1411f2a25:
  local_res20 = iVar5 == 0;
  if (*(int *)(*param_1 + 0x28) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = *(ushort **)(*param_1 + 0x20);
  }
  pcVar18 = "true";
  local_ea0 = iVar5;
  do {
    uVar2 = *puVar16;
    if ((uVar2 == 0) && (*pcVar18 == '\0')) {
      iVar6 = 0;
      goto LAB_1411f2a90;
    }
    if ((uint)uVar2 != (int)*pcVar18) {
      wVar4 = towlower(uVar2);
      iVar6 = tolower((int)*pcVar18);
      if ((uint)wVar4 != (int)(char)iVar6) break;
    }
    puVar16 = puVar16 + 1;
    pcVar18 = pcVar18 + 1;
  } while( true );
  iVar6 = (uint)wVar4 - (int)(char)iVar6;
LAB_1411f2a90:
  local_res18 = CONCAT31(local_res18._1_3_,iVar6 == 0);
  if (*(int *)(*param_1 + 0x38) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = *(ushort **)(*param_1 + 0x30);
  }
  pcVar18 = "true";
  do {
    uVar2 = *puVar16;
    if ((uVar2 == 0) && (*pcVar18 == '\0')) {
      local_e98 = 0;
      goto LAB_1411f2afc;
    }
    if ((uint)uVar2 != (int)*pcVar18) {
      wVar4 = towlower(uVar2);
      iVar6 = tolower((int)*pcVar18);
      if ((uint)wVar4 != (int)(char)iVar6) break;
    }
    puVar16 = puVar16 + 1;
    pcVar18 = pcVar18 + 1;
  } while( true );
  local_e98 = (uint)wVar4 - (int)(char)iVar6;
LAB_1411f2afc:
  local_e70 = (ushort *)0x0;
  local_e68 = *(int *)(*param_1 + 0x48);
  lVar17 = (longlong)local_e68;
  pvVar3 = *(void **)(*param_1 + 0x40);
  if (local_e68 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e70,local_e68,0);
    _guard_xfg_dispatch_icall_nop(local_e70,pvVar3,lVar17 * 2);
  }
  iVar6 = 0;
  local_e90 = (short *)0x0;
  local_e88 = 0;
  iStack_e84 = 0;
  iVar7 = iStack_e84;
  local_ea8[0] = 5;
  if (5 < (int)param_1[1]) {
    iStack_e84 = 0;
    lVar17 = 0x50;
    iVar21 = iStack_e84;
    iVar6 = 0;
    iStack_e84 = iVar7;
    do {
      iVar5 = *(int *)(*param_1 + 8 + lVar17);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -1;
      }
      pvVar3 = *(void **)(*param_1 + lVar17);
      iVar7 = iVar6;
      if (iVar5 != 0) {
        local_e88 = iVar5 + (uint)(iVar6 == 0) + iVar6;
        if (iVar21 < local_e88) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e90,iVar6);
          iVar21 = iStack_e84;
        }
        iVar7 = local_e88;
        psVar19 = local_e90 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0));
        _guard_xfg_dispatch_icall_nop(psVar19,pvVar3,(longlong)iVar5 * 2);
        psVar19[iVar5] = 0;
      }
      local_e28 = (void *)0x0;
      local_e20 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e28,0);
      pvVar3 = local_e28;
      FGenericPlatformString::Memcpy(local_e28,&DAT_1446eb0cc,4);
      iVar6 = iVar7;
      if (((int)local_e20 != 0) && (iVar5 = (int)local_e20 + -1, iVar5 != 0)) {
        local_e88 = iVar7 + (uint)(iVar7 == 0) + iVar5;
        if (iVar21 < local_e88) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e90,iVar7);
          iVar21 = iStack_e84;
        }
        iVar6 = local_e88;
        psVar19 = local_e90 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
        _guard_xfg_dispatch_icall_nop(psVar19,pvVar3,(longlong)iVar5 * 2);
        psVar19[iVar5] = 0;
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      lVar17 = lVar17 + 0x10;
      local_ea8[0] = local_ea8[0] + 1;
      param_2 = local_res10;
      param_1 = local_res8;
      iVar5 = local_ea0;
    } while (local_ea8[0] < (int)local_res8[1]);
  }
  if (param_2 != 0) {
    lVar17 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if ((bVar22) && (*(longlong *)(param_2 + 0x1428) != 0)) {
      local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
      psVar19 = &DAT_143f3eda8;
      if (iVar6 != 0) {
        psVar19 = local_e90;
      }
      iVar6 = 0;
      local_ea0 = 2;
      local_e48 = 0;
      local_e50 = 0;
      lVar17 = -1;
      if ((psVar19 != (short *)0x0) && (lVar15 = lVar17, *psVar19 != 0)) {
        do {
          lVar15 = lVar15 + 1;
        } while (psVar19[lVar15] != 0);
        uVar14 = (int)lVar15 + 1;
        local_e48 = (ulonglong)uVar14;
        if (0 < (int)uVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e50,0);
        }
        FGenericPlatformString::Memcpy(local_e50,psVar19,(longlong)(int)uVar14 * 2);
      }
      local_e58 = 0;
      psVar19 = &DAT_143f3eda8;
      if (local_e9c != 0) {
        psVar19 = local_e40;
      }
      local_e60 = 0;
      if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
        do {
          lVar17 = lVar17 + 1;
        } while (psVar19[lVar17] != 0);
        uVar14 = (int)lVar17 + 1;
        local_e58 = (ulonglong)uVar14;
        if (0 < (int)uVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e60,0);
        }
        FGenericPlatformString::Memcpy(local_e60,psVar19,(longlong)(int)uVar14 * 2);
      }
      uVar8 = FText::FromString(local_d58,&local_e50);
      uVar9 = FUN_1404b03b0();
      uVar10 = FText::FromString(local_d70,&local_e60);
      pplVar24 = &local_res8;
      piVar23 = &local_ea0;
      FUN_1411c91b0(local_d38,uVar10,uVar9,uVar8,piVar23,pplVar24);
      if (local_d68 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_d68 + 1;
        lVar17 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_d68)(local_d68);
          LOCK();
          piVar1 = (int *)((longlong)local_d68 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_d68 + 8))(local_d68,1);
          }
        }
      }
      if (local_d50 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_d50 + 1;
        lVar17 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_d50)(local_d50);
          LOCK();
          piVar1 = (int *)((longlong)local_d50 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_d50 + 8))(local_d50,1);
          }
        }
      }
      if (local_e60 != 0) {
        FMemory::Free();
      }
      if (local_e50 != 0) {
        FMemory::Free();
      }
      pcVar18 = "Intro";
      local_c94 = (undefined1)local_res18;
      puVar16 = &DAT_143f3eda8;
      if (local_e68 != 0) {
        puVar16 = local_e70;
      }
      local_ca0 = local_res20;
      do {
        uVar2 = *puVar16;
        if ((uVar2 == 0) && (*pcVar18 == '\0')) goto LAB_1411f2f43;
        if ((uint)uVar2 != (int)*pcVar18) {
          wVar4 = towlower(uVar2);
          iVar7 = tolower((int)*pcVar18);
          if ((uint)wVar4 != (int)(char)iVar7) goto LAB_1411f2f3b;
        }
        puVar16 = puVar16 + 1;
        pcVar18 = pcVar18 + 1;
      } while( true );
    }
  }
  goto LAB_1411f34ff;
LAB_1411f343c:
  if ((uint)wVar4 == (int)(char)iVar5) {
LAB_1411f3440:
    FUN_1411e4450(*(undefined8 *)(param_2 + 0x1428),local_778,0);
    lVar17 = *(longlong *)(param_2 + 0x1428);
    local_e00 = local_638;
    local_dd8 = &local_e00;
    local_dd0 = local_d38;
    local_dc8 = local_d08;
    FUN_1411d2220(&local_dd8,*(undefined8 *)(lVar17 + 0x68));
    FUN_1411d2220(&local_dd8,*(undefined8 *)(lVar17 + 0x70));
    FUN_1411d2220(&local_dd8,*(undefined8 *)(lVar17 + 0x78));
    puVar13 = local_778;
  }
  else {
    FUN_1411e4450(*(undefined8 *)(param_2 + 0x1428),local_608,0);
    FUN_1411e79a0(*(undefined8 *)(param_2 + 0x1428),local_4c8);
    puVar13 = local_608;
  }
  FUN_1411ca750(puVar13);
  goto LAB_1411f34eb;
LAB_1411f2f3b:
  if ((uint)wVar4 != (int)(char)iVar7) {
    pcVar18 = "Update";
    puVar16 = &DAT_143f3eda8;
    if (local_e68 != 0) {
      puVar16 = local_e70;
    }
    do {
      uVar2 = *puVar16;
      if ((uVar2 == 0) && (*pcVar18 == '\0')) goto LAB_1411f3440;
      if ((uint)uVar2 != (int)*pcVar18) {
        wVar4 = towlower(uVar2);
        iVar5 = tolower((int)*pcVar18);
        if ((uint)wVar4 != (int)(char)iVar5) goto LAB_1411f343c;
      }
      pcVar18 = pcVar18 + 1;
      puVar16 = puVar16 + 1;
    } while( true );
  }
LAB_1411f2f43:
  plVar20 = (longlong *)0x0;
  local_e30 = 0;
  local_e08 = 0;
  plVar11 = (longlong *)FUN_1404b0000(&local_e08);
  bVar22 = plVar11 != (longlong *)0x0;
  if (bVar22) {
    puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_da0);
    plVar20 = (longlong *)*puVar12;
  }
  else {
    local_e18 = 0;
    plStack_e10 = (longlong *)0x0;
    puVar12 = &local_e18;
  }
  local_e78 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  *puVar12 = 0;
  local_e80 = plVar20;
  if ((bVar22) && (local_d98 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_d98 + 1;
    lVar17 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_d98)(local_d98);
      LOCK();
      piVar1 = (int *)((longlong)local_d98 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_d98 + 8))(local_d98,1);
      }
    }
  }
  plVar20 = plStack_e10;
  if ((!bVar22) && (plStack_e10 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_e10 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_e10)(plStack_e10);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_e10 + 8))(plStack_e10,1);
      }
    }
  }
  if (iVar5 == 0) {
    if ((local_e98 == 0) && (local_e80 != (longlong *)0x0)) {
      puVar12 = (undefined8 *)(**(code **)(*local_e80 + 0x58))(local_e80,local_d90,0);
      local_df8 = *puVar12;
      local_df0 = (longlong *)puVar12[1];
      if (local_df0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_df0 + 1) = (int)local_df0[1] + 1;
        UNLOCK();
      }
      lVar17 = *(longlong *)(param_2 + 0x1428);
      FUN_1411c9410(local_bc8);
      if (*(longlong *)(lVar17 + 0x70) != 0) {
        uVar8 = FUN_1411d4c90(lVar17,local_498,local_d38,local_d08,&local_df8,
                              (ulonglong)pplVar24 & 0xffffffffffffff00,0);
        FUN_1411cbfb0(local_bc8,uVar8);
        FUN_1411ca750(local_498);
        local_b30 = 1;
        local_b24 = 1;
        if ((*(longlong **)(lVar17 + 0x58) != (longlong *)0x0) &&
           (lVar15 = (**(code **)(**(longlong **)(lVar17 + 0x58) + 0x148))(), lVar15 != 0)) {
          iVar6 = *(int *)(lVar15 + 0x790);
        }
        local_b2c = iVar6;
        FUN_1411d2ce0(*(undefined8 *)(lVar17 + 0x70),local_dc0,local_bc8);
        FUN_1411fe4d0(lVar17);
      }
      FUN_1411ca750(local_bc8);
      plVar20 = local_df0;
      local_d78 = local_d88;
      if (local_df0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_df0 + 1;
        lVar17 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_df0)(local_df0);
          LOCK();
          piVar23 = (int *)((longlong)plVar20 + 0xc);
          iVar5 = *piVar23;
          *piVar23 = *piVar23 + -1;
          UNLOCK();
          local_d78 = local_d88;
          if (iVar5 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
            local_d78 = local_d88;
          }
        }
      }
LAB_1411f3299:
      if (local_d78 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_d78 + 1;
        lVar17 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_d78)(local_d78);
          LOCK();
          piVar23 = (int *)((longlong)local_d78 + 0xc);
          iVar5 = *piVar23;
          *piVar23 = *piVar23 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_d78 + 8))(local_d78,1);
          }
        }
      }
    }
    else {
      FUN_1411d93c0(*(undefined8 *)(param_2 + 0x1428),local_db8,local_d38,local_d08,
                    (ulonglong)piVar23 & 0xffffffff00000000);
    }
  }
  else {
    if ((local_e98 == 0) && (local_e80 != (longlong *)0x0)) {
      puVar12 = (undefined8 *)(**(code **)(*local_e80 + 0x58))(local_e80,local_d80,0);
      local_de8 = *puVar12;
      local_de0 = (longlong *)puVar12[1];
      if (local_de0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_de0 + 1) = (int)local_de0[1] + 1;
        UNLOCK();
      }
      lVar17 = *(longlong *)(param_2 + 0x1428);
      FUN_1411c9410(local_a58);
      if (*(longlong *)(lVar17 + 0x70) != 0) {
        uVar8 = FUN_1411d4c90(lVar17,local_330,local_d38,local_d08,&local_de8,
                              (ulonglong)pplVar24 & 0xffffffffffffff00,2);
        FUN_1411cbfb0(local_a58,uVar8);
        FUN_1411ca750(local_330);
        FUN_1411d2ce0(*(undefined8 *)(lVar17 + 0x70),local_db0,local_a58);
      }
      FUN_1411ca750(local_a58);
      plVar20 = local_de0;
      if (local_de0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_de0 + 1;
        lVar17 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_de0)(local_de0);
          LOCK();
          piVar23 = (int *)((longlong)plVar20 + 0xc);
          iVar5 = *piVar23;
          *piVar23 = *piVar23 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
      goto LAB_1411f3299;
    }
    lVar17 = *(longlong *)(param_2 + 0x1428);
    local_ea8[0] = 2;
    uVar8 = FUN_1404b03b0();
    FUN_1411c9410(local_8e8);
    if (*(longlong *)(lVar17 + 0x70) != 0) {
      if ((*(longlong **)(lVar17 + 0x58) != (longlong *)0x0) &&
         (lVar15 = (**(code **)(**(longlong **)(lVar17 + 0x58) + 0x148))(), lVar15 != 0)) {
        iVar6 = *(int *)(lVar15 + 0x790);
      }
      local_e9c = iVar6;
      uVar8 = FUN_1411c91b0(local_1c8,local_d38,uVar8,local_d08,local_ea8,&local_e9c);
      FUN_1411cbfb0(local_8e8,uVar8);
      FUN_1411ca750(local_1c8);
      FUN_1411d2ce0(*(undefined8 *)(lVar17 + 0x70),local_da8,local_8e8);
    }
    FUN_1411ca750(local_8e8);
  }
  plVar20 = local_e78;
  if (local_e78 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_e78 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_e78)(local_e78);
      LOCK();
      piVar23 = (int *)((longlong)plVar20 + 0xc);
      iVar5 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_e78 + 8))(local_e78,1);
      }
    }
  }
LAB_1411f34eb:
  FUN_1411ca750(local_d38);
LAB_1411f34ff:
  if (local_e90 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_e70 != (ushort *)0x0) {
    FMemory::Free();
  }
  if (local_e40 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411f3560 FUN_1411f3560 body=14 status=ok
// SIG undefined FUN_1411f3560(void)

void FUN_1411f3560(longlong param_1,uint param_2,undefined1 param_3)

{
  if (param_2 < 4) {
    *(undefined1 *)((longlong)(int)param_2 + 0x61 + param_1) = param_3;
  }
  return;
}



// FUNCTION 1411f3570 FUN_1411f3570 body=203 status=ok
// SIG undefined FUN_1411f3570(void)

void FUN_1411f3570(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  undefined1 local_178 [320];
  undefined8 local_38;
  
  if (param_2 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(param_2 + 0x1428), lVar2 != 0)) {
      FUN_1411e4450(lVar2,local_178,0);
      local_res10[0] = local_38;
      if (*(longlong *)(lVar2 + 0x68) != 0) {
        FUN_1411e8130(*(longlong *)(lVar2 + 0x68),local_res10);
      }
      if (*(longlong *)(lVar2 + 0x70) != 0) {
        FUN_1411e8130(*(longlong *)(lVar2 + 0x70),local_res10);
      }
      if (*(longlong *)(lVar2 + 0x78) != 0) {
        FUN_1411e8130(*(longlong *)(lVar2 + 0x78),local_res10);
      }
      FUN_1411ca750(local_178);
    }
  }
  return;
}



// FUNCTION 1411f3640 FUN_1411f3640 body=2617 status=ok
// SIG undefined FUN_1411f3640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001411f3ed1) */
/* WARNING: Removing unreachable block (ram,0x0001411f3eda) */
/* WARNING: Removing unreachable block (ram,0x0001411f3ee6) */
/* WARNING: Removing unreachable block (ram,0x0001411f3efa) */

void FUN_1411f3640(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  longlong *local_278 [2];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong *local_240;
  longlong *local_230;
  undefined4 *local_228;
  undefined4 *puStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  longlong *plStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  longlong *plStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined **local_168 [2];
  longlong *local_158;
  longlong local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [24];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong *local_58;
  char local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_278[0] = (longlong *)((ulonglong)local_278[0] & 0xffffffff00000000);
  plVar4 = param_1 + 0x62;
  local_258 = *param_2;
  uStack_250 = (longlong *)param_2[1];
  if (uStack_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_250 + 1) = (int)uStack_250[1] + 1;
    UNLOCK();
  }
  if (&local_258 != plVar4) {
    local_258._4_4_ = (undefined4)((ulonglong)local_258 >> 0x20);
    uStack_250._4_4_ = (undefined4)((ulonglong)uStack_250 >> 0x20);
    lVar10 = *plVar4;
    plVar7 = (longlong *)param_1[99];
    local_40 = (undefined4)local_258;
    uStack_3c = local_258._4_4_;
    uStack_38 = (undefined4)uStack_250;
    uStack_34 = uStack_250._4_4_;
    *(undefined4 *)plVar4 = (undefined4)local_258;
    *(undefined4 *)((longlong)param_1 + 0x314) = local_258._4_4_;
    *(undefined4 *)(param_1 + 99) = (undefined4)uStack_250;
    *(undefined4 *)((longlong)param_1 + 0x31c) = uStack_250._4_4_;
    local_258 = lVar10;
    uStack_250 = plVar7;
  }
  plVar7 = uStack_250;
  if (uStack_250 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_250 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_250)(uStack_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_250 + 8))(uStack_250,1);
      }
    }
  }
  *(char *)(param_1 + 100) = (char)param_2[2];
  *(undefined1 *)((longlong)param_1 + 0x321) = *(undefined1 *)((longlong)param_2 + 0x11);
  FText::operator=(param_1 + 0x65,param_2 + 3);
  FText::operator=(param_1 + 0x68,param_2 + 6);
  FText::operator=(param_1 + 0x6b,param_2 + 9);
  FText::operator=(param_1 + 0x6e,param_2 + 0xc);
  *(int *)(param_1 + 0x71) = (int)param_2[0xf];
  *(undefined1 *)((longlong)param_1 + 0x38c) = *(undefined1 *)((longlong)param_2 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x38d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  uStack_280 = (longlong *)param_1[99];
  lVar10 = *plVar4;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
    UNLOCK();
  }
  local_288 = lVar10;
  FUN_141444bd0(param_1,plVar4);
  if (lVar10 == 0) goto LAB_1411f4019;
  local_278[0] = param_1;
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar10 = *(longlong *)(lVar10 + 400);
  if (lVar10 == 0) goto LAB_1411f4019;
  lVar11 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) goto LAB_1411f4019;
  lVar11 = (**(code **)(*param_1 + 0x2a8))();
  if (lVar11 == 0) {
    uStack_260 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
    bVar8 = false;
    local_240 = (longlong *)0x0;
    local_268 = 0;
  }
  else {
    bVar6 = true;
    bVar5 = false;
    bVar8 = true;
    lVar11 = FUN_142547b50(lVar11,local_168);
    uStack_260 = *(longlong **)(lVar11 + 0x10);
    local_268 = *(longlong *)(lVar11 + 8);
    local_230 = uStack_260;
    if (uStack_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_260 + 1) = (int)uStack_260[1] + 1;
      UNLOCK();
    }
  }
  plVar4 = local_240;
  if (uStack_260 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_260 + 1) = (int)uStack_260[1] + 1;
    UNLOCK();
  }
  if ((bVar5) && (local_240 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_240 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_240 + 8))(local_240,1);
      }
    }
  }
  plVar4 = local_230;
  if ((bVar6) && (local_230 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_230 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_230 + 8))(local_230,1);
      }
    }
  }
  if (bVar8) {
    local_168[0] = &PTR_FUN_143f740c8;
    if (local_150 != 0) {
      FMemory::Free();
    }
    local_168[0] = &PTR_FUN_143f73d18;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_158 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar2 = (int *)((longlong)local_158 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
  }
  bVar8 = false;
  bVar5 = false;
  if (local_268 == 0) {
LAB_1411f399d:
    bVar6 = bVar5;
    bVar5 = false;
  }
  else {
    bVar6 = true;
    bVar8 = true;
    local_208 = local_288;
    plStack_200 = uStack_280;
    if (uStack_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
      UNLOCK();
    }
    local_218 = (undefined4)local_268;
    uStack_214 = local_268._4_4_;
    uStack_210 = (undefined4)uStack_260;
    uStack_20c = uStack_260._4_4_;
    if (uStack_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_260 + 1) = (int)uStack_260[1] + 1;
      UNLOCK();
    }
    cVar9 = FUN_140ba6b70(lVar10,&local_218,&local_208);
    bVar5 = true;
    if (cVar9 == '\0') goto LAB_1411f399d;
    bVar5 = true;
  }
  if ((bVar6) && (plVar4 = (longlong *)CONCAT44(uStack_20c,uStack_210), plVar4 != (longlong *)0x0))
  {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar4 = plStack_200;
  if ((bVar8) && (plStack_200 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_200 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_200)(plStack_200);
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
  bVar8 = false;
  if (bVar5) {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_e8,L"Join",L"OakOnlinePlayerDetailsMenu",L"JoinPlayerText");
    FUN_1411cde40(local_278,DAT_146876980,uVar12);
  }
  local_1f8 = (undefined4)local_288;
  uStack_1f4 = local_288._4_4_;
  uStack_1f0 = (undefined4)uStack_280;
  uStack_1ec = uStack_280._4_4_;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
    UNLOCK();
  }
  cVar9 = FUN_140ba67e0(lVar10,&local_1f8);
  plVar4 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (cVar9 != '\0') {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_d0,L"Invite",L"OakOnlinePlayerDetailsMenu",L"InvitePlayerText");
    FUN_1411cde40(local_278,DAT_146876978,uVar12);
  }
  local_1e8 = (undefined4)local_288;
  uStack_1e4 = local_288._4_4_;
  uStack_1e0 = (undefined4)uStack_280;
  uStack_1dc = uStack_280._4_4_;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
    UNLOCK();
  }
  cVar9 = FUN_140ba7eb0(lVar10,&local_1e8);
  plVar4 = (longlong *)CONCAT44(uStack_1dc,uStack_1e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (cVar9 != '\0') {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_110,L"{0}|platform(default=View Profile,xbox=View Gamercard)",
                        L"OakOnlinePlayerDetailsMenu",L"ViewProfileText");
    puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar12);
    local_70[0] = 0;
    local_228 = local_70;
    local_48 = '\0';
    puStack_220 = &local_40;
    local_1d8 = *puVar13;
    local_1d0 = puVar13[1];
    local_68 = 0;
    if (local_1d0 != 0) {
      LOCK();
      *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
      UNLOCK();
    }
    uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_228);
    uVar12 = FText::Format(local_140,&local_1d8,uVar12);
    FText::FText(local_128,uVar12);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_138 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_178);
    if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_58 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar4 = (longlong *)puVar13[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    FUN_1411cde40(local_278,DAT_146876950,local_128);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_108 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  bVar5 = false;
  if (local_268 == 0) {
LAB_1411f3d74:
    bVar6 = bVar5;
    bVar5 = false;
  }
  else {
    bVar6 = true;
    bVar8 = true;
    local_1b8 = local_288;
    plStack_1b0 = uStack_280;
    if (uStack_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
      UNLOCK();
    }
    local_1c8 = (undefined4)local_268;
    uStack_1c4 = local_268._4_4_;
    uStack_1c0 = (undefined4)uStack_260;
    uStack_1bc = uStack_260._4_4_;
    if (uStack_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_260 + 1) = (int)uStack_260[1] + 1;
      UNLOCK();
    }
    cVar9 = FUN_140ba6d80(lVar10,&local_1c8,&local_1b8);
    bVar5 = true;
    if (cVar9 == '\0') goto LAB_1411f3d74;
    bVar5 = true;
  }
  if ((bVar6) && (plVar4 = (longlong *)CONCAT44(uStack_1bc,uStack_1c0), plVar4 != (longlong *)0x0))
  {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar4 = plStack_1b0;
  if ((bVar8) && (plStack_1b0 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_1b0 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_1b0)(plStack_1b0);
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
  if (bVar5) {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_b8,L"Mute",L"OakOnlinePlayerDetailsMenu",L"MuteText");
    FUN_1411cde40(local_278,DAT_146876958,uVar12);
  }
  bVar8 = false;
  if (local_268 == 0) {
LAB_1411f3e88:
    bVar5 = bVar8;
    bVar8 = false;
  }
  else {
    bVar5 = true;
    local_198 = local_288;
    plStack_190 = uStack_280;
    if (uStack_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
      UNLOCK();
    }
    local_1a8 = (undefined4)local_268;
    uStack_1a4 = local_268._4_4_;
    uStack_1a0 = (undefined4)uStack_260;
    uStack_19c = uStack_260._4_4_;
    if (uStack_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_260 + 1) = (int)uStack_260[1] + 1;
      UNLOCK();
    }
    cVar9 = FUN_140ba7bb0(lVar10,&local_1a8,&local_198);
    bVar8 = true;
    if (cVar9 == '\0') goto LAB_1411f3e88;
    bVar8 = true;
  }
  if ((bVar5) && (plVar4 = (longlong *)CONCAT44(uStack_19c,uStack_1a0), plVar4 != (longlong *)0x0))
  {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (bVar8) {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a0,L"Unmute",L"OakOnlinePlayerDetailsMenu",L"UnmuteText");
    FUN_1411cde40(local_278,DAT_146876960,uVar12);
  }
  local_188 = (undefined4)local_288;
  uStack_184 = local_288._4_4_;
  uStack_180 = (undefined4)uStack_280;
  uStack_17c = uStack_280._4_4_;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
    UNLOCK();
  }
  cVar9 = FUN_140ba6ce0(lVar10,&local_188);
  plVar4 = (longlong *)CONCAT44(uStack_17c,uStack_180);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (cVar9 != '\0') {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_88,L"Kick",L"OakOnlinePlayerDetailsMenu",L"KickPlayerText");
    FUN_1411cde40(local_278,DAT_146876968,uVar12);
  }
  plVar4 = uStack_260;
  if (uStack_260 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_260 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_260)(uStack_260);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_260 + 8))(uStack_260,1);
      }
    }
  }
LAB_1411f4019:
  plVar4 = uStack_280;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_280 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_280)(uStack_280);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_280 + 8))(uStack_280,1);
      }
    }
  }
  return;
}



// FUNCTION 1411f4080 FUN_1411f4080 body=630 status=ok
// SIG undefined FUN_1411f4080(void)

void FUN_1411f4080(ulonglong param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong local_res8;
  undefined8 local_d8;
  undefined1 local_d0 [96];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  undefined1 local_30;
  
  FUN_1411f8ab0(param_1 + 0x78,0);
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x70);
  if (cVar6 != '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x70);
    plVar9 = (longlong *)FUN_142dcf390(uVar8);
    puVar3 = (undefined8 *)*plVar9;
    lVar5 = plVar9[1];
    if (puVar3 != puVar3 + (longlong)(int)lVar5 * 0x10) {
      puVar12 = puVar3 + 0xd;
      do {
        lVar10 = FUN_142dcdb70(puVar12 + -0xd);
        if (lVar10 == 0) {
          if ((*param_2 == '\0') && (param_2[1] == '\0')) goto LAB_1411f4192;
          bVar4 = false;
        }
        else if (*(char *)(lVar10 + 0x8a) == '\0') {
          if (param_2[2] != '\0') {
            if ((*(int *)(lVar10 + 0x90) == 0) && (*(int *)(lVar10 + 0x94) == 0)) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            bVar4 = false;
            if (!bVar7) goto LAB_1411f4194;
          }
          lVar11 = FUN_1413f2350();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            cVar6 = FUN_140c58e80(lVar10);
            bVar4 = false;
            if (cVar6 == '\0') goto LAB_1411f4194;
          }
LAB_1411f4192:
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
LAB_1411f4194:
        if (bVar4) {
          FUN_142dc16a0(&local_d8);
          FWeakObjectPtr::operator=(local_58,0);
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          FWeakObjectPtr::operator=(local_38,0);
          local_30 = 0;
          cVar6 = FUN_142ddcf90(puVar12 + -0xd);
          if (cVar6 == '\0') {
            FWeakObjectPtr::operator=(local_38,param_1);
            local_d8 = puVar12[-0xd];
            FUN_1411cafb0(local_d0,puVar12 + -0xc);
            local_70 = *puVar12;
            local_68 = *(undefined4 *)(puVar12 + 1);
            local_64 = *(undefined4 *)((longlong)puVar12 + 0xc);
            local_60 = *(undefined1 *)(puVar12 + 2);
            local_5f = *(undefined1 *)((longlong)puVar12 + 0x11);
            local_5e = *(undefined1 *)((longlong)puVar12 + 0x12);
          }
          else {
            FUN_140852e70(puVar12 + -0xd,&local_res8);
            local_40 = local_res8;
            local_48 = 1;
          }
          iVar2 = *(int *)(param_1 + 0x80);
          *(int *)(param_1 + 0x80) = iVar2 + 1;
          if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
            FUN_1404852a0(param_1 + 0x78,iVar2);
          }
          FUN_1411c8960((longlong)iVar2 * 0xc0 + *(longlong *)(param_1 + 0x78));
          FUN_1411ca4a0(&local_d8);
        }
        puVar1 = puVar12 + 3;
        puVar12 = puVar12 + 0x10;
      } while (puVar1 != puVar3 + (longlong)(int)lVar5 * 0x10);
    }
  }
  FUN_1411ea560(param_1);
  local_res8 = param_1;
  FUN_1411c3c40(*(undefined8 *)(param_1 + 0x78),(longlong)*(int *)(param_1 + 0x80),param_1 & 0xff,
                &local_res8);
  FUN_1411ea2c0(param_1);
  return;
}



// FUNCTION 1411f4300 FUN_1411f4300 body=1092 status=ok
// SIG undefined FUN_1411f4300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411f4300(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 local_118;
  longlong *plStack_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong **)(*param_3 + 0x10) == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(**(longlong **)(*param_3 + 0x10) + 0x20))();
  if (cVar3 == '\0') {
    return;
  }
  plVar8 = *(longlong **)(*param_3 + 0x18);
  uVar6 = *(undefined8 *)(*param_3 + 0x10);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_118 = uVar6;
  plStack_110 = plVar8;
  if (&local_118 != param_1) {
    local_118 = *param_1;
    plStack_110 = (longlong *)param_1[1];
    *param_1 = uVar6;
    param_1[1] = plVar8;
    local_50 = uVar6;
    plStack_48 = plVar8;
  }
  plVar8 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 4;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 4;
  uVar4 = FUN_140bca910(param_2,param_1);
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar4;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(*param_3 + 0x40);
  uVar6 = FUN_140c14280(local_c8,*(undefined4 *)(*param_3 + 0x70));
  FText::operator=(param_1 + 6,uVar6);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  local_108 = (void *)0x0;
  local_100 = *(int *)(*param_3 + 0x50);
  lVar7 = (longlong)local_100;
  _Src = *(void **)(*param_3 + 0x48);
  if (local_100 == 0) {
    local_fc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
    _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar7 * 2);
  }
  uVar6 = (**(code **)(*param_2 + 0x148))(param_2);
  uVar6 = FUN_140c13bc0(local_b0,&local_108,uVar6);
  FText::operator=(param_1 + 9,uVar6);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free();
  }
  uVar6 = FUN_140bbae80(param_2,local_98,*(undefined4 *)(*param_3 + 0x6c));
  FText::operator=(param_1 + 0xc,uVar6);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_90 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  local_f8[2] = *param_1;
  local_e0 = (longlong *)param_1[1];
  local_f8[0] = 0;
  local_f8[1] = 0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
    UNLOCK();
  }
  local_128 = local_f8;
  cVar3 = FUN_140d79f00(param_2[0x8f],local_f8 + 2,1,0);
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (cVar3 == '\0') {
    local_d8 = *param_1;
    local_d0 = (longlong *)param_1[1];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_140d938f0(param_2[0x8f],&local_d8);
    plVar8 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Vault Hunter",L"OakOnlineLobbyWidget",L"DefaultPlayerName");
    FText::operator=(param_1 + 3,uVar6);
    plVar8 = local_60;
  }
  else {
    uVar6 = FText::FromString(local_80,local_f8);
    FText::operator=(param_1 + 3,uVar6);
    plVar8 = local_78;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  iVar5 = FUN_140bbba30(param_2,param_1);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uVar4 = 1;
      goto LAB_1411f4718;
    }
    if (iVar5 == 2) {
      uVar4 = 2;
      goto LAB_1411f4718;
    }
  }
  uVar4 = 0;
LAB_1411f4718:
  *(undefined1 *)((longlong)param_1 + 0x7d) = uVar4;
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411f4750 FUN_1411f4750 body=41 status=ok
// SIG undefined FUN_1411f4750(void)

void FUN_1411f4750(longlong param_1)

{
  undefined2 local_res8;
  undefined1 local_resa;
  
  *(undefined4 *)(param_1 + 0x9c) = 1;
  local_res8 = 0;
  local_resa = 1;
  FUN_1411f4080(param_1,&local_res8);
  return;
}



// FUNCTION 1411f4780 FUN_1411f4780 body=390 status=ok
// SIG undefined FUN_1411f4780(void)

void FUN_1411f4780(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_178;
  undefined8 local_170;
  undefined1 local_168 [32];
  undefined8 local_148;
  byte local_13f;
  undefined1 local_128 [272];
  
  if ((param_2 != 0) && (lVar4 = (**(code **)(*(longlong *)(param_2 + 0xd80) + 0x18))(), lVar4 != 0)
     ) {
    local_178 = 0;
    local_170 = 0;
    FUN_142ffa060(lVar4,param_3,&local_178);
    lVar7 = local_178 + (longlong)(int)local_170 * 4;
    for (lVar6 = local_178; lVar6 != lVar7; lVar6 = lVar6 + 4) {
      FUN_142fde510(local_168);
      cVar2 = FUN_142ffa4f0(lVar4,lVar6,local_168);
      if ((cVar2 != '\0') && ((local_13f & 4) == 0)) {
        FUN_1411e38c0(local_128,local_148,lVar4);
        iVar1 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
          TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
        }
        FUN_140e9a4f0((longlong)iVar1 * 0x110 + *param_1,local_128);
        FUN_140e9c360(local_128);
      }
    }
    if (local_178 != 0) {
      FMemory::Free(local_178);
    }
  }
  lVar4 = *param_1;
  lVar7 = (longlong)(int)param_1[1] * 0x110 + lVar4;
  if (lVar4 != lVar7) {
    lVar6 = lVar4 + 0xdc;
    do {
      if ((param_2 != 0) && (cVar2 = FWeakObjectPtr::IsValid(lVar6), cVar2 != '\0')) {
        uVar5 = FWeakObjectPtr::Get(lVar6);
        uVar3 = FUN_140c39630(param_2,uVar5);
        *(undefined1 *)(lVar6 + -0x85) = uVar3;
      }
      lVar4 = lVar4 + 0x110;
      lVar6 = lVar6 + 0x110;
    } while (lVar4 != lVar7);
  }
  return;
}



// FUNCTION 1411f4910 FUN_1411f4910 body=278 status=ok
// SIG undefined FUN_1411f4910(void)

void FUN_1411f4910(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158 [32];
  undefined8 local_138;
  byte local_12f;
  undefined1 local_118 [272];
  
  if (param_2 != 0) {
    local_168 = 0;
    local_160 = 0;
    FUN_142ffa060(param_2,param_3,&local_168);
    lVar1 = local_168 + (longlong)(int)local_160 * 4;
    for (lVar4 = local_168; lVar4 != lVar1; lVar4 = lVar4 + 4) {
      FUN_142fde510(local_158);
      cVar3 = FUN_142ffa4f0(param_2,lVar4,local_158);
      if ((cVar3 != '\0') && ((local_12f & 4) == 0)) {
        FUN_1411e38c0(local_118,local_138,param_2);
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
        }
        FUN_140e9a4f0((longlong)iVar2 * 0x110 + *param_1,local_118);
        FUN_140e9c360(local_118);
      }
    }
    if (local_168 != 0) {
      FMemory::Free(local_168);
    }
  }
  return;
}



// FUNCTION 1411f4a30 FUN_1411f4a30 body=311 status=ok
// SIG undefined FUN_1411f4a30(void)

void FUN_1411f4a30(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 local_res10;
  longlong local_178;
  undefined8 local_170;
  undefined1 local_168 [32];
  undefined8 local_148;
  byte local_13f;
  undefined1 local_128 [272];
  
  if (param_2 != 0) {
    local_178 = 0;
    local_170 = 0;
    FUN_142ffa060(param_2,param_3,&local_178);
    lVar1 = local_178 + (longlong)(int)local_170 * 4;
    for (lVar4 = local_178; lVar4 != lVar1; lVar4 = lVar4 + 4) {
      FUN_142fde510(local_168);
      cVar3 = FUN_142ffa4f0(param_2,lVar4,local_168);
      if ((cVar3 != '\0') && ((local_13f & 4) == 0)) {
        local_res10 = local_148;
        cVar3 = (*(code *)*param_4)(param_4[1],&local_res10);
        if (cVar3 != '\0') {
          FUN_1411e38c0(local_128,local_148,param_2);
          iVar2 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
            TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
          }
          FUN_140e9a4f0((longlong)iVar2 * 0x110 + *param_1,local_128);
          FUN_140e9c360(local_128);
        }
      }
    }
    if (local_178 != 0) {
      FMemory::Free(local_178);
    }
  }
  return;
}



// FUNCTION 1411f4b70 FUN_1411f4b70 body=727 status=ok
// SIG undefined FUN_1411f4b70(void)

void FUN_1411f4b70(ulonglong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [96];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined1 local_50;
  
  local_res8 = param_1;
  FWeakObjectPtr::operator=(param_1 + 0x90);
  plVar1 = (longlong *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x9c) = 3;
  FUN_1411f8ab0(plVar1,0);
  local_res18 = param_1 + 0x70;
  cVar5 = FWeakObjectPtr::IsValid(local_res18);
  uVar11 = param_1;
  if ((cVar5 != '\0') && (param_2 != 0)) {
    local_res10 = *(longlong *)(param_2 + 0x180);
    local_res20 = (longlong)*(int *)(param_2 + 0x188) * 0x20 + local_res10;
    if (local_res10 != local_res20) {
      do {
        lVar4 = local_res18;
        uVar13 = 0;
        plVar12 = *(longlong **)(local_res10 + 8);
        uVar11 = (longlong)*(int *)(local_res10 + 0x10) & 0x1fffffffffffffff;
        if (plVar12 + *(int *)(local_res10 + 0x10) < plVar12) {
          uVar11 = uVar13;
        }
        if (uVar11 != 0) {
LAB_1411f4c50:
          lVar3 = *plVar12;
          if (lVar3 != 0) {
            lVar6 = FUN_142dfdfe0();
            lVar8 = lVar3;
            do {
              if (lVar8 == lVar6) {
                lVar6 = FUN_142dfdfe0();
                lVar8 = lVar3;
                goto LAB_1411f4c80;
              }
              lVar8 = *(longlong *)(lVar8 + 0x30);
            } while (lVar8 != 0);
          }
          goto LAB_1411f4dc9;
        }
LAB_1411f4ddd:
        local_res10 = local_res10 + 0x20;
        uVar11 = local_res8;
      } while (local_res10 != local_res20);
    }
  }
  FUN_1411ea560(uVar11);
  local_res8 = uVar11;
  FUN_1411c3c40(*plVar1,(longlong)*(int *)(param_1 + 0x80),uVar11 & 0xff,&local_res8);
  FUN_1411ea2c0(uVar11);
  return;
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar10 = 0, lVar8 != 0) {
LAB_1411f4c80:
    lVar10 = lVar3;
    if (lVar8 == lVar6) break;
  }
  uVar7 = FWeakObjectPtr::Get(lVar4);
  lVar8 = FUN_142dcdc10(uVar7,lVar10);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x8a) == '\0')) {
    lVar6 = FUN_142dfdfe0();
    lVar8 = lVar3;
    do {
      lVar10 = lVar3;
      if (lVar8 == lVar6) goto LAB_1411f4cd9;
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
    lVar10 = 0;
LAB_1411f4cd9:
    uVar7 = FWeakObjectPtr::Get(lVar4);
    puVar9 = (undefined8 *)FUN_142dcdc90(uVar7,lVar10);
    local_108 = 0;
    local_100 = 0;
    FUN_142dc16a0(&local_f8);
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FWeakObjectPtr::operator=(local_58,0);
    local_50 = 0;
    if (puVar9 == (undefined8 *)0x0) {
      local_68 = 1;
      local_60 = lVar3;
    }
    else {
      FWeakObjectPtr::operator=(local_58,local_res8);
      local_f8 = *puVar9;
      FUN_1411cafb0(local_f0,puVar9 + 1);
      local_90 = puVar9[0xd];
      local_88 = *(undefined4 *)(puVar9 + 0xe);
      local_84 = *(undefined4 *)((longlong)puVar9 + 0x74);
      local_80 = *(undefined1 *)(puVar9 + 0xf);
      local_7f = *(undefined1 *)((longlong)puVar9 + 0x79);
      local_7e = *(undefined1 *)((longlong)puVar9 + 0x7a);
    }
    iVar2 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar2 + 1;
    if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
      FUN_1404852a0(plVar1,iVar2);
    }
    FUN_1411c8960((longlong)iVar2 * 0xc0 + *plVar1,&local_108);
    FUN_1411ca4a0(&local_f8);
  }
LAB_1411f4dc9:
  plVar12 = plVar12 + 1;
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar11) goto LAB_1411f4ddd;
  goto LAB_1411f4c50;
}



// FUNCTION 1411f4e50 FUN_1411f4e50 body=247 status=ok
// SIG undefined FUN_1411f4e50(void)

void FUN_1411f4e50(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(undefined4 *)(param_1 + 0x2f8) = *param_2;
  FUN_1411cbe80(param_1 + 0x300,param_2 + 2);
  *(undefined4 *)(param_1 + 0x3b0) = param_2[0x2e];
  *(undefined1 *)(param_1 + 0x3b4) = *(undefined1 *)(param_2 + 0x2f);
  FString::operator=(param_1 + 0x3b8,param_2 + 0x30);
  uVar5 = FUN_1416f8720(param_2[0x34]);
  FUN_14170c210(param_1 + 0x3c8,uVar5);
  if (*(longlong **)(param_1 + 0x2c8) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x2c8);
    uVar5 = FText::FromString(local_28,param_2 + 2);
    (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x2c8),uVar5,1,0);
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
  FUN_1411f6ca0(param_1);
  return;
}



// FUNCTION 1411f4f50 FUN_1411f4f50 body=453 status=ok
// SIG undefined FUN_1411f4f50(void)

void FUN_1411f4f50(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [128];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 local_30;
  
  *(undefined1 *)(param_1 + 0x98) = param_3;
  FWeakObjectPtr::operator=(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x9c) = 2;
  FUN_1411f8ab0(param_1 + 0x78,0);
  uVar5 = 0;
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  uVar3 = FWeakObjectPtr::Get(param_1 + 0x60);
  FUN_14129bdc0(uVar3,param_2,&local_f8,param_3,0);
  uVar6 = (ulonglong)((longlong)(local_f8 + (int)local_f0) + (7 - (longlong)local_f8)) >> 3;
  if (local_f8 + (int)local_f0 < local_f8) {
    uVar6 = uVar5;
  }
  plVar4 = local_f8;
  if (uVar6 != 0) {
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        local_e8 = 0;
        local_e0 = 0;
        FUN_142dc16a0(local_d8);
        FWeakObjectPtr::operator=(local_58,0);
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        FWeakObjectPtr::operator=(local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(local_38,param_1);
        FWeakObjectPtr::operator=(local_58,lVar2);
        iVar1 = *(int *)(param_1 + 0x80);
        local_30 = 1;
        *(int *)(param_1 + 0x80) = iVar1 + 1;
        if (*(int *)(param_1 + 0x84) < iVar1 + 1) {
          FUN_1404852a0(param_1 + 0x78,iVar1);
        }
        FUN_1411c8960((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0x78));
        FUN_1411ca4a0(local_d8);
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar5 != uVar6);
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}



// FUNCTION 1411f5120 FUN_1411f5120 body=1190 status=ok
// SIG undefined FUN_1411f5120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411f5120(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108 [3];
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_118 = *param_3;
  uStack_110 = (longlong *)param_3[1];
  if (uStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
    UNLOCK();
  }
  if (&local_118 != param_1) {
    local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
    uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
    lVar8 = *param_1;
    plVar10 = (longlong *)param_1[1];
    local_58 = (undefined4)local_118;
    uStack_54 = local_118._4_4_;
    uStack_50 = (undefined4)uStack_110;
    uStack_4c = uStack_110._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_118;
    *(undefined4 *)((longlong)param_1 + 4) = local_118._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_110._4_4_;
    local_118 = lVar8;
    uStack_110 = plVar10;
  }
  plVar10 = uStack_110;
  if (uStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_110 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_110)(uStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*uStack_110 + 8))(uStack_110,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 4;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_140bca910(param_2,param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar4;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_b8,L"Vault Hunter",L"OakOnlineLobbyWidget",L"DefaultPlayerName");
  FText::operator=(param_1 + 3,uVar7);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_b0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xf) = 1;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"Vault Hunter",L"OakOnlineLobbyWidget",L"DefaultClassName");
  FText::operator=(param_1 + 0xc,uVar7);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_98 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_98)();
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  lVar8 = *param_1;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 3;
  if (lVar8 != 0) {
    if (param_2 == 0) goto LAB_1411f55a4;
    local_f0 = (longlong *)param_1[1];
    local_108[0] = 0;
    local_108[1] = 0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    local_128 = local_108;
    local_108[2] = lVar8;
    cVar5 = FUN_140d79f00(*(undefined8 *)(param_2 + 0x478),local_108 + 2,1,0);
    plVar10 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (cVar5 == '\0') {
      local_e8 = *param_1;
      local_e0 = (longlong *)param_1[1];
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      FUN_140d938f0(*(undefined8 *)(param_2 + 0x478),&local_e8);
      plVar10 = local_e0;
    }
    else {
      uVar7 = FText::FromString(local_88,local_108);
      FText::operator=(param_1 + 3,uVar7);
      plVar10 = local_80;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    local_d8 = *param_1;
    local_d0 = (longlong *)param_1[1];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    lVar8 = FUN_140bbb8d0(param_2,&local_d8);
    if (lVar8 == 0) {
LAB_1411f5438:
      lVar8 = 0;
    }
    else {
      lVar9 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1411f5438;
    }
    plVar10 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (lVar8 == 0) {
      local_c8 = *param_1;
      local_c0 = (longlong *)param_1[1];
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
      }
      lVar8 = FUN_140bb7f10(param_2,&local_c8);
      plVar10 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (lVar8 != 0) {
        *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar8 + 0x50);
        uVar7 = FUN_140bbae80(param_2,local_70,*(undefined4 *)(lVar8 + 0x54));
        FText::operator=(param_1 + 0xc,uVar7);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_68 + 1;
          lVar8 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
      }
    }
    else {
      if (0 < *(int *)(lVar8 + 0x568)) {
        *(int *)(param_1 + 0xf) = *(int *)(lVar8 + 0x568);
      }
      if (*(longlong *)(lVar8 + 0x570) != 0) {
        FText::operator=(param_1 + 0xc,*(longlong *)(lVar8 + 0x570) + 0x90);
      }
    }
    if (local_108[0] != 0) {
      FMemory::Free();
    }
  }
  if ((param_2 != 0) && (iVar6 = FUN_140bbba30(param_2,param_1), iVar6 != 0)) {
    if (iVar6 == 1) {
      *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
      return;
    }
    if (iVar6 == 2) {
      *(undefined1 *)((longlong)param_1 + 0x7d) = 2;
      return;
    }
  }
LAB_1411f55a4:
  *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
  return;
}



// FUNCTION 1411f55d0 FUN_1411f55d0 body=55 status=ok
// SIG undefined FUN_1411f55d0(void)

void FUN_1411f55d0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_142f00ca0();
  local_res8[0] = 0;
  AlgoImpl::
  IntroSortInternal<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,FIdentityFunctor,TDereferenceWrapper<_FSparseVoxelOctree::Raycast_::_2_::FTileIntersection,<lambda_059fd0e59990f30459835bdbca671ace>_>_>
            (*(undefined8 *)(param_1 + 0x468),(longlong)*(int *)(param_1 + 0x470),0,local_res8);
  return;
}



// FUNCTION 1411f5630 FUN_1411f5630 body=233 status=ok
// SIG undefined FUN_1411f5630(void)

void FUN_1411f5630(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  local_80 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_78 = 0;
  local_70 = 0;
  local_38 = 0;
  local_28 = 0;
  local_88 = uVar3;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar4 != (undefined8 *)0x0) {
    local_88 = 0;
    *puVar4 = &PTR_FUN_1446feb08;
    puVar4[1] = uVar3;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar2;
    local_80 = 0;
  }
  local_68[0] = &LAB_1411d5250;
  FUN_14204c280(local_68);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
                    /* WARNING: Could not recover jumptable at 0x0001411f5712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  return;
}



// FUNCTION 1411f5720 FUN_1411f5720 body=189 status=ok
// SIG undefined FUN_1411f5720(void)

void FUN_1411f5720(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(char *)(param_1 + 0x100) != '\0') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
    FUN_1411e7a30(param_1,0,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    lVar1 = FWeakObjectPtr::Get(param_1 + 4);
    if (((lVar1 != 0) && (lVar1 = FUN_140cb5ff0(), lVar1 != 0)) &&
       (lVar1 = FUN_140cb5ff0(), *(longlong *)(lVar1 + 0x68) == 0)) {
      uVar2 = FWeakObjectPtr::Get(param_1 + 4);
      uVar3 = FUN_140cb5ff0();
      FUN_140cbad20(uVar3,uVar2,1);
    }
  }
  lVar1 = FUN_140cb5ff0();
  if (lVar1 != 0) {
    plVar5 = (longlong *)GetMoviePlayer();
    cVar4 = (**(code **)(*plVar5 + 0xb8))(plVar5);
    if (cVar4 == '\0') {
      uVar2 = FUN_140cb5ff0();
      FUN_140cc9000(uVar2);
    }
  }
  FUN_1411fe160(param_1);
  return;
}



// FUNCTION 1411f57e0 FUN_1411f57e0 body=200 status=ok
// SIG undefined FUN_1411f57e0(void)

void FUN_1411f57e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  plVar7 = *(longlong **)(param_1 + 0x58);
  plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x60) * 2;
  for (; plVar7 != plVar6; plVar7 = plVar7 + 2) {
    plVar4 = (longlong *)plVar7[1];
    lVar5 = *plVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    LOCK();
    *(uint *)(lVar5 + 0x70c) = (uint)(*(char *)(param_1 + 0xdc) != '\0');
    UNLOCK();
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
                    /* WARNING: Could not recover jumptable at 0x0001411f58a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  return;
}



// FUNCTION 1411f58b0 FUN_1411f58b0 body=1466 status=ok
// SIG undefined FUN_1411f58b0(void)

void FUN_1411f58b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined2 *_Src_00;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_res20;
  longlong local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  
  lVar10 = FUN_140cb5ff0();
  if (lVar10 != 0) {
    lVar10 = FUN_140cb5ff0();
    if (*(longlong *)(lVar10 + 0x68) != 0) {
      uVar11 = FUN_140cb5ff0();
      FUN_140cd4e60(uVar11,1);
    }
    puVar15 = (undefined2 *)0x0;
    local_44 = 0x101;
    local_58 = (longlong *)0x0;
    local_3c = DAT_1462a1a88 != 0;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0xbf800000;
    local_40 = 0x200;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    FWeakObjectPtr::operator=(&local_res18,0);
    *(undefined4 *)(param_1 + 0xe0) = local_res18;
    *(undefined4 *)(param_1 + 0xe4) = local_res1c;
    FUN_1411fb240(param_1);
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(DAT_146b33f38 + 0xe8);
    }
    if (-1 < param_2) {
      plVar12 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      lVar10 = plVar12[0x1f];
      if (lVar10 == 0) {
        (**(code **)(*plVar12 + 0x368))(plVar12);
        lVar10 = plVar12[0x1f];
      }
      if ((param_2 < *(int *)(lVar10 + 0x48)) && (*(longlong *)(param_1 + 0xd0) != 0)) {
        lVar10 = FUN_140c2d9f0();
        local_78 = (undefined2 *)0x0;
        puVar16 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(lVar10 + 0x40));
        local_70 = *(int *)(puVar16 + 1);
        lVar10 = (longlong)local_70;
        _Src = (void *)*puVar16;
        _Src_00 = puVar15;
        if (local_70 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
          _Src_00 = local_78;
          _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar10 * 2);
        }
        uVar4 = local_50;
        iVar9 = local_70;
        lVar10 = (longlong)(int)local_50;
        iVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (local_50._4_4_ < iVar7) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar4 & 0xffffffff);
        }
        plVar12 = local_58 + lVar10 * 2;
        *plVar12 = 0;
        *(int *)(plVar12 + 1) = iVar9;
        if (iVar9 == 0) {
          *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar12,iVar9,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar12,_Src_00,(longlong)iVar9 * 2);
        }
        plVar12 = (longlong *)FWeakObjectPtr::Get(param_1 + 4);
        if (plVar12 != (longlong *)0x0) {
          lVar10 = FUN_14141f270();
          if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
              lVar10 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (lVar10 = (**(code **)(*plVar12 + 0x148))(plVar12), lVar10 != 0)) {
            uVar11 = (**(code **)(*plVar12 + 0x148))(plVar12);
            lVar10 = UWorld::GetFirstPlayerController(uVar11);
            if (lVar10 != 0) {
              lVar13 = FUN_14145f370();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (((bVar3) && (lVar10 = FUN_140cff230(lVar10), lVar10 != 0)) &&
                 (*(char *)(lVar10 + 0x2e9) != '\0')) {
                puVar14 = &DAT_143f3eda8;
                if (iVar9 != 0) {
                  puVar14 = _Src_00;
                }
                FName::FName(&local_res20,puVar14,1);
                lVar10 = *(longlong *)(param_1 + 0xd0);
                if (*(int *)(lVar10 + 0x310) != *(int *)(lVar10 + 0x33c)) {
                  lVar13 = *(longlong *)(lVar10 + 0x348);
                  if (*(longlong *)(lVar10 + 0x348) == 0) {
                    lVar13 = lVar10 + 0x340;
                  }
                  iVar9 = *(int *)(lVar13 + ((longlong)
                                             ((int)((ulonglong)local_res20 >> 0x20) +
                                             (int)local_res20) &
                                            (longlong)*(int *)(lVar10 + 0x350) - 1U) * 4);
                  if (iVar9 != -1) {
                    lVar10 = *(longlong *)(lVar10 + 0x308);
                    do {
                      lVar13 = (longlong)iVar9 * 0x38;
                      if (*(longlong *)(lVar13 + lVar10) == local_res20) {
                        if (((iVar9 != -1) &&
                            (lVar10 = (longlong)iVar9 * 0x38 + lVar10, lVar10 != 0)) &&
                           (lVar10 != -8)) {
                          puVar14 = (undefined2 *)FUN_1405ec200();
                          if (puVar14 == (undefined2 *)0x0) {
LAB_1411f5c72:
                            puVar14 = puVar15;
                          }
                          else {
                            lVar10 = ULocalizedOverlays::StaticClass();
                            if ((*(int *)(*(longlong *)(puVar14 + 8) + 0x90) <
                                 *(int *)(lVar10 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(puVar14 + 8) + 0x88) +
                                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                              bVar3 = false;
                            }
                            else {
                              bVar3 = true;
                            }
                            if (!bVar3) goto LAB_1411f5c72;
                          }
                          FWeakObjectPtr::operator=(param_1 + 0xe0,puVar14);
                          cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xe0);
                          if (cVar6 != '\0') {
                            lVar10 = FWeakObjectPtr::Get(param_1 + 0xe0);
                            iVar9 = *(int *)(lVar10 + 0xc);
                            if (iVar9 < (int)DAT_1469e91c4) {
                              uVar17 = iVar9 >> 0x1f & 0xffff;
                              uVar8 = iVar9 + uVar17;
                              puVar15 = (undefined2 *)
                                        (*(longlong *)
                                          (DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                                        (longlong)(int)((uVar8 & 0xffff) - uVar17) * 0x18);
                            }
                            *(uint *)(puVar15 + 4) = *(uint *)(puVar15 + 4) | 0x40000000;
                          }
                        }
                        break;
                      }
                      iVar9 = *(int *)(lVar13 + 0x30 + lVar10);
                    } while (iVar9 != -1);
                  }
                }
              }
            }
          }
        }
        if (_Src_00 != (undefined2 *)0x0) {
          FMemory::Free(_Src_00);
        }
      }
    }
    if (param_2 != 3) {
      *(bool *)(param_1 + 0x101) = 0 < param_2;
    }
    local_88 = 0;
    local_80 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    lVar10 = local_88;
    FGenericPlatformString::Memcpy(local_88,L"Loading",0x10);
    uVar4 = local_50;
    lVar13 = (longlong)(int)local_50;
    iVar9 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar9);
    if (local_50._4_4_ < iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar4 & 0xffffffff);
    }
    plVar12 = local_58 + lVar13 * 2;
    *plVar12 = lVar10;
    *(undefined4 *)(plVar12 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)plVar12 + 0xc) = local_80._4_4_;
    uVar5 = local_40._3_1_;
    if (DAT_146876440 != 0) {
      uVar5 = 1;
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
    local_40 = CONCAT13(uVar5,(undefined3)local_40);
    plVar12 = (longlong *)GetMoviePlayer();
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    plVar12 = (longlong *)GetMoviePlayer();
    cVar6 = (**(code **)(*plVar12 + 0x40))(plVar12);
    if (cVar6 == '\0') {
      FUN_1411e7a30(param_1,0,0);
      lVar10 = FUN_1411e2360(param_1);
      if (lVar10 != 0) {
        *(uint *)(lVar10 + 0x7c) = *(uint *)(lVar10 + 0x7c) & 0xfffffffb;
      }
      *(undefined4 *)(param_1 + 0x20) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 0x102) = 1;
    }
    plVar12 = local_58;
    for (iVar9 = (int)local_50; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    plVar12 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_60)(plStack_60);
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
  }
  return;
}



// FUNCTION 1411f5e70 FUN_1411f5e70 body=133 status=ok
// SIG undefined FUN_1411f5e70(void)

longlong * FUN_1411f5e70(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0xfa8))(param_2);
    if ((lVar1 != 0) && (param_3 != 0)) {
      lVar1 = FUN_142f02280(lVar1,param_3);
      goto LAB_1411f5ead;
    }
  }
  lVar1 = 0;
LAB_1411f5ead:
  param_1[1] = 0;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    uVar2 = FUN_142f2b5a0();
    lVar1 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    param_1[1] = lVar1;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1411f5f00 FUN_1411f5f00 body=359 status=ok
// SIG undefined FUN_1411f5f00(void)

void FUN_1411f5f00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (iVar7 = 0, 0 < *(int *)(lVar3 + 0x478))) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
        if (plVar1 != (longlong *)0x0) {
          lVar5 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 != 0)) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14145dfc0(lVar5,param_2);
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(lVar3 + 0x478));
    }
  }
  return;
}



// FUNCTION 1411f6070 FUN_1411f6070 body=602 status=ok
// SIG undefined FUN_1411f6070(void)

longlong FUN_1411f6070(longlong param_1,float param_2,undefined4 param_3,undefined8 param_4,
                      longlong param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                      undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  longlong local_b0;
  float local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  iVar5 = 0;
  DAT_14687678c = DAT_14687678c + 1;
  lVar7 = (longlong)DAT_14687678c;
  lVar6 = (longlong)*(int *)(param_1 + 0x38) * 0x60 + lVar4;
  for (; (lVar4 != lVar6 && (param_2 < *(float *)(lVar4 + 8))); lVar4 = lVar4 + 0x60) {
    iVar5 = iVar5 + 1;
  }
  FUN_14058f8f0(local_c8,param_5);
  local_b8 = *(undefined4 *)(param_5 + 0x10);
  local_b0 = lVar7;
  local_a8 = param_2;
  FText::FText(local_a0,param_4);
  local_84 = param_6;
  local_88 = param_9;
  local_80 = param_3;
  FWeakObjectPtr::operator=(&local_7c,param_7);
  local_74 = param_8;
  FUN_14058f8f0(local_70,local_c8);
  local_60 = local_b8;
  local_58 = 0;
  local_54 = 1;
  local_52 = 0;
  FUN_140591060(local_c8);
  iVar3 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar3);
  }
  lVar6 = (longlong)iVar5 * 0x60;
  _Src = (void *)(*(longlong *)(param_1 + 0x30) + lVar6);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x60),_Src,(longlong)(iVar3 - iVar5) * 0x60);
  lVar4 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(lVar6 + lVar4) = local_b0;
  *(float *)(lVar6 + 8 + lVar4) = local_a8;
  FText::FText(lVar4 + 0x10 + lVar6,local_a0);
  *(undefined1 *)(lVar6 + 0x28 + lVar4) = local_88;
  *(undefined4 *)(lVar6 + 0x2c + lVar4) = local_84;
  *(undefined4 *)(lVar6 + 0x30 + lVar4) = local_80;
  *(undefined4 *)(lVar6 + 0x34 + lVar4) = local_7c;
  *(undefined4 *)(lVar6 + 0x38 + lVar4) = local_78;
  *(undefined1 *)(lVar6 + 0x3c + lVar4) = local_74;
  FUN_14058f8f0(lVar6 + lVar4 + 0x40,local_70);
  *(undefined4 *)(lVar6 + lVar4 + 0x50) = local_60;
  *(undefined4 *)(lVar6 + 0x58 + lVar4) = local_58;
  *(undefined1 *)(lVar6 + 0x5c + lVar4) = (undefined1)local_54;
  *(undefined1 *)(lVar6 + 0x5d + lVar4) = local_54._1_1_;
  *(undefined1 *)(lVar6 + 0x5e + lVar4) = local_52;
  FUN_140591060(local_70);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  FUN_1411fe220(param_1 + -0x28,0);
  FUN_140591060(param_5);
  return lVar7;
}



// FUNCTION 1411f62d0 FUN_1411f62d0 body=231 status=ok
// SIG undefined FUN_1411f62d0(void)

void FUN_1411f62d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined4 local_20;
  longlong local_18;
  
  FUN_140f47510();
  local_38 = 0xffffffffffffffff;
  local_18 = 0;
  local_20 = 0xffffffff;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x358))(param_1,&local_38,1);
  if (local_18 != 0) {
    LOCK();
    piVar1 = (int *)(local_18 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar6 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_28 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  FUN_1416f8340(local_38._4_4_);
  FUN_1416f8340(local_38 & 0xffffffff);
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xd9);
  if (cVar5 != '\0') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xd9);
    (**(code **)(*plVar6 + 0x298))(plVar6);
  }
  return;
}



// FUNCTION 1411f63c0 FUN_1411f63c0 body=137 status=ok
// SIG undefined FUN_1411f63c0(void)

void FUN_1411f63c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
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
  local_58[0] = &LAB_1411d5050;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1411f6450 FUN_1411f6450 body=360 status=ok
// SIG undefined FUN_1411f6450(void)

void FUN_1411f6450(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar4 = FUN_142dfdfe0();
    lVar8 = param_3;
    while (lVar8 != lVar4) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    lVar4 = FUN_142dfdfe0();
    lVar8 = param_3;
    do {
      if (lVar8 == lVar4) goto LAB_1411f64b2;
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
    param_3 = 0;
LAB_1411f64b2:
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x70);
    plVar6 = (longlong *)FUN_142dcdc90(uVar5,param_3);
    if (plVar6 != (longlong *)0x0) {
      lVar8 = *(longlong *)(param_1 + 0x78);
      lVar4 = (longlong)*(int *)(param_1 + 0x80) * 0xc0 + lVar8;
      if (lVar8 != lVar4) {
        while ((*plVar6 != *(longlong *)(lVar8 + 0x10) || (plVar6[1] != *(longlong *)(lVar8 + 0x18))
               )) {
          lVar8 = lVar8 + 0xc0;
          if (lVar8 == lVar4) {
            return;
          }
        }
        FUN_1411e8c20(lVar8,param_1);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        bVar1 = false;
        iVar7 = *(int *)(param_1 + 0x5c);
        iVar3 = *(int *)(param_1 + 0x50) + -1;
        lVar4 = (longlong)iVar3;
        if (-1 < iVar3) {
          lVar9 = lVar4 << 4;
          bVar1 = false;
          do {
            if (((*(int *)(lVar9 + 8 + *(longlong *)(param_1 + 0x48)) == 0) ||
                (plVar6 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x48)),
                plVar6 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6,lVar8), cVar2 == '\0')) {
              bVar1 = true;
            }
            lVar9 = lVar9 + -0x10;
            lVar4 = lVar4 + -1;
          } while (-1 < lVar4);
          iVar7 = *(int *)(param_1 + 0x5c);
        }
        *(int *)(param_1 + 0x5c) = iVar7 + -1;
        if (bVar1) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x48,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411f65c0 FUN_1411f65c0 body=512 status=ok
// SIG undefined FUN_1411f65c0(void)

void FUN_1411f65c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_res8 [8];
  wchar_t *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    local_10 = 5;
    local_18 = (wchar_t *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    iVar4 = 0;
    FGenericPlatformString::Memcpy(local_18,L"None",10);
    lVar1 = *(longlong *)(param_1 + 0x688);
    plVar2 = (longlong *)FName::FName(local_res8,"MenuA",1);
    if (lVar1 == *plVar2) {
      if (local_18 != L"Red") {
        uVar3 = local_10._4_4_;
        local_10 = (ulonglong)local_10._4_4_ << 0x20;
        if (uVar3 != 4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,4);
          uVar3 = local_10._4_4_;
          iVar4 = (int)local_10;
        }
        local_10 = CONCAT44(local_10._4_4_,iVar4 + 4);
        if ((int)uVar3 < iVar4 + 4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar4);
        }
        builtin_wcsncpy(local_18,L"Red",4);
      }
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x688);
      plVar2 = (longlong *)FName::FName(local_res8,"MenuB",1);
      if (lVar1 == *plVar2) {
        if (local_18 != L"Green") {
          uVar3 = local_10._4_4_;
          local_10 = (ulonglong)local_10._4_4_ << 0x20;
          if (uVar3 != 6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,6);
            uVar3 = local_10._4_4_;
            iVar4 = (int)local_10;
          }
          local_10 = CONCAT44(local_10._4_4_,iVar4 + 6);
          if ((int)uVar3 < iVar4 + 6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar4);
          }
          builtin_wcsncpy(local_18,L"Green",6);
        }
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x688);
        plVar2 = (longlong *)FName::FName(local_res8,"MenuC",1);
        if ((lVar1 == *plVar2) && (local_18 != L"Blue")) {
          uVar3 = local_10._4_4_;
          local_10 = (ulonglong)local_10._4_4_ << 0x20;
          if (uVar3 != 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,5);
            uVar3 = local_10._4_4_;
            iVar4 = (int)local_10;
          }
          local_10 = CONCAT44(local_10._4_4_,iVar4 + 5);
          if ((int)uVar3 < iVar4 + 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar4);
          }
          builtin_wcsncpy(local_18,L"Blue",5);
        }
      }
    }
    FUN_142088910(*(undefined8 *)(param_1 + 0x6a0),&local_18);
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1411f67c0 FUN_1411f67c0 body=279 status=ok
// SIG undefined FUN_1411f67c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411f67c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_88[0] = param_1;
  if (*(int *)(param_2 + 8) != 0) {
    plVar1 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar1 = param_2 + 2;
    }
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)*plVar1)(plVar1,local_68);
      (**(code **)(*plVar1 + 8))(plVar1);
      local_78 = (code *)*param_2;
      goto LAB_1411f6831;
    }
  }
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1411f6831:
  FUN_1411d0d60(local_88);
  FUN_1411d0d60(local_88);
  *(undefined1 *)(param_1 + 0xdc) = 0;
  if (local_38 != 0) {
    plVar1 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar1 = local_48;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar1 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar1 = param_2 + 2;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411f68e0 FUN_1411f68e0 body=768 status=ok
// SIG undefined FUN_1411f68e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411f68e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_208 [32];
  undefined2 local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [80];
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar3 = *(longlong **)(param_1 + 0x128);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar11 = iVar6 == 0;
    if (bVar11) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar6 == (int)plVar3[1];
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        lVar4 = *(longlong *)(param_1 + 0x120);
        if ((lVar4 == 0) || (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x140), cVar5 == '\0'))
        goto LAB_1411f6b8e;
        FWeakObjectPtr::operator=(&local_1d8,param_1);
        local_188 = 0;
        local_178 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_1a8);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_1444f8920;
          puVar8[1] = param_1;
          *(undefined4 *)(puVar8 + 2) = local_1d8;
          *(undefined4 *)((longlong)puVar8 + 0x14) = local_1d4;
        }
        local_1d0 = 0;
        local_1b8[0] = &LAB_1411d5130;
        local_1c8 = 0x29;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
        local_1e8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_1d0,0x29,"UPlayerIdentityWidget::RefreshLeaderIcon");
        FUN_1410b2c00(local_118,&local_1d0,local_1b8);
        uVar9 = FUN_1410ca7e0(local_118,local_168);
        FUN_14204c280(uVar9);
        lVar10 = local_58;
        if (local_58 == 0) goto LAB_1411f6b28;
        goto LAB_1411f6a84;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return;
LAB_1411f6a84:
  lVar10 = local_58;
  if ((local_58 == 0) || (*(char *)(local_58 + 0x58) != '\0')) {
LAB_1411f6b28:
    cVar5 = *(char *)(lVar10 + 0x58);
    while (cVar5 == '\0') {
      (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x20))
                (*(longlong **)(lVar10 + 0x50),0x5d638865,0);
      cVar5 = *(char *)(lVar10 + 0x58);
    }
    FUN_142056670(lVar4,*(undefined1 *)(lVar10 + 0x60));
    FUN_140ce1dc0(local_118);
LAB_1411f6b8e:
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 != 1) {
      return;
    }
    (**(code **)(*plVar3 + 8))(plVar3,1);
    return;
  }
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') &&
     ((DAT_1468c21ae != '\0' && (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)))) {
    lVar10 = FUN_14203ca70();
    if (lVar10 != 0) {
      FUN_1420714f0(lVar10);
    }
  }
  else {
    FUN_142036de0();
  }
  lVar10 = local_58;
  if (local_58 == 0) goto LAB_1411f6b28;
  if (*(char *)(local_58 + 0x58) == '\0') {
    (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
  }
  goto LAB_1411f6a84;
}



// FUNCTION 1411f6be0 FUN_1411f6be0 body=184 status=ok
// SIG undefined FUN_1411f6be0(void)

ulonglong FUN_1411f6be0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar3 = 0;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x361);
  if (bVar1 == 0) {
    *(byte *)(param_1 + 0x361) = 1;
  }
  else {
    uVar3 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0x380) = 0xffffffff;
    FUN_1411e7890(param_1);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    }
    local_58[0] = &LAB_1411d50e0;
    uVar3 = FUN_14208c5d0(param_1,local_58);
  }
  return uVar3;
}



// FUNCTION 1411f6ca0 FUN_1411f6ca0 body=540 status=ok
// SIG undefined FUN_1411f6ca0(void)

void FUN_1411f6ca0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  short *psVar6;
  longlong local_28;
  ulonglong local_20;
  
  if (*(int *)(param_1 + 0x3c0) < 2) {
    plVar1 = *(longlong **)(param_1 + 0x2d0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,1);
    }
    plVar1 = *(longlong **)(param_1 + 0x2e0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,0);
    }
    lVar4 = 0;
    lVar3 = FUN_1411e35f0();
    if (lVar3 != 0) {
      lVar4 = FUN_1404cd290(lVar3,param_1 + 0x350);
    }
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      FUN_142088910(*(longlong *)(param_1 + 0x2d0),param_1 + 0x2e8);
    }
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(char *)((longlong)plVar1 + 0x63c) != '\0')) {
        if (*(longlong *)(param_1 + 0x2d8) != 0) {
          local_28 = 0;
          psVar6 = &DAT_1446ec738;
          local_20 = 0;
          if (lVar4 == 0) {
            psVar6 = &DAT_1446ec72c;
          }
          if (*psVar6 != 0) {
            lVar3 = -1;
            do {
              lVar3 = lVar3 + 1;
            } while (psVar6[lVar3] != 0);
            uVar5 = (int)lVar3 + 1;
            local_20 = (ulonglong)uVar5;
            if (0 < (int)uVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
            }
            FGenericPlatformString::Memcpy(local_28,psVar6,(longlong)(int)uVar5 * 2);
          }
          FUN_142088910(*(undefined8 *)(param_1 + 0x2d8),&local_28);
          if (local_28 != 0) {
            FMemory::Free();
          }
        }
        if ((lVar4 != 0) || (lVar4 = plVar1[0xd0], lVar4 != 0)) {
          (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1 + 0x2e8,lVar4);
        }
      }
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x2e0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,1);
      lVar4 = *(longlong *)(param_1 + 0x2e0);
      FString::operator=(lVar4 + 0x198,param_1 + 0x3b8);
      if (*(longlong *)(lVar4 + 0x1a8) != 0) {
        FUN_142088cf0(*(longlong *)(lVar4 + 0x1a8),lVar4 + 0x198);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x2d0);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001411f6d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x278))(plVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1411f6ec0 FUN_1411f6ec0 body=1906 status=ok
// SIG undefined FUN_1411f6ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411f6ec0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  int local_2d8;
  undefined4 local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  int local_2c0 [2];
  longlong local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 local_278;
  longlong *local_270;
  undefined **local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_238;
  undefined4 local_234;
  longlong local_230 [2];
  longlong local_220 [2];
  longlong local_210 [2];
  longlong local_200 [2];
  longlong local_1f0 [2];
  longlong local_1e0 [3];
  undefined1 *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  undefined1 local_178 [80];
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  lVar14 = param_1 + 0x140;
  local_2d0 = param_1;
  local_2c8 = param_1;
  cVar5 = FWeakObjectPtr::IsValid(lVar14);
  if (cVar5 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x148) == 0) {
    return;
  }
  FWeakObjectPtr::operator=(&local_2b0,param_1);
  local_238 = local_2b0;
  local_234 = local_2ac;
  local_198 = 0;
  local_188 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_1b8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_1444f8920;
    puVar9[1] = param_1;
    *(undefined4 *)(puVar9 + 2) = local_2b0;
    *(undefined4 *)((longlong)puVar9 + 0x14) = local_2ac;
  }
  local_2a8 = 0;
  local_1c8[0] = &LAB_1411d5000;
  local_2a0 = 0x32;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
  local_2e8 = CONCAT22(local_2e8._2_2_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2a8,0x32,"UPlayerIdentityWidget::RefreshPlayerCharacterInfo");
  FUN_140fe55e0(local_128,&local_2a8,local_1c8);
  uVar10 = FUN_140ff5760(local_128,local_178);
  FUN_14204c280(uVar10);
  lVar11 = local_68;
  if (local_68 != 0) {
LAB_1411f7030:
    if (local_68 == 0) goto LAB_1411f703f;
    if (*(char *)(local_68 + 0x58) != '\0') goto LAB_1411f703f;
    bVar4 = false;
    do {
      lVar11 = local_68;
      if (bVar4) break;
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar6 = GetCurrentThreadId();
        bVar4 = false;
        if (DVar6 == DAT_1468c21c0) goto LAB_1411f7075;
      }
      else {
LAB_1411f7075:
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142036de0();
      }
      else {
        lVar11 = FUN_14203ca70();
        if (lVar11 != 0) {
          FUN_1420714f0(lVar11);
        }
      }
      if ((local_68 == 0) || (*(char *)(local_68 + 0x58) != '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto LAB_1411f7030;
      if (local_68 != 0) goto code_r0x0001411f70b5;
LAB_1411f703f:
      bVar4 = true;
    } while( true );
  }
  cVar5 = *(char *)(lVar11 + 0x58);
  while (cVar5 == '\0') {
    (**(code **)(**(longlong **)(lVar11 + 0x50) + 0x20))(*(longlong **)(lVar11 + 0x50),0x5d638865,0)
    ;
    cVar5 = *(char *)(lVar11 + 0x58);
  }
  lVar11 = *(longlong *)(lVar11 + 0x60);
  uVar10 = *(undefined8 *)(param_1 + 0x148);
  if (lVar11 == 0) {
    local_280 = *(longlong **)(param_1 + 0x150);
    if (local_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_280 + 1) = (int)local_280[1] + 1;
      UNLOCK();
    }
    local_288 = uVar10;
    uVar10 = FWeakObjectPtr::Get(lVar14);
    local_2b8 = FUN_140bbb8d0(uVar10,&local_288);
    if (local_2b8 == 0) {
LAB_1411f7248:
      local_2b8 = 0;
    }
    else {
      lVar11 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_2b8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_2b8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1411f7248;
    }
    plVar3 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_280 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar15 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_2b8 == 0) {
LAB_1411f73a0:
      local_278 = *(undefined8 *)(param_1 + 0x148);
      local_270 = *(longlong **)(param_1 + 0x150);
      if (local_270 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_270 + 1) = (int)local_270[1] + 1;
        UNLOCK();
      }
      uVar10 = FWeakObjectPtr::Get(lVar14);
      lVar11 = FUN_140bb7f10(uVar10,&local_278);
      plVar3 = local_270;
      if (local_270 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_270 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_270)(local_270);
          LOCK();
          piVar15 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (lVar11 != 0) {
        uVar10 = FWeakObjectPtr::Get(lVar14);
        lVar13 = FUN_140bbaee0(uVar10,*(undefined4 *)(lVar11 + 0x54));
        if (lVar13 != 0) {
          uVar7 = *(undefined4 *)(lVar11 + 0x50);
          if (*(char *)(lVar11 + 0x5c) != '\0') {
            uVar10 = FName::ToString(lVar13 + 0x88,local_210);
            FUN_1411d1880(&local_2d0,lVar13 + 0x90,uVar7,uVar10);
            local_220[0] = local_210[0];
            goto LAB_1411f75d5;
          }
          goto LAB_1411f75e1;
        }
      }
      if ((*(longlong *)(param_1 + 0x168) != 0) &&
         (lVar11 = *(longlong *)(param_1 + 0x178), lVar11 != 0)) {
        iVar8 = *(int *)(lVar11 + 0x40);
        if ((*(char *)(lVar11 + 0x82) == '\0') && (iVar8 < 2)) goto LAB_1411f75e1;
        uVar7 = *(undefined4 *)(lVar11 + 0x6c);
        uVar10 = FWeakObjectPtr::Get(lVar14);
        lVar11 = FUN_140bbaee0(uVar10,uVar7);
        if (lVar11 != 0) {
          uVar10 = FName::ToString(lVar11 + 0x88,local_200);
          FUN_1411d1880(&local_2d0,lVar11 + 0x90,iVar8,uVar10);
          local_220[0] = local_200[0];
          goto LAB_1411f75d5;
        }
      }
      if ((*(longlong **)(param_1 + 0x168) != (longlong *)0x0) &&
         (lVar11 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x38))(),
         (*(byte *)(lVar11 + 0x10) & 4) != 0)) {
        local_2d4 = 1;
        uVar10 = FWeakObjectPtr::Get(lVar14);
        lVar14 = FUN_140be2190(uVar10,lVar11 + 0x18,&local_2d4);
        if (lVar14 != 0) {
          TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::FindId((longlong *)(lVar11 + 0x30),local_2c0,&DAT_1462a1f40);
          if ((((local_2c0[0] != -1) &&
               (lVar11 = (longlong)local_2c0[0] * 0x30 + *(longlong *)(lVar11 + 0x30), lVar11 != 0))
              && (piVar15 = (int *)(lVar11 + 0x10), piVar15 != (int *)0x0)) && (*piVar15 == 6)) {
            uVar10 = FUN_1404b73f0(piVar15,local_1f0);
            local_2e8 = 0xffffffff;
            iVar8 = FUN_141592950(uVar10,L"PlayerStatusChoosingCharacter",1);
            if (local_1f0[0] != 0) {
              FMemory::Free();
            }
            if (iVar8 != -1) goto LAB_1411f75e1;
          }
          uVar10 = FName::ToString(lVar14 + 0x88,local_1e0);
          FUN_1411d1880(&local_2d0,lVar14 + 0x90,local_2d4,uVar10);
          local_220[0] = local_1e0[0];
          goto LAB_1411f75d5;
        }
      }
    }
    else {
      local_2d8 = *(int *)(local_2b8 + 0x568);
      plVar3 = *(longlong **)(param_1 + 0x150);
      local_260 = *(undefined8 *)(param_1 + 0x148);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_250 = 0;
      local_268 = &PTR_FUN_143f740c8;
      local_248 = 0;
      local_258 = plVar3;
      uVar10 = FWeakObjectPtr::Get(lVar14);
      uVar10 = UAssetRegistryImpl::OnAssetAdded(uVar10);
      iVar8 = FUN_1404cc060(uVar10,&local_268);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_258)();
          LOCK();
          piVar15 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_258 + 8))(local_258,1);
          }
        }
      }
      if (((iVar8 != -1) || (*(char *)(local_2b8 + 0x5d6) != '\0')) || (1 < local_2d8)) {
LAB_1411f735d:
        lVar11 = *(longlong *)(local_2b8 + 0x570);
        if (lVar11 != 0) {
          uVar10 = FName::ToString(lVar11 + 0x88,local_220);
          FUN_1411d1880(&local_2d0,lVar11 + 0x90,local_2d8,uVar10);
          goto LAB_1411f75d5;
        }
        goto LAB_1411f73a0;
      }
      uVar10 = FWeakObjectPtr::Get(lVar14);
      cVar5 = FUN_140bca8a0(uVar10);
      if (cVar5 != '\0') goto LAB_1411f735d;
    }
LAB_1411f75e1:
    FUN_1411cd990(&local_2c8);
  }
  else {
    local_290 = *(longlong **)(param_1 + 0x150);
    if (local_290 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_290 + 1) = (int)local_290[1] + 1;
      UNLOCK();
    }
    local_298 = uVar10;
    uVar10 = FWeakObjectPtr::Get(lVar14);
    uVar12 = FName::ToString(lVar11 + 0x88,local_230);
    uVar7 = FUN_140bb6e30(uVar10,&local_298);
    FUN_1411d1880(&local_2d0,lVar11 + 0x90,uVar7,uVar12);
    plVar3 = local_290;
    local_220[0] = local_230[0];
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_290 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar15 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        local_220[0] = local_230[0];
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
          local_220[0] = local_230[0];
        }
      }
    }
LAB_1411f75d5:
    if (local_220[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_140ce1dc0(local_128);
  return;
code_r0x0001411f70b5:
  (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))(*(longlong **)(local_68 + 0x50),5);
  goto LAB_1411f7030;
}



// FUNCTION 1411f7640 FUN_1411f7640 body=137 status=ok
// SIG undefined FUN_1411f7640(void)

void FUN_1411f7640(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
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
  local_58[0] = &LAB_1411d5010;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1411f76d0 FUN_1411f76d0 body=137 status=ok
// SIG undefined FUN_1411f76d0(void)

void FUN_1411f76d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
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
  local_58[0] = &LAB_1411d4ff0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1411f7760 FUN_1411f7760 body=139 status=ok
// SIG undefined FUN_1411f7760(void)

void FUN_1411f7760(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FUN_1411e1c90(param_1,local_res8);
  if (*plVar2 != 0) {
    lVar3 = FUN_1428dfc70();
    lVar4 = *plVar2;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) goto LAB_1411f77a0;
    }
  }
  lVar4 = 0;
LAB_1411f77a0:
  if ((*(char *)(param_1 + 0xf9) == '\0') && (lVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_1411e5ff0(param_1);
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_140e5e920(lVar4 + 0x26f0,uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18));
  }
  return;
}



// FUNCTION 1411f77f0 FUN_1411f77f0 body=18 status=ok
// SIG undefined FUN_1411f77f0(void)

void FUN_1411f77f0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1411d31b0(*(longlong *)(param_1 + 0x48),param_2,1);
    return;
  }
  return;
}



// FUNCTION 1411f7810 FUN_1411f7810 body=529 status=ok
// SIG undefined FUN_1411f7810(void)

void FUN_1411f7810(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  FUN_1411d7580();
  lVar6 = 0x230;
  if (*(char *)(param_1 + 0x27b) != '\0') {
    if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
       (lVar2 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
      lVar2 = 0xa8;
    }
    if ((((byte)(*(char *)(param_1 + lVar2) - 1U) < 2) &&
        (lVar2 = FUN_1411e5ff0(param_1), *(char *)(param_1 + 0x98) != '\x02')) &&
       (lVar5 = *(longlong *)(param_1 + 0x68), lVar5 != 0)) {
      lVar3 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar2 != 0)) {
        uVar4 = FUN_140c46a10(lVar2,0);
        FUN_140e62a60(lVar5,uVar4,param_2);
        if (*(longlong *)(param_1 + 0x48) != 0) {
          FUN_1411d31b0(*(longlong *)(param_1 + 0x48),lVar5,1);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x27c) != '\0') {
    if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
       (*(char *)(param_1 + 0x2a8) != '\0')) {
      lVar6 = 0xa8;
    }
    if ((((byte)(*(char *)(param_1 + lVar6) - 1U) < 2) &&
        (lVar6 = FUN_1411e5ff0(param_1), *(char *)(param_1 + 0x98) != '\x02')) &&
       (lVar2 = *(longlong *)(param_1 + 0x68), lVar2 != 0)) {
      lVar5 = FUN_141404840();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (lVar6 != 0)) &&
         (FUN_140e47720(lVar2,lVar6), *(longlong *)(param_1 + 0x48) != 0)) {
        puVar8 = *(undefined8 **)(lVar2 + 0x1ad0);
        uVar7 = 0;
        uVar9 = (longlong)*(int *)(lVar2 + 0x1ad8) & 0x1fffffffffffffff;
        if (puVar8 + *(int *)(lVar2 + 0x1ad8) < puVar8) {
          uVar9 = uVar7;
        }
        if (uVar9 != 0) {
          do {
            FUN_1411d31b0(*(undefined8 *)(param_1 + 0x48),*puVar8,1);
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar7 != uVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411f7a30 FUN_1411f7a30 body=269 status=ok
// SIG undefined FUN_1411f7a30(void)

void FUN_1411f7a30(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  bool bVar9;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x140);
  if ((cVar5 != '\0') && (plVar3 = *(longlong **)(param_1 + 0x118), plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar6 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        lVar4 = *(longlong *)(param_1 + 0x110);
        if (lVar4 != 0) {
          uVar7 = FWeakObjectPtr::Get(param_1 + 0x140);
          iVar6 = FUN_140bba270(uVar7);
          if (iVar6 == 1) {
            pwVar8 = L"on";
          }
          else if (param_2 == 0) {
            pwVar8 = L"on";
          }
          else if (param_2 == 1) {
            pwVar8 = L"talk";
          }
          else {
            if (param_2 != 2) goto LAB_1411f7afa;
            pwVar8 = L"off";
          }
          FUN_14203e030(lVar4,pwVar8);
        }
LAB_1411f7afa:
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1411f7b40 FUN_1411f7b40 body=340 status=ok
// SIG undefined FUN_1411f7b40(void)

void FUN_1411f7b40(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined1 local_58 [48];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar4 = 0;
    local_res10 = 0;
    if (param_1[0x70] != 0) {
      FUN_1411e23f0(param_2,local_58,param_1 + 0x6e);
      (**(code **)(*param_1 + 0x358))(param_1,local_58,0);
      FUN_140ddef50(local_58);
      return;
    }
    lVar1 = param_1[0x76];
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x3e4);
    piVar3 = (int *)FUN_140dea820(param_3 + 0x4b0,&local_res10,lVar1);
    if (*piVar3 == -1) {
      lVar4 = param_3 + 0x500;
    }
    else {
      FUN_140dea820(param_3 + 0x4b0,&local_res10,lVar1);
      if ((int)local_res10 != -1) {
        lVar4 = (longlong)(int)local_res10 * 0x690 + *(longlong *)(param_3 + 0x4b0);
      }
      lVar4 = lVar4 + 0x10;
    }
    FUN_1411e2a40(param_2,local_58,uVar2,lVar4);
    (**(code **)(*param_1 + 0x358))(param_1,local_58,0);
    FUN_140ddef50(local_58);
  }
  return;
}



// FUNCTION 1411f7ca0 FUN_1411f7ca0 body=137 status=ok
// SIG undefined FUN_1411f7ca0(void)

void FUN_1411f7ca0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
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
  local_58[0] = &LAB_1411d4fb0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1411f7d30 FUN_1411f7d30 body=1246 status=ok
// SIG undefined FUN_1411f7d30(void)

void FUN_1411f7d30(longlong param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  void *pvVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  void **ppvVar17;
  bool bVar18;
  wchar_t *local_a8;
  int local_a0;
  int local_9c;
  undefined2 *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  pvVar8 = (void *)0x0;
  if ((*(longlong *)(DAT_146b33f38 + 0x98) == 0) ||
     (pvVar8 = (void *)FUN_140d7dcb0(*(longlong *)(DAT_146b33f38 + 0x98),param_2),
     pvVar8 == (void *)0x0)) {
    ppvVar17 = &local_68;
    local_68 = (void *)0x0;
    local_60 = 0;
    bVar5 = false;
    bVar18 = true;
    pvVar14 = local_88;
  }
  else {
    iVar7 = *(int *)((longlong)pvVar8 + 0x50);
    pvVar3 = *(void **)((longlong)pvVar8 + 0x48);
    local_88 = (void *)0x0;
    local_80 = iVar7;
    if (iVar7 == 0) {
      ppvVar17 = &local_88;
      local_7c = 0;
      bVar5 = true;
      bVar18 = false;
      pvVar14 = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar7,0);
      pvVar14 = local_88;
      _guard_xfg_dispatch_icall_nop(local_88,pvVar3,(longlong)iVar7 * 2);
      ppvVar17 = &local_88;
      bVar5 = true;
      bVar18 = false;
    }
  }
  pvVar3 = local_68;
  local_a8 = (wchar_t *)0x0;
  local_a0 = *(int *)(ppvVar17 + 1);
  lVar16 = (longlong)local_a0;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
    _guard_xfg_dispatch_icall_nop(local_a8,*ppvVar17,lVar16 * 2);
  }
  if ((bVar18) && (pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  if ((bVar5) && (pvVar14 != (void *)0x0)) {
    FMemory::Free(pvVar14);
  }
  bVar18 = false;
  puVar13 = local_78;
  if (local_a0 < 2) {
LAB_1411f7f44:
    bVar5 = false;
    puVar11 = local_98;
  }
  else {
    local_78 = (undefined2 *)0x0;
    local_70 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    puVar13 = local_78;
    FGenericPlatformString::Memcpy(local_78,L"empty",0xc);
    bVar18 = true;
    puVar11 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar11 = puVar13;
    }
    pwVar15 = L"";
    if (local_a0 != 0) {
      pwVar15 = local_a8;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar15,puVar11);
    if (iVar7 == 0) goto LAB_1411f7f44;
    local_98 = (undefined2 *)0x0;
    local_90 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    puVar11 = local_98;
    FGenericPlatformString::Memcpy(local_98,L"nothing",0x10);
    bVar18 = true;
    bVar5 = true;
    puVar12 = &DAT_143f3eda8;
    if ((int)local_90 != 0) {
      puVar12 = puVar11;
    }
    pwVar15 = L"";
    if (local_a0 != 0) {
      pwVar15 = local_a8;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar15,puVar12);
    if (iVar7 != 0) {
      bVar6 = true;
      goto LAB_1411f7f4b;
    }
  }
  bVar6 = false;
LAB_1411f7f4b:
  if ((bVar5) && (puVar11 != (undefined2 *)0x0)) {
    FMemory::Free(puVar11);
  }
  if ((bVar18) && (puVar13 != (undefined2 *)0x0)) {
    FMemory::Free(puVar13);
  }
  if (!bVar6) {
    pwVar15 = L"empty";
    if (*(char *)(param_1 + 0x1a0) != '\0') {
      pwVar15 = L"nothing";
    }
    if (local_a8 != pwVar15) {
      iVar7 = 0;
      if (*pwVar15 != L'\0') {
        lVar16 = -1;
        do {
          lVar16 = lVar16 + 1;
        } while (pwVar15[lVar16] != L'\0');
        iVar7 = (int)lVar16 + 1;
      }
      local_a0 = 0;
      iVar10 = 0;
      if (local_9c != iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8,iVar7);
        iVar10 = local_a0;
      }
      local_a0 = iVar7 + iVar10;
      if (local_9c < local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop(local_a8,pwVar15,(longlong)iVar7 * 2);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xe0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar18 = iVar7 == 0;
    if (bVar18) {
      *(int *)(plVar4 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar18) {
      LOCK();
      bVar18 = iVar7 == (int)plVar4[1];
      if (bVar18) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar18) {
        if (plVar4 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0xd8) != 0) {
            FUN_14203dbf0(*(longlong *)(param_1 + 0xd8),&local_a8);
          }
          LOCK();
          plVar1 = plVar4 + 1;
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
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
        break;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar18 = iVar7 == 0;
      if (bVar18) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(longlong *)(param_1 + 0x100) != 0) && (*(longlong *)(param_1 + 0x108) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x108) + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      if (pvVar8 == (void *)0x0) {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_58,L"NO STATUS",L"GFxPlayerIdentityWidget",L"NoStatusText");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xf8,uVar9,1,0);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          lVar16 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
      }
      else {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xf8,(longlong)pvVar8 + 0x30,1,0);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar18 = iVar7 == 0;
    if (bVar18) {
      *(int *)(plVar4 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar18) {
      LOCK();
      bVar18 = iVar7 == (int)plVar4[1];
      if (bVar18) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar18) {
        if (plVar4 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            if (param_3 == '\0') {
              pwVar15 = L"iconOnly";
            }
            else {
              pwVar15 = L"helpOnly";
              if (bVar6) {
                pwVar15 = L"iconSwitch";
              }
            }
            FUN_14203e030(*(longlong *)(param_1 + 0xe8),pwVar15);
          }
          LOCK();
          plVar1 = plVar4 + 1;
          lVar16 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
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
        break;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar18 = iVar7 == 0;
      if (bVar18) {
        *(int *)(plVar4 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  if (local_a8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411f8210 FUN_1411f8210 body=216 status=ok
// SIG undefined FUN_1411f8210(void)

void FUN_1411f8210(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong local_18;
  ulonglong local_10;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x358);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x378);
    if (0 < iVar1 != (bool)*(char *)(param_1 + 0x360)) {
      *(bool *)(param_1 + 0x360) = 0 < iVar1;
      pwVar6 = L"hide";
      if (0 < iVar1) {
        pwVar6 = L"show";
      }
      local_18 = 0;
      local_10 = 0;
      if (*pwVar6 != L'\0') {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (pwVar6[lVar5] != L'\0');
        uVar4 = (int)lVar5 + 1;
        local_10 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,pwVar6,(longlong)(int)uVar4 * 2);
      }
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x358);
      FUN_142088910(uVar3,&local_18);
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1411f82f0 FUN_1411f82f0 body=220 status=ok
// SIG undefined FUN_1411f82f0(void)

ulonglong FUN_1411f82f0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar3 = 0;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x28);
  if (bVar1 == 0) {
    *(byte *)(param_1 + 0x28) = 1;
  }
  else {
    uVar3 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    FUN_1411cb930(param_1 + 0x148);
    FUN_1411f7640(param_1);
    FUN_1411f76d0(param_1);
    FUN_1411f6ec0(param_1);
    FUN_1411f7ca0(param_1);
    FUN_1411f68e0(param_1);
    FUN_1411f63c0(param_1);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    }
    local_58[0] = &LAB_1411d5040;
    uVar3 = FUN_14204c280(local_58);
  }
  return uVar3;
}



// FUNCTION 1411f83d0 FUN_1411f83d0 body=114 status=ok
// SIG undefined FUN_1411f83d0(void)

void FUN_1411f83d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = *param_3;
  local_24 = param_3[1];
  local_20 = param_3[2];
  local_1c = param_3[3];
  local_18 = param_3[4];
  local_14 = param_3[5];
  local_10 = param_3[6];
  local_c = param_3[7];
  FUN_142ecfc80(param_1,param_2,&local_28);
  if (0 < *(int *)(param_1 + 0x208)) {
    FUN_1411fac10(param_1 + -0x170);
    return;
  }
  return;
}



// FUNCTION 1411f8450 FUN_1411f8450 body=38 status=ok
// SIG undefined FUN_1411f8450(void)

void FUN_1411f8450(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001411f8472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1411f8480 FUN_1411f8480 body=227 status=ok
// SIG undefined FUN_1411f8480(void)

void FUN_1411f8480(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0xc0 + (longlong)param_2 * 0xd8);
    iVar3 = param_3;
    do {
      FUN_1416f8340((int)plVar2[2]);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_1411ca660(plVar2 + -0x17);
      plVar2 = plVar2 + 0x1b;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xd8),
                 (void *)((longlong)(param_2 + param_3) * 0xd8 + *param_1),(longlong)iVar1 * 0xd8);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FSessionSortDetails,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1411f8570 FUN_1411f8570 body=267 status=ok
// SIG undefined FUN_1411f8570(void)

void FUN_1411f8570(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x60);
    iVar6 = param_3;
    do {
      FUN_140591060(plVar7 + 5);
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar7 = plVar7 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar5 * 0x60);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1411f8680 FUN_1411f8680 body=600 status=ok
// SIG undefined FUN_1411f8680(void)

void FUN_1411f8680(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = *param_1 + 0xb0 + (longlong)param_2 * 0x168;
    iVar6 = param_3;
    do {
      plVar3 = *(longlong **)(lVar7 + 0xa0);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      FSlateBrush::~FSlateBrush(lVar7);
      if (*(longlong *)(lVar7 + -0x38) != 0) {
        FMemory::Free();
      }
      plVar3 = *(longlong **)(lVar7 + -0x48);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar3 = *(longlong **)(lVar7 + -0x60);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar3 = *(longlong **)(lVar7 + -0x78);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar3 = *(longlong **)(lVar7 + -0x90);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar3 = *(longlong **)(lVar7 + -0xa8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      lVar7 = lVar7 + 0x168;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x168),
                 (void *)((longlong)(param_2 + param_3) * 0x168 + *param_1),(longlong)iVar5 * 0x168)
      ;
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FNavSvoTileGenerator::FTileGenerationData,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1411f88e0 FUN_1411f88e0 body=429 status=ok
// SIG undefined FUN_1411f88e0(void)

void FUN_1411f88e0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((((param_1 != (longlong *)0x0) && (param_3 != 0)) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) {
      iVar7 = 0;
      if (0 < *(int *)(lVar3 + 0x478)) {
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
          if (plVar1 == (longlong *)0x0) {
LAB_1411f8a24:
            lVar5 = 0;
          }
          else {
            lVar5 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) || (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 == 0))
            goto LAB_1411f8a24;
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1411f8a24;
          }
          if ((param_2 == 0) || (param_2 == lVar5)) {
            if (lVar5 != 0) {
              FUN_14145e300(lVar5,param_3);
            }
            if (param_2 != 0) {
              return;
            }
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar7 < *(int *)(lVar3 + 0x478));
      }
      if ((param_2 == 0) && (*(float *)(param_3 + 0x60) <= 0.0 && *(float *)(param_3 + 0x60) != 0.0)
         ) {
        FUN_140cca330(lVar3,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1411f8a90 SetUpStateObject body=10 status=ok
// SIG undefined SetUpStateObject(void)

void Scaleform::GFx::AS3::AvmButton::SetUpStateObject(undefined8 param_1,undefined8 param_2)

{
  FUN_1411f88e0(param_1,0,param_2);
  return;
}



// FUNCTION 1411f8aa0 FUN_1411f8aa0 body=10 status=ok
// SIG undefined FUN_1411f8aa0(void)

void FUN_1411f8aa0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    return;
  }
  if ((((param_1 != (longlong *)0x0) && (param_3 != 0)) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar3 + 0x128) == '\x03')) {
      iVar7 = 0;
      if (0 < *(int *)(lVar3 + 0x478)) {
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x470));
          if (plVar1 == (longlong *)0x0) {
LAB_1411f8a24:
            lVar5 = 0;
          }
          else {
            lVar5 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) || (lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1), lVar5 == 0))
            goto LAB_1411f8a24;
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1411f8a24;
          }
          if ((param_2 == 0) || (param_2 == lVar5)) {
            if (lVar5 != 0) {
              FUN_14145e300(lVar5,param_3);
            }
            if (param_2 != 0) {
              return;
            }
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar7 < *(int *)(lVar3 + 0x478));
      }
      if ((param_2 == 0) && (*(float *)(param_3 + 0x60) <= 0.0 && *(float *)(param_3 + 0x60) != 0.0)
         ) {
        FUN_140cca330(lVar3,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1411f8ab0 FUN_1411f8ab0 body=150 status=ok
// SIG undefined FUN_1411f8ab0(void)

void FUN_1411f8ab0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      lVar3 = *param_1 + 0x10;
      do {
        FUN_1411ca4a0(lVar3);
        lVar3 = lVar3 + 0xc0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar3 = *param_1 + 0x10;
      do {
        FUN_1411ca4a0(lVar3);
        lVar3 = lVar3 + 0xc0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1411f8b50 FUN_1411f8b50 body=411 status=ok
// SIG undefined FUN_1411f8b50(void)

void FUN_1411f8b50(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)plVar7[3];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar3 = (longlong *)*plVar7;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar7 = plVar7 + 7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)plVar7[3];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar3 = (longlong *)*plVar7;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar7 = plVar7 + 7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1411f8cf0 FUN_1411f8cf0 body=549 status=ok
// SIG undefined FUN_1411f8cf0(void)

void FUN_1411f8cf0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_40 = (longlong *)0x0;
  iVar6 = 0;
  if (param_1 != &local_48) {
    *param_1 = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  local_30 = (longlong *)0x0;
  if (param_1 + 2 != &local_38) {
    param_1[2] = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,&local_30);
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
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if (param_1 + 4 != &local_28) {
    param_1[4] = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 5,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  local_10 = (longlong *)0x0;
  if (param_1 + 6 != &local_18) {
    param_1[6] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_10);
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
  if ((wchar_t *)param_1[8] != L"Profile_Image") {
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0xe);
      iVar6 = *(int *)(param_1 + 9);
    }
    *(int *)(param_1 + 9) = iVar6 + 0xe;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar6 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar6);
    }
    builtin_wcsncpy((wchar_t *)param_1[8],L"Profile_Image",0xe);
  }
  *(undefined4 *)(param_1 + 10) = 2;
  return;
}



// FUNCTION 1411f8f20 FUN_1411f8f20 body=583 status=ok
// SIG undefined FUN_1411f8f20(void)

void FUN_1411f8f20(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    local_res8 = lVar4;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_1411e8130(*(longlong *)(param_1 + 0x68),&local_res8);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1411d8b50();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1411d8b50();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1411d8b50();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  plVar2 = (longlong *)FName::FName(local_res10,"TravelMessageManager",1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_res8 = 0;
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,uVar1,lVar4,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x68) = lVar4;
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xf18);
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar4 + 0x58) = uVar1;
    FWeakObjectPtr::operator=(lVar4 + 0x50,param_1);
  }
  plVar2 = (longlong *)FName::FName(local_res10,"OnlineMessageManager",1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_res8 = 0;
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,uVar1,lVar4,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x70) = lVar4;
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xf20);
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar4 + 0x58) = uVar1;
    FWeakObjectPtr::operator=(lVar4 + 0x50,param_1);
  }
  plVar2 = (longlong *)FName::FName(local_res10,"SocialEventMessageManager",1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_res8 = 0;
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,uVar1,lVar4,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x78) = lVar4;
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    *(undefined1 *)(lVar4 + 0x28) = 1;
    lVar4 = *(longlong *)(param_1 + 0x78);
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xf28);
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(lVar4 + 0x58) = uVar1;
    FWeakObjectPtr::operator=(lVar4 + 0x50,param_1);
  }
  return;
}



// FUNCTION 1411f9170 ResizeShrink body=165 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FSessionSortDetails,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0xd8) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0xd8,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x97b425ed097b425f) * auVar1,0);
        iVar4 = (int)(uVar3 / 0xd8);
      }
      goto LAB_1411f91e4;
    }
    if (iVar4 == 0) goto LAB_1411f91e4;
  }
  iVar4 = iVar5;
LAB_1411f91e4:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xd8,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1411f9220 ResizeShrink body=165 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FNavSvoTileGenerator::FTileGenerationData,FDefaultAllocator>::ResizeShrink
                    (ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x168) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x168,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x2d82d82d82d82d83) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x168);
      }
      goto LAB_1411f9294;
    }
    if (iVar4 == 0) goto LAB_1411f9294;
  }
  iVar4 = iVar5;
LAB_1411f9294:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x168,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1411f92d0 FUN_1411f92d0 body=118 status=ok
// SIG undefined FUN_1411f92d0(void)

void FUN_1411f92d0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x690,0);
    iVar3 = (int)(uVar1 / 0x690);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x690,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1411f9350 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xd8,0);
    iVar3 = (int)(uVar1 / 0xd8);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xd8,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1411f93d0 FUN_1411f93d0 body=9 status=ok
// SIG undefined FUN_1411f93d0(void)

void FUN_1411f93d0(longlong param_1)

{
  FUN_142ed1730(param_1 + 0x28);
  return;
}



// FUNCTION 1411f93e0 FUN_1411f93e0 body=68 status=ok
// SIG undefined FUN_1411f93e0(void)

void FUN_1411f93e0(longlong param_1,undefined8 param_2)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  FWeakObjectPtr::operator=(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001411f941d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  return;
}



// FUNCTION 1411f9430 FUN_1411f9430 body=141 status=ok
// SIG undefined FUN_1411f9430(void)

void FUN_1411f9430(longlong param_1,char param_2)

{
  if (param_2 == '\x02') {
    if (*(longlong *)(param_1 + 800) != 0) {
      UUserWidget::PlayAnimation(0x3f800000,*(longlong *)(param_1 + 800),0,1,0,0x3f800000);
      *(undefined1 *)(param_1 + 0x340) = 2;
      return;
    }
  }
  else if ((param_2 == '\x01') && (*(longlong *)(param_1 + 0x330) != 0)) {
    UUserWidget::PlayAnimation(0x3f800000,*(longlong *)(param_1 + 0x330),0,1,0,0x3f800000);
    *(undefined1 *)(param_1 + 0x340) = 1;
  }
  return;
}



// FUNCTION 1411f94c0 FUN_1411f94c0 body=76 status=ok
// SIG undefined FUN_1411f94c0(void)

void FUN_1411f94c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = local_res10;
  local_res10[0] = param_2;
  local_10 = param_3;
  FUN_1411d0520(&local_18,*(undefined8 *)(param_1 + 0x68));
  FUN_1411d0520(&local_18,*(undefined8 *)(param_1 + 0x70));
  FUN_1411d0520(&local_18,*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 1411f9510 FUN_1411f9510 body=270 status=ok
// SIG undefined FUN_1411f9510(void)

void FUN_1411f9510(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x1fc) = *(byte *)(lVar1 + 0x1fc) & 0xfe;
      *(byte *)(lVar1 + 0x1fc) = *(byte *)(lVar1 + 0x1fc) | param_2;
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x1f8) = 10000;
      FUN_142713b70(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      plVar2 = *(longlong **)(param_1 + 0x58);
    }
    lVar1 = (**(code **)(*plVar2 + 0xfa8))();
    if (lVar1 != 0) {
      FUN_142f0bae0(lVar1,param_2);
      FUN_142f0b330(lVar1,param_2 ^ 1);
      FUN_142f0bb00(lVar1,param_2);
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      plVar2 = (longlong *)FUN_1411e4550(*(longlong *)(param_1 + 0x70),1);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x3a0))(plVar2,param_2);
        (**(code **)(*plVar2 + 0x3a8))(plVar2,param_2);
        *(uint *)(plVar2 + 8) = *(uint *)(plVar2 + 8) & 0xfffffeff;
        *(uint *)(plVar2 + 8) =
             (uint)param_2 << 8 | *(uint *)(plVar2 + 8) & 0xffffff7f | (uint)param_2 << 7;
      }
    }
    lVar1 = thunk_FUN_142039c70();
    if (lVar1 != 0) {
      FUN_14204d190(lVar1);
    }
    *(byte *)(param_1 + 0x54) = param_2;
  }
  return;
}



// FUNCTION 1411f9620 FUN_1411f9620 body=795 status=ok
// SIG undefined FUN_1411f9620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411f9620(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined2 *local_60;
  int local_58;
  int local_54;
  longlong local_50;
  
  FUN_14172a070(local_res8,0);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  lVar12 = 0;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10), lVar7 != 0)) {
    iVar1 = *(int *)(lVar7 + 0xc);
    lVar7 = lVar12;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar13;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18;
    }
    *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) & 0xfbffffff;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10) = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  if ((*(longlong *)(param_1 + 0xb8) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10), lVar7 != 0)) {
    iVar1 = *(int *)(lVar7 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar13;
      lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18;
    }
    *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) & 0xfbffffff;
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x10) = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = param_2[1];
  *(undefined4 *)(param_1 + 0x48) = param_2[2];
  *(undefined4 *)(param_1 + 0x4c) = param_2[3];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 4);
  local_res18 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18);
  puVar8 = (undefined8 *)FName::ToString(&local_res18);
  iVar1 = *(int *)(puVar8 + 1);
  local_60 = (undefined2 *)*puVar8;
  *puVar8 = 0;
  local_58 = *(int *)(puVar8 + 1);
  local_54 = *(int *)((longlong)puVar8 + 0xc);
  puVar8[1] = 0;
  iVar14 = local_58;
  if (local_54 < (int)((5 - (uint)(iVar1 != 0)) + local_58)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_60);
    iVar14 = local_58;
  }
  local_58 = (5 - (uint)(iVar14 != 0)) + iVar14;
  if (local_54 < local_58) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar14);
  }
  puVar5 = local_60;
  lVar12 = (longlong)iVar14 - (ulonglong)(iVar14 != 0);
  puVar15 = &DAT_143f3eda8;
  if (local_58 != 0) {
    puVar15 = local_60;
  }
  *(undefined8 *)(local_60 + lVar12) = 0x7700610052005f;
  local_60[lVar12 + 4] = 0;
  uVar9 = UTexture2D::GetPrivateStaticClass();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  puVar8 = (undefined8 *)FName::FName(local_res20,puVar15,1);
  plVar10 = (longlong *)FUN_141791c20(local_68,uVar11,uVar9,*puVar8);
  lVar12 = *plVar10;
  uVar11 = GetTransientPackage();
  local_res10 = 0;
  if (lVar12 == 0) {
    FUN_1417846f0(uVar11,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar9 = UTexture2D::GetPrivateStaticClass();
  lVar12 = FUN_1417985e0(uVar9,uVar11,lVar12,0,0,0,0,0,0);
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (lVar12 != 0) {
    *(uint *)(lVar12 + 0xbc) = *(uint *)(lVar12 + 0xbc) & 0xfffffffe;
    uVar4 = uRam00000001468b5d84;
    uVar3 = uRam00000001468b5d80;
    uVar2 = uRam00000001468b5d7c;
    *(undefined4 *)(lVar12 + 200) = _DAT_1468b5d78;
    *(undefined4 *)(lVar12 + 0xcc) = uVar2;
    *(undefined4 *)(lVar12 + 0xd0) = uVar3;
    *(undefined4 *)(lVar12 + 0xd4) = uVar4;
    FUN_14287a580(lVar12,*(int *)(param_1 + 0x48) * 2,*(int *)(param_1 + 0x4c) * 2);
    FUN_142894320(lVar12,1);
    FUN_1411fa8e0(param_1,lVar12);
  }
  FUN_14172a400(local_res8);
  FUN_1411d8230(param_1);
  return;
}



// FUNCTION 1411f9940 FUN_1411f9940 body=406 status=ok
// SIG undefined FUN_1411f9940(void)

void FUN_1411f9940(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_3 == '\0') && (*param_2 == param_1[0x230])) {
    if (*(longlong *)(param_2 + 8) != 0) {
      lVar2 = FUN_1428dfc70();
      lVar5 = *(longlong *)(param_2 + 8);
      for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar2) goto LAB_1411f9995;
      }
    }
    lVar5 = 0;
LAB_1411f9995:
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar3 = FUN_1428dfc70();
      lVar4 = *(longlong *)(param_1 + 0x238);
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_1411f99c3;
      }
    }
    lVar4 = 0;
LAB_1411f99c3:
    if (((((lVar5 == lVar4) && (param_2[0x49] == param_1[0x279])) &&
         (param_2[0x4a] == param_1[0x27a])) &&
        ((((param_2[0x48] == param_1[0x278] && (param_2[0x4b] == param_1[0x27b])) &&
          (*(longlong *)(param_2 + 0x40) == *(longlong *)(param_1 + 0x270))) &&
         (((*(int *)(param_2 + 0x28) == 0 || (*(longlong **)(param_2 + 0x20) == (longlong *)0x0)) ||
          (cVar1 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x18))(), cVar1 == '\0')))))) &&
       (((*(int *)(param_1 + 600) == 0 || (*(longlong **)(param_1 + 0x250) == (longlong *)0x0)) ||
        (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x18))(), cVar1 == '\0')))) {
      if (*(int *)(param_2 + 0x18) == 0) {
        return;
      }
      if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
        return;
      }
      cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x18))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  FUN_1411cb2d0(param_1 + 0x230,param_2);
  if (*param_1 != '\0') {
    if (param_1[1] == '\0') {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0xd0) != 0) {
        *(undefined4 *)(param_1 + 0x2a4) =
             *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0xd0) + 0x440);
        param_1[0x2a8] = '\x01';
        return;
      }
    }
    else {
      param_1[1] = '\0';
    }
  }
  FUN_1411e8db0(param_1);
  return;
}



// FUNCTION 1411f9ae0 FUN_1411f9ae0 body=100 status=ok
// SIG undefined FUN_1411f9ae0(void)

void FUN_1411f9ae0(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_58[0] = param_2;
  FUN_1411f9940(param_1,local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  return;
}



// FUNCTION 1411f9b50 FUN_1411f9b50 body=17 status=ok
// SIG undefined FUN_1411f9b50(void)

void FUN_1411f9b50(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != param_2) {
    *(longlong *)(param_1 + 0x90) = param_2;
  }
  return;
}



// FUNCTION 1411f9b70 FUN_1411f9b70 body=45 status=ok
// SIG undefined FUN_1411f9b70(void)

void FUN_1411f9b70(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x60 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x60) {
    *(undefined1 *)(lVar1 + 0x5e) = param_2;
  }
  return;
}



// FUNCTION 1411f9ba0 FUN_1411f9ba0 body=4 status=ok
// SIG undefined FUN_1411f9ba0(void)

void FUN_1411f9ba0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 1411f9bb0 FUN_1411f9bb0 body=9 status=ok
// SIG undefined FUN_1411f9bb0(void)

void FUN_1411f9bb0(longlong param_1)

{
  FUN_142ed3670(param_1 + 0x28);
  return;
}



// FUNCTION 1411f9bc0 FUN_1411f9bc0 body=33 status=ok
// SIG undefined FUN_1411f9bc0(void)

void FUN_1411f9bc0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  if (0 < *(int *)(param_1 + 0x80)) {
    FUN_142ed3670(param_1 + 0x28,*(int *)(param_1 + 0x80) + -1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1411f9bf0 OnStateChange body=11 status=ok
// SIG undefined OnStateChange(void)

void UTutorialLightToggler::OnStateChange(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf9) = param_2;
  FUN_1411f7760();
  return;
}



// FUNCTION 1411f9c00 thunk_FUN_14245e740 body=5 status=ok
// SIG undefined thunk_FUN_14245e740(void)

ulonglong thunk_FUN_14245e740(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 400);
  }
  uVar5 = 0;
  if (lVar4 != 0) {
    plVar6 = *(longlong **)(lVar4 + 0x38);
    uVar5 = (ulonglong)*(int *)(lVar4 + 0x40);
    plVar1 = plVar6 + uVar5;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (plVar2 = *(longlong **)(*plVar6 + 0x30), plVar2 != (longlong *)0x0)) {
        uStack_18 = 0;
        uStack_10 = 0;
        uVar5 = (**(code **)(*plVar2 + 0xb68))(plVar2,param_2,&uStack_18);
        return uVar5;
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1411f9c10 FUN_1411f9c10 body=67 status=ok
// SIG undefined FUN_1411f9c10(void)

void FUN_1411f9c10(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    FUN_1411d3760(param_1);
    return;
  }
  FUN_142dbb5d0(param_1 + 0x100,local_res18);
  FUN_1411d3760(param_1);
  return;
}



// FUNCTION 1411f9c60 FUN_1411f9c60 body=1082 status=ok
// SIG undefined FUN_1411f9c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411f9c60(longlong param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_2f8 [32];
  undefined2 local_2d8;
  longlong *local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  longlong local_298;
  int local_290;
  longlong *local_288;
  int local_280;
  LARGE_INTEGER local_278 [2];
  undefined1 *local_268 [2];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined4 local_228;
  undefined1 *local_218 [2];
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined4 local_1d8;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined1 *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  LARGE_INTEGER local_118 [24];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  plVar7 = (longlong *)0x0;
  bVar8 = *param_2 == -1;
  if (!bVar8) {
    local_288 = (longlong *)0x0;
    local_280 = 0;
    local_298 = param_1;
    local_290 = *param_2;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_288,param_3);
    local_238 = 0;
    local_228 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_258);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1446fea60;
      puVar3[1] = local_298;
      *(int *)(puVar3 + 2) = local_290;
      puVar3[3] = (longlong *)0x0;
      *(undefined4 *)(puVar3 + 4) = 0;
      if (((&local_288 != (longlong **)(puVar3 + 3)) && (local_280 != 0)) &&
         (local_288 != (longlong *)0x0)) {
        (**(code **)(*local_288 + 0x30))();
      }
    }
    local_2b8 = 0;
    local_268[0] = &LAB_1411d50f0;
    local_2b0 = 0x5a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
    local_2d8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_2b8,0x5a,
               "FOakThumbnailManagerItemInfo::SetIconDataFromStreamableTexture::LoadStreamableTextureTask"
              );
    FUN_140cdf730(local_118,&local_2b8,local_268);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_288);
    QueryPerformanceCounter(local_278);
    local_118[0] = local_278[0];
    lVar4 = operator_new(0x18);
    plVar5 = plVar7;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140cdf810(lVar4);
    }
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)plVar5;
      plVar7 = plVar6;
    }
    local_2c8 = plVar5;
    local_2c0 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_2c8,plVar5,plVar5);
    *(undefined1 *)(local_2c8 + 2) = 1;
    local_2a0 = (longlong *)local_2c8[1];
    local_58 = *local_2c8;
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2a0 + 1) = (int)local_2a0[1] + 1;
      UNLOCK();
    }
    local_2a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_50,&local_2a0);
    plVar7 = local_2a0;
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2a0 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    local_138 = (longlong *)0x0;
    local_128 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_158);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = local_118;
    }
    local_168[0] = &LAB_140cee980;
    local_1c8 = local_2c8;
    local_1c0 = local_2c0;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1b8,local_168);
    local_1e8 = 0;
    local_1d8 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_208);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar3[2] = local_1c8;
      puVar3[3] = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_1b8);
    }
    local_218[0] = &LAB_140cee8d0;
    if (local_178 != 0) {
      plVar7 = local_1a8;
      if (local_188 != (longlong *)0x0) {
        plVar7 = local_188;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar7 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1c0 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1c0)(local_1c0);
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
    if (local_128 != 0) {
      plVar7 = local_158;
      if (local_138 != (longlong *)0x0) {
        plVar7 = local_138;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar7 = local_2c0;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_2c0 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2c0)(local_2c0);
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
    FUN_14204c280(local_218);
    FUN_140d1b3a0(local_118);
    FUN_140ce1dc0(local_118);
    bVar8 = *param_2 == -1;
  }
  LOCK();
  *(uint *)(param_1 + 0x708) = (uint)!bVar8;
  UNLOCK();
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 1411fa0a0 FUN_1411fa0a0 body=491 status=ok
// SIG undefined FUN_1411fa0a0(void)

void FUN_1411fa0a0(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  bVar6 = true;
  if (*param_2 == -1) goto LAB_1411fa277;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  *(int *)(param_1 + 0x70) = *param_2;
  lVar3 = FUN_1411e35f0();
  if (lVar3 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
    local_50 = *(int *)(param_1 + 0x48);
    lVar5 = (longlong)local_50;
    pvVar2 = *(void **)(param_1 + 0x40);
    local_58 = (void *)0x0;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar2,lVar5 * 2);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
    lVar5 = FUN_1404cd290(lVar3,&local_58);
    local_res10[0] = 0xffffffff;
    if (lVar5 != 0) {
      FUN_14170c210(local_res10,lVar5);
    }
    FUN_1416ff870(param_1 + 0x5c,local_res10);
    FUN_1416f8340(local_res10[0]);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x58));
    if (lVar5 == 0) {
      lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x5c));
      local_res8[0] = 0xffffffff;
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x5c);
        goto LAB_1411fa1bb;
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x58);
LAB_1411fa1bb:
      local_res8[0] = 0xffffffff;
      uVar4 = FUN_1416f8720(uVar1);
      FUN_14170c210(local_res8,uVar4);
    }
    lVar5 = FUN_1416f8720(local_res8[0]);
    FUN_1416f8340(local_res8[0]);
    if (lVar5 == 0) {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
      local_40 = *(int *)(param_1 + 0x48);
      lVar5 = (longlong)local_40;
      pvVar2 = *(void **)(param_1 + 0x40);
      local_48 = (void *)0x0;
      if (local_40 == 0) {
        local_3c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
        _guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar5 * 2);
      }
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
      FUN_1404df320(lVar3,&local_48,2);
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  bVar6 = *param_2 == -1;
LAB_1411fa277:
  LOCK();
  *(uint *)(param_1 + 0x708) = (uint)!bVar6;
  UNLOCK();
  return;
}



// FUNCTION 1411fa290 bpf__Press_RMB_WithForce__pf body=9 status=ok
// SIG undefined bpf__Press_RMB_WithForce__pf(void)

void ABP_Chapter4Shield_C__pf3624537544::bpf__Press_RMB_WithForce__pf
               (longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x370) = param_2;
  return;
}



// FUNCTION 1411fa2a0 FUN_1411fa2a0 body=13 status=ok
// SIG undefined FUN_1411fa2a0(void)

void FUN_1411fa2a0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x348) = *param_2;
  return;
}



// FUNCTION 1411fa2b0 FUN_1411fa2b0 body=302 status=ok
// SIG undefined FUN_1411fa2b0(void)

void FUN_1411fa2b0(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  *(int *)(param_1 + 0x44) = param_2;
  iVar5 = param_2;
  if (*(int *)(param_1 + 0xa0) <= param_2) {
    iVar5 = *(int *)(param_1 + 0xa0);
  }
  *(int *)(param_1 + 0xa0) = iVar5;
  lVar1 = (longlong)*(int *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar6 = 0;
    bVar7 = **(int **)(param_1 + 0x88) < param_2;
    lVar3 = 0;
    iVar5 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar4 = iVar5 + 1;
      if (lVar3 < lVar1) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x88) + lVar3 * 4);
        do {
          if (bVar7 != *piVar2 < param_2) break;
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 4),
                     (void *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 4),
                     (longlong)(iVar4 - iVar5) << 2);
        }
        iVar6 = iVar6 + (iVar4 - iVar5);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar5 = iVar4;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0x90) = iVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001411fa3d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
  return;
}



// FUNCTION 1411fa3e0 FUN_1411fa3e0 body=8 status=ok
// SIG undefined FUN_1411fa3e0(void)

void FUN_1411fa3e0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xdc) = 1;
  return;
}



// FUNCTION 1411fa3f0 FUN_1411fa3f0 body=620 status=ok
// SIG undefined FUN_1411fa3f0(void)

void FUN_1411fa3f0(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_10 = 4;
  local_18 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  iVar2 = 0;
  FGenericPlatformString::Memcpy(local_18,&DAT_1446ed4e0,8);
  if (param_2 < 2) goto LAB_1411fa62d;
  uVar1 = local_10._4_4_;
  if (param_2 == 2) {
    if (local_18 == L"two") goto LAB_1411fa62d;
    local_10 = (ulonglong)local_10._4_4_ << 0x20;
    if (uVar1 != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,4);
      uVar1 = local_10._4_4_;
      iVar2 = (int)local_10;
    }
    local_10 = CONCAT44(local_10._4_4_,iVar2 + 4);
    if ((int)uVar1 < iVar2 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
    }
    uVar3 = 0x6f00770074;
  }
  else {
    if (param_2 == 3) {
      if (local_18 != L"three") {
        local_10 = (ulonglong)local_10._4_4_ << 0x20;
        if (uVar1 != 6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,6);
          uVar1 = local_10._4_4_;
          iVar2 = (int)local_10;
        }
        local_10 = CONCAT44(local_10._4_4_,iVar2 + 6);
        if ((int)uVar1 < iVar2 + 6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
        }
        builtin_wcsncpy(local_18,L"three",6);
      }
      goto LAB_1411fa62d;
    }
    if (param_2 == 4) {
      if (local_18 != L"four") {
        local_10 = (ulonglong)local_10._4_4_ << 0x20;
        if (uVar1 != 5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,5);
          uVar1 = local_10._4_4_;
          iVar2 = (int)local_10;
        }
        local_10 = CONCAT44(local_10._4_4_,iVar2 + 5);
        if ((int)uVar1 < iVar2 + 5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
        }
        builtin_wcsncpy(local_18,L"four",5);
      }
      goto LAB_1411fa62d;
    }
    if (param_2 == 5) {
      if (local_18 != L"five") {
        local_10 = (ulonglong)local_10._4_4_ << 0x20;
        if (uVar1 != 5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,5);
          uVar1 = local_10._4_4_;
          iVar2 = (int)local_10;
        }
        local_10 = CONCAT44(local_10._4_4_,iVar2 + 5);
        if ((int)uVar1 < iVar2 + 5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
        }
        builtin_wcsncpy(local_18,L"five",5);
      }
      goto LAB_1411fa62d;
    }
    if (local_18 == L"six") goto LAB_1411fa62d;
    local_10 = (ulonglong)local_10._4_4_ << 0x20;
    if (uVar1 != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,4);
      uVar1 = local_10._4_4_;
      iVar2 = (int)local_10;
    }
    local_10 = CONCAT44(local_10._4_4_,iVar2 + 4);
    if ((int)uVar1 < iVar2 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar2);
    }
    uVar3 = 0x7800690073;
  }
  *(undefined8 *)local_18 = uVar3;
LAB_1411fa62d:
  FUN_142088cf0(param_1,&local_18);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1411fa660 FUN_1411fa660 body=17 status=ok
// SIG undefined FUN_1411fa660(void)

void FUN_1411fa660(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined1 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x2c0) = param_2;
  if (*(longlong *)(lVar1 + 0x300) != 0) {
    uStack_18 = 0;
    uStack_10 = 0;
    uStack_24 = 1;
    uStack_20 = 1;
    uStack_28 = param_2;
    FUN_1419a3520(*(longlong *)(lVar1 + 0x300),&uStack_28);
  }
  return;
}



// FUNCTION 1411fa680 FUN_1411fa680 body=522 status=ok
// SIG undefined FUN_1411fa680(void)

void FUN_1411fa680(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
  lVar10 = 0;
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar6 = (int)plVar3[1];
  bVar11 = iVar6 == 0;
  if (bVar11) {
    *(int *)(plVar3 + 1) = 0;
    iVar6 = 0;
  }
  UNLOCK();
  if (bVar11) {
    return;
  }
  while( true ) {
    LOCK();
    bVar11 = iVar6 == (int)plVar3[1];
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
    }
    UNLOCK();
    if (bVar11) break;
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar11 = iVar6 == 0;
    if (bVar11) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar11) {
      return;
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x58) == 0)) goto LAB_1411fa84a;
  if (((longlong *)*param_2 == (longlong *)0x0) ||
     (lVar8 = (**(code **)(*(longlong *)*param_2 + 0x10))(), lVar8 == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  lVar8 = DAT_1468769b0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    lVar10 = 4;
  }
  if ((bVar11) && (*(int *)(lVar10 + lVar8) != 0)) {
    lVar10 = **(longlong **)(param_1 + 0x58);
    uVar9 = (**(code **)(*(longlong *)*param_2 + 0x10))();
    (**(code **)(lVar10 + 0x2a0))(*(undefined8 *)(param_1 + 0x58),param_1 + 0x188,uVar9);
  }
  else {
    FUN_14203e3e0(lVar4,1);
    if (*(char *)(param_1 + 0x1a1) != '\0') goto LAB_1411fa84a;
    local_58 = *(undefined8 *)(param_1 + 0x168);
    local_50 = *(longlong *)(param_1 + 0x170);
    local_38 = 0;
    uStack_30 = 0;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_48 = *(undefined8 *)(param_1 + 0x148);
    local_40 = *(longlong *)(param_1 + 0x150);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x140);
    lVar10 = FUN_1411e5cb0(uVar9,&local_48,&local_58,&local_38);
    if (lVar10 == 0) goto LAB_1411fa84a;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2a0))
              (*(longlong **)(param_1 + 0x58),param_1 + 0x188,lVar10);
  }
  FUN_14203e3e0(lVar4,*(undefined4 *)(param_1 + 0x198));
LAB_1411fa84a:
  LOCK();
  plVar1 = plVar3 + 1;
  lVar10 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar10 == 1) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 1411fa890 FUN_1411fa890 body=67 status=ok
// SIG undefined FUN_1411fa890(void)

void FUN_1411fa890(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    FUN_1411d3760(param_1);
    return;
  }
  FUN_142dbb5d0(param_1 + 0x198,local_res18);
  FUN_1411d3760(param_1);
  return;
}



// FUNCTION 1411fa8e0 FUN_1411fa8e0 body=262 status=ok
// SIG undefined FUN_1411fa8e0(void)

void FUN_1411fa8e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong local_res8;
  
  plVar1 = (longlong *)(param_1 + 0xa8);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  if ((*plVar1 != 0) && (lVar5 = *(longlong *)(*plVar1 + 0x10), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar8 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xfbffffff;
  }
  if (*plVar1 == 0) {
    if (param_2 != 0) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        FGCObject::FGCObject(puVar6);
        puVar6[2] = param_2;
        *puVar6 = &PTR__scalar_deleting_destructor__1440f8f50;
      }
      if (plVar1 == &local_res8) {
        if (puVar6 == (undefined8 *)0x0) goto LAB_1411fa9c8;
        puVar7 = (undefined8 *)*puVar6;
      }
      else {
        puVar3 = (undefined8 *)*plVar1;
        *plVar1 = (longlong)puVar6;
        if (puVar3 == (undefined8 *)0x0) goto LAB_1411fa9c8;
        puVar7 = (undefined8 *)*puVar3;
        puVar6 = puVar3;
      }
      (*(code *)*puVar7)(puVar6,1);
    }
  }
  else {
    *(longlong *)(*plVar1 + 0x10) = param_2;
  }
LAB_1411fa9c8:
                    /* WARNING: Could not recover jumptable at 0x0001411fa9df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb0));
  return;
}



// FUNCTION 1411fa9f0 FUN_1411fa9f0 body=238 status=ok
// SIG undefined FUN_1411fa9f0(void)

void FUN_1411fa9f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x700));
  uVar6 = param_2[1];
  puVar1 = (undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  uVar6 = param_2[5];
  *(undefined8 *)(param_1 + 0xb0) = param_2[4];
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xcc) = uVar5;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 8);
  if (puVar1 != param_2 + 9) {
    iVar2 = *(int *)(param_2 + 10);
    _Src = (void *)param_2[9];
    *(int *)(param_1 + 0xe0) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0xe4) == 0)) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      FUN_1409b7fb0(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x14);
    }
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  *(undefined4 *)(param_1 + 0xf4) = uVar5;
  FUN_140a296b0(param_1 + 0x100,param_2 + 0xe);
                    /* WARNING: Could not recover jumptable at 0x0001411faad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x700));
  return;
}



// FUNCTION 1411faae0 FUN_1411faae0 body=290 status=ok
// SIG undefined FUN_1411faae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411faae0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 local_48;
  undefined4 local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  uVar2 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x324);
  *puVar1 = uVar2;
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 1);
  FUN_1411d7290(uVar2,puVar1);
  if ((*(longlong *)(param_1 + 0x60) != 0) && (*(char *)(param_1 + 0x321) == '\0')) {
    *(undefined8 *)(param_1 + 0x330) = *puVar1;
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x32c);
    pfVar12 = (float *)FRotator::Quaternion(puVar1,local_28);
    pfVar13 = (float *)FRotator::Quaternion(param_1 + 0x33c,local_18);
    fVar4 = *pfVar12;
    fVar5 = pfVar12[1];
    fVar6 = pfVar12[2];
    fVar7 = pfVar12[3];
    lVar3 = *(longlong *)(param_1 + 0x60);
    fVar8 = *pfVar13;
    fVar9 = pfVar13[1];
    fVar10 = pfVar13[2];
    fVar11 = pfVar13[3];
    local_38 = fVar8 * fVar7 * _DAT_146876740 + fVar11 * fVar4 + fVar9 * fVar6 * _DAT_146876730 +
               fVar10 * fVar5 * _DAT_146876720;
    fStack_34 = fVar8 * fVar6 * fRam0000000146876744 + fVar11 * fVar5 +
                fVar9 * fVar7 * fRam0000000146876734 + fVar10 * fVar4 * fRam0000000146876724;
    fStack_30 = fVar8 * fVar5 * fRam0000000146876748 + fVar11 * fVar6 +
                fVar9 * fVar4 * fRam0000000146876738 + fVar10 * fVar7 * fRam0000000146876728;
    fStack_2c = fVar8 * fVar4 * fRam000000014687674c + fVar11 * fVar7 +
                fVar9 * fVar5 * fRam000000014687673c + fVar10 * fVar6 * fRam000000014687672c;
    local_48 = *(undefined8 *)(lVar3 + 0x1ec);
    local_40 = *(undefined4 *)(lVar3 + 500);
    FUN_142397be0(lVar3,&local_48,&local_38,0,0,0);
  }
  return;
}



// FUNCTION 1411fac10 FUN_1411fac10 body=234 status=ok
// SIG undefined FUN_1411fac10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411fac10(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_1411d5100;
  FUN_14208c300(param_1,local_68);
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
  return;
}



// FUNCTION 1411fad00 UseImplicitHMDPosition body=7 status=ok
// SIG undefined UseImplicitHMDPosition(void)

void FDefaultXRCamera::UseImplicitHMDPosition(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1a0) = param_2;
  return;
}



// FUNCTION 1411fad10 FUN_1411fad10 body=133 status=ok
// SIG undefined FUN_1411fad10(void)

void FUN_1411fad10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_28 [32];
  
  if (*(longlong **)(param_1 + 0x2c0) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x2c0);
    uVar6 = FText::FText(local_28);
    (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x2c0),uVar6);
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



// FUNCTION 1411fada0 FUN_1411fada0 body=133 status=ok
// SIG undefined FUN_1411fada0(void)

void FUN_1411fada0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_28 [32];
  
  if (*(longlong **)(param_1 + 0x2c8) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x2c8);
    uVar6 = FText::FText(local_28);
    (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x2c8),uVar6);
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



// FUNCTION 1411fae30 FUN_1411fae30 body=111 status=ok
// SIG undefined FUN_1411fae30(void)

void FUN_1411fae30(longlong param_1,undefined4 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  local_28 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_20,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 0x20,&local_28);
                    /* WARNING: Could not recover jumptable at 0x0001411fae98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  return;
}



// FUNCTION 1411faea0 FUN_1411faea0 body=262 status=ok
// SIG undefined FUN_1411faea0(void)

void FUN_1411faea0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong local_res8;
  
  plVar1 = (longlong *)(param_1 + 0xb8);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  if ((*plVar1 != 0) && (lVar5 = *(longlong *)(*plVar1 + 0x10), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar8 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xfbffffff;
  }
  if (*plVar1 == 0) {
    if (param_2 != 0) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        FGCObject::FGCObject(puVar6);
        puVar6[2] = param_2;
        *puVar6 = &PTR__scalar_deleting_destructor__1440f8f50;
      }
      if (plVar1 == &local_res8) {
        if (puVar6 == (undefined8 *)0x0) goto LAB_1411faf88;
        puVar7 = (undefined8 *)*puVar6;
      }
      else {
        puVar3 = (undefined8 *)*plVar1;
        *plVar1 = (longlong)puVar6;
        if (puVar3 == (undefined8 *)0x0) goto LAB_1411faf88;
        puVar7 = (undefined8 *)*puVar3;
        puVar6 = puVar3;
      }
      (*(code *)*puVar7)(puVar6,1);
    }
  }
  else {
    *(longlong *)(*plVar1 + 0x10) = param_2;
  }
LAB_1411faf88:
                    /* WARNING: Could not recover jumptable at 0x0001411faf9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  return;
}



// FUNCTION 1411fafb0 FUN_1411fafb0 body=279 status=ok
// SIG undefined FUN_1411fafb0(void)

void FUN_1411fafb0(longlong *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res18 [16];
  code *local_18;
  undefined4 uStack_10;
  
  if (param_2 == '\0') {
    if (param_1[0x50] != 0) {
      lVar2 = FUN_1411e5400();
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x938);
      }
      if (lVar2 != 0) {
        TBaseMulticastDelegate<void>::Remove(lVar2 + 0x218,param_1[0x50]);
        param_1[0x50] = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x2f) = 0;
    if (*(char *)((longlong)param_1 + 0x272) != '\0') {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      iVar1 = FUN_14233f450(param_1);
      if (iVar1 == 3) {
        (**(code **)(*param_1 + 0x260))(param_1);
      }
      FUN_1411f0560(param_1);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2f) = 1;
    if (*(char *)((longlong)param_1 + 0x272) != '\0') {
      lVar2 = FUN_1411e5400();
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x938);
      }
      if (lVar2 != 0) {
        FUN_1411f0b30(param_1,lVar2);
        local_18 = FUN_1411f0b30;
        uStack_10 = 0;
        plVar3 = (longlong *)FUN_140722860(lVar2 + 0x218,local_res18,param_1,&local_18);
        param_1[0x50] = *plVar3;
      }
    }
  }
  return;
}



// FUNCTION 1411fb0d0 FUN_1411fb0d0 body=65 status=ok
// SIG undefined FUN_1411fb0d0(void)

void FUN_1411fb0d0(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x272) != '\0') {
    *(undefined1 *)(param_1 + 0x4e) = param_2;
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    FUN_1411f0560(param_1);
    return;
  }
  return;
}



// FUNCTION 1411fb120 FUN_1411fb120 body=34 status=ok
// SIG undefined FUN_1411fb120(void)

void FUN_1411fb120(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x358);
  FUN_1411f8210(param_1);
  return;
}



// FUNCTION 1411fb150 FUN_1411fb150 body=10 status=ok
// SIG undefined FUN_1411fb150(void)

void FUN_1411fb150(longlong param_1,undefined1 param_2)

{
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x60) = param_2;
  }
  return;
}



// FUNCTION 1411fb160 FUN_1411fb160 body=214 status=ok
// SIG undefined FUN_1411fb160(void)

void FUN_1411fb160(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  *(longlong *)(param_3 + 0xa0) = param_4;
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_4 + 0xd0);
    *(undefined1 *)(param_3 + 0x9d) = *(undefined1 *)(param_4 + 0xd1);
    FText::operator=(param_3 + 0x58,param_4 + 0x30);
    FText::operator=(param_3 + 0x70,param_4 + 0x60);
  }
  *(longlong *)(param_3 + 8) = param_1;
  FUN_1412b1e40(param_1 + 0x2e0,param_3);
  *(longlong *)(param_1 + 0x550) = param_2;
  if (param_2 != 0) {
    FUN_142088cf0(param_2,param_1 + 0x368);
    (**(code **)(**(longlong **)(param_1 + 0x550) + 0x278))
              (*(longlong **)(param_1 + 0x550),1 < *(int *)(param_1 + 0x370));
    *(longlong *)(*(longlong *)(param_1 + 0x550) + 0x2c8) = param_1;
    FUN_1411ff2c0(param_1);
  }
  return;
}



// FUNCTION 1411fb240 FUN_1411fb240 body=397 status=ok
// SIG undefined FUN_1411fb240(void)

void FUN_1411fb240(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0xe8);
    *(longlong *)(param_1 + 0xd0) = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 200));
  FUN_140cb8c10(*(undefined8 *)(param_1 + 0xd0),&local_res8);
  puVar7 = (undefined4 *)(param_1 + 0xc0);
  cVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if ((cVar2 == '\0') || (cVar2 = FWeakObjectPtr::IsValid(puVar7), cVar2 != '\0')) {
    cVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if ((cVar2 == '\0') || (cVar2 = FWeakObjectPtr::IsValid(puVar7), cVar2 == '\0'))
    goto LAB_1411fb3b4;
    lVar4 = FWeakObjectPtr::Get(&local_res8);
    lVar5 = FWeakObjectPtr::Get(puVar7);
    if (lVar4 == lVar5) goto LAB_1411fb3b4;
  }
  cVar2 = FWeakObjectPtr::IsValid(puVar7);
  lVar4 = 0;
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(puVar7);
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar4;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xbfffffff;
  }
  *puVar7 = local_res8;
  *(undefined4 *)(param_1 + 0xc4) = local_resc;
  lVar5 = FWeakObjectPtr::Get(puVar7);
  iVar1 = *(int *)(lVar5 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar6;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
  }
  *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x40000000;
LAB_1411fb3b4:
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 200));
  return;
}



// FUNCTION 1411fb3d0 FUN_1411fb3d0 body=630 status=ok
// SIG undefined FUN_1411fb3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411fb3d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) || (iVar2 == 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0x272) = cVar1;
  if (((cVar1 != '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x274), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x178) == '\x01')) {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x274);
    cVar1 = (**(code **)(*plVar3 + 0x950))(plVar3);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 0x272) != '\0')) &&
       (*(char *)(param_1 + 0x178) == '\x01')) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x274);
      lVar4 = *(longlong *)(lVar4 + 0x938);
      if (lVar4 == 0) {
        local_b8 = FUN_1411fb3d0;
        uStack_b0 = 0;
        uVar6 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
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
        local_98 = 0;
        local_90 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,param_1 + 0x290,&local_98,0x3dcccccd);
        if (local_38 != 0) {
          plVar7 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar7 = local_48;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar4 = FMemory::Realloc(plVar3,0,0);
          if (lVar4 != 0) {
            FMemory::Free(lVar4);
          }
        }
      }
      else {
        FUN_1411f0b30(param_1,lVar4);
        local_b8 = FUN_1411f0b30;
        uStack_b0 = 0;
        local_a8 = 0x411f0b30;
        uStack_a4 = 1;
        uStack_a0 = 0;
        uStack_9c = uStack_ac;
        puVar5 = (undefined8 *)FUN_140722860(lVar4 + 0x218,&local_b8,param_1,&local_a8);
        *(undefined8 *)(param_1 + 0x280) = *puVar5;
      }
    }
  }
  return;
}



// FUNCTION 1411fb650 FUN_1411fb650 body=1506 status=ok
// SIG undefined FUN_1411fb650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1411fb650(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  int local_2c0;
  int local_2bc;
  uint local_2b8;
  uint uStack_2b4;
  uint *puStack_2b0;
  undefined4 local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  int local_298;
  uint local_288;
  uint uStack_284;
  uint local_280;
  int local_278;
  int local_274;
  undefined1 local_270 [8];
  longlong local_268;
  longlong *local_260;
  uint uStack_258;
  uint uStack_254;
  uint *local_250;
  uint uStack_248;
  uint uStack_244;
  undefined8 local_240;
  ulonglong local_238;
  longlong *local_230;
  longlong *local_228;
  undefined8 uStack_220;
  uint *puStack_218;
  uint uStack_210;
  uint uStack_20c;
  undefined8 uStack_208;
  undefined1 local_1f8 [224];
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  lVar9 = *(longlong *)(param_1 + 0xd0);
  if (lVar9 == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar9 = *(longlong *)(DAT_146b33f38 + 0xe8);
    *(longlong *)(param_1 + 0xd0) = lVar9;
    if (lVar9 == 0) {
      return 0;
    }
  }
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) goto LAB_1411fb826;
  FUN_14282a800(local_1f8);
  FUN_14283c290(local_1f8,*(longlong *)(param_1 + 0xd0) + 0x280,1,0);
  lVar9 = *(longlong *)(param_1 + 0xd0);
  lVar12 = lVar9 + 0x270;
  uVar7 = FWeakObjectPtr::Get(lVar12);
  if (uVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar9 + 0x278)) &&
       (local_2c8 = 0, *(longlong *)(lVar9 + 0x280) != 0)) {
      lVar8 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar12,lVar8);
      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar9 + 0x278) = DAT_1464b56f4;
      }
      uVar7 = FWeakObjectPtr::Get(lVar12);
      if (uVar7 != 0) goto LAB_1411fb795;
    }
LAB_1411fb7cb:
    uVar7 = uVar11;
  }
  else {
LAB_1411fb795:
    lVar9 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1411fb7cb;
  }
  *(ulonglong *)(param_1 + 0x68) = uVar7;
  if (uVar7 != 0) {
    iVar5 = *(int *)(uVar7 + 0xc);
    uVar7 = uVar11;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar10 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar10;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) | 0x40000000;
  }
  FUN_14282cc40(local_1f8);
  lVar9 = *(longlong *)(param_1 + 0xd0);
LAB_1411fb826:
  plVar1 = (longlong *)(lVar9 + 0x298);
  uStack_2b4 = 1;
  uVar4 = *(uint *)(lVar9 + 0x2c0);
  puVar2 = (uint *)(lVar9 + 0x2a8);
  local_2b8 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(lVar9 + 0x2b8);
    if (*(uint **)(lVar9 + 0x2b8) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar10 = *puVar13;
    uVar7 = uVar11;
    while (uVar10 == 0) {
      iVar5 = (int)uVar11;
      uStack_2a0 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_2a0;
      local_2b8 = iVar5 + 1;
      uVar11 = (ulonglong)local_2b8;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1411fb8e6;
      uVar10 = puVar13[(longlong)iVar5 + 1];
    }
    uStack_2b4 = uVar10 - 1 & uVar10 ^ uVar10;
    local_278 = 0x1f;
    if (uStack_2b4 != 0) {
      for (; uStack_2b4 >> local_278 == 0; local_278 = local_278 + -1) {
      }
    }
    if (uStack_2b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_278;
    }
    uStack_2a4 = (uStack_2a0 - iVar5) + 0x1f;
    if ((int)uVar4 < (int)uStack_2a4) {
LAB_1411fb8e6:
      uStack_2a4 = uVar4;
    }
  }
  local_2a8 = 0xffffffff;
  uStack_284 = *(uint *)(lVar9 + 0x2c0);
  uStack_220 = CONCAT44(uStack_2b4,local_2b8);
  uStack_248 = 0xffffffff;
  uStack_244 = uStack_2a4;
  local_240 = CONCAT44(uStack_29c,uStack_2a0);
  local_288 = -1 << ((byte)uStack_284 & 0x1f);
  local_298 = (int)uStack_284 >> 5;
  local_280 = uStack_284 & 0xffffffe0;
  uStack_258 = local_2b8;
  uStack_254 = uStack_2b4;
  puStack_2b0 = puVar2;
  local_250 = puVar2;
  local_228 = plVar1;
  puStack_218 = puVar2;
  uStack_208 = local_240;
  local_260 = plVar1;
  uStack_210 = uStack_248;
  uStack_20c = uStack_244;
  uVar10 = uStack_284;
  if (uStack_284 != uVar4) {
    puVar13 = *(uint **)(lVar9 + 0x2b8);
    if (*(uint **)(lVar9 + 0x2b8) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar10 = puVar13[local_298] & local_288;
    while (uVar10 == 0) {
      lVar9 = (longlong)local_298;
      local_280 = local_280 + 0x20;
      iVar5 = local_298 + 1;
      bVar3 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_298;
      local_298 = iVar5;
      if (bVar3) goto LAB_1411fb9d5;
      uVar10 = puVar13[lVar9 + 1];
      local_288 = 0xffffffff;
    }
    uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
    local_274 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> local_274 == 0; local_274 = local_274 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_274;
    }
    uStack_284 = (local_280 - iVar5) + 0x1f;
    uVar10 = uStack_284;
    if ((int)uVar4 < (int)uStack_284) {
LAB_1411fb9d5:
      uStack_284 = uVar4;
      uVar10 = uVar4;
    }
  }
  do {
    if ((uStack_244 == uVar10) && (local_250 == puVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_260 == plVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      FUN_1411fb240(param_1);
      return 1;
    }
    uVar11 = (longlong)(int)uStack_244 * 0x40 + *local_260;
    FUN_14282a800(local_118);
    FUN_14283c290(local_118,uVar11 + 0x20,1,0);
    lVar9 = FWeakObjectPtr::Get();
    if (lVar9 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(uVar11 + 0x18)) &&
         (local_2c8 = 0, *(longlong *)(uVar11 + 0x20) != 0)) {
        lVar9 = FUN_141796df0();
        FWeakObjectPtr::operator=(uVar11 + 0x10,lVar9);
        if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(uVar11 + 0x18) = DAT_1464b56f4;
        }
        lVar9 = FWeakObjectPtr::Get(uVar11 + 0x10);
        if (lVar9 != 0) goto LAB_1411fbab7;
      }
LAB_1411fbaf1:
      lVar9 = 0;
    }
    else {
LAB_1411fbab7:
      lVar12 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1411fbaf1;
    }
    lVar12 = 0;
    local_230 = &local_268;
    local_268 = lVar9;
    local_238 = uVar11;
    FUN_1404a9290(param_1 + 0x70,local_270,&local_238);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x70,&local_2c0,uVar11);
    lVar9 = lVar12;
    if (local_2c0 != -1) {
      lVar9 = (longlong)local_2c0 * 0x20 + *(longlong *)(param_1 + 0x70);
    }
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x70,&local_2bc,uVar11);
      lVar9 = lVar12;
      if (local_2bc != -1) {
        lVar9 = (longlong)local_2bc * 0x20 + *(longlong *)(param_1 + 0x70);
      }
      uVar4 = *(uint *)(*(longlong *)(lVar9 + 0x10) + 0xc);
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar6 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar6 = uVar6 - 0x10000;
        }
        lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)uVar6 * 0x18;
      }
      *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x40000000;
    }
    FUN_14282cc40(local_118);
    uStack_248 = uStack_248 & ~uStack_254;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_258);
  } while( true );
}



// FUNCTION 1411fbc40 FUN_1411fbc40 body=497 status=ok
// SIG undefined FUN_1411fbc40(void)

bool FUN_1411fbc40(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  if (param_1 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *(longlong *)(param_1 + 0x198);
      if (lVar4 != 0) {
        lVar5 = FUN_141410f00();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(char *)(lVar4 + 0x43) != '\0')) {
          return false;
        }
      }
      cVar3 = FUN_140bc2c90(param_1);
      if (cVar3 == '\0') {
        if (1 < param_3) {
          plVar6 = (longlong *)UListView::OnItemSelectionChanged(param_1);
          puVar7 = (undefined8 *)*plVar6;
          puVar1 = puVar7 + (int)plVar6[1];
          if (puVar7 == puVar1) {
            return true;
          }
          do {
            plVar6 = (longlong *)UPlayer::GetPlayerController(*puVar7,0);
            if (plVar6 == (longlong *)0x0) {
LAB_1411fbd88:
              plVar6 = (longlong *)0x0;
            }
            else {
              lVar4 = FUN_14145f370();
              if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                  lVar4 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_1411fbd88;
              if (*(char *)((longlong)plVar6 + 0x1a04) != '\0') {
                return false;
              }
            }
            if (plVar6 != param_2) {
              if (((plVar6 == (longlong *)0x0) ||
                  (lVar4 = (**(code **)(*plVar6 + 0xfa8))(plVar6), lVar4 == 0)) ||
                 (*(int *)(lVar4 + 0x48) < 1)) {
                return false;
              }
              FUN_141387d00();
              cVar3 = FUN_142ef5b10(lVar4);
              if (cVar3 == '\0') {
                UCheckBox::GetPrivateStaticClass();
                cVar3 = FUN_142ef5b10(lVar4);
                if (cVar3 == '\0') {
                  AUGBossFlyingAIController::GetPrivateStaticClass();
                  cVar3 = FUN_142ef5b10(lVar4);
                  if (cVar3 == '\0') {
                    return false;
                  }
                }
              }
            }
            puVar7 = puVar7 + 1;
            if (puVar7 == puVar1) {
              return true;
            }
          } while( true );
        }
        if (((param_3 == 1) && (param_2 != (longlong *)0x0)) &&
           (*(char *)((longlong)param_2 + 0x1a04) != '\0')) {
          return false;
        }
      }
    }
  }
  return param_3 == 1;
}



// FUNCTION 1411fbe40 FUN_1411fbe40 body=316 status=ok
// SIG undefined FUN_1411fbe40(void)

void FUN_1411fbe40(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char *local_28;
  undefined8 local_20;
  
  plVar4 = (longlong *)GetMoviePlayer();
  cVar3 = (**(code **)(*plVar4 + 0xb8))(plVar4);
  if (cVar3 == '\0') {
    local_28 = param_1;
    local_20 = param_2;
    if (*param_1 == '\0') {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 400);
      *param_1 = '\x01';
      AK::MemoryMgr::StartProfileThreadUsage(5);
      lVar1 = FUN_140cb5ff0();
      if (lVar1 != 0) {
        lVar1 = FUN_140cb5ff0();
        if (*(longlong *)(lVar1 + 0x68) != 0) {
          plVar4 = (longlong *)GetMoviePlayer();
          cVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
          if (cVar3 != '\0') {
            FUN_1411cdf40(&local_28);
            FUN_1411fe160(param_1);
            return;
          }
        }
        uVar2 = FUN_140cb5ff0();
        FUN_140ccd780(uVar2,param_2);
        lVar1 = FUN_140cb5ff0();
        FString::operator=(param_1 + 0x40,lVar1 + 200);
        cVar3 = FWeakObjectPtr::IsValid(param_1 + 4);
        if (cVar3 == '\0') {
          uVar5 = 0;
        }
        else {
          lVar1 = FWeakObjectPtr::Get(param_1 + 4);
          uVar5 = *(undefined4 *)(lVar1 + 0x974);
        }
        uVar2 = FUN_140cb5ff0();
        FUN_140c72cf0(uVar2,uVar5);
      }
      FUN_1411fe160(param_1);
      return;
    }
    lVar1 = FUN_140cb5ff0();
    if (lVar1 != 0) {
      lVar1 = FUN_140cb5ff0();
      if (*(longlong *)(lVar1 + 0x68) != 0) {
        FUN_1411cdf40(&local_28);
      }
    }
  }
  return;
}



// FUNCTION 1411fbf80 FUN_1411fbf80 body=652 status=ok
// SIG undefined FUN_1411fbf80(void)

void FUN_1411fbf80(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  char local_2c;
  
  lVar3 = FUN_140cb5ff0();
  if (lVar3 != 0) {
    uVar4 = FUN_140cb5ff0();
    FUN_140c6fbe0(uVar4);
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(DAT_1469f4590 + 0x18);
  }
  uVar4 = 0;
  iVar8 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 4);
    FUN_142880530(*(undefined8 *)(lVar3 + 0x90),param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  cVar2 = FPreLoadScreenManager::ArePreLoadScreensEnabled();
  if (cVar2 != '\0') {
    FUN_141200a80(param_1,1);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      plVar5 = (longlong *)GetMoviePlayer();
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0xe8))(plVar5);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar6 != (longlong *)0x0) {
        plVar6[1] = param_1;
        *plVar6 = (longlong)&DAT_143f3ed00;
        plVar6[2] = (longlong)FUN_1411efbb0;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar3;
        *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar1 = (int)plVar5[1];
        uVar4 = *puVar7;
        *(int *)(plVar5 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x50) = uVar4;
    }
    plVar5 = (longlong *)GetMoviePlayer();
    local_2c = (**(code **)(*plVar5 + 0x60))(plVar5);
    if (local_2c == '\0') {
      local_2d = DAT_146876440 != 0;
      local_48 = (longlong *)0x0;
      local_58 = 0;
      uStack_50 = 0;
      local_38 = 0xbf800000;
      local_40 = 1;
      local_34 = 0x101;
      local_30 = 0x100;
      local_2e = 0;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,0);
      plVar5 = local_48;
      *local_48 = 0;
      local_48[1] = 0;
      if ((wchar_t *)*local_48 != L"Loading") {
        *(undefined4 *)(local_48 + 1) = 0;
        if (*(int *)((longlong)local_48 + 0xc) != 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_48,8);
          iVar8 = (int)plVar5[1];
        }
        *(int *)(plVar5 + 1) = iVar8 + 8;
        if (*(int *)((longlong)plVar5 + 0xc) < iVar8 + 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5,iVar8);
        }
        builtin_wcsncpy((wchar_t *)*plVar5,L"Loading",8);
      }
      plVar5 = (longlong *)GetMoviePlayer();
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
      plVar5 = (longlong *)GetMoviePlayer();
      cVar2 = (**(code **)(*plVar5 + 0x40))(plVar5);
      if (cVar2 == '\0') {
        FUN_1411e7a30(param_1,0,0);
      }
      else {
        lVar3 = FUN_1411e2360();
        if (lVar3 != 0) {
          *(uint *)(lVar3 + 0x7c) = *(uint *)(lVar3 + 0x7c) | 4;
        }
      }
      FLoadingScreenAttributes::~FLoadingScreenAttributes(&local_58);
    }
  }
  return;
}



// FUNCTION 1411fc210 FUN_1411fc210 body=74 status=ok
// SIG undefined FUN_1411fc210(void)

void FUN_1411fc210(undefined8 param_1)

{
  longlong lVar1;
  
  if (DAT_146876440 != 0) {
    lVar1 = FUN_1411e2360();
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x7c) = *(uint *)(lVar1 + 0x7c) | 4;
    }
    FUN_1411fbf80(param_1);
    return;
  }
  lVar1 = FUN_1411e2360();
  if (lVar1 != 0) {
    FUN_140cd4b50(lVar1);
    return;
  }
  return;
}



// FUNCTION 1411fc260 FUN_1411fc260 body=1202 status=ok
// SIG undefined FUN_1411fc260(void)

void FUN_1411fc260(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e0;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50 [2];
  longlong *local_40;
  longlong local_38;
  
  plVar9 = (longlong *)0x0;
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 == 0) {
LAB_1411fc31e:
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    local_e0 = (longlong *)0x0;
    plVar10 = plVar9;
  }
  else {
    lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((!bVar3) || (lVar8 = FUN_140f9aee0(lVar8), lVar8 == 0)) ||
       (lVar8 = UGameInstance::FindLocalPlayerFromControllerId(lVar8,param_3), lVar8 == 0))
    goto LAB_1411fc31e;
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    lVar8 = FUN_142547b50(lVar8,local_50);
    plVar9 = *(longlong **)(lVar8 + 0x10);
    plVar10 = *(longlong **)(lVar8 + 8);
    local_d0 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
  }
  plVar11 = local_e0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (local_e0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  plVar11 = local_d0;
  if ((bVar4) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (bVar5) {
    local_50[0] = &PTR_FUN_143f740c8;
    if (local_38 != 0) {
      FMemory::Free();
    }
    local_50[0] = &PTR_FUN_143f73d18;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_40 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (1 < *(int *)(param_2 + 0x38)) {
    lVar8 = *(longlong *)(param_1 + 0x38);
    if (lVar8 != 0) {
      lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (lVar8 = FWeakObjectPtr::Get(lVar8 + 0x59c), lVar8 != 0)) &&
         (lVar8 = FUN_1410f7490(lVar8), lVar8 != 0)) {
        FUN_1411284b0(lVar8,param_2);
      }
    }
    goto LAB_1411fc6bc;
  }
  if (*(int *)(param_2 + 0x68) < 2) {
    if ((*(int *)(param_2 + 0x78) < 2) || (plVar10 == (longlong *)0x0)) goto LAB_1411fc6bc;
    FUN_1404cf2e0(&local_f8,0);
    plVar11 = local_f8;
    if ((local_f8 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*local_f8 + 0x10))(local_f8,1), cVar6 != '\0')) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        plVar11 = local_f8;
      }
      local_78 = plVar10;
      plStack_70 = plVar9;
      (**(code **)(*plVar11 + 0x28))(plVar11,&local_78,0xffffffff,param_2 + 0x70);
      plVar10 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_70 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    plVar10 = local_f0;
    if (local_f0 == (longlong *)0x0) goto LAB_1411fc6bc;
    LOCK();
    plVar11 = local_f0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) goto LAB_1411fc6bc;
    (**(code **)*local_f0)(local_f0);
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    iVar12 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    FUN_1404cf2e0(&local_c8,0);
    if ((local_c8 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*local_c8 + 0x10))(local_c8,0xf), cVar6 != '\0')) {
      local_60 = 0;
      uStack_58 = 2;
      local_68 = 0;
      local_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_b4 = 0;
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      (**(code **)(*local_c8 + 0x98))(local_c8,param_2 + 0x60,&local_b8,&local_68);
      if (local_90 != 0) {
        FMemory::Free();
      }
      plVar10 = local_a0;
      for (iVar12 = (int)local_98; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
      }
      if (local_a0 != (longlong *)0x0) {
        FMemory::Free(local_a0);
      }
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_68);
    }
    plVar10 = local_c0;
    if (local_c0 == (longlong *)0x0) goto LAB_1411fc6bc;
    LOCK();
    plVar11 = local_c0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) goto LAB_1411fc6bc;
    (**(code **)*local_c0)(local_c0);
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    iVar12 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    local_f0 = local_c0;
  }
  if (iVar12 == 1) {
    (**(code **)(*local_f0 + 8))(local_f0,1);
  }
LAB_1411fc6bc:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 1411fc720 FUN_1411fc720 body=61 status=ok
// SIG undefined FUN_1411fc720(void)

void FUN_1411fc720(longlong param_1,undefined1 param_2)

{
  if (1 < *(int *)(param_1 + 0x378)) {
    FUN_1411f27e0(param_1,param_1 + 0x2f0,*(int *)(param_1 + 0x380),
                  (longlong)(*(int *)(param_1 + 0x380) + 1) % (longlong)*(int *)(param_1 + 0x378) &
                  0xffffffff,param_2);
  }
  return;
}



// FUNCTION 1411fc760 FUN_1411fc760 body=343 status=ok
// SIG undefined FUN_1411fc760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411fc760(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Remove(&DAT_1464b57b8,*(undefined8 *)(param_1 + 0x10));
  uVar6 = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar8 = uVar6;
  uVar10 = uVar6;
  iVar4 = DAT_1464b57d8;
  if (0 < DAT_1464b57d8) {
    do {
      plVar9 = (longlong *)(DAT_1464b57d0 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1464b57d8, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1464b57d8;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar7 < iVar4);
  }
  if (DAT_1464b57e4 < 1) {
    uVar8 = uVar6;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar6 + 8 + DAT_1464b57d0) == 0) ||
            (*(longlong **)(uVar6 + DAT_1464b57d0) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar6 + DAT_1464b57d0) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b57d0,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 0x10;
        }
        iVar5 = DAT_1464b57d8;
      } while ((int)uVar8 < DAT_1464b57d8);
    }
    _DAT_1464b57e0 = iVar5 * 2;
    if (_DAT_1464b57e0 < 3) {
      _DAT_1464b57e0 = 2;
    }
    if ((_DAT_1464b57e0 < iVar4) && (DAT_1464b57dc != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b57d0);
      return;
    }
  }
  return;
}



// FUNCTION 1411fc8c0 FUN_1411fc8c0 body=427 status=ok
// SIG undefined FUN_1411fc8c0(void)

void FUN_1411fc8c0(undefined8 *param_1,char *param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  char *local_f8;
  undefined1 *local_f0;
  char *local_e8;
  undefined1 *local_e0;
  char *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  char *local_c0;
  char **local_b8;
  char **local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  char *local_90;
  char **local_88;
  char **local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  char *local_60;
  char **local_58;
  char **local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  char *local_30;
  char **local_28;
  char **local_20;
  undefined1 *local_18;
  undefined8 local_10;
  
  cVar1 = *param_2;
  local_d0 = local_res18;
  local_e0 = local_res18;
  local_f0 = local_res18;
  local_38 = local_res10;
  local_28 = &local_f8;
  local_20 = &local_e8;
  local_18 = local_res18;
  local_68 = local_res10;
  local_58 = &local_f8;
  local_50 = &local_e8;
  local_48 = local_res18;
  local_98 = local_res10;
  local_88 = &local_f8;
  local_80 = &local_e8;
  local_78 = local_res18;
  local_c8 = local_res10;
  local_b8 = &local_f8;
  local_b0 = &local_e8;
  local_a8 = local_res18;
  local_res18[0] = param_3;
  local_f8 = param_2;
  local_e8 = param_2;
  local_d8 = param_2;
  local_c0 = param_2;
  local_a0 = param_4;
  local_90 = param_2;
  local_70 = param_4;
  local_60 = param_2;
  local_40 = param_4;
  local_30 = param_2;
  local_10 = param_4;
  if (cVar1 == '\0') {
    FUN_1411c4df0(*param_1,(longlong)*(int *)(param_1 + 1),local_res10[0],&local_d8);
  }
  else {
    if (cVar1 == '\x01') {
      FUN_1411c56d0(*param_1,(longlong)*(int *)(param_1 + 1),local_res10[0],&local_38);
      return;
    }
    if (cVar1 == '\x02') {
      FUN_1411c5f10(*param_1,(longlong)*(int *)(param_1 + 1),local_res10[0],&local_68);
      return;
    }
    if (cVar1 == '\x03') {
      FUN_1411c45b0(*param_1,(longlong)*(int *)(param_1 + 1),local_res10[0],&local_98);
      return;
    }
    if (cVar1 == '\x04') {
      FUN_1411c6750(*param_1,(longlong)*(int *)(param_1 + 1),local_res10[0],&local_c8);
      return;
    }
  }
  return;
}



// FUNCTION 1411fca70 FUN_1411fca70 body=357 status=ok
// SIG undefined FUN_1411fca70(void)

longlong FUN_1411fca70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  longlong *local_28;
  undefined1 local_10;
  
  if (*param_1 == 0) {
    return 0;
  }
  lVar2 = AAFGameState::GetPrivateStaticClass();
  lVar3 = *param_1;
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar3 == lVar2) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar3 == 0) {
    return 0;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_10 = 1;
  if (param_2[0xa5] == 0) {
    return 0;
  }
  local_28 = param_2;
  FUN_1426e1d20(param_2[0xa5],local_58);
  FUN_1426e1ca0(param_2[0xa5],local_48);
  if (*param_1 != 0) {
    lVar4 = AAFGameState::GetPrivateStaticClass();
    lVar2 = *param_1;
    for (lVar1 = lVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar4) goto LAB_1411fcb60;
    }
  }
  lVar2 = 0;
LAB_1411fcb60:
  lVar3 = UWorld::SpawnActor(lVar3,lVar2,local_48,local_58,local_38);
  if (lVar3 != 0) {
    FUN_1422232e0(lVar3,*(undefined8 *)(param_2[0xa5] + 0x460),&DAT_146532180,0);
  }
  return lVar3;
}



// FUNCTION 1411fcbe0 FUN_1411fcbe0 body=722 status=ok
// SIG undefined FUN_1411fcbe0(void)

undefined8 FUN_1411fcbe0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_68;
  undefined1 local_60 [16];
  longlong *local_50;
  undefined1 local_38;
  ushort local_36;
  
  plVar10 = param_1 + 0x90;
  cVar1 = FWeakObjectPtr::IsValid(plVar10);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(plVar10);
    FUN_142227350(uVar2,0,1);
    FWeakObjectPtr::operator=(&local_68,0);
    *(undefined4 *)plVar10 = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x484) = local_68._4_4_;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = 0;
  if (param_2 != 0) {
    lVar4 = FUN_1428dfc70();
    lVar5 = param_2;
    do {
      if (lVar5 == lVar4) {
        if (lVar3 != 0) {
          uVar2 = USoundSourceBus::GetPrivateStaticClass();
          lVar5 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
          if (lVar5 != 0) {
            FActorSpawnParameters::FActorSpawnParameters(local_60);
            local_36 = local_36 | 4;
            local_38 = 1;
            local_50 = param_1;
            lVar6 = FUN_1428dfc70();
            lVar4 = param_2;
            goto LAB_1411fccd5;
          }
        }
        break;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  goto LAB_1411fcdc4;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar9 = lVar7, lVar4 != 0) {
LAB_1411fccd5:
    lVar9 = param_2;
    if (lVar4 == lVar6) break;
  }
  uVar2 = FUN_142550d00(lVar3,lVar9,&DAT_1468b5b70,local_60);
  FWeakObjectPtr::operator=(plVar10,uVar2);
  cVar1 = FWeakObjectPtr::IsValid(plVar10);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(plVar10);
    FUN_14223c460(uVar2,0);
    uVar2 = FWeakObjectPtr::Get(plVar10);
    FUN_14222b9f0(uVar2,&DAT_1468b5b70,0,0);
    local_68 = FWeakObjectPtr::Get(plVar10);
    if (*(int *)(param_3 + 8) != 0) {
      plVar8 = (longlong *)param_3[6];
      if ((longlong *)param_3[6] == (longlong *)0x0) {
        plVar8 = param_3 + 2;
      }
      if (plVar8 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar8 + 8))();
      }
    }
    (*(code *)*param_3)(lVar7,&local_68);
    local_68 = 0;
    uVar2 = FWeakObjectPtr::Get(plVar10);
    FUN_1422232e0(uVar2,lVar5,&DAT_146af29ec,0);
    uVar2 = FWeakObjectPtr::Get(plVar10);
    FUN_1411d31b0(param_1,uVar2,1);
  }
LAB_1411fcdc4:
  cVar1 = FWeakObjectPtr::IsValid(plVar10);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(plVar10);
    local_68 = 0;
    if (((param_1[0x9a] != 0) && (lVar3 = FWeakObjectPtr::Get(param_1 + 0x99), lVar3 != 0)) &&
       (lVar3 = UObject::FindFunction(lVar3,param_1[0x9a]), lVar3 != 0)) {
      local_68 = uVar2;
      plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x99);
      uVar2 = FUN_14178ac60(plVar8,param_1[0x9a]);
      (**(code **)(*plVar8 + 0x208))(plVar8,uVar2,&local_68);
    }
  }
  uVar2 = FWeakObjectPtr::Get(plVar10);
  if (*(int *)(param_3 + 8) != 0) {
    plVar10 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar10 = param_3 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (param_3[6] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1411fcec0 FUN_1411fcec0 body=478 status=ok
// SIG undefined FUN_1411fcec0(void)

void FUN_1411fcec0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [24];
  longlong local_a0;
  longlong local_90;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x80),0,1);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (param_2 != 0) {
    _guard_xfg_dispatch_icall_nop(&local_d8,0,0x60);
    local_c0 = 100;
    local_d0 = param_2;
    local_d8 = FUN_14057ade0(param_2);
    if (0 < *(int *)(param_2 + 200)) {
      local_c8 = **(undefined8 **)(param_2 + 0xc0);
    }
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x148))();
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_14301a2a0(lVar1,&local_d8,&DAT_1468b5b70,0);
        if (plVar2 != (longlong *)0x0) {
          lVar3 = plVar2[0x23];
        }
        *(longlong *)(param_1 + 0x80) = lVar3;
        if ((plVar2 != (longlong *)0x0) && (lVar3 != 0)) {
          FUN_14223ef90(lVar3);
          FUN_14223c460(*(undefined8 *)(param_1 + 0x80));
          _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
          FUN_143019ca0(*(undefined8 *)(param_1 + 0x80),plVar2,&local_d8,local_78);
          (**(code **)(*plVar2 + 0x468))(plVar2,local_78,0,0);
          FUN_14222b9f0(*(undefined8 *)(param_1 + 0x80),&DAT_1468b5b70,0,0);
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
        }
      }
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (local_b8);
  }
  return;
}



// FUNCTION 1411fd0a0 FUN_1411fd0a0 body=26 status=ok
// SIG undefined FUN_1411fd0a0(void)

void FUN_1411fd0a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x374) = param_2;
  *(undefined1 *)(param_1 + 0x321) = 1;
  *(undefined4 *)(param_1 + 0x378) = 0;
  return;
}



// FUNCTION 1411fd0c0 FUN_1411fd0c0 body=285 status=ok
// SIG undefined FUN_1411fd0c0(void)

void FUN_1411fd0c0(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xe0);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0xe0);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 0xe0) = local_res8;
    *(undefined4 *)(param_1 + 0xe4) = local_resc;
  }
  cVar2 = FPreLoadScreenManager::ArePreLoadScreensEnabled();
  if (cVar2 != '\0') {
    plVar5 = (longlong *)GetMoviePlayer();
    cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5);
    if (cVar2 != '\0') {
      if (param_2 == '\0') {
        lVar4 = FUN_140cb5ff0();
        if (lVar4 != 0) {
          lVar4 = FUN_140cb5ff0();
          if (*(longlong *)(lVar4 + 0x68) == 0) {
            *(undefined1 *)(param_1 + 0x100) = 1;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 0;
        if (param_3 != '\0') {
          *(undefined1 *)(param_1 + 0x38) = 1;
        }
        FUN_1411e7a30(param_1,0,0);
        if (param_3 == '\0') {
          FUN_1411fc210(param_1);
        }
        else {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 1411fd1e0 FUN_1411fd1e0 body=8 status=ok
// SIG undefined FUN_1411fd1e0(void)

void FUN_1411fd1e0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x321) = 0;
  return;
}



// FUNCTION 1411fd1f0 FUN_1411fd1f0 body=238 status=ok
// SIG undefined FUN_1411fd1f0(void)

void FUN_1411fd1f0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x30);
  plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x38) * 0xc;
  plVar3 = plVar2;
  if (plVar2 != plVar4) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 0xc;
      if (plVar3 == plVar4) {
        return;
      }
    }
    if (param_3 != '\0') {
      FUN_1411f8570(plVar1,((longlong)plVar3 - (longlong)plVar2) / 0x60,1,
                    CONCAT71((int7)((ulonglong)plVar4 >> 8),1));
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x10,plVar1);
      return;
    }
    *(undefined1 *)((longlong)plVar3 + 0x5d) = 1;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x10,plVar1);
    FUN_1411f8570(plVar1,((longlong)plVar3 - *plVar1) / 0x60,1,1);
  }
  return;
}



// FUNCTION 1411fd2e0 FUN_1411fd2e0 body=122 status=ok
// SIG undefined FUN_1411fd2e0(void)

void FUN_1411fd2e0(longlong *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  FUN_1422406d0();
  if (*(char *)((longlong)param_1 + 0x47a) != '\0') {
    plVar2 = (longlong *)FUN_140cb9640(param_1);
    if (plVar2 == (longlong *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*plVar2 + 0xfb0))(plVar2);
    }
    (**(code **)(*param_1 + 0x310))(param_1,uVar1);
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x90);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x310))(plVar2,uVar1);
    }
  }
  return;
}



// FUNCTION 1411fd360 FUN_1411fd360 body=171 status=ok
// SIG undefined FUN_1411fd360(void)

void FUN_1411fd360(char *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x20) == 3) {
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    if (*param_1 != '\0') {
      *param_1 = '\0';
      AK::MemoryMgr::StartProfileThreadUsage(5);
      FUN_1411fe160(param_1);
    }
    lVar1 = FWeakObjectPtr::Get(param_1 + 4);
    if (((lVar1 != 0) && (lVar1 = FUN_140cb5ff0(), lVar1 != 0)) &&
       (lVar1 = FUN_140cb5ff0(), *(longlong *)(lVar1 + 0x68) == 0)) {
      uVar2 = FWeakObjectPtr::Get(param_1 + 4);
      uVar3 = FUN_140cb5ff0();
      FUN_140cbad20(uVar3,uVar2,0);
      uVar2 = FUN_140cb5ff0();
      FUN_140cc9000(uVar2);
    }
  }
  FUN_140eaaf80(param_1 + 0x104,param_2);
  return;
}



// FUNCTION 1411fd410 FUN_1411fd410 body=103 status=ok
// SIG undefined FUN_1411fd410(void)

void FUN_1411fd410(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x50);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x50);
    if ((((*(char *)(lVar1 + 0x90) == '\0') && (0 < *(int *)(param_1 + 0x38))) &&
        (*(char *)(param_1 + 0x28) != '\0')) && (*(longlong *)(param_1 + 0x40) != 0)) {
      cVar2 = FUN_14103f2a0();
      if ((cVar2 != '\0') && (0 < *(int *)(param_1 + 0x38))) {
        FUN_1411d9610(param_1,*(undefined8 *)(param_1 + 0x30));
      }
    }
  }
  return;
}



// FUNCTION 1411fd480 FUN_1411fd480 body=208 status=ok
// SIG undefined FUN_1411fd480(void)

void FUN_1411fd480(longlong param_1,float param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x148))(param_1 + -0x30);
  if (((lVar3 != 0) && (param_2 != 0.0)) &&
     ((cVar2 = FUN_14254a160(lVar3), cVar2 == '\0' || (*(char *)(param_1 + 0x38) != '\0')))) {
    plVar4 = (longlong *)FUN_1414d9130();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    fVar1 = *(float *)(lVar3 + 0x798);
    fVar6 = fVar1 - *(float *)(param_1 + 0x20);
    if ((*(float *)(lVar5 + 0x1078) <= fVar6) || (fVar6 < 0.0)) {
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      FUN_1411fe220(param_1 + -0x30,fVar6);
      *(float *)(param_1 + 0x20) = fVar1;
    }
  }
  return;
}



// FUNCTION 1411fd550 FUN_1411fd550 body=999 status=ok
// SIG undefined FUN_1411fd550(void)

void FUN_1411fd550(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_res8 [2];
  int local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  longlong *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  param_2 = param_2 + *(float *)(param_1 + 0xa4);
  *(float *)(param_1 + 0xa4) = param_2;
  if (*(float *)(param_1 + 0x40) <= param_2) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    iVar9 = *(int *)(param_1 + 0x60);
    local_b8 = (longlong *)0x0;
    lVar11 = *(longlong *)(param_1 + 0x58);
    local_b0 = iVar9;
    if (iVar9 == 0) {
      local_ac = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar9,0);
      lVar11 = lVar11 - (longlong)local_b8;
      plVar8 = local_b8;
      do {
        *plVar8 = *(longlong *)(lVar11 + (longlong)plVar8);
        lVar7 = *(longlong *)(lVar11 + 8 + (longlong)plVar8);
        plVar8[1] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        plVar8 = plVar8 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = local_b0;
    plVar8 = local_b8;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    plVar10 = plVar8 + (longlong)iVar9 * 2;
    local_res18 = plVar10;
    if (plVar8 != plVar10) {
      do {
        plVar4 = (longlong *)plVar8[1];
        lVar11 = *plVar8;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        LOCK();
        bVar12 = *(int *)(lVar11 + 0x708) == 0;
        if (bVar12) {
          *(int *)(lVar11 + 0x708) = 0;
        }
        UNLOCK();
        if (bVar12) {
          AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x38));
          lVar7 = *(longlong *)(lVar11 + 0x20);
          local_res20 = 0;
          ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x38));
          if (lVar7 == local_res20) {
            AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x50));
            iVar3 = *(int *)(lVar11 + 0x48);
            ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x50));
            iVar9 = iVar3 + -1;
            if (iVar3 == 0) {
              iVar9 = 0;
            }
            if (iVar9 < 1) {
              AcquireSRWLockShared((PSRWLOCK)(lVar11 + 8));
              lVar7 = FWeakObjectPtr::Get(lVar11);
              ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 8));
              plVar10 = local_res18;
              if (lVar7 != 0) {
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                }
                local_68 = 0;
                local_58 = 0;
                puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_88);
                if (puVar5 != (undefined8 *)0x0) {
                  *puVar5 = &PTR_FUN_14467a5d8;
                  puVar5[1] = param_1;
                  puVar5[2] = lVar11;
                  puVar5[3] = plVar4;
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                    UNLOCK();
                  }
                }
                local_98[0] = &LAB_1411d4fe0;
                FUN_14204c280(local_98);
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = plVar4 + 1;
                  lVar11 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
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
                  LOCK();
                  plVar8 = plVar4 + 1;
                  lVar11 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
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
                break;
              }
            }
            else {
              local_res8[0] = FUN_1411e7140(param_1);
              FUN_1411fa0a0(lVar11,local_res8);
              LOCK();
              bVar12 = *(int *)(lVar11 + 0x708) == 0;
              if (bVar12) {
                *(int *)(lVar11 + 0x708) = 0;
              }
              UNLOCK();
              plVar10 = local_res18;
              if (bVar12) {
                FUN_1411e0210(param_1,local_res8);
                plVar10 = local_res18;
              }
            }
          }
          else {
            local_res10[0] = FUN_1411e7140(param_1);
            local_a8 = 0;
            local_a0 = 0;
            puVar5 = (undefined8 *)operator_new(0x28,&local_a8);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = &PTR_FUN_143f4d170;
              FWeakObjectPtr::operator=(puVar5 + 1,param_1);
              puVar5[2] = FUN_1411f0a40;
              uVar6 = FDelegateHandle::GenerateNewID();
              puVar5[4] = uVar6;
              *puVar5 = &PTR_FUN_143f4d1b8;
            }
            FUN_1411f9c60(lVar11,local_res10,&local_a8);
            LOCK();
            bVar12 = *(int *)(lVar11 + 0x708) == 0;
            if (bVar12) {
              *(int *)(lVar11 + 0x708) = 0;
            }
            UNLOCK();
            plVar10 = local_res18;
            if (bVar12) {
              AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
              iVar9 = local_res10[0];
              if ((-1 < local_res10[0]) && (local_res10[0] < *(int *)(param_1 + 0x44))) {
                iVar3 = *(int *)(param_1 + 0x90);
                *(int *)(param_1 + 0x90) = iVar3 + 1;
                if (*(int *)(param_1 + 0x94) < iVar3 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar3);
                }
                *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 4) = iVar9;
              }
              ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x98));
              plVar10 = local_res18;
            }
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar10);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b8);
  }
  return;
}



// FUNCTION 1411fd940 FUN_1411fd940 body=9 status=ok
// SIG undefined FUN_1411fd940(void)

void FUN_1411fd940(longlong param_1)

{
  FUN_142edaa10(param_1 + 0x28);
  return;
}



// FUNCTION 1411fd950 FUN_1411fd950 body=76 status=ok
// SIG undefined FUN_1411fd950(void)

void FUN_1411fd950(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1411fd410();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1411fd410(*(longlong *)(param_1 + 0x78),param_2);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1411fd410(*(longlong *)(param_1 + 0x68),param_2);
  }
  return;
}



// FUNCTION 1411fd9a0 FUN_1411fd9a0 body=142 status=ok
// SIG undefined FUN_1411fd9a0(void)

void FUN_1411fd9a0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar1 + 0x63c) != '\0')) {
      cVar3 = FUN_1411118a0(lVar1);
      if ((cVar3 != '\0') && (*(char *)(param_1 + 0x2c8) == '\0')) {
        FUN_1411fc720(param_1,1);
      }
    }
  }
  FUN_1411d6c00(param_1);
  FUN_1411fac10(param_1);
  return;
}



// FUNCTION 1411fda30 FUN_1411fda30 body=404 status=ok
// SIG undefined FUN_1411fda30(void)

void FUN_1411fda30(longlong *param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar8;
  uint local_res10 [2];
  int local_res18 [4];
  undefined1 local_b8 [64];
  undefined1 local_78 [48];
  byte local_48;
  undefined1 uVar7;
  undefined1 uVar9;
  
  uVar7 = 0;
  uVar6 = 0;
  uVar9 = 0;
  uVar8 = 0;
  if ((param_2 == (longlong *)0x0) || (param_1 == (longlong *)0x0)) goto LAB_1411fdb88;
  FUN_142ffa6f0(param_2,local_res18,param_1);
  if (local_res18[0] == -1) goto LAB_1411fdb88;
  FUN_142ffbee0(param_2,local_78,param_1);
  uVar4 = 0;
  bVar5 = local_48 >> 2 & 1;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,local_48 >> 1) & 0xffffff01;
  uVar2 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  uVar6 = uVar7;
  uVar8 = uVar9;
  if (lVar3 == 0) {
    if ((char)local_res10[0] == '\0') {
      if (bVar5 == 0) {
        uVar4 = 4;
        uVar6 = 1;
      }
      else {
LAB_1411fdb06:
        FUN_142ffa6f0(param_2,local_res10,param_1);
        if (local_res10[0] != 0xffffffff) {
          FUN_142fde510(local_b8);
          cVar1 = FUN_142ffa4f0(param_2,local_res10,local_b8);
          if (cVar1 != '\0') {
            cVar1 = (**(code **)(*param_2 + 0x480))(param_2,local_b8);
            if (cVar1 != '\0') {
              uVar4 = 2;
              uVar8 = 1;
            }
          }
        }
      }
    }
    else if (bVar5 != 0) goto LAB_1411fdb06;
  }
  thunk_FUN_1430259f0(param_2,local_res18,uVar4,6);
LAB_1411fdb88:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar8;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar6;
  }
  return;
}



// FUNCTION 1411fdbd0 FUN_1411fdbd0 body=417 status=ok
// SIG undefined FUN_1411fdbd0(void)

void FUN_1411fdbd0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_1 != (longlong *)0x0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x90) != 0) &&
       (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x90) + 0x410) != 0)) {
      FUN_1411d2fe0(param_1,0);
    }
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x148), lVar4 != 0)) {
      lVar5 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (*(char *)(lVar4 + 0x128) == '\x03')) &&
         (iVar8 = 0, 0 < *(int *)(lVar4 + 0x478))) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(lVar5 + *(longlong *)(lVar4 + 0x470));
          if (plVar2 != (longlong *)0x0) {
            lVar6 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (lVar6 = (**(code **)(*plVar2 + 0x670))(plVar2), lVar6 != 0)) {
              lVar7 = FUN_14145f370();
              iVar1 = *(int *)(lVar7 + 0x90);
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar1) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
                  lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_14145e4f0(lVar6,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
              }
            }
          }
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar8 < *(int *)(lVar4 + 0x478));
      }
    }
  }
  return;
}



// FUNCTION 1411fdd80 FUN_1411fdd80 body=479 status=ok
// SIG undefined FUN_1411fdd80(void)

ulonglong FUN_1411fdd80(void)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146876ad8) && (_Init_thread_header(&DAT_146876ad8), DAT_146876ad8 == -1))
  {
    plVar5 = (longlong *)FUN_14178e330();
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_GetPoolName_1446fea78;
      plVar6[1] = (longlong)&DAT_146876ad4;
      plVar6[2] = (longlong)&LAB_1411ecde0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_1446feac0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar1 = (int)plVar5[1];
      *(int *)(plVar5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
      *puVar4 = plVar6;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
    _Init_thread_footer(&DAT_146876ad8);
  }
  uVar3 = 0;
  LOCK();
  bVar8 = DAT_146876ad4 == 0;
  if (bVar8) {
    DAT_146876ad4 = 1;
  }
  else {
    uVar3 = (ulonglong)DAT_146876ad4;
  }
  UNLOCK();
  if (bVar8) {
    uVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,DVar2) >> 8),DVar2 == DAT_1468c21c0);
      if (DVar2 != DAT_1468c21c0) {
        local_28 = 0;
        local_18 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_143f3f130;
        }
        local_58[0] = &LAB_1411d4fc0;
        uVar3 = FUN_14158fcd0(2,local_58);
        return uVar3;
      }
    }
    if (DAT_146b17150 != 0) {
      uVar3 = FUN_14288e5f0(DAT_146b17150,0x40000000);
    }
  }
  return uVar3;
}



// FUNCTION 1411fdf60 FUN_1411fdf60 body=401 status=ok
// SIG undefined FUN_1411fdf60(void)

void FUN_1411fdf60(longlong param_1,longlong *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    pwVar5 = (wchar_t *)0x0;
    pwVar4 = *(wchar_t **)(param_1 + 0x58);
    pwVar3 = pwVar5;
    if (pwVar4 != (wchar_t *)0x0) {
      pwVar2 = (wchar_t *)AXActionCue::GetPrivateStaticClass();
      pwVar6 = pwVar4;
      do {
        pwVar3 = pwVar4;
        if (pwVar6 == pwVar2) break;
        pwVar6 = *(wchar_t **)(pwVar6 + 0x18);
        pwVar3 = pwVar5;
      } while (pwVar6 != (wchar_t *)0x0);
    }
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(pwVar3 + 0x48)) ||
       (*(wchar_t **)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(pwVar3 + 0x48) * 8) !=
        pwVar3 + 0x44)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong **)(param_1 + 0x40) = param_2;
      (**(code **)(*param_2 + 0x3a0))(param_2,1);
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x3a8))(*(longlong **)(param_1 + 0x40),1);
      pwVar3 = _guard_xfg_dispatch_icall_nop
                         (L"&UMessageStackManager::HandleCompleteAnimation",L"::");
      pwVar4 = pwVar5;
      while (pwVar6 = pwVar3, pwVar6 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar4 = pwVar6;
      }
      FName::FName(&local_res8,pwVar4 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (*(longlong *)(param_1 + 0x40) + 0x870,param_1,FUN_1411e7560,local_res8);
      pwVar4 = _guard_xfg_dispatch_icall_nop
                         (L"&UMessageStackManager::HandleCompleteAnimation",L"::");
      while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar5 = pwVar3;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (*(longlong *)(param_1 + 0x40) + 0x880,param_1,FUN_1411e7560,local_res8);
    }
  }
  return;
}



// FUNCTION 1411fe100 FUN_1411fe100 body=94 status=ok
// SIG undefined FUN_1411fe100(void)

void FUN_1411fe100(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xec) != '\0') {
    *(undefined1 *)(param_1 + 0xec) = 0;
    DAT_1462054a0 = 1;
    lVar1 = FUN_1405c6c00();
    if ((DAT_1468536c6 != '\0') || (lVar2 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
      lVar2 = 0;
    }
    if (((lVar1 != 0) && (lVar2 != 0)) && (*(longlong *)(lVar1 + 0x48) != 0)) {
      FUN_1405a1960();
      return;
    }
  }
  return;
}



// FUNCTION 1411fe160 FUN_1411fe160 body=192 status=ok
// SIG undefined FUN_1411fe160(void)

void FUN_1411fe160(char *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (DAT_146876440 == 0) {
    if (*param_1 == '\0') {
      FUN_1411e7a30(param_1,0,0);
      FUN_1411e80b0(param_1);
      return;
    }
    if (param_1[1] == '\0') {
      FUN_1411e7a30(param_1,0,0);
      FUN_1411fc210(param_1);
      return;
    }
    FUN_1411e80b0();
  }
  else if (*param_1 == '\0') {
    if (param_1[0x101] != '\0') {
      param_1[0x101] = '\0';
      FUN_1411e7a30(param_1,0,1);
      return;
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 4);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1 + 4);
      uVar3 = *(undefined4 *)(lVar2 + 0x974);
    }
    FUN_1411e7a30(param_1,uVar3,0);
    return;
  }
  FUN_1411fbf80(param_1);
  return;
}



// FUNCTION 1411fe220 FUN_1411fe220 body=677 status=ok
// SIG undefined FUN_1411fe220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411fe220(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float local_res10 [2];
  float *local_res18;
  
  local_res10[0] = param_2;
  plVar5 = (longlong *)FUN_1414d9130();
  lVar11 = plVar5[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar11 = plVar5[0x1f];
  }
  local_res18 = local_res10;
  FUN_1411c7dc0(param_1 + 0x58,&local_res18);
  lVar8 = *(longlong *)(param_1 + 0x58);
  bVar3 = false;
  lVar10 = (longlong)*(int *)(param_1 + 0x60) * 0x60 + lVar8;
  if (lVar8 != lVar10) {
    puVar7 = (undefined8 *)(lVar8 + 0x40);
    uVar9 = (ulonglong)_tls_index;
    do {
      cVar4 = FUN_14059ee90(puVar7);
      if (cVar4 == '\0') {
        if ((*(int *)(puVar7 + 2) == 0) && (*(char *)((longlong)puVar7 + 0x1c) != '\0')) {
LAB_1411fe400:
          *(undefined1 *)((longlong)puVar7 + 0x1c) = 0;
          goto LAB_1411fe404;
        }
      }
      else {
        fVar12 = local_res10[0];
        if (*(char *)((longlong)puVar7 + 0x1e) != '\0') {
          fVar12 = 0.0;
        }
        *(float *)((longlong)puVar7 + -0x14) = fVar12 + *(float *)((longlong)puVar7 + -0x14);
        lVar6 = FUN_14059bf10(*puVar7,*(undefined4 *)(puVar7 + 2));
        fVar12 = (float)FUN_14059b170(puVar7,0);
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
        if ((*(int *)(lVar2 + 0x38) < DAT_1468665e4) &&
           (_Init_thread_header(&DAT_1468665e4), DAT_1468665e4 == -1)) {
          _DAT_1468665e0 = 9.999997e-11;
          _Init_thread_footer(&DAT_1468665e4);
        }
        if ((*(int *)(lVar2 + 0x38) < DAT_1468665ec) &&
           (_Init_thread_header(&DAT_1468665ec), DAT_1468665ec == -1)) {
          _DAT_1468665e8 = 0.4342945;
          _Init_thread_footer(&DAT_1468665ec);
        }
        if (_DAT_1468665e0 <= fVar12) {
          fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
          fVar12 = fVar12 * 20.0 * _DAT_1468665e8;
        }
        else {
          fVar12 = -200.0;
        }
        if ((lVar6 == 0) || (*(char *)(puVar7 + -3) == '\0')) {
          if (*(char *)((longlong)puVar7 + 0x1c) == '\0') {
            fVar13 = *(float *)(lVar11 + 0x1074);
          }
          else {
            fVar13 = *(float *)(lVar11 + 0x1070);
          }
          if (fVar13 < fVar12) goto LAB_1411fe3da;
          fVar12 = *(float *)(puVar7 + 3);
          fVar13 = *(float *)(lVar11 + 0x107c);
          fVar1 = *(float *)(lVar11 + 0x107c);
          uVar9 = (ulonglong)_tls_index;
          *(float *)(puVar7 + 3) = fVar12 + local_res10[0];
          if ((fVar12 < fVar1 || fVar12 == fVar13) || (*(char *)((longlong)puVar7 + 0x1c) != '\0'))
          goto LAB_1411fe407;
          *(undefined1 *)((longlong)puVar7 + 0x1c) = 1;
LAB_1411fe404:
          bVar3 = true;
        }
        else {
LAB_1411fe3da:
          uVar9 = (ulonglong)_tls_index;
          *(undefined4 *)(puVar7 + 3) = 0;
          if (*(char *)((longlong)puVar7 + 0x1c) == '\x01') goto LAB_1411fe400;
        }
      }
LAB_1411fe407:
      lVar8 = lVar8 + 0x60;
      puVar7 = puVar7 + 0xc;
    } while (lVar8 != lVar10);
    if (bVar3) {
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x38,param_1 + 0x58);
    }
  }
  return;
}



// FUNCTION 1411fe4d0 FUN_1411fe4d0 body=113 status=ok
// SIG undefined FUN_1411fe4d0(void)

void FUN_1411fe4d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  iVar2 = 0;
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(lVar4 + 0x30);
    lVar4 = (longlong)*(int *)(lVar4 + 0x38) * 0x168 + lVar3;
    iVar2 = 0;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x168) {
      iVar1 = iVar2 + 1;
      if (*(char *)(lVar3 + 0x98) == '\0') {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
    }
  }
  if (*(char *)(param_1 + 0x54) == '\0') {
    if (0 < iVar2) {
      FUN_1411f9510(param_1,1);
      return;
    }
  }
  else if (iVar2 == 0) {
    FUN_1411f9510(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1411fe550 FUN_1411fe550 body=849 status=ok
// SIG undefined FUN_1411fe550(void)

void FUN_1411fe550(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  plVar3 = (longlong *)(param_1 + 0x308);
  *plVar3 = *param_2;
  *(int *)(param_1 + 0x310) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(longlong *)(param_1 + 0x318) = param_2[2];
  FUN_1411cafb0(param_1 + 800,param_2 + 3);
  *(longlong *)(param_1 + 0x380) = param_2[0xf];
  *(int *)(param_1 + 0x388) = (int)param_2[0x10];
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(char *)(param_1 + 0x390) = (char)param_2[0x11];
  *(undefined1 *)(param_1 + 0x391) = *(undefined1 *)((longlong)param_2 + 0x89);
  *(undefined1 *)(param_1 + 0x392) = *(undefined1 *)((longlong)param_2 + 0x8a);
  *(int *)(param_1 + 0x398) = (int)param_2[0x12];
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(int *)(param_1 + 0x3a0) = (int)param_2[0x13];
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(char *)(param_1 + 0x3a8) = (char)param_2[0x14];
  *(int *)(param_1 + 0x3b8) = (int)param_2[0x16];
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(char *)(param_1 + 0x3c0) = (char)param_2[0x17];
  if (*(longlong **)(param_1 + 0x3c8) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x3c8);
    uVar6 = FUN_1411ea6e0(plVar3);
    (**(code **)(lVar5 + 0x278))(*(undefined8 *)(param_1 + 0x3c8),uVar6);
  }
  uVar7 = FUN_1411e6ea0(plVar3,local_48,1);
  FUN_142ed3af0(param_1,uVar7,0);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x170) + 0x38))((longlong *)(param_1 + 0x170),*plVar3 == 0);
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    FText::FText(local_78);
    FUN_1411e6090(plVar3,local_78,local_res10);
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x2b0))
              (*(longlong **)(param_1 + 0x3d8),local_78,1,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x278))
              (*(longlong **)(param_1 + 0x3d8),*(char *)(param_1 + 0x3a8) == '\0');
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FText::FText(local_60);
    FUN_1411e6090(plVar3,local_60,local_res8);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    FUN_142f0ead0(*(undefined8 *)(param_1 + 0x3d0),local_res8[0]);
    (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x278))
              (*(longlong **)(param_1 + 0x3d0),*(char *)(param_1 + 0x3a8) == '\0');
  }
  if (*(longlong **)(param_1 + 0x3e0) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x3e0);
    uVar7 = FUN_1411e3fc0(plVar3,local_30);
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x3e0),uVar7,1,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x278))
              (*(longlong **)(param_1 + 0x3e0),*(char *)(param_1 + 0x3a8) == '\0');
  }
  return;
}



// FUNCTION 1411fe8b0 FUN_1411fe8b0 body=287 status=ok
// SIG undefined FUN_1411fe8b0(void)

void FUN_1411fe8b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FText::FText(local_58);
    local_68 = local_58;
    local_60 = param_1;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Back",L"OakOnlinePlayerDetailsMenu",L"BackOutText");
    FUN_1411ced70(&local_68,&DAT_146b3e2b8,uVar5);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    lVar4 = **(longlong **)(param_1 + 0x2f8);
    uVar5 = FText::FText(local_28,local_58);
    (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x2f8),uVar5);
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
  return;
}



// FUNCTION 1411fe9d0 FUN_1411fe9d0 body=1168 status=ok
// SIG undefined FUN_1411fe9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411fe9d0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  float local_d8 [4];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(char *)(param_1 + 0x321) != '\0') {
    fVar5 = *(float *)(param_1 + 0x348) * 0.5;
    if (fVar5 < 0.0) {
      fVar3 = fVar5 * 0.15915494 - 0.5;
    }
    else {
      fVar3 = fVar5 * 0.15915494 + 0.5;
    }
    local_d8[3] = -1.0;
    fVar5 = fVar5 - (float)(int)fVar3 * 6.2831855;
    if (fVar5 <= 1.5707964) {
      if (-1.5707964 <= fVar5) {
        fVar3 = 1.0;
      }
      else {
        fVar3 = -1.0;
        fVar5 = -3.1415927 - fVar5;
      }
    }
    else {
      fVar3 = -1.0;
      fVar5 = 3.1415927 - fVar5;
    }
    fVar4 = fVar5 * fVar5;
    fVar5 = (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 +
              0.008333331) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar5;
    local_d8[0] = *(float *)(param_1 + 0x34c) * 0.5;
    fVar3 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 +
              0.041666638) * fVar4 - 0.5) * fVar4 + 1.0) * fVar3;
    if (local_d8[0] < 0.0) {
      fVar4 = local_d8[0] * 0.15915494 - 0.5;
    }
    else {
      fVar4 = local_d8[0] * 0.15915494 + 0.5;
    }
    local_d8[0] = local_d8[0] - (float)(int)fVar4 * 6.2831855;
    if (local_d8[0] <= 1.5707964) {
      if (-1.5707964 <= local_d8[0]) {
        local_d8[3] = 1.0;
      }
      else {
        local_d8[0] = -3.1415927 - local_d8[0];
      }
    }
    else {
      local_d8[0] = 3.1415927 - local_d8[0];
    }
    local_128 = param_1 + 0x350;
    fVar4 = local_d8[0] * local_d8[0];
    local_d8[0] = ((0.16666667 -
                   (((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4 +
                   0.008333331) * fVar4) * fVar4 - 1.0) * local_d8[0];
    local_d8[3] = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 +
                    0.041666638) * fVar4 - 0.5) * fVar4 + 1.0) * local_d8[3];
    local_d8[1] = 0.0;
    local_d8[2] = 0.0;
    fStack_f0 = local_d8[0] * 0.0 * fRam0000000146876748 + local_d8[3] * fVar5 +
                fRam0000000146876738 * 0.0 + fVar3 * 0.0 * fRam0000000146876728;
    fStack_ec = local_d8[0] * 0.0 * fRam000000014687674c + local_d8[3] * fVar3 +
                fRam000000014687673c * 0.0 + fVar5 * 0.0 * fRam000000014687672c;
    _local_f8 = CONCAT44(fVar5 * local_d8[0] * fRam0000000146876744 + local_d8[3] * 0.0 +
                         fVar3 * 0.0 * fRam0000000146876734 + fRam0000000146876724 * 0.0,
                         fVar3 * local_d8[0] * _DAT_146876740 + local_d8[3] * 0.0 +
                         fVar5 * 0.0 * _DAT_146876730 + _DAT_146876720 * 0.0);
    local_118 = 0x447a0000;
    local_120 = *(undefined4 *)(param_1 + 0x370);
    local_110 = param_2;
    local_e8 = param_2;
    puVar2 = (undefined8 *)FUN_1411d0b30(local_108,&local_b8,param_1 + 0x360,&local_f8);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x360) = *puVar2;
    *(undefined8 *)(param_1 + 0x368) = uVar1;
    puVar2 = (undefined8 *)FQuat::Rotator(param_1 + 0x360,local_d8);
    *(undefined8 *)(param_1 + 0x33c) = *puVar2;
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(puVar2 + 1);
    if (*(char *)(param_1 + 0x321) == '\0') {
      if (*(longlong *)(param_1 + 0x60) == 0) {
        local_c8 = DAT_1468b5da0;
        local_c0 = DAT_1468b5da8;
      }
      else {
        puVar2 = (undefined8 *)FUN_14238d0c0(*(longlong *)(param_1 + 0x60),local_a8);
        local_b8 = *puVar2;
        uStack_b0 = puVar2[1];
        FQuat::Rotator(&local_b8,&local_c8);
      }
      FUN_1411faae0(param_1,&local_c8);
    }
  }
  return;
}



// FUNCTION 1411fee60 FUN_1411fee60 body=563 status=ok
// SIG undefined FUN_1411fee60(void)

void FUN_1411fee60(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  undefined4 uVar13;
  int local_res8 [2];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  
  lVar2 = FUN_1411e1240();
  if ((*(longlong *)(param_1 + 0x48) != 0) && (lVar2 != 0)) {
    plVar10 = (longlong *)0x0;
    plVar5 = plVar10;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0xa58);
    }
    if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
       (lVar3 = 0x230, *(char *)(param_1 + 0x2a8) != '\0')) {
      lVar3 = 0xa8;
    }
    plVar11 = (longlong *)(lVar2 + 0x20);
    if ((byte)(*(char *)(lVar3 + param_1) - 1U) < 2) {
      TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar2 + 0x38),local_res8,plVar5);
      plVar5 = plVar10;
      if (local_res8[0] != -1) {
        plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x38) + (longlong)local_res8[0] * 0x28);
      }
      plVar4 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar4 = plVar10;
      }
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
    }
    if ((DAT_146ab632a == '\0') || (cVar1 = FUN_141ee41d0(), cVar1 == '\0')) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = *DAT_1468769c8;
    }
    *(float *)(*(longlong *)(param_1 + 0x48) + 0x4c0) = fVar12 + *(float *)(plVar11 + 2);
    plVar4 = *(longlong **)(param_1 + 0x50);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x58) * 5;
    if (plVar4 != plVar5) {
      plVar9 = plVar4 + 1;
      do {
        lVar2 = *plVar4;
        if (lVar2 != 0) {
          plVar6 = (longlong *)*plVar11;
          plVar7 = plVar6 + (longlong)(int)plVar11[1] * 6;
          plVar8 = plVar10;
          if (plVar6 != plVar7) {
            do {
              plVar8 = plVar6;
              if (*plVar6 == *(longlong *)(lVar2 + 0x18)) break;
              plVar6 = plVar6 + 6;
              plVar8 = plVar10;
            } while (plVar6 != plVar7);
          }
          uVar13 = (undefined4)plVar9[3];
          if ((plVar8 != (longlong *)0x0) && ((char)plVar8[5] != '\0')) {
            uVar13 = *(undefined4 *)((longlong)plVar8 + 0x2c);
          }
          FUN_1423772c0(lVar2,uVar13);
          local_38 = *plVar9;
          local_30 = (undefined4)plVar9[1];
          if ((plVar8 != (longlong *)0x0) && ((char)plVar8[1] != '\0')) {
            local_38 = *(longlong *)((longlong)plVar8 + 0xc);
            local_30 = *(undefined4 *)((longlong)plVar8 + 0x14);
          }
          local_48 = *(undefined8 *)((longlong)plVar9 + 0xc);
          local_40 = *(undefined4 *)((longlong)plVar9 + 0x14);
          if ((plVar8 != (longlong *)0x0) && ((char)plVar8[3] != '\0')) {
            local_48 = *(undefined8 *)((longlong)plVar8 + 0x1c);
            local_40 = *(undefined4 *)((longlong)plVar8 + 0x24);
          }
          FUN_1423982b0(lVar2,&local_38,&local_48,0,0,0);
        }
        plVar4 = plVar4 + 5;
        plVar9 = plVar9 + 5;
      } while (plVar4 != plVar5);
    }
  }
  return;
}



// FUNCTION 1411ff0a0 FUN_1411ff0a0 body=222 status=ok
// SIG undefined FUN_1411ff0a0(void)

void FUN_1411ff0a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar5 = (longlong)*(int *)(param_1 + 0x38) * 0x168 + lVar1;
  if (lVar1 != lVar5) {
    lVar4 = lVar1;
    do {
      if (*(longlong *)(lVar4 + 0x140) == *(longlong *)(param_2 + 0x140)) {
        if (lVar4 != lVar5) {
          iVar3 = (int)((lVar4 - lVar1) / 0x168);
          goto LAB_1411ff0fa;
        }
        break;
      }
      lVar4 = lVar4 + 0x168;
    } while (lVar4 != lVar5);
  }
  iVar3 = -1;
LAB_1411ff0fa:
  plVar2 = (longlong *)FUN_1411e4550(param_1,1);
  if (((plVar2 != (longlong *)0x0) && (-1 < iVar3)) && (iVar3 < *(int *)(param_1 + 0x38))) {
    FUN_141024370((longlong)iVar3 * 0x168 + *(longlong *)(param_1 + 0x30),param_2);
    if (iVar3 == 0) {
      (**(code **)(*plVar2 + 0x5e0))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 1411ff180 FUN_1411ff180 body=311 status=ok
// SIG undefined FUN_1411ff180(void)

void FUN_1411ff180(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong local_38;
  ulonglong local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x2e0);
  if (lVar2 != 0) {
    uVar6 = 0;
    iVar1 = *(int *)(param_1 + 0x380);
    uVar7 = uVar6;
    if (0 < *(int *)(lVar2 + 0x178)) {
      do {
        if (*(longlong *)(uVar7 + *(longlong *)(lVar2 + 0x170)) != 0) {
          local_30 = 0;
          psVar5 = &DAT_1446ed7a4;
          if ((int)uVar6 == iVar1) {
            psVar5 = &DAT_1446ed758;
          }
          local_38 = 0;
          if (*psVar5 != 0) {
            lVar4 = -1;
            do {
              lVar3 = lVar4 + 1;
              lVar4 = lVar4 + 1;
            } while (psVar5[lVar3] != 0);
            uVar8 = (int)lVar4 + 1;
            local_30 = (ulonglong)uVar8;
            if (0 < (int)uVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
            }
            FGenericPlatformString::Memcpy(local_38,psVar5,(longlong)(int)uVar8 * 2);
          }
          FUN_142088cf0(*(undefined8 *)(uVar7 + *(longlong *)(lVar2 + 0x170)));
          if (local_38 != 0) {
            FMemory::Free();
          }
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        uVar7 = uVar7 + 8;
      } while ((int)uVar8 < *(int *)(lVar2 + 0x178));
    }
  }
  return;
}



// FUNCTION 1411ff2c0 FUN_1411ff2c0 body=494 status=ok
// SIG undefined FUN_1411ff2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411ff2c0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  ulonglong uVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  puVar7 = (undefined8 *)FUN_1412c2e90(param_1 + 0x2e0,local_28);
  pfVar1 = (float *)(param_1 + 0x280);
  local_38 = *puVar7;
  local_30 = *(undefined4 *)(puVar7 + 1);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar1) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_48 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar8._12_4_ = 0;
    auVar8._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar3 = (float)DAT_1468766d0;
    fVar4 = DAT_1468766d0._4_4_;
    fVar5 = DAT_1468766d0._8_4_;
    auVar8 = divps(auVar8,_DAT_1468766d0);
    fVar10 = (float)local_48 - (float)(int)auVar8._0_4_ * fVar3;
    fVar11 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar8._4_4_ * fVar4;
    fVar12 = *(float *)(param_1 + 0x200) - (float)(int)auVar8._8_4_ * fVar5;
    fVar10 = (float)(((uint)(fVar10 + fVar3) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar3));
    fVar11 = (float)(((uint)(fVar11 + fVar4) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar4));
    fVar12 = (float)(((uint)(fVar12 + fVar5) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar5));
    uVar9 = ((uint)(fVar12 - fVar5) ^ (uint)fVar12) & -(uint)(fRam00000001468766c8 < fVar12) ^
            (uint)fVar12;
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar9);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar11 - fVar4) ^ (uint)fVar11) & -(uint)(fRam00000001468766c4 < fVar11) ^
                  (uint)fVar11,
                  ((uint)(fVar10 - fVar3) ^ (uint)fVar10) & -(uint)(_DAT_1468766c0 < fVar10) ^
                  (uint)fVar10);
    *(uint *)(param_1 + 0x288) = uVar9;
    puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
    uVar6 = puVar7[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar7;
    *(undefined8 *)(param_1 + 0x278) = uVar6;
  }
  local_48 = *(undefined8 *)(param_1 + 0x270);
  uStack_40 = *(undefined8 *)(param_1 + 0x278);
  uVar13 = 0;
  FUN_142397be0(param_1,&local_38,&local_48,0,0,0);
  puVar7 = (undefined8 *)FUN_1412c2fd0(param_1 + 0x2e0,local_28);
  local_38 = *puVar7;
  local_30 = *(undefined4 *)(puVar7 + 1);
  FUN_142398470(param_1,&local_38,0,0,uVar13 & 0xffffffffffffff00);
  lVar2 = *(longlong *)(param_1 + 0x550);
  if (lVar2 != 0) {
    local_48 = *(undefined8 *)(param_1 + 0x220);
    uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_1 + 0x228));
    if (*(longlong *)(lVar2 + 0x2d0) != 0) {
      FUN_142f15520(*(longlong *)(lVar2 + 0x2d0),&local_48,&local_res8,1);
      FUN_14208ff10(lVar2,local_res8,local_resc);
    }
  }
  return;
}



// FUNCTION 1411ff4b0 FUN_1411ff4b0 body=431 status=ok
// SIG undefined FUN_1411ff4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411ff4b0(longlong param_1,undefined4 param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 local_res8 [8];
  uint uVar15;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x321) != '\0') {
    uVar10 = FRotator::Quaternion(param_1 + 0x324,&local_48);
    uVar11 = FRotator::Quaternion(param_1 + 0x330,local_38);
    uVar15 = *(uint *)(param_1 + 0x374);
    uVar10 = FUN_1411d0b30(local_res8,local_28,uVar11,uVar10,param_1 + 0x378,uVar15,0x447a0000,
                           param_2);
    puVar12 = (undefined8 *)FQuat::Rotator(uVar10,&local_58);
    *(undefined8 *)(param_1 + 0x330) = *puVar12;
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(puVar12 + 1);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      pfVar13 = (float *)FRotator::Quaternion(param_1 + 0x330,local_28);
      pfVar14 = (float *)FRotator::Quaternion(param_1 + 0x33c,local_38);
      fVar2 = *pfVar13;
      fVar3 = pfVar13[1];
      fVar4 = pfVar13[2];
      fVar5 = pfVar13[3];
      lVar1 = *(longlong *)(param_1 + 0x60);
      fVar6 = *pfVar14;
      fVar7 = pfVar14[1];
      fVar8 = pfVar14[2];
      fVar9 = pfVar14[3];
      local_48 = fVar6 * fVar5 * _DAT_146876740 + fVar9 * fVar2 + fVar7 * fVar4 * _DAT_146876730 +
                 fVar8 * fVar3 * _DAT_146876720;
      fStack_44 = fVar6 * fVar4 * fRam0000000146876744 + fVar9 * fVar3 +
                  fVar7 * fVar5 * fRam0000000146876734 + fVar8 * fVar2 * fRam0000000146876724;
      fStack_40 = fVar6 * fVar3 * fRam0000000146876748 + fVar9 * fVar4 +
                  fVar7 * fVar2 * fRam0000000146876738 + fVar8 * fVar5 * fRam0000000146876728;
      fStack_3c = fVar6 * fVar2 * fRam000000014687674c + fVar9 * fVar5 +
                  fVar7 * fVar3 * fRam000000014687673c + fVar8 * fVar4 * fRam000000014687672c;
      local_58 = *(undefined8 *)(lVar1 + 0x1ec);
      local_50 = *(undefined4 *)(lVar1 + 500);
      FUN_142397be0(lVar1,&local_58,&local_48,0,0,uVar15 & 0xffffff00);
    }
  }
  return;
}



// FUNCTION 1411ff660 FUN_1411ff660 body=178 status=ok
// SIG undefined FUN_1411ff660(void)

void FUN_1411ff660(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  if (((*(char *)(param_1 + 0x270) != '\0') &&
      (((lVar3 = *(longlong *)(param_1 + 0x120), lVar3 != 0 || (lVar3 = FUN_1423407b0(), lVar3 != 0)
        ) && (lVar3 = FUN_140c12480(lVar3), lVar3 != 0)))) &&
     (lVar3 = FARSupportInterface::GetXRTrackingSystem(lVar3), lVar3 != 0)) {
    lVar4 = *(longlong *)(lVar3 + 0x58);
    lVar1 = lVar4 + (longlong)*(int *)(lVar3 + 0x60) * 8;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 8) {
      cVar2 = FUN_14058c1e0(lVar4,param_1);
      if (cVar2 != '\0') {
        local_res8 = param_1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar3 + 0x38,&local_res8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411ff720 FUN_1411ff720 body=3795 status=ok
// SIG undefined FUN_1411ff720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1411ff720(longlong param_1,float param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  uint uVar28;
  uint *puVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_3b8 [32];
  float *local_398;
  undefined1 local_390;
  undefined1 local_388;
  undefined8 local_380;
  float local_378;
  undefined8 local_368;
  float local_360;
  float local_358;
  float local_354;
  undefined8 local_350;
  float local_348;
  uint local_340;
  uint uStack_33c;
  uint *puStack_338;
  float local_330;
  float fStack_32c;
  float fStack_328;
  undefined4 uStack_324;
  int local_320;
  int local_31c;
  undefined8 local_318;
  undefined8 local_310;
  float local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  ulonglong local_2f0;
  char *local_2e8;
  float local_2e0;
  longlong local_2d8;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  uint *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  longlong *local_288;
  undefined8 uStack_280;
  uint *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float local_248;
  float local_244;
  float local_240;
  undefined4 local_178;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  float local_cc;
  undefined4 local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  lVar14 = FUN_1411e1240();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar30 = *(longlong *)(DAT_146b33f38 + 0xd0);
  local_318 = lVar30;
  local_2d8 = FUN_1411e5ff0(param_1);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  if (lVar14 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  if (lVar30 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  if (local_2d8 == 0) {
    return;
  }
  local_2e8 = (char *)FUN_1411e13a0(param_1);
  FUN_1411cb2d0(param_1 + 0xa8,local_2e8);
  if (((*(char *)(param_1 + 0x98) == '\x02') || (*(char *)(param_1 + 800) != '\0')) ||
     (*(char *)(param_1 + 0x2a8) != '\0')) {
    uVar18 = *(undefined8 *)(param_1 + 0xa0);
  }
  else {
    uVar18 = *(undefined8 *)(param_1 + 0x90);
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar18;
  if ((*(char *)(param_1 + 0x98) == '\x02') && (*(char *)(lVar14 + 0x18) != '\0')) {
    return;
  }
  if ((*(char *)(param_1 + 0x37c) != '\0') && (*(char *)(param_1 + 0x321) != '\0')) {
    FUN_1411e1990(param_1,&local_310);
    if (((float)local_310 == *(float *)(param_1 + 0x324)) &&
       ((local_310._4_4_ == *(float *)(param_1 + 0x328) &&
        (local_308 == *(float *)(param_1 + 0x32c))))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      FUN_1411faae0(param_1,&local_310);
    }
  }
  local_388 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x475);
  cVar10 = FUN_1411ea9a0(param_1);
  lVar30 = *(longlong *)(param_1 + 0x40);
  uVar20 = 0;
  iVar13 = 0;
  local_2f0 = uVar20;
  if ((cVar10 != '\0') && (lVar30 != 0)) {
    local_2f0 = *(ulonglong *)(lVar30 + 0xa58);
  }
  FUN_142dcfa90(lVar30,&local_320,&local_31c);
  cVar10 = FUN_142dcfc60(*(undefined8 *)(param_1 + 0x40));
  if (cVar10 == '\0') {
LAB_1411ff96b:
    lVar30 = 0x268;
  }
  else if (cVar10 == '\x01') {
    lVar30 = 0x2d8;
  }
  else if (cVar10 == '\x02') {
    lVar30 = 0x348;
  }
  else {
    if (cVar10 != '\x03') goto LAB_1411ff96b;
    lVar30 = 0x3b8;
  }
  if (cVar10 == '\0') {
LAB_1411ff999:
    lVar27 = 0x88;
  }
  else if (cVar10 == '\x01') {
    lVar27 = 0x168;
  }
  else if (cVar10 == '\x02') {
    lVar27 = 0x1d0;
  }
  else {
    if (cVar10 != '\x03') goto LAB_1411ff999;
    lVar27 = 0x238;
  }
  local_310 = (float *)FUN_1411e6da0(lVar14,cVar10);
  fVar32 = *local_310;
  pfVar26 = local_310 + 10;
  fVar33 = local_310[1];
  fVar31 = local_310[5];
  FUN_140c74430(pfVar26,&local_358);
  if (((local_358 == -NAN) ||
      (lVar25 = (longlong)(int)local_358 * 0x78 + *(longlong *)pfVar26, lVar25 == 0)) ||
     (pfVar26 = (float *)(lVar25 + 8), pfVar26 == (float *)0x0)) goto LAB_1411ffb20;
  local_380 = 0;
  lVar15 = FUN_140fe3d00(param_1,0);
  if ((lVar15 != 0) && (plVar16 = *(longlong **)(lVar15 + 0x22a8), plVar16 != (longlong *)0x0)) {
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x460))(plVar16,&local_350);
    local_380 = *plVar16;
    iVar13 = (int)(float)local_380;
  }
  iVar22 = *(int *)(lVar25 + 0x28);
  iVar2 = *(int *)(lVar25 + 0x54);
  iVar11 = (int)((ulonglong)local_380 >> 0x20);
  if ((iVar22 != iVar2) &&
     (iVar12 = *(int *)(((ulonglong)(*(longlong *)(lVar25 + 0x60) != 0) - 1 & lVar25 + 0x58U |
                        *(ulonglong *)(lVar25 + 0x60)) +
                       ((longlong)(iVar11 + iVar13) & (longlong)*(int *)(lVar25 + 0x68) - 1U) * 4),
     iVar12 != -1)) {
    lVar15 = *(longlong *)(lVar25 + 0x20);
    iVar21 = iVar12;
    do {
      if (*(longlong *)(lVar15 + (longlong)iVar21 * 0x28) == local_380) {
        if (iVar21 != -1) {
          if ((iVar22 == iVar2) || (iVar12 == -1)) goto LAB_1411ffc2a;
          goto LAB_1411ffc00;
        }
        break;
      }
      iVar21 = *(int *)(lVar15 + 0x20 + (longlong)iVar21 * 0x28);
    } while (iVar21 != -1);
  }
LAB_1411ffaae:
  fVar32 = *pfVar26;
  fVar33 = pfVar26[1];
  if ((iVar22 != iVar2) &&
     (iVar13 = *(int *)(((ulonglong)(*(longlong *)(lVar25 + 0x60) != 0) - 1 & lVar25 + 0x58U |
                        *(ulonglong *)(lVar25 + 0x60)) +
                       ((longlong)(iVar11 + iVar13) & (longlong)*(int *)(lVar25 + 0x68) - 1U) * 4),
     iVar13 != -1)) {
    lVar15 = *(longlong *)(lVar25 + 0x20);
    iVar22 = iVar13;
    do {
      if (*(longlong *)(lVar15 + (longlong)iVar22 * 0x28) == local_380) {
        if (iVar22 != -1) {
          if ((*(int *)(lVar25 + 0x28) == *(int *)(lVar25 + 0x54)) || (iVar13 == -1))
          goto LAB_1411ffc7b;
          goto LAB_1411ffc50;
        }
        break;
      }
      iVar22 = *(int *)(lVar15 + 0x20 + (longlong)iVar22 * 0x28);
    } while (iVar22 != -1);
  }
  fVar31 = *(float *)(lVar25 + 0x1c);
LAB_1411ffb20:
  if (param_2 <= 0.0) {
    *(float *)(param_1 + 900) = fVar32;
    *(float *)(param_1 + 0x388) = fVar33;
  }
  else {
    local_358 = *(float *)(param_1 + 900) * 1000.0;
    local_354 = *(float *)(param_1 + 0x388) * 1000.0;
    local_398 = (float *)CONCAT44(local_398._4_4_,*(undefined4 *)(lVar14 + 0x410));
    local_380 = CONCAT44(fVar33 * 1000.0,fVar32 * 1000.0);
    pfVar26 = (float *)FMath::Vector2DInterpTo(&local_350,&local_358,&local_380);
    fVar32 = *pfVar26;
    *(float *)(param_1 + 0x388) = pfVar26[1] * 0.001;
    *(float *)(param_1 + 900) = fVar32 * 0.001;
    fVar31 = (float)FMath::FInterpTo();
  }
  *(float *)(param_1 + 0x38c) = fVar31;
  fVar32 = *(float *)(param_1 + 900);
  fVar33 = *(float *)(param_1 + 0x388);
  if (*(char *)(lVar14 + 8) != '\0') {
    fVar32 = fVar32 + *(float *)(local_318 + 4 + lVar30);
    fVar33 = fVar33 + *(float *)(local_318 + 8 + lVar30);
    fVar31 = fVar31 + *(float *)(local_318 + lVar30);
  }
  fVar33 = (float)local_31c * fVar33;
  fVar32 = (float)local_320 * fVar32;
  if ((*(char *)(lVar14 + 8) != '\0') && (lVar25 = FUN_1411e5ff0(param_1), lVar25 != 0)) {
    puVar17 = (undefined8 *)FUN_140e4cd70(lVar25 + 0x26f0,&local_350);
    local_368 = *puVar17;
    local_360 = *(float *)(puVar17 + 1);
    local_398 = (float *)CONCAT71(local_398._1_7_,local_388);
    cVar10 = USceneComponent::K2_AttachTo(*(undefined8 *)(param_1 + 0x40),&local_368,&local_380,1);
    if (cVar10 != '\0') {
      fVar32 = fVar32 + (float)local_380;
      fVar33 = fVar33 + local_380._4_4_;
    }
  }
  fVar35 = DAT_1468b5d98;
  fVar36 = DAT_1468b5d94;
  fVar34 = DAT_1468b5d90;
  local_300 = DAT_1468b5d90;
  local_2fc = DAT_1468b5d94;
  local_2f8 = DAT_1468b5d98;
  plVar16 = (longlong *)FUN_14270bb10(*(undefined8 *)(param_1 + 0x40));
  if ((plVar16 != (longlong *)0x0) && (plVar16[0xe] != 0)) {
    local_178 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    cVar10 = (**(code **)(*plVar16 + 0x2d0))
                       (plVar16,*(undefined8 *)(plVar16[0xe] + 0xb0),0,&local_248);
    if (cVar10 != '\0') {
      FUN_14270dc70(*(undefined8 *)(param_1 + 0x40),&local_358,&local_380);
      fVar35 = local_240;
      fVar36 = local_244;
      fVar34 = local_248;
      local_248 = DAT_1468b5d90;
      local_350 = CONCAT44((float)(int)(float)local_380 * *(float *)((longlong)plVar16 + 0x7c) +
                           fVar33,(float)(int)local_358 * *(float *)(plVar16 + 0xf) + fVar32);
      local_240 = DAT_1468b5d98;
      local_244 = DAT_1468b5d94;
      uVar18 = FUN_1411d6fd0(&local_248,&local_2c8);
      FMatrix::InverseFast(uVar18,&local_288);
      local_398 = &local_300;
      local_390 = 0;
      FUN_14274a0c0(&local_350,&local_118,&local_288,&local_368);
      fVar35 = fVar35 + local_360;
      fVar36 = fVar36 + local_368._4_4_;
      fVar34 = fVar34 + (float)local_368;
    }
  }
  local_350 = 0;
  fVar35 = fVar35 + local_2f8 * fVar31;
  fVar34 = fVar34 + local_300 * fVar31;
  fVar36 = fVar36 + local_2fc * fVar31;
  local_380 = CONCAT44(fVar36,fVar34);
  uVar18 = CONCAT44(fVar36,fVar34);
  fVar32 = fVar34;
  fVar33 = fVar36;
  local_378 = fVar35;
  local_358 = fVar35;
  if (*(longlong *)(lVar14 + 0x10) != 0) {
    plVar16 = *(longlong **)(param_1 + 0x68);
    uVar19 = FUN_142a07000();
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x628))(plVar16,uVar19);
    if ((plVar16 != (longlong *)0x0) &&
       (cVar10 = (**(code **)(*plVar16 + 0x440))(plVar16,*(undefined8 *)(lVar14 + 0x10)),
       cVar10 != '\0')) {
      lVar25 = *(longlong *)(param_1 + 0x60);
      fVar5 = *(float *)(lVar25 + 0x220);
      fVar6 = *(float *)(lVar25 + 0x224);
      fVar7 = *(float *)(lVar25 + 0x228);
      (**(code **)(*plVar16 + 0x428))(plVar16,&local_350,*(undefined8 *)(lVar14 + 0x10));
      fVar32 = (float)local_350;
      fVar33 = (float)((ulonglong)local_350 >> 0x20);
      local_358 = local_348;
      fVar35 = (fVar7 - local_348) + fVar35;
      uVar18 = CONCAT44((fVar6 - fVar33) + fVar36,fVar34 + (fVar5 - fVar32));
      local_380 = uVar18;
      local_378 = fVar35;
    }
  }
  local_398 = (float *)((ulonglong)local_398 & 0xffffffffffffff00);
  local_368 = uVar18;
  local_360 = fVar35;
  FUN_1423990b0(*(undefined8 *)(param_1 + 0x60),&local_368,0,0);
  pcVar9 = local_2e8;
  uVar24 = local_2f0;
  if ((byte)(*local_2e8 - 1U) < 2) {
    fVar36 = 1.0;
    lVar30 = local_318 + lVar30;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar30 + 0x20,&local_380,local_2f0);
    if ((((float)local_380 != -NAN) &&
        (lVar30 = *(longlong *)(lVar30 + 0x20) + (longlong)(int)(float)local_380 * 0x18, lVar30 != 0
        )) && (pfVar26 = (float *)(lVar30 + 8), pfVar26 != (float *)0x0)) {
      fVar36 = *pfVar26;
    }
    fVar34 = *(float *)(lVar27 + lVar14);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar27 + lVar14 + 8,&local_380,uVar24);
    if ((((float)local_380 != -NAN) &&
        (lVar30 = *(longlong *)(lVar27 + lVar14 + 8) + (longlong)(int)(float)local_380 * 0x18,
        lVar30 != 0)) && (pfVar26 = (float *)(lVar30 + 8), pfVar26 != (float *)0x0)) {
      fVar34 = *pfVar26;
    }
    fVar34 = fVar34 * fVar36;
  }
  else {
    fVar34 = *(float *)(lVar27 + lVar14);
  }
  cVar10 = FUN_140d01be0(*(undefined8 *)(param_1 + 0x40));
  if ((cVar10 != '\0') &&
     (cVar10 = FUN_142dcfc60(*(undefined8 *)(param_1 + 0x40)), cVar10 == '\x02')) {
    fVar34 = fVar34 * *(float *)(param_1 + 0x30);
  }
  local_368 = CONCAT44(fVar34,fVar34);
  local_360 = fVar34;
  local_2e0 = fVar34;
  FUN_142399c30(*(undefined8 *)(param_1 + 0x60),&local_368);
  cVar10 = *(char *)(lVar27 + 0x58 + lVar14);
  if (cVar10 != '\0') {
    local_e0 = DAT_1468b5da0;
    local_d4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_d8 = DAT_1468b5da8;
    local_108 = 0;
    local_100 = 1;
    local_cc = DAT_1468b5d98;
    local_c8 = 0x1000100;
    if (cVar10 == '\x01') {
      local_100 = 2;
    }
    else if (cVar10 == '\x02') {
      local_100 = 3;
    }
    puVar17 = (undefined8 *)(lVar14 + 0x5c + lVar27);
    local_f0 = puVar17 != &local_fc;
    if ((bool)local_f0) {
      local_fc = *puVar17;
      local_f4 = *(undefined4 *)(puVar17 + 1);
    }
    local_e8 = *(undefined8 *)(param_1 + 0x88);
    if (*pcVar9 == '\x05') {
      lVar14 = *(longlong *)(pcVar9 + 0x40);
      local_c8 = 0x1010100;
      if (lVar14 != 0) {
        lVar30 = FUN_1412fb190();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar30 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar30 + 0x90) * 8) != lVar30 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          local_e0 = *(undefined8 *)(lVar14 + 0x1b0);
          local_d8 = *(undefined4 *)(lVar14 + 0x1b8);
        }
      }
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x168);
    if (lVar14 != 0) {
      lVar30 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar30 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar30 + 0x90) * 8) != lVar30 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        lVar30 = *(longlong *)(param_1 + 0x68);
        plVar16 = (longlong *)(lVar30 + 0x2b0);
        local_340 = 0;
        uVar3 = *(uint *)(lVar30 + 0x2d8);
        puVar1 = (uint *)(lVar30 + 0x2c0);
        uStack_33c = 1;
        fStack_32c = 0.0;
        fStack_328 = 0.0;
        if (uVar3 != 0) {
          puVar29 = *(uint **)(lVar30 + 0x2d0);
          if (*(uint **)(lVar30 + 0x2d0) == (uint *)0x0) {
            puVar29 = puVar1;
          }
          uVar4 = *puVar29;
          uVar24 = uVar20;
          while (uVar4 == 0) {
            iVar13 = (int)uVar20;
            fStack_328 = (float)((int)uVar24 + 0x20);
            uVar24 = (ulonglong)(uint)fStack_328;
            local_340 = iVar13 + 1;
            uVar20 = (ulonglong)local_340;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
            goto LAB_14120034f;
            uVar4 = puVar29[(longlong)iVar13 + 1];
          }
          uStack_33c = uVar4 - 1 & uVar4 ^ uVar4;
          iVar13 = 0x1f;
          if (uStack_33c != 0) {
            for (; uStack_33c >> iVar13 == 0; iVar13 = iVar13 + -1) {
            }
          }
          if (uStack_33c == 0) {
            iVar13 = 0x20;
          }
          else {
            iVar13 = 0x1f - iVar13;
          }
          fStack_32c = (float)(((int)fStack_328 - iVar13) + 0x1f);
          if ((int)uVar3 < (int)fStack_32c) {
LAB_14120034f:
            fStack_32c = (float)uVar3;
          }
        }
        uVar4 = *(uint *)(lVar30 + 0x2d8);
        uStack_2b0 = CONCAT44(fStack_32c,0xffffffff);
        local_2a8 = CONCAT44(uStack_324,fStack_328);
        uStack_2c0 = CONCAT44(uStack_33c,local_340);
        local_330 = (float)(-1 << ((byte)uVar4 & 0x1f));
        uVar28 = uVar4 & 0xffffffe0;
        puStack_338 = puVar1;
        fStack_32c = (float)uVar4;
        local_2c8 = plVar16;
        local_2b8 = puVar1;
        local_288 = plVar16;
        uStack_280 = uStack_2c0;
        puStack_278 = puVar1;
        uStack_270 = uStack_2b0;
        uStack_268 = local_2a8;
        if (uVar4 != uVar3) {
          puVar29 = *(uint **)(lVar30 + 0x2d0);
          if (*(uint **)(lVar30 + 0x2d0) == (uint *)0x0) {
            puVar29 = puVar1;
          }
          uVar23 = puVar29[(int)uVar4 >> 5] & (uint)local_330;
          iVar13 = (int)uVar4 >> 5;
          while (uVar23 == 0) {
            uVar28 = uVar28 + 0x20;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
            goto LAB_141200425;
            uVar23 = puVar29[(longlong)iVar13 + 1];
            local_330 = -NAN;
            iVar13 = iVar13 + 1;
          }
          uVar23 = uVar23 - 1 & uVar23 ^ uVar23;
          iVar13 = 0x1f;
          if (uVar23 != 0) {
            for (; uVar23 >> iVar13 == 0; iVar13 = iVar13 + -1) {
            }
          }
          if (uVar23 == 0) {
            iVar13 = 0x20;
          }
          else {
            iVar13 = 0x1f - iVar13;
          }
          fStack_32c = (float)((uVar28 - iVar13) + 0x1f);
          uVar4 = (uint)fStack_32c;
          if ((int)uVar3 < (int)fStack_32c) {
LAB_141200425:
            fStack_32c = (float)uVar3;
            uVar4 = uVar3;
          }
        }
        while( true ) {
          if ((uStack_2b0._4_4_ == uVar4) && (local_2b8 == puVar1)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((bVar8) && (local_2c8 == plVar16)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (!bVar8) break;
          lVar30 = *(longlong *)(*local_2c8 + (longlong)(int)uStack_2b0._4_4_ * 0x10);
          if (lVar30 != 0) {
            lVar27 = FUN_1429bed90();
            if ((*(int *)(*(longlong *)(lVar30 + 0x10) + 0x90) < *(int *)(lVar27 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar27 + 0x90) * 8) != lVar27 + 0x88)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              *(byte *)(lVar30 + 0x24c) = *(byte *)(lVar30 + 0x24c) | 0x10;
            }
          }
          uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0 & ~uStack_2c0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2c0);
        }
        FUN_142fe6850(lVar14,*(undefined8 *)(param_1 + 0x60),&local_108);
      }
    }
  }
  pfVar26 = local_310;
  puStack_338 = (uint *)0x0;
  local_330 = (float)DAT_1468b5d88;
  fStack_32c = DAT_1468b5d88._4_4_;
  fStack_328 = 0.0;
  local_340 = local_340 & 0xffffff00;
  if (*(char *)(local_310 + 6) != '\0') {
    local_360 = local_358;
    local_398 = (float *)CONCAT71(local_398._1_7_,local_388);
    local_368 = CONCAT44(fVar33,fVar32);
    cVar10 = USceneComponent::K2_AttachTo(*(undefined8 *)(param_1 + 0x40),&local_368,&local_318,1);
    if (cVar10 != '\0') {
      fStack_328 = fVar31 + pfVar26[9];
      local_340 = CONCAT31(local_340._1_3_,2);
      local_330 = (float)local_318 / (float)local_320 + pfVar26[7];
      fStack_32c = local_318._4_4_ / (float)local_31c + pfVar26[8];
    }
    FUN_140e5e370(local_2d8 + 0x26f0,&local_340);
  }
  return;
LAB_1411ffc00:
  uVar24 = lVar15 + (longlong)iVar12 * 0x28;
  if (*(longlong *)(lVar15 + (longlong)iVar12 * 0x28) != local_380) goto code_r0x0001411ffc11;
  if (iVar12 == -1) {
LAB_1411ffc2a:
    uVar24 = uVar20;
  }
  pfVar26 = (float *)(uVar24 + 8);
  goto LAB_1411ffaae;
code_r0x0001411ffc11:
  iVar12 = *(int *)(uVar24 + 0x20);
  if (iVar12 == -1) goto code_r0x0001411ffc19;
  goto LAB_1411ffc00;
code_r0x0001411ffc19:
  pfVar26 = (float *)&DAT_00000008;
  goto LAB_1411ffaae;
LAB_1411ffc50:
  uVar24 = lVar15 + (longlong)iVar13 * 0x28;
  if (*(longlong *)(lVar15 + (longlong)iVar13 * 0x28) != local_380) goto code_r0x0001411ffc61;
  if (iVar13 == -1) {
LAB_1411ffc7b:
    uVar24 = uVar20;
  }
  fVar31 = *(float *)(uVar24 + 0x1c);
  goto LAB_1411ffb20;
code_r0x0001411ffc61:
  iVar13 = *(int *)(uVar24 + 0x20);
  fVar31 = fRam000000000000001c;
  if (iVar13 == -1) goto LAB_1411ffb20;
  goto LAB_1411ffc50;
}



// FUNCTION 141200600 FUN_141200600 body=417 status=ok
// SIG undefined FUN_141200600(void)

void FUN_141200600(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)param_2[1];
  iVar8 = 0;
  if (0 < iVar7) {
    piVar4 = (int *)(param_1 + 0x11c);
    lVar6 = 0;
    do {
      if (3 < lVar6) break;
      piVar3 = (int *)((longlong)piVar4 + *param_2 + (-0x11c - param_1));
      piVar1 = piVar4 + -3;
      if (piVar1 != piVar3) {
        iVar7 = piVar3[2];
        pvVar2 = *(void **)piVar3;
        piVar4[-1] = iVar7;
        if ((iVar7 == 0) && (*piVar4 == 0)) {
          *piVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar1,iVar7);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar2,(longlong)iVar7 * 2);
        }
      }
      piVar1 = piVar4 + 0xd;
      piVar3 = (int *)((longlong)piVar4 + *param_3 + (-0x11c - param_1));
      if (piVar1 != piVar3) {
        iVar7 = piVar3[2];
        pvVar2 = *(void **)piVar3;
        piVar4[0xf] = iVar7;
        if ((iVar7 == 0) && (piVar4[0x10] == 0)) {
          piVar4[0x10] = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar1,iVar7);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar2,(longlong)iVar7 * 2);
        }
      }
      iVar7 = (int)param_2[1];
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar8 < iVar7);
  }
  plVar5 = (longlong *)*param_2;
  if (iVar7 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar5 = (longlong *)*param_2;
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  iVar7 = (int)param_3[1];
  plVar5 = (longlong *)*param_3;
  if (iVar7 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar5 = (longlong *)*param_3;
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar5);
  return;
}



// FUNCTION 1412007b0 FUN_1412007b0 body=715 status=ok
// SIG undefined FUN_1412007b0(void)

void FUN_1412007b0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  
  if (*(uint *)(param_1 + 0x58) == 0) {
    return;
  }
  uVar13 = ~param_2;
  *(uint *)(param_1 + 0x58) = uVar13 & *(uint *)(param_1 + 0x58);
  if ((DAT_146ac3ac6 != '\0') && (cVar6 = IsInRenderingThread(), cVar6 != '\0')) {
    FBaseGraphTask::GetSmallTaskAllocator();
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & uVar13;
    goto LAB_1412008ba;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      bVar4 = false;
      if (DVar7 == DAT_1468c21c0) goto LAB_141200839;
    }
    else {
LAB_141200839:
      bVar4 = true;
    }
    if (bVar4) {
      FBaseGraphTask::GetSmallTaskAllocator();
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & uVar13;
      goto LAB_1412008ba;
    }
  }
  plVar8 = (longlong *)FUN_1411d7d50(local_58,0,0xff);
  uStack_60 = (undefined4)param_1;
  uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar9 = *plVar8;
  *(uint *)(lVar9 + 0x10) = param_2;
  *(undefined4 *)(lVar9 + 0x14) = uStack_64;
  *(undefined4 *)(lVar9 + 0x18) = uStack_60;
  *(undefined4 *)(lVar9 + 0x1c) = uStack_5c;
  lVar9 = *plVar8;
  lVar5 = plVar8[2];
  lVar11 = plVar8[1];
  lVar3 = *(longlong *)(lVar9 + 0x28);
  piVar1 = (int *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar9,lVar11,(int)lVar5,1);
  if (lVar3 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
LAB_1412008ba:
  if (*(int *)(param_1 + 0x58) == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 200));
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xc0);
    uVar15 = 0;
    if (cVar6 != '\0') {
      lVar9 = FWeakObjectPtr::Get(param_1 + 0xc0);
      iVar2 = *(int *)(lVar9 + 0xc);
      uVar10 = uVar15;
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar12 = iVar2 >> 0x1f & 0xffff;
        uVar13 = iVar2 + uVar12;
        uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar13 >> 0x10) * 8) +
                 (longlong)(int)((uVar13 & 0xffff) - uVar12) * 0x18;
      }
      *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) & 0xbfffffff;
      FWeakObjectPtr::operator=(&local_res20,0);
      *(undefined4 *)(param_1 + 0xc0) = local_res20;
      *(undefined4 *)(param_1 + 0xc4) = local_res24;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 200));
    lVar9 = FWeakObjectPtr::Get(param_1 + 4);
    if (lVar9 != 0) {
      lVar11 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_140bf7970(lVar9);
      }
    }
    puVar14 = (uint *)(param_1 + 0x118);
    lVar9 = 4;
    do {
      if (*(undefined **)(puVar14 + -2) != &DAT_1446eb5cc) {
        *puVar14 = 0;
        uVar13 = 0;
        uVar10 = uVar15;
        if (puVar14[1] != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar14 + -2);
          uVar10 = (ulonglong)*puVar14;
          uVar13 = puVar14[1];
        }
        if ((int)uVar13 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar14 + -2);
        }
      }
      if (*(undefined **)(puVar14 + 0xe) != &DAT_1446eb654) {
        puVar14[0x10] = 0;
        uVar13 = 0;
        uVar10 = uVar15;
        if (puVar14[0x11] != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar14 + 0xe);
          uVar10 = (ulonglong)puVar14[0x10];
          uVar13 = puVar14[0x11];
        }
        if ((int)uVar13 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar14 + 0xe);
        }
      }
      puVar14 = puVar14 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 141200a80 FUN_141200a80 body=585 status=ok
// SIG undefined FUN_141200a80(void)

undefined8 FUN_141200a80(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  
  if ((*(uint *)(param_1 + 0x58) & param_2) != 0) {
    return 1;
  }
  cVar4 = FUN_1411fb650();
  if (cVar4 == '\0') {
    return 0;
  }
  piVar10 = (int *)(param_1 + 0x118);
  lVar11 = 4;
  do {
    if (*(undefined **)(piVar10 + -2) != &DAT_1446eb2bc) {
      *piVar10 = 0;
      iVar5 = 0;
      iVar9 = 0;
      if (piVar10[1] != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar10 + -2);
        iVar9 = *piVar10;
        iVar5 = piVar10[1];
      }
      if (iVar5 < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(piVar10 + -2);
      }
    }
    if (*(undefined **)(piVar10 + 0xe) != &DAT_1446eb4ec) {
      piVar10[0x10] = 0;
      iVar5 = 0;
      iVar9 = 0;
      if (piVar10[0x11] != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar10 + 0xe);
        iVar9 = piVar10[0x10];
        iVar5 = piVar10[0x11];
      }
      if (iVar5 < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(piVar10 + 0xe);
      }
    }
    piVar10 = piVar10 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar11 = FWeakObjectPtr::Get(param_1 + 4);
  if (lVar11 == 0) {
    return 0;
  }
  lVar7 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x61) = 0;
  FUN_140bf7a60(lVar11,param_1 + 0x110,param_1 + 0x150,param_2 == 1);
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | param_2;
  if ((DAT_146ac3ac6 == '\0') || (cVar4 = IsInRenderingThread(), cVar4 == '\0')) {
    if (DAT_146ac3ac5 == '\0') {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar6 = GetCurrentThreadId();
        bVar2 = false;
        if (DVar6 == DAT_1468c21c0) goto LAB_141200c28;
      }
      else {
LAB_141200c28:
        bVar2 = true;
      }
      if (bVar2) goto LAB_141200c2e;
    }
    plVar8 = (longlong *)FUN_1411d7ea0(local_58,0,0xff);
    uStack_60 = (undefined4)param_1;
    uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
    lVar11 = *plVar8;
    *(uint *)(lVar11 + 0x10) = param_2;
    *(undefined4 *)(lVar11 + 0x14) = uStack_64;
    *(undefined4 *)(lVar11 + 0x18) = uStack_60;
    *(undefined4 *)(lVar11 + 0x1c) = uStack_5c;
    lVar11 = *plVar8;
    lVar3 = plVar8[2];
    lVar7 = plVar8[1];
    lVar1 = *(longlong *)(lVar11 + 0x28);
    piVar10 = (int *)(lVar1 + 0x48);
    if (lVar1 != 0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    FUN_1409421c0(lVar11,lVar7,(int)lVar3,1);
    if (lVar1 != 0) {
      LOCK();
      iVar9 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle(lVar1);
        return 1;
      }
    }
  }
  else {
LAB_141200c2e:
    FBaseGraphTask::GetSmallTaskAllocator();
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | param_2;
  }
  return 1;
}



// FUNCTION 141200cd0 FUN_141200cd0 body=159 status=ok
// SIG undefined FUN_141200cd0(void)

bool FUN_141200cd0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *param_2;
  pfVar2 = *(float **)*param_1;
  fVar4 = *(float *)(lVar1 + 0x220) - *pfVar2;
  fVar6 = *(float *)(lVar1 + 0x224) - pfVar2[1];
  lVar3 = *param_3;
  fVar5 = *(float *)(lVar1 + 0x228) - pfVar2[2];
  fVar7 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar4 = *(float *)(lVar3 + 0x220) - *pfVar2;
  fVar6 = *(float *)(lVar3 + 0x224) - pfVar2[1];
  fVar5 = *(float *)(lVar3 + 0x228) - pfVar2[2];
  fVar4 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  if (*(char *)((undefined8 *)*param_1)[1] != '\0') {
    return fVar7 < fVar4;
  }
  return fVar4 < fVar7;
}



// FUNCTION 141200d70 FUN_141200d70 body=169 status=ok
// SIG undefined FUN_141200d70(void)

ulonglong FUN_141200d70(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (plVar2 != plVar2 + (longlong)(int)uVar1 * 4) {
    plVar3 = plVar2;
    do {
      if (((*plVar3 == *param_2) && (*(float *)(param_2 + 1) == *(float *)(plVar3 + 1))) &&
         (*(char *)((longlong)plVar3 + 0xc) == *(char *)((longlong)param_2 + 0xc))) {
        uVar4 = (longlong)plVar3 - (longlong)plVar2 >> 5;
        if ((int)uVar4 != -1) {
          return uVar4 & 0xffffffff;
        }
        break;
      }
      plVar3 = plVar3 + 4;
    } while (plVar3 != plVar2 + (longlong)(int)uVar1 * 4);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,uVar1);
  }
  FUN_141207c00(*param_1 + (longlong)(int)uVar1 * 0x20,param_2);
  return (ulonglong)uVar1;
}



// FUNCTION 141200e20 FUN_141200e20 body=203 status=ok
// SIG undefined FUN_141200e20(void)

void FUN_141200e20(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_2;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3f148;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 141200ef0 FUN_141200ef0 body=834 status=ok
// SIG undefined FUN_141200ef0(void)

int * FUN_141200ef0(ulonglong param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  bool bVar14;
  
  iVar13 = -1;
  if (*(int *)(param_1 + 300) == 0) {
    iVar10 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar10 + 1;
    if (*(int *)(param_1 + 0x10c) < iVar10 + 1) {
      TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
      ResizeGrow(param_1,iVar10);
    }
    FUN_1406dc2a0(param_1 + 0x110,0,1);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x128);
    uVar7 = *(ulonglong *)(param_1 + 0x100);
    if (*(ulonglong *)(param_1 + 0x100) == 0) {
      uVar7 = param_1;
    }
    iVar4 = *(int *)(uVar7 + 4 + (longlong)iVar10 * 0x10);
    iVar3 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 0x128) = iVar4;
    *(int *)(param_1 + 300) = iVar3;
    if (iVar3 != 0) {
      uVar7 = *(ulonglong *)(param_1 + 0x100);
      if (*(ulonglong *)(param_1 + 0x100) == 0) {
        uVar7 = param_1;
      }
      *(undefined4 *)(uVar7 + (longlong)iVar4 * 0x10) = 0xffffffff;
    }
  }
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar6 = param_1 + 0x110;
  }
  puVar12 = (uint *)(lVar6 + lVar5);
  *puVar12 = *puVar12 | 1 << ((byte)iVar10 & 0x1f);
  uVar7 = *(ulonglong *)(param_1 + 0x100);
  if (*(ulonglong *)(param_1 + 0x100) == 0) {
    uVar7 = param_1;
  }
  puVar12 = (uint *)(uVar7 + (longlong)iVar10 * 0x10);
  bVar14 = false;
  *puVar12 = *(uint *)*param_3;
  puVar12[1] = 0;
  puVar12[2] = 0xffffffff;
  iVar4 = *(int *)(param_1 + 0x108) - *(int *)(param_1 + 300);
  if (iVar4 != 1) {
    iVar3 = iVar13;
    if (iVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x150);
      if (*(longlong *)(param_1 + 0x150) == 0) {
        lVar6 = param_1 + 0x130;
      }
      iVar9 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)*puVar12)
                               * 4);
      if (iVar9 != -1) {
        uVar7 = *(ulonglong *)(param_1 + 0x100);
        do {
          iVar3 = iVar9;
          if (*(uint *)(((longlong)(int)-(uint)(uVar7 == 0) & param_1 | uVar7) +
                       (longlong)iVar9 * 0x10) == *puVar12) break;
          iVar9 = *(int *)(((longlong)(int)-(uint)(uVar7 == 0) & param_1 | uVar7) + 8 +
                          (longlong)iVar9 * 0x10);
          iVar3 = iVar13;
        } while (iVar9 != -1);
      }
    }
    bVar14 = iVar3 != -1;
    if (bVar14) {
      uVar7 = *(ulonglong *)(param_1 + 0x100);
      if (*(ulonglong *)(param_1 + 0x100) == 0) {
        uVar7 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(uVar7 + (longlong)iVar3 * 0x10),puVar12,8);
      bVar1 = (byte)iVar10 & 0x1f;
      if (*(int *)(param_1 + 300) != 0) {
        uVar7 = *(ulonglong *)(param_1 + 0x100);
        if (*(ulonglong *)(param_1 + 0x100) == 0) {
          uVar7 = param_1;
        }
        *(int *)(uVar7 + (longlong)*(int *)(param_1 + 0x128) * 0x10) = iVar10;
      }
      uVar7 = *(ulonglong *)(param_1 + 0x100);
      if (*(ulonglong *)(param_1 + 0x100) == 0) {
        uVar7 = param_1;
      }
      puVar8 = (undefined4 *)(uVar7 + (longlong)iVar10 * 0x10);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)(param_1 + 300)) {
        iVar13 = *(int *)(param_1 + 0x128);
      }
      puVar8[1] = iVar13;
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      *(int *)(param_1 + 0x128) = iVar10;
      lVar6 = *(longlong *)(param_1 + 0x118);
      *param_2 = iVar3;
      if (lVar6 == 0) {
        lVar6 = param_1 + 0x110;
      }
      puVar12 = (uint *)(lVar6 + lVar5);
      *puVar12 = *puVar12 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_141201208;
    }
  }
  cVar2 = FUN_141215b20(param_1,iVar4,0);
  if (cVar2 == '\0') {
    uVar11 = *(int *)(param_1 + 0x158) - 1U & *puVar12;
    puVar12[3] = uVar11;
    lVar6 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar6 = param_1 + 0x130;
    }
    puVar12[2] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar11
                                   ) * 4);
    lVar6 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar6 = param_1 + 0x130;
    }
    *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141201208:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 141201240 FUN_141201240 body=824 status=ok
// SIG undefined FUN_141201240(void)

uint * FUN_141201240(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  void *_Dst;
  ulonglong *_Src;
  bool bVar16;
  uint local_res8 [2];
  uint *local_res10;
  
  iVar11 = 1;
  uVar15 = 0xffffffff;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  puVar3 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)(int)uVar10 * 0x20 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = 0;
  _Src[1] = *puVar3;
  *puVar3 = 0;
  *(int *)(_Src + 2) = (int)puVar3[1];
  *(undefined4 *)((longlong)_Src + 0x14) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar9 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
        uVar10 = *local_res10;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      bVar4 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar10;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar10 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar6 = (longlong *)param_1[4];
      *local_res10 = uVar5;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141201549;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar11;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar14 = -(uVar5 + iVar11) ^ uVar5 >> 0xd;
    uVar13 = (iVar11 - uVar5) - uVar14 ^ uVar14 >> 0xc;
    uVar5 = (uVar5 - uVar13) - uVar14 ^ uVar13 << 0x10;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar5 >> 5;
    uVar13 = (uVar13 - uVar5) - uVar14 ^ uVar14 >> 3;
    uVar5 = (uVar5 - uVar13) - uVar14 ^ uVar13 << 10;
    uVar13 = ((uVar14 - uVar5) - uVar13 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar10;
    local_res10 = param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res10 = param_2;
  }
LAB_141201549:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return local_res10;
}



// FUNCTION 141201580 FUN_141201580 body=749 status=ok
// SIG undefined FUN_141201580(void)

int * FUN_141201580(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  longlong *_Src;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  
  iVar9 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)((longlong)iVar13 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar13;
  lVar7 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  bVar18 = false;
  puVar16 = (uint *)((longlong)plVar10 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)iVar13 & 0x1f);
  plVar10 = (longlong *)param_3[1];
  lVar8 = (longlong)iVar13 * 0x68;
  _Src = (longlong *)(*param_1 + lVar8);
  lVar1 = *(longlong *)*param_3;
  *_Src = lVar1;
  lVar5 = plVar10[1];
  _Src[1] = *plVar10;
  _Src[2] = lVar5;
  lVar5 = plVar10[3];
  _Src[3] = plVar10[2];
  _Src[4] = lVar5;
  lVar5 = plVar10[5];
  _Src[5] = plVar10[4];
  _Src[6] = lVar5;
  lVar5 = plVar10[7];
  _Src[7] = plVar10[6];
  _Src[8] = lVar5;
  uVar3 = *(undefined4 *)((longlong)plVar10 + 0x44);
  lVar5 = plVar10[9];
  uVar4 = *(undefined4 *)((longlong)plVar10 + 0x4c);
  *(int *)(_Src + 9) = (int)plVar10[8];
  *(undefined4 *)((longlong)_Src + 0x4c) = uVar3;
  *(int *)(_Src + 10) = (int)lVar5;
  *(undefined4 *)((longlong)_Src + 0x54) = uVar4;
  _Src[0xb] = plVar10[10];
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar12 = iVar17;
    if (uVar15 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar10 +
                       ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        do {
          iVar12 = iVar11;
          if (*(longlong *)((longlong)iVar11 * 0x68 + *param_1) == lVar1) break;
          iVar11 = *(int *)((longlong)iVar11 * 0x68 + 0x60 + *param_1);
          iVar12 = iVar17;
        } while (iVar11 != -1);
      }
    }
    bVar18 = iVar12 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar12 * 0x68 + *param_1),_Src,0x60);
      bVar2 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar13;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar8 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar8 + 4 + lVar1) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar10 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141201848;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar17;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar17;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 100) = uVar15;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141201848:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 141201870 FUN_141201870 body=362 status=ok
// SIG undefined FUN_141201870(void)

undefined4 *
FUN_141201870(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  longlong local_38;
  
  puVar6 = (undefined4 *)*param_1;
  puVar1 = puVar6 + (longlong)*(int *)(param_1 + 1) * 10;
  do {
    if (puVar6 == puVar1) {
      return (undefined4 *)0x0;
    }
    local_80 = 0;
    local_58 = *(undefined8 *)(puVar6 + 4);
    local_78 = 0;
    local_88 = 0;
    FString::FString(local_50,puVar6 + 6,param_3,param_4,*puVar6,puVar6[2]);
    FSoftObjectPath::operator=(&local_88,&local_58);
    local_70 = local_88;
    FString::FString(local_68,&local_80);
    puVar5 = *(undefined8 **)(param_2 + 0x540);
    puVar2 = puVar5 + *(int *)(param_2 + 0x548);
    for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      uVar4 = FSoftObjectPath::FSoftObjectPath(local_40,*puVar5);
      cVar3 = FSoftObjectPath::operator==(&local_70,uVar4);
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (cVar3 != '\0') {
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (local_80 == 0) {
          return puVar6;
        }
        FMemory::Free();
        return puVar6;
      }
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    puVar6 = puVar6 + 10;
  } while( true );
}



// FUNCTION 1412019e0 FUN_1412019e0 body=130 status=ok
// SIG undefined FUN_1412019e0(void)

longlong FUN_1412019e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar1 = lVar3 + (longlong)(int)param_1[1] * 0x28;
  while( true ) {
    if (lVar3 == lVar1) {
      if (*(longlong *)(param_2 + 0x18) != 0) {
        FMemory::Free();
      }
      return 0;
    }
    cVar2 = FSoftObjectPath::operator==(param_2 + 0x10,lVar3 + 0x10);
    if (cVar2 != '\0') break;
    lVar3 = lVar3 + 0x28;
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return lVar3;
  }
  FMemory::Free();
  return lVar3;
}



// FUNCTION 141201a70 FUN_141201a70 body=1020 status=ok
// SIG undefined FUN_141201a70(void)

void FUN_141201a70(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141201b6d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_141201b6d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141201c45;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_141201c45:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = UUGPauseScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_141201a70(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 141201e70 FUN_141201e70 body=1139 status=ok
// SIG undefined FUN_141201e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141201e70(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_141201f9f;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_141201f9f:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14120205f;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
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
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_14120205f:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1414e0f70();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_141201e70(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1412022f0 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_> body=349 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

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
joined_r0x00014120231a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)((longlong)param_1 + (longlong)iVar7 * 0x10 + 4) <
              *(int *)((longlong)param_1 + (longlong)iVar6 * 0x10 + 0x24)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + (longlong)iVar5 * 2;
        puVar9 = param_1 + (longlong)iVar7 * 2;
        if (*(int *)((longlong)puVar9 + 4) < *(int *)((longlong)puVar10 + 4)) {
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
          goto joined_r0x00014120231a;
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
            if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0x10 + 4) <
                *(int *)((longlong)param_1 + (longlong)iVar1 * 0x10 + 0x24)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          puVar11 = param_1 + (longlong)iVar5 * 2;
          puVar10 = param_1 + (longlong)iVar6 * 2;
          if (*(int *)((longlong)puVar11 + 4) <= *(int *)((longlong)puVar10 + 4)) break;
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



// FUNCTION 141202450 FUN_141202450 body=433 status=ok
// SIG undefined FUN_141202450(void)

void FUN_141202450(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar9 = iVar4 * 2 + 1;
    iVar7 = iVar9;
    iVar10 = iVar4;
joined_r0x00014120247a:
    do {
      if (iVar9 < param_2) {
        iVar5 = iVar4 * 2 + 1;
        iVar9 = iVar4 * 2 + 2;
        iVar6 = iVar5;
        if ((iVar9 < param_2) &&
           (iVar6 = iVar9,
           *(float *)(param_1 + iVar9) + *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 4) <
           *(float *)(param_1 + iVar5) + *(float *)((longlong)param_1 + (longlong)iVar5 * 8 + 4))) {
          iVar6 = iVar5;
        }
        puVar8 = param_1 + iVar4;
        puVar1 = param_1 + iVar6;
        if (*(float *)(param_1 + iVar4) + *(float *)((longlong)puVar8 + 4) <
            *(float *)(param_1 + iVar6) + *(float *)((longlong)puVar1 + 4)) {
          if (puVar8 != puVar1) {
            uVar3 = *puVar8;
            *puVar8 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar9 = iVar6 * 2 + 1;
          iVar4 = iVar6;
          goto joined_r0x00014120247a;
        }
      }
      iVar9 = iVar7 + -2;
      iVar4 = iVar10 + -1;
      iVar7 = iVar9;
      iVar10 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar8 = param_1 + param_2;
    do {
      if (param_1 != puVar8) {
        uVar3 = *param_1;
        *param_1 = *puVar8;
        *puVar8 = uVar3;
      }
      iVar4 = 0;
      if (1 < param_2) {
        do {
          iVar9 = iVar4 * 2 + 1;
          iVar10 = iVar4 * 2 + 2;
          iVar7 = iVar9;
          if ((iVar10 < param_2) &&
             (iVar7 = iVar10,
             *(float *)(param_1 + iVar10) + *(float *)((longlong)param_1 + (longlong)iVar10 * 8 + 4)
             < *(float *)(param_1 + iVar9) + *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 4)
             )) {
            iVar7 = iVar9;
          }
          puVar1 = param_1 + iVar4;
          puVar2 = param_1 + iVar7;
          if (*(float *)(param_1 + iVar7) + *(float *)((longlong)puVar2 + 4) <=
              *(float *)(param_1 + iVar4) + *(float *)((longlong)puVar1 + 4)) break;
          if (puVar1 != puVar2) {
            uVar3 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar3;
          }
          iVar4 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar8 = puVar8 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141202610 FUN_141202610 body=323 status=ok
// SIG undefined FUN_141202610(void)

void FUN_141202610(undefined2 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x00014120263a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(byte *)(param_1 + (longlong)iVar6 + 2) < *(byte *)(param_1 + iVar7)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        pbVar1 = (byte *)(param_1 + iVar7);
        pbVar2 = (byte *)(param_1 + iVar5);
        if (*pbVar2 < *pbVar1) {
          if (pbVar2 != pbVar1) {
            uVar3 = *(undefined2 *)pbVar2;
            *(undefined2 *)pbVar2 = *(undefined2 *)pbVar1;
            *(undefined2 *)pbVar1 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x00014120263a;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(byte *)(param_1 + (longlong)iVar4 + 2) < *(byte *)(param_1 + iVar6)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          pbVar1 = (byte *)(param_1 + iVar6);
          pbVar2 = (byte *)(param_1 + iVar5);
          if (*pbVar1 <= *pbVar2) break;
          if (pbVar2 != pbVar1) {
            uVar3 = *(undefined2 *)pbVar2;
            *(undefined2 *)pbVar2 = *(undefined2 *)pbVar1;
            *(undefined2 *)pbVar1 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141202760 FUN_141202760 body=143 status=ok
// SIG undefined FUN_141202760(void)

longlong FUN_141202760(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = AReplicationGraphDebugActor::GetPrivateStaticClass();
  lVar3 = FUN_142ebcee0(param_1,param_2,uVar2,param_3);
  if (lVar3 != 0) {
    lVar4 = AReplicationGraphDebugActor::GetPrivateStaticClass();
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1412027f0 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_> body=637 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
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
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_318 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar11 = &local_328;
    do {
      puVar16 = (undefined8 *)*plVar11;
      puVar14 = (undefined8 *)plVar11[1];
      lVar2 = plVar11[2];
      local_338._0_4_ = (int)lVar2;
      lVar9 = ((longlong)puVar14 - (longlong)puVar16 >> 4) + 1;
      puVar15 = puVar16;
      if ((int)local_338 != 0) {
LAB_1412028c0:
        if (8 < lVar9) {
          puVar16 = puVar15 + (lVar9 / 2) * 2;
          if (puVar16 != puVar15) {
            uVar3 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar4 = *(undefined4 *)(puVar15 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar6 = *puVar16;
            uVar7 = puVar16[1];
            *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar16 + 4) = uVar3;
            *(undefined4 *)(puVar16 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uVar5;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
          }
          puVar12 = puVar14 + 2;
          puVar16 = puVar15;
LAB_1412028f6:
          puVar10 = puVar16;
          puVar16 = puVar10 + 2;
          if (puVar16 <= puVar14) goto code_r0x0001412028ff;
          goto LAB_141202910;
        }
        for (; puVar16 = puVar15, puVar12 = puVar15, puVar15 < puVar14; puVar14 = puVar14 + -2) {
          while (puVar10 = puVar16, puVar16 = puVar12 + 2, puVar16 <= puVar14) {
            piVar1 = (int *)((longlong)puVar12 + 0x14);
            puVar12 = puVar16;
            if (*(int *)((longlong)puVar10 + 4) <= *piVar1) {
              puVar16 = puVar10;
            }
          }
          if (puVar10 != puVar14) {
            uVar8 = puVar14[1];
            uVar6 = *puVar10;
            uVar7 = puVar10[1];
            *puVar10 = *puVar14;
            puVar10[1] = uVar8;
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
          }
        }
        goto LAB_1412029db;
      }
LAB_1412029cc:
      local_338 = lVar2;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
                (puVar16,lVar9,param_3,param_4);
LAB_1412029db:
      plVar11 = plVar11 + -3;
    } while (&local_328 <= plVar11);
  }
  return;
code_r0x0001412028ff:
  if (*(int *)((longlong)puVar15 + 4) <= *(int *)((longlong)puVar10 + 0x14)) goto LAB_1412028f6;
LAB_141202910:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -2;
    if (puVar12 <= puVar15) break;
  } while (*(int *)((longlong)puVar13 + -0xc) <= *(int *)((longlong)puVar15 + 4));
  if (puVar16 <= puVar12) {
    if (puVar16 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar4 = *(undefined4 *)(puVar13 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -4);
      uVar6 = *puVar16;
      uVar7 = puVar10[3];
      *(undefined4 *)puVar16 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
      *(undefined4 *)(puVar10 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
      *puVar12 = uVar6;
      puVar13[-1] = uVar7;
    }
    goto LAB_1412028f6;
  }
  if (puVar15 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar4 = *(undefined4 *)(puVar13 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -4);
    uVar6 = *puVar15;
    uVar7 = puVar15[1];
    *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
    *(undefined4 *)(puVar15 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
    *puVar12 = uVar6;
    puVar13[-1] = uVar7;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar12 + (-0x10 - (longlong)puVar15) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar14 - (longlong)puVar16 & 0xfffffffffffffff0U)) {
    if (puVar16 < puVar14) {
      *plVar11 = (longlong)puVar16;
      plVar11[1] = (longlong)puVar14;
      *(int *)(plVar11 + 2) = (int)local_338;
      plVar11 = plVar11 + 3;
    }
    if (puVar12 <= puVar15 + 2) goto LAB_1412029db;
    puVar14 = puVar13 + -4;
    puVar16 = puVar15;
  }
  else {
    if (puVar15 + 2 < puVar12) {
      *plVar11 = (longlong)puVar15;
      plVar11[1] = (longlong)(puVar13 + -4);
      *(int *)(plVar11 + 2) = (int)local_338;
      plVar11 = plVar11 + 3;
    }
    if (puVar14 <= puVar16) goto LAB_1412029db;
  }
  lVar9 = ((longlong)puVar14 - (longlong)puVar16 >> 4) + 1;
  puVar15 = puVar16;
  if ((int)local_338 == 0) goto LAB_1412029cc;
  goto LAB_1412028c0;
}



// FUNCTION 141202a70 FUN_141202a70 body=663 status=ok
// SIG undefined FUN_141202a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141202a70(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  undefined8 local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    pauVar6 = (undefined1 (*) [16])&local_328;
    do {
      uVar2 = *(undefined8 *)pauVar6[1];
      local_338._0_4_ = (int)uVar2;
      pfVar10 = SUB168(*pauVar6,0);
      pfVar8 = SUB168(*pauVar6,8);
      lVar4 = ((longlong)pfVar8 - (longlong)pfVar10 >> 3) + 1;
      pfVar9 = pfVar10;
      if ((int)local_338 != 0) {
LAB_141202b30:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          pfVar10 = pfVar9 + (lVar4 >> 1) * 2;
          if (pfVar10 != pfVar9) {
            uVar3 = *(undefined8 *)pfVar10;
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar9;
            *(undefined8 *)pfVar9 = uVar3;
          }
          pfVar7 = pfVar8 + 2;
          pfVar5 = pfVar9;
LAB_141202b67:
          pfVar10 = pfVar5 + 2;
          if (pfVar10 <= pfVar8) goto code_r0x000141202b70;
          goto LAB_141202b90;
        }
        for (; pfVar10 = pfVar9, pfVar7 = pfVar9, pfVar9 < pfVar8; pfVar8 = pfVar8 + -2) {
          while (pfVar5 = pfVar7 + 2, pfVar5 <= pfVar8) {
            pfVar1 = pfVar7 + 3;
            pfVar7 = pfVar5;
            if (pfVar10[1] + *pfVar10 < *pfVar1 + *pfVar5) {
              pfVar10 = pfVar5;
            }
          }
          if (pfVar10 != pfVar8) {
            uVar2 = *(undefined8 *)pfVar10;
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar8;
            *(undefined8 *)pfVar8 = uVar2;
          }
        }
        goto LAB_141202c74;
      }
LAB_141202c65:
      local_338 = uVar2;
      FUN_141202450(pfVar10,lVar4,param_3,param_4);
LAB_141202c74:
      pauVar6 = (undefined1 (*) [16])(pauVar6[-2] + 8);
    } while ((undefined1 (*) [16])&local_328 <= pauVar6);
  }
  return;
code_r0x000141202b70:
  pfVar1 = pfVar5 + 3;
  pfVar5 = pfVar10;
  if (*pfVar1 + *pfVar10 <= pfVar9[1] + *pfVar9) goto LAB_141202b67;
LAB_141202b90:
  do {
    pfVar5 = pfVar7;
    pfVar7 = pfVar5 + -2;
    if (pfVar7 <= pfVar9) break;
  } while (pfVar9[1] + *pfVar9 <= pfVar5[-1] + *pfVar7);
  if (pfVar10 <= pfVar7) {
    pfVar5 = pfVar10;
    if (pfVar10 != pfVar7) {
      uVar3 = *(undefined8 *)pfVar10;
      *(undefined8 *)pfVar10 = *(undefined8 *)pfVar7;
      *(undefined8 *)pfVar7 = uVar3;
    }
    goto LAB_141202b67;
  }
  if (pfVar9 != pfVar7) {
    uVar3 = *(undefined8 *)pfVar9;
    *(undefined8 *)pfVar9 = *(undefined8 *)pfVar7;
    *(undefined8 *)pfVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)pfVar7 + (-8 - (longlong)pfVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pfVar8 - (longlong)pfVar10 & 0xfffffffffffffff8U)) {
    if (pfVar10 < pfVar8) {
      *(float **)*pauVar6 = pfVar10;
      *(float **)(*pauVar6 + 8) = pfVar8;
      *(int *)pauVar6[1] = (int)local_338;
      pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 8);
    }
    if (pfVar7 <= pfVar9 + 2) goto LAB_141202c74;
    pfVar8 = pfVar5 + -4;
    pfVar10 = pfVar9;
  }
  else {
    if (pfVar9 + 2 < pfVar7) {
      *(float **)*pauVar6 = pfVar9;
      *(float **)(*pauVar6 + 8) = pfVar5 + -4;
      *(int *)pauVar6[1] = (int)local_338;
      pauVar6 = (undefined1 (*) [16])(pauVar6[1] + 8);
    }
    if (pfVar8 <= pfVar10) goto LAB_141202c74;
  }
  lVar4 = ((longlong)pfVar8 - (longlong)pfVar10 >> 3) + 1;
  pfVar9 = pfVar10;
  if ((int)local_338 == 0) goto LAB_141202c65;
  goto LAB_141202b30;
}



// FUNCTION 141202d10 FUN_141202d10 body=604 status=ok
// SIG undefined FUN_141202d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141202d10(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong *plVar7;
  byte *pbVar8;
  byte *pbVar10;
  byte *pbVar11;
  float fVar12;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  byte *pbVar9;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 2;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_318 = (undefined4)(longlong)(fVar12 + fVar12);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar7 = &local_328;
    do {
      pbVar6 = (byte *)*plVar7;
      pbVar3 = (byte *)plVar7[1];
      lVar1 = plVar7[2];
      local_338._0_4_ = (int)lVar1;
      lVar4 = (longlong)pbVar3 - (longlong)pbVar6;
      pbVar10 = pbVar3;
      pbVar11 = pbVar6;
      if ((int)local_338 != 0) {
LAB_141202dd0:
        lVar5 = (lVar4 >> 1) + 1;
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = (lVar4 >> 1) + 2;
          }
          pbVar6 = pbVar11 + (lVar5 >> 1) * 2;
          if (pbVar6 != pbVar11) {
            uVar2 = *(undefined2 *)pbVar6;
            *(undefined2 *)pbVar6 = *(undefined2 *)pbVar11;
            *(undefined2 *)pbVar11 = uVar2;
          }
          pbVar8 = pbVar10 + 2;
          pbVar6 = pbVar11;
LAB_141202e05:
          pbVar6 = pbVar6 + 2;
          if (pbVar6 <= pbVar10) goto code_r0x000141202e0e;
          goto LAB_141202e16;
        }
        for (; pbVar3 = pbVar11, pbVar6 = pbVar11, pbVar11 < pbVar10; pbVar10 = pbVar10 + -2) {
          while (pbVar8 = pbVar3, pbVar6 = pbVar6 + 2, pbVar6 <= pbVar10) {
            pbVar3 = pbVar6;
            if (*pbVar6 <= *pbVar8) {
              pbVar3 = pbVar8;
            }
          }
          if (pbVar8 != pbVar10) {
            uVar2 = *(undefined2 *)pbVar8;
            *(undefined2 *)pbVar8 = *(undefined2 *)pbVar10;
            *(undefined2 *)pbVar10 = uVar2;
          }
        }
        goto LAB_141202edf;
      }
LAB_141202ed0:
      local_338 = lVar1;
      FUN_141202610(pbVar6,pbVar3,param_3,param_4);
LAB_141202edf:
      plVar7 = plVar7 + -3;
    } while (&local_328 <= plVar7);
  }
  return;
code_r0x000141202e0e:
  if (*pbVar6 <= *pbVar11) goto LAB_141202e05;
LAB_141202e16:
  do {
    pbVar9 = pbVar8;
    pbVar8 = pbVar9 + -2;
    if (pbVar8 <= pbVar11) break;
  } while (*pbVar11 <= *pbVar8);
  if (pbVar6 <= pbVar8) {
    if (pbVar6 != pbVar8) {
      uVar2 = *(undefined2 *)pbVar6;
      *(undefined2 *)pbVar6 = *(undefined2 *)pbVar8;
      *(undefined2 *)pbVar8 = uVar2;
    }
    goto LAB_141202e05;
  }
  if (pbVar11 != pbVar8) {
    uVar2 = *(undefined2 *)pbVar11;
    *(undefined2 *)pbVar11 = *(undefined2 *)pbVar8;
    *(undefined2 *)pbVar8 = uVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((ulonglong)(pbVar8 + (-2 - (longlong)pbVar11)) & 0xfffffffffffffffe) <
      (longlong)((longlong)pbVar10 - (longlong)pbVar6 & 0xfffffffffffffffeU)) {
    if (pbVar6 < pbVar10) {
      *plVar7 = (longlong)pbVar6;
      plVar7[1] = (longlong)pbVar10;
      *(int *)(plVar7 + 2) = (int)local_338;
      plVar7 = plVar7 + 3;
    }
    if (pbVar8 <= pbVar11 + 2) goto LAB_141202edf;
    pbVar10 = pbVar9 + -4;
    pbVar6 = pbVar11;
  }
  else {
    if (pbVar11 + 2 < pbVar8) {
      *plVar7 = (longlong)pbVar11;
      plVar7[1] = (longlong)(pbVar9 + -4);
      *(int *)(plVar7 + 2) = (int)local_338;
      plVar7 = plVar7 + 3;
    }
    if (pbVar10 <= pbVar6) goto LAB_141202edf;
  }
  lVar4 = (longlong)pbVar10 - (longlong)pbVar6;
  pbVar11 = pbVar6;
  if ((int)local_338 == 0) goto LAB_141202ed0;
  goto LAB_141202dd0;
}



// FUNCTION 141202f70 FUN_141202f70 body=69 status=ok
// SIG undefined FUN_141202f70(void)

ulonglong FUN_141202f70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1413a0f70();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141202fc0 FUN_141202fc0 body=879 status=ok
// SIG undefined FUN_141202fc0(void)

bool FUN_141202fc0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14120307f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
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
      if (iVar8 < 1) goto LAB_14120307f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_141203094;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_141203094:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1412032cf;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_14120321d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a12e0();
LAB_14120321d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_141203296:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a12e0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_141203296;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_1412032cf:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 141203330 FUN_141203330 body=879 status=ok
// SIG undefined FUN_141203330(void)

bool FUN_141203330(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1412033ef:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
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
      if (iVar8 < 1) goto LAB_1412033ef;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_141203404;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_141203404:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_14120363f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_14120358d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a1180();
LAB_14120358d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_141203606:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a1180();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_141203606;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_14120363f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1412036a0 FUN_1412036a0 body=879 status=ok
// SIG undefined FUN_1412036a0(void)

bool FUN_1412036a0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_14120375f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
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
      if (iVar8 < 1) goto LAB_14120375f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_141203774;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_141203774:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1412039af;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1412038fd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a0ec0();
LAB_1412038fd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_141203976:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a0ec0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_141203976;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_1412039af:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 141203a10 FUN_141203a10 body=443 status=ok
// SIG undefined FUN_141203a10(void)

void FUN_141203a10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  
  lVar5 = (longlong)param_3 - (longlong)param_1 >> 4;
  if (lVar5 < 0x29) {
    fVar9 = *(float *)((longlong)param_2 + 0xc);
    if (*(float *)((longlong)param_1 + 0xc) <= fVar9 && fVar9 != *(float *)((longlong)param_1 + 0xc)
       ) {
      uVar2 = param_1[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      fVar9 = *(float *)((longlong)param_2 + 0xc);
    }
    if (fVar9 < *(float *)((longlong)param_3 + 0xc)) {
      uVar2 = param_2[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      *param_3 = *param_2;
      param_3[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if (*(float *)((longlong)param_1 + 0xc) < *(float *)((longlong)param_2 + 0xc)) {
        uVar2 = param_1[1];
        *param_2 = *param_1;
        param_2[1] = uVar2;
        *param_1 = uVar3;
        param_1[1] = uVar4;
      }
    }
  }
  else {
    lVar5 = lVar5 + 1 >> 3;
    lVar6 = lVar5 * 0x10;
    fVar9 = *(float *)(lVar6 + 0xc + (longlong)param_1);
    if (*(float *)((longlong)param_1 + 0xc) <= fVar9 && fVar9 != *(float *)((longlong)param_1 + 0xc)
       ) {
      uVar2 = param_1[1];
      uVar3 = param_1[lVar5 * 2];
      uVar4 = (param_1 + lVar5 * 2)[1];
      param_1[lVar5 * 2] = *param_1;
      (param_1 + lVar5 * 2)[1] = uVar2;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      fVar9 = *(float *)(lVar6 + 0xc + (longlong)param_1);
    }
    if (fVar9 < *(float *)(lVar5 * 0x20 + 0xc + (longlong)param_1)) {
      uVar2 = (param_1 + lVar5 * 2)[1];
      uVar3 = param_1[lVar5 * 4];
      uVar4 = (param_1 + lVar5 * 4)[1];
      param_1[lVar5 * 4] = param_1[lVar5 * 2];
      (param_1 + lVar5 * 4)[1] = uVar2;
      param_1[lVar5 * 2] = uVar3;
      (param_1 + lVar5 * 2)[1] = uVar4;
      if (*(float *)((longlong)param_1 + 0xc) < *(float *)(lVar6 + 0xc + (longlong)param_1)) {
        uVar2 = param_1[1];
        param_1[lVar5 * 2] = *param_1;
        (param_1 + lVar5 * 2)[1] = uVar2;
        *param_1 = uVar3;
        param_1[1] = uVar4;
      }
    }
    fVar9 = *(float *)((longlong)param_2 + 0xc);
    puVar7 = param_2 + lVar5 * -2;
    if (*(float *)((longlong)puVar7 + 0xc) <= fVar9 && fVar9 != *(float *)((longlong)puVar7 + 0xc))
    {
      uVar2 = puVar7[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = *puVar7;
      param_2[1] = uVar2;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      fVar9 = *(float *)((longlong)param_2 + 0xc);
    }
    if (fVar9 < *(float *)(lVar6 + 0xc + (longlong)param_2)) {
      uVar2 = param_2[1];
      uVar3 = param_2[lVar5 * 2];
      uVar4 = (param_2 + lVar5 * 2)[1];
      param_2[lVar5 * 2] = *param_2;
      (param_2 + lVar5 * 2)[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if (*(float *)((longlong)puVar7 + 0xc) < *(float *)((longlong)param_2 + 0xc)) {
        uVar2 = puVar7[1];
        *param_2 = *puVar7;
        param_2[1] = uVar2;
        *puVar7 = uVar3;
        puVar7[1] = uVar4;
      }
    }
    puVar7 = param_3 + lVar5 * -2;
    puVar8 = param_3 + lVar5 * -4;
    fVar9 = *(float *)((longlong)puVar7 + 0xc);
    if (*(float *)((longlong)puVar8 + 0xc) <= fVar9 && fVar9 != *(float *)((longlong)puVar8 + 0xc))
    {
      uVar2 = puVar8[1];
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
      *puVar8 = uVar3;
      puVar8[1] = uVar4;
      fVar9 = *(float *)((longlong)puVar7 + 0xc);
    }
    if (fVar9 < *(float *)((longlong)param_3 + 0xc)) {
      uVar2 = puVar7[1];
      uVar3 = *param_3;
      uVar4 = param_3[1];
      *param_3 = *puVar7;
      param_3[1] = uVar2;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      if (*(float *)((longlong)puVar8 + 0xc) < *(float *)((longlong)puVar7 + 0xc)) {
        uVar2 = puVar8[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar2;
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
      }
    }
    fVar9 = *(float *)((longlong)param_2 + 0xc);
    pfVar1 = (float *)(lVar6 + 0xc + (longlong)param_1);
    if (*pfVar1 <= fVar9 && fVar9 != *pfVar1) {
      uVar2 = (param_1 + lVar5 * 2)[1];
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_2 = param_1[lVar5 * 2];
      param_2[1] = uVar2;
      param_1[lVar5 * 2] = uVar3;
      (param_1 + lVar5 * 2)[1] = uVar4;
      fVar9 = *(float *)((longlong)param_2 + 0xc);
    }
    if (fVar9 < *(float *)((longlong)puVar7 + 0xc)) {
      uVar2 = param_2[1];
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      *puVar7 = *param_2;
      puVar7[1] = uVar2;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      if (*(float *)(lVar6 + 0xc + (longlong)param_1) < *(float *)((longlong)param_2 + 0xc)) {
        uVar2 = (param_1 + lVar5 * 2)[1];
        *param_2 = param_1[lVar5 * 2];
        param_2[1] = uVar2;
        param_1[lVar5 * 2] = uVar3;
        (param_1 + lVar5 * 2)[1] = uVar4;
        return;
      }
    }
  }
  return;
}



// FUNCTION 141203bd0 FUN_141203bd0 body=503 status=ok
// SIG undefined FUN_141203bd0(void)

longlong * FUN_141203bd0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *_Dst;
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  size_t _Size;
  longlong *plVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_1 == param_2) {
    return param_2;
  }
  _Dst = param_1 + 1;
  if (_Dst != param_2) {
    _Size = (longlong)_Dst - (longlong)param_1;
    plVar5 = _Dst;
    do {
      pfVar1 = (float *)*param_3;
      lVar2 = *plVar5;
      fVar7 = *(float *)(lVar2 + 0x220) - *pfVar1;
      lVar3 = *param_1;
      fVar9 = *(float *)(lVar2 + 0x224) - pfVar1[1];
      fVar8 = *(float *)(lVar2 + 0x228) - pfVar1[2];
      fVar10 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
      fVar7 = *(float *)(lVar3 + 0x220) - *pfVar1;
      fVar9 = *(float *)(lVar3 + 0x224) - pfVar1[1];
      fVar8 = *(float *)(lVar3 + 0x228) - pfVar1[2];
      fVar7 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
      if (*(char *)param_3[1] == '\0') {
        bVar6 = fVar10 < fVar7;
      }
      else {
        bVar6 = fVar7 < fVar10;
      }
      plVar4 = plVar5;
      if (bVar6 || fVar7 == fVar10) {
        while( true ) {
          pfVar1 = (float *)*param_3;
          fVar7 = *(float *)(lVar2 + 0x220) - *pfVar1;
          fVar9 = *(float *)(lVar2 + 0x224) - pfVar1[1];
          lVar3 = plVar4[-1];
          fVar8 = *(float *)(lVar2 + 0x228) - pfVar1[2];
          fVar10 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
          fVar7 = *(float *)(lVar3 + 0x220) - *pfVar1;
          fVar9 = *(float *)(lVar3 + 0x224) - pfVar1[1];
          fVar8 = *(float *)(lVar3 + 0x228) - pfVar1[2];
          fVar7 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
          if (*(char *)param_3[1] == '\0') {
            bVar6 = fVar10 < fVar7;
          }
          else {
            bVar6 = fVar7 < fVar10;
          }
          if (bVar6 || fVar7 == fVar10) break;
          *plVar4 = lVar3;
          plVar4 = plVar4 + -1;
        }
        *plVar4 = lVar2;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
        *param_1 = lVar2;
      }
      plVar5 = plVar5 + 1;
      _Size = _Size + 8;
    } while (plVar5 != param_2);
  }
  return param_2;
}



// FUNCTION 141203dd0 FUN_141203dd0 body=118 status=ok
// SIG undefined FUN_141203dd0(void)

void FUN_141203dd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res20;
  
  puVar3 = param_2;
  puVar4 = param_1;
  local_res20 = param_4;
  cVar2 = FUN_141200cd0(&local_res20);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = FUN_141200cd0(&local_res20,param_3,puVar3);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *puVar3;
    *puVar3 = uVar1;
    cVar2 = FUN_141200cd0(&local_res20,puVar3,puVar4);
    if (cVar2 != '\0') {
      uVar1 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar1;
    }
  }
  return;
}



// FUNCTION 141203e50 FUN_141203e50 body=1762 status=ok
// SIG undefined FUN_141203e50(void)

ulonglong *
FUN_141203e50(ulonglong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  plVar8 = param_3 + -1;
  plVar11 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  lVar6 = (longlong)plVar8 - (longlong)param_2 >> 3;
  if (lVar6 < 0x29) {
    FUN_141203dd0(param_2,plVar11,plVar8);
  }
  else {
    lVar6 = lVar6 + 1 >> 3;
    FUN_141203dd0(param_2,param_2 + lVar6,param_2 + lVar6 * 2);
    FUN_141203dd0(plVar11 + -lVar6,plVar11,plVar11 + lVar6,param_4);
    FUN_141203dd0(param_3 + -1 + lVar6 * -2,plVar8 + -lVar6,param_3 + -1,param_4);
    FUN_141203dd0(param_2 + lVar6,plVar11,plVar8 + -lVar6,param_4);
  }
  plVar8 = plVar11 + 1;
  if (param_2 < plVar11) {
    pfVar1 = (float *)*param_4;
    fVar14 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar21 = pfVar1[2];
    lVar6 = *plVar11;
    while( true ) {
      pfVar1 = (float *)(lVar6 + 0x220);
      pfVar3 = (float *)(lVar6 + 0x224);
      pfVar4 = (float *)(lVar6 + 0x228);
      plVar5 = plVar11 + -1;
      lVar6 = *plVar5;
      fVar19 = *pfVar3 - fVar18;
      fVar15 = *(float *)(lVar6 + 0x220) - fVar14;
      fVar17 = *(float *)(lVar6 + 0x224) - fVar18;
      fVar13 = *(float *)(lVar6 + 0x228) - fVar21;
      fVar16 = *pfVar1 - fVar14;
      fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar13 * fVar13;
      fVar13 = *pfVar4 - fVar21;
      fVar13 = fVar19 * fVar19 + fVar16 * fVar16 + fVar13 * fVar13;
      if (*(char *)param_4[1] == '\0') {
        bVar12 = fVar15 < fVar13;
      }
      else {
        bVar12 = fVar13 < fVar15;
      }
      if (!bVar12 && fVar13 != fVar15) break;
      fVar13 = *pfVar1 - fVar14;
      fVar16 = *pfVar3 - fVar18;
      fVar17 = *(float *)(lVar6 + 0x224) - fVar18;
      fVar19 = *pfVar4 - fVar21;
      fVar15 = *(float *)(lVar6 + 0x220) - fVar14;
      fVar20 = *(float *)(lVar6 + 0x228) - fVar21;
      fVar13 = fVar16 * fVar16 + fVar13 * fVar13 + fVar19 * fVar19;
      fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar20 * fVar20;
      if (*(char *)param_4[1] == '\0') {
        bVar12 = fVar13 < fVar15;
      }
      else {
        bVar12 = fVar15 < fVar13;
      }
      if ((!bVar12 && fVar15 != fVar13) || (plVar11 = plVar5, plVar5 <= param_2)) break;
    }
  }
  plVar5 = plVar8;
  plVar10 = plVar11;
  if (plVar8 < param_3) {
    pfVar1 = (float *)*param_4;
    fVar14 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar21 = pfVar1[2];
    lVar6 = *plVar11;
    fVar16 = *(float *)(lVar6 + 0x224) - fVar18;
    fVar15 = *(float *)(lVar6 + 0x220) - fVar14;
    fVar13 = *(float *)(lVar6 + 0x228) - fVar21;
    fVar13 = fVar16 * fVar16 + fVar15 * fVar15 + fVar13 * fVar13;
    while( true ) {
      lVar2 = *plVar8;
      fVar16 = *(float *)(lVar2 + 0x220) - fVar14;
      fVar17 = *(float *)(lVar2 + 0x224) - fVar18;
      fVar15 = *(float *)(lVar2 + 0x228) - fVar21;
      fVar15 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
      if (*(char *)param_4[1] == '\0') {
        bVar12 = fVar15 < fVar13;
      }
      else {
        bVar12 = fVar13 < fVar15;
      }
      plVar5 = plVar8;
      if (!bVar12 && fVar13 != fVar15) break;
      fVar16 = *(float *)(lVar6 + 0x220) - fVar14;
      fVar19 = *(float *)(lVar6 + 0x224) - fVar18;
      fVar15 = *(float *)(lVar6 + 0x228) - fVar21;
      fVar17 = *(float *)(lVar2 + 0x224) - fVar18;
      fVar16 = fVar19 * fVar19 + fVar16 * fVar16 + fVar15 * fVar15;
      fVar15 = *(float *)(lVar2 + 0x220) - fVar14;
      fVar19 = *(float *)(lVar2 + 0x228) - fVar21;
      fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar19 * fVar19;
      if (*(char *)param_4[1] == '\0') {
        bVar12 = fVar16 < fVar15;
      }
      else {
        bVar12 = fVar15 < fVar16;
      }
      if ((!bVar12 && fVar15 != fVar16) || (plVar8 = plVar8 + 1, plVar5 = plVar8, param_3 <= plVar8)
         ) break;
    }
  }
joined_r0x0001412041d3:
  do {
    plVar7 = plVar10;
    if (param_3 <= plVar5) {
joined_r0x000141204323:
      for (; param_2 < plVar10; plVar10 = plVar10 + -1) {
        plVar7 = plVar7 + -1;
        pfVar1 = (float *)*param_4;
        lVar6 = *plVar7;
        fVar14 = *pfVar1;
        fVar18 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar15 = *(float *)(lVar6 + 0x220) - fVar14;
        lVar2 = *plVar11;
        fVar17 = *(float *)(lVar6 + 0x224) - fVar18;
        fVar13 = *(float *)(lVar6 + 0x228) - fVar21;
        fVar19 = *(float *)(lVar2 + 0x220) - fVar14;
        fVar16 = *(float *)(lVar2 + 0x224) - fVar18;
        fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar13 * fVar13;
        fVar13 = *(float *)(lVar2 + 0x228) - fVar21;
        fVar13 = fVar19 * fVar19 + fVar16 * fVar16 + fVar13 * fVar13;
        if (*(char *)param_4[1] == '\0') {
          bVar12 = fVar15 < fVar13;
        }
        else {
          bVar12 = fVar13 < fVar15;
        }
        if (bVar12 || fVar13 == fVar15) {
          fVar13 = *(float *)(lVar2 + 0x220) - fVar14;
          fVar15 = *(float *)(lVar2 + 0x224) - fVar18;
          fVar18 = *(float *)(lVar6 + 0x224) - fVar18;
          fVar16 = *(float *)(lVar2 + 0x228) - fVar21;
          fVar14 = *(float *)(lVar6 + 0x220) - fVar14;
          fVar21 = *(float *)(lVar6 + 0x228) - fVar21;
          fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar16 * fVar16;
          fVar14 = fVar18 * fVar18 + fVar14 * fVar14 + fVar21 * fVar21;
          if (*(char *)param_4[1] == '\0') {
            bVar12 = fVar13 < fVar14;
          }
          else {
            bVar12 = fVar14 < fVar13;
          }
          if (!bVar12 && fVar14 != fVar13) break;
          plVar11 = plVar11 + -1;
          if (plVar11 != plVar7) {
            lVar2 = *plVar11;
            *plVar11 = lVar6;
            *plVar7 = lVar2;
          }
        }
      }
      if (plVar10 == param_2) {
        if (plVar5 == param_3) {
          *param_1 = (ulonglong)plVar11;
          param_1[1] = (ulonglong)plVar8;
          return param_1;
        }
        if (plVar8 != plVar5) {
          lVar6 = *plVar11;
          *plVar11 = *plVar8;
          *plVar8 = lVar6;
        }
        plVar8 = plVar8 + 1;
        lVar6 = *plVar11;
        *plVar11 = *plVar5;
        plVar11 = plVar11 + 1;
        *plVar5 = lVar6;
        plVar5 = plVar5 + 1;
      }
      else {
        plVar10 = plVar10 + -1;
        if (plVar5 == param_3) {
          plVar11 = plVar11 + -1;
          if (plVar10 == plVar11) {
            plVar7 = plVar8 + -1;
            plVar8 = plVar8 + -1;
            lVar6 = *plVar11;
            *plVar11 = *plVar7;
            *plVar8 = lVar6;
          }
          else {
            plVar8 = plVar8 + -1;
            lVar6 = *plVar10;
            *plVar10 = *plVar11;
            *plVar11 = lVar6;
            *plVar11 = *plVar8;
            *plVar8 = lVar6;
          }
        }
        else {
          lVar6 = *plVar5;
          *plVar5 = *plVar10;
          *plVar10 = lVar6;
          plVar5 = plVar5 + 1;
        }
      }
      goto joined_r0x0001412041d3;
    }
    lVar6 = *plVar11;
    lVar2 = *plVar5;
    pfVar1 = (float *)*param_4;
    fVar14 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar15 = *(float *)(lVar6 + 0x220) - fVar14;
    fVar21 = pfVar1[2];
    fVar17 = *(float *)(lVar6 + 0x224) - fVar18;
    fVar13 = *(float *)(lVar6 + 0x228) - fVar21;
    fVar19 = *(float *)(lVar2 + 0x224) - fVar18;
    fVar16 = *(float *)(lVar2 + 0x220) - fVar14;
    fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar13 * fVar13;
    fVar13 = *(float *)(lVar2 + 0x228) - fVar21;
    fVar13 = fVar19 * fVar19 + fVar16 * fVar16 + fVar13 * fVar13;
    if (*(char *)param_4[1] == '\0') {
      bVar12 = fVar15 < fVar13;
    }
    else {
      bVar12 = fVar13 < fVar15;
    }
    plVar9 = plVar8;
    if (bVar12 || fVar13 == fVar15) {
      fVar13 = *(float *)(lVar2 + 0x220) - fVar14;
      fVar15 = *(float *)(lVar2 + 0x224) - fVar18;
      fVar18 = *(float *)(lVar6 + 0x224) - fVar18;
      fVar16 = *(float *)(lVar2 + 0x228) - fVar21;
      fVar14 = *(float *)(lVar6 + 0x220) - fVar14;
      fVar21 = *(float *)(lVar6 + 0x228) - fVar21;
      fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar16 * fVar16;
      fVar14 = fVar18 * fVar18 + fVar14 * fVar14 + fVar21 * fVar21;
      if (*(char *)param_4[1] == '\0') {
        bVar12 = fVar13 < fVar14;
      }
      else {
        bVar12 = fVar14 < fVar13;
      }
      if (!bVar12 && fVar14 != fVar13) goto joined_r0x000141204323;
      plVar9 = plVar8 + 1;
      if (plVar8 != plVar5) {
        lVar6 = *plVar8;
        *plVar8 = lVar2;
        *plVar5 = lVar6;
      }
    }
    plVar8 = plVar9;
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 141204540 FUN_141204540 body=735 status=ok
// SIG undefined FUN_141204540(void)

undefined8 * FUN_141204540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  
  puVar7 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 5) * 2;
  FUN_141203a10(param_2,puVar7,param_3 + -2);
  puVar4 = puVar7 + 2;
  for (; param_2 < puVar7; puVar7 = puVar7 + -2) {
    if ((*(float *)((longlong)puVar7 + 0xc) < *(float *)((longlong)puVar7 + -4)) ||
       (*(float *)((longlong)puVar7 + -4) < *(float *)((longlong)puVar7 + 0xc))) break;
  }
  puVar5 = puVar4;
  puVar9 = puVar7;
  if (puVar4 < param_3) {
    do {
      puVar5 = puVar4;
      if ((*(float *)((longlong)puVar7 + 0xc) < *(float *)((longlong)puVar4 + 0xc)) ||
         (*(float *)((longlong)puVar4 + 0xc) < *(float *)((longlong)puVar7 + 0xc))) break;
      puVar4 = puVar4 + 2;
      puVar5 = puVar4;
    } while (puVar4 < param_3);
  }
LAB_1412045e0:
  puVar10 = puVar9;
  puVar6 = puVar5;
  if (puVar5 < param_3) {
    if (0x3f < ((longlong)param_3 + (0xf - (longlong)puVar5) & 0xfffffffffffffff0U)) {
      puVar8 = puVar5 + 2;
      do {
        fVar11 = *(float *)((longlong)puVar7 + 0xc);
        if (fVar11 <= *(float *)((longlong)puVar8 - 4)) {
          puVar6 = puVar5;
          if (fVar11 < *(float *)((longlong)puVar8 - 4)) goto joined_r0x000141204721;
          if (puVar4 != puVar5) {
            uVar1 = puVar5[1];
            uVar2 = *puVar4;
            uVar3 = puVar4[1];
            *puVar4 = *puVar5;
            puVar4[1] = uVar1;
            *puVar5 = uVar2;
            puVar5[1] = uVar3;
            fVar11 = *(float *)((longlong)puVar7 + 0xc);
          }
          puVar4 = puVar4 + 2;
        }
        if (fVar11 <= *(float *)((longlong)puVar8 + 0xc)) {
          puVar6 = puVar8;
          if (fVar11 < *(float *)((longlong)puVar8 + 0xc)) goto joined_r0x000141204721;
          if (puVar4 != puVar8) {
            uVar1 = puVar8[1];
            uVar2 = *puVar4;
            uVar3 = puVar4[1];
            *puVar4 = *puVar8;
            puVar4[1] = uVar1;
            *puVar8 = uVar2;
            puVar8[1] = uVar3;
            fVar11 = *(float *)((longlong)puVar7 + 0xc);
          }
          puVar4 = puVar4 + 2;
        }
        if (fVar11 <= *(float *)((longlong)puVar8 + 0x1c)) {
          puVar6 = puVar8 + 2;
          if (fVar11 < *(float *)((longlong)puVar8 + 0x1c)) goto joined_r0x000141204721;
          if (puVar4 != puVar6) {
            uVar1 = puVar8[3];
            uVar2 = *puVar4;
            uVar3 = puVar4[1];
            *puVar4 = *puVar6;
            puVar4[1] = uVar1;
            *puVar6 = uVar2;
            puVar8[3] = uVar3;
            fVar11 = *(float *)((longlong)puVar7 + 0xc);
          }
          puVar4 = puVar4 + 2;
        }
        if (fVar11 <= *(float *)((longlong)puVar8 + 0x2c)) {
          puVar6 = puVar8 + 4;
          if (fVar11 < *(float *)((longlong)puVar8 + 0x2c)) goto joined_r0x000141204721;
          if (puVar4 != puVar6) {
            uVar1 = puVar8[5];
            uVar2 = *puVar4;
            uVar3 = puVar4[1];
            *puVar4 = *puVar6;
            puVar4[1] = uVar1;
            *puVar6 = uVar2;
            puVar8[5] = uVar3;
          }
          puVar4 = puVar4 + 2;
        }
        puVar5 = puVar5 + 8;
        puVar8 = puVar8 + 8;
      } while (puVar5 < param_3 + -6);
    }
    for (; puVar6 = puVar5, puVar5 < param_3; puVar5 = puVar5 + 2) {
      if (*(float *)((longlong)puVar7 + 0xc) <= *(float *)((longlong)puVar5 + 0xc)) {
        if (*(float *)((longlong)puVar7 + 0xc) < *(float *)((longlong)puVar5 + 0xc)) break;
        if (puVar4 != puVar5) {
          uVar1 = puVar5[1];
          uVar2 = *puVar4;
          uVar3 = puVar4[1];
          *puVar4 = *puVar5;
          puVar4[1] = uVar1;
          *puVar5 = uVar2;
          puVar5[1] = uVar3;
        }
        puVar4 = puVar4 + 2;
      }
    }
  }
joined_r0x000141204721:
  do {
    if (puVar9 <= param_2) break;
    puVar8 = puVar10 + -2;
    puVar5 = puVar7;
    if (*(float *)((longlong)puVar10 + -4) <= *(float *)((longlong)puVar7 + 0xc)) {
      if (*(float *)((longlong)puVar10 + -4) < *(float *)((longlong)puVar7 + 0xc)) break;
      puVar5 = puVar7 + -2;
      if (puVar5 != puVar8) {
        uVar1 = puVar10[-1];
        uVar2 = *puVar5;
        uVar3 = puVar7[-1];
        *puVar5 = *puVar8;
        puVar7[-1] = uVar1;
        *puVar8 = uVar2;
        puVar10[-1] = uVar3;
      }
    }
    puVar9 = puVar9 + -2;
    puVar7 = puVar5;
    puVar10 = puVar8;
  } while( true );
  if (puVar9 == param_2) {
    if (puVar6 == param_3) {
      *param_1 = puVar7;
      param_1[1] = puVar4;
      return param_1;
    }
    if (puVar4 != puVar6) {
      uVar1 = puVar4[1];
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      *puVar7 = *puVar4;
      puVar7[1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
    }
    uVar1 = puVar6[1];
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    puVar4 = puVar4 + 2;
    puVar5 = puVar6 + 2;
    puVar7 = puVar7 + 2;
  }
  else {
    puVar10 = puVar9 + -2;
    if (puVar6 == param_3) {
      puVar8 = puVar7 + -2;
      if (puVar10 != puVar8) {
        uVar1 = puVar7[-1];
        uVar2 = *puVar10;
        uVar3 = puVar9[-1];
        *puVar10 = *puVar8;
        puVar9[-1] = uVar1;
        *puVar8 = uVar2;
        puVar7[-1] = uVar3;
      }
      uVar1 = puVar4[-1];
      uVar2 = *puVar8;
      uVar3 = puVar7[-1];
      *puVar8 = puVar4[-2];
      puVar7[-1] = uVar1;
      puVar4[-2] = uVar2;
      puVar4[-1] = uVar3;
      puVar4 = puVar4 + -2;
      puVar5 = puVar6;
      puVar7 = puVar8;
      puVar9 = puVar10;
    }
    else {
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar3 = puVar9[-1];
      *puVar6 = *puVar10;
      puVar6[1] = uVar3;
      *puVar10 = uVar1;
      puVar9[-1] = uVar2;
      puVar5 = puVar6 + 2;
      puVar9 = puVar10;
    }
  }
  goto LAB_1412045e0;
}



// FUNCTION 141204820 FUN_141204820 body=935 status=ok
// SIG undefined FUN_141204820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141204820(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14471b848;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x42480000;
  FUN_142de2eb0(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0xa3) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x43480000;
  *(undefined4 *)(param_1 + 0xa4) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0x43340000;
  *(undefined4 *)(param_1 + 0xa6) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0xa7) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x53c) = 1;
  *(undefined4 *)(param_1 + 0xa8) = 0xc2c80000;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0x443b8000;
  *(undefined4 *)(param_1 + 0xaa) = 0x43e10000;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x43af0000;
  *(undefined4 *)(param_1 + 0xab) = 1;
  *(undefined2 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0xbf800000;
  param_1[0xd1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 1;
  uVar4 = uRam0000000146876b5c;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  *(uint *)((longlong)param_1 + 0x71c) = uVar4;
  uVar4 = uRam0000000146876b54 & uRam0000000146876b64;
  uVar5 = uRam0000000146876b58 & uRam0000000146876b68;
  uVar6 = uRam0000000146876b5c & uRam0000000146876b6c;
  *(uint *)(param_1 + 0xe6) = _DAT_146876b50 & _DAT_146876b60;
  *(uint *)((longlong)param_1 + 0x734) = uVar4;
  *(uint *)(param_1 + 0xe7) = uVar5;
  *(uint *)((longlong)param_1 + 0x73c) = uVar6;
  *(undefined4 *)(param_1 + 0xe8) = 0x42480000;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  uVar2 = DAT_146877028;
  uVar1 = FUN_142a175e0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xac] = uVar2;
  param_1[0x2d] = uVar2;
  uVar2 = DAT_146877018;
  uVar1 = FUN_142a232e0();
  lVar3 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0x8b] = lVar3;
  *(undefined1 *)(lVar3 + 0x24e) = 2;
  FUN_1423974f0(param_1[0x8b],1);
  FUN_142399e30(param_1[0x8b],param_1[0x2d],0);
  uVar2 = DAT_146877020;
  uVar1 = AUGDoor::GetPrivateStaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xad] = uVar2;
  FUN_142399e30(uVar2,param_1[0x2d],0);
  uVar2 = DAT_146877010;
  uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar3 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xae] = lVar3;
  *(byte *)(lVar3 + 0x660) = *(byte *)(lVar3 + 0x660) & 0xef;
  uVar2 = DAT_146877030;
  uVar1 = UCircularThrobber::GetPrivateStaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xaf] = uVar2;
  FUN_142de2d20(&local_98,0x40400000,0);
  *(undefined1 *)(param_1 + 0x92) = local_98;
  *(undefined1 *)((longlong)param_1 + 0x491) = local_97;
  *(undefined1 *)((longlong)param_1 + 0x492) = local_96;
  *(undefined1 *)((longlong)param_1 + 0x493) = local_95;
  *(undefined4 *)((longlong)param_1 + 0x494) = local_94;
  param_1[0x94] = local_88;
  param_1[0x96] = local_78;
  param_1[0x97] = uStack_70;
  param_1[0x95] = local_80;
  *(undefined4 *)(param_1 + 0x93) = local_90;
  param_1[0x9f] = local_30;
  param_1[0x98] = local_68;
  param_1[0x99] = uStack_60;
  param_1[0x9a] = local_58;
  param_1[0x9b] = uStack_50;
  param_1[0x9c] = local_48;
  param_1[0x9d] = local_40;
  param_1[0x9e] = uStack_38;
  *(undefined4 *)(param_1 + 0xa0) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x504) = local_24;
  *(undefined4 *)(param_1 + 0xa1) = local_20;
  return param_1;
}



// FUNCTION 141204bd0 FUN_141204bd0 body=155 status=ok
// SIG undefined FUN_141204bd0(void)

undefined8 * FUN_141204bd0(undefined8 *param_1)

{
  FUN_141204820();
  *param_1 = &PTR_FUN_14471bf38;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 3;
  *(undefined4 *)(param_1 + 0xee) = 0x453b8000;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0x42960000;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_142d2e580(param_1 + 0xf1);
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10b) = 0;
  return param_1;
}



// FUNCTION 141204c70 FUN_141204c70 body=103 status=ok
// SIG undefined FUN_141204c70(void)

undefined8 * FUN_141204c70(undefined8 *param_1)

{
  FUN_141204820();
  *param_1 = &PTR__scalar_deleting_destructor__14471c630;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0x40400000;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  param_1[0xf0] = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0x3f800000;
  return param_1;
}



// FUNCTION 141204ce0 FUN_141204ce0 body=4615 status=ok
// SIG undefined FUN_141204ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141204ce0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  undefined8 *local_res18 [2];
  uint in_stack_ffffffffffffff90;
  undefined8 *local_58;
  undefined8 **local_50;
  
  FUN_1430c7db0();
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144718c58;
  param_1[0x8b] = &PTR_LAB_144719540;
  param_1[0x98] = &PTR_LAB_144719598;
  param_1[0x99] = &PTR_LAB_1447195c0;
  param_1[0xaf] = &PTR_LAB_1447195d8;
  param_1[0xb0] = &PTR_LAB_1447195f8;
  param_1[0xb1] = &PTR_LAB_1447197c8;
  param_1[0xb2] = &PTR_LAB_144719818;
  param_1[0xb3] = &PTR_LAB_144719840;
  param_1[0xb4] = &PTR_LAB_144719858;
  param_1[0xbf] = &PTR_LAB_144719890;
  param_1[0xc0] = &PTR_LAB_1447198d0;
  param_1[0xc1] = &PTR_LAB_1447198f8;
  param_1[0xc2] = &PTR_LAB_1447199c8;
  param_1[0xc3] = &PTR_LAB_1447199f0;
  param_1[0xc4] = &PTR_LAB_144719a18;
  param_1[0xc5] = &PTR_LAB_144719a40;
  param_1[0xc6] = &PTR_LAB_144719a58;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0x459c4000;
  *(undefined2 *)(param_1 + 0xe1) = 1;
  FName::FName(param_1 + 0xe2,"F_R_Wheel_FX",1);
  *(undefined4 *)(param_1 + 0xe3) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0x41900000;
  *(undefined4 *)(param_1 + 0xe4) = 0x41a00000;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x3e800000;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xea) = 0x42aa0000;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  param_1[0xf2] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf3) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = 0x44480000;
  *(undefined4 *)(param_1 + 0xfd) = 0x44c80000;
  *(undefined4 *)((longlong)param_1 + 0x7ec) = 0x44c80000;
  *(undefined4 *)(param_1 + 0xfe) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0xff) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x7fc) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x100) = 0x3d99999a;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0x3dcccccd;
  param_1[0x101] = 0x41700000;
  *(undefined1 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined1 *)(param_1 + 0x107) = 0xff;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0xff;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  *(undefined2 *)((longlong)param_1 + 0x8f1) = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 299) = 0x10000;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0x40000000;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 2;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  *(undefined2 *)(param_1 + 0x139) = 2;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x140);
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  *(undefined4 *)(param_1 + 0x16a) = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xba4) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x175) = 0;
  *(undefined1 *)(param_1 + 0x176) = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined1 *)(param_1 + 0x17b) = 0;
  *(undefined1 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc04) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0c) = 0;
  param_1[0x183] = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  *(undefined1 *)(param_1 + 0x187) = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x19a);
  *(undefined1 *)(param_1 + 0x19d) = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  *(undefined4 *)(param_1 + 0x1a5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd2c) = 0;
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1a9) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xd4c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1aa) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xd54) = 0xbf800000;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1b2) = 0x43c80000;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0xd9c);
  UCheatManagerGunfire::GetAllCheats(param_1 + 0x1b7);
  UCheatManagerGunfire::GetAllCheats(param_1 + 0x1b9);
  UCheatManagerGunfire::GetAllCheats(param_1 + 0x1bb);
  *(undefined4 *)(param_1 + 0x1bd) = 0x3dcccccd;
  plVar1 = param_1 + 0x1e0;
  *(undefined4 *)((longlong)param_1 + 0xdec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1be) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0xdf4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x1bf) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdfc) = 0x42c80000;
  param_1[0x1c0] = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1c1) = 0x3fa00000;
  *(undefined4 *)((longlong)param_1 + 0xe0c) = 0x40800000;
  *(undefined4 *)(param_1 + 0x1c2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c3) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0xe1c) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0x1000000;
  *(undefined8 *)((longlong)param_1 + 0xe3c) = DAT_1462a20c0;
  *(undefined4 *)((longlong)param_1 + 0xe44) = DAT_1462a20c8;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  *(undefined2 *)(param_1 + 0x1cc) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  *(undefined2 *)(param_1 + 0x1d1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe8a) = 1;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0x43200000;
  *(undefined4 *)(param_1 + 0x1d7) = 0;
  *(undefined2 *)((longlong)param_1 + 0xebc) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xebe) = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  *(undefined4 *)(param_1 + 0x1da) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0xed4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xed6) = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  *plVar1 = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  FUN_142c62aa0(param_1 + 0x1e3);
  *(undefined1 *)(param_1 + 0x1e6) = 1;
  *(undefined4 *)((longlong)param_1 + 0xf34) = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  *(undefined4 *)(param_1 + 0x1e9) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xf4c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1ea) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ed) = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  *(undefined1 *)(param_1 + 0x215) = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  pvVar4 = ThreadLocalStoragePointer;
  uVar9 = (ulonglong)_tls_index;
  *(undefined1 *)(param_1 + 0x23f) = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  lVar3 = *(longlong *)((longlong)pvVar4 + uVar9 * 8);
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[600] = 0;
  *(undefined1 *)(param_1 + 0x259) = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  *(undefined1 *)(param_1 + 0x25e) = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  *(undefined2 *)(param_1 + 0x271) = 0x100;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x41200000;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  if (*(int *)(lVar3 + 0x38) < DAT_146877248) {
    _Init_thread_header(&DAT_146877248);
    if (DAT_146877248 == -1) {
      FName::FName(&DAT_146877240,L"TargetableComponent",1);
      _Init_thread_footer(&DAT_146877248);
    }
  }
  uVar7 = DAT_146877240;
  uVar6 = FUN_142e79d90();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[199] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_146877258) {
    _Init_thread_header(&DAT_146877258);
    if (DAT_146877258 == -1) {
      FName::FName(&DAT_146877250,L"DamageComponent",1);
      _Init_thread_footer(&DAT_146877258);
    }
  }
  uVar7 = DAT_146877250;
  uVar6 = AGMeshParameterCue::GetPrivateStaticClass();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[200] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_146877268) {
    _Init_thread_header(&DAT_146877268);
    if (DAT_146877268 == -1) {
      FName::FName(&DAT_146877260,L"DamageCauserComponent",1);
      _Init_thread_footer(&DAT_146877268);
    }
  }
  uVar7 = DAT_146877260;
  uVar6 = AUGWallBladeTrap::GetPrivateStaticClass();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[0xc9] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_146877278) {
    _Init_thread_header(&DAT_146877278);
    if (DAT_146877278 == -1) {
      FName::FName(&DAT_146877270,L"ResourcePoolComponent",1);
      _Init_thread_footer(&DAT_146877278);
    }
  }
  uVar7 = DAT_146877270;
  uVar6 = FUN_142e1a5a0();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[0xcc] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_146877288) {
    _Init_thread_header(&DAT_146877288);
    if (DAT_146877288 == -1) {
      FName::FName(&DAT_146877280,L"VehicleEffectsComponent",1);
      _Init_thread_footer(&DAT_146877288);
    }
  }
  uVar7 = DAT_146877280;
  uVar6 = FUN_1414dc610();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[0xd2] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_146877298) {
    _Init_thread_header(&DAT_146877298);
    if (DAT_146877298 == -1) {
      FName::FName(&DAT_146877290,L"PrimarySeatComponent",1);
      _Init_thread_footer(&DAT_146877298);
    }
  }
  uVar7 = DAT_146877290;
  uVar6 = FUN_1414e0f70();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[0xcd] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_1468772a8) {
    _Init_thread_header(&DAT_1468772a8);
    if (DAT_1468772a8 == -1) {
      FName::FName(&DAT_1468772a0,L"StatusEffectManagerComponent",1);
      _Init_thread_footer(&DAT_1468772a8);
    }
  }
  uVar7 = DAT_1468772a0;
  uVar6 = FUN_141477fa0();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[0xca] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_1468772b8) {
    _Init_thread_header(&DAT_1468772b8);
    if (DAT_1468772b8 == -1) {
      FName::FName(&DAT_1468772b0,L"MinimapIconComponent",1);
      _Init_thread_footer(&DAT_1468772b8);
    }
  }
  uVar7 = DAT_1468772b0;
  uVar6 = FUN_141437710();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffff00;
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90,0);
  param_1[0xcb] = uVar7;
  if (*(int *)(lVar3 + 0x38) < DAT_1468772c8) {
    _Init_thread_header(&DAT_1468772c8);
    if (DAT_1468772c8 == -1) {
      FName::FName(&DAT_1468772c0,L"VehicleAudioProviderComponent",1);
      _Init_thread_footer(&DAT_1468772c8);
    }
  }
  uVar7 = DAT_1468772c0;
  uVar6 = FUN_1414dc6c0();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,in_stack_ffffffffffffff90 & 0xffffff00,0);
  param_1[0x256] = uVar7;
  *(undefined4 *)(param_1[0xcd] + 0x6c8) = 0;
  if (param_1[200] != 0) {
    FUN_142350b20(param_1[200],1);
    *(byte *)(param_1[200] + 0x734) = *(byte *)(param_1[200] + 0x734) | 1;
  }
  if (param_1[199] != 0) {
    *(undefined1 *)(param_1[199] + 0x47b) = 1;
    FUN_142df2ce0(param_1[199],0);
  }
  FUN_141256d00(param_1);
  *(undefined1 *)((longlong)param_1 + 0x469) = 0;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x10f) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x9d4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xa7c) = 0x3e4ccccd;
  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) & 0xfffffffd;
  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) | 4;
  *(undefined4 *)((longlong)param_1 + 0xa84) = 0x3fc00000;
  *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) | 1;
  *(undefined4 *)(param_1 + 0x151) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0xa8c) = 0x45fa0000;
  *(undefined4 *)(param_1 + 0x152) = 0x40000000;
  *(undefined4 *)(param_1 + 0x14f) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1b1) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0xd8c) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0xd94) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1b3) = 0x42340000;
  FUN_14246fd50((longlong)param_1 + 0xd9c,0x3f800000);
  FUN_14246fd50(param_1 + 0x19a,0x40400000);
  local_58 = &DAT_146871290;
  puVar2 = param_1 + 0xb5;
  local_50 = local_res18;
  local_res18[0] = param_1 + 0x103;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (puVar2,local_res8,&local_58,0);
  local_58 = &DAT_146871298;
  local_50 = local_res18;
  local_res18[0] = param_1 + 0x105;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (puVar2,local_res8,&local_58,0);
  if (param_1[200] != 0) {
    local_res18[0] = (undefined8 *)(param_1[200] + 0x898);
    local_58 = &DAT_1468712a0;
    local_50 = local_res18;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar2,local_res8,&local_58,0);
    local_res18[0] = (undefined8 *)(param_1[200] + 0x8a8);
    local_58 = &DAT_1468712a8;
    local_50 = local_res18;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar2,local_res8,&local_58,0);
    local_res18[0] = (undefined8 *)(param_1[200] + 0x8b8);
    local_58 = &DAT_1468712b0;
    local_50 = local_res18;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar2,local_res8,&local_58,0);
    local_res18[0] = (undefined8 *)(param_1[200] + 0x8d8);
    local_58 = &DAT_1468712b8;
    local_50 = local_res18;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar2,local_res8,&local_58,0);
    local_res18[0] = (undefined8 *)(param_1[200] + 0x888);
    local_58 = &DAT_1468712c0;
    local_50 = local_res18;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              (puVar2,local_res8,&local_58,0);
  }
  cVar5 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar5 == '\0') {
    param_1[0x1e2] = param_1;
    param_1[0x1e1] = &DAT_146877090;
    *plVar1 = (longlong)DAT_146877090;
    DAT_146877090 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  uVar7 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x140);
  puVar8 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar7,local_res18,0,0x3f800000,0,*puVar8);
  *(undefined1 *)((longlong)param_1 + 0x138a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8f2) = 0;
  return param_1;
}



// FUNCTION 141205ef0 FUN_141205ef0 body=773 status=ok
// SIG undefined FUN_141205ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141205ef0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x40800000;
  *param_1 = &PTR_FUN_144717060;
  *(undefined4 *)(param_1 + 0x29) = 0xc33e0000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x4109999a;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x405e147b;
  *(undefined4 *)(param_1 + 0x2b) = 0x40ce6666;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f933333;
  *(undefined4 *)(param_1 + 0x2c) = 0x40300000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x40875c29;
  *(undefined4 *)(param_1 + 0x2d) = 0x3fe00000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x40200000;
  *(undefined4 *)(param_1 + 0x2e) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x42200000;
  *(undefined4 *)(param_1 + 0x2f) = 0x41a00000;
  param_1[0x31] = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"EEmperorBones",0x1c);
  puVar1 = param_1 + 0x46;
  param_1[0x348] = 0;
  param_1[0x34a] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x34b] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x348);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0x348) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1a44) < iVar3 + 1) {
      FUN_14123d0e0(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam0000000146876b5c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar16 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar17 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x23);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  *(undefined4 *)(param_1 + 0x34e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a9c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x34) = 2;
  *(undefined4 *)(param_1 + 0x36) = 4;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3a) = 3;
  *(undefined4 *)(param_1 + 0x3c) = 5;
  *(undefined4 *)(param_1 + 0x3e) = 6;
  *(undefined4 *)(param_1 + 0x40) = 8;
  *(undefined4 *)(param_1 + 0x42) = 7;
  *(undefined4 *)(param_1 + 0x44) = 9;
  return param_1;
}



// FUNCTION 141206200 FUN_141206200 body=504 status=ok
// SIG undefined FUN_141206200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141206200(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  local_40 = 0x17;
  iVar13 = 0;
  *param_1 = &PTR_FUN_144717198;
  local_48 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"EOutrunnerBoosterBones",0x2e);
  puVar1 = param_1 + 0x28;
  param_1[0x130] = 0;
  param_1[0x132] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x133] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x130);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0x130) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x984) < iVar3 + 1) {
      FUN_14123d100(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam0000000146876b5c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar16 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar17 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0xc);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return param_1;
}



// FUNCTION 141206400 FUN_141206400 body=1373 status=ok
// SIG undefined FUN_141206400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141206400(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  *(undefined4 *)(param_1 + 0x28) = 0x43480000;
  *param_1 = &PTR_FUN_144717690;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x44480000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x2b) = 0x41100000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3e19999a;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x2d);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x4b) = 0x43070000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3f400000;
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x4f) = 0x3ee66666;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 4;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x51) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 2;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x55) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x40400000;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0x425c0000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x5c) = 0xc0a00000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xc0a00000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x5e) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x40e00000;
  *(undefined4 *)(param_1 + 0x61) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x62) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x459c4000;
  *(undefined4 *)(param_1 + 99) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3e051eb8;
  *(undefined4 *)(param_1 + 100) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x43480000;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x66) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x67) = 0x3f800000;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x3fe00000;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x40200000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x6b);
  local_48 = (undefined2 *)0x0;
  local_40 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"EOutrunnerBones",0x20);
  puVar1 = param_1 + 0x7a;
  param_1[0x2cc] = 0;
  param_1[0x2ce] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x2cf] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x2cc);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0x2cc) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1664) < iVar3 + 1) {
      FUN_14123d0f0(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam0000000146876b5c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar16 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar17 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x1b);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  param_1[0x2d1] = 0;
  *(undefined4 *)(param_1 + 0x2d6) = 0;
  *(undefined4 *)(param_1 + 0x2db) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1734) = 0;
  *(undefined4 *)((longlong)param_1 + 0x173c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1754) = 0;
  param_1[0x2ee] = 0;
  param_1[0x2ef] = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1794) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17f4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17fc) = 0;
  param_1[0x307] = 0;
  *(undefined4 *)(param_1 + 0x2d5) = 0x12030201;
  *(undefined1 *)((longlong)param_1 + 0x16ac) = 0x13;
  *(undefined4 *)((longlong)param_1 + 0x16b4) = 1;
  *(undefined4 *)(param_1 + 0x2da) = 0x14060504;
  *(undefined1 *)((longlong)param_1 + 0x16d4) = 0x15;
  *(undefined4 *)((longlong)param_1 + 0x16dc) = 2;
  *(undefined4 *)(param_1 + 0x2df) = 0x16090807;
  *(undefined1 *)((longlong)param_1 + 0x16fc) = 0x17;
  *(undefined4 *)((longlong)param_1 + 0x1704) = 3;
  *(undefined4 *)(param_1 + 0x2e4) = 0x180c0b0a;
  *(undefined1 *)((longlong)param_1 + 0x1724) = 0x19;
  return param_1;
}



// FUNCTION 141206960 FUN_141206960 body=584 status=ok
// SIG undefined FUN_141206960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141206960(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  local_40 = 0x16;
  iVar13 = 0;
  *param_1 = &PTR_FUN_1447177c8;
  local_48 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"ERevolverBoosterBones",0x2c);
  puVar1 = param_1 + 0x28;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x83] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x80);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0x80) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x404) < iVar3 + 1) {
      FUN_14123d110(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam0000000146876b5c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar16 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar17 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  *(undefined4 *)((longlong)param_1 + 0x454) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x8b) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x8c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8d) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  return param_1;
}



// FUNCTION 141206bb0 FUN_141206bb0 body=808 status=ok
// SIG undefined FUN_141206bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141206bb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  *(undefined4 *)(param_1 + 0x28) = 0x43070000;
  *param_1 = &PTR_FUN_144717cc0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x4109999a;
  *(undefined4 *)(param_1 + 0x29) = 0x405e147b;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x40ce6666;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f933333;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x40300000;
  *(undefined4 *)(param_1 + 0x2b) = 0x40875c29;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x2c) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x410b3333;
  *(undefined4 *)(param_1 + 0x2d) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x40200000;
  *(undefined4 *)(param_1 + 0x2e) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x2f) = 0x42fa0000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x30) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x40e00000;
  *(undefined4 *)(param_1 + 0x31) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x32) = 0x3e051eb8;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3e99999a;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x33);
  iVar13 = 0;
  local_40 = 0xf;
  param_1[0x43] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  local_48 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"ERevolverBones",0x1e);
  puVar1 = param_1 + 0x56;
  param_1[0xae] = 0;
  param_1[0xb0] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0xb1] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0xae);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0xae) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x574) < iVar3 + 1) {
      FUN_14123d110(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam0000000146876b5c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar16 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar17 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return param_1;
}



// FUNCTION 141206ee0 FUN_141206ee0 body=305 status=ok
// SIG undefined FUN_141206ee0(void)

undefined8 * FUN_141206ee0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144167968;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x10,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41200000;
  param_1[0x1f] = 0x41200000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xbf800000;
  FUN_141f84110(param_1 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  return param_1;
}



// FUNCTION 141207020 FUN_141207020 body=1229 status=ok
// SIG undefined FUN_141207020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141207020(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  *(undefined4 *)(param_1 + 0x28) = 0x43480000;
  *param_1 = &PTR_FUN_144717df8;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x38) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x39) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x44480000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x3b) = 0x41100000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3e19999a;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x4b) = 0x40900000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x40c00000;
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x43070000;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x4d) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x4e) = 0x3ee66666;
  *(undefined4 *)((longlong)param_1 + 0x274) = 4;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x50) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x284) = 2;
  *(undefined4 *)(param_1 + 0x51) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x40000000;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x5a) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x425c0000;
  *(undefined4 *)(param_1 + 0x5b) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x41200000;
  *(undefined4 *)(param_1 + 0x5c) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x5d) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5e) = 0x3dcccccd;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x3fe00000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x40200000;
  *(undefined4 *)(param_1 + 0x62) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x40e00000;
  *(undefined4 *)(param_1 + 99) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3e051eb8;
  *(undefined4 *)(param_1 + 100) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x66);
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x95] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"ETechnicalBones",0x20);
  puVar1 = param_1 + 0xa4;
  param_1[0x5a0] = 0;
  param_1[0x5a2] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x5a3] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x5a0);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0x5a0) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x2d04) < iVar3 + 1) {
      FUN_14123d120(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam0000000146876b5c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar16 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar17 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x3a);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 2;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 3;
  return param_1;
}



// FUNCTION 1412074f0 FUN_1412074f0 body=544 status=ok
// SIG undefined FUN_1412074f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412074f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  *(undefined4 *)(param_1 + 0x28) = 0x43480000;
  iVar13 = 0;
  *param_1 = &PTR_FUN_1447182f0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"ETrailerBones",0x1c);
  puVar1 = param_1 + 0x32;
  param_1[0x10e] = 0;
  param_1[0x110] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x111] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x10e);
    lVar14 = (longlong)iVar3;
    *(int *)(param_1 + 0x10e) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x874) < iVar3 + 1) {
      FUN_14123d130(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar14 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar14 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar14 * 0x16 + 4) = 0xffffffff;
    uVar15 = uRam0000000146876b5c;
    puVar1[lVar14 * 0x16 + 8] = 0;
    (puVar1 + lVar14 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar14 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    uVar15 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar16 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar17 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar14 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar14 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar14 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar14 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar14 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar14 * 0x16 + 0x13] = 0;
    puVar1[lVar14 * 0x16 + 0x14] = 0;
    puVar1[lVar14 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 10);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 1;
  *(undefined4 *)((longlong)param_1 + 0x164) = 2;
  *(undefined4 *)((longlong)param_1 + 0x174) = 3;
  return param_1;
}



// FUNCTION 141207710 FUN_141207710 body=1031 status=ok
// SIG undefined FUN_141207710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141207710(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  FUN_141206ee0();
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xc3340000;
  *param_1 = &PTR_LAB_144718428;
  *(undefined4 *)(param_1 + 0x29) = 0x43340000;
  iVar14 = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  local_48 = (undefined2 *)0x0;
  local_40 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"EDualWeaponBones",0x22);
  puVar1 = param_1 + 0x30;
  param_1[0x1fe] = 0;
  param_1[0x200] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x201] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  iVar13 = iVar14;
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar3 = *(int *)(param_1 + 0x1fe);
    lVar15 = (longlong)iVar3;
    *(int *)(param_1 + 0x1fe) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xff4) < iVar3 + 1) {
      FUN_14123d0d0(puVar1,iVar3);
    }
    uVar4 = *puVar11;
    puVar1[lVar15 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar15 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar15 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar15 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar15 * 0x16 + 4) = 0xffffffff;
    uVar16 = uRam0000000146876b5c;
    puVar1[lVar15 * 0x16 + 8] = 0;
    (puVar1 + lVar15 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar15 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar16;
    uVar16 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar17 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar18 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar15 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar18;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar15 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar15 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar15 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar15 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar15 * 0x16 + 0x13] = 0;
    puVar1[lVar15 * 0x16 + 0x14] = 0;
    puVar1[lVar15 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x15);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar9 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"EWeaponBones",0x1a);
  puVar1 = param_1 + 0x202;
  param_1[0x2b2] = 0;
  param_1[0x2b4] = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar12 = puVar9;
  }
  param_1[0x2b5] = 0;
  uVar10 = UEnum::GetPrivateStaticClass();
  uVar10 = FUN_141799410(uVar10,0xffffffffffffffff,puVar12,1);
  do {
    puVar11 = (undefined8 *)FUN_1417392b0(uVar10,&local_48,iVar14);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FName::FName(local_res8,puVar12,1);
    iVar13 = *(int *)(param_1 + 0x2b2);
    lVar15 = (longlong)iVar13;
    *(int *)(param_1 + 0x2b2) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0x1594) < iVar13 + 1) {
      FUN_14123d140(puVar1,iVar13);
    }
    uVar4 = *puVar11;
    puVar1[lVar15 * 0x16] = 0;
    *(undefined4 *)(puVar1 + lVar15 * 0x16 + 1) = 0xffffffff;
    *(undefined1 *)(lVar15 * 0xb0 + 0xc + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + lVar15 * 0x16 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + lVar15 * 0x16 + 4) = 0xffffffff;
    uVar16 = uRam0000000146876b5c;
    puVar1[lVar15 * 0x16 + 8] = 0;
    (puVar1 + lVar15 * 0x16 + 8)[1] = 0;
    puVar11 = puVar1 + lVar15 * 0x16 + 6;
    *(undefined4 *)puVar11 = 0;
    *(undefined4 *)((longlong)puVar11 + 4) = 0;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(uint *)((longlong)puVar11 + 0xc) = uVar16;
    uVar16 = uRam0000000146876b54 & uRam0000000146876b64;
    uVar17 = uRam0000000146876b58 & uRam0000000146876b68;
    uVar18 = uRam0000000146876b5c & uRam0000000146876b6c;
    puVar2 = (uint *)(puVar1 + lVar15 * 0x16 + 10);
    *puVar2 = _DAT_146876b50 & _DAT_146876b60;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar18;
    uVar5 = uRam00000001468b5b78;
    puVar1[lVar15 * 0x16 + 0xc] = _DAT_1468b5b70;
    (puVar1 + lVar15 * 0x16 + 0xc)[1] = uVar5;
    uVar8 = uRam00000001468b5b8c;
    uVar7 = uRam00000001468b5b88;
    uVar6 = uRam00000001468b5b84;
    puVar11 = puVar1 + lVar15 * 0x16 + 0xe;
    *(undefined4 *)puVar11 = _DAT_1468b5b80;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    uVar8 = uRam00000001468b5b9c;
    uVar7 = uRam00000001468b5b98;
    uVar6 = uRam00000001468b5b94;
    puVar11 = puVar1 + lVar15 * 0x16 + 0x10;
    *(undefined4 *)puVar11 = _DAT_1468b5b90;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar6;
    *(undefined4 *)(puVar11 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar8;
    puVar1[lVar15 * 0x16 + 0x13] = 0;
    puVar1[lVar15 * 0x16 + 0x14] = 0;
    puVar1[lVar15 * 0x16] = uVar4;
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 8);
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  *(undefined2 *)(param_1 + 0x2b6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15b2) = 0;
  return param_1;
}



// FUNCTION 141207b20 FUN_141207b20 body=106 status=ok
// SIG undefined FUN_141207b20(void)

undefined2 * FUN_141207b20(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FText::FText(param_1 + 4);
  FText::FText(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1c,0);
  FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 0x1c),L"artifact",0x12);
  return param_1;
}



// FUNCTION 141207b90 FUN_141207b90 body=111 status=ok
// SIG undefined FUN_141207b90(void)

undefined8 * FUN_141207b90(undefined8 *param_1)

{
  FUN_14084bd40();
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *param_1 = &PTR_FUN_1447168e0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  return param_1;
}



// FUNCTION 141207c00 FUN_141207c00 body=125 status=ok
// SIG undefined FUN_141207c00(void)

undefined8 * FUN_141207c00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 141207c80 FUN_141207c80 body=60 status=ok
// SIG undefined FUN_141207c80(void)

undefined8 * FUN_141207c80(undefined8 *param_1)

{
  FUN_1422552b0();
  param_1[0x88] = 0x43fa0000;
  *param_1 = &PTR_FUN_144718918;
  *(undefined2 *)(param_1 + 0x89) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44a) = 0;
  return param_1;
}



// FUNCTION 141207cc0 FUN_141207cc0 body=515 status=ok
// SIG undefined FUN_141207cc0(void)

undefined8 * FUN_141207cc0(undefined8 *param_1)

{
  FUN_142326e40();
  *(undefined4 *)(param_1 + 0x32) = 0x43fa0000;
  *param_1 = &PTR_FUN_14471ae60;
  param_1[5] = &PTR_LAB_14471b268;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1d4);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x3c);
  param_1[0x3e] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x3f);
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x48);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x4b) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x4c) = 0x42340000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_142d979c0(param_1 + 0x4f);
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x466a6000;
  FUN_14246fd50((longlong)param_1 + 0x1d4,0x3f800000);
  FUN_14246fd50(param_1 + 0x3c,0x3f800000);
  FUN_14246fd50(param_1 + 0x3f,0x3f800000);
  *(undefined4 *)(param_1 + 0x33) = 0x41200000;
  *(undefined4 *)(param_1 + 0x52) = 0x40f00000;
  FUN_14246fd50(param_1 + 0x48,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x24c,0x3f800000);
  *(undefined4 *)(param_1 + 0x41) = 0x41200000;
  return param_1;
}



// FUNCTION 141207ed0 FUN_141207ed0 body=154 status=ok
// SIG undefined FUN_141207ed0(void)

undefined8 * FUN_141207ed0(undefined8 *param_1)

{
  FUN_142326e40();
  *(undefined4 *)(param_1 + 0x2f) = 0x43fa0000;
  *param_1 = &PTR_FUN_14471d4b8;
  param_1[5] = &PTR_LAB_14471d8b0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x30) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x43480000;
  *(undefined4 *)(param_1 + 0x31) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x43480000;
  *(undefined4 *)(param_1 + 0x32) = 0x42c80000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  return param_1;
}



// FUNCTION 141207f70 FUN_141207f70 body=140 status=ok
// SIG undefined FUN_141207f70(void)

undefined8 * FUN_141207f70(undefined8 *param_1)

{
  FUN_1412082d0();
  *(undefined2 *)(param_1 + 0x25e) = 0;
  *param_1 = &PTR_FUN_144716d18;
  *(undefined4 *)(param_1 + 0x263) = 0xc3340000;
  param_1[0x25f] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  FName::FName(param_1 + 0x264,"UV Offset",1);
  FUN_141207b90(param_1 + 0x268);
  param_1[0x268] = &PTR_FUN_144716ca0;
  return param_1;
}



// FUNCTION 141208000 FUN_141208000 body=65 status=ok
// SIG undefined FUN_141208000(void)

undefined8 * FUN_141208000(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR_FUN_14471d8e0;
  param_1[5] = &PTR_LAB_14471de28;
  *(undefined4 *)(param_1 + 0x5a) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 141208050 FUN_141208050 body=93 status=ok
// SIG undefined FUN_141208050(void)

undefined8 * FUN_141208050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14471cd20;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  return param_1;
}



// FUNCTION 1412080b0 FUN_1412080b0 body=105 status=ok
// SIG undefined FUN_1412080b0(void)

undefined8 * FUN_1412080b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14471cfa8;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 141208120 FUN_141208120 body=149 status=ok
// SIG undefined FUN_141208120(void)

undefined8 * FUN_141208120(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14471d230;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 1412081c0 FUN_1412081c0 body=214 status=ok
// SIG undefined FUN_1412081c0(void)

undefined8 * FUN_1412081c0(undefined8 *param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_1430c8480();
  *param_1 = &PTR_FUN_14471de58;
  param_1[5] = &PTR_LAB_14471e418;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x5f) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x61) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x30c) = local_resc;
  *(undefined4 *)(param_1 + 0x62) = 0x45bb8000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  FUN_141200e20(param_1 + 0x55,FUN_141240f00);
  return param_1;
}



// FUNCTION 1412082a0 FUN_1412082a0 body=43 status=ok
// SIG undefined FUN_1412082a0(void)

undefined8 * FUN_1412082a0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__144719d48;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1412082d0 FUN_1412082d0 body=114 status=ok
// SIG undefined FUN_1412082d0(void)

undefined8 * FUN_1412082d0(undefined8 *param_1)

{
  FUN_14095d880();
  *param_1 = &PTR_FUN_144716958;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  FName::FName(param_1 + 0x16a,L"GearShiftSlot",1);
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  FUN_141207b90(param_1 + 0x16e);
  return param_1;
}



// FUNCTION 141208350 UAssetImportData body=33 status=ok
// SIG undefined UAssetImportData(void)

undefined8 * UAssetImportData::UAssetImportData(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144719a70;
  return param_1;
}



// FUNCTION 141208380 UGRichTextWebWidget_obj body=55 status=ok
// SIG undefined UGRichTextWebWidget_obj(void)

undefined8 * g3::ui::UGRichTextWebWidget_obj::UGRichTextWebWidget_obj(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14471a020;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1412083c0 FUN_1412083c0 body=122 status=ok
// SIG undefined FUN_1412083c0(void)

undefined8 * FUN_1412083c0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14471a2f8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd | 1;
  FUN_142c8c260(param_1 + 0xc,0x3f800000);
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 141208440 FUN_141208440 body=207 status=ok
// SIG undefined FUN_141208440(void)

undefined8 * FUN_141208440(undefined8 *param_1)

{
  FUN_1412082d0();
  *(undefined1 *)(param_1 + 0x25e) = 1;
  *param_1 = &PTR_FUN_144717348;
  *(undefined4 *)((longlong)param_1 + 0x12f4) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x25f) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x12fc) = 0x40000000;
  *(undefined4 *)(param_1 + 0x260) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x1304) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x261) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x130c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x262) = 0x3f800000;
  param_1[0x268] = 0;
  FUN_141207b90(param_1 + 0x26a);
  param_1[0x26a] = &PTR_FUN_1447172d0;
  *(undefined4 *)(param_1 + 0x359) = 0;
  param_1[0x362] = 0;
  *(undefined4 *)(param_1 + 0x363) = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  return param_1;
}



// FUNCTION 141208510 FUN_141208510 body=223 status=ok
// SIG undefined FUN_141208510(void)

undefined8 * FUN_141208510(undefined8 *param_1)

{
  FUN_1412082d0();
  *(undefined4 *)(param_1 + 0x25e) = 0x42200000;
  *param_1 = &PTR_FUN_144717978;
  *(undefined4 *)((longlong)param_1 + 0x12f4) = 0x42480000;
  FName::FName(param_1 + 0x25f,L"Vehicle",1);
  *(undefined4 *)(param_1 + 0x262) = 0x3f800000;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1314) = 1;
  FName::FName(param_1 + 0x263,L"VehicleBody",1);
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  *(undefined1 *)(param_1 + 0x267) = 0;
  FUN_141207b90(param_1 + 0x268);
  param_1[0x268] = &PTR_FUN_144717900;
  *(undefined4 *)(param_1 + 0x357) = 0;
  *(undefined1 *)(param_1 + 0x35a) = 0;
  return param_1;
}



// FUNCTION 1412085f0 FUN_1412085f0 body=159 status=ok
// SIG undefined FUN_1412085f0(void)

undefined8 * FUN_1412085f0(undefined8 *param_1)

{
  FUN_1412082d0();
  *(undefined1 *)(param_1 + 0x25e) = 0;
  *param_1 = &PTR_FUN_144717fa8;
  FName::FName(param_1 + 0x25f,L"VehicleAccel",1);
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  *(undefined4 *)(param_1 + 0x262) = 0;
  FUN_141207b90(param_1 + 0x264);
  *(undefined1 *)(param_1 + 0x353) = 0;
  param_1[0x264] = &PTR_FUN_144717f30;
  *(undefined8 *)((longlong)param_1 + 0x1a9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1aa4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1aac) = 0;
  return param_1;
}



// FUNCTION 141208690 FUN_141208690 body=63 status=ok
// SIG undefined FUN_141208690(void)

undefined8 * FUN_141208690(undefined8 *param_1)

{
  FUN_142de3670();
  *param_1 = &PTR__scalar_deleting_destructor__144715ae8;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  return param_1;
}



// FUNCTION 1412086d0 FUN_1412086d0 body=33 status=ok
// SIG undefined FUN_1412086d0(void)

undefined8 * FUN_1412086d0(undefined8 *param_1)

{
  FUN_142de3630();
  *param_1 = &PTR__scalar_deleting_destructor__144715db8;
  return param_1;
}



// FUNCTION 141208700 FUN_141208700 body=66 status=ok
// SIG undefined FUN_141208700(void)

undefined8 * FUN_141208700(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1447163d8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 141208750 FUN_141208750 body=122 status=ok
// SIG undefined FUN_141208750(void)

undefined8 * FUN_141208750(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14471a5d0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x5c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
  }
  if ((undefined2 *)param_1[10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[10] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 1412087d0 FUN_1412087d0 body=227 status=ok
// SIG undefined FUN_1412087d0(void)

undefined8 * FUN_1412087d0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14471a8b0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xcc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  if ((undefined2 *)param_1[0x18] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x18] = 0;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 1412088c0 FUN_1412088c0 body=136 status=ok
// SIG undefined FUN_1412088c0(void)

undefined8 * FUN_1412088c0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14471ab88;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x5c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
  }
  if ((undefined2 *)param_1[10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[10] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((longlong)param_1 + 0x83) = 1;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 141208950 FUN_141208950 body=225 status=ok
// SIG undefined FUN_141208950(void)

undefined8 * FUN_141208950(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14471b298;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 100)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
  }
  if ((undefined2 *)param_1[0xb] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((*(int *)((longlong)param_1 + 0x8c) < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if ((undefined2 *)param_1[0x10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x10] = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return param_1;
}



// FUNCTION 141208a40 UBehaviorTree body=51 status=ok
// SIG undefined UBehaviorTree(void)

undefined8 * UBehaviorTree::UBehaviorTree(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14471b570;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 141208a80 FUN_141208a80 body=503 status=ok
// SIG undefined FUN_141208a80(void)

undefined8 * FUN_141208a80(undefined8 *param_1)

{
  FUN_1422552b0();
  *(undefined2 *)(param_1 + 0x88) = 1;
  *param_1 = &PTR_FUN_1447185d8;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0xc2340000;
  *(undefined4 *)(param_1 + 0x89) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x8a) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0x41200000;
  *(undefined4 *)(param_1 + 0x8b) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x428c0000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3fe8f5c3;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x8d) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x3e19999a;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x8e);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x9d);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xac);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xbb);
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  FUN_14084bd40(param_1 + 0xd0);
  param_1[0xd0] = &PTR_FUN_144718560;
  *(undefined4 *)(param_1 + 0x1aa) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0xd54) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x1ab) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0xd5c) = DAT_1464aa81c;
  *(undefined1 *)(param_1 + 0x1ae) = 0;
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b2) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0xd94) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x1b3) = 0xc2340000;
  *(undefined4 *)((longlong)param_1 + 0xd9c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0xda4) = 0x42700000;
  *(undefined4 *)(param_1 + 0x1b5) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xdac) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1b6) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0xdb4) = 0x3fe8f5c3;
  param_1[0x1b7] = 0x3f19999a;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  return param_1;
}



// FUNCTION 141208c80 ~TArray<Metasound::Frontend::FNodeRegistryTransaction,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<Metasound::Frontend::FNodeRegistryTransaction,TSizedDefaultAllocator<32>_>(void)

void TArray<Metasound::Frontend::FNodeRegistryTransaction,TSizedDefaultAllocator<32>_>::
     ~TArray<Metasound::Frontend::FNodeRegistryTransaction,TSizedDefaultAllocator<32>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if (*plVar2 != 0) {
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



// FUNCTION 141208ce0 ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141208d50 FUN_141208d50 body=122 status=ok
// SIG undefined FUN_141208d50(void)

void FUN_141208d50(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    TArray<FSrtResourceBinding,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x110,0);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141208dd0 FUN_141208dd0 body=151 status=ok
// SIG undefined FUN_141208dd0(void)

void FUN_141208dd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x758) != 0) {
    if (*(longlong *)(param_1 + 0x748) == 0) {
      **(longlong **)(param_1 + 0x750) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x750) = *(longlong *)(param_1 + 0x748);
      *(undefined8 *)(*(longlong *)(param_1 + 0x748) + 8) = *(undefined8 *)(param_1 + 0x750);
      *(undefined8 *)(param_1 + 0x748) = 0;
    }
    *(undefined8 *)(param_1 + 0x750) = 0;
    *(undefined8 *)(param_1 + 0x758) = 0;
  }
  if (*(longlong *)(param_1 + 0x648) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 141208e70 FUN_141208e70 body=1530 status=ok
// SIG undefined FUN_141208e70(void)

void FUN_141208e70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x1378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x12b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11e8) != 0) {
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
  if (*(longlong *)(param_1 + 0x1098) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1088) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xff0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf10) != 0) {
    if (*(longlong *)(param_1 + 0xf00) == 0) {
      **(longlong **)(param_1 + 0xf08) = 0;
    }
    else {
      **(longlong **)(param_1 + 0xf08) = *(longlong *)(param_1 + 0xf00);
      *(undefined8 *)(*(longlong *)(param_1 + 0xf00) + 8) = *(undefined8 *)(param_1 + 0xf08);
      *(undefined8 *)(param_1 + 0xf00) = 0;
    }
    *(undefined8 *)(param_1 + 0xf08) = 0;
    *(undefined8 *)(param_1 + 0xf10) = 0;
  }
  if (*(longlong *)(param_1 + 0xed8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xec0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xea0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe50) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0xd9c);
  *(undefined4 *)(param_1 + 0xd40) = 0;
  if (*(longlong *)(param_1 + 0xd38) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FGraphicsMinimalPipelineStateInitializer>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0xcf8);
  thunk_FUN_142478640(param_1 + 0xcd0);
  if (*(longlong *)(param_1 + 0xcc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbc8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 3000) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb58) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb48);
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xad8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xab8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa98) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0xa00);
  if (*(longlong *)(param_1 + 0x9e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9a8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x990);
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x930) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x910) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x8f1) != '\0') {
    *(undefined1 *)(param_1 + 0x8f1) = 0;
  }
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x890) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x828) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 2000) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x770) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x6f8);
  lVar2 = *(longlong *)(param_1 + 0x6f0);
  if (iVar1 != 0) {
    do {
      FUN_1412094e0(lVar2);
      lVar2 = lVar2 + 0x20;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x6f0);
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x630) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x628) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x620) = &PTR_FUN_144191f28;
  *(undefined ***)(param_1 + 0x618) = &PTR_FUN_1441b4a50;
  *(undefined ***)(param_1 + 0x610) = &PTR_FUN_1441b39d0;
  *(undefined ***)(param_1 + 0x608) = &PTR_FUN_144193ee0;
  *(undefined ***)(param_1 + 0x600) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0x5f8) = &PTR_FUN_1441b4c28;
  *(undefined ***)(param_1 + 0x5a0) = &PTR__scalar_deleting_destructor__1441b4bf0;
  *(undefined4 *)(param_1 + 0x5f0) = 0;
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5a8);
  *(undefined ***)(param_1 + 0x598) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x590) = &PTR_FUN_144191f28;
  *(undefined ***)(param_1 + 0x588) = &PTR_FUN_1441b4ba0;
  *(undefined ***)(param_1 + 0x580) = &PTR_FUN_1441939c8;
  *(undefined ***)(param_1 + 0x578) = &PTR_FUN_144194f88;
  FUN_141209470(param_1);
  return;
}



// FUNCTION 141209470 FUN_141209470 body=110 status=ok
// SIG undefined FUN_141209470(void)

void FUN_141209470(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x558);
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x4c8) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x4c0) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1412094e0 FUN_1412094e0 body=156 status=ok
// SIG undefined FUN_1412094e0(void)

void FUN_1412094e0(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)param_1[2];
  uVar2 = (longlong)*(int *)(param_1 + 3) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 3) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142d49f50(*param_1);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141209580 FUN_141209580 body=106 status=ok
// SIG undefined FUN_141209580(void)

void FUN_141209580(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1238) != 0) {
    FMemory::Free();
  }
  FUN_14083e560(param_1 + 0xb70);
  if (*(longlong *)(param_1 + 0xb18) != 0) {
    FMemory::Free();
  }
  FUN_14083e560(param_1 + 0x450);
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FMemory::Free();
  }
  FUN_14083eff0(param_1);
  return;
}



// FUNCTION 1412095f0 FUN_1412095f0 body=110 status=ok
// SIG undefined FUN_1412095f0(void)

void FUN_1412095f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141209660 FUN_141209660 body=155 status=ok
// SIG undefined FUN_141209660(void)

void FUN_141209660(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x210);
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
  plVar4 = *(longlong **)(param_1 + 0xf8);
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
  FUN_1412095f0(param_1);
  return;
}



// FUNCTION 141209700 FUN_141209700 body=137 status=ok
// SIG undefined FUN_141209700(void)

undefined1 * FUN_141209700(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  FText::operator=(param_1 + 8,param_2 + 8);
  FText::operator=(param_1 + 0x20,param_2 + 0x20);
  plVar2 = (longlong *)(param_2 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return param_1;
}



// FUNCTION 141209790 FUN_141209790 body=277 status=ok
// SIG undefined FUN_141209790(void)

void FUN_141209790(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar1 = FUN_1410833d0(*param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(*param_1 + 0x700) != 0) {
      *(undefined8 *)(*param_1 + 0x700) = 0;
      if (*(longlong *)(*param_1 + 0x708) != 0) {
        *(undefined8 *)(*param_1 + 0x708) = 0;
      }
    }
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    local_58[0] = 1;
    FUN_1411f9940(lVar1 + 0x6e0,local_58,1);
    puVar2 = (undefined8 *)FName::FName(local_res8,L"VaultCard_Player",1);
    FUN_1411f9b50(lVar1 + 0x6e0,*puVar2);
    FName::FName(local_res8,L"VaultCard_Player",1);
    FUN_140ec02d0(lVar1 + 0x6b8,local_res8,0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  }
  return;
}



// FUNCTION 1412098b0 FUN_1412098b0 body=672 status=ok
// SIG undefined FUN_1412098b0(void)

void FUN_1412098b0(longlong *param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  bool bVar9;
  longlong local_68 [9];
  longlong *local_20;
  
  lVar6 = FWeakObjectPtr::Get(param_1[1] + 0x58c);
  if (lVar6 != 0) {
    lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      cVar4 = FUN_142dcfc60(lVar6);
      if (cVar4 == '\0') {
        local_68[7] = 0x12;
        local_68[6] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 6,0);
        FGenericPlatformString::Memcpy(local_68[6],L"ChallengeListItem",0x24);
        lVar7 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_68 + 6,0);
        lVar6 = local_68[6];
      }
      else if (cVar4 == '\x01') {
        local_68[5] = 0x18;
        local_68[4] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
        FGenericPlatformString::Memcpy(local_68[4],L"ChallengeListItem_Split",0x30);
        lVar7 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_68 + 4,0);
        lVar6 = local_68[4];
      }
      else if (cVar4 == '\x02') {
        local_68[3] = 0x17;
        local_68[2] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
        FGenericPlatformString::Memcpy(local_68[2],L"ChallengeListItem_Vert",0x2e);
        lVar7 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_68 + 2,0);
        lVar6 = local_68[2];
      }
      else {
        if (cVar4 != '\x03') {
          return;
        }
        local_68[1] = 0x17;
        local_68[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
        FGenericPlatformString::Memcpy(local_68[0],L"ChallengeListItem_4way",0x2e);
        lVar7 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_68,0);
        lVar6 = local_68[0];
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (lVar7 != 0) {
        FUN_142ed3af0(lVar7,param_2,0);
        plVar2 = *(longlong **)(lVar7 + 0x310);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (!bVar9) {
            LOCK();
            bVar9 = iVar5 == (int)plVar2[1];
            if (bVar9) {
              *(int *)(plVar2 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar9) {
              local_68[8] = *(longlong *)(lVar7 + 0x308);
              local_20 = plVar2;
              if (local_68[8] != 0) {
                pwVar8 = L"unchecked";
                if (param_3 != '\0') {
                  pwVar8 = L"checked";
                }
                FUN_14203e4e0(local_68[8],pwVar8);
              }
              plVar3 = local_20;
              LOCK();
              plVar2 = plVar2 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 != 1) {
                return;
              }
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 != 1) {
                return;
              }
              (**(code **)(*local_20 + 8))(local_20,1);
              return;
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
      }
    }
  }
  return;
}



// FUNCTION 141209b50 FUN_141209b50 body=864 status=ok
// SIG undefined FUN_141209b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141209b50(longlong *param_1,int *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = *(float *)((longlong)*param_2 * 0x20 + 8 + *(longlong *)param_1[1]) - (float)param_2[9];
  fVar5 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
  if (ABS(fVar9) < ABS(fVar5)) {
    fVar5 = fVar9;
  }
  fVar9 = fVar9 - fVar5;
  if (fVar9 < 0.0) {
    fVar9 = fVar9 + 360.0;
  }
  if (180.0 < fVar9) {
    fVar9 = fVar9 - 360.0;
  }
  lVar4 = *param_1;
  param_3 = (1.0 - *(float *)(lVar4 + 0x1734)) * fVar9 + (float)param_2[9] +
            *(float *)(lVar4 + 0x17a4) + param_3;
  fVar5 = (float)(int)(param_3 * 0.0027777778) * 360.0;
  if (ABS(param_3) < ABS(fVar5)) {
    fVar5 = param_3;
  }
  param_3 = param_3 - fVar5;
  if (param_3 < 0.0) {
    param_3 = param_3 + 360.0;
  }
  if (180.0 < param_3) {
    param_3 = param_3 - 360.0;
  }
  param_3 = param_3 * -0.008726646;
  if (param_3 < 0.0) {
    fVar5 = param_3 * 0.15915494 - 0.5;
  }
  else {
    fVar5 = param_3 * 0.15915494 + 0.5;
  }
  param_3 = param_3 - (float)(int)fVar5 * 6.2831855;
  if (param_3 <= 1.5707964) {
    if (-1.5707964 <= param_3) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = -1.0;
      param_3 = -3.1415927 - param_3;
    }
  }
  else {
    fVar5 = -1.0;
    param_3 = 3.1415927 - param_3;
  }
  fVar9 = param_3 * param_3;
  lVar4 = lVar4 + 0x3d0 + (ulonglong)*(byte *)((longlong)param_2 + 0x1e) * 0xb0;
  param_3 = (((((2.7525562e-06 - fVar9 * 2.3889859e-08) * fVar9 - 0.00019840874) * fVar9 +
              0.008333331) * fVar9 - 0.16666667) * fVar9 + 1.0) * param_3;
  fVar10 = (float)DAT_1464aa7b8 * param_3;
  fVar11 = DAT_1464aa7b8._4_4_ * param_3;
  fVar5 = (((((2.4760495e-05 - fVar9 * 2.6051615e-07) * fVar9 - 0.0013888378) * fVar9 + 0.041666638)
            * fVar9 - 0.5) * fVar9 + 1.0) * fVar5;
  param_3 = DAT_1464aa7c0 * param_3;
  FUN_141215940(lVar4);
  fVar9 = *(float *)(lVar4 + 0x30);
  fVar1 = *(float *)(lVar4 + 0x34);
  fVar2 = *(float *)(lVar4 + 0x38);
  fVar3 = *(float *)(lVar4 + 0x3c);
  *(undefined1 *)(lVar4 + 0xa9) = 1;
  *(bool *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa0) == 0;
  fVar6 = fVar5 * fVar9 * _DAT_146876b90 + fVar3 * fVar10 + param_3 * fVar1 * _DAT_146876b80 +
          fVar11 * fVar2 * _DAT_146876b70;
  fVar7 = param_3 * fVar9 * fRam0000000146876b94 + fVar3 * fVar11 +
          fVar5 * fVar1 * fRam0000000146876b84 + fVar10 * fVar2 * fRam0000000146876b74;
  fVar8 = fVar11 * fVar9 * fRam0000000146876b98 + fVar3 * param_3 +
          fVar10 * fVar1 * fRam0000000146876b88 + fVar5 * fVar2 * fRam0000000146876b78;
  fVar5 = fVar10 * fVar9 * fRam0000000146876b9c + fVar3 * fVar5 +
          fVar11 * fVar1 * fRam0000000146876b8c + param_3 * fVar2 * fRam0000000146876b7c;
  *(float *)(lVar4 + 0x30) = fVar6;
  *(float *)(lVar4 + 0x34) = fVar7;
  *(float *)(lVar4 + 0x38) = fVar8;
  *(float *)(lVar4 + 0x3c) = fVar5;
  if (*(int *)(lVar4 + 0xa0) == 0) {
    *(float *)(lVar4 + 0x60) = fVar6;
    *(float *)(lVar4 + 100) = fVar7;
    *(float *)(lVar4 + 0x68) = fVar8;
    *(float *)(lVar4 + 0x6c) = fVar5;
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar4 + 0x58);
  }
  return;
}



// FUNCTION 141209eb0 FUN_141209eb0 body=2683 status=ok
// SIG undefined FUN_141209eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141209eb0(longlong *param_1,byte *param_2,float *param_3,float param_4,float param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [224];
  
  fVar15 = *param_3 - *(float *)(param_2 + 8);
  fVar17 = param_3[1] - *(float *)(param_2 + 0xc);
  local_110 = param_3[2] - *(float *)(param_2 + 0x10);
  fVar13 = (*(float *)(param_2 + 0x14) + *(float *)(param_2 + 0x18)) *
           *(float *)(*(longlong *)(*param_1 + 0x15b8) + 0x734);
  fVar12 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + local_110 * local_110);
  if (0.0 < fVar12) {
    fVar11 = 1.0 / fVar12;
    if (fVar13 <= fVar12) {
      fVar12 = fVar13;
    }
    local_110 = fVar11 * local_110;
    fVar15 = fVar11 * fVar15;
    fVar13 = *(float *)(*(longlong *)(*param_1 + 0x15b8) + 0x734) - 1.0;
    fVar26 = -1.0;
    fVar24 = (fVar13 * param_5 + 1.0) * *(float *)(param_2 + 0x18);
    fVar25 = (fVar13 * param_4 + 1.0) * *(float *)(param_2 + 0x14);
    fVar13 = ((fVar12 * fVar12 + fVar25 * fVar25) - fVar24 * fVar24) / ((fVar12 + fVar12) * fVar25);
    if (-1.0 <= fVar13) {
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
    }
    else {
      fVar13 = -1.0;
    }
    local_118 = fVar15;
    local_114 = fVar11 * fVar17;
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
    fVar12 = ((fVar24 * fVar24 + fVar25 * fVar25) - fVar12 * fVar12) / ((fVar24 + fVar24) * fVar25);
    if (-1.0 <= fVar12) {
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
    }
    else {
      fVar12 = -1.0;
    }
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_128 = -(fVar11 * fVar17);
    local_120 = 0.0;
    fVar17 = fVar15 * fVar15 + local_128 * local_128;
    if (1e-08 < fVar17) {
      auVar16 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar11 = auVar16._0_4_;
      fVar11 = fVar11 + fVar11 * (0.5 - fVar17 * 0.5 * fVar11 * fVar11);
      fVar11 = fVar11 + fVar11 * (0.5 - fVar17 * 0.5 * fVar11 * fVar11);
      fVar15 = fVar15 * fVar11;
      local_128 = fVar11 * local_128;
    }
    fVar13 = fVar13 * 0.5;
    if (fVar13 < 0.0) {
      fVar17 = fVar13 * 0.15915494 - 0.5;
    }
    else {
      fVar17 = fVar13 * 0.15915494 + 0.5;
    }
    fVar13 = fVar13 - (float)(int)fVar17 * 6.2831855;
    if (fVar13 <= 1.5707964) {
      if (-1.5707964 <= fVar13) {
        fVar17 = 1.0;
      }
      else {
        fVar17 = -1.0;
        fVar13 = -3.1415927 - fVar13;
      }
    }
    else {
      fVar17 = -1.0;
      fVar13 = 3.1415927 - fVar13;
    }
    fStack_100 = 0.0;
    fVar11 = fVar13 * fVar13;
    fVar13 = (((((2.7525562e-06 - fVar11 * 2.3889859e-08) * fVar11 - 0.00019840874) * fVar11 +
               0.008333331) * fVar11 - 0.16666667) * fVar11 + 1.0) * fVar13;
    fVar22 = fVar13 * fVar15;
    fVar13 = fVar13 * local_128;
    fVar17 = (((((2.4760495e-05 - fVar11 * 2.6051615e-07) * fVar11 - 0.0013888378) * fVar11 +
               0.041666638) * fVar11 - 0.5) * fVar11 + 1.0) * fVar17;
    local_124 = fVar15;
    uVar8 = FRotationMatrix::MakeFromXY(local_e8,&local_118,&local_128);
    pfVar9 = (float *)FMatrix::ToQuat(uVar8,local_f8);
    fVar15 = *pfVar9;
    fVar11 = pfVar9[1];
    fVar21 = pfVar9[2];
    fVar14 = pfVar9[3];
    lVar10 = *param_1 + 0x180 + (ulonglong)*param_2 * 0xb0;
    fVar18 = fVar13 * fVar14 * _DAT_146876b90 + fVar17 * fVar15 + fVar22 * fVar21 * _DAT_146876b80 +
             fStack_100 * fVar11 * _DAT_146876b70;
    fVar19 = fVar13 * fVar21 * fRam0000000146876b94 + fVar17 * fVar11 +
             fVar22 * fVar14 * fRam0000000146876b84 + fStack_100 * fVar15 * fRam0000000146876b74;
    fVar20 = fVar13 * fVar11 * fRam0000000146876b98 + fVar17 * fVar21 +
             fVar22 * fVar15 * fRam0000000146876b88 + fStack_100 * fVar14 * fRam0000000146876b78;
    fVar15 = fVar13 * fVar15 * fRam0000000146876b9c + fVar17 * fVar14 +
             fVar22 * fVar11 * fRam0000000146876b8c + fStack_100 * fVar21 * fRam0000000146876b7c;
    local_108 = fVar13;
    fStack_104 = fVar22;
    fStack_fc = fVar17;
    FUN_141215940(lVar10);
    *(float *)(lVar10 + 0x30) = fVar18;
    *(float *)(lVar10 + 0x34) = fVar19;
    *(float *)(lVar10 + 0x38) = fVar20;
    *(float *)(lVar10 + 0x3c) = fVar15;
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(float *)(lVar10 + 0x60) = fVar18;
      *(float *)(lVar10 + 100) = fVar19;
      *(float *)(lVar10 + 0x68) = fVar20;
      *(float *)(lVar10 + 0x6c) = fVar15;
      *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar10 + 0x40);
      *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x48);
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
    lVar10 = *param_1 + 0x180 + (ulonglong)param_2[3] * 0xb0;
    FUN_141215940(lVar10);
    *(float *)(lVar10 + 0x30) = fVar18;
    *(float *)(lVar10 + 0x34) = fVar19;
    *(float *)(lVar10 + 0x38) = fVar20;
    *(float *)(lVar10 + 0x3c) = fVar15;
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(float *)(lVar10 + 0x60) = fVar18;
      *(float *)(lVar10 + 100) = fVar19;
      *(float *)(lVar10 + 0x68) = fVar20;
      *(float *)(lVar10 + 0x6c) = fVar15;
      *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar10 + 0x40);
      *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x48);
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
    fVar11 = -fVar19 + -fVar19;
    fVar13 = fVar20 + fVar20;
    lVar10 = *param_1 + 0x180 + (ulonglong)param_2[1] * 0xb0;
    fVar21 = (fVar11 * fVar15 + fVar13 * fVar18) * fVar25 + *(float *)(param_2 + 0x10);
    fVar17 = (fVar13 * fVar15 - fVar11 * fVar18) * fVar25 + *(float *)(param_2 + 0xc);
    fVar13 = ((fVar11 * fVar19 - fVar13 * fVar20) + 1.0) * fVar25 + *(float *)(param_2 + 8);
    FUN_141215940(lVar10);
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    auVar16._4_4_ = fVar17;
    auVar16._0_4_ = fVar13;
    auVar16._8_4_ = fVar21;
    auVar16._12_4_ = 0;
    *(undefined1 (*) [16])(lVar10 + 0x40) = auVar16;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar10 + 0x38);
      auVar5._4_4_ = fVar17;
      auVar5._0_4_ = fVar13;
      auVar5._8_4_ = fVar21;
      auVar5._12_4_ = 0;
      *(undefined1 (*) [16])(lVar10 + 0x70) = auVar5;
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
    lVar10 = *param_1 + 0x180 + (ulonglong)param_2[3] * 0xb0;
    FUN_141215940(lVar10);
    auVar6._4_4_ = fVar17;
    auVar6._0_4_ = fVar13;
    auVar6._8_4_ = fVar21;
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(lVar10 + 0x40) = auVar6;
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar10 + 0x38);
      auVar7._4_4_ = fVar17;
      auVar7._0_4_ = fVar13;
      auVar7._8_4_ = fVar21;
      auVar7._12_4_ = 0;
      *(undefined1 (*) [16])(lVar10 + 0x70) = auVar7;
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
    fVar12 = (fVar12 - 3.1415927) * 0.5;
    if (fVar12 < 0.0) {
      fVar11 = fVar12 * 0.15915494 - 0.5;
    }
    else {
      fVar11 = fVar12 * 0.15915494 + 0.5;
    }
    fVar12 = fVar12 - (float)(int)fVar11 * 6.2831855;
    if (fVar12 <= 1.5707964) {
      if (-1.5707964 <= fVar12) {
        fVar26 = 1.0;
      }
      else {
        fVar12 = -3.1415927 - fVar12;
      }
    }
    else {
      fVar12 = 3.1415927 - fVar12;
    }
    fVar25 = fVar12 * fVar12;
    lVar10 = *param_1 + 0x180 + (ulonglong)param_2[1] * 0xb0;
    fVar12 = (((((2.7525562e-06 - fVar25 * 2.3889859e-08) * fVar25 - 0.00019840874) * fVar25 +
               0.008333331) * fVar25 - 0.16666667) * fVar25 + 1.0) * fVar12;
    fVar14 = local_128 * fVar12;
    fVar11 = local_124 * fVar12;
    fVar12 = local_120 * fVar12;
    fVar26 = (((((2.4760495e-05 - fVar25 * 2.6051615e-07) * fVar25 - 0.0013888378) * fVar25 +
               0.041666638) * fVar25 - 0.5) * fVar25 + 1.0) * fVar26;
    fVar25 = fVar15 * fVar14 * _DAT_146876b90 + fVar26 * fVar18 + fVar20 * fVar11 * _DAT_146876b80 +
             fVar19 * fVar12 * _DAT_146876b70;
    fVar22 = fVar20 * fVar14 * fRam0000000146876b94 + fVar26 * fVar19 +
             fVar15 * fVar11 * fRam0000000146876b84 + fVar18 * fVar12 * fRam0000000146876b74;
    fVar23 = fVar19 * fVar14 * fRam0000000146876b98 + fVar26 * fVar20 +
             fVar18 * fVar11 * fRam0000000146876b88 + fVar15 * fVar12 * fRam0000000146876b78;
    fVar12 = fVar18 * fVar14 * fRam0000000146876b9c + fVar26 * fVar15 +
             fVar19 * fVar11 * fRam0000000146876b8c + fVar20 * fVar12 * fRam0000000146876b7c;
    local_108 = fVar25;
    fStack_104 = fVar22;
    fStack_100 = fVar23;
    fStack_fc = fVar12;
    FUN_141215940(lVar10);
    *(float *)(lVar10 + 0x30) = fVar25;
    *(float *)(lVar10 + 0x34) = fVar22;
    *(float *)(lVar10 + 0x38) = fVar23;
    *(float *)(lVar10 + 0x3c) = fVar12;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(float *)(lVar10 + 0x60) = fVar25;
      *(float *)(lVar10 + 100) = fVar22;
      *(float *)(lVar10 + 0x68) = fVar23;
      *(float *)(lVar10 + 0x6c) = fVar12;
      *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar10 + 0x40);
      *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x48);
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
    lVar10 = *param_1 + 0x180 + (ulonglong)param_2[4] * 0xb0;
    FUN_141215940(lVar10);
    *(float *)(lVar10 + 0x30) = fVar25;
    *(float *)(lVar10 + 0x34) = fVar22;
    *(float *)(lVar10 + 0x38) = fVar23;
    *(float *)(lVar10 + 0x3c) = fVar12;
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(float *)(lVar10 + 0x60) = fVar25;
      *(float *)(lVar10 + 100) = fVar22;
      *(float *)(lVar10 + 0x68) = fVar23;
      *(float *)(lVar10 + 0x6c) = fVar12;
      *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar10 + 0x40);
      *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x48);
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
    fVar12 = fStack_100 + fStack_100;
    fVar15 = -fStack_104 + -fStack_104;
    lVar10 = *param_1 + 0x180 + (ulonglong)param_2[2] * 0xb0;
    fVar13 = fVar13 + ((fStack_104 * fVar15 - fStack_100 * fVar12) + 1.0) * fVar24;
    fVar21 = fVar21 + (fStack_fc * fVar15 + local_108 * fVar12) * fVar24;
    fVar17 = (fStack_fc * fVar12 - local_108 * fVar15) * fVar24 + fVar17;
    FUN_141215940(lVar10);
    auVar1._4_4_ = fVar17;
    auVar1._0_4_ = fVar13;
    auVar1._8_4_ = fVar21;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(lVar10 + 0x40) = auVar1;
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar10 + 0x38);
      auVar2._4_4_ = fVar17;
      auVar2._0_4_ = fVar13;
      auVar2._8_4_ = fVar21;
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(lVar10 + 0x70) = auVar2;
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
    lVar10 = *param_1 + 0x180 + (ulonglong)param_2[4] * 0xb0;
    FUN_141215940(lVar10);
    auVar3._4_4_ = fVar17;
    auVar3._0_4_ = fVar13;
    auVar3._8_4_ = fVar21;
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(lVar10 + 0x40) = auVar3;
    *(undefined1 *)(lVar10 + 0xa9) = 1;
    *(bool *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa0) == 0;
    if (*(int *)(lVar10 + 0xa0) == 0) {
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)(lVar10 + 0x38);
      auVar4._4_4_ = fVar17;
      auVar4._0_4_ = fVar13;
      auVar4._8_4_ = fVar21;
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])(lVar10 + 0x70) = auVar4;
      *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar10 + 0x58);
    }
  }
  return;
}



// FUNCTION 14120a930 FUN_14120a930 body=413 status=ok
// SIG undefined FUN_14120a930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14120a930(longlong *param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_58 [12];
  undefined1 local_4c [68];
  
  if (param_3 == (longlong *)0x0) {
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = DAT_1468b5d98;
  }
  else {
    pfVar4 = (float *)(**(code **)(*param_3 + 0x428))(param_3,local_58,DAT_146876fe0);
    pfVar5 = (float *)(**(code **)(*param_3 + 0x428))(param_3,local_4c,DAT_146876fe8);
    fVar8 = *pfVar5 - *pfVar4;
    fVar6 = pfVar5[2] - pfVar4[2];
    fVar7 = pfVar5[1] - pfVar4[1];
    pfVar4 = (float *)*param_1;
    auVar13 = *(undefined1 (*) [16])(pfVar4 + 8);
    fVar3 = auVar13._0_4_;
    fVar15 = auVar13._4_4_;
    fVar17 = auVar13._8_4_;
    fVar18 = *pfVar4 * _DAT_146876ec0;
    fVar19 = pfVar4[1] * fRam0000000146876ec4;
    fVar20 = pfVar4[2] * fRam0000000146876ec8;
    fVar21 = pfVar4[3] * fRam0000000146876ecc;
    auVar13 = rcpps(in_XMM5,auVar13);
    fVar9 = fVar6 * fVar19 - fVar7 * fVar20;
    fVar10 = fVar8 * fVar20 - fVar6 * fVar18;
    fVar11 = fVar7 * fVar18 - fVar8 * fVar19;
    fVar12 = auVar13._0_4_;
    fVar14 = auVar13._4_4_;
    fVar16 = auVar13._8_4_;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar11 = fVar11 + fVar11;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar3;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar15;
    fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
    bVar1 = (float)((uint)fVar15 & uRam0000000146876bf4) <= fRam0000000146876eb4;
    bVar2 = (float)((uint)fVar17 & uRam0000000146876bf8) <= fRam0000000146876eb8;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar3;
    fVar15 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar15;
    fVar17 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar17;
    *param_2 = ((fVar11 * fVar19 - fVar10 * fVar20) + fVar21 * fVar9 + fVar8) *
               (float)(-(uint)((float)((uint)fVar3 & _DAT_146876bf0) <= _DAT_146876eb0) &
                       (uint)fVar12 ^ (uint)fVar12);
    param_2[2] = ((fVar10 * fVar18 - fVar9 * fVar19) + fVar21 * fVar11 + fVar6) *
                 (float)(-(uint)bVar2 & (uint)fVar17 ^ (uint)fVar17);
    param_2[1] = ((fVar9 * fVar20 - fVar11 * fVar18) + fVar21 * fVar10 + fVar7) *
                 (float)(-(uint)bVar1 & (uint)fVar15 ^ (uint)fVar15);
  }
  return param_2;
}



// FUNCTION 14120aad0 FUN_14120aad0 body=781 status=ok
// SIG undefined FUN_14120aad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14120aad0(longlong *param_1,int *param_2,byte param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_48;
  float fStack_44;
  
  uVar1 = *(undefined8 *)param_1[1];
  fVar10 = *(float *)((longlong)*param_2 * 0x20 + 8 + *(longlong *)param_1[2]) * -0.008726646;
  if (fVar10 < 0.0) {
    fVar9 = fVar10 * 0.15915494 - 0.5;
  }
  else {
    fVar9 = fVar10 * 0.15915494 + 0.5;
  }
  fVar10 = fVar10 - (float)(int)fVar9 * 6.2831855;
  if (fVar10 <= 1.5707964) {
    if (-1.5707964 <= fVar10) {
      fVar9 = 1.0;
    }
    else {
      fVar9 = -1.0;
      fVar10 = -3.1415927 - fVar10;
    }
  }
  else {
    fVar9 = -1.0;
    fVar10 = 3.1415927 - fVar10;
  }
  local_48 = (float)uVar1;
  pfVar2 = (float *)param_1[3];
  fVar12 = fVar10 * fVar10;
  fVar10 = (((((2.7525562e-06 - fVar12 * 2.3889859e-08) * fVar12 - 0.00019840874) * fVar12 +
             0.008333331) * fVar12 - 0.16666667) * fVar12 + 1.0) * fVar10;
  fStack_44 = (float)((ulonglong)uVar1 >> 0x20);
  local_48 = local_48 * fVar10;
  fStack_44 = fStack_44 * fVar10;
  fVar10 = *(float *)((undefined8 *)param_1[1] + 1) * fVar10;
  fVar11 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar6 = pfVar2[2];
  fVar7 = pfVar2[3];
  fVar9 = (((((2.4760495e-05 - fVar12 * 2.6051615e-07) * fVar12 - 0.0013888378) * fVar12 +
            0.041666638) * fVar12 - 0.5) * fVar12 + 1.0) * fVar9;
  lVar8 = *param_1 + 0x230 + (ulonglong)param_3 * 0xb0;
  fVar12 = fVar11 * fVar9 * _DAT_146876b90 + fVar7 * local_48 + fVar5 * fVar10 * _DAT_146876b80 +
           fVar6 * fStack_44 * _DAT_146876b70;
  fVar13 = fVar11 * fVar10 * fRam0000000146876b94 + fVar7 * fStack_44 +
           fVar5 * fVar9 * fRam0000000146876b84 + fVar6 * local_48 * fRam0000000146876b74;
  fVar14 = fVar11 * fStack_44 * fRam0000000146876b98 + fVar7 * fVar10 +
           fVar5 * local_48 * fRam0000000146876b88 + fVar6 * fVar9 * fRam0000000146876b78;
  fVar10 = fVar11 * local_48 * fRam0000000146876b9c + fVar7 * fVar9 +
           fVar5 * fStack_44 * fRam0000000146876b8c + fVar6 * fVar10 * fRam0000000146876b7c;
  FUN_141215940(lVar8);
  *(float *)(lVar8 + 0x30) = fVar12;
  *(float *)(lVar8 + 0x34) = fVar13;
  *(float *)(lVar8 + 0x38) = fVar14;
  *(float *)(lVar8 + 0x3c) = fVar10;
  *(undefined1 *)(lVar8 + 0xa9) = 1;
  *(bool *)(lVar8 + 0xa8) = *(int *)(lVar8 + 0xa0) == 0;
  if (*(int *)(lVar8 + 0xa0) == 0) {
    *(float *)(lVar8 + 0x60) = fVar12;
    *(float *)(lVar8 + 100) = fVar13;
    *(float *)(lVar8 + 0x68) = fVar14;
    *(float *)(lVar8 + 0x6c) = fVar10;
    *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar8 + 0x40);
    *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar8 + 0x48);
    *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(lVar8 + 0x58);
  }
  lVar8 = *param_1 + 0x230 + (ulonglong)param_3 * 0xb0;
  FUN_141215940(lVar8);
  fVar11 = *(float *)(lVar8 + 0x40) + (float)param_2[1];
  fVar9 = *(float *)(lVar8 + 0x44) + (float)param_2[2];
  fVar10 = *(float *)(lVar8 + 0x48) + (float)param_2[3];
  *(undefined1 *)(lVar8 + 0xa9) = 1;
  *(bool *)(lVar8 + 0xa8) = *(int *)(lVar8 + 0xa0) == 0;
  auVar3._4_4_ = fVar9;
  auVar3._0_4_ = fVar11;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(lVar8 + 0x40) = auVar3;
  if (*(int *)(lVar8 + 0xa0) == 0) {
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar8 + 0x30);
    *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar8 + 0x38);
    auVar4._4_4_ = fVar9;
    auVar4._0_4_ = fVar11;
    auVar4._8_4_ = fVar10;
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(lVar8 + 0x70) = auVar4;
    *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(lVar8 + 0x58);
  }
  return;
}



// FUNCTION 14120ade0 FUN_14120ade0 body=2015 status=ok
// SIG undefined FUN_14120ade0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14120ade0(longlong *param_1,int *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [224];
  
  fVar5 = (float)param_2[4];
  fVar13 = (float)param_2[5];
  fVar6 = (float)param_2[1];
  fVar1 = (float)param_2[6];
  fVar2 = (float)param_2[2];
  fVar7 = (float)param_2[3];
  lVar4 = (ulonglong)*(byte *)(param_2 + 7) * 0xb0 + *param_1;
  FUN_141215940(lVar4 + 0x3d0);
  local_138 = (fVar6 + fVar5) - *(float *)(lVar4 + 0x410);
  local_134 = (fVar2 + fVar13) - *(float *)(lVar4 + 0x414);
  local_130 = (fVar7 + fVar1) - *(float *)(lVar4 + 0x418);
  uVar3 = FRotationMatrix::MakeFromXZ(local_f8,&local_138,param_1[3]);
  FMatrix::ToQuat(uVar3,&local_108);
  lVar4 = *param_1 + 0x3d0 + (ulonglong)*(byte *)(param_2 + 7) * 0xb0;
  FUN_141215940(lVar4);
  *(undefined8 *)(lVar4 + 0x30) = local_108;
  *(undefined8 *)(lVar4 + 0x38) = uStack_100;
  *(undefined1 *)(lVar4 + 0xa9) = 1;
  *(bool *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa0) == 0;
  if (*(int *)(lVar4 + 0xa0) == 0) {
    *(undefined8 *)(lVar4 + 0x60) = local_108;
    *(undefined8 *)(lVar4 + 0x68) = uStack_100;
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar4 + 0x58);
  }
  param_3 = param_3 * 0.008726646;
  if (param_3 < 0.0) {
    fVar5 = param_3 * 0.15915494 - 0.5;
  }
  else {
    fVar5 = param_3 * 0.15915494 + 0.5;
  }
  fVar13 = -1.0;
  param_3 = param_3 - (float)(int)fVar5 * 6.2831855;
  if (param_3 <= 1.5707964) {
    if (-1.5707964 <= param_3) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = -1.0;
      param_3 = -3.1415927 - param_3;
    }
  }
  else {
    fVar5 = -1.0;
    param_3 = 3.1415927 - param_3;
  }
  fVar6 = param_3 * param_3;
  lVar4 = *param_1 + 0x3d0 + (ulonglong)*(byte *)((longlong)param_2 + 0x1d) * 0xb0;
  param_3 = (((((2.7525562e-06 - fVar6 * 2.3889859e-08) * fVar6 - 0.00019840874) * fVar6 +
              0.008333331) * fVar6 - 0.16666667) * fVar6 + 1.0) * param_3;
  fVar11 = DAT_1464aa798._4_4_ * param_3;
  fVar12 = DAT_1464aa7a0 * param_3;
  param_3 = (float)DAT_1464aa798 * param_3;
  fVar5 = (((((2.4760495e-05 - fVar6 * 2.6051615e-07) * fVar6 - 0.0013888378) * fVar6 + 0.041666638)
            * fVar6 - 0.5) * fVar6 + 1.0) * fVar5;
  FUN_141215940(lVar4);
  fVar6 = *(float *)(lVar4 + 0x30);
  fVar1 = *(float *)(lVar4 + 0x34);
  fVar2 = *(float *)(lVar4 + 0x38);
  fVar7 = *(float *)(lVar4 + 0x3c);
  *(undefined1 *)(lVar4 + 0xa9) = 1;
  *(bool *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa0) == 0;
  fVar8 = fVar7 * param_3 * _DAT_146876b90 + fVar5 * fVar6 + fVar2 * fVar11 * _DAT_146876b80 +
          fVar1 * fVar12 * _DAT_146876b70;
  fVar9 = fVar2 * param_3 * fRam0000000146876b94 + fVar5 * fVar1 +
          fVar7 * fVar11 * fRam0000000146876b84 + fVar6 * fVar12 * fRam0000000146876b74;
  fVar10 = fVar1 * param_3 * fRam0000000146876b98 + fVar5 * fVar2 +
           fVar6 * fVar11 * fRam0000000146876b88 + fVar7 * fVar12 * fRam0000000146876b78;
  fVar5 = fVar6 * param_3 * fRam0000000146876b9c + fVar5 * fVar7 +
          fVar1 * fVar11 * fRam0000000146876b8c + fVar2 * fVar12 * fRam0000000146876b7c;
  *(float *)(lVar4 + 0x30) = fVar8;
  *(float *)(lVar4 + 0x34) = fVar9;
  *(float *)(lVar4 + 0x38) = fVar10;
  *(float *)(lVar4 + 0x3c) = fVar5;
  if (*(int *)(lVar4 + 0xa0) == 0) {
    *(float *)(lVar4 + 0x60) = fVar8;
    *(float *)(lVar4 + 100) = fVar9;
    *(float *)(lVar4 + 0x68) = fVar10;
    *(float *)(lVar4 + 0x6c) = fVar5;
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar4 + 0x58);
  }
  param_4 = *(float *)((longlong)*param_2 * 0x20 + 8 + *(longlong *)param_1[1]) +
            *(float *)(*param_1 + 0x17a4) + param_4;
  fVar5 = (float)(int)(param_4 * 0.0027777778) * 360.0;
  if (ABS(param_4) < ABS(fVar5)) {
    fVar5 = param_4;
  }
  param_4 = param_4 - fVar5;
  if (param_4 < 0.0) {
    param_4 = param_4 + 360.0;
  }
  if (180.0 < param_4) {
    param_4 = param_4 - 360.0;
  }
  param_4 = param_4 * -0.008726646;
  if (param_4 < 0.0) {
    fVar5 = param_4 * 0.15915494 - 0.5;
  }
  else {
    fVar5 = param_4 * 0.15915494 + 0.5;
  }
  param_4 = param_4 - (float)(int)fVar5 * 6.2831855;
  if (param_4 <= 1.5707964) {
    if (-1.5707964 <= param_4) {
      fVar13 = 1.0;
    }
    else {
      param_4 = -3.1415927 - param_4;
    }
  }
  else {
    param_4 = 3.1415927 - param_4;
  }
  fVar5 = param_4 * param_4;
  lVar4 = *param_1 + 0x3d0 + (ulonglong)*(byte *)((longlong)param_2 + 0x1e) * 0xb0;
  param_4 = (((((2.7525562e-06 - fVar5 * 2.3889859e-08) * fVar5 - 0.00019840874) * fVar5 +
              0.008333331) * fVar5 - 0.16666667) * fVar5 + 1.0) * param_4;
  fVar7 = DAT_1464aa7c0 * param_4;
  fVar11 = (float)DAT_1464aa7b8 * param_4;
  param_4 = DAT_1464aa7b8._4_4_ * param_4;
  fVar13 = (((((2.4760495e-05 - fVar5 * 2.6051615e-07) * fVar5 - 0.0013888378) * fVar5 + 0.041666638
             ) * fVar5 - 0.5) * fVar5 + 1.0) * fVar13;
  FUN_141215940(lVar4);
  fVar5 = *(float *)(lVar4 + 0x30);
  fVar6 = *(float *)(lVar4 + 0x34);
  fVar1 = *(float *)(lVar4 + 0x38);
  fVar2 = *(float *)(lVar4 + 0x3c);
  *(undefined1 *)(lVar4 + 0xa9) = 1;
  *(bool *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa0) == 0;
  fVar8 = fVar13 * fVar5 * _DAT_146876b90 + fVar2 * fVar11 + fVar7 * fVar6 * _DAT_146876b80 +
          param_4 * fVar1 * _DAT_146876b70;
  fVar9 = fVar7 * fVar5 * fRam0000000146876b94 + fVar2 * param_4 +
          fVar13 * fVar6 * fRam0000000146876b84 + fVar11 * fVar1 * fRam0000000146876b74;
  fVar10 = param_4 * fVar5 * fRam0000000146876b98 + fVar2 * fVar7 +
           fVar11 * fVar6 * fRam0000000146876b88 + fVar13 * fVar1 * fRam0000000146876b78;
  fVar5 = fVar11 * fVar5 * fRam0000000146876b9c + fVar2 * fVar13 +
          param_4 * fVar6 * fRam0000000146876b8c + fVar7 * fVar1 * fRam0000000146876b7c;
  *(float *)(lVar4 + 0x30) = fVar8;
  *(float *)(lVar4 + 0x34) = fVar9;
  *(float *)(lVar4 + 0x38) = fVar10;
  *(float *)(lVar4 + 0x3c) = fVar5;
  if (*(int *)(lVar4 + 0xa0) == 0) {
    *(float *)(lVar4 + 0x60) = fVar8;
    *(float *)(lVar4 + 100) = fVar9;
    *(float *)(lVar4 + 0x68) = fVar10;
    *(float *)(lVar4 + 0x6c) = fVar5;
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined4 *)(lVar4 + 0x80) = *(undefined4 *)(lVar4 + 0x50);
    *(undefined4 *)(lVar4 + 0x84) = *(undefined4 *)(lVar4 + 0x54);
    *(undefined4 *)(lVar4 + 0x88) = *(undefined4 *)(lVar4 + 0x58);
    *(undefined4 *)(lVar4 + 0x8c) = *(undefined4 *)(lVar4 + 0x5c);
  }
  lVar4 = (ulonglong)*(byte *)((longlong)param_2 + 0x1f) * 0xb0 + *param_1;
  FUN_141215940(lVar4 + 0x3d0);
  fVar5 = *(float *)(lVar4 + 0x410);
  fVar13 = *(float *)(lVar4 + 0x414);
  fVar6 = *(float *)(lVar4 + 0x418);
  lVar4 = (ulonglong)*(byte *)(param_2 + 8) * 0xb0 + *param_1;
  FUN_141215940(lVar4 + 0x3d0);
  local_128 = *(float *)(lVar4 + 0x410) - fVar5;
  local_124 = *(float *)(lVar4 + 0x414) - fVar13;
  local_120 = *(float *)(lVar4 + 0x418) - fVar6;
  uVar3 = FRotationMatrix::MakeFromZX(local_f8,&local_128,param_1[2]);
  FMatrix::ToQuat(uVar3,&local_118);
  lVar4 = *param_1 + 0x3d0 + (ulonglong)*(byte *)((longlong)param_2 + 0x1f) * 0xb0;
  FUN_141215940(lVar4);
  *(undefined8 *)(lVar4 + 0x30) = local_118;
  *(undefined8 *)(lVar4 + 0x38) = uStack_110;
  *(undefined1 *)(lVar4 + 0xa9) = 1;
  *(bool *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa0) == 0;
  if (*(int *)(lVar4 + 0xa0) == 0) {
    *(undefined8 *)(lVar4 + 0x60) = local_118;
    *(undefined8 *)(lVar4 + 0x68) = uStack_110;
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar4 + 0x58);
  }
  lVar4 = *param_1 + 0x3d0 + (ulonglong)*(byte *)(param_2 + 8) * 0xb0;
  FUN_141215940(lVar4);
  *(undefined8 *)(lVar4 + 0x30) = local_118;
  *(undefined8 *)(lVar4 + 0x38) = uStack_110;
  *(undefined1 *)(lVar4 + 0xa9) = 1;
  *(bool *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa0) == 0;
  if (*(int *)(lVar4 + 0xa0) == 0) {
    *(undefined8 *)(lVar4 + 0x60) = local_118;
    *(undefined8 *)(lVar4 + 0x68) = uStack_110;
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x48);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar4 + 0x58);
  }
  return;
}



// FUNCTION 14120b5c0 FUN_14120b5c0 body=491 status=ok
// SIG undefined FUN_14120b5c0(void)

undefined4 *
FUN_14120b5c0(longlong *param_1,undefined4 *param_2,byte param_3,byte param_4,byte param_5,
             undefined1 param_6,undefined1 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_98;
  undefined4 uStack_94;
  
  lVar4 = (ulonglong)param_3 * 0xb0 + *param_1;
  FUN_141215940(lVar4 + 0x180);
  fVar1 = *(float *)(lVar4 + 0x1c0);
  fVar2 = *(float *)(lVar4 + 0x1c4);
  fVar3 = *(float *)(lVar4 + 0x1c8);
  lVar4 = (ulonglong)param_4 * 0xb0 + *param_1;
  FUN_141215940(lVar4 + 0x180);
  fVar5 = *(float *)(lVar4 + 0x1c0);
  fVar6 = *(float *)(lVar4 + 0x1c4);
  fVar7 = *(float *)(lVar4 + 0x1c8);
  fVar9 = fVar1 - fVar5;
  fVar10 = fVar2 - fVar6;
  fVar8 = fVar3 - fVar7;
  lVar4 = (ulonglong)param_5 * 0xb0 + *param_1;
  uStack_94 = CONCAT31(uStack_94._1_3_,param_7);
  local_98 = CONCAT22(CONCAT11(param_6,param_5),CONCAT11(param_4,param_3));
  FUN_141215940(lVar4 + 0x180);
  fVar5 = *(float *)(lVar4 + 0x1c0) - fVar5;
  fVar6 = *(float *)(lVar4 + 0x1c4) - fVar6;
  fVar7 = *(float *)(lVar4 + 0x1c8) - fVar7;
  *param_2 = local_98;
  param_2[1] = uStack_94;
  param_2[2] = fVar1;
  param_2[3] = fVar2;
  *(ulonglong *)(param_2 + 4) =
       CONCAT44(SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8),fVar3);
  param_2[6] = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
  return param_2;
}



// FUNCTION 14120b7b0 FUN_14120b7b0 body=423 status=ok
// SIG undefined FUN_14120b7b0(void)

void FUN_14120b7b0(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong local_38;
  ulonglong local_30;
  
  plVar7 = *(longlong **)(param_1 + 8);
  iVar12 = 0;
  if (0 < (int)plVar7[1]) {
    lVar13 = 0;
    do {
      lVar11 = *plVar7;
      if (param_2 == '\0') {
        cVar1 = *(char *)(lVar13 + 0x22 + lVar11);
      }
      else {
        cVar1 = *(char *)(lVar13 + 0x21 + lVar11);
      }
      if (cVar1 != '\0') {
        FUN_1412098b0(*(undefined8 *)(param_1 + 0x10),lVar11 + (longlong)iVar12 * 0x28,
                      *(undefined1 *)(lVar13 + 0x20 + lVar11));
        puVar6 = PTR_u_ChallengeListItem_Map_1462a24e0;
        plVar7 = *(longlong **)(param_1 + 0x18);
        uVar2 = *(undefined4 *)(lVar13 + 0x18 + **(longlong **)(param_1 + 8));
        uVar3 = *(undefined4 *)(lVar13 + 0x1c + **(longlong **)(param_1 + 8));
        local_38 = 0;
        local_30 = 0;
        if ((PTR_u_ChallengeListItem_Map_1462a24e0 != (undefined *)0x0) &&
           (*(short *)PTR_u_ChallengeListItem_Map_1462a24e0 != 0)) {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (*(short *)(PTR_u_ChallengeListItem_Map_1462a24e0 + lVar11 * 2) != 0);
          uVar10 = (int)lVar11 + 1;
          local_30 = (ulonglong)uVar10;
          if (0 < (int)uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          }
          FGenericPlatformString::Memcpy(local_38,puVar6,(longlong)(int)uVar10 * 2);
        }
        uVar4 = *(undefined8 *)(*plVar7 + 0x1e0);
        uVar8 = AReplicationGraphDebugActor::GetPrivateStaticClass();
        lVar11 = FUN_142ebcee0(uVar4,&local_38,uVar8,0);
        if (lVar11 == 0) {
LAB_14120b8f5:
          lVar11 = 0;
        }
        else {
          lVar9 = AReplicationGraphDebugActor::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_14120b8f5;
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (lVar11 != 0) {
          FUN_1412405d0(lVar11,uVar3,uVar2);
        }
      }
      plVar7 = *(longlong **)(param_1 + 8);
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 0x28;
    } while (iVar12 < (int)plVar7[1]);
  }
  return;
}



// FUNCTION 14120b960 FUN_14120b960 body=590 status=ok
// SIG undefined FUN_14120b960(void)

void FUN_14120b960(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  lVar6 = FUN_1410833d0(*param_1);
  if (lVar6 != 0) {
    plVar1 = (longlong *)(lVar6 + 0x9e8);
    plVar7 = (longlong *)*plVar1;
    plVar12 = plVar7 + (longlong)*(int *)(lVar6 + 0x9f0) * 2;
    lVar8 = *param_1;
    if (plVar7 != plVar12) {
      do {
        if ((((int)plVar7[1] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,lVar8), cVar5 != '\0')) goto LAB_14120ba9b;
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar12);
      lVar8 = *param_1;
    }
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar7 + 1,lVar8);
      *(undefined4 *)(plVar7 + 2) = 0x41234b80;
      *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
      *(undefined4 *)(plVar7 + 3) = 0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_7c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
      iVar2 = *(int *)(lVar6 + 0x9f0);
      *(int *)(lVar6 + 0x9f0) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x9f4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar9 = plVar7;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
LAB_14120ba9b:
    lVar8 = *param_1;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_78[0] = 6;
    lVar11 = 0;
    if (*(longlong *)(lVar8 + 0x900) != 0) {
      lVar10 = AAFGameState::GetPrivateStaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x900);
      for (lVar4 = lVar8; (lVar11 = 0, lVar4 != 0 && (lVar11 = lVar8, lVar4 != lVar10));
          lVar4 = *(longlong *)(lVar4 + 0x30)) {
      }
    }
    local_70 = lVar11;
    FUN_1411f9940(lVar6 + 0x6e0,local_78,1);
    puVar9 = (undefined8 *)FName::FName(local_res8,L"VaultCard_Chest",1);
    FUN_1411f9b50(lVar6 + 0x6e0,*puVar9);
    FName::FName(local_res8,L"VaultCard_Chest",1);
    FUN_140ec02d0(lVar6 + 0x6b8,local_res8,0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
  }
  return;
}



// FUNCTION 14120bbb0 FUN_14120bbb0 body=513 status=ok
// SIG undefined FUN_14120bbb0(void)

void FUN_14120bbb0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48 [8];
  
  lVar3 = FWeakObjectPtr::Get(param_1[1] + 0x58c);
  if (lVar3 != 0) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      cVar2 = FUN_142dcfc60(lVar3);
      if (cVar2 == '\0') {
        local_48[7] = 0x14;
        local_48[6] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 6,0);
        FGenericPlatformString::Memcpy(local_48[6],L"ChallengeListHeader",0x28);
        lVar4 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_48 + 6,0);
        lVar3 = local_48[6];
      }
      else if (cVar2 == '\x01') {
        local_48[5] = 0x1a;
        local_48[4] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 4,0);
        FGenericPlatformString::Memcpy(local_48[4],L"ChallengeListHeader_Split",0x34);
        lVar4 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_48 + 4,0);
        lVar3 = local_48[4];
      }
      else if (cVar2 == '\x02') {
        local_48[3] = 0x19;
        local_48[2] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
        FGenericPlatformString::Memcpy(local_48[2],L"ChallengeListHeader_Vert",0x32);
        lVar4 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_48 + 2,0);
        lVar3 = local_48[2];
      }
      else {
        if (cVar2 != '\x03') {
          return;
        }
        local_48[1] = 0x19;
        local_48[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
        FGenericPlatformString::Memcpy(local_48[0],L"ChallengeListHeader_4way",0x32);
        lVar4 = FUN_141202760(*(undefined8 *)(*param_1 + 0x1e0),local_48,0);
        lVar3 = local_48[0];
      }
      if (lVar3 != 0) {
        FMemory::Free();
      }
      if (lVar4 != 0) {
        FUN_142ed3af0(lVar4,param_2,0);
      }
    }
  }
  return;
}



// FUNCTION 14120bdc0 FUN_14120bdc0 body=780 status=ok
// SIG undefined FUN_14120bdc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14120bdc0(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [32];
  
  local_68 = *(longlong *)(*param_1 + 0x88);
  lStack_60 = CONCAT44(lStack_60._4_4_,*(undefined4 *)(*param_1 + 0x90));
  (**(code **)(*param_2 + 0x3f8))(param_2,&local_68);
  lVar10 = *param_1;
  if (*(char *)(lVar10 + 0xa0) == '\0') {
    FUN_142399e30(param_2,*(undefined8 *)(*(longlong *)param_1[1] + 0x4d0),
                  *(undefined8 *)(lVar10 + 0x68));
    lVar10 = *param_1;
  }
  if (*(longlong *)(lVar10 + 0x98) == 0) {
    (**(code **)(*param_2 + 0x638))(param_2,0);
  }
  else {
    (**(code **)(*param_2 + 0x640))(param_2,*(undefined8 *)(lVar10 + 0x98));
  }
  FUN_14234b150(param_2);
  lVar10 = *param_1;
  if (*(char *)(lVar10 + 0x95) == '\x01') {
    fVar12 = -*(float *)(*(longlong *)param_1[1] + 0xeb4);
  }
  else if (*(char *)(lVar10 + 0x95) == '\x02') {
    fVar12 = *(float *)(*(longlong *)param_1[1] + 0xeb4);
  }
  else {
    fVar12 = 0.0;
  }
  uVar2 = *(undefined4 *)(lVar10 + 0x78);
  uVar3 = *(undefined4 *)(lVar10 + 0x70);
  fVar12 = fVar12 + *(float *)(lVar10 + 0x74);
  pfVar1 = (float *)(param_2 + 0x50);
  local_58 = CONCAT44(fVar12,uVar3);
  local_50 = uVar2;
  if (((*(float *)(param_2 + 0x3f) != *pfVar1) ||
      (*(float *)((longlong)param_2 + 0x1fc) != *(float *)((longlong)param_2 + 0x284))) ||
     (*(float *)(param_2 + 0x40) != *(float *)(param_2 + 0x51))) {
    local_68 = *(longlong *)*(undefined1 (*) [12])(param_2 + 0x3f);
    auVar11._12_4_ = 0;
    auVar11._0_12_ = *(undefined1 (*) [12])(param_2 + 0x3f);
    fVar5 = (float)DAT_146876b20;
    fVar6 = DAT_146876b20._4_4_;
    fVar7 = DAT_146876b20._8_4_;
    auVar11 = divps(auVar11,_DAT_146876b20);
    fVar14 = (float)local_68 - (float)(int)auVar11._0_4_ * fVar5;
    fVar15 = (float)((ulonglong)local_68 >> 0x20) - (float)(int)auVar11._4_4_ * fVar6;
    fVar16 = *(float *)(param_2 + 0x40) - (float)(int)auVar11._8_4_ * fVar7;
    fVar14 = (float)(((uint)(fVar14 + fVar5) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar14 + fVar5));
    fVar15 = (float)(((uint)(fVar15 + fVar6) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar6));
    fVar16 = (float)(((uint)(fVar16 + fVar7) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar7));
    uVar13 = ((uint)(fVar16 - fVar7) ^ (uint)fVar16) & -(uint)(fRam0000000146876b18 < fVar16) ^
             (uint)fVar16;
    lStack_60 = CONCAT44(lStack_60._4_4_,uVar13);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar15 - fVar6) ^ (uint)fVar15) & -(uint)(fRam0000000146876b14 < fVar15) ^
                  (uint)fVar15,
                  ((uint)(fVar14 - fVar5) ^ (uint)fVar14) & -(uint)(_DAT_146876b10 < fVar14) ^
                  (uint)fVar14);
    *(uint *)(param_2 + 0x51) = uVar13;
    plVar9 = (longlong *)FRotator::Quaternion(pfVar1,local_48);
    lVar10 = plVar9[1];
    param_2[0x4e] = *plVar9;
    param_2[0x4f] = lVar10;
  }
  local_68 = param_2[0x4e];
  lStack_60 = param_2[0x4f];
  uVar17 = 0;
  FUN_142397be0(param_2,&local_58,&local_68,0,0,0);
  local_58 = *(undefined8 *)(*param_1 + 0x7c);
  local_50 = *(undefined4 *)(*param_1 + 0x84);
  FUN_142398470(param_2,&local_58,0,0,uVar17 & 0xffffffffffffff00);
  lVar10 = *param_1;
  iVar4 = *(int *)(lVar10 + 0x60);
  if (iVar4 != 0) {
    iVar8 = (int)param_2[0x12];
    if (*(int *)((longlong)param_2 + 0x94) < iVar8 + iVar4) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x11);
      iVar8 = (int)param_2[0x12];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_2[0x11] + (longlong)iVar8 * 8),*(void **)(lVar10 + 0x58),
               (longlong)iVar4 << 3);
    *(int *)(param_2 + 0x12) = (int)param_2[0x12] + iVar4;
  }
  *(byte *)((longlong)param_2 + 0x24d) =
       *(byte *)((longlong)param_2 + 0x24d) ^
       (*(char *)(*param_1 + 0x94) * '\x02' ^ *(byte *)((longlong)param_2 + 0x24d)) & 2;
  lVar10 = *param_1;
  if (*(char *)(lVar10 + 0xa0) != '\0') {
    local_58 = CONCAT44(fVar12,uVar3);
    local_50 = uVar2;
    FUN_141257a50(*(undefined8 *)param_1[1],param_2,*(undefined8 *)(lVar10 + 0x68),&local_58,
                  *(undefined1 *)(lVar10 + 0xa1));
  }
  return;
}



// FUNCTION 14120c0d0 FUN_14120c0d0 body=868 status=ok
// SIG undefined FUN_14120c0d0(void)

void FUN_14120c0d0(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 uVar9;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  if (*(longlong *)(*param_1 + 0x600) != 0) {
    local_res8 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    uVar9 = 0;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_38,0x1e,"bottomItemCard.itemCardLoader",0x1e,0x3f);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    cVar4 = FUN_140e97ee0(*(undefined8 *)(*param_1 + 0x600),&local_res8,&local_38,0,
                          CONCAT11(uVar9,6),&local_48);
    plVar7 = local_48;
    for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined8 *)(*param_1 + 0x718) = local_res8;
    if ((cVar4 != '\0') && (*(longlong *)(*param_1 + 0x718) != 0)) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardReady",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      lVar6 = local_res10;
      lVar1 = *(longlong *)(*param_1 + 0x718);
      FWeakObjectPtr::operator=(lVar1 + 0x198);
      *(longlong *)(lVar1 + 0x1a0) = lVar6;
      local_res8 = 0;
      if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x198), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1a0));
      }
      FUN_140f70290(*(undefined8 *)(*param_1 + 0x718),*(undefined8 *)(*param_1 + 0x930));
    }
  }
  if (*(longlong *)(*param_1 + 0x728) != 0) {
    local_res8 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    uVar9 = 0;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_48,0x1f,"itemCard_Reward.itemCardLoader",0x1f,0x3f);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    cVar4 = FUN_140e97ee0(*(undefined8 *)(*param_1 + 0x728),&local_res8,&local_48,0,
                          CONCAT11(uVar9,6),&local_38);
    plVar7 = local_38;
    for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined8 *)(*param_1 + 0x720) = local_res8;
    if ((cVar4 != '\0') && (*(longlong *)(*param_1 + 0x720) != 0)) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRewardItemCardReady",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      lVar1 = *(longlong *)(*param_1 + 0x720);
      FWeakObjectPtr::operator=(lVar1 + 0x198);
      *(longlong *)(lVar1 + 0x1a0) = local_res10;
      local_res8 = 0;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar1 + 0x198), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar1 + 0x1a0));
      }
      FUN_140f70290(*(undefined8 *)(*param_1 + 0x720),*(undefined8 *)(*param_1 + 0x930));
    }
  }
  return;
}



// FUNCTION 14120c530 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_3ccd6c01f771373d28f8cecf2b7658eb>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14120c580 FUN_14120c580 body=52 status=ok
// SIG undefined FUN_14120c580(void)

undefined8 FUN_14120c580(undefined8 param_1,ulonglong param_2)

{
  FUN_141208dd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 14120c5c0 FUN_14120c5c0 body=79 status=ok
// SIG undefined FUN_14120c5c0(void)

longlong FUN_14120c5c0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x840);
  FUN_1406d8b70(param_1 + 0x788);
  FUN_141208dd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x860);
  }
  return param_1;
}



// FUNCTION 14120c610 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FNiagaraSystemInstance::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141208dd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 14120c650 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UAbilitySystemBaseComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141208e70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1398);
  }
  return param_1;
}



// FUNCTION 14120c690 FUN_14120c690 body=173 status=ok
// SIG undefined FUN_14120c690(void)

undefined8 * FUN_14120c690(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0x34a] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x348);
  if (iVar2 != 0) {
    plVar1 = param_1 + 0x59;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1ad0);
  }
  return param_1;
}



// FUNCTION 14120c740 FUN_14120c740 body=173 status=ok
// SIG undefined FUN_14120c740(void)

undefined8 * FUN_14120c740(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0x132] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x130);
  if (iVar2 != 0) {
    plVar1 = param_1 + 0x3b;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9b0);
  }
  return param_1;
}


