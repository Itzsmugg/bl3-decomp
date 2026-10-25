// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e764f0 FUN_142e764f0 body=162 status=ok
// SIG undefined FUN_142e764f0(void)

longlong FUN_142e764f0(void)

{
  if (DAT_146b3c240 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"SprintData",&DAT_146b3c240,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_142e765c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3c240;
}



// FUNCTION 142e765f0 FUN_142e765f0 body=128 status=ok
// SIG undefined FUN_142e765f0(void)

void FUN_142e765f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440b8db0;
    *(undefined1 *)(puVar1 + 6) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    *(undefined1 *)(puVar1 + 7) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    *(undefined1 *)(puVar1 + 8) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x4c) = 1;
    *(undefined4 *)(puVar1 + 10) = 0x3f800000;
    *(undefined1 *)(puVar1 + 0xb) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x74) = 1;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x10) = 0x45000000;
    puVar1[0x13] = 0;
  }
  return;
}



// FUNCTION 142e76670 FUN_142e76670 body=41 status=ok
// SIG undefined FUN_142e76670(void)

void FUN_142e76670(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440b8b28;
  }
  return;
}



// FUNCTION 142e766a0 FUN_142e766a0 body=51 status=ok
// SIG undefined FUN_142e766a0(void)

void FUN_142e766a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1445e06c0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 142e766e0 FUN_142e766e0 body=41 status=ok
// SIG undefined FUN_142e766e0(void)

void FUN_142e766e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_14596a028;
  }
  return;
}



// FUNCTION 142e76710 FUN_142e76710 body=92 status=ok
// SIG undefined FUN_142e76710(void)

void FUN_142e76710(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1445e0948;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x3f000000;
  }
  return;
}



// FUNCTION 142e767b0 FUN_142e767b0 body=178 status=ok
// SIG undefined FUN_142e767b0(void)

undefined8 * FUN_142e767b0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14596a2e0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  return param_1;
}



// FUNCTION 142e76870 FUN_142e76870 body=123 status=ok
// SIG undefined FUN_142e76870(void)

void FUN_142e76870(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (iVar2 != 0) {
    do {
      FUN_140a7c7a0(lVar1);
      lVar1 = lVar1 + 0x1c0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>::
  ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>
            (param_1 + 0x18);
  return;
}



// FUNCTION 142e768f0 FUN_142e768f0 body=886 status=ok
// SIG undefined FUN_142e768f0(void)

undefined8 * FUN_142e768f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  
  *param_1 = *param_2;
  plVar1 = param_1 + 3;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if (plVar1 != param_2 + 3) {
    iVar13 = *(int *)(param_1 + 4);
    if (iVar13 != 0) {
      plVar14 = (longlong *)(*plVar1 + 0x30);
      do {
        plVar5 = (longlong *)*plVar14;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
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
        plVar14 = plVar14 + 7;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar13 = *(int *)(param_2 + 4);
    lVar12 = param_2[3];
    *(int *)(param_1 + 4) = iVar13;
    if ((iVar13 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar13);
      puVar10 = (undefined4 *)*plVar1;
      if (iVar13 != 0) {
        puVar9 = (undefined8 *)(lVar12 + 0x10);
        do {
          uVar6 = *(undefined4 *)((longlong)puVar9 + -0xc);
          uVar7 = *(undefined4 *)(puVar9 + -1);
          uVar8 = *(undefined4 *)((longlong)puVar9 + -4);
          *puVar10 = *(undefined4 *)(puVar9 + -2);
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          *(undefined8 *)(puVar10 + 4) = *puVar9;
          *(undefined8 *)(puVar10 + 6) = puVar9[1];
          puVar10[8] = *(undefined4 *)(puVar9 + 2);
          *(undefined8 *)(puVar10 + 10) = puVar9[3];
          lVar12 = puVar9[4];
          *(longlong *)(puVar10 + 0xc) = lVar12;
          if (lVar12 != 0) {
            LOCK();
            *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
            UNLOCK();
          }
          puVar10 = puVar10 + 0xe;
          puVar9 = puVar9 + 7;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
  }
  plVar1 = param_1 + 5;
  if (plVar1 != param_2 + 5) {
    iVar13 = *(int *)(param_2 + 6);
    lVar12 = param_2[5];
    *(int *)(param_1 + 6) = iVar13;
    if ((iVar13 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar13);
      if (iVar13 != 0) {
        puVar10 = (undefined4 *)(lVar12 + 4);
        puVar11 = (undefined4 *)*plVar1;
        do {
          *puVar11 = puVar10[-1];
          puVar11[1] = *puVar10;
          puVar11[2] = puVar10[1];
          puVar11[3] = puVar10[2];
          *(undefined1 *)(puVar11 + 4) = *(undefined1 *)(puVar10 + 3);
          puVar11[5] = puVar10[4];
          *(undefined1 *)(puVar11 + 6) = *(undefined1 *)(puVar10 + 5);
          *(undefined1 *)((longlong)puVar11 + 0x19) = *(undefined1 *)((longlong)puVar10 + 0x15);
          iVar13 = iVar13 + -1;
          puVar10 = puVar10 + 7;
          puVar11 = puVar11 + 7;
        } while (iVar13 != 0);
      }
    }
  }
  plVar1 = param_1 + 7;
  if (plVar1 != param_2 + 7) {
    lVar12 = *plVar1;
    for (iVar13 = *(int *)(param_1 + 8); iVar13 != 0; iVar13 = iVar13 + -1) {
      FUN_140a7c7a0(lVar12);
      lVar12 = lVar12 + 0x1c0;
    }
    iVar13 = *(int *)(param_2 + 8);
    lVar12 = param_2[7];
    *(int *)(param_1 + 8) = iVar13;
    if ((iVar13 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      FUN_142e77b40(plVar1,iVar13);
      lVar15 = *plVar1;
      if (iVar13 != 0) {
        puVar10 = (undefined4 *)(lVar12 + 0x1b4);
        do {
          FUN_140a7ab30(lVar15,puVar10 + -0x6d);
          *(undefined4 *)(lVar15 + 0x1b0) = puVar10[-1];
          *(undefined4 *)(lVar15 + 0x1b4) = *puVar10;
          *(undefined1 *)(lVar15 + 0x1b8) = *(undefined1 *)(puVar10 + 1);
          *(undefined1 *)(lVar15 + 0x1b9) = *(undefined1 *)((longlong)puVar10 + 5);
          lVar15 = lVar15 + 0x1c0;
          iVar13 = iVar13 + -1;
          puVar10 = puVar10 + 0x70;
        } while (iVar13 != 0);
      }
    }
  }
  plVar1 = param_1 + 9;
  if (plVar1 != param_2 + 9) {
    iVar13 = *(int *)(param_2 + 10);
    lVar12 = param_2[9];
    *(int *)(param_1 + 10) = iVar13;
    if ((iVar13 == 0) && (*(int *)((longlong)param_1 + 0x54) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    else {
      TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(plVar1,iVar13);
      puVar9 = (undefined8 *)*plVar1;
      if (iVar13 != 0) {
        puVar10 = (undefined4 *)(lVar12 + 0x14);
        puVar11 = (undefined4 *)((longlong)puVar9 + 0x14);
        do {
          *puVar9 = *(undefined8 *)(puVar10 + -5);
          puVar9 = puVar9 + 9;
          puVar11[-3] = puVar10[-3];
          puVar11[-2] = puVar10[-2];
          puVar11[-1] = puVar10[-1];
          *puVar11 = *puVar10;
          *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar10 + 1);
          puVar11[2] = puVar10[2];
          *(undefined8 *)(puVar11 + 3) = *(undefined8 *)(puVar10 + 3);
          *(undefined8 *)(puVar11 + 5) = *(undefined8 *)(puVar10 + 5);
          puVar11[7] = puVar10[7];
          puVar11[9] = puVar10[9];
          puVar11[10] = puVar10[10];
          *(undefined1 *)(puVar11 + 0xb) = *(undefined1 *)(puVar10 + 0xb);
          *(undefined1 *)((longlong)puVar11 + 0x2d) = *(undefined1 *)((longlong)puVar10 + 0x2d);
          iVar13 = iVar13 + -1;
          puVar10 = puVar10 + 0x12;
          puVar11 = puVar11 + 0x12;
        } while (iVar13 != 0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x69);
  return param_1;
}



// FUNCTION 142e76c70 FUN_142e76c70 body=43 status=ok
// SIG undefined FUN_142e76c70(void)

undefined8 * FUN_142e76c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142e76ca0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FPackageLocalizationCultureCache>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142e76cd0 FUN_142e76cd0 body=44 status=ok
// SIG undefined FUN_142e76cd0(void)

void FUN_142e76cd0(undefined8 param_1,longlong param_2)

{
  FUN_141713660(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



// FUNCTION 142e76d90 FUN_142e76d90 body=38 status=ok
// SIG undefined FUN_142e76d90(void)

void FUN_142e76d90(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x120);
  FUN_142dfd950(param_2);
  return;
}



// FUNCTION 142e76dc0 FUN_142e76dc0 body=39 status=ok
// SIG undefined FUN_142e76dc0(void)

void FUN_142e76dc0(undefined8 param_1,longlong param_2)

{
  FUN_142d0ab00(param_2);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined2 *)(param_2 + 0x1b8) = 0;
  return;
}



// FUNCTION 142e76df0 FUN_142e76df0 body=50 status=ok
// SIG undefined FUN_142e76df0(void)

void FUN_142e76df0(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 1,0,0x80);
  *param_2 = &PTR_FUN_14596a2c8;
  FUN_142de2eb0(param_2 + 1);
  return;
}



// FUNCTION 142e76e30 FUN_142e76e30 body=38 status=ok
// SIG undefined FUN_142e76e30(void)

void FUN_142e76e30(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x100);
  FUN_142e767b0(param_2);
  return;
}



// FUNCTION 142e76f40 FUN_142e76f40 body=284 status=ok
// SIG undefined FUN_142e76f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142e76f40(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_4 != 0) {
    puVar11 = (undefined8 *)(param_3 + 0x10);
    do {
      uVar7 = *(undefined4 *)((longlong)puVar11 + -0xc);
      uVar8 = *(undefined4 *)(puVar11 + -1);
      uVar9 = *(undefined4 *)((longlong)puVar11 + -4);
      *param_2 = *(undefined4 *)(puVar11 + -2);
      param_2[1] = uVar7;
      param_2[2] = uVar8;
      param_2[3] = uVar9;
      puVar1 = (undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_2 + 4) = *puVar11;
      *(undefined8 *)(param_2 + 6) = puVar11[1];
      param_2[8] = *(undefined4 *)(puVar11 + 2);
      plVar5 = (longlong *)puVar11[4];
      uVar6 = puVar11[3];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_38 = uVar6;
      plStack_30 = plVar5;
      if (&local_38 != puVar1) {
        local_38 = *puVar1;
        plStack_30 = *(longlong **)(param_2 + 0xc);
        *puVar1 = uVar6;
        *(longlong **)(param_2 + 0xc) = plVar5;
        local_28 = uVar6;
        plStack_20 = plVar5;
      }
      plVar5 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_30 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
      puVar11 = puVar11 + 7;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e771d0 FUN_142e771d0 body=116 status=ok
// SIG undefined FUN_142e771d0(void)

undefined8 FUN_142e771d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x1b4);
    do {
      FUN_140a7db00(puVar1 + -0x6d,param_3 + -0x1b4 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 4 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 5) = *(undefined1 *)(param_3 + 5 + (longlong)puVar1);
      puVar1 = puVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e77420 FUN_142e77420 body=238 status=ok
// SIG undefined FUN_142e77420(void)

undefined8 FUN_142e77420(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_3 + 0x10);
    do {
      if (plVar3 + -2 != param_2) {
        if (((int)plVar3[-1] == 0) || (plVar1 = (longlong *)plVar3[-2], plVar1 == (longlong *)0x0))
        {
          if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0))
          {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*param_2 != 0) {
              lVar2 = FMemory::Realloc(*param_2,0,0);
              *param_2 = lVar2;
            }
            *(undefined4 *)(param_2 + 1) = 0;
          }
        }
        else {
          (**(code **)(*plVar1 + 0x30))();
        }
      }
      param_2[2] = *plVar3;
      *(char *)(param_2 + 3) = (char)plVar3[1];
      param_2[4] = plVar3[2];
      param_2[5] = plVar3[3];
      param_2[6] = plVar3[4];
      param_2[7] = plVar3[5];
      *(char *)(param_2 + 8) = (char)plVar3[6];
      plVar1 = plVar3 + 7;
      plVar3 = plVar3 + 10;
      param_2[9] = *plVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e775b0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FNodeHierarchyData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142e768f0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e77610 FUN_142e77610 body=55 status=ok
// SIG undefined FUN_142e77610(void)

void FUN_142e77610(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c118 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c118 = GetStaticEnum(FUN_142e78530,uVar1,L"EStanceStackLayer");
  }
  return;
}



// FUNCTION 142e77650 FUN_142e77650 body=55 status=ok
// SIG undefined FUN_142e77650(void)

void FUN_142e77650(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c110 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c110 = GetStaticEnum(FUN_142e78560,uVar1,L"EStanceValueOverrideType");
  }
  return;
}



// FUNCTION 142e77690 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEngineMessage::GetPrivateStaticClass(void)

{
  if (DAT_146b3c360 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StanceData",&DAT_146b3c360,FUN_140447710,0xa8,
                  0x10000001,0,L"Engine",FUN_142e765f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142e76440,&LAB_140447700,0);
  }
  return DAT_146b3c360;
}



// FUNCTION 142e77740 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UClothingSimulationInteractorNv::GetPrivateStaticClass(void)

{
  if (DAT_146b3c390 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StanceDataSelector",&DAT_146b3c390,FUN_140447710,
                  0x48,0x10000000,0,L"Engine",FUN_142e766a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142e76440,&LAB_140447700,0);
  }
  return DAT_146b3c390;
}



// FUNCTION 142e777f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(void)

{
  if (DAT_146b3c418 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StatusEffectData",&DAT_146b3c418,FUN_140447710,0x88
                  ,0x10000000,0,L"Engine",FUN_142e76710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3c418;
}



// FUNCTION 142e778a0 FUN_142e778a0 body=162 status=ok
// SIG undefined FUN_142e778a0(void)

longlong FUN_142e778a0(void)

{
  if (DAT_146b3c450 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StatusEffectGlobalsData",&DAT_146b3c450,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3c450;
}



// FUNCTION 142e77950 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavigateHomeCharacterWidget::GetPrivateStaticClass(void)

{
  if (DAT_146b3c4f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StatusEffectManagerComponent",&DAT_146b3c4f0,
                  StaticRegisterNativesUNavigateHomeCharacterWidget,0x230,0x10000000,0,L"Engine",
                  &LAB_142e76770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b3c4f0;
}



// FUNCTION 142e77a00 FUN_142e77a00 body=6 status=ok
// SIG undefined FUN_142e77a00(void)

undefined8 FUN_142e77a00(void)

{
  return 0x561e7e02;
}



// FUNCTION 142e77a10 FUN_142e77a10 body=6 status=ok
// SIG undefined FUN_142e77a10(void)

undefined8 FUN_142e77a10(void)

{
  return 0x9a59ac81;
}



// FUNCTION 142e77a20 FUN_142e77a20 body=6 status=ok
// SIG undefined FUN_142e77a20(void)

undefined8 FUN_142e77a20(void)

{
  return 0xb77a7dd5;
}



// FUNCTION 142e77a30 FUN_142e77a30 body=6 status=ok
// SIG undefined FUN_142e77a30(void)

undefined8 FUN_142e77a30(void)

{
  return 0xa7284999;
}



// FUNCTION 142e77a40 FUN_142e77a40 body=6 status=ok
// SIG undefined FUN_142e77a40(void)

undefined8 FUN_142e77a40(void)

{
  return 0x3beb0f97;
}



// FUNCTION 142e77a50 FUN_142e77a50 body=6 status=ok
// SIG undefined FUN_142e77a50(void)

undefined8 FUN_142e77a50(void)

{
  return 0xfd0233db;
}



// FUNCTION 142e77a60 FUN_142e77a60 body=6 status=ok
// SIG undefined FUN_142e77a60(void)

undefined8 FUN_142e77a60(void)

{
  return 0x35b9e9ae;
}



// FUNCTION 142e77a70 FUN_142e77a70 body=6 status=ok
// SIG undefined FUN_142e77a70(void)

undefined8 FUN_142e77a70(void)

{
  return 0x50b27341;
}



// FUNCTION 142e77a80 FUN_142e77a80 body=6 status=ok
// SIG undefined FUN_142e77a80(void)

undefined8 FUN_142e77a80(void)

{
  return 0xa28fdd33;
}



// FUNCTION 142e77a90 FUN_142e77a90 body=6 status=ok
// SIG undefined FUN_142e77a90(void)

undefined8 FUN_142e77a90(void)

{
  return 0x7c9a3aa;
}



// FUNCTION 142e77aa0 FUN_142e77aa0 body=6 status=ok
// SIG undefined FUN_142e77aa0(void)

undefined8 FUN_142e77aa0(void)

{
  return 0x80dab634;
}



// FUNCTION 142e77ab0 FUN_142e77ab0 body=6 status=ok
// SIG undefined FUN_142e77ab0(void)

undefined8 FUN_142e77ab0(void)

{
  return 0x4b82eda5;
}



// FUNCTION 142e77ac0 FUN_142e77ac0 body=6 status=ok
// SIG undefined FUN_142e77ac0(void)

undefined8 FUN_142e77ac0(void)

{
  return 0x4e0c6eb;
}



// FUNCTION 142e77ad0 FUN_142e77ad0 body=6 status=ok
// SIG undefined FUN_142e77ad0(void)

undefined8 FUN_142e77ad0(void)

{
  return 0x36bd1ab0;
}



// FUNCTION 142e77ae0 FUN_142e77ae0 body=6 status=ok
// SIG undefined FUN_142e77ae0(void)

undefined8 FUN_142e77ae0(void)

{
  return 0xf6404692;
}



// FUNCTION 142e77af0 FUN_142e77af0 body=6 status=ok
// SIG undefined FUN_142e77af0(void)

undefined8 FUN_142e77af0(void)

{
  return 0x765be18f;
}



// FUNCTION 142e77b00 FUN_142e77b00 body=6 status=ok
// SIG undefined FUN_142e77b00(void)

undefined8 FUN_142e77b00(void)

{
  return 0x10d5598b;
}



// FUNCTION 142e77b10 FUN_142e77b10 body=6 status=ok
// SIG undefined FUN_142e77b10(void)

undefined8 FUN_142e77b10(void)

{
  return 0x85321c91;
}



// FUNCTION 142e77b20 FUN_142e77b20 body=6 status=ok
// SIG undefined FUN_142e77b20(void)

undefined8 FUN_142e77b20(void)

{
  return 0x7d53cac7;
}



// FUNCTION 142e77b40 FUN_142e77b40 body=142 status=ok
// SIG undefined FUN_142e77b40(void)

void FUN_142e77b40(longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1c0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1c0,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 142e77bd0 StaticRegisterNativesUKismetGuidLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetGuidLibrary(void)

void UKismetGuidLibrary::StaticRegisterNativesUKismetGuidLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearStance_145969b00,7);
  return;
}



// FUNCTION 142e77c00 FUN_142e77c00 body=34 status=ok
// SIG undefined FUN_142e77c00(void)

void FUN_142e77c00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e75af0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearBlueprintStance_145969b70,0xf);
  return;
}



// FUNCTION 142e77c30 StaticRegisterNativesUNavigateHomeCharacterWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUNavigateHomeCharacterWidget(void)

void UNavigateHomeCharacterWidget::StaticRegisterNativesUNavigateHomeCharacterWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddStatusEffect_14596af00,4);
  return;
}



// FUNCTION 142e77c60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c488 == 0) {
    uVar1 = FUN_142e77a00();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c488 = GetStaticStruct(FUN_142e78590,uVar2,L"AppliedAttributeEffect",0x38,uVar1);
  }
  return;
}



// FUNCTION 142e77cc0 FUN_142e77cc0 body=82 status=ok
// SIG undefined FUN_142e77cc0(void)

void FUN_142e77cc0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c3f0 == 0) {
    uVar1 = FUN_142e77a10();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c3f0 =
         GetStaticStruct(FUN_142e785c0,uVar2,L"AttributeDefinedSingleValueRow",0x40,uVar1);
  }
  return;
}



// FUNCTION 142e77d20 FUN_142e77d20 body=82 status=ok
// SIG undefined FUN_142e77d20(void)

void FUN_142e77d20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c400 == 0) {
    uVar1 = FUN_142e77a40();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c400 = GetStaticStruct(FUN_142e785f0,uVar2,L"AttributeEffect",0x50,uVar1);
  }
  return;
}



// FUNCTION 142e77d80 FUN_142e77d80 body=82 status=ok
// SIG undefined FUN_142e77d80(void)

void FUN_142e77d80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c498 == 0) {
    uVar1 = FUN_142e77a20();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c498 = GetStaticStruct(FUN_142e78620,uVar2,L"AttributeEffectReference",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e77de0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c4a8 == 0) {
    uVar1 = FUN_142e77a30();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c4a8 =
         GetStaticStruct(FUN_142e78650,uVar2,L"AttributeEffectValueContextHardRef",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e77e40 FUN_142e77e40 body=82 status=ok
// SIG undefined FUN_142e77e40(void)

void FUN_142e77e40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c3c0 == 0) {
    uVar1 = FUN_142e77a50();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c3c0 =
         GetStaticStruct(FUN_142e78680,uVar2,L"BalanceFormulaDefinedValueRow",0x120,uVar1);
  }
  return;
}



// FUNCTION 142e77ea0 FUN_142e77ea0 body=82 status=ok
// SIG undefined FUN_142e77ea0(void)

void FUN_142e77ea0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c378 == 0) {
    uVar1 = FUN_142e77a60();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c378 = GetStaticStruct(FUN_142e786b0,uVar2,L"ConditionalStance",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e77f00 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FHierarchicalSimplification::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c4b8 == 0) {
    uVar1 = FUN_142e77a70();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c4b8 = GetStaticStruct(FUN_142e786e0,uVar2,L"DamageOverTimeContribution",0x1c0,uVar1);
  }
  return;
}



// FUNCTION 142e77f60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRBFTarget::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c3e0 == 0) {
    uVar1 = FUN_142e77a80();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c3e0 = GetStaticStruct(FUN_142e78710,uVar2,L"GbxParamDefinedSingleValueRow",0x88,uVar1)
    ;
  }
  return;
}



// FUNCTION 142e77fc0 FUN_142e77fc0 body=82 status=ok
// SIG undefined FUN_142e77fc0(void)

void FUN_142e77fc0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c3d0 == 0) {
    uVar1 = FUN_142e77a90();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c3d0 = GetStaticStruct(FUN_142e78740,uVar2,L"RandomValueRow",0x100,uVar1);
  }
  return;
}



// FUNCTION 142e78020 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c298 == 0) {
    uVar1 = FUN_142e77aa0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c298 = GetStaticStruct(FUN_142e78770,uVar2,L"StanceChangedEventArgs",0x30,uVar1);
  }
  return;
}



// FUNCTION 142e78080 FUN_142e78080 body=82 status=ok
// SIG undefined FUN_142e78080(void)

void FUN_142e78080(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c348 == 0) {
    uVar1 = FUN_142e77ab0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c348 = GetStaticStruct(FUN_142e787a0,uVar2,L"StanceFloatValue",8,uVar1);
  }
  return;
}



// FUNCTION 142e780e0 FUN_142e780e0 body=82 status=ok
// SIG undefined FUN_142e780e0(void)

void FUN_142e780e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c3a0 == 0) {
    uVar1 = FUN_142e77ac0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c3a0 = GetStaticStruct(FUN_142e787d0,uVar2,L"StanceStack",0x50,uVar1);
  }
  return;
}



// FUNCTION 142e78140 FUN_142e78140 body=82 status=ok
// SIG undefined FUN_142e78140(void)

void FUN_142e78140(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c338 == 0) {
    uVar1 = FUN_142e77ad0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c338 = GetStaticStruct(FUN_142e78800,uVar2,L"StanceVectorValue",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e781a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_Root::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c478 == 0) {
    uVar1 = FUN_142e77b00();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c478 = GetStaticStruct(FUN_142e78830,uVar2,L"StatusEffectInstance",0x48,uVar1);
  }
  return;
}



// FUNCTION 142e78200 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c458 == 0) {
    uVar1 = FUN_142e77ae0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c458 = GetStaticStruct(FUN_142e78860,uVar2,L"StatusEffectInstanceReference",0x18,uVar1)
    ;
  }
  return;
}



// FUNCTION 142e78260 FUN_142e78260 body=82 status=ok
// SIG undefined FUN_142e78260(void)

void FUN_142e78260(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c468 == 0) {
    uVar1 = FUN_142e77af0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c468 = GetStaticStruct(FUN_142e78890,uVar2,L"StatusEffectInstanceStack",0x70,uVar1);
  }
  return;
}



// FUNCTION 142e782c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c518 == 0) {
    uVar1 = FUN_142e77b20();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c518 = GetStaticStruct(FUN_142e788c0,uVar2,L"StatusEffectQuery",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e78320 FUN_142e78320 body=82 status=ok
// SIG undefined FUN_142e78320(void)

void FUN_142e78320(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c508 == 0) {
    uVar1 = FUN_142e77b10();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c508 = GetStaticStruct(FUN_142e788f0,uVar2,L"StatusEffectQueryResult",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e78380 FUN_142e78380 body=47 status=ok
// SIG undefined FUN_142e78380(void)

longlong FUN_142e78380(void)

{
  if (DAT_146b3c238 == 0) {
    FUN_141786440(&DAT_146b3c238,&PTR_FUN_145965d50);
  }
  return DAT_146b3c238;
}



// FUNCTION 142e783b0 FUN_142e783b0 body=47 status=ok
// SIG undefined FUN_142e783b0(void)

longlong FUN_142e783b0(void)

{
  if (DAT_146b3c358 == 0) {
    FUN_141786440(&DAT_146b3c358,&PTR_LAB_1459683c0);
  }
  return DAT_146b3c358;
}



// FUNCTION 142e783e0 FUN_142e783e0 body=47 status=ok
// SIG undefined FUN_142e783e0(void)

longlong FUN_142e783e0(void)

{
  if (DAT_146b3c388 == 0) {
    FUN_141786440(&DAT_146b3c388,&PTR_LAB_145968c30);
  }
  return DAT_146b3c388;
}



// FUNCTION 142e78410 FUN_142e78410 body=47 status=ok
// SIG undefined FUN_142e78410(void)

longlong FUN_142e78410(void)

{
  if (DAT_146b3c3b0 == 0) {
    FUN_141786440(&DAT_146b3c3b0,&PTR_FUN_1459692e0);
  }
  return DAT_146b3c3b0;
}



// FUNCTION 142e78440 FUN_142e78440 body=47 status=ok
// SIG undefined FUN_142e78440(void)

longlong FUN_142e78440(void)

{
  if (DAT_146b3c410 == 0) {
    FUN_141786440(&DAT_146b3c410,&PTR_GetPrivateStaticClass_1459668a0);
  }
  return DAT_146b3c410;
}



// FUNCTION 142e78470 FUN_142e78470 body=47 status=ok
// SIG undefined FUN_142e78470(void)

longlong FUN_142e78470(void)

{
  if (DAT_146b3c448 == 0) {
    FUN_141786440(&DAT_146b3c448,&PTR_thunk_FUN_142e778a0_145966d70);
  }
  return DAT_146b3c448;
}



// FUNCTION 142e784a0 FUN_142e784a0 body=47 status=ok
// SIG undefined FUN_142e784a0(void)

longlong FUN_142e784a0(void)

{
  if (DAT_146b3c4f8 == 0) {
    FUN_141786440(&DAT_146b3c4f8,&PTR_GetPrivateStaticClass_145965dc0);
  }
  return DAT_146b3c4f8;
}



// FUNCTION 142e784d0 FUN_142e784d0 body=47 status=ok
// SIG undefined FUN_142e784d0(void)

longlong FUN_142e784d0(void)

{
  if (DAT_146b3c440 == 0) {
    FUN_141786a30(&DAT_146b3c440,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672e470);
  }
  return DAT_146b3c440;
}



// FUNCTION 142e78500 FUN_142e78500 body=47 status=ok
// SIG undefined FUN_142e78500(void)

longlong FUN_142e78500(void)

{
  if (DAT_146b3c290 == 0) {
    FUN_141786a30(&DAT_146b3c290,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672bbf0);
  }
  return DAT_146b3c290;
}



// FUNCTION 142e78530 FUN_142e78530 body=47 status=ok
// SIG undefined FUN_142e78530(void)

longlong FUN_142e78530(void)

{
  if (DAT_146b3c398 == 0) {
    FUN_1417866a0(&DAT_146b3c398,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672f090);
  }
  return DAT_146b3c398;
}



// FUNCTION 142e78560 FUN_142e78560 body=47 status=ok
// SIG undefined FUN_142e78560(void)

longlong FUN_142e78560(void)

{
  if (DAT_146b3c330 == 0) {
    FUN_1417866a0(&DAT_146b3c330,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672f040);
  }
  return DAT_146b3c330;
}



// FUNCTION 142e78590 FUN_142e78590 body=47 status=ok
// SIG undefined FUN_142e78590(void)

longlong FUN_142e78590(void)

{
  if (DAT_146b3c490 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c490,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672e8a0);
  }
  return DAT_146b3c490;
}



// FUNCTION 142e785c0 FUN_142e785c0 body=47 status=ok
// SIG undefined FUN_142e785c0(void)

longlong FUN_142e785c0(void)

{
  if (DAT_146b3c3f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c3f8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672ddb0);
  }
  return DAT_146b3c3f8;
}



// FUNCTION 142e785f0 FUN_142e785f0 body=47 status=ok
// SIG undefined FUN_142e785f0(void)

longlong FUN_142e785f0(void)

{
  if (DAT_146b3c408 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c408,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672df40);
  }
  return DAT_146b3c408;
}



// FUNCTION 142e78620 FUN_142e78620 body=47 status=ok
// SIG undefined FUN_142e78620(void)

longlong FUN_142e78620(void)

{
  if (DAT_146b3c4a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c4a0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672e930);
  }
  return DAT_146b3c4a0;
}



// FUNCTION 142e78650 FUN_142e78650 body=47 status=ok
// SIG undefined FUN_142e78650(void)

longlong FUN_142e78650(void)

{
  if (DAT_146b3c4b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c4b0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672ea00);
  }
  return DAT_146b3c4b0;
}



// FUNCTION 142e78680 FUN_142e78680 body=47 status=ok
// SIG undefined FUN_142e78680(void)

longlong FUN_142e78680(void)

{
  if (DAT_146b3c3c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c3c8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672da50);
  }
  return DAT_146b3c3c8;
}



// FUNCTION 142e786b0 FUN_142e786b0 body=47 status=ok
// SIG undefined FUN_142e786b0(void)

longlong FUN_142e786b0(void)

{
  if (DAT_146b3c380 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c380,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672d600);
  }
  return DAT_146b3c380;
}



// FUNCTION 142e786e0 FUN_142e786e0 body=47 status=ok
// SIG undefined FUN_142e786e0(void)

longlong FUN_142e786e0(void)

{
  if (DAT_146b3c4c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c4c0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672ea90);
  }
  return DAT_146b3c4c0;
}



// FUNCTION 142e78710 FUN_142e78710 body=47 status=ok
// SIG undefined FUN_142e78710(void)

longlong FUN_142e78710(void)

{
  if (DAT_146b3c3e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c3e8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672dd20);
  }
  return DAT_146b3c3e8;
}



// FUNCTION 142e78740 FUN_142e78740 body=47 status=ok
// SIG undefined FUN_142e78740(void)

longlong FUN_142e78740(void)

{
  if (DAT_146b3c3d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c3d8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672dc90);
  }
  return DAT_146b3c3d8;
}



// FUNCTION 142e78770 FUN_142e78770 body=47 status=ok
// SIG undefined FUN_142e78770(void)

longlong FUN_142e78770(void)

{
  if (DAT_146b3c2a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c2a0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672be30);
  }
  return DAT_146b3c2a0;
}



// FUNCTION 142e787a0 FUN_142e787a0 body=47 status=ok
// SIG undefined FUN_142e787a0(void)

longlong FUN_142e787a0(void)

{
  if (DAT_146b3c350 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c350,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672cd90);
  }
  return DAT_146b3c350;
}



// FUNCTION 142e787d0 FUN_142e787d0 body=47 status=ok
// SIG undefined FUN_142e787d0(void)

longlong FUN_142e787d0(void)

{
  if (DAT_146b3c3a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c3a8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672d8b0);
  }
  return DAT_146b3c3a8;
}



// FUNCTION 142e78800 FUN_142e78800 body=47 status=ok
// SIG undefined FUN_142e78800(void)

longlong FUN_142e78800(void)

{
  if (DAT_146b3c340 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c340,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672cc90);
  }
  return DAT_146b3c340;
}



// FUNCTION 142e78830 FUN_142e78830 body=47 status=ok
// SIG undefined FUN_142e78830(void)

longlong FUN_142e78830(void)

{
  if (DAT_146b3c480 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c480,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672e790);
  }
  return DAT_146b3c480;
}



// FUNCTION 142e78860 FUN_142e78860 body=47 status=ok
// SIG undefined FUN_142e78860(void)

longlong FUN_142e78860(void)

{
  if (DAT_146b3c460 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c460,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672e530);
  }
  return DAT_146b3c460;
}



// FUNCTION 142e78890 FUN_142e78890 body=47 status=ok
// SIG undefined FUN_142e78890(void)

longlong FUN_142e78890(void)

{
  if (DAT_146b3c470 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c470,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672e700);
  }
  return DAT_146b3c470;
}



// FUNCTION 142e788c0 FUN_142e788c0 body=47 status=ok
// SIG undefined FUN_142e788c0(void)

longlong FUN_142e788c0(void)

{
  if (DAT_146b3c520 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c520,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672eff0);
  }
  return DAT_146b3c520;
}



// FUNCTION 142e788f0 FUN_142e788f0 body=47 status=ok
// SIG undefined FUN_142e788f0(void)

longlong FUN_142e788f0(void)

{
  if (DAT_146b3c510 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c510,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672ef20);
  }
  return DAT_146b3c510;
}



// FUNCTION 142e78920 FUN_142e78920 body=207 status=ok
// SIG undefined FUN_142e78920(void)

void FUN_142e78920(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  local_40 = 0;
  local_38 = 0xffffffff;
  uStack_30 = 0xffffffff;
  local_28 = 1;
  local_24 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142dc49a0(param_1,local_58,puVar2);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  param_3[2] = puVar2[2];
  return;
}



// FUNCTION 142e78a10 FUN_142e78a10 body=112 status=ok
// SIG undefined FUN_142e78a10(void)

void FUN_142e78a10(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_142dc7710(local_res10[0]);
  return;
}



// FUNCTION 142e78a80 FUN_142e78a80 body=118 status=ok
// SIG undefined FUN_142e78a80(void)

void FUN_142e78a80(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_142dc77b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142e78b00 FUN_142e78b00 body=144 status=ok
// SIG undefined FUN_142e78b00(void)

void FUN_142e78b00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142dcbff0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78b90 FUN_142e78b90 body=144 status=ok
// SIG undefined FUN_142e78b90(void)

void FUN_142e78b90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142dcc050(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78c20 FUN_142e78c20 body=45 status=ok
// SIG undefined FUN_142e78c20(void)

void FUN_142e78c20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd0930();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78c50 FUN_142e78c50 body=143 status=ok
// SIG undefined FUN_142e78c50(void)

void FUN_142e78c50(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dd35a0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78ce0 FUN_142e78ce0 body=190 status=ok
// SIG undefined FUN_142e78ce0(void)

void FUN_142e78ce0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
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
  uVar1 = FUN_142dd3690(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78da0 FUN_142e78da0 body=143 status=ok
// SIG undefined FUN_142e78da0(void)

void FUN_142e78da0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dd3720(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78e30 FUN_142e78e30 body=133 status=ok
// SIG undefined FUN_142e78e30(void)

void FUN_142e78e30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  
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
  uVar1 = FUN_142dd3770(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78ec0 FUN_142e78ec0 body=143 status=ok
// SIG undefined FUN_142e78ec0(void)

void FUN_142e78ec0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dd3780(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e78f50 FUN_142e78f50 body=190 status=ok
// SIG undefined FUN_142e78f50(void)

void FUN_142e78f50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
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
  uVar1 = FUN_142dd3990(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e79030 FUN_142e79030 body=171 status=ok
// SIG undefined FUN_142e79030(void)

void FUN_142e79030(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar3 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142dd6dc0(param_1,local_38,puVar3);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 142e790e0 FUN_142e790e0 body=162 status=ok
// SIG undefined FUN_142e790e0(void)

void FUN_142e790e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_18 = 0;
  uStack_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar2 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd9790(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e79190 FUN_142e79190 body=163 status=ok
// SIG undefined FUN_142e79190(void)

void FUN_142e79190(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_28 [32];
  
  FAudioDeviceHandle::FAudioDeviceHandle(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd99b0(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e79240 FUN_142e79240 body=128 status=ok
// SIG undefined FUN_142e79240(void)

void FUN_142e79240(undefined8 param_1,longlong param_2)

{
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
  FUN_142ddacb0(param_1,local_res10);
  return;
}



// FUNCTION 142e792c0 FUN_142e792c0 body=175 status=ok
// SIG undefined FUN_142e792c0(void)

void FUN_142e792c0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_142ddc4f0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142e79370 execSetAllNavigationRules body=192 status=ok
// SIG undefined execSetAllNavigationRules(void)

void UWidget::execSetAllNavigationRules(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ddc5e0(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 142e79430 FUN_142e79430 body=324 status=ok
// SIG undefined FUN_142e79430(void)

void FUN_142e79430(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ddd2d0(param_1,local_res20[0],local_10,local_res10[0],local_18);
  return;
}



// FUNCTION 142e79580 FUN_142e79580 body=128 status=ok
// SIG undefined FUN_142e79580(void)

void FUN_142e79580(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142ddf5f0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e79600 FUN_142e79600 body=162 status=ok
// SIG undefined FUN_142e79600(void)

longlong FUN_142e79600(void)

{
  if (DAT_146b3c940 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TargetingComponent",&DAT_146b3c940,FUN_142e7ae80,
                  0xe790,0x10000000,0,L"Engine",&LAB_142e7a600,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b3c940;
}



// FUNCTION 142e796c0 FUN_142e796c0 body=53 status=ok
// SIG undefined FUN_142e796c0(void)

void FUN_142e796c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14596f508;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e79700 FUN_142e79700 body=47 status=ok
// SIG undefined FUN_142e79700(void)

longlong FUN_142e79700(void)

{
  if (DAT_146b3c938 == 0) {
    FUN_141786440(&DAT_146b3c938,&PTR_FUN_14596bf70);
  }
  return DAT_146b3c938;
}



// FUNCTION 142e79730 FUN_142e79730 body=47 status=ok
// SIG undefined FUN_142e79730(void)

longlong FUN_142e79730(void)

{
  if (DAT_146b3c8b8 == 0) {
    FUN_141786a30(&DAT_146b3c8b8,&PTR_FUN_1467327c0);
  }
  return DAT_146b3c8b8;
}



// FUNCTION 142e79760 FUN_142e79760 body=47 status=ok
// SIG undefined FUN_142e79760(void)

longlong FUN_142e79760(void)

{
  if (DAT_146b3c8c0 == 0) {
    FUN_141786a30(&DAT_146b3c8c0,&PTR_FUN_1467328c0);
  }
  return DAT_146b3c8c0;
}



// FUNCTION 142e79790 FUN_142e79790 body=47 status=ok
// SIG undefined FUN_142e79790(void)

longlong FUN_142e79790(void)

{
  if (DAT_146b3c8c8 == 0) {
    FUN_141786a30(&DAT_146b3c8c8,&PTR_FUN_146732980);
  }
  return DAT_146b3c8c8;
}



// FUNCTION 142e797c0 FUN_142e797c0 body=47 status=ok
// SIG undefined FUN_142e797c0(void)

longlong FUN_142e797c0(void)

{
  if (DAT_146b3c8d0 == 0) {
    FUN_141786a30(&DAT_146b3c8d0,&PTR_FUN_146732a40);
  }
  return DAT_146b3c8d0;
}



// FUNCTION 142e797f0 FUN_142e797f0 body=47 status=ok
// SIG undefined FUN_142e797f0(void)

longlong FUN_142e797f0(void)

{
  if (DAT_146b3c8d8 == 0) {
    FUN_141786a30(&DAT_146b3c8d8,&PTR_FUN_146732b40);
  }
  return DAT_146b3c8d8;
}



// FUNCTION 142e79820 FUN_142e79820 body=47 status=ok
// SIG undefined FUN_142e79820(void)

longlong FUN_142e79820(void)

{
  if (DAT_146b3c8e0 == 0) {
    FUN_141786a30(&DAT_146b3c8e0,&PTR_FUN_146732c00);
  }
  return DAT_146b3c8e0;
}



// FUNCTION 142e79850 FUN_142e79850 body=47 status=ok
// SIG undefined FUN_142e79850(void)

longlong FUN_142e79850(void)

{
  if (DAT_146b3c8e8 == 0) {
    FUN_141786a30(&DAT_146b3c8e8,&PTR_FUN_146732cd0);
  }
  return DAT_146b3c8e8;
}



// FUNCTION 142e79880 FUN_142e79880 body=47 status=ok
// SIG undefined FUN_142e79880(void)

longlong FUN_142e79880(void)

{
  if (DAT_146b3c8f0 == 0) {
    FUN_141786a30(&DAT_146b3c8f0,&PTR_FUN_146732d90);
  }
  return DAT_146b3c8f0;
}



// FUNCTION 142e798b0 FUN_142e798b0 body=47 status=ok
// SIG undefined FUN_142e798b0(void)

longlong FUN_142e798b0(void)

{
  if (DAT_146b3c8f8 == 0) {
    FUN_141786a30(&DAT_146b3c8f8,&PTR_FUN_146732ea0);
  }
  return DAT_146b3c8f8;
}



// FUNCTION 142e798e0 FUN_142e798e0 body=47 status=ok
// SIG undefined FUN_142e798e0(void)

longlong FUN_142e798e0(void)

{
  if (DAT_146b3c900 == 0) {
    FUN_141786a30(&DAT_146b3c900,&PTR_FUN_146732f20);
  }
  return DAT_146b3c900;
}



// FUNCTION 142e79910 FUN_142e79910 body=47 status=ok
// SIG undefined FUN_142e79910(void)

longlong FUN_142e79910(void)

{
  if (DAT_146b3c908 == 0) {
    FUN_141786a30(&DAT_146b3c908,&PTR_FUN_146733030);
  }
  return DAT_146b3c908;
}



// FUNCTION 142e79940 FUN_142e79940 body=47 status=ok
// SIG undefined FUN_142e79940(void)

longlong FUN_142e79940(void)

{
  if (DAT_146b3c910 == 0) {
    FUN_141786a30(&DAT_146b3c910,&PTR_FUN_146733140);
  }
  return DAT_146b3c910;
}



// FUNCTION 142e79970 FUN_142e79970 body=47 status=ok
// SIG undefined FUN_142e79970(void)

longlong FUN_142e79970(void)

{
  if (DAT_146b3c918 == 0) {
    FUN_141786a30(&DAT_146b3c918,&PTR_FUN_146733210);
  }
  return DAT_146b3c918;
}



// FUNCTION 142e799a0 FUN_142e799a0 body=47 status=ok
// SIG undefined FUN_142e799a0(void)

longlong FUN_142e799a0(void)

{
  if (DAT_146b3c920 == 0) {
    FUN_141786a30(&DAT_146b3c920,&PTR_FUN_1467332a0);
  }
  return DAT_146b3c920;
}



// FUNCTION 142e799d0 FUN_142e799d0 body=47 status=ok
// SIG undefined FUN_142e799d0(void)

longlong FUN_142e799d0(void)

{
  if (DAT_146b3c928 == 0) {
    FUN_141786a30(&DAT_146b3c928,&PTR_FUN_146733360);
  }
  return DAT_146b3c928;
}



// FUNCTION 142e79a00 FUN_142e79a00 body=47 status=ok
// SIG undefined FUN_142e79a00(void)

longlong FUN_142e79a00(void)

{
  if (DAT_146b3c930 == 0) {
    FUN_141786a30(&DAT_146b3c930,&PTR_FUN_1467333e0);
  }
  return DAT_146b3c930;
}



// FUNCTION 142e79a30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintSetLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b3c8a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TargetActorInfoLibrary",&DAT_146b3c8a8,
                  StaticRegisterNativesUBlueprintSetLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b3c8a8;
}



// FUNCTION 142e79ae0 FUN_142e79ae0 body=47 status=ok
// SIG undefined FUN_142e79ae0(void)

longlong FUN_142e79ae0(void)

{
  if (DAT_146b3c8a0 == 0) {
    FUN_141786440(&DAT_146b3c8a0,&PTR_GetPrivateStaticClass_14596c500);
  }
  return DAT_146b3c8a0;
}



// FUNCTION 142e79b10 FUN_142e79b10 body=47 status=ok
// SIG undefined FUN_142e79b10(void)

longlong FUN_142e79b10(void)

{
  if (DAT_146b3c840 == 0) {
    FUN_141786a30(&DAT_146b3c840,&PTR_FUN_146731a00);
  }
  return DAT_146b3c840;
}



// FUNCTION 142e79b40 FUN_142e79b40 body=47 status=ok
// SIG undefined FUN_142e79b40(void)

longlong FUN_142e79b40(void)

{
  if (DAT_146b3c848 == 0) {
    FUN_141786a30(&DAT_146b3c848,&PTR_FUN_146731b00);
  }
  return DAT_146b3c848;
}



// FUNCTION 142e79b70 FUN_142e79b70 body=47 status=ok
// SIG undefined FUN_142e79b70(void)

longlong FUN_142e79b70(void)

{
  if (DAT_146b3c850 == 0) {
    FUN_141786a30(&DAT_146b3c850,&PTR_FUN_146731c10);
  }
  return DAT_146b3c850;
}



// FUNCTION 142e79ba0 FUN_142e79ba0 body=47 status=ok
// SIG undefined FUN_142e79ba0(void)

longlong FUN_142e79ba0(void)

{
  if (DAT_146b3c858 == 0) {
    FUN_141786a30(&DAT_146b3c858,&PTR_FUN_146731d10);
  }
  return DAT_146b3c858;
}



// FUNCTION 142e79bd0 FUN_142e79bd0 body=47 status=ok
// SIG undefined FUN_142e79bd0(void)

longlong FUN_142e79bd0(void)

{
  if (DAT_146b3c860 == 0) {
    FUN_141786a30(&DAT_146b3c860,&PTR_FUN_146731e20);
  }
  return DAT_146b3c860;
}



// FUNCTION 142e79c00 FUN_142e79c00 body=47 status=ok
// SIG undefined FUN_142e79c00(void)

longlong FUN_142e79c00(void)

{
  if (DAT_146b3c868 == 0) {
    FUN_141786a30(&DAT_146b3c868,&PTR_FUN_146731f80);
  }
  return DAT_146b3c868;
}



// FUNCTION 142e79c30 FUN_142e79c30 body=47 status=ok
// SIG undefined FUN_142e79c30(void)

longlong FUN_142e79c30(void)

{
  if (DAT_146b3c870 == 0) {
    FUN_141786a30(&DAT_146b3c870,&PTR_FUN_146732090);
  }
  return DAT_146b3c870;
}



// FUNCTION 142e79c60 FUN_142e79c60 body=47 status=ok
// SIG undefined FUN_142e79c60(void)

longlong FUN_142e79c60(void)

{
  if (DAT_146b3c878 == 0) {
    FUN_141786a30(&DAT_146b3c878,&PTR_FUN_146732160);
  }
  return DAT_146b3c878;
}



// FUNCTION 142e79c90 FUN_142e79c90 body=47 status=ok
// SIG undefined FUN_142e79c90(void)

longlong FUN_142e79c90(void)

{
  if (DAT_146b3c880 == 0) {
    FUN_141786a30(&DAT_146b3c880,&PTR_FUN_146732280);
  }
  return DAT_146b3c880;
}



// FUNCTION 142e79cc0 FUN_142e79cc0 body=47 status=ok
// SIG undefined FUN_142e79cc0(void)

longlong FUN_142e79cc0(void)

{
  if (DAT_146b3c888 == 0) {
    FUN_141786a30(&DAT_146b3c888,&PTR_FUN_146732350);
  }
  return DAT_146b3c888;
}



// FUNCTION 142e79cf0 FUN_142e79cf0 body=47 status=ok
// SIG undefined FUN_142e79cf0(void)

longlong FUN_142e79cf0(void)

{
  if (DAT_146b3c890 == 0) {
    FUN_141786a30(&DAT_146b3c890,&PTR_FUN_146732420);
  }
  return DAT_146b3c890;
}



// FUNCTION 142e79d20 FUN_142e79d20 body=47 status=ok
// SIG undefined FUN_142e79d20(void)

longlong FUN_142e79d20(void)

{
  if (DAT_146b3c898 == 0) {
    FUN_141786a30(&DAT_146b3c898,&PTR_FUN_146732540);
  }
  return DAT_146b3c898;
}



// FUNCTION 142e79d50 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x390;
    *puVar1 = &PTR_FUN_14596fe10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e79d90 FUN_142e79d90 body=162 status=ok
// SIG undefined FUN_142e79d90(void)

longlong FUN_142e79d90(void)

{
  if (DAT_146b3c828 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TargetableComponent",&DAT_146b3c828,FUN_142e7ae50,
                  0x480,0x10000000,0,L"Engine",&LAB_142e7a5f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCircularThrobber::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3c828;
}



// FUNCTION 142e79e60 FUN_142e79e60 body=53 status=ok
// SIG undefined FUN_142e79e60(void)

void FUN_142e79e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_14596f8b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142e79ea0 FUN_142e79ea0 body=47 status=ok
// SIG undefined FUN_142e79ea0(void)

longlong FUN_142e79ea0(void)

{
  if (DAT_146b3c6b0 == 0) {
    FUN_141786440(&DAT_146b3c6b0,&PTR_LAB_14596d220);
  }
  return DAT_146b3c6b0;
}



// FUNCTION 142e79ed0 FUN_142e79ed0 body=47 status=ok
// SIG undefined FUN_142e79ed0(void)

longlong FUN_142e79ed0(void)

{
  if (DAT_146b3c690 == 0) {
    FUN_141786a30(&DAT_146b3c690,&PTR_FUN_14672f580);
  }
  return DAT_146b3c690;
}



// FUNCTION 142e79f00 FUN_142e79f00 body=47 status=ok
// SIG undefined FUN_142e79f00(void)

longlong FUN_142e79f00(void)

{
  if (DAT_146b3c698 == 0) {
    FUN_141786a30(&DAT_146b3c698,&PTR_FUN_14672f680);
  }
  return DAT_146b3c698;
}



// FUNCTION 142e79f30 FUN_142e79f30 body=47 status=ok
// SIG undefined FUN_142e79f30(void)

longlong FUN_142e79f30(void)

{
  if (DAT_146b3c6a0 == 0) {
    FUN_141786a30(&DAT_146b3c6a0,&PTR_FUN_14672f7c0);
  }
  return DAT_146b3c6a0;
}



// FUNCTION 142e79f60 FUN_142e79f60 body=47 status=ok
// SIG undefined FUN_142e79f60(void)

longlong FUN_142e79f60(void)

{
  if (DAT_146b3c6a8 == 0) {
    FUN_141786a30(&DAT_146b3c6a8,&PTR_FUN_14672f900);
  }
  return DAT_146b3c6a8;
}



// FUNCTION 142e79f90 FUN_142e79f90 body=47 status=ok
// SIG undefined FUN_142e79f90(void)

longlong FUN_142e79f90(void)

{
  if (DAT_146b3c770 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c770,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467301a0);
  }
  return DAT_146b3c770;
}



// FUNCTION 142e79fc0 FUN_142e79fc0 body=47 status=ok
// SIG undefined FUN_142e79fc0(void)

longlong FUN_142e79fc0(void)

{
  if (DAT_146b3c820 == 0) {
    FUN_141786440(&DAT_146b3c820,&PTR_FUN_14596eb00);
  }
  return DAT_146b3c820;
}



// FUNCTION 142e79ff0 FUN_142e79ff0 body=47 status=ok
// SIG undefined FUN_142e79ff0(void)

longlong FUN_142e79ff0(void)

{
  if (DAT_146b3c778 == 0) {
    FUN_141786a30(&DAT_146b3c778,&PTR_FUN_146730260);
  }
  return DAT_146b3c778;
}



// FUNCTION 142e7a020 FUN_142e7a020 body=47 status=ok
// SIG undefined FUN_142e7a020(void)

longlong FUN_142e7a020(void)

{
  if (DAT_146b3c780 == 0) {
    FUN_141786a30(&DAT_146b3c780,&PTR_FUN_146730360);
  }
  return DAT_146b3c780;
}



// FUNCTION 142e7a050 FUN_142e7a050 body=47 status=ok
// SIG undefined FUN_142e7a050(void)

longlong FUN_142e7a050(void)

{
  if (DAT_146b3c788 == 0) {
    FUN_141786a30(&DAT_146b3c788,&PTR_FUN_1467303e0);
  }
  return DAT_146b3c788;
}



// FUNCTION 142e7a080 FUN_142e7a080 body=47 status=ok
// SIG undefined FUN_142e7a080(void)

longlong FUN_142e7a080(void)

{
  if (DAT_146b3c790 == 0) {
    FUN_141786a30(&DAT_146b3c790,&PTR_FUN_1467304a0);
  }
  return DAT_146b3c790;
}



// FUNCTION 142e7a0b0 FUN_142e7a0b0 body=47 status=ok
// SIG undefined FUN_142e7a0b0(void)

longlong FUN_142e7a0b0(void)

{
  if (DAT_146b3c798 == 0) {
    FUN_141786a30(&DAT_146b3c798,&PTR_FUN_146730520);
  }
  return DAT_146b3c798;
}



// FUNCTION 142e7a0e0 FUN_142e7a0e0 body=47 status=ok
// SIG undefined FUN_142e7a0e0(void)

longlong FUN_142e7a0e0(void)

{
  if (DAT_146b3c7a0 == 0) {
    FUN_141786a30(&DAT_146b3c7a0,&PTR_FUN_1467305d0);
  }
  return DAT_146b3c7a0;
}



// FUNCTION 142e7a110 FUN_142e7a110 body=47 status=ok
// SIG undefined FUN_142e7a110(void)

longlong FUN_142e7a110(void)

{
  if (DAT_146b3c7a8 == 0) {
    FUN_141786a30(&DAT_146b3c7a8,&PTR_FUN_146730650);
  }
  return DAT_146b3c7a8;
}



// FUNCTION 142e7a140 FUN_142e7a140 body=47 status=ok
// SIG undefined FUN_142e7a140(void)

longlong FUN_142e7a140(void)

{
  if (DAT_146b3c7b0 == 0) {
    FUN_141786a30(&DAT_146b3c7b0,&PTR_FUN_1467306e0);
  }
  return DAT_146b3c7b0;
}



// FUNCTION 142e7a170 FUN_142e7a170 body=47 status=ok
// SIG undefined FUN_142e7a170(void)

longlong FUN_142e7a170(void)

{
  if (DAT_146b3c7b8 == 0) {
    FUN_141786a30(&DAT_146b3c7b8,&PTR_FUN_1467307b0);
  }
  return DAT_146b3c7b8;
}



// FUNCTION 142e7a1a0 FUN_142e7a1a0 body=47 status=ok
// SIG undefined FUN_142e7a1a0(void)

longlong FUN_142e7a1a0(void)

{
  if (DAT_146b3c7c0 == 0) {
    FUN_141786a30(&DAT_146b3c7c0,&PTR_FUN_146730840);
  }
  return DAT_146b3c7c0;
}



// FUNCTION 142e7a1d0 FUN_142e7a1d0 body=47 status=ok
// SIG undefined FUN_142e7a1d0(void)

longlong FUN_142e7a1d0(void)

{
  if (DAT_146b3c7c8 == 0) {
    FUN_141786a30(&DAT_146b3c7c8,&PTR_FUN_146730910);
  }
  return DAT_146b3c7c8;
}



// FUNCTION 142e7a200 FUN_142e7a200 body=47 status=ok
// SIG undefined FUN_142e7a200(void)

longlong FUN_142e7a200(void)

{
  if (DAT_146b3c7d0 == 0) {
    FUN_141786a30(&DAT_146b3c7d0,&PTR_FUN_1467309a0);
  }
  return DAT_146b3c7d0;
}



// FUNCTION 142e7a230 FUN_142e7a230 body=47 status=ok
// SIG undefined FUN_142e7a230(void)

longlong FUN_142e7a230(void)

{
  if (DAT_146b3c7d8 == 0) {
    FUN_141786a30(&DAT_146b3c7d8,&PTR_FUN_146730a30);
  }
  return DAT_146b3c7d8;
}



// FUNCTION 142e7a260 FUN_142e7a260 body=47 status=ok
// SIG undefined FUN_142e7a260(void)

longlong FUN_142e7a260(void)

{
  if (DAT_146b3c7e0 == 0) {
    FUN_141786a30(&DAT_146b3c7e0,&PTR_FUN_146730b00);
  }
  return DAT_146b3c7e0;
}



// FUNCTION 142e7a290 FUN_142e7a290 body=47 status=ok
// SIG undefined FUN_142e7a290(void)

longlong FUN_142e7a290(void)

{
  if (DAT_146b3c7e8 == 0) {
    FUN_141786a30(&DAT_146b3c7e8,&PTR_FUN_146730b40);
  }
  return DAT_146b3c7e8;
}



// FUNCTION 142e7a2c0 FUN_142e7a2c0 body=47 status=ok
// SIG undefined FUN_142e7a2c0(void)

longlong FUN_142e7a2c0(void)

{
  if (DAT_146b3c7f0 == 0) {
    FUN_141786a30(&DAT_146b3c7f0,&PTR_FUN_146730bd0);
  }
  return DAT_146b3c7f0;
}



// FUNCTION 142e7a2f0 FUN_142e7a2f0 body=47 status=ok
// SIG undefined FUN_142e7a2f0(void)

longlong FUN_142e7a2f0(void)

{
  if (DAT_146b3c7f8 == 0) {
    FUN_141786a30(&DAT_146b3c7f8,&PTR_FUN_146730c60);
  }
  return DAT_146b3c7f8;
}



// FUNCTION 142e7a320 FUN_142e7a320 body=47 status=ok
// SIG undefined FUN_142e7a320(void)

longlong FUN_142e7a320(void)

{
  if (DAT_146b3c800 == 0) {
    FUN_141786a30(&DAT_146b3c800,&PTR_FUN_146730cf0);
  }
  return DAT_146b3c800;
}



// FUNCTION 142e7a350 FUN_142e7a350 body=47 status=ok
// SIG undefined FUN_142e7a350(void)

longlong FUN_142e7a350(void)

{
  if (DAT_146b3c808 == 0) {
    FUN_141786a30(&DAT_146b3c808,&PTR_FUN_146730d80);
  }
  return DAT_146b3c808;
}



// FUNCTION 142e7a380 FUN_142e7a380 body=47 status=ok
// SIG undefined FUN_142e7a380(void)

longlong FUN_142e7a380(void)

{
  if (DAT_146b3c810 == 0) {
    FUN_141786a30(&DAT_146b3c810,&PTR_FUN_146730e00);
  }
  return DAT_146b3c810;
}



// FUNCTION 142e7a3b0 FUN_142e7a3b0 body=47 status=ok
// SIG undefined FUN_142e7a3b0(void)

longlong FUN_142e7a3b0(void)

{
  if (DAT_146b3c818 == 0) {
    FUN_141786a30(&DAT_146b3c818,&PTR_FUN_146730e80);
  }
  return DAT_146b3c818;
}



// FUNCTION 142e7a3f0 FUN_142e7a3f0 body=47 status=ok
// SIG undefined FUN_142e7a3f0(void)

longlong FUN_142e7a3f0(void)

{
  if (DAT_146b3c6c0 == 0) {
    FUN_141786440(&DAT_146b3c6c0,&PTR_thunk_FUN_142e7ab40_14596d4a0);
  }
  return DAT_146b3c6c0;
}



// FUNCTION 142e7a430 FUN_142e7a430 body=162 status=ok
// SIG undefined FUN_142e7a430(void)

longlong FUN_142e7a430(void)

{
  if (DAT_146b3c6f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StatusEffectStackingStrategyData_Capped",
                  &DAT_146b3c6f8,FUN_140447710,0x40,0x10000000,0,L"Engine",&LAB_142e7a5d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e7ab40,&LAB_140447700,0);
  }
  return DAT_146b3c6f8;
}



// FUNCTION 142e7a4e0 FUN_142e7a4e0 body=53 status=ok
// SIG undefined FUN_142e7a4e0(void)

void FUN_142e7a4e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_14596fa90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7a520 FUN_142e7a520 body=53 status=ok
// SIG undefined FUN_142e7a520(void)

void FUN_142e7a520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_14596fba8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e7a560 FUN_142e7a560 body=53 status=ok
// SIG undefined FUN_142e7a560(void)

void FUN_142e7a560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_14596f6f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e7a660 FUN_142e7a660 body=73 status=ok
// SIG undefined FUN_142e7a660(void)

void FUN_142e7a660(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 9),0,0x8f);
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_142de2f30(param_2 + 2,1);
  param_2[0x12] = 0;
  return;
}



// FUNCTION 142e7a850 FUN_142e7a850 body=74 status=ok
// SIG undefined FUN_142e7a850(void)

undefined1 FUN_142e7a850(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142cb3d70(param_2 + param_3,param_3);
      param_3 = param_3 + 0x390;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e7a980 FUN_142e7a980 body=55 status=ok
// SIG undefined FUN_142e7a980(void)

void FUN_142e7a980(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c540 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c540 = GetStaticEnum(FUN_142e7b2a0,uVar1,L"EAITargetScoringBoost");
  }
  return;
}



// FUNCTION 142e7a9c0 FUN_142e7a9c0 body=55 status=ok
// SIG undefined FUN_142e7a9c0(void)

void FUN_142e7a9c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c538 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c538 = GetStaticEnum(FUN_142e7b2d0,uVar1,L"EAimAssistSnapTargetType");
  }
  return;
}



// FUNCTION 142e7aa00 EStatusEffectDurationType_StaticEnum body=55 status=ok
// SIG undefined EStatusEffectDurationType_StaticEnum(void)

void EStatusEffectDurationType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c558 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c558 = GetStaticEnum(FUN_142e7b300,uVar1,L"EStatusEffectDurationType");
  }
  return;
}



// FUNCTION 142e7aa40 FUN_142e7aa40 body=55 status=ok
// SIG undefined FUN_142e7aa40(void)

void FUN_142e7aa40(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c548 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c548 =
         GetStaticEnum(FUN_142e7b330,uVar1,L"EStatusEffectStackingInstanceReplacementCriteria");
  }
  return;
}



// FUNCTION 142e7aa80 FUN_142e7aa80 body=55 status=ok
// SIG undefined FUN_142e7aa80(void)

void FUN_142e7aa80(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c550 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c550 =
         GetStaticEnum(FUN_142e7b360,uVar1,L"EStatusEffectStackingInstanceSelectionCriteria");
  }
  return;
}



// FUNCTION 142e7aac0 FUN_142e7aac0 body=55 status=ok
// SIG undefined FUN_142e7aac0(void)

void FUN_142e7aac0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c530 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c530 = GetStaticEnum(FUN_142e7b390,uVar1,L"EStretchBonesActorTrackingStyle");
  }
  return;
}



// FUNCTION 142e7ab00 FUN_142e7ab00 body=55 status=ok
// SIG undefined FUN_142e7ab00(void)

void FUN_142e7ab00(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c528 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c528 = GetStaticEnum(FUN_142e7b3c0,uVar1,L"EStretchBonesMarkerMode");
  }
  return;
}



// FUNCTION 142e7ab40 FUN_142e7ab40 body=162 status=ok
// SIG undefined FUN_142e7ab40(void)

longlong FUN_142e7ab40(void)

{
  if (DAT_146b3c6c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StatusEffectStackingStrategyData",&DAT_146b3c6c8,
                  FUN_140447710,0x30,0x10000001,0,L"Engine",&LAB_142e7a5b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3c6c8;
}



// FUNCTION 142e7abf0 FUN_142e7abf0 body=162 status=ok
// SIG undefined FUN_142e7abf0(void)

longlong FUN_142e7abf0(void)

{
  if (DAT_146b3c6b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"StatusEffectsStatics",&DAT_146b3c6b8,FUN_142e7adf0,
                  0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b3c6b8;
}



// FUNCTION 142e7aca0 FUN_142e7aca0 body=6 status=ok
// SIG undefined FUN_142e7aca0(void)

undefined8 FUN_142e7aca0(void)

{
  return 0x5738bd23;
}



// FUNCTION 142e7acb0 FUN_142e7acb0 body=6 status=ok
// SIG undefined FUN_142e7acb0(void)

undefined8 FUN_142e7acb0(void)

{
  return 0xd877f6ea;
}



// FUNCTION 142e7acc0 FUN_142e7acc0 body=6 status=ok
// SIG undefined FUN_142e7acc0(void)

undefined8 FUN_142e7acc0(void)

{
  return 0xebb83971;
}



// FUNCTION 142e7acd0 FUN_142e7acd0 body=6 status=ok
// SIG undefined FUN_142e7acd0(void)

undefined8 FUN_142e7acd0(void)

{
  return 0xf955fbcd;
}



// FUNCTION 142e7ace0 FUN_142e7ace0 body=6 status=ok
// SIG undefined FUN_142e7ace0(void)

undefined8 FUN_142e7ace0(void)

{
  return 0x56e8f569;
}



// FUNCTION 142e7acf0 FUN_142e7acf0 body=6 status=ok
// SIG undefined FUN_142e7acf0(void)

undefined8 FUN_142e7acf0(void)

{
  return 0x5a8fd2cb;
}



// FUNCTION 142e7ad00 FUN_142e7ad00 body=6 status=ok
// SIG undefined FUN_142e7ad00(void)

undefined8 FUN_142e7ad00(void)

{
  return 0x65bf1c5a;
}



// FUNCTION 142e7ad10 FUN_142e7ad10 body=6 status=ok
// SIG undefined FUN_142e7ad10(void)

undefined8 FUN_142e7ad10(void)

{
  return 0x99f736c7;
}



// FUNCTION 142e7ad20 FUN_142e7ad20 body=6 status=ok
// SIG undefined FUN_142e7ad20(void)

undefined8 FUN_142e7ad20(void)

{
  return 0x2a34c61d;
}



// FUNCTION 142e7adb0 FUN_142e7adb0 body=61 status=ok
// SIG undefined FUN_142e7adb0(void)

void FUN_142e7adb0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b3c660);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142e7adf0 FUN_142e7adf0 body=34 status=ok
// SIG undefined FUN_142e7adf0(void)

void FUN_142e7adf0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e7abf0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddStatusEffect_14596f620,4);
  return;
}



// FUNCTION 142e7ae20 StaticRegisterNativesUBlueprintSetLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintSetLibrary(void)

void UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_FindActorTargetingComponent_14596ff30,0xc);
  return;
}



// FUNCTION 142e7ae50 FUN_142e7ae50 body=34 status=ok
// SIG undefined FUN_142e7ae50(void)

void FUN_142e7ae50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e79d90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAvailableSocketNames_14596fcc0,0x15);
  return;
}



// FUNCTION 142e7ae80 FUN_142e7ae80 body=34 status=ok
// SIG undefined FUN_142e7ae80(void)

void FUN_142e7ae80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e79600();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_DoesBestTargetHaveStimulusForSen_145970030,0x10);
  return;
}



// FUNCTION 142e7aeb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c738 == 0) {
    uVar1 = FUN_142e7aca0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c738 = GetStaticStruct(FUN_142e7b3f0,uVar2,L"OverrideMeleeSocket",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e7af10 FUN_142e7af10 body=82 status=ok
// SIG undefined FUN_142e7af10(void)

void FUN_142e7af10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c670 == 0) {
    uVar1 = FUN_142e7acb0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c670 = GetStaticStruct(FUN_142e7b420,uVar2,L"StatusEffectRemoveSpec",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e7af70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c680 == 0) {
    uVar1 = FUN_142e7acc0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c680 = GetStaticStruct(FUN_142e7b450,uVar2,L"StatusEffectSpec",0x38,uVar1);
  }
  return;
}



// FUNCTION 142e7afd0 FUN_142e7afd0 body=82 status=ok
// SIG undefined FUN_142e7afd0(void)

void FUN_142e7afd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c6e0 == 0) {
    uVar1 = FUN_142e7acd0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c6e0 =
         GetStaticStruct(FUN_142e7b480,uVar2,L"StatusEffectStackingStrategyData_DurationRefundData",
                         8,uVar1);
  }
  return;
}



// FUNCTION 142e7b030 FUN_142e7b030 body=82 status=ok
// SIG undefined FUN_142e7b030(void)

void FUN_142e7b030(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c710 == 0) {
    uVar1 = FUN_142e7ace0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c710 = GetStaticStruct(FUN_142e7b4b0,uVar2,L"StretchBonesInstance",0xa0,uVar1);
  }
  return;
}



// FUNCTION 142e7b090 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FIndianaSliderStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c830 == 0) {
    uVar1 = FUN_142e7acf0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c830 = GetStaticStruct(FUN_142e7b4e0,uVar2,L"TargetActorInfo",0x390,uVar1);
  }
  return;
}



// FUNCTION 142e7b0f0 FUN_142e7b0f0 body=82 status=ok
// SIG undefined FUN_142e7b0f0(void)

void FUN_142e7b0f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c768 == 0) {
    uVar1 = FUN_142e7ad00();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c768 = GetStaticStruct(FUN_142e79f90,uVar2,L"TargetLocationBoundsSettings",0xc,uVar1);
  }
  return;
}



// FUNCTION 142e7b150 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSubmixEffectConvolutionReverbSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c748 == 0) {
    uVar1 = FUN_142e7ad10();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c748 = GetStaticStruct(FUN_142e7b510,uVar2,L"TargetLocationData",0x20,uVar1);
  }
  return;
}



// FUNCTION 142e7b1b0 FUN_142e7b1b0 body=82 status=ok
// SIG undefined FUN_142e7b1b0(void)

void FUN_142e7b1b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3c758 == 0) {
    uVar1 = FUN_142e7ad20();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c758 = GetStaticStruct(FUN_142e7b540,uVar2,L"TargetLocationSettings",0x98,uVar1);
  }
  return;
}



// FUNCTION 142e7b210 FUN_142e7b210 body=47 status=ok
// SIG undefined FUN_142e7b210(void)

longlong FUN_142e7b210(void)

{
  if (DAT_146b3c6f0 == 0) {
    FUN_141786440(&DAT_146b3c6f0,&PTR_FUN_14596e230);
  }
  return DAT_146b3c6f0;
}



// FUNCTION 142e7b240 FUN_142e7b240 body=47 status=ok
// SIG undefined FUN_142e7b240(void)

longlong FUN_142e7b240(void)

{
  if (DAT_146b3c720 == 0) {
    FUN_141786a30(&DAT_146b3c720,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672fdd0);
  }
  return DAT_146b3c720;
}



// FUNCTION 142e7b270 FUN_142e7b270 body=47 status=ok
// SIG undefined FUN_142e7b270(void)

longlong FUN_142e7b270(void)

{
  if (DAT_146b3c8b0 == 0) {
    FUN_141786a30(&DAT_146b3c8b0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146732670);
  }
  return DAT_146b3c8b0;
}



// FUNCTION 142e7b2a0 FUN_142e7b2a0 body=47 status=ok
// SIG undefined FUN_142e7b2a0(void)

longlong FUN_142e7b2a0(void)

{
  if (DAT_146b3c730 == 0) {
    FUN_1417866a0(&DAT_146b3c730,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467337e0);
  }
  return DAT_146b3c730;
}



// FUNCTION 142e7b2d0 FUN_142e7b2d0 body=47 status=ok
// SIG undefined FUN_142e7b2d0(void)

longlong FUN_142e7b2d0(void)

{
  if (DAT_146b3c728 == 0) {
    FUN_1417866a0(&DAT_146b3c728,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146733790);
  }
  return DAT_146b3c728;
}



// FUNCTION 142e7b300 FUN_142e7b300 body=47 status=ok
// SIG undefined FUN_142e7b300(void)

longlong FUN_142e7b300(void)

{
  if (DAT_146b3c668 == 0) {
    FUN_1417866a0(&DAT_146b3c668,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672f0e0);
  }
  return DAT_146b3c668;
}



// FUNCTION 142e7b330 FUN_142e7b330 body=47 status=ok
// SIG undefined FUN_142e7b330(void)

longlong FUN_142e7b330(void)

{
  if (DAT_146b3c6d0 == 0) {
    FUN_1417866a0(&DAT_146b3c6d0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146733650);
  }
  return DAT_146b3c6d0;
}



// FUNCTION 142e7b360 FUN_142e7b360 body=47 status=ok
// SIG undefined FUN_142e7b360(void)

longlong FUN_142e7b360(void)

{
  if (DAT_146b3c6d8 == 0) {
    FUN_1417866a0(&DAT_146b3c6d8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467336a0);
  }
  return DAT_146b3c6d8;
}



// FUNCTION 142e7b390 FUN_142e7b390 body=47 status=ok
// SIG undefined FUN_142e7b390(void)

longlong FUN_142e7b390(void)

{
  if (DAT_146b3c708 == 0) {
    FUN_1417866a0(&DAT_146b3c708,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146733740);
  }
  return DAT_146b3c708;
}



// FUNCTION 142e7b3c0 FUN_142e7b3c0 body=47 status=ok
// SIG undefined FUN_142e7b3c0(void)

longlong FUN_142e7b3c0(void)

{
  if (DAT_146b3c700 == 0) {
    FUN_1417866a0(&DAT_146b3c700,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467336f0);
  }
  return DAT_146b3c700;
}



// FUNCTION 142e7b3f0 FUN_142e7b3f0 body=47 status=ok
// SIG undefined FUN_142e7b3f0(void)

longlong FUN_142e7b3f0(void)

{
  if (DAT_146b3c740 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c740,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672fe90);
  }
  return DAT_146b3c740;
}



// FUNCTION 142e7b420 FUN_142e7b420 body=47 status=ok
// SIG undefined FUN_142e7b420(void)

longlong FUN_142e7b420(void)

{
  if (DAT_146b3c678 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c678,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672f1b0);
  }
  return DAT_146b3c678;
}



// FUNCTION 142e7b450 FUN_142e7b450 body=47 status=ok
// SIG undefined FUN_142e7b450(void)

longlong FUN_142e7b450(void)

{
  if (DAT_146b3c688 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c688,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672f450);
  }
  return DAT_146b3c688;
}



// FUNCTION 142e7b480 FUN_142e7b480 body=47 status=ok
// SIG undefined FUN_142e7b480(void)

longlong FUN_142e7b480(void)

{
  if (DAT_146b3c6e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c6e8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672f9b0);
  }
  return DAT_146b3c6e8;
}



// FUNCTION 142e7b4b0 FUN_142e7b4b0 body=47 status=ok
// SIG undefined FUN_142e7b4b0(void)

longlong FUN_142e7b4b0(void)

{
  if (DAT_146b3c718 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c718,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672fd70);
  }
  return DAT_146b3c718;
}



// FUNCTION 142e7b4e0 FUN_142e7b4e0 body=47 status=ok
// SIG undefined FUN_142e7b4e0(void)

longlong FUN_142e7b4e0(void)

{
  if (DAT_146b3c838 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c838,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146731930);
  }
  return DAT_146b3c838;
}



// FUNCTION 142e7b510 FUN_142e7b510 body=47 status=ok
// SIG undefined FUN_142e7b510(void)

longlong FUN_142e7b510(void)

{
  if (DAT_146b3c750 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c750,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_14672ffd0);
  }
  return DAT_146b3c750;
}



// FUNCTION 142e7b540 FUN_142e7b540 body=47 status=ok
// SIG undefined FUN_142e7b540(void)

longlong FUN_142e7b540(void)

{
  if (DAT_146b3c760 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3c760,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146730090);
  }
  return DAT_146b3c760;
}



// FUNCTION 142e7b570 FUN_142e7b570 body=267 status=ok
// SIG undefined FUN_142e7b570(void)

void FUN_142e7b570(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_40 = 0;
  local_38 = 0xffffffff;
  uStack_30 = 0xffffffff;
  local_28 = 1;
  local_20 = 0;
  uStack_18 = 0;
  local_24 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142dc4b70(local_58,local_res10,puVar2);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  param_3[2] = puVar2[2];
  return;
}



// FUNCTION 142e7b680 FUN_142e7b680 body=257 status=ok
// SIG undefined FUN_142e7b680(void)

void FUN_142e7b680(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_142dca7b0(param_1,local_res20,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7b790 FUN_142e7b790 body=128 status=ok
// SIG undefined FUN_142e7b790(void)

void FUN_142e7b790(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = thunk_FUN_142ddddc0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7b810 FUN_142e7b810 body=278 status=ok
// SIG undefined FUN_142e7b810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7b810(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_3f8 [32];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_3b8;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3d8);
  }
  puVar3 = local_3d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142dcd080(local_3c8,puVar2,puVar3);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e7b930 FUN_142e7b930 body=232 status=ok
// SIG undefined FUN_142e7b930(void)

void FUN_142e7b930(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
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
  puVar1 = (undefined8 *)FUN_142dcd310(param_1,local_28,puVar2,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e7ba20 FUN_142e7ba20 body=314 status=ok
// SIG undefined FUN_142e7ba20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7ba20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_448 [32];
  undefined1 local_428 [112];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  puVar2 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_140772210(local_428);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_428);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_428);
  }
  puVar1 = local_428;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((byte)puVar2[0x368] < 8) {
    FUN_1407263c0(puVar1,puVar2 + (ulonglong)(byte)puVar2[0x368] * 0x68 + 0x20);
    *param_3 = 1;
  }
  else {
    *param_3 = 0;
  }
  return;
}



// FUNCTION 142e7bb60 FUN_142e7bb60 body=293 status=ok
// SIG undefined FUN_142e7bb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7bb60(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_3e8 [32];
  undefined4 local_3c8;
  undefined8 local_3c4;
  undefined4 local_3bc;
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_3b8;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_3c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c8);
  }
  puVar3 = &local_3c8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142dcd4d0(puVar2,&local_3c4,puVar3,0);
  *param_3 = local_3c4;
  *(undefined4 *)(param_3 + 1) = local_3bc;
  return;
}



// FUNCTION 142e7bc90 FUN_142e7bc90 body=142 status=ok
// SIG undefined FUN_142e7bc90(void)

void FUN_142e7bc90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142dcd660(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7bd20 FUN_142e7bd20 body=250 status=ok
// SIG undefined FUN_142e7bd20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7bd20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8 [4];
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  FUN_142dc1ad0(local_3c8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3c8);
  }
  local_3d8[0] = 0;
  puVar2 = local_3c8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dcd6e0(param_1,puVar2,local_3d8[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7be20 FUN_142e7be20 body=159 status=ok
// SIG undefined FUN_142e7be20(void)

void FUN_142e7be20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_142dcd740(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}


