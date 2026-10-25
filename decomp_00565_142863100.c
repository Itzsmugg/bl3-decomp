// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142863100 operator() body=113 status=ok
// SIG undefined operator()(void)

void <lambda_17fb35fe15eba4f6e4b39a422fc5a5db>::operator()
               (undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  if (*param_2 == 0) {
    iVar1 = *(int *)(param_3 + 1);
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      if (iVar1 == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_3;
      }
      uVar3 = UFont::GetPrivateStaticClass();
      lVar4 = FUN_141799c90(uVar3,0,puVar5,0,0,0,1);
      *param_2 = lVar4;
    }
  }
  return;
}



// FUNCTION 142863180 FUN_142863180 body=1174 status=ok
// SIG undefined FUN_142863180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142863180(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  longlong local_88 [4];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_2 + 0x10) == CONCAT44(DAT_1468c21b0._4_4_,(undefined4)DAT_1468c21b0))
  {
    return;
  }
  uVar21 = 0;
  *(undefined4 *)(param_2 + 0x10) = (undefined4)DAT_1468c21b0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  uVar14 = uVar21;
  uVar22 = uVar21;
  if (0 < *(int *)(param_2 + 0x28)) {
    do {
      iVar20 = (int)uVar14;
      lVar18 = *(longlong *)(param_2 + 0x20) + uVar22;
      cVar12 = FWeakObjectPtr::IsValid(lVar18,1,0);
      if ((cVar12 == '\0') || (lVar18 = *(longlong *)(lVar18 + 8), lVar18 == 0)) {
        iVar13 = *(int *)(param_2 + 0x28);
        iVar16 = (iVar13 - iVar20) + -1;
        if (0 < iVar16) {
          iVar16 = 1;
        }
        if (iVar16 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar20 * 0x10 + *(longlong *)(param_2 + 0x20)),
                     (void *)((longlong)(iVar13 - iVar16) * 0x10 + *(longlong *)(param_2 + 0x20)),
                     (longlong)iVar16 << 4);
          iVar13 = *(int *)(param_2 + 0x28);
        }
        *(int *)(param_2 + 0x28) = iVar13 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_2 + 0x20);
        iVar20 = iVar20 + -1;
        uVar22 = uVar22 - 0x10;
      }
      else if (((*(byte *)(lVar18 + 0xc) & 1) != 0) && (*(char *)(lVar18 + 0xd) != '\0')) {
        puVar8 = (undefined8 *)param_1[1];
        uVar14 = uVar21;
        local_c0 = lVar18;
        if (*(int *)(puVar8 + 8) != 0) {
          plVar15 = (longlong *)puVar8[6];
          if ((longlong *)puVar8[6] == (longlong *)0x0) {
            plVar15 = puVar8 + 2;
          }
          if (plVar15 != (longlong *)0x0) {
            uVar14 = (**(code **)(*plVar15 + 8))();
          }
        }
        (*(code *)*puVar8)(uVar14,&local_c0);
        uVar14 = local_60;
        if (((longlong)*(int *)(lVar18 + 0x14) ==
             CONCAT44(DAT_1468c21b0._4_4_,(undefined4)DAT_1468c21b0)) &&
           (*(longlong *)(lVar18 + 0x18) != 0)) {
          lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x40);
          if (lVar18 != 0) {
            LOCK();
            *(int *)(lVar18 + 0x48) = *(int *)(lVar18 + 0x48) + 1;
            UNLOCK();
          }
          lVar19 = (longlong)(int)local_60;
          iVar13 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          if (local_60._4_4_ < iVar13) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_88,uVar14 & 0xffffffff);
          }
          plVar15 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar15 = local_68;
          }
          plVar15[lVar19] = lVar18;
        }
      }
      uVar14 = (ulonglong)(iVar20 + 1U);
      uVar22 = uVar22 + 0x10;
    } while ((int)(iVar20 + 1U) < *(int *)(param_2 + 0x28));
  }
  cVar12 = *(char *)(param_1[2] + 8);
  *(char *)(param_2 + 0xb) = cVar12;
  *(char *)(param_2 + 10) = cVar12;
  puVar9 = (undefined4 *)param_1[2];
  bVar3 = *(byte *)(param_2 + 0xc);
  lVar18 = *param_1;
  uVar2 = *puVar9;
  uVar10 = *(undefined8 *)(puVar9 + 4);
  uVar6 = puVar9[1];
  uVar7 = puVar9[2];
  if ((((bVar3 & 0x20) == 0) || (*(char *)(lVar18 + 0x9b4) == '\0')) ||
     (cVar12 != *(char *)(param_2 + 8))) {
    uVar17 = (bVar3 & 0x10) << 5 | 2;
  }
  else if ((bVar3 & 0x10) == 0) {
    iVar20 = DAT_1464a820c;
    if (((DAT_146b172f0 == 0x800) || (iVar20 = DAT_1464a8208, DAT_146b172f0 == 0x1000)) &&
       (iVar20 == 0)) {
      uVar17 = DAT_146b172f8 | 0xff;
    }
    else {
      uVar17 = DAT_146b172f4 | DAT_146b172f0 | 0xff;
    }
  }
  else {
    if (DAT_146b17320 == 0x800) {
      if (DAT_1464a820c == 0) {
        uVar17 = DAT_146b17328 | 0xff;
        goto LAB_14286346b;
      }
    }
    else if ((DAT_146b17320 == 0x1000) && (DAT_1464a8208 == 0)) {
      uVar17 = DAT_146b17328 | 0xff;
      goto LAB_14286346b;
    }
    uVar17 = DAT_146b17324 | DAT_146b17320 | 0xff;
  }
LAB_14286346b:
  local_b8 = uVar2;
  local_b4 = uVar6;
  local_b0 = uVar7;
  local_a8 = uVar10;
  plVar15 = (longlong *)TGraphTask<FTickFunctionTask>::CreateTask(local_a0,local_88,puVar9[3]);
  uVar4 = *(undefined1 *)(lVar18 + 0x9b6);
  uVar5 = *(undefined1 *)(lVar18 + 0x9b5);
  lVar19 = *plVar15;
  *(longlong *)(lVar19 + 0x10) = param_2;
  *(undefined4 *)(lVar19 + 0x18) = uVar2;
  *(undefined4 *)(lVar19 + 0x1c) = uVar6;
  *(undefined4 *)(lVar19 + 0x20) = uVar7;
  *(uint *)(lVar19 + 0x24) = uVar17;
  *(undefined8 *)(lVar19 + 0x28) = uVar10;
  *(undefined1 *)(lVar19 + 0x30) = uVar5;
  *(undefined1 *)(lVar19 + 0x31) = uVar4;
  lVar11 = *plVar15;
  FUN_14288f390(lVar11,plVar15[1],(int)plVar15[2],0);
  bVar3 = *(byte *)(param_2 + 0xb);
  *(longlong *)(param_2 + 0x18) = lVar11;
  lVar19 = (ulonglong)*(byte *)(param_2 + 10) + 3;
  if ((*(byte *)(param_2 + 0xc) & 0x10) == 0) {
    lVar19 = (ulonglong)*(byte *)(param_2 + 10) + 0xb;
  }
  plVar15 = (longlong *)(((ulonglong)bVar3 + lVar19 * 8) * 0x10 + lVar18);
  iVar20 = (int)plVar15[1];
  *(int *)(plVar15 + 1) = iVar20 + 1;
  if (*(int *)((longlong)plVar15 + 0xc) < iVar20 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar20);
  }
  lVar18 = (ulonglong)bVar3 * 0x30 + lVar18;
  *(longlong *)(*plVar15 + (longlong)iVar20 * 8) = lVar11;
  iVar20 = *(int *)(lVar18 + 0x28);
  *(int *)(lVar18 + 0x28) = iVar20 + 1;
  if (*(int *)(lVar18 + 0x2c) < iVar20 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (lVar18,iVar20);
  }
  lVar19 = *(longlong *)(lVar18 + 0x20);
  if (*(longlong *)(lVar18 + 0x20) == 0) {
    lVar19 = lVar18;
  }
  plVar15 = (longlong *)(lVar19 + (longlong)iVar20 * 8);
  if (plVar15 != (longlong *)0x0) {
    lVar18 = *(longlong *)(lVar11 + 0x40);
    *plVar15 = lVar18;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 0x48) = *(int *)(lVar18 + 0x48) + 1;
      UNLOCK();
    }
  }
  plVar15 = local_88;
  if (local_68 != (longlong *)0x0) {
    plVar15 = local_68;
  }
  *(undefined4 *)(param_2 + 0x14) = (undefined4)DAT_1468c21b0;
  for (iVar20 = (int)local_60; iVar20 != 0; iVar20 = iVar20 + -1) {
    if (*plVar15 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar15 + 0x48);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar15 = plVar15 + 1;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142863620 FUN_142863620 body=498 status=ok
// SIG undefined FUN_142863620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142863620(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  (**(code **)(*(longlong *)(param_1[1] + 0xe8) + 0x28))();
  (**(code **)(*(longlong *)param_1[1] + 0x28))();
  lVar1 = param_1[1];
  iVar3 = 0;
  plVar4 = *(longlong **)(lVar1 + 0x1f0);
  if (*(longlong **)(lVar1 + 0x1f0) == (longlong *)0x0) {
    plVar4 = (longlong *)(lVar1 + 0x140);
  }
  plVar5 = plVar4 + (longlong)*(int *)(lVar1 + 0x1f8) * 0xb;
  if (plVar4 != plVar5) {
    do {
      (**(code **)(*plVar4 + 0x28))(plVar4);
      plVar4 = plVar4 + 0xb;
    } while (plVar4 != plVar5);
    lVar1 = param_1[1];
  }
  local_118 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_38 = 0;
  local_28 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_30 = 0xffffffffffffffff;
  FUN_1426fb810(lVar1 + 0xe8,*param_1,&local_118);
  FUN_142723e40(param_1[1],*param_1,&local_118);
  FUN_142723ca0(param_1[1],*param_1,&local_118);
  FUN_142723be0(param_1[1],*param_1,&local_118,0);
  lVar1 = param_1[1];
  if (0 < *(int *)(lVar1 + 0x1f8)) {
    do {
      lVar2 = *(longlong *)(lVar1 + 0x1f0);
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        lVar2 = lVar1 + 0x140;
      }
      FUN_142723a20(lVar2 + (longlong)iVar3 * 0x58,iVar3,*param_1,&local_118);
      lVar1 = param_1[1];
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(lVar1 + 0x1f8));
  }
  FUN_142578240(*param_1,&local_118);
  (**(code **)(*(longlong *)(param_1[1] + 0x208) + 0x28))();
  (**(code **)(*(longlong *)(param_1[1] + 0x978) + 0x28))();
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142863820 FUN_142863820 body=514 status=ok
// SIG undefined FUN_142863820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142863820(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  (**(code **)(*(longlong *)(param_1[1] + 0x148) + 0x28))();
  (**(code **)(*(longlong *)(param_1[1] + 0x60) + 0x28))();
  lVar1 = param_1[1];
  iVar3 = 0;
  plVar4 = *(longlong **)(lVar1 + 0x250);
  if (*(longlong **)(lVar1 + 0x250) == (longlong *)0x0) {
    plVar4 = (longlong *)(lVar1 + 0x1a0);
  }
  plVar5 = plVar4 + (longlong)*(int *)(lVar1 + 600) * 0xb;
  if (plVar4 != plVar5) {
    do {
      (**(code **)(*plVar4 + 0x28))(plVar4);
      plVar4 = plVar4 + 0xb;
    } while (plVar4 != plVar5);
    lVar1 = param_1[1];
  }
  local_118 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_38 = 0;
  local_28 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_30 = 0xffffffffffffffff;
  FUN_1426fb810(lVar1 + 0x148,*param_1,&local_118);
  FUN_142723e40(param_1[1] + 0x60,*param_1,&local_118);
  FUN_142723ca0(param_1[1] + 0x60,*param_1,&local_118);
  FUN_142723be0(param_1[1] + 0x60,*param_1,&local_118,0);
  lVar1 = param_1[1];
  if (0 < *(int *)(lVar1 + 600)) {
    do {
      lVar2 = *(longlong *)(lVar1 + 0x250);
      if (*(longlong *)(lVar1 + 0x250) == 0) {
        lVar2 = lVar1 + 0x1a0;
      }
      FUN_142723a20(lVar2 + (longlong)iVar3 * 0x58,iVar3,*param_1,&local_118);
      lVar1 = param_1[1];
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(lVar1 + 600));
  }
  FUN_142578240(*param_1,&local_118);
  (**(code **)(*(longlong *)(param_1[1] + 0x268) + 0x28))();
  (**(code **)(*(longlong *)(param_1[1] + 0x9d8) + 0x28))();
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142863ab0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FArchiveReplaceOrClearExternalReferences<UObject>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FArchiveReplaceObjectRefBase::~FArchiveReplaceObjectRefBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 142863af0 FUN_142863af0 body=97 status=ok
// SIG undefined FUN_142863af0(void)

undefined8 * FUN_142863af0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dfab0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142863b60 FUN_142863b60 body=97 status=ok
// SIG undefined FUN_142863b60(void)

undefined8 * FUN_142863b60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dfb90;
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



// FUNCTION 142863bd0 FUN_142863bd0 body=97 status=ok
// SIG undefined FUN_142863bd0(void)

undefined8 * FUN_142863bd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dfac0;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142863c40 FUN_142863c40 body=97 status=ok
// SIG undefined FUN_142863c40(void)

undefined8 * FUN_142863c40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dfaf0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142863cb0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<TEnqueueUniqueRenderCommandType<`FScene::AddPrimitive'::`2'::AddPrimitiveCommandName,<lambda_9d3273c3bf1ce7a16aa34e73ab7c1e43>_>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451dfad0;
  if (param_1[0x23] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x23] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142863d20 FUN_142863d20 body=97 status=ok
// SIG undefined FUN_142863d20(void)

undefined8 * FUN_142863d20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dfbb0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142863d90 FUN_142863d90 body=97 status=ok
// SIG undefined FUN_142863d90(void)

undefined8 * FUN_142863d90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dfae0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142863e00 FUN_142863e00 body=97 status=ok
// SIG undefined FUN_142863e00(void)

undefined8 * FUN_142863e00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dfba0;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142863e70 FUN_142863e70 body=97 status=ok
// SIG undefined FUN_142863e70(void)

undefined8 * FUN_142863e70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451df138;
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



// FUNCTION 142863ee0 FUN_142863ee0 body=97 status=ok
// SIG undefined FUN_142863ee0(void)

undefined8 * FUN_142863ee0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451df128;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142863f50 FUN_142863f50 body=97 status=ok
// SIG undefined FUN_142863f50(void)

undefined8 * FUN_142863f50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451df148;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142863fc0 FUN_142863fc0 body=97 status=ok
// SIG undefined FUN_142863fc0(void)

undefined8 * FUN_142863fc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dea48;
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



// FUNCTION 142864030 FUN_142864030 body=97 status=ok
// SIG undefined FUN_142864030(void)

undefined8 * FUN_142864030(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451dea38;
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



// FUNCTION 1428640a0 FUN_1428640a0 body=97 status=ok
// SIG undefined FUN_1428640a0(void)

undefined8 * FUN_1428640a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451df4b8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142864110 FUN_142864110 body=97 status=ok
// SIG undefined FUN_142864110(void)

undefined8 * FUN_142864110(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451df118;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142864180 FUN_142864180 body=97 status=ok
// SIG undefined FUN_142864180(void)

undefined8 * FUN_142864180(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451df0f8;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1428641f0 FUN_1428641f0 body=97 status=ok
// SIG undefined FUN_1428641f0(void)

undefined8 * FUN_1428641f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451df108;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142864260 FUN_142864260 body=97 status=ok
// SIG undefined FUN_142864260(void)

undefined8 * FUN_142864260(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451de298;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1428642d0 FUN_1428642d0 body=97 status=ok
// SIG undefined FUN_1428642d0(void)

undefined8 * FUN_1428642d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451de2a8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142864340 FUN_142864340 body=97 status=ok
// SIG undefined FUN_142864340(void)

undefined8 * FUN_142864340(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451de5d0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1428643b0 FUN_1428643b0 body=97 status=ok
// SIG undefined FUN_1428643b0(void)

undefined8 * FUN_1428643b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451de5e0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142864420 FUN_142864420 body=97 status=ok
// SIG undefined FUN_142864420(void)

undefined8 * FUN_142864420(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451de5c0;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142864490 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FCPFUOWriter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1428644e0 FUN_1428644e0 body=43 status=ok
// SIG undefined FUN_1428644e0(void)

undefined8 * FUN_1428644e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451ddb98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142864510 FUN_142864510 body=52 status=ok
// SIG undefined FUN_142864510(void)

undefined8 FUN_142864510(undefined8 param_1,ulonglong param_2)

{
  FUN_142861e00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142864550 FUN_142864550 body=131 status=ok
// SIG undefined FUN_142864550(void)

undefined8 * FUN_142864550(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x2a];
  *param_1 = &PTR_FUN_1451dd7d0;
  param_1[2] = &PTR_LAB_1451dd970;
  if (lVar1 != 0) {
    FUN_14289d030(lVar1);
    FMemory::operator_delete(lVar1,0x1b0);
    param_1[0x2a] = 0;
  }
  FUN_142862840(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 1428645e0 `scalar_deleting_destructor' body=226 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UEngine::FErrorsAndWarningsCollector::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451ddb48;
  if (param_1[0x14] != 0) {
    uVar1 = FUN_141671850();
    FOutputDeviceRedirector::RemoveOutputDevice(uVar1,param_1);
    uVar1 = FUN_14164ab60();
    FUN_141597530(uVar1,param_1[0x14]);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  iVar3 = *(int *)(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)param_1[2];
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1428646d0 FUN_1428646d0 body=43 status=ok
// SIG undefined FUN_1428646d0(void)

undefined8 * FUN_1428646d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_1451df240;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142864700 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FViewport::FHitProxyMap::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FHitProxyMap();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142864740 FUN_142864740 body=43 status=ok
// SIG undefined FUN_142864740(void)

undefined8 * FUN_142864740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142864770 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPendingStreamingLevelHolder::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1428647e0 FUN_1428647e0 body=196 status=ok
// SIG undefined FUN_1428647e0(void)

longlong FUN_1428647e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xac0) != 0) {
    FMemory::Free();
  }
  FUN_1408bbda0(param_1 + 0x9a8);
  FUN_141edd2d0(param_1 + 0x978);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x960);
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x858);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x850);
  FUN_141edd2d0(param_1 + 0x208);
  FUN_140944f50(param_1 + 0x140);
  FPositionVertexBuffer::~FPositionVertexBuffer(param_1 + 0xe8);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xad0);
  }
  return param_1;
}



// FUNCTION 1428648b0 FUN_1428648b0 body=197 status=ok
// SIG undefined FUN_1428648b0(void)

longlong FUN_1428648b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    FMemory::Free();
  }
  FUN_1408bbda0(param_1 + 0xa08);
  FUN_141edd2d0(param_1 + 0x9d8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x9c0);
  if (*(longlong *)(param_1 + 0x968) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x8b8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x8b0);
  FUN_141edd2d0(param_1 + 0x268);
  FUN_140944f50(param_1 + 0x1a0);
  FPositionVertexBuffer::~FPositionVertexBuffer(param_1 + 0x148);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(param_1 + 0x60);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xae0);
  }
  return param_1;
}



// FUNCTION 142864980 `scalar_deleting_destructor' body=124 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextureRenderTarget2DResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  param_1[0xd] = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe);
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142864a00 `scalar_deleting_destructor' body=148 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTextureRenderTargetCubeResource::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x17);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x16);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x15);
  param_1[0xd] = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe);
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142864aa0 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FTickTaskManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14410aec8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142864b00 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UYFYSubsystem::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1408bbda0(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142864b40 FUN_142864b40 body=161 status=ok
// SIG undefined FUN_142864b40(void)

undefined8 * FUN_142864b40(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_1451ddc78;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = (longlong *)param_1[0x16];
    if ((longlong *)param_1[0x16] == (longlong *)0x0) {
      plVar1 = param_1 + 0x12;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc);
  FUN_142861cc0(param_1 + 6);
  FUN_142861cc0(param_1 + 4);
  FUN_142861cc0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142864bf0 FUN_142864bf0 body=52 status=ok
// SIG undefined FUN_142864bf0(void)

undefined8 FUN_142864bf0(undefined8 param_1,ulonglong param_2)

{
  FUN_142862840();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 142864c30 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTextureRenderTarget2D::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 142864cb0 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTextureRenderTarget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142864d30 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UManaComponentTexture::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142864db0 FUN_142864db0 body=67 status=ok
// SIG undefined FUN_142864db0(void)

longlong FUN_142864db0(longlong param_1,ulonglong param_2)

{
  FTimeline::~FTimeline(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 142864e00 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTimelineTemplate::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142864e80 Activate body=30 status=ok
// SIG undefined Activate(void)

void UTimelineComponent::Activate(longlong param_1)

{
  FUN_14232c410();
  FUN_14288e3d0(param_1 + 0x30,1);
  return;
}



// FUNCTION 142864ea0 FUN_142864ea0 body=194 status=ok
// SIG undefined FUN_142864ea0(void)

void FUN_142864ea0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *(undefined8 *)(param_3 + 2);
  FWeakObjectPtr::operator=(&local_30,0,param_3,param_4,0);
  iVar3 = *(int *)(param_1 + 400);
  lVar6 = (longlong)iVar3;
  *(int *)(param_1 + 400) = iVar3 + 1;
  local_30 = uVar1;
  local_2c = uVar2;
  local_28 = uVar4;
  if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x188,iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x188);
  *(undefined4 *)(lVar5 + lVar6 * 0x18) = param_2;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x18) = local_30;
  *(undefined4 *)(lVar5 + 0xc + lVar6 * 0x18) = local_2c;
  *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x18) = local_28;
  return;
}



// FUNCTION 142864f70 AddHitProxy body=78 status=ok
// SIG undefined AddHitProxy(void)

void FViewport::FHitProxyMap::AddHitProxy(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x30),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 142864fc0 FUN_142864fc0 body=578 status=ok
// SIG undefined FUN_142864fc0(void)

void FUN_142864fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  
  RemoveTestTickFunctions();
  local_50 = FUN_140cc25e0(param_2);
  puVar7 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  local_3c = 0;
  local_58 = 10000;
  puVar6 = puVar7;
  puVar8 = puVar7;
  puVar10 = puVar7;
  do {
    lVar9 = 8;
    do {
      puVar1 = (undefined8 *)operator_new(0x50);
      puVar4 = puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined2 *)((longlong)puVar1 + 0xd) = 0;
        *(undefined1 *)((longlong)puVar1 + 0xf) = 1;
        *(byte *)((longlong)puVar1 + 0xc) = *(byte *)((longlong)puVar1 + 0xc) & 200 | 8;
        puVar1[2] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        *(undefined4 *)(puVar1 + 7) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xbf800000;
        *(undefined4 *)(puVar1 + 8) = 0;
        puVar1[9] = 0;
        *puVar1 = &PTR__scalar_deleting_destructor__1451dd368;
        *(undefined1 *)(puVar1 + 1) = 0;
        *(byte *)((longlong)puVar1 + 0xc) = *(byte *)((longlong)puVar1 + 0xc) | 1;
        puVar4 = puVar1;
      }
      iVar5 = (int)puVar6;
      local_40 = iVar5 + 1;
      if ((int)puVar8 < (int)local_40) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,puVar6);
        puVar8 = (undefined8 *)(ulonglong)local_3c;
        puVar10 = local_48;
      }
      puVar6 = (undefined8 *)(ulonglong)local_40;
      puVar10[iVar5] = puVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar1 = (undefined8 *)operator_new(0x50);
    lVar9 = local_50;
    puVar4 = puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)((longlong)puVar1 + 0xd) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xf) = 1;
      *(byte *)((longlong)puVar1 + 0xc) = *(byte *)((longlong)puVar1 + 0xc) & 200 | 8;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xbf800000;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1[9] = 0;
      *puVar1 = &PTR__scalar_deleting_destructor__1451dd368;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(byte *)((longlong)puVar1 + 0xc) = *(byte *)((longlong)puVar1 + 0xc) | 1;
      puVar4 = puVar1;
    }
    if (*(char *)((longlong)puVar4 + 0xd) == '\0') {
      if (local_50 != 0) {
        ULevel::GetWorld(local_50);
      }
      FUN_142873fe0();
      lVar9 = *(longlong *)(lVar9 + 0x140);
      local_60 = puVar4;
      if (*(char *)((longlong)puVar4 + 0xf) == '\x01') {
        FUN_1421a37c0(lVar9 + 8,local_res18,&local_60,0);
        if (*(char *)(lVar9 + 0x128) != '\0') {
          lVar2 = lVar9 + 0xc0;
          puVar3 = local_res20;
          goto LAB_142865177;
        }
      }
      else {
        lVar2 = lVar9 + 0x60;
        puVar3 = local_68;
LAB_142865177:
        FUN_1421a37c0(lVar2,puVar3,&local_60,0);
      }
      puVar4[9] = lVar9;
      *(undefined1 *)((longlong)puVar4 + 0xd) = 1;
    }
    iVar5 = DAT_146b173a0;
    lVar9 = (longlong)DAT_146b173a0;
    DAT_146b173a0 = DAT_146b173a0 + 1;
    if (DAT_146b173a4 < DAT_146b173a0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b17398,iVar5);
    }
    local_58 = local_58 + -1;
    *(undefined8 **)(DAT_146b17398 + lVar9 * 8) = puVar4;
    if (local_58 == 0) {
      do {
        puVar6 = (undefined8 *)puVar10[(longlong)puVar7];
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
      } while ((longlong)puVar7 < 8);
      if (puVar10 != (undefined8 *)0x0) {
        FMemory::Free(puVar10);
      }
      return;
    }
  } while( true );
}



// FUNCTION 142865210 FUN_142865210 body=295 status=ok
// SIG undefined FUN_142865210(void)

void FUN_142865210(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *(undefined8 *)(param_3 + 2);
  FWeakObjectPtr::operator=(&local_50,0,param_3,param_4,0);
  iVar3 = *(int *)(param_1 + 0x1b0);
  local_40 = param_5;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(int *)(param_1 + 0x1b0) = iVar3 + 1;
  local_50 = uVar1;
  local_4c = uVar2;
  local_48 = uVar4;
  local_38 = param_4;
  if (*(int *)(param_1 + 0x1b4) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x1a8,iVar3);
  }
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x1a8));
  *puVar5 = param_2;
  *(undefined4 *)(puVar5 + 1) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_4c;
  puVar5[2] = local_48;
  puVar5[3] = local_40;
  puVar5[4] = local_38;
  puVar5[5] = local_30;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar5 + 6,&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return;
}



// FUNCTION 142865340 FUN_142865340 body=295 status=ok
// SIG undefined FUN_142865340(void)

void FUN_142865340(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *(undefined8 *)(param_3 + 2);
  FWeakObjectPtr::operator=(&local_50,0,param_3,param_4,0);
  iVar3 = *(int *)(param_1 + 0x1c0);
  local_40 = param_5;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(int *)(param_1 + 0x1c0) = iVar3 + 1;
  local_50 = uVar1;
  local_4c = uVar2;
  local_48 = uVar4;
  local_38 = param_4;
  if (*(int *)(param_1 + 0x1c4) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x1b8,iVar3);
  }
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x1b8));
  *puVar5 = param_2;
  *(undefined4 *)(puVar5 + 1) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_4c;
  puVar5[2] = local_48;
  puVar5[3] = local_40;
  puVar5[4] = local_38;
  puVar5[5] = local_30;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar5 + 6,&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return;
}



// FUNCTION 142865470 FUN_142865470 body=295 status=ok
// SIG undefined FUN_142865470(void)

void FUN_142865470(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar4 = *(undefined8 *)(param_3 + 2);
  FWeakObjectPtr::operator=(&local_50,0,param_3,param_4,0);
  iVar3 = *(int *)(param_1 + 0x1a0);
  local_40 = param_5;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(int *)(param_1 + 0x1a0) = iVar3 + 1;
  local_50 = uVar1;
  local_4c = uVar2;
  local_48 = uVar4;
  local_38 = param_4;
  if (*(int *)(param_1 + 0x1a4) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x198,iVar3);
  }
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x198));
  *puVar5 = param_2;
  *(undefined4 *)(puVar5 + 1) = local_50;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_4c;
  puVar5[2] = local_48;
  puVar5[3] = local_40;
  puVar5[4] = local_38;
  puVar5[5] = local_30;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 7) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar5 + 6,&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return;
}



// FUNCTION 1428655a0 FUN_1428655a0 body=189 status=ok
// SIG undefined FUN_1428655a0(void)

void FUN_1428655a0(longlong param_1,longlong param_2,undefined8 param_3,byte param_4,byte param_5,
                  undefined4 param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar3 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar3 + *(int *)(param_1 + 0xc20);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    if (*(longlong *)(lVar4 + 0x288) == param_2) goto LAB_1428655f8;
  }
  lVar4 = FUN_14286b170(DAT_146b17150,0);
LAB_1428655f8:
  iVar2 = *(int *)(lVar4 + 0x230);
  *(int *)(lVar4 + 0x230) = iVar2 + 1;
  if (*(int *)(lVar4 + 0x234) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar4 + 0x228),iVar2);
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar4 + 0x228));
  if (puVar5 != (undefined8 *)0x0) {
    *(uint *)(puVar5 + 1) = *(uint *)(puVar5 + 1) & 0xfffffffe;
    *puVar5 = param_3;
    *(uint *)(puVar5 + 1) = ((uint)param_4 | *(uint *)(puVar5 + 1)) & 0xfffffffd | (uint)param_5 * 2
    ;
    *(undefined4 *)((longlong)puVar5 + 0xc) = param_6;
  }
  return;
}



// FUNCTION 142865660 AddPrerequisite body=259 status=ok
// SIG undefined AddPrerequisite(void)

void FTickFunction::AddPrerequisite(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 local_18;
  undefined4 local_14;
  longlong local_10;
  
  if (((*(byte *)(param_1 + 0xc) & 2) == 0) && (*(char *)(param_1 + 0xd) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((*(byte *)(param_3 + 0xc) & 2) == 0) && (*(char *)(param_3 + 0xd) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar3) && (bVar4)) {
    FWeakObjectPtr::operator=(&local_18);
    lVar2 = *(longlong *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    local_10 = param_3;
    for (lVar7 = lVar2; lVar7 != (longlong)iVar1 * 0x10 + lVar2; lVar7 = lVar7 + 0x10) {
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_18);
      if ((cVar5 != '\0') && (*(longlong *)(lVar7 + 8) == local_10)) {
        if ((int)(lVar7 - lVar2 >> 4) != -1) {
          return;
        }
        break;
      }
    }
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
    }
    puVar6 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x20));
    *puVar6 = local_18;
    puVar6[1] = local_14;
    *(longlong *)(puVar6 + 2) = local_10;
  }
  return;
}



// FUNCTION 142865770 AddReferencedObjects body=89 status=ok
// SIG undefined AddReferencedObjects(void)

void FViewport::FHitProxyMap::AddReferencedObjects(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x18));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1428657d0 AddReferencedObjects body=41 status=ok
// SIG undefined AddReferencedObjects(void)

void FPendingStreamingLevelHolder::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0,0);
  return;
}



// FUNCTION 142865800 FUN_142865800 body=394 status=ok
// SIG undefined FUN_142865800(void)

void FUN_142865800(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x1c8,param_3,0);
  lVar2 = *(longlong *)(param_1 + 0x1d0);
  lVar1 = (longlong)*(int *)(param_1 + 0x1d8) * 0x38 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
    (**(code **)(*param_2 + 0x40))
              (param_2,*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x30),param_3,0);
  }
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x1f8),param_3,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x220),param_3,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x238,param_3,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x240,param_3,0);
  lVar2 = *(longlong *)(param_1 + 0x248);
  lVar1 = (longlong)*(int *)(param_1 + 0x250) * 0x10 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar2,param_3,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x290);
  lVar1 = (longlong)*(int *)(param_1 + 0x298) * 0x10 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    (**(code **)(*param_2 + 0x38))(param_2,lVar2,param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142865986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x288,param_3,0);
  return;
}



// FUNCTION 142865990 FUN_142865990 body=159 status=ok
// SIG undefined FUN_142865990(void)

void FUN_142865990(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    FUN_1422e34e0();
  }
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xc18);
  uVar3 = (longlong)*(int *)(param_1 + 0xc20) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0xc20) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_142865800(*puVar1,param_2,param_1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142865a30 FUN_142865a30 body=263 status=ok
// SIG undefined FUN_142865a30(void)

void FUN_142865a30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  RemoveTestTickFunctions();
  uVar2 = FUN_140cc25e0(param_2);
  lVar6 = 10000;
  if (DAT_146b17394 < 10000) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(&DAT_146b17388,10000);
  }
  do {
    iVar1 = DAT_146b17390;
    lVar5 = (longlong)DAT_146b17390;
    DAT_146b17390 = DAT_146b17390 + 1;
    if (DAT_146b17394 < DAT_146b17390) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&DAT_146b17388,iVar1);
    }
    puVar3 = (undefined8 *)(lVar5 * 0x50 + DAT_146b17388);
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined2 *)((longlong)puVar3 + 0xd) = 0;
      *(undefined1 *)((longlong)puVar3 + 0xf) = 1;
      *(byte *)((longlong)puVar3 + 0xc) = *(byte *)((longlong)puVar3 + 0xc) & 200 | 8;
      puVar3[2] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = 0xbf800000;
      *(undefined4 *)(puVar3 + 8) = 0;
      puVar3[9] = 0;
      *puVar3 = &PTR__scalar_deleting_destructor__1451dd368;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(byte *)((longlong)puVar3 + 0xc) = *(byte *)((longlong)puVar3 + 0xc) | 1;
      puVar4 = puVar3;
    }
    FTickFunction::RegisterTickFunction(puVar4,uVar2);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 142865b40 AddTickFunction body=96 status=ok
// SIG undefined AddTickFunction(void)

void FTickTaskLevel::AddTickFunction(longlong param_1,longlong param_2)

{
  longlong local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = param_2;
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_1421a37c0(param_1 + 8,local_res18,&local_res10,0);
    if (*(char *)(param_1 + 0x128) != '\0') {
      FUN_1421a37c0(param_1 + 0xc0,local_res18,&local_res10,0);
      return;
    }
  }
  else {
    FUN_1421a37c0(param_1 + 0x60,local_res18,&local_res10,0);
  }
  return;
}



// FUNCTION 142865ba0 AddToDeferredUpdateList body=121 status=ok
// SIG undefined AddToDeferredUpdateList(void)

void FDeferredUpdateResource::AddToDeferredUpdateList(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = DAT_146b177d0; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[2] == param_1) goto LAB_142865c10;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar1 = (undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = param_1;
  if (DAT_146b177d0 != (undefined8 *)0x0) {
    DAT_146b177d0[1] = puVar1;
  }
  *puVar1 = DAT_146b177d0;
  *(undefined8 ***)(param_1 + 0x10) = &DAT_146b177d0;
  DAT_14653517d = 1;
  DAT_146b177d0 = puVar1;
LAB_142865c10:
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 142865c40 AllocateTickTaskLevel body=252 status=ok
// SIG undefined AllocateTickTaskLevel(void)

undefined8 * FTickTaskManager::AllocateTickTaskLevel(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_142874100();
    *puVar1 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)((longlong)puVar1 + 0xf4) = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0xffffffff;
    puVar1[0x20] = 0;
    *(undefined4 *)(puVar1 + 0x21) = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    puVar1[0x24] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x114) = 2;
    *(undefined4 *)((longlong)puVar1 + 0x11c) = 2;
    *(undefined1 *)(puVar1 + 0x25) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142865d40 FUN_142865d40 body=133 status=ok
// SIG undefined FUN_142865d40(void)

ulonglong FUN_142865d40(int param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong in_RAX;
  
  lVar1 = DAT_146b17780;
  if (param_1 < 2) goto LAB_142865dbd;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_142865d8c;
    in_RAX = 4;
  }
  else {
LAB_142865d8c:
    in_RAX = 0;
  }
  if ((*(int *)(in_RAX + lVar1) != 0) &&
     ((in_RAX = (longlong)param_1, 0x1d < (uint)(&DAT_1464c9c48)[param_1] ||
      (in_RAX = 0x25e2cf88, (0x25e2cf88U >> ((&DAT_1464c9c48)[param_1] & 0x1f) & 1) == 0)))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_142865dbd:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142865dd0 FUN_142865dd0 body=464 status=ok
// SIG undefined FUN_142865dd0(void)

void FUN_142865dd0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 local_res10;
  longlong local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  plVar3 = *(longlong **)(DAT_146b17150 + 0xc18);
  plVar1 = plVar3 + *(int *)(DAT_146b17150 + 0xc20);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    if (*(longlong *)(lVar4 + 200) == param_4) goto LAB_142865e22;
  }
  lVar4 = FUN_14286b170(DAT_146b17150,0);
LAB_142865e22:
  if (param_2 == 0) {
    iVar2 = *(int *)(lVar4 + 0x1f8);
    *(int *)(lVar4 + 0x1f8) = iVar2 + 1;
    if (*(int *)(lVar4 + 0x1fc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x1f0,iVar2);
    }
    *(undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + (longlong)iVar2 * 8) = 0;
    return;
  }
  lVar5 = UWorld::FindWorldInPackage(param_2);
  lVar6 = 0;
  if (lVar5 == 0) {
    lVar5 = FUN_1428cb040(param_2,0);
    if (lVar5 != 0) {
      param_2 = UObjectBaseUtility::GetOutermost(lVar5);
      goto LAB_142865e6d;
    }
  }
  else {
LAB_142865e6d:
    lVar6 = *(longlong *)(lVar5 + 0x30);
    if (lVar6 != 0) goto LAB_142865f17;
  }
  local_res10 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar7 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar7 = local_28;
  }
  FString::PrintfImpl(&local_38,L"Couldn\'t find level in package %s",puVar7);
  plVar1 = (longlong *)(lVar4 + 0x200);
  if (plVar1 == &local_38) {
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_38;
    *(undefined4 *)(lVar4 + 0x208) = (undefined4)local_30;
    *(undefined4 *)(lVar4 + 0x20c) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142865f17:
  iVar2 = *(int *)(lVar4 + 0x1f8);
  *(int *)(lVar4 + 0x1f8) = iVar2 + 1;
  if (*(int *)(lVar4 + 0x1fc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x1f0,iVar2);
  }
  *(longlong *)(*(longlong *)(lVar4 + 0x1f0) + (longlong)iVar2 * 8) = lVar6;
  return;
}



// FUNCTION 142865fa0 BeginRenderFrame body=49 status=ok
// SIG undefined BeginRenderFrame(void)

void FDummyViewport::BeginRenderFrame(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FUN_141a19150(param_2,*(undefined8 *)(param_1 + 8),0,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 142865fe0 FUN_142865fe0 body=167 status=ok
// SIG undefined FUN_142865fe0(void)

void FUN_142865fe0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FRHICommandList::BeginDrawingViewport(param_2,*(undefined8 *)(param_1 + 0xb8),0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res8);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x348))(DAT_146ab6358,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    (**(code **)(*DAT_146ab6358 + 0x350))(DAT_146ab6358,local_res8,*(undefined8 *)(param_1 + 0xb8));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x138,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 142866090 FUN_142866090 body=284 status=ok
// SIG undefined FUN_142866090(void)

void FUN_142866090(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_14254c1e0(param_2,0);
  if (*(longlong *)(param_2 + 0x7e0) != 0) {
    FUN_1428dbe10();
  }
  FUN_1428db6c0(param_2);
  cVar1 = UWorld::IsVisibilityRequestPending(param_2);
  if ((cVar1 != '\0') || (cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)(), cVar1 != '\0')) {
    plVar3 = (longlong *)0x0;
    if (((*(longlong *)(param_1 + 0x7b0) != 0) &&
        (((plVar2 = *(longlong **)(DAT_146b17150 + 0x9a8), plVar2 != (longlong *)0x0 &&
          ((int)plVar2[1] != 0)) && ((longlong *)*plVar2 != (longlong *)0x0)))) &&
       (cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x18))(), cVar1 != '\0')) {
      plVar2 = plVar3;
      if (*(int *)(*(undefined8 **)(DAT_146b17150 + 0x9a8) + 1) != 0) {
        plVar2 = (longlong *)**(undefined8 **)(DAT_146b17150 + 0x9a8);
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x7b0) + 0xb0));
    }
    FUN_1428caf60(param_2,1);
    plVar2 = *(longlong **)(DAT_146b17150 + 0x9b0);
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != 0)) &&
       (((longlong *)*plVar2 != (longlong *)0x0 &&
        (cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x18))(), cVar1 != '\0')))) {
      if (*(int *)(*(undefined8 **)(DAT_146b17150 + 0x9b0) + 1) != 0) {
        plVar3 = (longlong *)**(undefined8 **)(DAT_146b17150 + 0x9b0);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  return;
}



// FUNCTION 1428661b0 FUN_1428661b0 body=196 status=ok
// SIG undefined FUN_1428661b0(void)

void FUN_1428661b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x9e4) = *(int *)(param_1 + 0x9e4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x9e4);
  iVar5 = *(int *)(param_1 + 0x9d8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x9d0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_142866226:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_142866226;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x9e4);
  }
  *(int *)(param_1 + 0x9e4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x9d0),0);
    return;
  }
  return;
}



// FUNCTION 142866280 FUN_142866280 body=3652 status=ok
// SIG undefined FUN_142866280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142866280(longlong *param_1,char *param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  short *psVar18;
  int iVar19;
  undefined4 *puVar20;
  short *psVar21;
  uint uVar22;
  int iVar23;
  longlong *plVar24;
  undefined2 *puVar25;
  int iVar26;
  bool bVar27;
  undefined1 auStack_4f8 [32];
  longlong *local_4d8;
  undefined8 local_4d0;
  undefined1 local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8;
  char local_4a8;
  short *local_4a0;
  short *local_498;
  int local_490;
  int local_48c;
  void *local_488;
  longlong local_480;
  ulonglong local_478;
  undefined2 *local_470;
  undefined8 local_468;
  short *local_458;
  undefined4 *puStack_450;
  longlong *local_448;
  int local_440;
  undefined4 *local_438;
  ulonglong *puStack_430;
  undefined8 local_428;
  longlong local_420;
  short *local_418;
  undefined4 *puStack_410;
  undefined1 local_408 [16];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [16];
  longlong local_3d8 [2];
  longlong local_3c8 [2];
  longlong local_3b8 [2];
  undefined1 local_3a8 [8];
  longlong *local_3a0;
  undefined1 local_390 [8];
  longlong *local_388;
  undefined1 local_378 [8];
  longlong *local_370;
  undefined1 local_360 [8];
  longlong *local_358;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_330 [8];
  longlong *local_328;
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [24];
  undefined1 local_2a8 [112];
  undefined1 local_238 [24];
  undefined1 local_220 [24];
  undefined1 local_208 [112];
  undefined1 local_198 [112];
  undefined1 local_128 [112];
  short local_b8 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  psVar21 = (short *)0x0;
  local_448 = param_1;
  if ((undefined *)*param_4 != &DAT_1451c969c) {
    *(undefined4 *)(param_4 + 1) = 0;
    psVar18 = psVar21;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4);
      psVar18 = (short *)(ulonglong)*(uint *)(param_4 + 1);
    }
    *(int *)(param_4 + 1) = (int)psVar18;
    if (*(int *)((longlong)param_4 + 0xc) < (int)psVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4);
    }
  }
  pcVar3 = param_2 + 0xd0;
  if (*(undefined **)pcVar3 != &DAT_1451c9704) {
    param_2[0xd8] = '\0';
    param_2[0xd9] = '\0';
    param_2[0xda] = '\0';
    param_2[0xdb] = '\0';
    psVar18 = psVar21;
    if (*(int *)(param_2 + 0xdc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(pcVar3);
      psVar18 = (short *)(ulonglong)*(uint *)(param_2 + 0xd8);
    }
    *(int *)(param_2 + 0xd8) = (int)psVar18;
    if (*(int *)(param_2 + 0xdc) < (int)psVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pcVar3);
    }
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)(param_3 + 0x28);
  }
  pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar11,L".unreal");
  if (*(int *)(param_3 + 0x30) == 0) {
    puVar25 = &DAT_143f3eda8;
  }
  else {
    puVar25 = *(undefined2 **)(param_3 + 0x28);
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (puVar25[lVar12] != 0);
  if ((longlong)pwVar11 - (longlong)puVar25 >> 1 == (longlong)((int)lVar12 + -7)) {
    local_470 = (undefined2 *)0x0;
    local_468 = 0;
    if (*(int *)(param_3 + 0x30) == 0) {
      local_4a0 = &DAT_143f3eda8;
    }
    else {
      local_4a0 = *(short **)(param_3 + 0x28);
    }
    local_480 = 0;
    local_478 = 0;
    if ((local_4a0 != (short *)0x0) && (*local_4a0 != 0)) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (local_4a0[lVar12] != 0);
      uVar22 = (int)lVar12 + 1;
      local_478 = (ulonglong)uVar22;
      if (0 < (int)uVar22) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_480,0);
      }
      FGenericPlatformString::Memcpy(local_480,local_4a0,(longlong)(int)uVar22 * 2);
    }
    local_4d8 = &local_480;
    local_4a8 = FConfigCacheIni::GetString(DAT_1468b6148,L"Link",L"Server",&local_470);
    if (local_480 != 0) {
      FMemory::Free();
    }
    if (local_4a8 == '\0') {
      lVar12 = FText::FromString(local_238,param_3 + 0x28);
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_360,L"Invalid Link: {0}",L"Engine",L"InvalidLink");
      puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_2c0,uVar13);
      local_b8[0] = 4;
      local_b8[1] = 0;
      FText::FText(local_a8,lVar12);
      local_438 = (undefined4 *)*puVar15;
      local_458 = local_b8;
      puStack_450 = local_88;
      puStack_430 = (ulonglong *)puVar15[1];
      local_90 = '\x01';
      if (puStack_430 != (ulonglong *)0x0) {
        LOCK();
        *(int *)((longlong)puStack_430 + 8) = *(int *)((longlong)puStack_430 + 8) + 1;
        UNLOCK();
      }
      local_418 = local_458;
      puStack_410 = puStack_450;
      uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_408,&local_418);
      uVar13 = FText::Format(local_378,&local_438,uVar13);
      FText::FText(local_3a8,uVar13);
      if (local_370 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_370 + 1;
        lVar9 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_370)(local_370);
          LOCK();
          piVar1 = (int *)((longlong)local_370 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*local_370 + 8))(local_370,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_408);
      if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
        LOCK();
        plVar17 = local_a0 + 1;
        lVar9 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      plVar17 = (longlong *)puVar15[1];
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar17 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      plVar17 = *(longlong **)(lVar12 + 8);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar17 + 1;
        lVar12 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      uVar13 = FText::ToString(local_3a8);
      FString::operator=(param_4,uVar13);
      if (local_3a0 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_3a0 + 1;
        lVar12 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_3a0)(local_3a0);
          LOCK();
          piVar1 = (int *)((longlong)local_3a0 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*local_3a0 + 8))(local_3a0,1);
          }
        }
      }
      if (local_358 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_358 + 1;
        lVar12 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_358)(local_358);
          LOCK();
          piVar1 = (int *)((longlong)local_358 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*local_358 + 8))(local_358,1);
          }
        }
      }
      if (local_470 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FURL::~FURL(param_3);
      return true;
    }
    puVar25 = &DAT_143f3eda8;
    if ((int)local_468 != 0) {
      puVar25 = local_470;
    }
    uVar13 = FUN_14289aca0(local_208,0,puVar25,0);
    FURL::operator=(param_3,uVar13);
    FURL::~FURL(local_208);
    if (local_470 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*(int *)(param_3 + 0x68) == 0) {
    uVar13 = FUN_1428bd910(param_3,local_3d8,0);
    pvVar14 = (void *)FText::FromString(local_220,uVar13);
    local_488 = pvVar14;
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_330,L"Invalid URL: {0}",L"Engine",L"InvalidUrl");
    puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_2d0,uVar13);
    local_88[0] = 4;
    FText::FText(local_78,pvVar14);
    local_428 = *puVar15;
    local_438 = local_88;
    puStack_430 = local_58;
    local_420 = puVar15[1];
    local_60 = '\x01';
    if (local_420 != 0) {
      LOCK();
      *(int *)(local_420 + 8) = *(int *)(local_420 + 8) + 1;
      UNLOCK();
    }
    local_3f8 = local_438;
    uStack_3f0 = puStack_430;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_3e8,&local_3f8);
    uVar13 = FText::Format(local_348,&local_428,uVar13);
    FText::FText(local_390,uVar13);
    if (local_340 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_340 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_340)(local_340);
        LOCK();
        piVar1 = (int *)((longlong)local_340 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_340 + 8))(local_340,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3e8);
    if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
      LOCK();
      plVar17 = local_70 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar17 = (longlong *)puVar15[1];
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
    plVar17 = *(longlong **)((longlong)local_488 + 8);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
    uVar13 = FText::ToString(local_390);
    FString::operator=(param_4,uVar13);
    if (local_388 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_388 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_388)(local_388);
        LOCK();
        piVar1 = (int *)((longlong)local_388 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_388 + 8))(local_388,1);
        }
      }
    }
    if (local_328 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_328 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_328)(local_328);
        LOCK();
        piVar1 = (int *)((longlong)local_328 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_328 + 8))(local_328,1);
        }
      }
    }
    if (local_3d8[0] != 0) {
      FMemory::Free();
    }
    uVar13 = 2;
  }
  else {
    cVar10 = FURL::HasOption(param_3,L"failed");
    if ((cVar10 != '\0') || (cVar10 = FURL::HasOption(param_3,L"closed"), cVar10 != '\0')) {
      if (*(longlong *)(param_2 + 0x1c8) != 0) {
        (**(code **)(*param_1 + 0x480))(param_1,param_2);
      }
      if (*(longlong *)(param_2 + 0x288) != 0) {
        ResetLoaders(*(undefined8 *)(*(longlong *)(param_2 + 0x288) + 0x20));
      }
      if (*param_2 == '\x06') {
        iVar23 = *(int *)(param_2 + 0x250);
        puVar5 = *(undefined4 **)(param_2 + 0x248);
        local_448 = (longlong *)0x0;
        local_440 = iVar23;
        if (iVar23 != 0) {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_448,iVar23,0);
          puVar20 = puVar5;
          do {
            uVar6 = puVar20[1];
            uVar7 = puVar20[2];
            uVar8 = puVar20[3];
            puVar4 = (undefined4 *)((longlong)puVar20 + ((longlong)local_448 - (longlong)puVar5));
            *puVar4 = *puVar20;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            iVar23 = iVar23 + -1;
            puVar20 = puVar20 + 4;
          } while (iVar23 != 0);
        }
        plVar2 = local_448;
        plVar24 = local_448 + (longlong)local_440 * 2;
        for (plVar17 = local_448; plVar17 != plVar24; plVar17 = plVar17 + 2) {
          if (*plVar17 != 0) {
            FUN_14286cc40(param_2,*(undefined8 *)(*plVar17 + 0x120));
          }
        }
        FUN_14172d470(0,1);
        if (plVar2 != (longlong *)0x0) {
          FMemory::Free(plVar2);
        }
        uVar13 = GetTransientPackage();
        FUN_1417846f0(uVar13,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_4a0 = (short *)0x0;
        uVar16 = UPendingNetGame::GetPrivateStaticClass();
        local_4b8 = 0;
        local_4c0 = 0;
        local_4c8 = 0;
        local_4d0 = 0;
        local_4d8 = (longlong *)((ulonglong)local_4d8 & 0xffffffff00000000);
        uVar13 = FUN_1417985e0(uVar16,uVar13,0,0);
        *(undefined8 *)(param_2 + 0x1c8) = uVar13;
        UPendingNetGame::Initialize(uVar13,param_2 + 0xe8);
        FUN_14269aab0(*(undefined8 *)(param_2 + 0x1c8));
        if (*(longlong *)(*(longlong *)(param_2 + 0x1c8) + 0x30) == 0) {
          FUN_1428661b0(param_1,*(undefined8 *)(param_2 + 0x288),8,
                        *(longlong *)(param_2 + 0x1c8) + 0xb8);
          param_2[0x1c8] = '\0';
          param_2[0x1c9] = '\0';
          param_2[0x1ca] = '\0';
          param_2[0x1cb] = '\0';
          param_2[0x1cc] = '\0';
          param_2[0x1cd] = '\0';
          param_2[0x1ce] = '\0';
          param_2[0x1cf] = '\0';
          FURL::~FURL(param_3);
          return true;
        }
LAB_142866e1a:
        FURL::~FURL(param_3);
        return 2;
      }
      plVar17 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
      lVar12 = plVar17[0x1f];
      if (lVar12 == 0) {
        (**(code **)(*plVar17 + 0x368))(plVar17);
        lVar12 = plVar17[0x1f];
      }
      puVar15 = (undefined8 *)FUN_141e0eac0(local_3c8);
      iVar23 = *(int *)(lVar12 + 0x48);
      iVar26 = *(int *)(puVar15 + 1);
      if (iVar26 < 2) {
        pvVar14 = *(void **)(lVar12 + 0x40);
        local_458 = (short *)0x0;
        puStack_450 = (undefined4 *)CONCAT44(puStack_450._4_4_,iVar23);
        bVar27 = true;
        if (iVar23 == 0) goto LAB_142866f87;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_458,iVar23,0);
        psVar21 = local_458;
        _guard_xfg_dispatch_icall_nop(local_458,pvVar14,(longlong)iVar23 * 2);
        iVar26 = (int)puStack_450;
      }
      else {
        iVar19 = iVar23 + -1;
        if (iVar23 == 0) {
          iVar19 = 0;
        }
        if ((iVar26 != 0) || (psVar18 = (short *)0x1, iVar19 == 0)) {
          psVar18 = psVar21;
        }
        local_4a0 = (short *)*puVar15;
        *puVar15 = 0;
        local_48c = *(int *)((longlong)puVar15 + 0xc);
        puVar15[1] = 0;
        iVar23 = (int)psVar18 + iVar26 + iVar19;
        local_498 = local_4a0;
        local_490 = iVar26;
        if (local_48c < iVar23) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_498,iVar23);
        }
        iVar23 = local_490;
        local_488 = *(void **)(lVar12 + 0x40);
        psVar21 = local_498;
        iVar26 = local_490;
        local_4a0 = local_498;
        if (iVar19 != 0) {
          lVar12 = (longlong)local_490;
          local_490 = iVar19 + (uint)(local_490 == 0) + local_490;
          if (local_48c < local_490) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,iVar23);
          }
          iVar26 = local_490;
          psVar21 = local_498 + (lVar12 - (ulonglong)(iVar23 != 0));
          local_4a0 = local_498;
          _guard_xfg_dispatch_icall_nop(psVar21,local_488,(longlong)iVar19 * 2);
          psVar21[iVar19] = 0;
          psVar21 = local_4a0;
        }
      }
      bVar27 = iVar26 == 0;
LAB_142866f87:
      psVar18 = &DAT_143f3eda8;
      if (!bVar27) {
        psVar18 = psVar21;
      }
      FUN_14289aca0(local_2a8,param_3,psVar18,1);
      if (psVar21 != (short *)0x0) {
        FMemory::Free(psVar21);
      }
      if (local_3c8[0] != 0) {
        FMemory::Free();
      }
      plVar17 = local_448;
      lVar12 = *local_448;
      uVar13 = FURL::FURL(local_128,local_2a8);
      local_4d8 = param_4;
      cVar10 = (**(code **)(lVar12 + 0x450))(plVar17,param_2,uVar13,0);
      if (cVar10 == '\0') {
        lVar12 = *plVar17;
        uVar13 = FUN_1428bd910(local_2a8,local_3b8,0);
        (**(code **)(lVar12 + 0x4d8))(plVar17,param_2,uVar13,param_4);
        if (local_3b8[0] != 0) {
          FMemory::Free();
        }
        FURL::~FURL(local_2a8);
        FURL::~FURL(param_3);
        return true;
      }
      FUN_14172d470(0,1);
      FUN_1428ba050(param_2 + 0xe8,L"failed",0,&DAT_1468e2410);
      FUN_1428ba050(param_2 + 0xe8,L"closed",0,&DAT_1468e2410);
      FURL::~FURL(local_2a8);
      FURL::~FURL(param_3);
      return false;
    }
    cVar10 = FURL::HasOption(param_3,L"restart");
    if (cVar10 != '\0') {
      FURL::operator=(param_3,param_2 + 0xe8);
    }
    if ((DAT_146af37f0 == '\0') || (cVar10 = FURL::HasOption(param_3,L"listen"), cVar10 == '\0')) {
      cVar10 = FUN_1428b2650(param_3);
      if (cVar10 != '\0') {
        lVar12 = *param_1;
        uVar13 = FURL::FURL(local_198,param_3);
        local_4d8 = param_4;
        cVar10 = (**(code **)(lVar12 + 0x450))(param_1,param_2,uVar13,0);
        FURL::~FURL(param_3);
        return cVar10 == '\0';
      }
      cVar10 = FUN_1428b2240(param_3);
      if ((cVar10 == '\0') || (DAT_1468c2172 == '\0')) {
        cVar10 = FUN_1428b2240(param_3);
        local_3f8 = (undefined4 *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8);
        uStack_3f0 = (ulonglong *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
        if (cVar10 != '\0') {
          uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_2e8,L"Servers can\'t open network URLs",L"Engine",L"ServerOpen")
          ;
          uVar13 = FText::ToString(uVar13);
          FString::operator=(param_4,uVar13);
          local_3f8 = (undefined4 *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8);
          uStack_3f0 = (ulonglong *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
          if (local_2e0 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_2e0 + 1;
            lVar12 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            local_3f8 = (undefined4 *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8);
            uStack_3f0 = (ulonglong *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
            if ((int)lVar12 == 1) {
              (**(code **)*local_2e0)(local_2e0);
              LOCK();
              piVar1 = (int *)((longlong)local_2e0 + 0xc);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                (**(code **)(*local_2e0 + 8))(local_2e0,1);
                FURL::~FURL(param_3);
                return true;
              }
            }
          }
        }
        goto LAB_142866722;
      }
      if (*(longlong *)(param_2 + 0x1c8) != 0) {
        (**(code **)(*param_1 + 0x480))(param_1,param_2);
      }
      if ((*(longlong *)(param_2 + 0x288) != 0) &&
         (cVar10 = (**(code **)(*param_1 + 0x4d0))(param_1), cVar10 != '\0')) {
        FUN_14288fa60(param_1,*(undefined8 *)(param_2 + 0x288));
      }
      uVar13 = GetTransientPackage();
      uVar13 = NewObject<UPendingNetGame>(uVar13);
      *(undefined8 *)(param_2 + 0x1c8) = uVar13;
      UPendingNetGame::Initialize(uVar13,param_3);
      FUN_14269aab0(*(undefined8 *)(param_2 + 0x1c8));
      lVar12 = *(longlong *)(param_2 + 0x1c8);
      if (lVar12 != 0) {
        if (*(longlong *)(lVar12 + 0x30) == 0) {
          FUN_1428661b0(param_1,*(undefined8 *)(param_2 + 0x288),8,lVar12 + 0xb8);
          param_2[0x1c8] = '\0';
          param_2[0x1c9] = '\0';
          param_2[0x1ca] = '\0';
          param_2[0x1cb] = '\0';
          param_2[0x1cc] = '\0';
          param_2[0x1cd] = '\0';
          param_2[0x1ce] = '\0';
          param_2[0x1cf] = '\0';
          FURL::~FURL(param_3);
          return true;
        }
        goto LAB_142866e1a;
      }
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_300,L"Error initializing the network driver.",L"Engine",
                          L"PendingNetGameInitFailure");
      uVar13 = FText::ToString(uVar13);
      FString::operator=(param_4,uVar13);
      if (local_2f8 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_2f8 + 1;
        lVar12 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_2f8)(local_2f8);
          LOCK();
          piVar1 = (int *)((longlong)local_2f8 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*local_2f8 + 8))(local_2f8,1);
          }
        }
      }
      uVar13 = 8;
    }
    else {
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_318,
                          L"Console commands were used which are disallowed in netplay.  You must restart the game to create a match."
                          ,L"Engine",L"UsedCheatCommands");
      uVar13 = FText::ToString(uVar13);
      FString::operator=(param_4,uVar13);
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_310 + 1;
        lVar12 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_310)(local_310);
          LOCK();
          piVar1 = (int *)((longlong)local_310 + 0xc);
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            (**(code **)(*local_310 + 8))(local_310,1);
          }
        }
      }
      uVar13 = 7;
    }
  }
  FUN_1428661b0(param_1,*(undefined8 *)(param_2 + 0x288),uVar13,param_4);
LAB_142866722:
  FURL::~FURL(param_3);
  return true;
}



// FUNCTION 1428670d0 FUN_1428670d0 body=793 status=ok
// SIG undefined FUN_1428670d0(void)

void FUN_1428670d0(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 *local_158;
  int local_150;
  int local_14c;
  undefined2 *local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108;
  longlong local_f0;
  longlong local_e0;
  longlong *local_d0;
  int local_c8;
  longlong local_c0;
  undefined1 local_a8 [112];
  
  local_138 = 0;
  local_130 = 0;
  FURL::FURL(local_118,0);
  FURL::LoadURLConfig(local_118,L"DefaultPlayer",&DAT_1468e2410);
  plVar6 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar9 = plVar6[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar9 = plVar6[0x1f];
  }
  puVar7 = (undefined8 *)FUN_141e0eac0(local_128);
  iVar5 = *(int *)(puVar7 + 1);
  if (iVar5 < 2) {
    local_148 = (undefined2 *)0x0;
    local_140 = *(int *)(lVar9 + 0x48);
    lVar10 = (longlong)local_140;
    pvVar1 = *(void **)(lVar9 + 0x40);
    iVar4 = 0;
    if (local_140 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_140,0);
      _guard_xfg_dispatch_icall_nop(local_148,pvVar1,lVar10 * 2);
      iVar4 = local_13c;
    }
  }
  else {
    iVar12 = *(int *)(lVar9 + 0x48) + -1;
    if (*(int *)(lVar9 + 0x48) == 0) {
      iVar12 = 0;
    }
    if ((iVar5 != 0) || (iVar4 = 1, iVar12 == 0)) {
      iVar4 = 0;
    }
    local_158 = (undefined2 *)*puVar7;
    *puVar7 = 0;
    local_14c = *(int *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
    local_150 = iVar5;
    if (local_14c < iVar5 + iVar12 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158);
    }
    iVar5 = local_150;
    pvVar1 = *(void **)(lVar9 + 0x40);
    local_148 = local_158;
    local_140 = local_150;
    iVar4 = local_14c;
    if (iVar12 != 0) {
      lVar9 = (longlong)local_150;
      local_150 = local_150 + (uint)(local_150 == 0) + iVar12;
      if (local_14c < local_150) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,iVar5);
      }
      iVar4 = local_14c;
      iVar3 = local_150;
      puVar2 = local_158;
      puVar11 = local_158 + (lVar9 - (ulonglong)(iVar5 != 0));
      _guard_xfg_dispatch_icall_nop(puVar11,pvVar1,(longlong)iVar12 * 2);
      puVar11[iVar12] = 0;
      local_148 = puVar2;
      local_140 = iVar3;
    }
  }
  local_13c = iVar4;
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  lVar9 = *param_1;
  puVar11 = &DAT_143f3eda8;
  if (local_140 != 0) {
    puVar11 = local_148;
  }
  uVar8 = FUN_14289aca0(local_a8,local_118,puVar11,1);
  iVar5 = (**(code **)(lVar9 + 0x440))(param_1,param_2,uVar8,&local_138);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x4d8))(param_1,param_2,&local_148,&local_138);
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_d0;
  if (local_c0 != 0) {
    FMemory::Free();
    plVar6 = local_d0;
  }
  for (; local_c8 != 0; local_c8 = local_c8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_d0 != (longlong *)0x0) {
    FMemory::Free(local_d0);
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428673f0 FUN_1428673f0 body=216 status=ok
// SIG undefined FUN_1428673f0(void)

int FUN_1428673f0(longlong param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  if (param_3 == '\0') {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((longlong)param_2 + 0x44);
  }
  bVar1 = *(byte *)((longlong)param_2 + 0x4a);
  fVar10 = (float)(**(code **)(*param_2 + 0x2b8))(param_2);
  fVar11 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
  lVar9 = (ulonglong)bVar1 * 0x50 + *(longlong *)(param_1 + 0x28);
  uVar3 = (int)fVar10;
  if ((int)fVar10 <= (int)fVar11) {
    uVar3 = (int)fVar11;
  }
  iVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar8 = 0x20;
  iVar5 = iVar8;
  if (uVar3 != 0) {
    iVar5 = 0x1f - iVar2;
  }
  uVar3 = uVar3 - 1;
  iVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar3 != 0) {
    iVar8 = 0x1f - iVar2;
  }
  uVar3 = *(uint *)(lVar9 + 4);
  uVar4 = 0x20U - iVar8 & ~((iVar5 << 0x1a) >> 0x1f);
  uVar6 = uVar4 - iVar7;
  if (((int)uVar3 <= (int)uVar6) && (uVar3 = *(uint *)(lVar9 + 8), (int)uVar6 < (int)uVar3)) {
    uVar3 = uVar6;
  }
  uVar6 = 0;
  if ((-1 < (int)uVar3) && (uVar6 = uVar4, (int)uVar3 < (int)uVar4)) {
    uVar6 = uVar3;
  }
  return uVar4 - uVar6;
}



// FUNCTION 1428674d0 CalculateStereoViewOffset body=254 status=ok
// SIG undefined CalculateStereoViewOffset(void)

void FFakeStereoRenderingDevice::CalculateStereoViewOffset
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_58 [88];
  
  if ((param_2 != 0) && (param_2 != 3)) {
    if (param_2 == 1) {
      fVar8 = 3.2;
    }
    else {
      fVar8 = -3.2;
    }
    pfVar5 = (float *)FRotator::Quaternion(param_3,local_58);
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = *pfVar5;
    fVar4 = pfVar5[3];
    fVar6 = fVar3 * fVar8;
    fVar6 = fVar6 + fVar6;
    fVar7 = -(fVar2 * fVar8);
    fVar7 = fVar7 + fVar7;
    *param_5 = fVar7 * fVar4 + fVar6 * fVar1 + *param_5;
    param_5[2] = (fVar6 * fVar4 - fVar7 * fVar1) + param_5[2];
    param_5[1] = (fVar7 * fVar2 - fVar6 * fVar3) + fVar8 + param_5[1];
  }
  return;
}



// FUNCTION 1428675d0 FUN_1428675d0 body=437 status=ok
// SIG undefined FUN_1428675d0(void)

int * FUN_1428675d0(longlong *param_1,int *param_2,float param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar1 = param_4[2];
  iVar7 = *param_4;
  uVar3 = *(undefined8 *)(param_4 + 2);
  lVar5 = *param_1;
  iVar6 = param_4[3];
  iVar2 = param_4[1];
  *(undefined8 *)param_2 = *(undefined8 *)param_4;
  *(undefined8 *)(param_2 + 2) = uVar3;
  fVar10 = (float)(iVar6 - iVar2);
  fVar9 = (float)(iVar1 - iVar7);
  piVar4 = (int *)(**(code **)(lVar5 + 0x20))(param_1,local_res8);
  iVar1 = *piVar4;
  fVar8 = (float)(**(code **)(lVar5 + 0x158))(param_1);
  lVar5 = (**(code **)(*param_1 + 0x20))(param_1,local_res10);
  param_3 = param_3 / (fVar8 / ((float)iVar1 / (float)*(int *)(lVar5 + 4)));
  fVar8 = param_3 - fVar9 / fVar10;
  if (0.01 < ABS(fVar8)) {
    if (fVar8 <= 0.0) {
      iVar1 = *param_4;
      iVar7 = (int)ROUND(param_3 * fVar10 + param_3 * fVar10 + 0.5) >> 1;
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      fVar8 = (fVar9 - (float)iVar7) * 0.5;
      iVar6 = (int)ROUND(fVar8 + fVar8 + 0.5) >> 1;
      *param_2 = iVar6 + iVar1;
      param_2[2] = iVar6 + iVar1 + iVar7;
    }
    else {
      iVar1 = param_4[1];
      iVar7 = (int)ROUND(fVar9 / param_3 + fVar9 / param_3 + 0.5) >> 1;
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      fVar8 = (fVar10 - (float)iVar7) * 0.5;
      iVar6 = (int)ROUND(fVar8 + fVar8 + 0.5) >> 1;
      param_2[1] = iVar6 + iVar1;
      param_2[3] = iVar6 + iVar1 + iVar7;
    }
  }
  return param_2;
}



// FUNCTION 142867790 Call body=40 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_dabe910c6392f1e11c71dabacb424adb>_const_,void___cdecl(UObject_*)>::
     Call(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *param_2;
  cVar2 = UWorld::HasEndOfFrameUpdates(uVar1);
  if (cVar2 != '\0') {
    FUN_14254eb00(uVar1);
    return;
  }
  return;
}



// FUNCTION 1428677d0 FUN_1428677d0 body=53 status=ok
// SIG undefined FUN_1428677d0(void)

void FUN_1428677d0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(char *)*param_1 == '\0') {
    cVar1 = FUN_1428cdc10(*param_2);
    if (cVar1 == '\0') {
      *(undefined1 *)*param_1 = 0;
      return;
    }
  }
  *(undefined1 *)*param_1 = 1;
  return;
}



// FUNCTION 142867810 Call body=91 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_3f971c56d456cce98c575f5d85db8499>,void___cdecl(UObject_*)>::Call
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_res10 = *param_2;
  uVar1 = *param_1;
  piVar2 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                  ::FindId(uVar1,local_res8);
  if (*piVar2 == -1) {
    local_18 = &local_res10;
    local_res18[0] = 0;
    local_10 = local_res18;
    TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>(uVar1,local_res8,&local_18,0);
  }
  return;
}



// FUNCTION 142867870 FUN_142867870 body=30 status=ok
// SIG undefined FUN_142867870(void)

undefined8 FUN_142867870(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,param_1);
  return param_1;
}



// FUNCTION 1428678a0 Call body=71 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_e0df33b228415e711c13825521cc142b>,void___cdecl(void)>::Call
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (0 < *(int *)(lVar1 + 0x9a8)) {
    plVar2 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar2 + 0x48))(plVar2,lVar1 + 0x980,2);
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset(lVar1 + 0x980,0)
    ;
    return;
  }
  return;
}



// FUNCTION 1428678f0 FUN_1428678f0 body=396 status=ok
// SIG undefined FUN_1428678f0(void)

void FUN_1428678f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar6 = FUN_14244d3d0();
  bVar3 = false;
  *(int *)(lVar6 + 0xa4) = *(int *)(lVar6 + 0xa4) + 1;
  iVar8 = *(int *)(lVar6 + 0xa4);
  iVar5 = *(int *)(lVar6 + 0x98) + -1;
  lVar10 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar9 = lVar10 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(lVar6 + 0x90);
      if (((*(int *)(lVar9 + 8 + lVar1) == 0) ||
          (plVar2 = *(longlong **)(lVar9 + lVar1), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    iVar8 = *(int *)(lVar6 + 0xa4);
  }
  *(int *)(lVar6 + 0xa4) = iVar8 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar6 + 0x90),0);
  }
  if (param_1 == 0) {
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x120) == 0x11b)) {
      plVar7 = *(longlong **)(DAT_146b17150 + 0xc18);
      plVar2 = plVar7 + *(int *)(DAT_146b17150 + 0xc20);
      for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        lVar6 = *plVar7;
        if ((*(longlong *)(lVar6 + 0x1c8) != 0) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x1c8) + 0x30) == param_2)) goto LAB_142867a4b;
      }
      lVar6 = FUN_14286b170(DAT_146b17150,0);
LAB_142867a4b:
      plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x240) + 0x48);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142867a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(lVar6 + 0x288),param_2);
        return;
      }
    }
  }
  else if ((*(longlong *)(param_1 + 400) != 0) &&
          (plVar2 = *(longlong **)(*(longlong *)(param_1 + 400) + 0x48), plVar2 != (longlong *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x0001428679cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x288))(plVar2,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 142867a80 FUN_142867a80 body=85 status=ok
// SIG undefined FUN_142867a80(void)

void FUN_142867a80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1[0x184]) {
    lVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x480))(param_1,*(undefined8 *)(lVar1 + param_1[0x183]));
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < (int)param_1[0x184]);
  }
  return;
}



// FUNCTION 142867ae0 FUN_142867ae0 body=118 status=ok
// SIG undefined FUN_142867ae0(void)

void FUN_142867ae0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((*(longlong *)(param_2 + 0x1c8) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1c8) + 0x30), lVar1 != 0)) &&
     (plVar2 = *(longlong **)(lVar1 + 0x90), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x2f8))();
    FUN_14286cc40(param_2,*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_2 + 0x1c8) + 0x30) + 0x120));
    *(undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x1c8) = 0;
    return;
  }
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  return;
}



// FUNCTION 142867b60 FUN_142867b60 body=124 status=ok
// SIG undefined FUN_142867b60(void)

void FUN_142867b60(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (iVar2 = 0, 0 < (int)param_1[0x184])) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar3 + param_1[0x183]) + 0x1c8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
        (**(code **)(*param_1 + 0x480))(param_1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < (int)param_1[0x184]);
  }
  return;
}



// FUNCTION 142867be0 FUN_142867be0 body=124 status=ok
// SIG undefined FUN_142867be0(void)

void FUN_142867be0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)param_1[0x183];
  plVar1 = plVar2 + (int)param_1[0x184];
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_142867c36;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142867c36:
  (**(code **)(*param_1 + 0x480))(param_1,lVar3);
  *(undefined8 *)(lVar3 + 0x1c8) = param_3;
  return;
}



// FUNCTION 142867c60 FUN_142867c60 body=177 status=ok
// SIG undefined FUN_142867c60(void)

void FUN_142867c60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined4 *)(param_2 + 0x1e8) = 0;
  if (*(int *)(param_2 + 0x1ec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x1e0,0);
  }
  *(undefined4 *)(param_2 + 0x1f8) = 0;
  if (*(int *)(param_2 + 0x1fc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x1f0,0);
  }
  puVar1 = (undefined8 *)(param_2 + 0x200);
  if ((undefined *)*puVar1 != &DAT_1451ca0b4) {
    iVar3 = 0;
    *(undefined4 *)(param_2 + 0x208) = 0;
    if (*(int *)(param_2 + 0x20c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1);
      iVar3 = *(int *)(param_2 + 0x208);
    }
    *(int *)(param_2 + 0x208) = iVar3;
    if (*(int *)(param_2 + 0x20c) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
  }
  *(uint *)(param_2 + 0x210) = *(uint *)(param_2 + 0x210) & 0xfffffffe;
  lVar2 = *(longlong *)(param_2 + 0x288);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x810) = 0;
    if (*(int *)(lVar2 + 0x814) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x808,0);
    }
  }
  return;
}



// FUNCTION 142867d70 FUN_142867d70 body=160 status=ok
// SIG undefined FUN_142867d70(void)

void FUN_142867d70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0xc20))); iVar3 = iVar3 + 1) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar3 * 8);
    if (*(longlong *)(lVar1 + 0x240) != 0) {
      FUN_1424451f0();
    }
    plVar2 = *(longlong **)(lVar1 + 0x238);
    if ((plVar2 != (longlong *)0x0) && (plVar2[0x16] == 0)) {
      if (plVar2 == *(longlong **)(param_1 + 0x7b0)) {
        *(undefined8 *)(param_1 + 0x7b0) = 0;
        plVar2 = *(longlong **)(lVar1 + 0x238);
      }
      (**(code **)(*plVar2 + 0x2c0))();
      *(undefined8 *)(lVar1 + 0x238) = 0;
    }
  }
  return;
}



// FUNCTION 142867e10 CleanupPackagesToFullyLoad body=437 status=ok
// SIG undefined CleanupPackagesToFullyLoad(void)

void UEngine::CleanupPackagesToFullyLoad
               (undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  wint_t *pwVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = 0;
  if (*(int *)(param_2 + 0x1d8) < 1) {
    return;
  }
  lVar12 = 0;
LAB_142867e60:
  pbVar9 = (byte *)(*(longlong *)(param_2 + 0x1d0) + lVar12);
  if (*pbVar9 == param_3) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_4;
    }
    if (*(int *)(pbVar9 + 0x10) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(pbVar9 + 8);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar10);
    if (iVar3 != 0) {
      if (*(int *)(param_4 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*param_4;
      }
      pwVar8 = &DAT_1451ca064;
      do {
        wVar1 = *(wint_t *)((longlong)(puVar10 + -0xa28e5032) + (longlong)pwVar8);
        if ((wVar1 == 0) && (*pwVar8 == 0)) break;
        if (wVar1 != *pwVar8) {
          wVar1 = towlower(wVar1);
          wVar2 = towlower(*pwVar8);
          if (wVar1 != wVar2) goto LAB_142867ef0;
        }
        pwVar8 = pwVar8 + 1;
      } while( true );
    }
    goto LAB_142867efe;
  }
  goto LAB_142867f86;
LAB_142867ef0:
  if (wVar1 == wVar2) {
LAB_142867efe:
    iVar3 = 0;
    if (0 < *(int *)(pbVar9 + 0x30)) {
      lVar11 = 0;
      do {
        uVar4 = *(uint *)(*(longlong *)(lVar11 + *(longlong *)(pbVar9 + 0x28)) + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar7 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar7 * 0x18;
        }
        else {
          lVar5 = 0;
        }
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xbfffffff;
        iVar3 = iVar3 + 1;
        lVar11 = lVar11 + 8;
      } while (iVar3 < *(int *)(pbVar9 + 0x30));
    }
    pbVar9[0x30] = 0;
    pbVar9[0x31] = 0;
    pbVar9[0x32] = 0;
    pbVar9[0x33] = 0;
    if (*(int *)(pbVar9 + 0x34) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(pbVar9 + 0x28,0);
    }
  }
LAB_142867f86:
  iVar13 = iVar13 + 1;
  lVar12 = lVar12 + 0x38;
  if (*(int *)(param_2 + 0x1d8) <= iVar13) {
    return;
  }
  goto LAB_142867e60;
}



// FUNCTION 142867fd0 Clear body=187 status=ok
// SIG undefined Clear(void)

void FTimerData::Clear(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x10),0,0);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FWeakObjectPtr::operator=(param_1 + 0x20,0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x40);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x60),0,0);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(code **)(param_1 + 0x30) = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 142868090 FUN_142868090 body=449 status=ok
// SIG undefined FUN_142868090(void)

void FUN_142868090(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x7b0);
  iVar8 = 0;
  if (0 < *(int *)(lVar4 + 0x60)) {
    iVar7 = 1;
    lVar9 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x58);
      lVar6 = *(longlong *)(lVar9 + lVar1);
      if (lVar6 == 0) {
        iVar5 = *(int *)(lVar4 + 0x60);
        iVar3 = (iVar5 - iVar8) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x20 + lVar1),
                     (void *)((longlong)iVar7 * 0x20 + lVar1),(longlong)iVar3 << 5);
          iVar5 = *(int *)(lVar4 + 0x60);
        }
        *(int *)(lVar4 + 0x60) = iVar5 + -1;
LAB_142868212:
        TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(lVar4 + 0x58);
        iVar8 = iVar8 + -1;
        iVar7 = iVar7 + -1;
        lVar9 = lVar9 + -0x20;
      }
      else {
        do {
          lVar4 = FUN_1429a0270();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
LAB_1428681d1:
            lVar4 = *(longlong *)(param_1 + 0x7b0);
            iVar5 = *(int *)(lVar4 + 0x60);
            iVar3 = (iVar5 - iVar8) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar8 * 0x20 + *(longlong *)(lVar4 + 0x58)),
                         (void *)((longlong)iVar7 * 0x20 + *(longlong *)(lVar4 + 0x58)),
                         (longlong)iVar3 << 5);
              iVar5 = *(int *)(lVar4 + 0x60);
            }
            *(int *)(lVar4 + 0x60) = iVar5 + -1;
            goto LAB_142868212;
          }
          lVar4 = FUN_142a2f930();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_1428681d1;
          lVar4 = FUN_1428dfc70();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_1428681d1;
          lVar6 = *(longlong *)(lVar6 + 0x20);
        } while (lVar6 != 0);
      }
      lVar4 = *(longlong *)(param_1 + 0x7b0);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x20;
    } while (iVar8 < *(int *)(lVar4 + 0x60));
  }
  return;
}



// FUNCTION 142868260 FUN_142868260 body=1764 status=ok
// SIG undefined FUN_142868260(void)

void FUN_142868260(longlong *param_1)

{
  void *_Dst;
  wchar_t wVar1;
  wchar_t wVar2;
  undefined4 uVar3;
  LARGE_INTEGER _Src;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  DWORD DVar8;
  wint_t wVar9;
  wint_t wVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  double *pdVar15;
  wint_t *pwVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  wchar_t *pwVar19;
  undefined2 *puVar20;
  int iVar21;
  longlong lVar22;
  ulonglong unaff_R12;
  ulonglong uVar23;
  LARGE_INTEGER *pLVar24;
  undefined2 *puVar25;
  LARGE_INTEGER *pLVar26;
  double dVar27;
  float fVar28;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER *local_res18;
  longlong local_res20;
  void *local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  DWORD local_b8;
  undefined4 local_b4;
  undefined2 *local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_94;
  wchar_t *local_90;
  uint local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  
  iVar21 = 0;
  uVar23 = unaff_R12 & 0xffffffffffffff00;
  pLVar26 = (LARGE_INTEGER *)*param_1;
  pLVar24 = pLVar26 + (longlong)(int)param_1[1] * 2;
  local_res20 = 0;
  fVar28 = 0.0;
  local_res8.s.LowPart = (int)uVar23;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_res18 = pLVar26;
  if (pLVar26 != pLVar24) {
LAB_1428682d0:
    pwVar19 = (wchar_t *)0x0;
    local_b8 = pLVar26[1].s.LowPart;
    lVar22 = (longlong)(int)local_b8;
    _Src.s = *(_struct_19 *)pLVar26;
    local_c0 = (wchar_t *)0x0;
    local_res18 = pLVar26;
    if (local_b8 == 0) {
      local_b4 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8,0);
      pwVar19 = local_c0;
      _guard_xfg_dispatch_icall_nop(local_c0,(void *)_Src,lVar22 * 2);
    }
    DVar8 = local_b8;
    local_b0 = (undefined2 *)0x0;
    local_a8 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
    puVar25 = local_b0;
    FGenericPlatformString::Memcpy(local_b0,L"-empty",0xe);
    puVar20 = &DAT_143f3eda8;
    if ((int)local_a8 != 0) {
      puVar20 = puVar25;
    }
    pwVar13 = L"";
    if (DVar8 != 0) {
      pwVar13 = pwVar19;
    }
    lVar22 = (longlong)puVar20 - (longlong)pwVar13;
    do {
      wVar1 = *pwVar13;
      wVar2 = *(wchar_t *)((longlong)pwVar13 + lVar22);
      if (wVar1 != wVar2) break;
      pwVar13 = pwVar13 + 1;
    } while (wVar2 != L'\0');
    if (puVar25 != (undefined2 *)0x0) {
      FMemory::Free(puVar25);
    }
    if (wVar1 != wVar2) {
      if ((char)uVar23 == '\0') {
        if ((DVar8 != 0) && (iVar21 = DVar8 - 1, 1 < iVar21)) {
          iVar11 = iVar21;
          if (1 < iVar21) {
            iVar11 = 1;
          }
          iVar12 = 0;
          local_a0 = (undefined2 *)0x0;
          local_94 = 0;
          pwVar19 = pwVar19 + ((longlong)iVar21 - (longlong)iVar11);
          puVar25 = (undefined2 *)0x0;
          if ((pwVar19 != (wchar_t *)0x0) && (puVar25 = (undefined2 *)0x0, *pwVar19 != L'\0')) {
            lVar22 = -1;
            do {
              lVar5 = lVar22 + 1;
              lVar22 = lVar22 + 1;
            } while (pwVar19[lVar5] != L'\0');
            local_98 = (int)lVar22 + 1;
            if (0 < local_98) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
            }
            iVar12 = local_98;
            puVar25 = local_a0;
            FGenericPlatformString::Memcpy(local_a0);
          }
          pwVar19 = (wchar_t *)0x0;
          local_90 = (wchar_t *)0x0;
          local_84 = 0;
          iVar21 = 0;
          if (-1 < (int)(DVar8 - 2)) {
            iVar21 = DVar8 - 2;
          }
          pwVar13 = (wchar_t *)(ulonglong)(iVar21 + 1);
          if (iVar21 == 0) {
            pwVar13 = pwVar19;
          }
          local_88 = (uint)pwVar13;
          if (0 < (int)local_88) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
            pwVar19 = local_90;
            pwVar13 = (wchar_t *)(ulonglong)local_88;
            if (0 < (int)local_88) {
              wcsncpy(local_90,local_c0,(longlong)iVar21);
              pwVar19[iVar21] = L'\0';
            }
          }
          pwVar16 = &DAT_1451c97cc;
          puVar20 = &DAT_143f3eda8;
          if (iVar12 != 0) {
            puVar20 = puVar25;
          }
          do {
            wVar9 = *(wint_t *)((longlong)(puVar20 + -0xa28e4be6) + (longlong)pwVar16);
            if ((wVar9 == 0) && (*pwVar16 == 0)) goto LAB_1428684cd;
            if (wVar9 != *pwVar16) {
              wVar9 = towlower(wVar9);
              wVar10 = towlower(*pwVar16);
              if (wVar9 != wVar10) goto LAB_1428684c3;
            }
            pwVar16 = pwVar16 + 1;
          } while( true );
        }
      }
      else {
        FString::PrintfImpl(&local_80);
        pvVar6 = local_80;
        uVar7 = local_c8;
        if (local_78 == 0) {
          iVar21 = 0;
        }
        else {
          iVar21 = local_78 + -1;
        }
        if (iVar21 != 0) {
          iVar11 = (int)local_c8;
          lVar22 = (longlong)(int)local_c8;
          iVar12 = (uint)((int)local_c8 == 0) + iVar21 + (int)local_c8;
          local_c8 = CONCAT44(local_c8._4_4_,iVar12);
          if (local_c8._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,uVar7 & 0xffffffff);
          }
          _Dst = (void *)((longlong)local_d0 + (lVar22 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)_Dst) = 0;
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
      }
      goto LAB_1428685b5;
    }
    if (pwVar19 != (wchar_t *)0x0) {
      FMemory::Free(pwVar19);
    }
    if (DAT_146b17150 != 0) {
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Empty(DAT_146b17150 + 0x1130,0);
      TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Empty(DAT_146b17150 + 0x1180,0);
      goto LAB_1428688e5;
    }
    goto LAB_1428686c0;
  }
LAB_1428686c4:
  FString::TrimStartAndEndInline(&local_d0);
  if ((((DAT_146b17150 != 0) && ((char)uVar23 != '\0')) && ((int)local_c8 != 0)) &&
     (0 < (int)local_c8 + -1)) {
    if (iVar21 == 0) {
      if (fVar28 <= 0.0) goto LAB_1428688e5;
      QueryPerformanceCounter(&local_res8);
      plVar17 = (longlong *)(DAT_146b17150 + 0x1180);
      local_res10 = (LARGE_INTEGER)
                    ((((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430) +
                    (double)fVar28);
      if (*(int *)(DAT_146b17150 + 0x1188) != *(int *)(DAT_146b17150 + 0x11b4)) {
        lVar22 = *(longlong *)(DAT_146b17150 + 0x11c0);
        if (*(longlong *)(DAT_146b17150 + 0x11c0) == 0) {
          lVar22 = DAT_146b17150 + 0x11b8;
        }
        iVar21 = *(int *)(lVar22 + ((longlong)
                                    (int)(local_res10.s.HighPart * 0x17 + local_res10.s.LowPart) &
                                   (longlong)*(int *)(DAT_146b17150 + 0x11c8) - 1U) * 4);
        local_res8 = local_res10;
        if (iVar21 != -1) {
          do {
            pdVar15 = (double *)((longlong)iVar21 * 0x20 + *plVar17);
            if ((double)local_res10 == *pdVar15) {
              if ((iVar21 != -1) && (pdVar15 != (double *)0x0)) goto LAB_14286888a;
              break;
            }
            iVar21 = *(int *)(pdVar15 + 3);
          } while (iVar21 != -1);
        }
      }
      local_res18 = &local_res10;
      FUN_14285dda0(plVar17,&local_res8,&local_res18,0);
      uVar3 = local_res8.s.LowPart;
    }
    else {
      plVar17 = (longlong *)(DAT_146b17150 + 0x1130);
      iVar21 = DAT_1464aaa8c + iVar21;
      local_res8.s.LowPart = iVar21;
      if (*(int *)(DAT_146b17150 + 0x1138) != *(int *)(DAT_146b17150 + 0x1164)) {
        lVar22 = *(longlong *)(DAT_146b17150 + 0x1170);
        if (*(longlong *)(DAT_146b17150 + 0x1170) == 0) {
          lVar22 = DAT_146b17150 + 0x1168;
        }
        iVar11 = *(int *)(lVar22 + ((longlong)*(int *)(DAT_146b17150 + 0x1178) - 1U &
                                   (longlong)iVar21) * 4);
        if (iVar11 != -1) {
          do {
            pdVar15 = (double *)((longlong)iVar11 * 0x20 + *plVar17);
            if (*(int *)pdVar15 == iVar21) {
              if ((iVar11 != -1) && (pdVar15 != (double *)0x0)) goto LAB_14286888a;
              break;
            }
            iVar11 = *(int *)(pdVar15 + 3);
          } while (iVar11 != -1);
        }
      }
      local_res18 = &local_res8;
      FUN_14285db30(plVar17,&local_res10,&local_res18,0);
      uVar3 = local_res10.s.LowPart;
    }
    pdVar15 = (double *)((longlong)(int)uVar3 * 0x20 + *plVar17);
LAB_14286888a:
    iVar21 = *(int *)(pdVar15 + 2);
    *(int *)(pdVar15 + 2) = iVar21 + 1;
    if (*(int *)((longlong)pdVar15 + 0x14) < iVar21 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pdVar15 + 1,iVar21);
    }
    pvVar6 = local_d0;
    puVar18 = (undefined8 *)((longlong)iVar21 * 0x10 + (longlong)pdVar15[1]);
    *puVar18 = 0;
    lVar22 = (longlong)(int)local_c8;
    *(int *)(puVar18 + 1) = (int)local_c8;
    if ((int)local_c8 == 0) {
      *(undefined4 *)((longlong)puVar18 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar18,local_c8 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar18,pvVar6,lVar22 * 2);
    }
  }
LAB_1428688e5:
  if (local_d0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
LAB_1428684c3:
  if (wVar9 != wVar10) {
    pwVar16 = &DAT_1451c97fc;
    puVar20 = &DAT_143f3eda8;
    if (iVar12 != 0) {
      puVar20 = puVar25;
    }
    do {
      wVar9 = *(wint_t *)((longlong)(puVar20 + -0xa28e4bfe) + (longlong)pwVar16);
      if ((wVar9 == 0) && (*pwVar16 == 0)) goto LAB_14286855a;
      if (wVar9 != *pwVar16) {
        wVar9 = towlower(wVar9);
        wVar10 = towlower(*pwVar16);
        if (wVar9 != wVar10) goto LAB_142868550;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
LAB_1428684cd:
  pwVar14 = L"";
  if ((int)pwVar13 != 0) {
    pwVar14 = pwVar19;
  }
  dVar27 = _wtof(pwVar14);
  fVar28 = (float)dVar27;
  if (0.0 < fVar28) {
    uVar23 = CONCAT71((int7)((ulonglong)pwVar13 >> 8),1);
    local_res8.s.LowPart = (int)uVar23;
    goto LAB_14286858f;
  }
LAB_14286858b:
  uVar23 = local_res8.QuadPart & 0xffffffff;
LAB_14286858f:
  if (pwVar19 != (wchar_t *)0x0) {
    FMemory::Free(pwVar19);
  }
  pwVar19 = local_c0;
  pLVar26 = local_res18;
  if (puVar25 != (undefined2 *)0x0) {
    FMemory::Free(puVar25);
    pwVar19 = local_c0;
    pLVar26 = local_res18;
  }
LAB_1428685b5:
  if (pwVar19 != (wchar_t *)0x0) {
    FMemory::Free(pwVar19);
  }
  pLVar26 = pLVar26 + 2;
  local_res18 = pLVar26;
  if (pLVar26 == pLVar24) goto LAB_1428686c0;
  goto LAB_1428682d0;
LAB_142868550:
  if (wVar9 == wVar10) {
LAB_14286855a:
    pwVar14 = L"";
    if ((int)pwVar13 != 0) {
      pwVar14 = pwVar19;
    }
    local_res20 = _wtoi64(pwVar14);
    uVar4 = local_res8.s.LowPart & 0xff;
    if ((int)local_res20 != 0) {
      uVar4 = 1;
    }
    uVar23 = (ulonglong)uVar4;
    local_res8.s.LowPart = uVar4;
    goto LAB_14286858f;
  }
  goto LAB_14286858b;
LAB_1428686c0:
  iVar21 = (int)local_res20;
  goto LAB_1428686c4;
}



// FUNCTION 142868950 FUN_142868950 body=2906 status=ok
// SIG undefined FUN_142868950(void)

undefined8 FUN_142868950(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong **pplVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined2 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined2 *local_b8;
  int iStack_b0;
  undefined **local_a8;
  char local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  uint local_70;
  longlong *local_68;
  uint local_58;
  uint local_54;
  longlong local_50;
  
  if (*(int *)(param_2 + 0x1e8) < 1) {
    plVar13 = (longlong *)(param_2 + 0x200);
    if ((wchar_t *)*plVar13 != L"No map change is being prepared") {
      iVar7 = 0;
      *(undefined4 *)(param_2 + 0x208) = 0;
      if (*(int *)(param_2 + 0x20c) != 0x20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar13,0x20);
        iVar7 = *(int *)(param_2 + 0x208);
      }
      *(int *)(param_2 + 0x208) = iVar7 + 0x20;
      if (*(int *)(param_2 + 0x20c) < iVar7 + 0x20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar13,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*plVar13,L"No map change is being prepared",0x20);
      return 0;
    }
  }
  else {
    if (*(int *)(param_2 + 0x1e8) == *(int *)(param_2 + 0x1f8)) {
      local_50 = *(longlong *)(*(longlong *)(param_2 + 0x288) + 0x140);
      uVar25 = 0;
      if (local_50 != 0) {
        lVar8 = UObjectBaseUtility::GetOutermost
                          (*(undefined8 *)(*(longlong *)(param_2 + 0x288) + 0x30));
        local_res10 = *(ulonglong *)(lVar8 + 0x18);
        FName::ToString(&local_res10,&local_c8);
        FName::ToString(*(undefined8 *)(param_2 + 0x1e0),&local_b8);
        plVar18 = *(longlong **)(*(longlong *)(param_2 + 0x288) + 0x88);
        plVar13 = plVar18 + *(int *)(*(longlong *)(param_2 + 0x288) + 0x90);
        for (; plVar18 != plVar13; plVar18 = plVar18 + 1) {
          lVar8 = *plVar18;
          if (lVar8 != 0) {
            lVar9 = ULevelStreamingPersistent::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              pplVar10 = (longlong **)ULevelStreaming::GetWorldAssetPackageName(lVar8,&local_88);
              if (&local_c8 != pplVar10) {
                if (local_c8 != (longlong *)0x0) {
                  FMemory::Free();
                }
                local_c8 = *pplVar10;
                *pplVar10 = (longlong *)0x0;
                local_c0 = *(int *)(pplVar10 + 1);
                local_bc = *(undefined4 *)((longlong)pplVar10 + 0xc);
                pplVar10[1] = (longlong *)0x0;
              }
              if (local_88 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              break;
            }
          }
        }
        lVar8 = FUN_14244d3d0();
        *(int *)(lVar8 + 0x74) = *(int *)(lVar8 + 0x74) + 1;
        bVar2 = false;
        iVar7 = *(int *)(lVar8 + 0x74);
        iVar6 = *(int *)(lVar8 + 0x68) + -1;
        lVar9 = (longlong)iVar6;
        if (-1 < iVar6) {
          lVar19 = lVar9 << 4;
          bVar2 = false;
          do {
            lVar1 = *(longlong *)(lVar8 + 0x60);
            if (((*(int *)(lVar1 + 8 + lVar19) == 0) ||
                (plVar13 = *(longlong **)(lVar1 + lVar19), plVar13 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar13 + 0x40))(plVar13,&local_c8,&local_b8), cVar3 == '\0'))
            {
              bVar2 = true;
            }
            lVar19 = lVar19 + -0x10;
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
          iVar7 = *(int *)(lVar8 + 0x74);
        }
        *(int *)(lVar8 + 0x74) = iVar7 + -1;
        if (bVar2) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(lVar8 + 0x60),0);
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      FGCObject::FGCObject(&local_a8);
      local_98 = 0;
      local_a8 = &PTR__scalar_deleting_destructor__1451df4c8;
      local_90 = 0;
      if (0 < *(int *)(param_2 + 0x230)) {
        uVar11 = UObject::GetPrivateStaticClass();
        FObjectIterator::FObjectIterator(&local_78,uVar11,1,0x10,0);
        if (local_68 != (longlong *)0x0) {
          do {
            uVar23 = local_70;
            if ((local_68 != (longlong *)0x0) && (lVar8 = *local_68, lVar8 != 0)) {
              lVar9 = FUN_1429a0270();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (uVar26 = uVar25, uVar12 = uVar25, 0 < *(int *)(param_2 + 0x230))) {
                do {
                  lVar9 = *(longlong *)(param_2 + 0x228);
                  lVar19 = UObjectBaseUtility::GetOutermost(lVar8);
                  uVar24 = local_90;
                  if ((*(longlong *)(lVar19 + 0x18) == *(longlong *)(lVar9 + uVar26)) &&
                     ((*(byte *)(*(longlong *)(param_2 + 0x228) + 8 + uVar26) & 3) != 0)) {
                    lVar9 = (longlong)(int)local_90;
                    iVar7 = (int)local_90 + 1;
                    local_90 = CONCAT44(local_90._4_4_,iVar7);
                    if (local_90._4_4_ < iVar7) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (&local_98,uVar24 & 0xffffffff);
                    }
                    *(longlong *)(local_98 + lVar9 * 8) = lVar8;
                    break;
                  }
                  uVar27 = (int)uVar12 + 1;
                  uVar26 = uVar26 + 0x10;
                  uVar12 = (ulonglong)uVar27;
                } while ((int)uVar27 < *(int *)(param_2 + 0x230));
              }
            }
            do {
              do {
                uVar23 = uVar23 + 1;
                local_70 = uVar23;
                if (*(int *)(local_78 + 0x24) <= (int)uVar23) goto LAB_142868dc9;
                while( true ) {
                  uVar17 = uVar23 & 0xffff;
                  uVar27 = uVar23;
                  if ((int)uVar23 < 0) {
                    uVar27 = uVar23 + 0xffff;
                    uVar17 = (uVar23 & 0xffff) - 0x10000;
                  }
                  lVar8 = *(longlong *)
                           (*(longlong *)(local_78 + 0x10) + (longlong)((int)uVar27 >> 0x10) * 8);
                  local_68 = (longlong *)(lVar8 + (longlong)(int)uVar17 * 0x18);
                  lVar8 = *(longlong *)(lVar8 + (longlong)(int)uVar17 * 0x18);
                  if (lVar8 != 0) break;
                  uVar23 = uVar23 + 1;
                  local_70 = uVar23;
                  if (*(int *)(local_78 + 0x24) <= (int)uVar23) goto LAB_142868dc9;
                }
              } while ((*(uint *)(lVar8 + 8) & local_58) != 0);
              uVar27 = *(uint *)(lVar8 + 0xc);
              uVar26 = uVar25;
              if ((int)uVar27 < (int)DAT_1469e91c4) {
                uVar17 = uVar27 & 0xffff;
                if ((int)uVar27 < 0) {
                  uVar27 = uVar27 + 0xffff;
                  uVar17 = uVar17 - 0x10000;
                }
                uVar26 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar27 >> 0x10) * 8) +
                         (longlong)(int)uVar17 * 0x18;
              }
              local_70 = uVar23;
            } while ((*(uint *)(uVar26 + 8) & local_54) != 0);
          } while( true );
        }
      }
LAB_142868dc9:
      lVar8 = *(longlong *)(param_2 + 0x288);
      *(undefined4 *)(lVar8 + 0x810) = 0;
      if (*(int *)(lVar8 + 0x814) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8 + 0x808,0);
      }
      plVar13 = *(longlong **)(*(longlong *)(param_2 + 0x288) + 0x88);
      uVar12 = (ulonglong)*(int *)(*(longlong *)(param_2 + 0x288) + 0x90);
      uVar26 = uVar12 & 0x1fffffffffffffff;
      if (plVar13 + uVar12 < plVar13) {
        uVar26 = uVar25;
      }
      uVar12 = uVar25;
      if (uVar26 != 0) {
        do {
          if (*plVar13 != 0) {
            ULevelStreaming::SetIsRequestingUnloadAndRemoval(*plVar13,1);
          }
          plVar13 = plVar13 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar26);
      }
      FUN_14172d470(0,1);
      local_res18 = **(longlong **)(param_2 + 0x1e0);
      *(longlong *)(*(longlong *)(param_2 + 0x288) + 0x818) = local_res18;
      uVar12 = uVar25;
      uVar24 = uVar25;
      uVar26 = uVar25;
      if (0 < *(int *)(param_2 + 0x1f8)) {
        do {
          uVar26 = *(ulonglong *)(uVar12 + *(longlong *)(param_2 + 0x1f0));
          if ((uVar26 != 0) &&
             (lVar8 = UObjectBaseUtility::GetOutermost(uVar26),
             local_res18 == *(longlong *)(lVar8 + 0x18))) break;
          uVar23 = (int)uVar24 + 1;
          uVar12 = uVar12 + 8;
          uVar24 = (ulonglong)uVar23;
          uVar26 = uVar25;
        } while ((int)uVar23 < *(int *)(param_2 + 0x1f8));
      }
      lVar8 = UObjectBaseUtility::GetOutermost(uVar26);
      local_res20 = *(undefined8 *)(lVar8 + 0x18);
      FName::ToString(&local_res20,&local_b8);
      puVar20 = &DAT_143f3eda8;
      if (iStack_b0 != 0) {
        puVar20 = local_b8;
      }
      FString::PrintfImpl(&local_88,L"LevelStreamingPersistent_%s",puVar20);
      uVar11 = *(undefined8 *)(param_2 + 0x288);
      puVar20 = &DAT_143f3eda8;
      if (local_80 != 0) {
        puVar20 = local_88;
      }
      plVar13 = (longlong *)FName::FName(&local_c8,puVar20,1);
      local_res10 = 0;
      lVar8 = *plVar13;
      if (lVar8 == 0) {
        FUN_1417846f0(uVar11,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar14 = ULevelStreamingPersistent::GetPrivateStaticClass();
      uVar23 = 0;
      uVar11 = FUN_1417985e0(uVar14,uVar11,lVar8,0,0,0,0,0,0);
      if (local_88 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      UWorld::AddStreamingLevel(*(undefined8 *)(param_2 + 0x288),uVar11);
      FUN_1425504a0(uVar11,uVar26);
      ULevelStreaming::SetWorldAssetByPackageName(uVar11,local_res18);
      lVar8 = *(longlong *)(uVar26 + 0x20);
      puVar21 = *(undefined8 **)(lVar8 + 0x88);
      iStack_b0 = *(int *)(lVar8 + 0x90);
      uVar26 = (longlong)iStack_b0 & 0x1fffffffffffffff;
      if (puVar21 + iStack_b0 < puVar21) {
        uVar26 = uVar25;
      }
      if (uVar26 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar21 + 0x138))
                    ((longlong *)*puVar21,0,*(undefined8 *)(param_2 + 0x288),0x11);
          uVar25 = uVar25 + 1;
          puVar21 = puVar21 + 1;
        } while (uVar25 != uVar26);
        iStack_b0 = *(int *)(lVar8 + 0x90);
      }
      local_b8 = *(undefined2 **)(lVar8 + 0x88);
      UWorld::AddStreamingLevels(*(undefined8 *)(param_2 + 0x288),&local_b8);
      UWorld::ClearStreamingLevels(lVar8);
      lVar8 = *(longlong *)(param_2 + 0x288);
      uVar26 = 0;
      plVar13 = *(longlong **)(lVar8 + 0x88);
      uVar25 = (longlong)*(int *)(lVar8 + 0x90) & 0x1fffffffffffffff;
      if (plVar13 + *(int *)(lVar8 + 0x90) < plVar13) {
        uVar25 = uVar26;
      }
      local_res10 = uVar25;
      if (uVar25 != 0) {
        do {
          uVar12 = 0;
          plVar18 = (longlong *)*plVar13;
          if ((plVar18 != (longlong *)0x0) && (uVar24 = uVar12, 0 < *(int *)(param_2 + 0x1e8))) {
            do {
              lVar8 = *(longlong *)(param_2 + 0x1e0);
              plVar15 = (longlong *)ULevelStreaming::GetWorldAssetPackageFName(plVar18,&local_res20)
              ;
              if (*(longlong *)(lVar8 + uVar24) == *plVar15) {
                (**(code **)(*plVar18 + 0x278))(plVar18,1);
                ULevelStreaming::SetShouldBeVisible(plVar18,1);
                cVar3 = FUN_1428cfb70(*(undefined8 *)(param_2 + 0x288));
                uVar25 = local_res10;
                if (cVar3 != '\0') {
                  uVar4 = (**(code **)(*plVar18 + 0x280))(plVar18);
                  uVar5 = (**(code **)(*plVar18 + 0x288))(plVar18);
                  UWorld::GetPlayerControllerIterator(*(undefined8 *)(param_2 + 0x288),&local_c8);
                  while( true ) {
                    if ((local_c0 < 0) || ((int)local_c8[1] <= local_c0)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    uVar25 = local_res10;
                    if (!bVar2) break;
                    lVar8 = FWeakObjectPtr::Get(*local_c8 + (longlong)local_c0 * 8);
                    if (lVar8 != 0) {
                      uVar23 = CONCAT31((int3)(uVar23 >> 8),*(byte *)((longlong)plVar18 + 0xb6) >> 6
                                       ) & 0xffffff01;
                      APlayerController::LevelStreamingStatusChanged
                                (lVar8,plVar18,uVar4,uVar5,uVar23,(int)plVar18[0x16]);
                    }
                    local_c0 = local_c0 + 1;
                  }
                }
                break;
              }
              uVar27 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar27;
              uVar25 = local_res10;
              uVar24 = uVar24 + 8;
            } while ((int)uVar27 < *(int *)(param_2 + 0x1e8));
          }
          plVar13 = plVar13 + 1;
          uVar26 = uVar26 + 1;
        } while (uVar26 != uVar25);
        lVar8 = *(longlong *)(param_2 + 0x288);
      }
      FUN_1428caf60(lVar8,2);
      plVar13 = (longlong *)UWorld::GetAudioDevice(*(undefined8 *)(param_2 + 0x288));
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x40))(plVar13,0);
      }
      FUN_14172d470(0,1);
      if (*(int *)(param_2 + 0x230) < 1) {
        uVar11 = 2;
      }
      else {
        plVar13 = *(longlong **)(param_2 + 0x228);
        plVar18 = plVar13 + (longlong)*(int *)(param_2 + 0x230) * 2;
        for (; plVar13 != plVar18; plVar13 = plVar13 + 2) {
          plVar22 = *(longlong **)(*(longlong *)(param_2 + 0x288) + 0x88);
          plVar15 = plVar22 + *(int *)(*(longlong *)(param_2 + 0x288) + 0x90);
          for (; plVar22 != plVar15; plVar22 = plVar22 + 1) {
            if ((*plVar22 == 0) ||
               (plVar16 = (longlong *)
                          ULevelStreaming::GetWorldAssetPackageFName(*plVar22,&local_res10),
               *plVar16 != *plVar13)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              if (plVar22 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar22 + 0x278))
                          ((longlong *)*plVar22,*(byte *)(plVar13 + 1) & 1);
                ULevelStreaming::SetShouldBeVisible
                          (*plVar22,CONCAT31((uint3)(*(uint *)(plVar13 + 1) >> 9),
                                             (char)(*(uint *)(plVar13 + 1) >> 1)) & 0xffffff01);
                ULevelStreaming::SetLevelLODIndex(*plVar22,*(undefined4 *)((longlong)plVar13 + 0xc))
                ;
              }
              break;
            }
          }
        }
        *(undefined4 *)(param_2 + 0x230) = 0;
        if (*(int *)(param_2 + 0x234) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0x228,0);
        }
        uVar11 = 1;
      }
      iVar7 = 0;
      FUN_1428caf60(*(undefined8 *)(param_2 + 0x288),uVar11);
      if (DAT_146af4bf0 != (longlong *)0x0) {
        (**(code **)(*DAT_146af4bf0 + 0x10))
                  (DAT_146af4bf0,&local_res18,
                   *(uint *)(*(longlong *)(param_2 + 0x288) + 0x830) >> 2 & 0xffffff01);
      }
      *(undefined4 *)(*(longlong *)(param_2 + 0x288) + 0x6fc) = 3;
      *(undefined4 *)(param_2 + 0x1e8) = 0;
      if (*(int *)(param_2 + 0x1ec) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x1e0,0);
      }
      *(undefined4 *)(param_2 + 0x1f8) = 0;
      if (*(int *)(param_2 + 0x1fc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x1f0,0);
      }
      puVar21 = (undefined8 *)(param_2 + 0x200);
      if ((undefined *)*puVar21 != &DAT_1451ca29c) {
        *(undefined4 *)(param_2 + 0x208) = 0;
        iVar6 = 0;
        if (*(int *)(param_2 + 0x20c) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar21,0);
          iVar6 = *(int *)(param_2 + 0x20c);
          iVar7 = *(int *)(param_2 + 0x208);
        }
        if (iVar6 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar21,iVar7);
        }
      }
      plVar13 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar13 + 0x30))(plVar13);
      if (local_50 != 0) {
        lVar8 = FUN_14244d3d0();
        TBaseMulticastDelegate<void>::Broadcast(lVar8 + 0x78);
      }
      FUN_142476400(param_1 + 0xcf8);
      if (local_98 != 0) {
        FMemory::Free();
      }
      local_a8 = &PTR__scalar_deleting_destructor__143f73ca8;
      if ((DAT_1469e6880 != 0) && (local_a0 != '\0')) {
        UGCObjectReferencer::RemoveObject(DAT_1469e6880,&local_a8);
      }
      return 1;
    }
    plVar13 = (longlong *)(param_2 + 0x200);
    if ((wchar_t *)*plVar13 != L"Map change is not ready yet") {
      iVar7 = 0;
      *(undefined4 *)(param_2 + 0x208) = 0;
      if (*(int *)(param_2 + 0x20c) != 0x1c) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar13,0x1c);
        iVar7 = *(int *)(param_2 + 0x208);
      }
      *(int *)(param_2 + 0x208) = iVar7 + 0x1c;
      if (*(int *)(param_2 + 0x20c) < iVar7 + 0x1c) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar13,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*plVar13,L"Map change is not ready yet",0x1c);
    }
  }
  return 0;
}



// FUNCTION 1428694b0 FUN_1428694b0 body=324 status=ok
// SIG undefined FUN_1428694b0(void)

undefined8
FUN_1428694b0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint in_stack_ffffffffffffffb8;
  longlong *local_28;
  longlong *local_20;
  
  lVar4 = param_5;
  uVar9 = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_5 + 0xc)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_5,0);
  }
  if (0 < *(int *)(param_2 + 1)) {
    puVar6 = (undefined8 *)FName::FName(&param_5,"ImageWrapper",1);
    uVar3 = *puVar6;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FUN_141690010(uVar7,uVar3);
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_28,0,2,in_stack_ffffffffffffffb8 & 0xffffff00);
    if ((local_28 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*local_28 + 8))
                          (local_28,*param_2,*(undefined4 *)(param_2 + 1),param_3,param_4,1,8),
       cVar5 != '\0')) {
      uVar9 = (**(code **)(*local_28 + 0x10))(local_28,0);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(lVar4,uVar9);
      uVar9 = 1;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_20 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
  }
  return uVar9;
}



// FUNCTION 142869600 FUN_142869600 body=529 status=ok
// SIG undefined FUN_142869600(void)

void FUN_142869600(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  char local_res8 [8];
  char *local_res10;
  code *local_28;
  char **ppcStack_20;
  
  if (DAT_1468c21b0 != *(longlong *)(param_1 + 0xa20)) {
    if (*(char *)(param_1 + 0xa2c) == '\0') {
      local_res10 = local_res8;
      local_res8[0] = '\0';
      ppcStack_20 = &local_res10;
      local_28 = FUN_1428677d0;
      uVar2 = FUN_142a2f930();
      FUN_1417a43b0(uVar2,&local_28,1,0x10,0);
      if (local_res8[0] != '\0') {
        *(float *)(param_1 + 0xa28) = (float)((double)*(float *)(param_1 + 0xa28) + DAT_1464a97d0);
        fVar3 = DAT_146535184;
        if (*(char *)(param_1 + 0xa2d) == '\0') {
          cVar1 = FUN_14173dbe0();
          if (((cVar1 != '\0') || (*(float *)(param_1 + 0xa28) <= fVar3)) || (fVar3 <= 0.0)) {
            FUN_14173d060(1,0x3b03126f);
          }
          else {
            cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
            if ((cVar1 == '\0') && (cVar1 = FUN_1417488f0(0,0), cVar1 != '\0')) {
              ppcStack_20 = &local_res10;
              local_res10 = (char *)((ulonglong)local_res10 & 0xffffffffffffff00);
              local_28 = (code *)&LAB_1428677c0;
              uVar2 = FUN_142a2f930();
              FUN_1417a43b0(uVar2,&local_28,1,0x10,0);
              *(undefined4 *)(param_1 + 0xa28) = 0;
              *(undefined1 *)(param_1 + 0xa2c) = 0;
              *(longlong *)(param_1 + 0xa20) = DAT_1468c21b0;
            }
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xa2d) = 0;
        }
      }
    }
    else {
      cVar1 = FUN_1417488f0(0,1);
      if (cVar1 != '\0') {
        ppcStack_20 = (char **)local_res8;
        local_res8[0] = '\0';
        local_28 = (code *)&LAB_1428677c0;
        uVar2 = FUN_142a2f930();
        FUN_1417a43b0(uVar2,&local_28,1,0x10,0);
        *(undefined2 *)(param_1 + 0xa2c) = 0;
        *(undefined4 *)(param_1 + 0xa28) = 0;
      }
    }
    if (0 < *DAT_146b17678) {
      fVar3 = DAT_146535184 + 1.0;
      *(undefined1 *)(param_1 + 0xa2c) = 1;
      *(float *)(param_1 + 0xa28) = fVar3;
    }
    *(longlong *)(param_1 + 0xa20) = DAT_1468c21b0;
  }
  return;
}



// FUNCTION 142869820 FUN_142869820 body=147 status=ok
// SIG undefined FUN_142869820(void)

void FUN_142869820(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_2 + 0x210) & 1) != 0) && (0 < *(int *)(param_2 + 0x1e8))) {
    if (*(int *)(param_2 + 0x1e8) != *(int *)(param_2 + 0x1f8)) {
      FUN_1416f7d70(0xffffffff);
    }
    plVar2 = *(longlong **)(param_1 + 0xc18);
    plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      lVar3 = *plVar2;
      if (*(longlong *)(lVar3 + 0x288) == *(longlong *)(param_2 + 0x288)) goto LAB_142869899;
    }
    lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142869899:
    FUN_142868950(param_1,lVar3);
    *(uint *)(param_2 + 0x210) = *(uint *)(param_2 + 0x210) & 0xfffffffe;
  }
  return;
}



// FUNCTION 1428698c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
      FUN_142886bb0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142869970 FUN_142869970 body=4106 status=ok
// SIG undefined FUN_142869970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142869970(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  undefined2 *puVar18;
  uint uVar19;
  longlong **pplVar20;
  char cStackX_19;
  char cStackX_1a;
  char cStackX_1b;
  char cStackX_1c;
  undefined1 uStackX_1d;
  char cStackX_1e;
  char cStackX_1f;
  undefined1 auStack_5a8 [32];
  undefined4 local_588;
  longlong *local_578;
  uint local_570 [2];
  longlong *local_568;
  longlong **local_560;
  int local_558 [2];
  longlong *local_550;
  longlong *local_548;
  undefined8 local_540;
  longlong local_538;
  undefined8 local_530;
  longlong **local_528;
  longlong ***ppplStack_520;
  undefined8 local_518;
  longlong *local_510;
  code *local_508;
  longlong **pplStack_500;
  undefined4 local_4f8;
  undefined2 local_4f4;
  undefined1 local_4f2;
  undefined8 *local_4e8;
  uint local_4e0;
  int local_4dc;
  longlong **local_4d8;
  longlong ***local_4d0;
  longlong *local_4c8;
  longlong local_4c0;
  longlong *local_4b8;
  undefined **local_4a8 [5];
  byte local_47f;
  byte local_47e;
  ulonglong local_478;
  undefined8 local_418;
  longlong *local_410;
  longlong **local_408;
  undefined1 local_400;
  undefined4 local_3fc;
  longlong local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8;
  undefined1 local_3d8 [16];
  longlong local_3c8;
  undefined8 local_3c0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  longlong local_388;
  undefined4 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_344;
  longlong local_338;
  undefined4 local_330;
  undefined **local_328 [5];
  byte local_2ff;
  byte local_2fe;
  ulonglong local_2f8;
  undefined8 local_298;
  longlong *local_290;
  ulonglong local_288;
  undefined8 local_280;
  longlong local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined **local_1b8 [5];
  byte local_18f;
  byte local_18e;
  longlong *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  local_578 = param_2;
  local_568 = param_1;
  if (param_2 == (longlong *)0x0) {
LAB_142869a33:
    param_2 = (longlong *)0x0;
    local_4b8 = (longlong *)0x0;
  }
  else {
    local_4b8 = param_2;
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142869a33;
    local_268 = 0;
    local_260 = 0;
    FUN_140a4ca80(param_2,local_328,0);
    if (local_268 != 0) {
      FMemory::Free();
    }
  }
  plVar15 = (longlong *)0x0;
  local_4c0 = 0;
  local_510 = (longlong *)0x0;
  cStackX_1c = (char)((ulonglong)param_3 >> 0x20);
  pplVar20 = (longlong **)plVar15;
  if ((param_2 != (longlong *)0x0) && (cStackX_1c != '\0')) {
    pcVar1 = (code *)param_2[2];
    plVar8 = (longlong *)FName::FName(local_3d8,"RootComponent",1);
    lVar7 = *plVar8;
    if (((int)lVar7 == 0) && ((int)((ulonglong)lVar7 >> 0x20) == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      if (pcVar1 == (code *)0x0) {
        pplStack_500 = (longlong **)0x0;
      }
      else {
        pplStack_500 = *(longlong ***)(pcVar1 + 0x38);
      }
      local_4f8 = 0xffffffff;
      local_4f4 = 0x101;
      local_4f2 = 0;
      local_508 = pcVar1;
      FUN_140cbbe70(&local_508);
      pplVar20 = pplStack_500;
      while (pplStack_500 = pplVar20, pplVar20 != (longlong **)0x0) {
        local_510 = (longlong *)pplVar20;
        if (pplVar20[3] == (longlong *)lVar7) {
          lVar7 = (**(code **)((longlong)*pplVar20 + 0x378))
                            (pplVar20,(longlong)*(int *)((longlong)pplVar20 + 0x44) +
                                      (longlong)param_2);
          if (lVar7 != 0) {
            local_4c0 = lVar7;
            lVar10 = FUN_1429ff160();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) goto LAB_142869b0f;
          }
          local_4c0 = 0;
          goto LAB_142869b0f;
        }
        pplStack_500 = (longlong **)pplVar20[5];
        FUN_140cbbe70(&local_508);
        pplVar20 = pplStack_500;
      }
    }
    local_510 = (longlong *)0x0;
    pplVar20 = (longlong **)plVar15;
  }
LAB_142869b0f:
  plVar13 = local_568;
  plVar8 = local_578;
  iVar17 = 0;
  local_4e8 = (undefined8 *)0x0;
  local_570[0] = 0;
  local_4dc = 0;
  local_378 = 0;
  local_370 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0xffffffff;
  local_344 = 0;
  local_338 = 0;
  local_330 = 0;
  local_560 = (longlong **)0x0;
  FArchive::FArchive(local_4a8);
  local_418 = 0;
  local_4a8[0] = &PTR_FUN_143f4a100;
  local_410 = &local_3f8;
  local_408 = local_560;
  FArchive::SetIsSaving(local_4a8,1);
  FArchive::SetIsPersistent(local_4a8,0);
  for (lVar7 = plVar13[2]; (lVar7 != 0 && ((*(byte *)(lVar7 + 0xb4) & 0x80) == 0));
      lVar7 = *(longlong *)(lVar7 + 0x30)) {
  }
  for (lVar10 = plVar8[2]; (lVar10 != 0 && ((*(byte *)(lVar10 + 0xb4) & 0x80) == 0));
      lVar10 = *(longlong *)(lVar10 + 0x30)) {
  }
  local_400 = lVar7 == lVar10;
  local_3fc = 0;
  local_3f8 = 0;
  local_4a8[0] = &PTR__scalar_deleting_destructor__1451df4e0;
  uStackX_1d = (undefined1)((ulonglong)param_3 >> 0x28);
  cStackX_19 = (char)((ulonglong)param_3 >> 8);
  local_3e8 = uStackX_1d;
  if (cStackX_19 == '\0') {
    iVar17 = 0x40;
  }
  local_3f0 = 0;
  local_47e = local_47e & 0xfd | 2;
  cStackX_1b = (char)((ulonglong)param_3 >> 0x18);
  local_47f = local_47f & 0x9f | (byte)iVar17 | 0x20;
  local_4d8 = (longlong **)(ulonglong)(-(uint)(cStackX_1b != '\0') & 0x8000000);
  local_478 = local_478 | (ulonglong)local_4d8 | 0x2000000000000000;
  local_558[0] = iVar17;
  (**(code **)(*plVar13 + 0xa8))(plVar13,local_4a8);
  local_548 = (longlong *)0x0;
  local_540 = 0;
  UObject::CollectDefaultSubobjects(local_568,&local_548,1);
  local_4c8 = (longlong *)0x0;
  local_550 = (longlong *)
              ((ulonglong)((longlong)(local_548 + (int)local_540) + (7 - (longlong)local_548)) >> 3)
  ;
  if (local_548 + (int)local_540 < local_548) {
    local_550 = plVar15;
  }
  plVar8 = plVar15;
  uVar19 = local_570[0];
  if (local_550 != (longlong *)0x0) {
    ppplStack_520 = (longlong ***)local_570;
    plVar13 = local_548;
    puVar14 = local_4e8;
    do {
      local_560 = (longlong **)*plVar13;
      plVar9 = (longlong *)FMemory::Malloc(0x18);
      iVar17 = (int)plVar8;
      local_4e0 = iVar17 + 1;
      if (local_4dc < (int)local_4e0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_4e8,plVar8);
        puVar14 = local_4e8;
      }
      uVar19 = local_4e0;
      pplVar20 = local_560;
      plVar8 = (longlong *)(ulonglong)local_4e0;
      puVar14[iVar17] = plVar9;
      plVar16 = plVar15;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = 0;
        plVar9[1] = 0;
        plVar16 = plVar9;
      }
      local_570[0] = local_4e0 - 1;
      plVar16[2] = (longlong)local_560;
      local_528 = (longlong **)UObjectBaseUtility::GetPathName(local_560,&local_508,local_568);
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_&&,int_&&>_>(&local_378,&local_518,&local_528,0);
      if (local_508 != (code *)0x0) {
        FMemory::Free();
      }
      FArchive::FArchive(local_328);
      local_298 = 0;
      local_328[0] = &PTR_FUN_143f4a100;
      local_288 = 0;
      local_290 = plVar16;
      FArchive::SetIsSaving(local_328,1);
      FArchive::SetIsPersistent(local_328,0);
      local_2fe = local_2fe | 2;
      local_328[0] = &PTR_FUN_144f51198;
      local_2ff = local_2ff & 0xbf | (byte)local_558[0] | 0x20;
      local_2f8 = local_2f8 | (ulonglong)local_4d8;
      (*(code *)(*pplVar20)[0x15])(pplVar20);
      FArchive::~FArchive(local_328);
      plVar13 = plVar13 + 1;
      local_4c8 = (longlong *)((longlong)local_4c8 + 1);
      pplVar20 = (longlong **)local_510;
    } while (local_4c8 != local_550);
  }
  local_570[0] = uVar19;
  if (local_548 != (longlong *)0x0) {
    FMemory::Free(local_548);
  }
  local_528 = &local_568;
  local_3c8 = 0;
  ppplStack_520 = (longlong ***)&local_578;
  local_3c0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0xffffffff;
  local_394 = 0;
  local_388 = 0;
  local_380 = 0;
  TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
            (&local_3c8,&local_518,&local_528,0);
  local_4d8 = (longlong **)FUN_14178ca30(local_578);
  local_550 = (longlong *)FUN_14178ca30(local_568);
  local_528 = &local_550;
  ppplStack_520 = &local_4d8;
  TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>(&local_3c8,&local_518,&local_528,0)
  ;
  cStackX_1a = (char)((ulonglong)param_3 >> 0x10);
  if (cStackX_1a != '\0') {
    local_4d8 = (longlong **)local_578[2];
    local_550 = (longlong *)local_568[2];
    local_528 = &local_550;
    ppplStack_520 = &local_4d8;
    TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
              (&local_3c8,&local_518,&local_528,0);
  }
  plVar13 = (longlong *)local_578[2];
  pplVar11 = (longlong **)plVar13[0x1f];
  if (pplVar11 == (longlong **)0x0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    pplVar11 = (longlong **)plVar13[0x1f];
  }
  plVar13 = (longlong *)local_568[2];
  plVar9 = (longlong *)plVar13[0x1f];
  local_4d8 = pplVar11;
  if (plVar9 == (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    plVar9 = (longlong *)plVar13[0x1f];
  }
  local_528 = &local_550;
  ppplStack_520 = &local_4d8;
  local_550 = plVar9;
  TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>(&local_3c8,&local_518,&local_528,0)
  ;
  local_538 = 0;
  local_530 = 0;
  local_548 = (longlong *)0x0;
  local_540 = 0;
  UObject::CollectDefaultSubobjects(local_578,&local_538,1);
  puVar14 = local_4e8;
  plVar13 = plVar15;
  plVar9 = plVar15;
  if (0 < (int)local_530) {
    do {
      local_560 = *(longlong ***)(local_538 + (longlong)plVar13);
      uVar12 = UObjectBaseUtility::GetPathName(local_560,&local_508,local_578);
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(&local_378,local_558,uVar12);
      if ((local_558[0] == -1) ||
         (lVar7 = (longlong)local_558[0] * 0x20 + local_378, plVar8 = (longlong *)(lVar7 + 0x10),
         lVar7 == 0)) {
        plVar8 = plVar15;
      }
      if (local_508 != (code *)0x0) {
        FMemory::Free();
      }
      if (plVar8 == (longlong *)0x0) {
        for (plVar8 = local_560[4]; (plVar8 != (longlong *)0x0 && (plVar8 != local_578));
            plVar8 = (longlong *)plVar8[4]) {
        }
      }
      else {
        ppplStack_520 = &local_560;
        local_528 = (longlong **)(puVar14[(int)*plVar8] + 0x10);
        TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                  (&local_3c8,&local_518,&local_528,0);
        if (((char)param_3 != '\0') && (*(longlong *)(local_568[2] + 0x30) != 0)) {
          local_550 = (longlong *)
                      UClass::GetDefaultSubobjectByName
                                (*(longlong *)(local_568[2] + 0x30),local_560[3]);
          if (local_550 != (longlong *)0x0) {
            local_4d8 = &local_550;
            local_4d0 = &local_560;
            TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                      (&local_3c8,&local_4c8,&local_4d8,0);
          }
        }
      }
      uVar19 = (int)plVar9 + 1;
      plVar13 = plVar13 + 1;
      plVar9 = (longlong *)(ulonglong)uVar19;
    } while ((int)uVar19 < (int)local_530);
    plVar8 = (longlong *)(ulonglong)local_570[0];
  }
  plVar13 = local_578;
  iVar17 = (int)local_530;
  if (0 < (int)local_3f0) {
    FArchive::FArchive(local_328);
    local_290 = &local_3f8;
    local_298 = 0;
    local_328[0] = &PTR_FUN_144f50fa8;
    FArchive::SetIsLoading(local_328,1);
    FArchive::SetIsPersistent(local_328,0);
    local_2ff = local_2ff | 0x20;
    local_2fe = local_2fe | 2;
    local_288 = CONCAT71(local_288._1_7_,local_400);
    local_328[0] = &PTR_FUN_1451df6d0;
    local_2f8 = local_2f8 | 0x2000000000000000;
    local_288 = local_288 & 0xffffffff;
    (**(code **)(*plVar13 + 0xa8))(plVar13,local_328);
    FArchive::~FArchive(local_328);
    iVar17 = (int)local_530;
  }
  puVar14 = local_4e8;
  plVar13 = plVar15;
  plVar9 = plVar15;
  if (0 < iVar17) {
    do {
      plVar8 = *(longlong **)(local_538 + (longlong)plVar13);
      uVar12 = UObjectBaseUtility::GetPathName(plVar8,&local_508,local_578);
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(&local_378,local_558,uVar12);
      if ((local_558[0] == -1) ||
         (lVar7 = (longlong)local_558[0] * 0x20 + local_378, plVar16 = (longlong *)(lVar7 + 0x10),
         lVar7 == 0)) {
        plVar16 = plVar15;
      }
      if (local_508 != (code *)0x0) {
        FMemory::Free();
      }
      if (plVar16 != (longlong *)0x0) {
        plVar16 = (longlong *)puVar14[(int)*plVar16];
        FArchive::FArchive(local_328);
        local_298 = 0;
        local_328[0] = &PTR_FUN_144f50fa8;
        local_290 = plVar16;
        FArchive::SetIsLoading(local_328,1);
        FArchive::SetIsPersistent(local_328,0);
        local_2fe = local_2fe | 2;
        local_2ff = local_2ff | 0x20;
        (**(code **)(*plVar8 + 0xa8))(plVar8,local_328);
        FUN_1424ebd80(plVar16[2],plVar8,&local_3c8,&local_548);
        FArchive::~FArchive(local_328);
      }
      uVar19 = (int)plVar9 + 1;
      plVar13 = plVar13 + 1;
      plVar9 = (longlong *)(ulonglong)uVar19;
    } while ((int)uVar19 < (int)local_530);
    plVar8 = (longlong *)(ulonglong)local_570[0];
    pplVar20 = (longlong **)local_510;
    iVar17 = (int)local_530;
  }
  iVar4 = (int)local_540;
  lVar7 = (longlong)(int)local_540;
  if ((int)local_540 != 0) {
    if (local_530._4_4_ < iVar17 + (int)local_540) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_538);
      iVar17 = (int)local_530;
    }
    _guard_xfg_dispatch_icall_nop((void *)(local_538 + (longlong)iVar17 * 8),local_548,lVar7 << 3);
    local_530 = CONCAT44(local_530._4_4_,(int)local_530 + iVar4);
  }
  if (local_548 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1424ebd80(local_568,local_578,&local_3c8,&local_538);
  local_550 = &local_3c8;
  ppplStack_520 = (longlong ***)&local_550;
  local_588 = 0;
  local_528 = (longlong **)
              UE4Function_Private::
              TFunctionRefCaller<<lambda_3f971c56d456cce98c575f5d85db8499>,void___cdecl(UObject_*)>
              ::Call;
  local_508 = UE4Function_Private::
              TFunctionRefCaller<<lambda_3f971c56d456cce98c575f5d85db8499>,void___cdecl(UObject_*)>
              ::Call;
  pplStack_500 = (longlong **)ppplStack_520;
  FUN_1417a4830(local_568,&local_508,1,0);
  cStackX_1f = (char)((ulonglong)param_3 >> 0x38);
  if (cStackX_1f != '\0') {
    uVar12 = UObjectBaseUtility::GetOutermost(local_578);
    plVar13 = local_578;
    FArchive::FArchive(local_1b8);
    local_18f = local_18f & 0x5f;
    local_60 = &local_3c8;
    local_18e = local_18e | 0x19;
    local_1b8[0] = &PTR__scalar_deleting_destructor__1451df8c0;
    local_118 = 0;
    local_110 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0xffffffff;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_128 = plVar13;
    local_120 = 0;
    local_68 = 0;
    local_58 = uVar12;
    FArchiveReplaceObjectRef<UObject>::SerializeSearchObject(local_1b8);
    plVar13 = plVar15;
    plVar9 = plVar15;
    if (0 < (int)local_530) {
      do {
        uVar2 = *(undefined8 *)(local_538 + (longlong)plVar13);
        FArchive::FArchive(local_328);
        local_2ff = local_2ff & 0x5f;
        local_1d0 = &local_3c8;
        local_2fe = local_2fe | 0x19;
        local_288 = 0;
        local_280 = 0;
        local_268 = 0;
        local_260 = 0;
        local_258 = 0xffffffff;
        local_254 = 0;
        local_248 = 0;
        local_240 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        local_220 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0xffffffff;
        local_1f4 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_290 = (longlong *)((ulonglong)local_290 & 0xffffffff00000000);
        local_1d8 = 0;
        local_328[0] = &PTR__scalar_deleting_destructor__1451df8c0;
        local_298 = uVar2;
        local_1c8 = uVar12;
        FArchiveReplaceObjectRef<UObject>::SerializeSearchObject(local_328);
        FArchiveReplaceObjectRefBase::~FArchiveReplaceObjectRefBase(local_328);
        uVar19 = (int)plVar9 + 1;
        plVar13 = plVar13 + 1;
        plVar9 = (longlong *)(ulonglong)uVar19;
        pplVar20 = (longlong **)local_510;
      } while ((int)uVar19 < (int)local_530);
    }
    FArchiveReplaceObjectRefBase::~FArchiveReplaceObjectRefBase(local_1b8);
  }
  plVar13 = local_4b8;
  if ((local_4b8 != (longlong *)0x0) && (cStackX_1c != '\0')) {
    if (pplVar20 != (longlong **)0x0) {
      (**(code **)((longlong)*pplVar20 + 0x380))
                (pplVar20,(longlong)*(int *)((longlong)pplVar20 + 0x44) + (longlong)local_4b8,
                 local_4c0);
    }
    FUN_14223bbb0(plVar13);
  }
  lVar7 = DAT_146b17758;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    plVar13 = (longlong *)0x1;
    if (DVar6 != DAT_1468c21c0) goto LAB_14286a761;
  }
  plVar13 = plVar15;
LAB_14286a761:
  if (*(int *)(lVar7 + (longlong)plVar13 * 4) != 0) {
    puVar14 = (undefined8 *)UObjectBaseUtility::GetFullName(local_568,&local_508,0);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*puVar14;
    }
    FString::PrintfImpl(&local_548,L"CopyPropertiesForUnrelatedObjects: Old (%s)",puVar18);
    plVar15 = (longlong *)&DAT_143f3eda8;
    if ((int)local_540 != 0) {
      plVar15 = local_548;
    }
    FUN_1428a8c10(plVar15,local_568);
    if (local_548 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_508 != (code *)0x0) {
      FMemory::Free();
    }
    puVar14 = (undefined8 *)UObjectBaseUtility::GetFullName(local_578,&local_508,0);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*puVar14;
    }
    FString::PrintfImpl(&local_548,L"CopyPropertiesForUnrelatedObjects: New (%s)",puVar18);
    plVar15 = (longlong *)&DAT_143f3eda8;
    if ((int)local_540 != 0) {
      plVar15 = local_548;
    }
    FUN_1428a8c10(plVar15,local_578);
    if (local_548 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_508 != (code *)0x0) {
      FMemory::Free();
    }
  }
  cStackX_1e = (char)((ulonglong)param_3 >> 0x30);
  if ((cStackX_1e != '\0') && (DAT_146b17150 != (longlong *)0x0)) {
    (**(code **)(*DAT_146b17150 + 0x380))(DAT_146b17150,&local_3c8);
  }
  if (local_538 != 0) {
    FMemory::Free();
  }
  local_380 = 0;
  if (local_388 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_3c8);
  if (local_3f8 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_4a8);
  local_330 = 0;
  if (local_338 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_378,0);
  if (local_358 != 0) {
    FMemory::Free();
  }
  if (local_378 != 0) {
    FMemory::Free();
  }
  uVar19 = (uint)plVar8;
  puVar14 = local_4e8;
  while (uVar19 != 0) {
    plVar15 = (longlong *)*puVar14;
    if (*plVar15 != 0) {
      FMemory::Free(*plVar15);
      plVar15 = (longlong *)*puVar14;
    }
    FMemory::Free(plVar15);
    puVar14 = puVar14 + 1;
    uVar19 = (int)plVar8 - 1;
    plVar8 = (longlong *)(ulonglong)uVar19;
  }
  local_4e0 = 0;
  if (local_4dc != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_4e8,0);
  }
  if (local_4e8 != (undefined8 *)0x0) {
    FMemory::Free(local_4e8);
  }
  return;
}



// FUNCTION 14286a980 FUN_14286a980 body=74 status=ok
// SIG undefined FUN_14286a980(void)

void FUN_14286a980(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451dfbc0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1451dfc08;
  }
  return;
}



// FUNCTION 14286a9d0 FUN_14286a9d0 body=91 status=ok
// SIG undefined FUN_14286a9d0(void)

void FUN_14286a9d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451dfb00;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1451dfb48;
  }
  return;
}



// FUNCTION 14286aa30 FUN_14286aa30 body=56 status=ok
// SIG undefined FUN_14286aa30(void)

void FUN_14286aa30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451df198;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 14286aa70 FUN_14286aa70 body=227 status=ok
// SIG undefined FUN_14286aa70(void)

void FUN_14286aa70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  FUN_142486f40(0);
  lVar2 = DAT_146b17150;
  lVar6 = 0;
  if (*(longlong *)(DAT_146b17150 + 0x228) != 0) {
    lVar3 = FUN_142948d60();
    for (lVar1 = *(longlong *)(lVar2 + 0x228);
        (lVar6 = 0, lVar1 != 0 && (lVar6 = *(longlong *)(lVar2 + 0x228), lVar1 != lVar3));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar5 = (longlong *)FUN_1417985e0(lVar6,uVar4,0,0,0,0,0,0,0);
  *(longlong **)(param_1 + 0x248) = plVar5;
  (**(code **)(*plVar5 + 0x2d0))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00014286ab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x248) + 0x2a8))(*(longlong **)(param_1 + 0x248),0);
  return;
}



// FUNCTION 14286ab60 FUN_14286ab60 body=117 status=ok
// SIG undefined FUN_14286ab60(void)

void FUN_14286ab60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x1c8) == param_2) goto LAB_14286abb8;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_14286abb8:
  FUN_14286ac60(param_1,lVar3,param_3,param_4);
  return;
}



// FUNCTION 14286abe0 FUN_14286abe0 body=117 status=ok
// SIG undefined FUN_14286abe0(void)

void FUN_14286abe0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_14286ac38;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_14286ac38:
  FUN_14286ac60(param_1,lVar3,param_3,param_4);
  return;
}



// FUNCTION 14286ac60 FUN_14286ac60 body=200 status=ok
// SIG undefined FUN_14286ac60(void)

undefined8 FUN_14286ac60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  if (0 < *(int *)(param_2 + 0x250)) {
    plVar1 = *(longlong **)(param_2 + 0x248);
    lVar3 = lVar2;
    do {
      if ((*plVar1 != 0) && (*(longlong *)(*plVar1 + 0x120) == param_3)) {
        return 0;
      }
      lVar3 = lVar3 + 1;
      plVar1 = plVar1 + 2;
    } while (lVar3 < *(int *)(param_2 + 0x250));
  }
  if (0 < *(int *)(param_2 + 0x298)) {
    plVar1 = *(longlong **)(param_2 + 0x290);
    do {
      if ((*plVar1 != 0) && (*(longlong *)(*plVar1 + 0x120) == param_3)) {
        return 0;
      }
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 2;
    } while (lVar2 < *(int *)(param_2 + 0x298));
  }
  lVar2 = FUN_14286ada0(param_1,param_2,param_4);
  if (lVar2 == 0) {
    return 0;
  }
  FUN_1425d1610(lVar2,param_3);
  return 1;
}



// FUNCTION 14286ad30 FUN_14286ad30 body=107 status=ok
// SIG undefined FUN_14286ad30(void)

void FUN_14286ad30(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_14286ad86;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_14286ad86:
  FUN_14286ada0(param_1,lVar3,param_3);
  return;
}



// FUNCTION 14286ada0 FUN_14286ada0 body=966 status=ok
// SIG undefined FUN_14286ada0(void)

longlong FUN_14286ada0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  byte *pbVar12;
  longlong local_58 [2];
  longlong local_48 [2];
  
  lVar6 = 0;
  plVar11 = *(longlong **)(param_1 + 0xbd0);
  plVar5 = plVar11 + (longlong)*(int *)(param_1 + 0xbd8) * 5;
  while( true ) {
    if (plVar11 == plVar5) {
      return 0;
    }
    if (*plVar11 == param_3) break;
    plVar11 = plVar11 + 5;
  }
  puVar3 = (undefined8 *)FName::ToString(plVar11 + 1,local_58);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar3;
  }
  uVar4 = FUN_1429c3150();
  plVar5 = (longlong *)FUN_141799830(uVar4,0,puVar10,0,0x2000,0);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (plVar5 != (longlong *)0x0) {
    plVar8 = (longlong *)plVar5[0x1f];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      plVar8 = (longlong *)plVar5[0x1f];
    }
    cVar2 = (**(code **)(*plVar8 + 0x278))();
    if (cVar2 != '\0') goto LAB_14286aeda;
  }
  puVar3 = (undefined8 *)FName::ToString(plVar11 + 2,local_48);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar3;
  }
  uVar4 = FUN_1429c3150();
  plVar5 = (longlong *)FUN_141799830(uVar4,0,puVar10,0,0,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
LAB_14286aeda:
  if (plVar5 != (longlong *)0x0) {
    uVar4 = GetTransientPackage();
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar6 = FUN_1417985e0(plVar5,uVar4,0,0,0,0,0,0,0);
    FUN_1425d1610(lVar6,*(undefined8 *)(lVar6 + 0x18));
    pbVar9 = (byte *)plVar11[3];
    pbVar12 = pbVar9 + (longlong)(int)plVar11[4] * 0x10;
    for (; pbVar9 != pbVar12; pbVar9 = pbVar9 + 0x10) {
      if (*pbVar9 < 8) {
        puVar3 = (undefined8 *)FName::ToString(pbVar9 + 8,local_48);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar4 = UChannel::GetPrivateStaticClass();
        lVar7 = FUN_141799830(uVar4,0,puVar10,0,0x2000,0);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (lVar7 != 0) {
          *(longlong *)(lVar6 + 0x128 + (ulonglong)*pbVar9 * 8) = lVar7;
        }
      }
    }
    if (param_3 == 0x11a) {
      pbVar9 = *(byte **)(param_1 + 0xbe0);
      pbVar12 = pbVar9 + (longlong)*(int *)(param_1 + 0xbe8) * 0x10;
      for (; pbVar9 != pbVar12; pbVar9 = pbVar9 + 0x10) {
        if ((*(longlong *)(lVar6 + 0x128 + (ulonglong)*pbVar9 * 8) == 0) && (*pbVar9 < 8)) {
          puVar3 = (undefined8 *)FName::ToString(pbVar9 + 8,local_48);
          if (*(int *)(puVar3 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar3;
          }
          uVar4 = UChannel::GetPrivateStaticClass();
          lVar7 = FUN_141799830(uVar4,0,puVar10,0,0x2000,0);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (lVar7 != 0) {
            *(longlong *)(lVar6 + 0x128 + (ulonglong)*pbVar9 * 8) = lVar7;
          }
        }
      }
    }
    if (param_3 == 0x11c) {
      iVar1 = *(int *)(param_2 + 0x298);
      *(int *)(param_2 + 0x298) = iVar1 + 1;
      if (*(int *)(param_2 + 0x29c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x290,iVar1);
      }
      plVar5 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x290));
    }
    else {
      iVar1 = *(int *)(param_2 + 0x250);
      *(int *)(param_2 + 0x250) = iVar1 + 1;
      if (*(int *)(param_2 + 0x254) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x248,iVar1);
      }
      plVar5 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x248));
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = lVar6;
      plVar5[1] = (longlong)plVar11;
    }
  }
  return lVar6;
}



// FUNCTION 14286b170 FUN_14286b170 body=223 status=ok
// SIG undefined FUN_14286b170(void)

undefined1 * FUN_14286b170(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [8];
  undefined2 *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xc18);
  uVar3 = FMemory::Malloc(0x2a0,0);
  iVar2 = *(int *)(param_1 + 0xc20);
  *(int *)(param_1 + 0xc20) = iVar2 + 1;
  if (*(int *)(param_1 + 0xc24) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar3;
  if (*(longlong *)(*plVar1 + (longlong)iVar2 * 8) == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = (undefined1 *)FUN_142861840();
  }
  *puVar4 = param_2;
  *(int *)(param_1 + 0xc28) = *(int *)(param_1 + 0xc28) + 1;
  FString::PrintfImpl(&local_28,L"Context_%d");
  puVar6 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar6 = local_28;
  }
  puVar5 = (undefined8 *)FName::FName(local_res8,puVar6,1);
  *(undefined8 *)(puVar4 + 200) = *puVar5;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return puVar4;
}



// FUNCTION 14286b250 CreatePIEWorldByLoadingFromPackage body=576 status=ok
// SIG undefined CreatePIEWorldByLoadingFromPackage(void)

ulonglong `anonymous_namespace'::CreatePIEWorldByLoadingFromPackage
                    (byte *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  undefined2 *local_38;
  int local_30;
  
  UWorld::ConvertToPIEPackageName(&local_38,param_2,*(undefined4 *)(param_1 + 600));
  puVar11 = &DAT_143f3eda8;
  puVar6 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar6 = local_38;
  }
  FName::FName(&local_res10,puVar6,1);
  uVar7 = 0;
  bVar1 = *param_1;
  if (DAT_1465356b8 != DAT_1465356e4) {
    puVar3 = DAT_1465356f0;
    if (DAT_1465356f0 == (undefined *)0x0) {
      puVar3 = &DAT_1465356e8;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10)
                              & (longlong)DAT_1465356f8 - 1U) * 4);
    while (iVar2 != -1) {
      lVar4 = (longlong)iVar2 * 0x18;
      if (*(longlong *)(lVar4 + DAT_1465356b0) == local_res10) {
        if ((iVar2 != -1) && (lVar4 = lVar4 + DAT_1465356b0, lVar4 != 0)) goto LAB_14286b366;
        break;
      }
      iVar2 = *(int *)(lVar4 + 0x10 + DAT_1465356b0);
    }
  }
  local_res18 = &local_res10;
  FUN_14253ceb0(&DAT_1465356b0,local_res8,&local_res18,0);
  lVar4 = DAT_1465356b0 + (longlong)local_res8[0] * 0x18;
LAB_14286b366:
  *(uint *)(lVar4 + 8) = (uint)bVar1;
  FSoftObjectPath::AddPIEPackageName(local_res10);
  puVar6 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar6 = local_38;
  }
  lVar4 = FUN_1417894a0(0,puVar6);
  uVar8 = 0;
  if ((lVar4 != 0) && (uVar8 = 0, *param_1 == 3)) {
    *(uint *)(lVar4 + 0x50) = *(uint *)(lVar4 + 0x50) | 0x100000;
    uVar8 = 0x80000;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar11 = (undefined2 *)*param_2;
  }
  lVar4 = LoadPackage(lVar4,puVar11,uVar8,0);
  *param_3 = lVar4;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (&DAT_1465356b0,local_res10);
  uVar5 = uVar7;
  if (*param_3 != 0) {
    uVar5 = UWorld::FindWorldInPackage();
    if ((uVar5 == 0) && (uVar5 = FUN_1428cb040(*param_3,0), uVar5 != 0)) {
      lVar4 = UObjectBaseUtility::GetOutermost(uVar5);
      *param_3 = lVar4;
    }
    *(undefined4 *)(*param_3 + 0x54) = *(undefined4 *)(param_1 + 600);
    *(uint *)(*param_3 + 0x50) = *(uint *)(*param_3 + 0x50) | 0x100000;
    puVar9 = *(undefined8 **)(uVar5 + 0x88);
    uVar10 = (longlong)*(int *)(uVar5 + 0x90) & 0x1fffffffffffffff;
    if (puVar9 + *(int *)(uVar5 + 0x90) < puVar9) {
      uVar10 = uVar7;
    }
    if (uVar10 != 0) {
      do {
        ULevelStreaming::RenameForPIE(*puVar9,*(undefined4 *)(param_1 + 600));
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar7 != uVar10);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 14286b490 FUN_14286b490 body=472 status=ok
// SIG undefined FUN_14286b490(void)

undefined8 * FUN_14286b490(longlong *param_1)

{
  uint uVar1;
  undefined4 extraout_EAX;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  undefined1 extraout_var [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  iVar4 = DAT_1464c9c14;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x1c0);
  }
  if (iVar4 < 1) {
    if (*(byte *)((longlong)param_1 + 0xe2) == 0) {
      uVar1 = FUN_14046e310(*(undefined1 *)((longlong)param_1 + 0xe1));
    }
    else {
      uVar1 = (uint)*(byte *)((longlong)param_1 + 0xe2);
    }
    if (((DAT_1464c9c5a == '\0') && (uVar1 - 9 < 2)) || (uVar1 == 0x13)) {
      *(undefined1 *)((longlong)param_1 + 0xe2) = 2;
    }
  }
  if ((*(byte *)(param_1 + 0x1c) & 4) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)((longlong)param_1 + 0xc4);
    if (*(int *)((longlong)param_1 + 0xc4) <= (int)param_1[0x18]) {
      iVar4 = (int)param_1[0x18];
    }
    fVar5 = _guard_xfg_dispatch_icall_nop((float)iVar4);
    auVar6._0_4_ = fVar5 * 1.442695;
    auVar6._4_12_ = extraout_var;
    iVar4 = (int)auVar6._0_4_;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar6._0_4_)) {
      auVar8._0_8_ = auVar6._0_8_;
      auVar8._8_4_ = extraout_var._0_4_;
      auVar8._12_4_ = extraout_var._0_4_;
      auVar7._8_8_ = auVar8._8_8_;
      auVar7._4_4_ = auVar6._0_4_;
      auVar7._0_4_ = auVar6._0_4_;
      uVar1 = movmskps(extraout_EAX,auVar7);
      auVar6 = ZEXT416((uint)(float)(int)(iVar4 + (uVar1 & 1 ^ 1)));
    }
    iVar4 = (int)auVar6._0_4_;
  }
  *(int *)((longlong)param_1 + 0xe4) = iVar4;
  puVar3 = (undefined8 *)operator_new(0xd0);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar3 + 1) = 4;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0xc7efffffe0000000;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)((longlong)puVar3 + 100) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x66) = 0;
  puVar3[0xe] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  *puVar3 = &PTR__scalar_deleting_destructor__1451dd9d0;
  puVar3[0xd] = &PTR_LAB_1451dda40;
  puVar3[0xf] = &PTR_FUN_1451dda80;
  puVar3[0x14] = param_1;
  puVar3[0x15] = 0;
  lVar2 = param_1[0x1a];
  puVar3[0x16] = param_1[0x19];
  puVar3[0x17] = lVar2;
  if (*(byte *)((longlong)param_1 + 0xe2) == 0) {
    uVar1 = FUN_14046e310(*(undefined1 *)((longlong)param_1 + 0xe1));
  }
  else {
    uVar1 = (uint)*(byte *)((longlong)param_1 + 0xe2);
  }
  *(uint *)(puVar3 + 0x18) = uVar1;
  *(int *)((longlong)puVar3 + 0xc4) = (int)param_1[0x18];
  *(undefined4 *)(puVar3 + 0x19) = *(undefined4 *)((longlong)param_1 + 0xc4);
  return puVar3;
}



// FUNCTION 14286b670 FUN_14286b670 body=289 status=ok
// SIG undefined FUN_14286b670(void)

undefined8 * FUN_14286b670(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  iVar1 = DAT_1464c9c14;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x1c0);
  }
  if (iVar1 < 1) {
    if (*(byte *)((longlong)param_1 + 0xd5) == 0) {
      uVar2 = FUN_14046e310(*(undefined1 *)((longlong)param_1 + 0xd4));
    }
    else {
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0xd5);
    }
    if (((DAT_1464c9c5a == '\0') && (uVar2 - 9 < 2)) || (uVar2 == 0x13)) {
      *(undefined1 *)((longlong)param_1 + 0xd5) = 2;
    }
  }
  puVar4 = (undefined8 *)operator_new();
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar4 + 1) = 4;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0xc7efffffe0000000;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *(undefined2 *)((longlong)puVar4 + 100) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x66) = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *(undefined1 *)(puVar4 + 0x13) = 0;
  *puVar4 = &PTR__scalar_deleting_destructor__1451dda88;
  puVar4[0xd] = &PTR_LAB_1451ddb00;
  puVar4[0xf] = &PTR_FUN_1451ddb40;
  puVar4[0x14] = param_1;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  return puVar4;
}



// FUNCTION 14286b7a0 FUN_14286b7a0 body=332 status=ok
// SIG undefined FUN_14286b7a0(void)

undefined8 * FUN_14286b7a0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451dfab0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14286b8f0 FUN_14286b8f0 body=332 status=ok
// SIG undefined FUN_14286b8f0(void)

undefined8 * FUN_14286b8f0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451dfb90;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14286ba40 FUN_14286ba40 body=332 status=ok
// SIG undefined FUN_14286ba40(void)

undefined8 * FUN_14286ba40(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451dfac0;
  *(undefined1 *)(plVar6 + 6) = 0;
  plVar6[7] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14286bb90 FUN_14286bb90 body=332 status=ok
// SIG undefined FUN_14286bb90(void)

undefined8 * FUN_14286bb90(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451dfaf0;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14286bce0 FUN_14286bce0 body=332 status=ok
// SIG undefined FUN_14286bce0(void)

undefined8 * FUN_14286bce0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451dfbb0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14286be30 FUN_14286be30 body=332 status=ok
// SIG undefined FUN_14286be30(void)

undefined8 * FUN_14286be30(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451dfae0;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14286bf80 FUN_14286bf80 body=332 status=ok
// SIG undefined FUN_14286bf80(void)

undefined8 * FUN_14286bf80(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451dfba0;
  *(undefined1 *)((longlong)plVar6 + 0x4c) = 0;
  plVar6[10] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14286c0d0 FUN_14286c0d0 body=372 status=ok
// SIG undefined FUN_14286c0d0(void)

undefined8 * FUN_14286c0d0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_1451de5d0;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[5] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 14286c250 FUN_14286c250 body=372 status=ok
// SIG undefined FUN_14286c250(void)

undefined8 * FUN_14286c250(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_1451de5e0;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[5] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 14286c3d0 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FTickFunctionTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_1451de5c0;
  *(undefined1 *)(plVar8 + 7) = 0;
  plVar8[8] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 14286c550 FUN_14286c550 body=1083 status=ok
// SIG undefined FUN_14286c550(void)

void FUN_14286c550(wchar_t **param_1)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  wchar_t **ppwVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  uint uVar11;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  
  pwVar10 = (wchar_t *)0x0;
  uVar11 = 2;
  iVar8 = 0;
  local_58 = (wchar_t *)0x0;
  local_4c = 0;
  if (DAT_1468c2180 == 0) {
    if (DAT_1468c2184 == '\0') {
      iVar4 = *(int *)(param_1 + 1);
      if (iVar4 < 2) {
        local_48 = (wchar_t *)0x0;
        local_40 = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        FGenericPlatformString::Memcpy(local_48,L"ScreenShot",0x16);
        ppwVar6 = &local_48;
        bVar3 = true;
        bVar2 = false;
      }
      else {
        pwVar10 = *param_1;
        local_38 = (wchar_t *)0x0;
        local_30 = CONCAT44(local_30._4_4_,iVar4);
        if (iVar4 == 0) {
          local_30 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_38,pwVar10,(longlong)iVar4 * 2);
        }
        ppwVar6 = &local_38;
        bVar3 = false;
        bVar2 = true;
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_58 = *ppwVar6;
      *ppwVar6 = (wchar_t *)0x0;
      local_50 = *(int *)(ppwVar6 + 1);
      local_4c = *(int *)((longlong)ppwVar6 + 0xc);
      ppwVar6[1] = (wchar_t *)0x0;
      if ((bVar2) && (local_38 != (wchar_t *)0x0)) {
        FMemory::Free();
      }
      pwVar10 = local_48;
      if (!bVar3) goto LAB_14286c801;
    }
    else {
      lVar9 = FUN_1424f49c0();
      local_38 = (wchar_t *)0x0;
      iVar4 = *(int *)(lVar9 + 0x50);
      pvVar1 = *(void **)(lVar9 + 0x48);
      local_30 = CONCAT44(local_30._4_4_,iVar4);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4,0);
        pwVar10 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,pvVar1,(longlong)iVar4 * 2);
        iVar4 = (int)local_30;
      }
      if (iVar4 < 2) {
        local_38 = (wchar_t *)0x0;
        local_30 = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        FGenericPlatformString::Memcpy(local_38,L"HighresScreenshot",0x24);
        ppwVar6 = &local_38;
        uVar7 = 1;
      }
      else {
        local_48 = (wchar_t *)0x0;
        local_40 = CONCAT44(local_40._4_4_,iVar4);
        if (iVar4 == 0) {
          local_40 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_48,pwVar10,(longlong)iVar4 * 2);
        }
        ppwVar6 = &local_48;
        uVar7 = uVar11;
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_58 = *ppwVar6;
      *ppwVar6 = (wchar_t *)0x0;
      local_50 = *(int *)(ppwVar6 + 1);
      local_4c = *(int *)((longlong)ppwVar6 + 0xc);
      ppwVar6[1] = (wchar_t *)0x0;
      if (((uVar7 & 2) != 0) && (uVar7 = uVar7 & 0xfffffffd, local_48 != (wchar_t *)0x0)) {
        FMemory::Free();
      }
      if (((uVar7 & 1) != 0) && (local_38 != (wchar_t *)0x0)) {
        FMemory::Free();
      }
    }
    if (pwVar10 != (wchar_t *)0x0) {
      FMemory::Free(pwVar10);
    }
  }
  else {
    local_50 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0xb);
    local_50 = local_50 + 0xb;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    builtin_wcsncpy(local_58,L"MovieFrame",0xb);
    if (0 < DAT_1468c2180) {
      DAT_1468c2180 = DAT_1468c2180 + -1;
    }
  }
LAB_14286c801:
  FPaths::NormalizeFilename(&local_58);
  pwVar10 = local_58;
  if (param_1 != &local_58) {
    lVar9 = (longlong)local_50;
    *(int *)(param_1 + 1) = local_50;
    if ((local_50 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_50);
      _guard_xfg_dispatch_icall_nop(*param_1,pwVar10,lVar9 * 2);
    }
  }
  iVar4 = FUN_141592950(&local_58,&DAT_1451c91f4,1,0,0xffffffff);
  if (iVar4 == -1) {
    plVar5 = (longlong *)FUN_14292cb70();
    lVar9 = plVar5[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar9 = plVar5[0x1f];
    }
    if (local_50 != 0) {
      iVar8 = local_50 + -1;
    }
    if ((*(int *)(lVar9 + 0x890) != 0) || (iVar8 == -1)) {
      uVar11 = 1;
    }
    local_48 = (wchar_t *)0x0;
    iVar4 = *(int *)(lVar9 + 0x890);
    pvVar1 = *(void **)(lVar9 + 0x888);
    local_40 = CONCAT44(local_40._4_4_,iVar4);
    if ((iVar4 == 0) && (uVar11 + iVar8 == 0)) {
      local_40 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar4 + uVar11 + iVar8,0);
      _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)iVar4 * 2);
    }
    FString::PathAppend(&local_48,local_58,iVar8);
    if (param_1 == &local_48) {
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_1 = local_48;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_40._4_4_;
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14286c990 Deactivate body=30 status=ok
// SIG undefined Deactivate(void)

void UTimelineComponent::Deactivate(longlong param_1)

{
  FUN_142338f40();
  FUN_14288e3d0(param_1 + 0x30,0);
  return;
}



// FUNCTION 14286c9b0 FUN_14286c9b0 body=323 status=ok
// SIG undefined FUN_14286c9b0(void)

undefined8
FUN_14286c9b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 local_res10 [8];
  longlong *local_18;
  longlong *local_10;
  
  lVar4 = param_5;
  uVar9 = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_5 + 0xc)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_5,0);
  }
  if (0 < *(int *)(param_2 + 1)) {
    puVar6 = (undefined8 *)FName::FName(local_res10,"ImageWrapper",1);
    uVar3 = *puVar6;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FUN_141690010(uVar7,uVar3);
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_18,0,2,0);
    if (local_18 != (longlong *)0x0) {
      cVar5 = (**(code **)*local_18)(local_18,*param_2,*(undefined4 *)(param_2 + 1));
      if (cVar5 != '\0') {
        param_5 = 0;
        cVar5 = (**(code **)(*local_18 + 0x18))(local_18,1,8,&param_5);
        if (cVar5 != '\0') {
          TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(lVar4,param_5);
          uVar9 = 1;
        }
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_10 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
    return uVar9;
  }
  return 0;
}



// FUNCTION 14286cb00 DeferInvalidateHitProxy body=111 status=ok
// SIG undefined DeferInvalidateHitProxy(void)

void FViewport::DeferInvalidateHitProxy(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) & 0xfffffffd;
  plVar3 = *(longlong **)(param_1 + 0x88);
  for (iVar4 = *(int *)(param_1 + 0x90); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x88),0);
  }
  return;
}



// FUNCTION 14286cb70 NewProp_bHasRegisteredComponentTemplate_SetBit body=8 status=ok
// SIG undefined NewProp_bHasRegisteredComponentTemplate_SetBit(void)

void Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::
     NewProp_bHasRegisteredComponentTemplate_SetBit(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa2d) = 1;
  return;
}



// FUNCTION 14286cb80 FUN_14286cb80 body=86 status=ok
// SIG undefined FUN_14286cb80(void)

void FUN_14286cb80(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x1c8) == param_2) goto LAB_14286cbc6;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_14286cbc6:
  FUN_14286cc40(lVar3,param_3);
  return;
}



// FUNCTION 14286cbe0 FUN_14286cbe0 body=86 status=ok
// SIG undefined FUN_14286cbe0(void)

void FUN_14286cbe0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_14286cc26;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_14286cc26:
  FUN_14286cc40(lVar3,param_3);
  return;
}



// FUNCTION 14286cc40 FUN_14286cc40 body=469 status=ok
// SIG undefined FUN_14286cc40(void)

void FUN_14286cc40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x250)) {
    plVar1 = (longlong *)(param_1 + 0x248);
    plVar4 = (longlong *)*plVar1;
    uVar9 = uVar6;
    uVar10 = uVar6;
    do {
      plVar3 = (longlong *)*plVar4;
      iVar8 = (int)uVar9;
      if ((plVar3 != (longlong *)0x0) && (plVar3[0x24] == param_2)) {
        (**(code **)(*plVar3 + 0x380))(plVar3,0);
        (**(code **)(*plVar3 + 0x2c0))(plVar3);
        (**(code **)(*plVar3 + 0x2c8))(plVar3);
        iVar2 = *(int *)(param_1 + 0x250);
        iVar7 = (iVar2 - iVar8) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x10 + *plVar1),
                     (void *)((longlong)(iVar2 - iVar7) * 0x10 + *plVar1),(longlong)iVar7 << 4);
          iVar2 = *(int *)(param_1 + 0x250);
        }
        *(int *)(param_1 + 0x250) = iVar2 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
        lVar5 = UWorld::FindCollectionByType
                          (*(undefined8 *)(param_1 + 0x288),*(int *)((longlong)plVar3 + 0x53c) != -1
                          );
        if (lVar5 != 0) {
          if (*(longlong **)(lVar5 + 0x10) == plVar3) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
          }
          if (*(longlong **)(lVar5 + 0x18) == plVar3) {
            *(undefined8 *)(lVar5 + 0x18) = 0;
          }
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar10 = uVar10 + 1;
      plVar4 = plVar4 + 2;
    } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0x250));
  }
  if (0 < *(int *)(param_1 + 0x298)) {
    plVar1 = (longlong *)(param_1 + 0x290);
    plVar4 = (longlong *)*plVar1;
    uVar9 = uVar6;
    do {
      plVar3 = (longlong *)*plVar4;
      iVar8 = (int)uVar9;
      if ((plVar3 != (longlong *)0x0) && (plVar3[0x24] == param_2)) {
        (**(code **)(*plVar3 + 0x380))(plVar3,0);
        (**(code **)(*plVar3 + 0x2c0))(plVar3);
        (**(code **)(*plVar3 + 0x2c8))(plVar3);
        iVar2 = *(int *)(param_1 + 0x298);
        iVar7 = (iVar2 - iVar8) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x10 + *plVar1),
                     (void *)((longlong)(iVar2 - iVar7) * 0x10 + *plVar1),(longlong)iVar7 << 4);
          iVar2 = *(int *)(param_1 + 0x298);
        }
        *(int *)(param_1 + 0x298) = iVar2 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
        return;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 2;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x298));
  }
  return;
}



// FUNCTION 14286ce20 FUN_14286ce20 body=25 status=ok
// SIG undefined FUN_14286ce20(void)

void FUN_14286ce20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014286ce31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14286ce40 FUN_14286ce40 body=590 status=ok
// SIG undefined FUN_14286ce40(void)

void FUN_14286ce40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar10;
  
  uVar10 = 0;
  if (0 < *(int *)(param_1 + 0xc20)) {
    plVar1 = (longlong *)(param_1 + 0xc18);
    plVar7 = (longlong *)*plVar1;
    uVar12 = uVar10;
    uVar14 = uVar10;
    while (iVar11 = (int)uVar12, *(longlong *)(*plVar7 + 0x288) != param_2) {
      uVar12 = (ulonglong)(iVar11 + 1);
      uVar14 = uVar14 + 1;
      plVar7 = plVar7 + 1;
      if ((longlong)*(int *)(param_1 + 0xc20) <= (longlong)uVar14) {
        return;
      }
    }
    lVar2 = (longlong)iVar11 * 8;
    lVar3 = ((longlong *)*plVar1)[iVar11];
    uVar12 = uVar10;
    if (0 < *(int *)(lVar3 + 0x280)) {
      do {
        plVar7 = *(longlong **)(uVar12 + *(longlong *)(lVar3 + 0x278));
        if ((plVar7 != (longlong *)0x0) && (*plVar7 == *(longlong *)(lVar3 + 0x288))) {
          *plVar7 = 0;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        uVar12 = uVar12 + 8;
      } while ((int)uVar8 < *(int *)(lVar3 + 0x280));
    }
    plVar7 = *(longlong **)(lVar3 + 0x290);
    plVar13 = plVar7 + (longlong)*(int *)(lVar3 + 0x298) * 2;
    for (; plVar7 != plVar13; plVar7 = plVar7 + 2) {
      plVar4 = (longlong *)*plVar7;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x380))(plVar4,0);
      }
    }
    *(undefined8 *)(lVar3 + 0x288) = 0;
    lVar3 = *plVar1;
    lVar5 = *(longlong *)(lVar3 + lVar2);
    if (*(longlong *)(lVar5 + 0x290) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x278) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x260) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x248) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x228) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x218) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x200) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x1f0) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar5 + 0x1e0) != 0) {
      FMemory::Free();
    }
    FUN_140456840(lVar5 + 0x1d0);
    FURL::~FURL(lVar5 + 0x158);
    FURL::~FURL(lVar5 + 0xe8);
    if (*(longlong *)(lVar5 + 0xd0) != 0) {
      FMemory::Free();
    }
    FURL::~FURL(lVar5 + 0x10);
    FMemory::Free(*(undefined8 *)(lVar3 + lVar2));
    iVar6 = *(int *)(param_1 + 0xc20);
    iVar9 = (iVar6 - iVar11) + -1;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar2),(void *)(*plVar1 + (longlong)(iVar11 + 1) * 8),
                 (longlong)iVar9 << 3);
      iVar6 = *(int *)(param_1 + 0xc20);
    }
    *(int *)(param_1 + 0xc20) = iVar6 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  return;
}



// FUNCTION 14286d090 DiagnosticMessage body=62 status=ok
// SIG undefined DiagnosticMessage(void)

undefined8 * FTickFunction::DiagnosticMessage(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"invalid",0x10);
  return param_2;
}



// FUNCTION 14286d0d0 DispatchTickGroup body=322 status=ok
// SIG undefined DispatchTickGroup(void)

void FTickTaskSequencer::DispatchTickGroup(longlong param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = (longlong)param_3;
  lVar6 = 0;
  plVar5 = (longlong *)((lVar9 + 3) * 0x80 + param_1);
  do {
    if ((lVar9 <= lVar6) && (iVar7 = 0, 0 < (int)plVar5[1])) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(lVar10 + *plVar5);
        LOCK();
        piVar8 = (int *)(lVar3 + 0xc);
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          puVar4 = (undefined8 *)FTaskGraphInterface::Get();
          (**(code **)*puVar4)(puVar4,lVar3,*(undefined4 *)(lVar3 + 8),param_2);
        }
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 8;
      } while (iVar7 < (int)plVar5[1]);
    }
    *(undefined4 *)(plVar5 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)plVar5 + 0xc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
    }
    lVar6 = lVar6 + 1;
    plVar5 = plVar5 + 2;
  } while (lVar6 < 8);
  lVar6 = 0;
  piVar8 = (int *)(param_1 + 0x588 + lVar9 * 0x80);
  do {
    if ((lVar9 <= lVar6) && (iVar7 = 0, 0 < *piVar8)) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(lVar10 + *(longlong *)(piVar8 + -2));
        LOCK();
        piVar1 = (int *)(lVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          puVar4 = (undefined8 *)FTaskGraphInterface::Get();
          (**(code **)*puVar4)(puVar4,lVar3,*(undefined4 *)(lVar3 + 8),param_2);
        }
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 8;
      } while (iVar7 < *piVar8);
    }
    *piVar8 = 0;
    if ((piVar8[1] < 0) && (piVar8[1] != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(piVar8 + -2,0);
    }
    lVar6 = lVar6 + 1;
    piVar8 = piVar8 + 4;
  } while (lVar6 < 8);
  return;
}



// FUNCTION 14286d220 FUN_14286d220 body=115 status=ok
// SIG undefined FUN_14286d220(void)

void FUN_14286d220(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)*param_1 + 0x140))((longlong *)*param_1,uVar1,0,0);
  plVar2 = (longlong *)GetRendererModule();
  (**(code **)(*plVar2 + 0x80))
            (plVar2,*(undefined4 *)(param_1 + 1),*(undefined4 *)((longlong)param_1 + 0xc));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14286d2a0 FUN_14286d2a0 body=132 status=ok
// SIG undefined FUN_14286d2a0(void)

void FUN_14286d2a0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar1 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar2 = (uint)param_1[1];
  DAT_1464cabea = (byte)(uVar2 >> 1) & 1;
  (**(code **)(*(longlong *)*param_1 + 0x140))
            ((longlong *)*param_1,uVar1,(byte)(uVar2 >> 2) & 1,param_1[1] & 1);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14286d330 FUN_14286d330 body=426 status=ok
// SIG undefined FUN_14286d330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14286d330(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 auStack_d0 [14];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [4];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_110);
  local_1c = 1;
  local_98 = 0;
  local_28 = 0;
  local_18 = 0;
  local_40 = DAT_146535310;
  local_38 = DAT_146535318;
  local_30 = DAT_146535320;
  local_48 = DAT_146535328;
  local_108 = &PTR_PTR_146535230;
  local_f8 = &PTR_PTR_146535268;
  local_e8 = &PTR_PTR_146535268;
  local_58 = 1;
  local_90 = 0;
  local_88 = 0;
  local_60 = (undefined8 *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_20 = 0;
  local_100 = 0;
  local_fc = 0x30c00;
  local_f0 = 0;
  local_ec = 0x4050800;
  local_e0 = 0;
  local_dc = 0x4050804;
  TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
            (local_80,0);
  uVar1 = local_98;
  puVar3 = local_80;
  if (local_60 != (undefined8 *)0x0) {
    puVar3 = local_60;
  }
  *puVar3 = &PTR_PTR_1465352d8;
  *(undefined4 *)(puVar3 + 1) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0x4080400;
  lVar4 = (longlong)(int)local_98;
  iVar2 = (int)local_98 + 1;
  local_98 = CONCAT44(local_98._4_4_,iVar2);
  if (local_98._4_4_ < iVar2) {
    TArray<FVertexStreamComponent,TFixedAllocator<4>_>::ResizeGrow(&local_d8,uVar1 & 0xffffffff);
  }
  (&local_d8)[lVar4 * 2] = &PTR_PTR_1465352a0;
  auStack_d0[lVar4 * 4] = 0;
  auStack_d0[lVar4 * 4 + 1] = 0x4020800;
  FUN_142578240(*param_1,&local_108);
  if (local_60 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  QueryPerformanceCounter(&local_118);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_118.s.LowPart - local_110._0_4_);
  return;
}



// FUNCTION 14286d4e0 FUN_14286d4e0 body=297 status=ok
// SIG undefined FUN_14286d4e0(void)

void FUN_14286d4e0(void)

{
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_18 [3];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_18);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(0);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  }
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  (**(code **)(*DAT_146ab6358 + 0x380))();
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(0);
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_18[0]._0_4_);
  return;
}



// FUNCTION 14286d610 FUN_14286d610 body=248 status=ok
// SIG undefined FUN_14286d610(void)

void FUN_14286d610(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar8 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar1 = *(undefined4 *)(param_1 + 6);
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 8))();
  uVar2 = param_1[1];
  uVar3 = *puVar9;
  if (*(int *)(lVar8 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,lVar8);
  }
  FUN_141ed93a0(lVar8);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(lVar8);
  }
  FRHICommandListBase::WaitForTasks(lVar8,1);
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar4;
  uStack_50 = uVar5;
  local_48 = uVar1;
  (**(code **)(*DAT_146ab6358 + 0x308))(DAT_146ab6358,uVar3,&local_68,uVar2,&local_58);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14286d710 FUN_14286d710 body=248 status=ok
// SIG undefined FUN_14286d710(void)

void FUN_14286d710(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar8 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar1 = *(undefined4 *)(param_1 + 6);
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 8))();
  uVar2 = param_1[1];
  uVar3 = *puVar9;
  if (*(int *)(lVar8 + 0x14) != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,lVar8);
  }
  FUN_141ed93a0(lVar8);
  if (DAT_146ab6383 != '\0') {
    FRHICommandListBase::WaitForRHIThreadTasks(lVar8);
  }
  FRHICommandListBase::WaitForTasks(lVar8,1);
  local_68 = uVar6;
  uStack_60 = uVar7;
  local_58 = uVar4;
  uStack_50 = uVar5;
  local_48 = uVar1;
  (**(code **)(*DAT_146ab6358 + 0x310))(DAT_146ab6358,uVar3,&local_68,uVar2,&local_58);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14286d810 FUN_14286d810 body=157 status=ok
// SIG undefined FUN_14286d810(void)

void FUN_14286d810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 8))();
  local_28 = uVar1;
  uStack_20 = uVar2;
  (**(code **)(*DAT_146ab6358 + 0x6c8))
            (DAT_146ab6358,uVar3,*puVar4,&local_28,param_1[1],*(undefined4 *)(param_1 + 4),0,0);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14286d8b0 FUN_14286d8b0 body=132 status=ok
// SIG undefined FUN_14286d8b0(void)

void FUN_14286d8b0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar2 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = *param_1;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((*(int *)(lVar3 + 0xc4) != (int)param_1[1]) || (*(int *)(lVar3 + 200) != iVar1)) {
    *(int *)(lVar3 + 0xc4) = (int)param_1[1];
    *(int *)(lVar3 + 200) = iVar1;
    FRenderResource::UpdateRHI();
    lVar3 = *param_1;
  }
  (*(code *)**(undefined8 **)(lVar3 + 0x78))(lVar3 + 0x78,uVar2,1);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14286d940 FUN_14286d940 body=2352 status=ok
// SIG undefined FUN_14286d940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286d940(longlong *param_1,byte param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  DWORD *pDVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined1 local_2d8 [8];
  LARGE_INTEGER local_2d0;
  longlong local_2c8;
  longlong local_2c0 [5];
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  longlong local_280;
  int local_278;
  LARGE_INTEGER local_270;
  LARGE_INTEGER local_268 [2];
  code *local_258;
  undefined1 *puStack_250;
  undefined8 local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined1 local_208 [141];
  undefined1 local_17b;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  lVar6 = (**(code **)(*(longlong *)param_1[10] + 0x30))();
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18290) &&
     (_Init_thread_header(&DAT_146b18290), DAT_146b18290 == -1)) {
    atexit(`FViewport::Draw'::`2'::_dynamic_atexit_destructor_for__GRenderingThreadSuspension__);
    _Init_thread_footer(&DAT_146b18290);
  }
  if (DAT_146b18294 != '\0') {
    return;
  }
  cVar4 = FUN_1424a3f80();
  if ((cVar4 != '\0') && (DAT_146af5674 == 2)) {
    return;
  }
  piVar8 = (int *)0x0;
  if ((*(int *)(lVar9 + 0x38) < DAT_146b182a0) &&
     (_Init_thread_header(&DAT_146b182a0), DAT_146b182a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BufferVisualizationDumpFrames")
    ;
    piVar15 = piVar8;
    if (plVar14 != (longlong *)0x0) {
      piVar15 = (int *)(**(code **)(*plVar14 + 0x38))(plVar14);
    }
    DAT_146b18298 = piVar15;
    _Init_thread_footer(&DAT_146b182a0);
  }
  if ((DAT_1468c2184 == '\0') && ((char)param_1[0x1c] == '\0')) {
    DAT_1468c2184 = '\0';
  }
  else {
    DAT_1468c2184 = '\x01';
  }
  if (((DAT_146b1716d == '\0') && (DAT_1468c2184 == '\0')) && (DAT_1468c2180 == 0)) {
    bVar21 = false;
LAB_14286da1f:
    bVar3 = false;
  }
  else {
    bVar21 = true;
    if ((DAT_146b18298 == (int *)0x0) || (*DAT_146b18298 == 0)) goto LAB_14286da1f;
    bVar3 = true;
  }
  if (DAT_146b1716c != '\0') {
    lVar7 = operator_new(3);
    if (lVar7 != 0) {
      piVar8 = (int *)FUN_141edc760(lVar7,1);
    }
    piVar15 = DAT_146b18288;
    local_238 = 0;
    bVar20 = DAT_146b18288 != (int *)0x0;
    DAT_146b18288 = piVar8;
    if (bVar20) {
      FUN_141edd460(piVar15);
      FMemory::operator_delete(piVar15,3);
    }
  }
  piVar8 = (int *)0x0;
  if (((lVar6 == 0) || (cVar4 = UWorld::IsGameWorld(lVar6), cVar4 == '\0')) ||
     (DAT_14653517c != '\0')) {
    if (DAT_1468c2184 == '\0') {
      if ((bVar21) && (bVar3)) {
        local_2c0[2] = 0;
        local_2c0[3] = 0;
        FScreenshotRequest::RequestScreenshot(local_2c0 + 2,0,1);
        if (local_2c0[2] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      lVar7 = FUN_1424f49c0();
      local_2c0[0] = 0;
      local_2c0[1] = 0;
      FScreenshotRequest::RequestScreenshot(local_2c0,0,*(int *)(lVar7 + 0x50) < 2);
      if (local_2c0[0] != 0) {
        FMemory::Free();
      }
      FUN_142877da0(param_1);
    }
    if (((int)param_1[0x19] != 0) && (*(int *)((longlong)param_1 + 0xcc) != 0)) {
      if ((*(int *)(lVar9 + 0x38) < DAT_146b182b0) &&
         (_Init_thread_header(&DAT_146b182b0), DAT_146b182b0 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar14 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VSync");
        if (plVar14 != (longlong *)0x0) {
          piVar8 = (int *)(**(code **)(*plVar14 + 0x38))(plVar14);
        }
        DAT_146b182a8 = piVar8;
        _Init_thread_footer(&DAT_146b182b0);
      }
      bVar21 = *DAT_146b182a8 != 0;
      if (((((DAT_146b17150 != 0) && (lVar6 != 0)) &&
           (puVar10 = (undefined8 *)FUN_1428749e0(DAT_146b17150,lVar6), *(int *)(puVar10 + 1) != 0))
          && ((*(longlong *)*puVar10 != 0 &&
              (lVar9 = *(longlong *)(*(longlong *)*puVar10 + 0x30), lVar9 != 0)))) &&
         ((*(byte *)(lVar9 + 0x640) & 2) != 0)) {
        bVar21 = true;
      }
      (**(code **)(*param_1 + 0x130))(param_1,param_2);
      QueryPerformanceCounter(&local_2d0);
      puStack_250 = local_2d8;
      local_2d8[0] = 0;
      local_258 = FUN_1415a3f40;
      local_218 = 0x415a3f40;
      uStack_214 = 1;
      uStack_210 = puStack_250;
      lVar9 = FUN_1415d8310(&local_218,&DAT_1464a8c00);
      if (DAT_146b182b8 == '\0') {
        DAT_146b182b8 = '\x01';
      }
      else {
        uVar16 = local_2d0.s.LowPart - _DAT_146b182b4;
        DAT_146ac3afc = uVar16 - *(int *)(lVar9 + 0x18);
        if (uVar16 <= *(uint *)(lVar9 + 0x18)) {
          DAT_146ac3afc = uVar16;
        }
        FUN_1415b2040(uVar16,DAT_146ac3afc,*(undefined4 *)(lVar9 + 0x18));
      }
      plVar14 = (longlong *)0x0;
      uVar16 = 0;
      _DAT_146b182b4 = local_2d0.s.LowPart;
      *(undefined4 *)(lVar9 + 0x18) = 0;
      lVar9 = (**(code **)(*(longlong *)param_1[10] + 0x30))();
      cVar4 = (**(code **)(*(longlong *)param_1[10] + 0x1b0))();
      uVar22 = 0x3f800000;
      if (cVar4 == '\0') {
        local_2e8 = 0x3f800000;
      }
      else {
        local_2e8 = (**(code **)(*(longlong *)param_1[10] + 0x1b8))();
      }
      local_2f8 = DAT_1464c9c14;
      if (lVar9 != 0) {
        local_2f8 = *(undefined4 *)(lVar9 + 0x1c0);
      }
      local_2f0 = 0;
      FUN_142899f20(local_208,param_1,0,lVar9);
      plVar11 = plVar14;
      if (param_1[0x28] != 0) {
        lVar7 = operator_new(0x1b0);
        if (lVar7 != 0) {
          cVar4 = (**(code **)(*(longlong *)param_1[10] + 0x1b0))();
          if (cVar4 != '\0') {
            uVar22 = (**(code **)(*(longlong *)param_1[10] + 0x1b8))();
          }
          local_2f8 = DAT_1464c9c14;
          if (lVar9 != 0) {
            local_2f8 = *(undefined4 *)(lVar9 + 0x1c0);
          }
          local_2f0 = 0;
          local_2e8 = uVar22;
          plVar11 = (longlong *)FUN_142899f20(lVar7,param_1[0x29],0,lVar9);
        }
        local_298 = (undefined4)param_1[0x19];
        local_294 = *(undefined4 *)((longlong)param_1 + 0xcc);
        local_2c0[4] = 0;
        FCanvas::SetRenderTargetRect(plVar11,local_2c0 + 4);
        *(undefined1 *)((longlong)plVar11 + 0x8d) = 0;
        (**(code **)(*(longlong *)param_1[10] + 0x1d0))((longlong *)param_1[10],plVar11);
      }
      local_288 = (undefined4)param_1[0x19];
      local_284 = *(undefined4 *)((longlong)param_1 + 0xcc);
      local_290 = 0;
      FCanvas::SetRenderTargetRect(local_208,&local_290);
      local_17b = 0;
      (**(code **)(*(longlong *)param_1[10] + 0x20))((longlong *)param_1[10],param_1,local_208);
      if (plVar11 != (longlong *)0x0) {
        FUN_1428aa700(plVar11,0);
        FUN_14289d030(plVar11);
        FMemory::operator_delete(plVar11,0x1b0);
        (**(code **)(*(longlong *)param_1[10] + 0x1d0))((longlong *)param_1[10],0);
      }
      FUN_1428aa700(local_208,0);
      (**(code **)(*(longlong *)param_1[10] + 0x28))((longlong *)param_1[10],param_1);
      (**(code **)(*param_1 + 0x120))(param_1,bVar21);
      uVar17 = (DAT_1464cabe9 & 1) * 2 | (uint)bVar21;
      if (DAT_146b17170 < 1) {
        uVar16 = (uint)param_2;
      }
      uVar19 = uVar16 * 4 | uVar17;
      local_248 = param_1;
      uStack_240 = uVar19;
      if (DAT_146ac3ac5 == '\0') {
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar5 = GetCurrentThreadId();
          if (DVar5 != DAT_1468c21c0) goto LAB_14286deee;
        }
        uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(local_268);
        DAT_1464cabea = (byte)(uVar19 >> 1) & 1;
        (**(code **)(*param_1 + 0x140))(param_1,uVar13,(byte)uVar16 & 1,(byte)uVar17 & 1);
        QueryPerformanceCounter(&local_270);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_270.s.LowPart - local_268[0]._0_4_);
      }
      else {
LAB_14286deee:
        pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar11 = TlsGetValue(*pDVar12);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)operator_new(0x18);
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = 0;
            plVar11[1] = 0;
            *(undefined4 *)(plVar11 + 2) = 0;
            plVar14 = plVar11;
          }
          TlsSetValue(*pDVar12,plVar14);
          plVar11 = plVar14;
        }
        plVar14 = (longlong *)plVar11[1];
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)*plVar11;
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
            plVar11[1] = (longlong)plVar14;
            if (plVar14 == (longlong *)0x0) {
              puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar11[1] = (longlong)puVar10;
              lVar9 = 0x1f;
              do {
                puVar2 = puVar10 + 0x20;
                *puVar10 = puVar2;
                lVar9 = lVar9 + -1;
                puVar10 = puVar2;
              } while (lVar9 != 0);
              *puVar2 = 0;
              plVar14 = (longlong *)plVar11[1];
            }
            iVar18 = 0x20;
            *(undefined4 *)(plVar11 + 2) = 0x20;
          }
          else {
            iVar18 = 0x20;
            plVar11[1] = (longlong)plVar14;
            *(undefined4 *)(plVar11 + 2) = 0x20;
            *plVar11 = 0;
          }
        }
        else {
          iVar18 = (int)plVar11[2];
        }
        plVar11[1] = *plVar14;
        *(int *)(plVar11 + 2) = iVar18 + -1;
        *plVar14 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar14 + 1) = 0xff;
        local_230 = 0;
        local_228 = 0;
        *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
        *plVar14 = (longlong)&PTR_FUN_1451df148;
        *(undefined1 *)(plVar14 + 4) = 0;
        plVar14[5] = 0;
        *(undefined4 *)(plVar14 + 2) = (undefined4)local_248;
        *(undefined4 *)((longlong)plVar14 + 0x14) = local_248._4_4_;
        *(uint *)(plVar14 + 3) = uStack_240;
        *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_23c;
        lVar9 = plVar14[5];
        piVar8 = (int *)(lVar9 + 0x48);
        if (lVar9 != 0) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        local_2c8 = lVar9;
        FUN_1409421c0((undefined4)local_248,0,0xff,1);
        if (lVar9 != 0) {
          LOCK();
          iVar18 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            FGraphEvent::Recycle(local_2c8);
          }
        }
      }
      DAT_1464cabe9 = 0;
      FUN_14289d030(local_208);
      goto LAB_14286dac0;
    }
  }
  else {
    FUN_1428db6c0(lVar6);
  }
LAB_14286dac0:
  if (lVar6 != 0) {
    UWorld::GetPlayerControllerIterator(lVar6,&local_280);
    for (; (-1 < local_278 && (local_278 < *(int *)(local_280 + 8))); local_278 = local_278 + 1) {
      lVar9 = FWeakObjectPtr::Get();
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x528) != 0)) {
        puVar1 = (uint *)(*(longlong *)(lVar9 + 0x528) + 0x2c40);
        *puVar1 = *puVar1 & 0xfffffbff;
      }
    }
  }
  if ((0 < DAT_146b17170) && (DAT_146b17170 = DAT_146b17170 + -1, DAT_146b17170 == 0)) {
    DAT_14653517c = '\x01';
  }
  if (*(int *)((longlong)param_1 + 0xdc) != 0) {
    FUN_141ee24f0(0);
  }
  piVar8 = DAT_146b18288;
  if (DAT_146b1716c != '\0') {
    DAT_146b18288 = (int *)0x0;
    if (piVar8 != (int *)0x0) {
      FUN_141edd460(piVar8);
      FMemory::operator_delete(piVar8,3);
    }
    DAT_146b1716c = '\0';
  }
  return;
}



// FUNCTION 14286e270 FUN_14286e270 body=837 status=ok
// SIG undefined FUN_14286e270(void)

undefined4
FUN_14286e270(double *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  LARGE_INTEGER local_res8;
  longlong local_d8 [2];
  undefined1 local_c8 [160];
  
  uVar3 = param_5;
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (0.0 < *param_1) {
    fVar8 = (float)FUN_142696f10();
    if (fVar8 * 0.001 < (float)(dVar2 - *param_1)) {
      *(float *)((longlong)param_1[1] + (longlong)*(int *)(param_1 + 5) * 4) =
           (float)(dVar2 - *param_1);
      *(double *)((longlong)param_1[3] + (longlong)*(int *)(param_1 + 5) * 8) = dVar2;
      *(int *)(param_1 + 5) = (*(int *)(param_1 + 5) + 1) % 0x14;
      cVar4 = FWeakObjectPtr::IsValid(DAT_146b17150 + 0x100);
      if (cVar4 != '\0') {
        FWeakObjectPtr::Get(DAT_146b17150 + 0x100);
      }
    }
    (**(code **)(*param_2 + 0x20))(param_2,&local_res8);
    lVar6 = 0;
    lVar7 = lVar6;
    do {
      dVar1 = *(double *)((longlong)param_1[3] + lVar6);
      if (((0.0 < dVar1) && (dVar1 <= dVar2)) && (dVar2 - 4.2 <= dVar1)) {
        fVar11 = *(float *)((longlong)param_1[1] + lVar7) * 1000.0;
        fVar10 = fVar11 * 0.25;
        fVar8 = (float)FUN_142698f40();
        fVar9 = (float)FUN_142698f20();
        if (fVar10 <= fVar8) {
          puVar5 = &DAT_1464aa73c;
          if (fVar9 < fVar10) {
            puVar5 = &DAT_1464aa744;
          }
        }
        else {
          puVar5 = &DAT_1464aa738;
        }
        param_5 = *puVar5;
        FString::PrintfImpl(local_d8,&DAT_1451caaf0,(int)fVar11);
        FLinearColor::FLinearColor(local_c8,&param_5);
        FUN_1428a6e00(param_3);
        if (local_d8[0] != 0) {
          FMemory::Free();
        }
      }
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + 8;
    } while (lVar7 < 0x50);
  }
  *param_1 = dVar2;
  return uVar3;
}



// FUNCTION 14286e5c0 FUN_14286e5c0 body=8086 status=ok
// SIG undefined FUN_14286e5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD FUN_14286e5c0(float *param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  double dVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  DWORD *pDVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  LARGE_INTEGER *pLVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  wchar_t *pwVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_3a8 [32];
  undefined4 *local_388;
  longlong *local_380;
  undefined4 *local_378;
  LARGE_INTEGER local_368;
  wchar_t *local_360;
  undefined8 local_358;
  longlong local_350 [2];
  LARGE_INTEGER local_340;
  LARGE_INTEGER local_338;
  LARGE_INTEGER local_330;
  int local_328;
  int local_324;
  undefined1 local_320 [20];
  int local_30c;
  int local_308;
  undefined1 local_2f8 [544];
  ulonglong local_d8;
  longlong local_78 [7];
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  local_330.s.LowPart = 0;
  if ((DAT_1468b5a25 == '\0') && (DAT_1468b5a26 == '\0')) {
    dVar22 = DAT_1468b5a78 - _DAT_1468b5a80;
  }
  else {
    QueryPerformanceCounter(&local_330);
    dVar22 = (double)CONCAT44(local_330.s.HighPart,local_330.s.LowPart) * DAT_1468b02f8 + 16777216.0
    ;
    dVar2 = *(double *)(param_1 + 0x10);
    if (*(double *)(param_1 + 0x10) == 0.0) {
      dVar2 = dVar22;
    }
    *(double *)(param_1 + 0x10) = dVar22;
    dVar22 = dVar22 - dVar2;
  }
  fVar25 = -1.0;
  local_308 = 0;
  param_1[0xe] = (float)dVar22 * 1000.0;
  param_1[6] = (float)dVar22 * 1000.0 * 0.1 + param_1[6] * 0.9;
  fVar23 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3afc);
  param_1[0xb] = fVar23;
  param_1[3] = fVar23 * 0.1 + param_1[3] * 0.9;
  fVar23 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3ad4);
  param_1[8] = fVar23;
  *param_1 = fVar23 * 0.1 + *param_1 * 0.9;
  fVar23 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3af8);
  param_1[0xf] = fVar23;
  param_1[7] = fVar23 * 0.1 + param_1[7] * 0.9;
  lVar18 = DAT_146b17150;
  if ((*(longlong **)(DAT_146b17150 + 0xa30) != (longlong *)0x0) &&
     (cVar5 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xa30) + 0x10))(), cVar5 != '\0')) {
    cVar5 = (**(code **)(**(longlong **)(lVar18 + 0xa30) + 0x38))();
    if (cVar5 == '\0') {
      local_308 = (*(char *)(lVar18 + 0xa50) != '\0') + 1;
    }
    else {
      local_308 = 3;
      fVar25 = (float)(**(code **)(**(longlong **)(lVar18 + 0xa30) + 0x20))();
      fVar23 = (float)(**(code **)(**(longlong **)(lVar18 + 0xa30) + 0x28))();
      if (fVar23 < fVar25) {
        fVar25 = fVar23;
      }
    }
  }
  fVar23 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3ae4);
  param_1[9] = fVar23;
  param_1[1] = fVar23 * 0.1 + param_1[1] * 0.9;
  fVar23 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ab632c);
  param_1[10] = fVar23;
  param_1[2] = fVar23 * 0.1 + param_1[2] * 0.9;
  local_330.s.LowPart = DAT_146b17160;
  fVar23 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146b17160);
  param_1[0xc] = fVar23;
  fVar23 = fVar23 * 0.1 + param_1[4] * 0.9;
  param_1[4] = fVar23;
  fVar24 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146b17164);
  param_1[0xd] = fVar24;
  param_1[5] = fVar24 * 0.1 + param_1[5] * 0.9;
  lVar18 = DAT_146b174f8;
  if (DAT_146b177b0 != DAT_1468c21b0) {
    DAT_146b177b8 = DAT_146b177b8 + param_1[6];
    DAT_146b177c0 = DAT_146b177c0 + *param_1;
    _DAT_146b1778c = _DAT_146b1778c + 1;
    DAT_146b177b0 = DAT_1468c21b0;
    DAT_146b177bc = DAT_146b177bc + param_1[3];
    DAT_146b177c4 = DAT_146b177c4 + fVar23;
    DAT_146b177c8 = DAT_146b177c8 + param_1[7];
  }
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar14 = 4;
    if (DVar7 == DAT_1468c21c0) goto LAB_14286ea3b;
  }
  else {
LAB_14286ea3b:
    lVar14 = 0;
  }
  if (*(int *)(lVar18 + lVar14) == 2) {
    param_1[4] = param_1[5];
  }
  if (param_2[10] == 0) {
    local_368.s.HighPart._0_1_ = '\0';
  }
  else {
    local_360 = (wchar_t *)0x0;
    local_358 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360,0);
    FGenericPlatformString::Memcpy(local_360,L"UnitMax",0x10);
    local_368.s.HighPart._0_1_ =
         (**(code **)(*(longlong *)param_2[10] + 0x150))((longlong *)param_2[10],&local_360);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1415a97c0(local_2f8,1);
  lVar18 = DAT_146b17150;
  cVar5 = (**(code **)(*param_2 + 0x188))(param_2);
  if (((cVar5 == '\0') || (*(undefined8 **)(lVar18 + 0xab8) == (undefined8 *)0x0)) ||
     (cVar5 = (**(code **)**(undefined8 **)(lVar18 + 0xab8))(), cVar5 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  puVar1 = *(undefined4 **)(DAT_146b17150 + 0xd0);
  if (param_2[10] == 0) {
    local_368.s.HighPart._1_1_ = '\0';
    uVar6 = local_368.s.HighPart._1_1_;
  }
  else {
    local_358 = 10;
    local_360 = (wchar_t *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360,0);
    FGenericPlatformString::Memcpy(local_360,L"UnitGraph",0x14);
    uVar6 = (**(code **)(*(longlong *)param_2[10] + 0x150))((longlong *)param_2[10],&local_360);
    local_368.s.HighPart._1_1_ = uVar6;
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (bVar3) {
    fVar23 = 0.5;
  }
  else {
    fVar23 = 1.0;
  }
  iVar19 = (int)((float)param_4 * fVar23);
  local_324 = iVar19;
  iVar8 = UFont::GetStringSize(puVar1,L" 0000.00 ms");
  iVar8 = iVar19 - (int)(float)iVar8;
  if (local_368.s.HighPart._0_1_ == '\0') {
    iVar8 = iVar19;
  }
  local_30c = iVar8;
  iVar19 = UFont::GetStringSize(puVar1,L"DynRes: ");
  local_340.s.LowPart = iVar8 - (int)(float)iVar19;
  fVar24 = (float)FUN_14244fa00(puVar1);
  fVar23 = param_1[6];
  local_328 = (int)(fVar24 * 1.1);
  fVar24 = (float)FUN_142698f40();
  fVar21 = (float)FUN_142698f20();
  if (fVar23 <= fVar24) {
    puVar11 = &DAT_1464aa73c;
    if (fVar21 < fVar23) {
      puVar11 = &DAT_1464aa744;
    }
  }
  else {
    puVar11 = &DAT_1464aa738;
  }
  local_338.s.LowPart = *puVar11;
  if (uVar6 == '\0') {
    pLVar16 = (LARGE_INTEGER *)local_320;
    local_320._0_4_ = DAT_1464aa730;
  }
  else {
    local_368.s.LowPart._1_2_ = 0x64ff;
    pLVar16 = &local_368;
    local_368.s.LowPart._0_1_ = 100;
    local_368.s.LowPart._3_1_ = 0xff;
  }
  FLinearColor::FLinearColor(local_350,pLVar16);
  local_380 = local_350;
  local_378 = &DAT_1464aa6e0;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  FLinearColor::FLinearColor(local_350,&local_338);
  FString::PrintfImpl(&local_360,L"%6.2f ms",(double)param_1[6]);
  local_380 = local_350;
  local_378 = &DAT_1464aa6e0;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  if (local_360 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_368.s.HighPart._0_1_ != '\0') {
    fVar23 = (float)FUN_142698f40();
    fVar24 = (float)FUN_142698f20();
    if (0.0 <= fVar23) {
      puVar12 = &DAT_1464aa73c;
      if (fVar24 < 0.0) {
        puVar12 = &DAT_1464aa744;
      }
    }
    else {
      puVar12 = &DAT_1464aa738;
    }
    local_320._0_4_ = *puVar12;
    FLinearColor::FLinearColor(local_350,local_320);
    FString::PrintfImpl(&local_360,L"%6.2f ms",0);
    local_380 = local_350;
    local_378 = &DAT_1464aa6e0;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  param_5 = param_5 + local_328;
  fVar23 = param_1[3];
  fVar24 = (float)FUN_142698f40();
  fVar21 = (float)FUN_142698f20();
  uVar6 = local_368.s.HighPart._1_1_;
  if (fVar23 <= fVar24) {
    pDVar13 = &DAT_1464aa73c;
    if (fVar21 < fVar23) {
      pDVar13 = &DAT_1464aa744;
    }
  }
  else {
    pDVar13 = &DAT_1464aa738;
  }
  local_320._0_4_ = *pDVar13;
  if (local_368.s.HighPart._1_1_ == '\0') {
    pLVar16 = &local_338;
    local_338.s.LowPart = DAT_1464aa730;
  }
  else {
    local_368.s.LowPart._1_2_ = 0xff64;
    pLVar16 = &local_368;
    local_368.s.LowPart._0_1_ = 100;
    local_368.s.LowPart._3_1_ = 0xff;
  }
  FLinearColor::FLinearColor(local_350,pLVar16);
  local_378 = &DAT_1464aa6e0;
  local_380 = local_350;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  FLinearColor::FLinearColor(local_350,local_320);
  FString::PrintfImpl(&local_360,L"%6.2f ms",(double)param_1[3]);
  local_378 = &DAT_1464aa6e0;
  local_380 = local_350;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  if (local_360 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_380 = (longlong *)CONCAT44(local_380._4_4_,param_5);
  local_388 = (undefined4 *)CONCAT44(local_388._4_4_,local_30c);
  local_378 = puVar1;
  FUN_142870560(param_1,0,local_2f8,param_3);
  if (local_368.s.HighPart._0_1_ != '\0') {
    fVar23 = (float)FUN_142698f40();
    fVar24 = (float)FUN_142698f20();
    if (0.0 <= fVar23) {
      puVar11 = &DAT_1464aa73c;
      if (fVar24 < 0.0) {
        puVar11 = &DAT_1464aa744;
      }
    }
    else {
      puVar11 = &DAT_1464aa738;
    }
    local_338.s.LowPart = *puVar11;
    FLinearColor::FLinearColor(local_350,&local_338);
    FString::PrintfImpl(&local_360,L"%6.2f ms",0);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  param_5 = param_5 + local_328;
  fVar23 = *param_1;
  fVar24 = (float)FUN_142698f40();
  fVar21 = (float)FUN_142698f20();
  if (fVar23 <= fVar24) {
    pDVar13 = &DAT_1464aa73c;
    if (fVar21 < fVar23) {
      pDVar13 = &DAT_1464aa744;
    }
  }
  else {
    pDVar13 = &DAT_1464aa738;
  }
  local_320._0_4_ = *pDVar13;
  if (uVar6 == '\0') {
    pLVar16 = &local_338;
    local_338.s.LowPart = DAT_1464aa730;
  }
  else {
    local_368.s.LowPart._1_2_ = 0x6464;
    pLVar16 = &local_368;
    local_368.s.LowPart._0_1_ = 0xff;
    local_368.s.LowPart._3_1_ = 0xff;
  }
  FLinearColor::FLinearColor(local_350,pLVar16);
  local_380 = local_350;
  local_378 = &DAT_1464aa6e0;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  FLinearColor::FLinearColor(local_350,local_320);
  FString::PrintfImpl(&local_360,L"%6.2f ms",(double)*param_1);
  local_380 = local_350;
  local_378 = &DAT_1464aa6e0;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  if (local_360 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_380 = (longlong *)CONCAT44(local_380._4_4_,param_5);
  local_388 = (undefined4 *)CONCAT44(local_388._4_4_,local_30c);
  local_378 = puVar1;
  FUN_142870560(param_1,1,local_2f8,param_3);
  if (local_368.s.HighPart._0_1_ != '\0') {
    fVar23 = (float)FUN_142698f40();
    fVar24 = (float)FUN_142698f20();
    if (0.0 <= fVar23) {
      puVar11 = &DAT_1464aa73c;
      if (fVar24 < 0.0) {
        puVar11 = &DAT_1464aa744;
      }
    }
    else {
      puVar11 = &DAT_1464aa738;
    }
    local_338.s.LowPart = *puVar11;
    FLinearColor::FLinearColor(local_350,&local_338);
    FString::PrintfImpl(&local_360,L"%6.2f ms",0);
    local_380 = local_350;
    local_378 = &DAT_1464aa6e0;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  uVar9 = FUN_1415aa550(10);
  if (1 < uVar9) {
    FLinearColor::FLinearColor(local_350,&DAT_1464aa738);
    FString::PrintfImpl(&local_360,&DAT_1451c94d4,uVar9);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  param_5 = param_5 + local_328 * 2;
  fVar23 = param_1[1];
  fVar24 = (float)FUN_142698f40();
  fVar21 = (float)FUN_142698f20();
  if (fVar23 <= fVar24) {
    puVar11 = &DAT_1464aa73c;
    if (fVar21 < fVar23) {
      puVar11 = &DAT_1464aa744;
    }
  }
  else {
    puVar11 = &DAT_1464aa738;
  }
  local_338.s.LowPart = *puVar11;
  if (local_368.s.HighPart._1_1_ == '\0') {
    pLVar16 = &local_340;
    local_340.s.LowPart = DAT_1464aa75c;
  }
  else {
    local_368.s.LowPart._1_2_ = 0x6464;
    pLVar16 = &local_368;
    local_368.s.LowPart._0_1_ = 0xff;
    local_368.s.LowPart._3_1_ = 0xff;
  }
  FLinearColor::FLinearColor(local_350,pLVar16);
  local_378 = &DAT_1464aa6e0;
  local_380 = local_350;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  FLinearColor::FLinearColor(local_350,&local_338);
  FString::PrintfImpl(&local_360,L"%6.2f ms",(double)param_1[1]);
  local_378 = &DAT_1464aa6e0;
  local_380 = local_350;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  if (local_360 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_368.s.HighPart._0_1_ != '\0') {
    fVar23 = (float)FUN_142698f40();
    fVar24 = (float)FUN_142698f20();
    if (0.0 <= fVar23) {
      puVar12 = &DAT_1464aa73c;
      if (fVar24 < 0.0) {
        puVar12 = &DAT_1464aa744;
      }
    }
    else {
      puVar12 = &DAT_1464aa738;
    }
    local_340.s.LowPart = *puVar12;
    FLinearColor::FLinearColor(local_350,&local_340);
    FString::PrintfImpl(&local_360,L"%6.2f ms",0);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  lVar18 = DAT_146b17510;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    lVar14 = 4;
  }
  else {
    lVar14 = 0;
  }
  if (*(int *)(lVar14 + lVar18) != 0) {
    fVar21 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3ad8);
    fVar23 = (float)FUN_142698f40();
    fVar24 = (float)FUN_142698f20();
    uVar6 = local_368.s.HighPart._1_1_;
    if (fVar21 <= fVar23) {
      puVar11 = &DAT_1464aa73c;
      if (fVar24 < fVar21) {
        puVar11 = &DAT_1464aa744;
      }
    }
    else {
      puVar11 = &DAT_1464aa738;
    }
    local_338.s.LowPart = *puVar11;
    if (local_368.s.HighPart._1_1_ == '\0') {
      pLVar16 = &local_340;
      local_340.s.LowPart = DAT_1464aa75c;
    }
    else {
      local_368.s.LowPart._1_2_ = 0x6464;
      pLVar16 = &local_368;
      local_368.s.LowPart._0_1_ = 0xff;
      local_368.s.LowPart._3_1_ = 0xff;
    }
    FLinearColor::FLinearColor(local_350,pLVar16);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    FLinearColor::FLinearColor(local_350,&local_338);
    FString::PrintfImpl(&local_360,L"%6.2f ms",(double)fVar21);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    param_5 = param_5 + local_328;
    fVar21 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3adc);
    fVar23 = (float)FUN_142698f40();
    fVar24 = (float)FUN_142698f20();
    if (fVar21 <= fVar23) {
      puVar11 = &DAT_1464aa73c;
      if (fVar24 < fVar21) {
        puVar11 = &DAT_1464aa744;
      }
    }
    else {
      puVar11 = &DAT_1464aa738;
    }
    local_338.s.LowPart = *puVar11;
    if (uVar6 == '\0') {
      pLVar16 = &local_340;
      local_340.s.LowPart = DAT_1464aa75c;
    }
    else {
      local_368.s.LowPart._1_2_ = 0x6464;
      pLVar16 = &local_368;
      local_368.s.LowPart._0_1_ = 0xff;
      local_368.s.LowPart._3_1_ = 0xff;
    }
    FLinearColor::FLinearColor(local_350,pLVar16);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    FLinearColor::FLinearColor(local_350,&local_338);
    FString::PrintfImpl(&local_360,L"%6.2f ms",(double)fVar21);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    param_5 = param_5 + local_328;
    fVar21 = (float)(DAT_1468b02f8 * 1000.0 * (double)DAT_146ac3ae0);
    fVar23 = (float)FUN_142698f40();
    fVar24 = (float)FUN_142698f20();
    if (fVar21 <= fVar23) {
      puVar11 = &DAT_1464aa73c;
      if (fVar24 < fVar21) {
        puVar11 = &DAT_1464aa744;
      }
    }
    else {
      puVar11 = &DAT_1464aa738;
    }
    local_338.s.LowPart = *puVar11;
    if (uVar6 == '\0') {
      pLVar16 = &local_340;
      local_340.s.LowPart = DAT_1464aa75c;
    }
    else {
      local_368.s.LowPart._1_2_ = 0x6464;
      pLVar16 = &local_368;
      local_368.s.LowPart._0_1_ = 0xff;
      local_368.s.LowPart._3_1_ = 0xff;
    }
    FLinearColor::FLinearColor(local_350,pLVar16);
    local_380 = local_350;
    local_378 = &DAT_1464aa6e0;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    FLinearColor::FLinearColor(local_350,&local_338);
    FString::PrintfImpl(&local_360,L"%6.2f ms",(double)fVar21);
    local_380 = local_350;
    local_378 = &DAT_1464aa6e0;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    param_5 = param_5 + local_328;
  }
  lVar18 = DAT_146b174e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    lVar14 = 4;
  }
  else {
    lVar14 = 0;
  }
  iVar8 = *(int *)(lVar14 + lVar18);
  iVar19 = local_30c;
  if ((0 < iVar8) && (DAT_1468b5000 != 0)) {
    if (iVar8 == 2) {
      fVar23 = param_1[7];
    }
    else {
      fVar23 = param_1[2];
    }
    fVar24 = (float)FUN_142698f40();
    fVar21 = (float)FUN_142698f20();
    if (fVar23 <= fVar24) {
      puVar11 = &DAT_1464aa73c;
      if (fVar21 < fVar23) {
        puVar11 = &DAT_1464aa744;
      }
    }
    else {
      puVar11 = &DAT_1464aa738;
    }
    local_338.s.LowPart = *puVar11;
    if (local_368.s.HighPart._1_1_ == '\0') {
      pLVar16 = &local_340;
      local_340.s.LowPart = DAT_1464aa730;
    }
    else {
      local_368.s.LowPart._1_2_ = 0x6464;
      pLVar16 = &local_368;
      local_368.s.LowPart._0_1_ = 0xff;
      local_368.s.LowPart._3_1_ = 0xff;
    }
    FLinearColor::FLinearColor(local_350,pLVar16);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    FLinearColor::FLinearColor(local_350,&local_338);
    if (iVar8 == 2) {
      fVar23 = param_1[7];
    }
    else {
      fVar23 = param_1[2];
    }
    FString::PrintfImpl(&local_360,L"%6.2f ms",(double)fVar23);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar19 = local_30c;
    local_380 = (longlong *)CONCAT44(local_380._4_4_,param_5);
    local_388 = (undefined4 *)CONCAT44(local_388._4_4_,local_30c);
    local_378 = puVar1;
    FUN_142870560(param_1,2,local_2f8,param_3);
    if (local_368.s.HighPart._0_1_ != '\0') {
      fVar23 = (float)FUN_142698f40();
      fVar24 = (float)FUN_142698f20();
      if (0.0 <= fVar23) {
        puVar12 = &DAT_1464aa73c;
        if (fVar24 < 0.0) {
          puVar12 = &DAT_1464aa744;
        }
      }
      else {
        puVar12 = &DAT_1464aa738;
      }
      local_340.s.LowPart = *puVar12;
      FLinearColor::FLinearColor(local_350,&local_340);
      FString::PrintfImpl(&local_360,L"%6.2f ms",0);
      local_378 = &DAT_1464aa6e0;
      local_380 = local_350;
      local_388 = puVar1;
      FUN_1428a6e00(param_3);
      if (local_360 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    param_5 = param_5 + local_328;
  }
  if (local_330.s.LowPart != 0) {
    fVar23 = param_1[4];
    fVar24 = (float)FUN_142698f40();
    fVar21 = (float)FUN_142698f20();
    if (fVar23 <= fVar24) {
      puVar12 = &DAT_1464aa73c;
      if (fVar21 < fVar23) {
        puVar12 = &DAT_1464aa744;
      }
    }
    else {
      puVar12 = &DAT_1464aa738;
    }
    local_340.s.LowPart = *puVar12;
    if (local_368.s.HighPart._1_1_ == '\0') {
      pLVar16 = &local_330;
      local_330.s.LowPart = DAT_1464aa730;
    }
    else {
      local_368.s.LowPart._1_2_ = 0xffff;
      pLVar16 = &local_368;
      local_368.s.LowPart._0_1_ = 100;
      local_368.s.LowPart._3_1_ = 0xff;
    }
    FLinearColor::FLinearColor(local_350,pLVar16);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    FLinearColor::FLinearColor(local_350,&local_340);
    FString::PrintfImpl(&local_360,L"%6.2f ms",(double)param_1[4]);
    local_378 = &DAT_1464aa6e0;
    local_380 = local_350;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_360 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_380 = (longlong *)CONCAT44(local_380._4_4_,param_5);
    local_388 = (undefined4 *)CONCAT44(local_388._4_4_,iVar19);
    local_378 = puVar1;
    FUN_142870560(param_1,3,local_2f8,param_3);
    if (local_368.s.HighPart._0_1_ != '\0') {
      fVar23 = (float)FUN_142698f40();
      fVar24 = (float)FUN_142698f20();
      if (0.0 <= fVar23) {
        puVar12 = &DAT_1464aa73c;
        if (fVar24 < 0.0) {
          puVar12 = &DAT_1464aa744;
        }
      }
      else {
        puVar12 = &DAT_1464aa738;
      }
      local_330.s.LowPart = *puVar12;
      FLinearColor::FLinearColor(local_320 + 4,&local_330);
      FString::PrintfImpl(local_350,L"%6.2f ms",0);
      local_378 = &DAT_1464aa6e0;
      local_380 = (longlong *)(local_320 + 4);
      local_388 = puVar1;
      FUN_1428a6e00(param_3);
      if (local_350[0] != 0) {
        FMemory::Free();
      }
    }
    if (DAT_146ab62cc == 2) {
      pwVar15 = (wchar_t *)0x0;
      local_360 = (wchar_t *)0x0;
      local_358 = local_358 & 0xffffffff;
      local_338 = (LARGE_INTEGER)
                  ((LARGE_INTEGER *)
                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8))->QuadPart;
      if ((*(int *)(local_338.QuadPart + 0x38) < DAT_146b18230) &&
         (_Init_thread_header(&DAT_146b18230), DAT_146b18230 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146b18228 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
        _Init_thread_footer(&DAT_146b18230);
      }
      iVar8 = (**(code **)(*DAT_146b18228 + 0x68))();
      pwVar20 = pwVar15;
      if (iVar8 == 0) {
        local_358 = CONCAT44(local_358._4_4_,0x18);
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360);
        pwVar15 = (wchar_t *)(local_358 & 0xffffffff);
        builtin_wcsncpy(local_360,L" r.PS4ContinuousSubmits",0x18);
        pwVar20 = local_360;
      }
      iVar8 = (int)pwVar15;
      if ((*(int *)(local_338.QuadPart + 0x38) < DAT_146b18240) &&
         (_Init_thread_header(&DAT_146b18240), DAT_146b18240 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        DAT_146b18238 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
        _Init_thread_footer(&DAT_146b18240);
      }
      iVar10 = (**(code **)(*DAT_146b18238 + 0x68))();
      iVar19 = iVar8;
      if (iVar10 != 0) {
        iVar19 = (0x16 - (uint)(iVar8 != 0)) + iVar8;
        local_358 = CONCAT44(local_358._4_4_,iVar19);
        if (local_358._4_4_ < iVar19) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360);
          pwVar20 = local_360;
          iVar19 = (int)local_358;
        }
        builtin_wcsncpy(pwVar20 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)),
                        L" r.PS4StallsOnMarkers",0x16);
      }
      if (1 < iVar19) {
        FLinearColor::FLinearColor(local_320 + 4,&DAT_1464aa738);
        local_378 = &DAT_1464aa6e0;
        local_380 = (longlong *)(local_320 + 4);
        local_388 = puVar1;
        FUN_1428a6e00(param_3);
      }
      if (pwVar20 != (wchar_t *)0x0) {
        FMemory::Free(pwVar20);
      }
    }
    lVar18 = DAT_146b174f8;
    param_5 = param_5 + local_328;
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
      lVar14 = 4;
    }
    else {
      lVar14 = 0;
    }
    if (*(int *)(lVar14 + lVar18) == 1) {
      fVar23 = param_1[5];
      fVar24 = (float)FUN_142698f40();
      fVar21 = (float)FUN_142698f20();
      if (fVar23 <= fVar24) {
        puVar11 = &DAT_1464aa73c;
        if (fVar21 < fVar23) {
          puVar11 = &DAT_1464aa744;
        }
      }
      else {
        puVar11 = &DAT_1464aa738;
      }
      local_338.s.LowPart = *puVar11;
      if (local_368.s.HighPart._1_1_ == '\0') {
        pLVar16 = &local_330;
        local_330.s.LowPart = DAT_1464aa75c;
      }
      else {
        local_368.s.LowPart._1_2_ = 0xffff;
        pLVar16 = &local_368;
        local_368.s.LowPart._0_1_ = 100;
        local_368.s.LowPart._3_1_ = 0xff;
      }
      FLinearColor::FLinearColor(local_320 + 4,pLVar16);
      local_380 = (longlong *)(local_320 + 4);
      local_378 = &DAT_1464aa6e0;
      local_388 = puVar1;
      FUN_1428a6e00(param_3);
      FLinearColor::FLinearColor(local_320 + 4,&local_338);
      FString::PrintfImpl(local_350,L"%6.2f ms",(double)param_1[5]);
      local_380 = (longlong *)(local_320 + 4);
      local_378 = &DAT_1464aa6e0;
      local_388 = puVar1;
      FUN_1428a6e00(param_3);
      if (local_350[0] != 0) {
        FMemory::Free();
      }
      if (local_368.s.HighPart._0_1_ != '\0') {
        fVar23 = (float)FUN_142698f40();
        fVar24 = (float)FUN_142698f20();
        if (0.0 <= fVar23) {
          puVar12 = &DAT_1464aa73c;
          if (fVar24 < 0.0) {
            puVar12 = &DAT_1464aa744;
          }
        }
        else {
          puVar12 = &DAT_1464aa738;
        }
        local_330.s.LowPart = *puVar12;
        FLinearColor::FLinearColor(local_320 + 4,&local_330);
        FString::PrintfImpl(local_350,L"%6.2f ms",0);
        local_380 = (longlong *)(local_320 + 4);
        local_378 = &DAT_1464aa6e0;
        local_388 = puVar1;
        FUN_1428a6e00(param_3);
        if (local_350[0] != 0) {
          FMemory::Free();
        }
      }
    }
    param_5 = param_5 + local_328;
  }
  iVar8 = local_328;
  puVar12 = &DAT_1464aa738;
  if ((*(int *)(param_3 + 0x90) < 2) || (DAT_146ab6325 == '\0')) goto LAB_142870221;
  if (local_368.s.HighPart._1_1_ == '\0') {
    pLVar16 = &local_330;
    local_330.s.LowPart = DAT_1464aa730;
  }
  else {
    local_368.s.LowPart._1_2_ = 0xffa0;
    pLVar16 = &local_368;
    local_368.s.LowPart._0_1_ = 100;
    local_368.s.LowPart._3_1_ = 0xff;
  }
  FLinearColor::FLinearColor(local_320 + 4,pLVar16);
  local_380 = (longlong *)(local_320 + 4);
  local_378 = &DAT_1464aa6e0;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  if (local_308 == 3) {
    if (0.7 <= fVar25) {
      puVar12 = &DAT_1464aa73c;
      fVar23 = fVar25 * 0.97;
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      if (fVar25 < fVar23) {
        puVar12 = &DAT_1464aa744;
      }
    }
    local_330.s.LowPart = *puVar12;
    FLinearColor::FLinearColor(local_320 + 4,&local_330);
    FString::PrintfImpl(local_350,L"%3.1f%% x %3.1f%%",(double)(fVar25 * 100.0),
                        (double)(fVar25 * 100.0));
    local_380 = (longlong *)(local_320 + 4);
    local_378 = &DAT_1464aa6e0;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
    if (local_350[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    if (local_308 == 2) {
      FLinearColor::FLinearColor(local_320 + 4,&DAT_1464aa74c);
    }
    else if (local_308 == 1) {
      local_368.s.LowPart._1_2_ = 0xa0a0;
      local_368.s.LowPart._0_1_ = 0xa0;
      local_368.s.LowPart._3_1_ = 0xff;
      FLinearColor::FLinearColor(local_320 + 4,&local_368);
    }
    else {
      if (local_308 != 0) goto LAB_14287021e;
      local_368.s.LowPart._1_2_ = 0xa0a0;
      local_368.s.LowPart._0_1_ = 0xa0;
      local_368.s.LowPart._3_1_ = 0xff;
      FLinearColor::FLinearColor(local_320 + 4,&local_368);
    }
    local_380 = (longlong *)(local_320 + 4);
    local_378 = &DAT_1464aa6e0;
    local_388 = puVar1;
    FUN_1428a6e00(param_3);
  }
LAB_14287021e:
  param_5 = param_5 + iVar8;
LAB_142870221:
  uVar6 = local_368.s.HighPart._1_1_;
  uVar4 = DAT_146ab6314;
  if (local_368.s.HighPart._1_1_ == '\0') {
    pLVar16 = &local_330;
    local_330.s.LowPart = DAT_1464aa730;
  }
  else {
    local_368.s.LowPart._1_2_ = 0x6464;
    pLVar16 = &local_368;
    local_368.s.LowPart._0_1_ = 0xff;
    local_368.s.LowPart._3_1_ = 0xff;
  }
  FLinearColor::FLinearColor(local_320 + 4,pLVar16);
  local_378 = &DAT_1464aa6e0;
  local_380 = (longlong *)(local_320 + 4);
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  FLinearColor::FLinearColor(local_320 + 4,&DAT_1464aa73c);
  FString::PrintfImpl(local_350,&DAT_1451c9a34,uVar4);
  local_378 = &DAT_1464aa6e0;
  local_380 = (longlong *)(local_320 + 4);
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  if (local_350[0] != 0) {
    FMemory::Free();
  }
  iVar19 = DAT_146ab6318;
  if (uVar6 == '\0') {
    pLVar16 = &local_330;
    local_330.s.LowPart = DAT_1464aa730;
  }
  else {
    local_368.s.LowPart._1_2_ = 0x6464;
    pLVar16 = &local_368;
    local_368.s.LowPart._0_1_ = 0xff;
    local_368.s.LowPart._3_1_ = 0xff;
  }
  FLinearColor::FLinearColor(local_320 + 4,pLVar16);
  local_380 = (longlong *)(local_320 + 4);
  local_378 = &DAT_1464aa6e0;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  FLinearColor::FLinearColor(local_320 + 4,&DAT_1464aa73c);
  if (iVar19 < 10000) {
    FString::PrintfImpl(local_350,&DAT_1451ca678,iVar19);
  }
  else {
    FString::PrintfImpl(local_350,L"%.1fK",(double)((float)iVar19 * 0.001));
  }
  local_380 = (longlong *)(local_320 + 4);
  local_378 = &DAT_1464aa6e0;
  local_388 = puVar1;
  FUN_1428a6e00(param_3);
  if (local_350[0] != 0) {
    FMemory::Free();
  }
  lVar18 = 4;
  plVar17 = local_78;
  local_330.s.LowPart = param_5 + iVar8 * 2;
  do {
    lVar18 = lVar18 + -1;
    *(undefined4 *)(plVar17 + -0xe) = 0;
    if (plVar17[-0xf] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar17 + -0x17);
    plVar17 = plVar17 + -0xf;
  } while (lVar18 != 0);
  return local_330.s.LowPart;
}



// FUNCTION 142870560 FUN_142870560 body=264 status=ok
// SIG undefined FUN_142870560(void)

void FUN_142870560(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4)

{
  undefined1 local_28 [32];
  
  if ((DAT_1468b02d8 != 0) && (*(int *)(param_3 + 0x2c) == param_2)) {
    FLinearColor::FLinearColor(local_28,&DAT_1464aa73c);
    FUN_1428a6e00(param_4);
    if (*(char *)(param_3 + 0x30) != '\0') {
      FLinearColor::FLinearColor(local_28,&DAT_1464aa74c);
      FUN_1428a6e00(param_4);
    }
  }
  return;
}



// FUNCTION 142870670 FUN_142870670 body=691 status=ok
// SIG undefined FUN_142870670(void)

void FUN_142870670(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_res18 [4];
  undefined4 local_58;
  int local_54 [7];
  
  if (param_3 != 0) {
    (**(code **)(*param_2 + 0x20))(param_2,local_res18);
    lVar6 = DAT_146b17150;
    cVar3 = (**(code **)(*param_2 + 0x188))(param_2);
    if (((cVar3 == '\0') || (*(undefined8 **)(lVar6 + 0xab8) == (undefined8 *)0x0)) ||
       (cVar3 = (**(code **)**(undefined8 **)(lVar6 + 0xab8))(), cVar3 == '\0')) {
      fVar12 = 100.0;
    }
    else {
      piVar5 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_res18);
      fVar12 = (float)*piVar5 * 0.167;
    }
    local_58 = 100;
    if (param_4 == 0) {
      piVar5 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_res18);
    }
    else {
      piVar5 = (int *)(param_4 + 0x40);
    }
    lVar6 = DAT_146b17150;
    iVar9 = *piVar5;
    if (*(char *)(param_3 + 0x94) == '\0') {
      fVar13 = *(float *)(param_3 + 0x138);
    }
    else {
      fVar13 = 1.0;
    }
    cVar3 = (**(code **)(*param_2 + 0x188))(param_2);
    if (((cVar3 == '\0') || (*(undefined8 **)(lVar6 + 0xab8) == (undefined8 *)0x0)) ||
       (cVar3 = (**(code **)**(undefined8 **)(lVar6 + 0xab8))(), cVar3 == '\0')) {
      plVar2 = DAT_146b17648;
      lVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_54);
      iVar7 = *(int *)(lVar6 + 4);
      fVar14 = (float)(**(code **)(*plVar2 + 0x70))(plVar2);
      fVar14 = fVar14 * (float)iVar7;
    }
    else {
      lVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_res18);
      fVar14 = (float)*(int *)(lVar6 + 4) * 0.4;
    }
    fVar15 = (float)(**(code **)(*DAT_146b17658 + 0x70))();
    local_54[0] = (int)(fVar15 * (float)(int)((float)iVar9 / fVar13 - (float)(int)fVar12));
    local_res18[0] = (**(code **)(*param_2 + 0x180))(param_2,param_3,local_54[0],(int)fVar14);
    lVar6 = DAT_146b17150;
    iVar9 = 0;
    if (0 < *(int *)(DAT_146b17150 + 0xc38)) {
      lVar10 = 0;
      do {
        lVar1 = *(longlong *)(lVar6 + 0xc30);
        if ((*(longlong *)(lVar10 + 0x38 + lVar1) != 0) &&
           ((plVar2 = (longlong *)param_2[10], plVar2 == (longlong *)0x0 ||
            (cVar3 = (**(code **)(*plVar2 + 0x150))(plVar2,lVar1 + 8 + lVar10), cVar3 != '\0')))) {
          bVar11 = *(char *)(lVar10 + 0x58 + lVar1) == '\0';
          puVar8 = local_res18;
          if (bVar11) {
            puVar8 = &local_58;
          }
          iVar7 = 100;
          if (!bVar11) {
            iVar7 = local_54[0];
          }
          uVar4 = (**(code **)(lVar10 + 0x38 + lVar1))
                            (*(int *)(lVar10 + 0x40 + lVar1) + lVar6,param_1,param_2,param_3,iVar7,
                             *puVar8,param_6,param_7);
          *puVar8 = uVar4;
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 0x60;
      } while (iVar9 < *(int *)(lVar6 + 0xc38));
    }
  }
  return;
}



// FUNCTION 142870930 DumpAllTickFunctions body=2176 status=ok
// SIG undefined DumpAllTickFunctions(void)

/* WARNING: Removing unreachable block (ram,0x000142870b75) */
/* WARNING: Removing unreachable block (ram,0x000142870b83) */
/* WARNING: Removing unreachable block (ram,0x000142871090) */
/* WARNING: Removing unreachable block (ram,0x00014287109d) */

void FTickTaskLevel::DumpAllTickFunctions
               (longlong param_1,undefined8 param_2,int *param_3,int *param_4,char param_5,
               char param_6)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  uint *puVar15;
  float fVar16;
  int local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  uint uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  wchar_t *local_c8;
  int local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  uVar6 = UEnum::GetPrivateStaticClass();
  local_100 = FUN_141799410(uVar6,0xffffffffffffffff,L"ETickingGroup",1);
  if (param_5 == '\0') {
    lVar9 = *(longlong *)(param_1 + 0x58);
    while (lVar9 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x30);
      *param_3 = *param_3 + 1;
    }
  }
  else {
    local_f8 = (longlong *)(param_1 + 8);
    iVar11 = *(int *)(param_1 + 0x30);
    puStack_118 = (uint *)(param_1 + 0x18);
    local_120 = 0;
    uStack_11c = 1;
    iStack_10c = 0;
    iStack_108 = 0;
    if (iVar11 != 0) {
      puVar15 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar15 = puStack_118;
      }
      uVar1 = *puVar15;
      local_120 = 0;
      iStack_108 = 0;
      while (uVar1 == 0) {
        lVar9 = (longlong)local_120;
        iStack_108 = iStack_108 + 0x20;
        iVar8 = local_120 + 1;
        bVar3 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_120;
        local_120 = iVar8;
        if (bVar3) goto LAB_142870a71;
        uVar1 = puVar15[lVar9 + 1];
      }
      uStack_11c = -uVar1 & uVar1;
      iVar8 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_10c = (iStack_108 - iVar8) + 0x1f;
      if (iVar11 < iStack_10c) {
LAB_142870a71:
        iStack_10c = iVar11;
      }
    }
    local_110 = 0xffffffff;
    uStack_f0 = CONCAT44(uStack_11c,local_120);
    uStack_70 = 0xffffffff;
    iStack_6c = iStack_10c;
    iStack_68 = iStack_108;
    uStack_64 = uStack_104;
    uStack_e0 = 0xffffffff;
    iStack_dc = iStack_10c;
    local_d8 = iStack_108;
    uStack_d4 = uStack_104;
    local_e8 = puStack_118;
    local_d0 = local_f8;
    local_88 = local_f8;
    uStack_80 = uStack_f0;
    puStack_78 = puStack_118;
    if (iStack_10c < iVar11) {
      do {
        pwVar12 = L"Enabled";
        plVar2 = *(longlong **)(*local_f8 + (longlong)iStack_dc * 0x10);
        lVar9 = plVar2[5];
        if (*(char *)((longlong)plVar2 + 0xf) == '\0') {
          pwVar12 = L"Disabled";
        }
        puVar7 = (undefined8 *)
                 UEnum::GetNameStringByValue
                           (local_100,local_b8,*(undefined1 *)((longlong)plVar2 + 10));
        if (*(int *)(puVar7 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar7;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_c8);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar7;
        }
        FOutputDevice::LogfImpl
                  (param_2,L"%s, %s, ActualStartTickGroup: %s, Prerequesities: %d",puVar14,pwVar12,
                   puVar13,(int)lVar9);
        if (local_c8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        iVar11 = 0;
        if (0 < (int)plVar2[5]) {
          lVar9 = 0;
          do {
            lVar10 = plVar2[4] + lVar9;
            cVar5 = FWeakObjectPtr::IsValid(lVar10);
            if (cVar5 == '\0') {
              FOutputDevice::LogfImpl(param_2,L"    Invalid Prerequisite");
            }
            else {
              puVar7 = (undefined8 *)
                       (**(code **)(**(longlong **)(lVar10 + 8) + 0x10))
                                 (*(longlong **)(lVar10 + 8),local_98);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar13 = &DAT_143f3eda8;
              }
              else {
                puVar13 = (undefined2 *)*puVar7;
              }
              uVar6 = FWeakObjectPtr::Get(lVar10);
              puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(uVar6,local_a8,0);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar14 = &DAT_143f3eda8;
              }
              else {
                puVar14 = (undefined2 *)*puVar7;
              }
              FOutputDevice::LogfImpl(param_2,L"    %s, %s",puVar14,puVar13);
              if (local_a8[0] != 0) {
                FMemory::Free();
              }
              if (local_98[0] != 0) {
                FMemory::Free();
              }
            }
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 0x10;
          } while (iVar11 < (int)plVar2[5]);
        }
        uStack_e0 = uStack_e0 & ~uStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
      } while (iStack_dc < (int)local_e8[6]);
    }
    bVar4 = false;
    bVar3 = false;
    plVar2 = *(longlong **)(param_1 + 0x58);
    fVar16 = 0.0;
    while (plVar2 != (longlong *)0x0) {
      fVar16 = fVar16 + *(float *)(plVar2 + 7);
      if (*(char *)((longlong)plVar2 + 0xf) == '\0') {
        pwVar12 = L"Disabled";
      }
      else if (fVar16 <= 0.0) {
        pwVar12 = L"Enabled";
      }
      else {
        bVar4 = true;
        bVar3 = true;
        FString::PrintfImpl(&local_c8,L"Cooling Down for %.4g seconds",(double)fVar16);
        pwVar12 = L"";
        if (local_c0 != 0) {
          pwVar12 = local_c8;
        }
      }
      lVar9 = plVar2[5];
      puVar7 = (undefined8 *)
               UEnum::GetNameStringByValue
                         (local_100,local_a8,*(undefined1 *)((longlong)plVar2 + 10));
      if (*(int *)(puVar7 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar7;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,local_98);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar7;
      }
      FOutputDevice::LogfImpl
                (param_2,L"%s, %s, ActualStartTickGroup: %s, Prerequesities: %d",puVar14,pwVar12,
                 puVar13,(int)lVar9);
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      if (bVar3) {
        bVar4 = false;
        bVar3 = false;
        if (local_c8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
      iVar11 = 0;
      if (0 < (int)plVar2[5]) {
        lVar9 = 0;
        do {
          lVar10 = plVar2[4] + lVar9;
          cVar5 = FWeakObjectPtr::IsValid(lVar10);
          if (cVar5 == '\0') {
            FOutputDevice::LogfImpl(param_2,L"    Invalid Prerequisite");
          }
          else {
            (**(code **)(**(longlong **)(lVar10 + 8) + 0x10))(*(longlong **)(lVar10 + 8),&local_120)
            ;
            uVar6 = FWeakObjectPtr::Get(lVar10);
            UObjectBaseUtility::GetFullName(uVar6,local_b8,0);
            FOutputDevice::LogfImpl(param_2,L"    %s, %s");
            if (local_b8[0] != 0) {
              FMemory::Free();
            }
            if (CONCAT44(uStack_11c,local_120) != 0) {
              FMemory::Free();
            }
          }
          iVar11 = iVar11 + 1;
          lVar9 = lVar9 + 0x10;
          bVar3 = bVar4;
        } while (iVar11 < (int)plVar2[5]);
      }
      plVar2 = (longlong *)plVar2[6];
      *param_3 = *param_3 + 1;
    }
  }
  *param_3 = *param_3 + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c));
  if (param_6 != '\0') {
    uStack_11c = 1;
    local_f8 = (longlong *)(param_1 + 0x60);
    local_120 = 0;
    iVar11 = *(int *)(param_1 + 0x88);
    puStack_118 = (uint *)(param_1 + 0x70);
    iStack_10c = 0;
    iStack_108 = 0;
    if (iVar11 != 0) {
      puVar15 = *(uint **)(param_1 + 0x80);
      if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
        puVar15 = puStack_118;
      }
      uVar1 = *puVar15;
      iStack_108 = 0;
      local_120 = 0;
      while (uVar1 == 0) {
        lVar9 = (longlong)local_120;
        iStack_108 = iStack_108 + 0x20;
        iVar8 = local_120 + 1;
        bVar3 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_120;
        local_120 = iVar8;
        if (bVar3) goto LAB_142870f87;
        uVar1 = puVar15[lVar9 + 1];
      }
      uStack_11c = -uVar1 & uVar1;
      iVar8 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_10c = (iStack_108 - iVar8) + 0x1f;
      if (iVar11 < iStack_10c) {
LAB_142870f87:
        iStack_10c = iVar11;
      }
    }
    local_110 = 0xffffffff;
    uStack_f0 = CONCAT44(uStack_11c,local_120);
    uStack_70 = 0xffffffff;
    iStack_6c = iStack_10c;
    iStack_68 = iStack_108;
    uStack_64 = uStack_104;
    uStack_e0 = 0xffffffff;
    iStack_dc = iStack_10c;
    local_d8 = iStack_108;
    uStack_d4 = uStack_104;
    local_e8 = puStack_118;
    local_d0 = local_f8;
    local_88 = local_f8;
    uStack_80 = uStack_f0;
    puStack_78 = puStack_118;
    if (iStack_10c < iVar11) {
      do {
        pwVar12 = L"Enabled";
        plVar2 = *(longlong **)(*local_f8 + (longlong)iStack_dc * 0x10);
        lVar9 = plVar2[5];
        if (*(char *)((longlong)plVar2 + 0xf) == '\0') {
          pwVar12 = L"Disabled";
        }
        puVar7 = (undefined8 *)
                 UEnum::GetNameStringByValue
                           (local_100,local_98,*(undefined1 *)((longlong)plVar2 + 10));
        if (*(int *)(puVar7 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar7;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_120);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar7;
        }
        FOutputDevice::LogfImpl
                  (param_2,L"%s, %s, ActualStartTickGroup: %s, Prerequesities: %d",puVar14,pwVar12,
                   puVar13,(int)lVar9);
        if (CONCAT44(uStack_11c,local_120) != 0) {
          FMemory::Free();
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
        iVar11 = 0;
        if (0 < (int)plVar2[5]) {
          lVar9 = 0;
          do {
            lVar10 = plVar2[4] + lVar9;
            cVar5 = FWeakObjectPtr::IsValid(lVar10);
            if (cVar5 == '\0') {
              FOutputDevice::LogfImpl(param_2,L"    Invalid Prerequisite");
            }
            else {
              puVar7 = (undefined8 *)
                       (**(code **)(**(longlong **)(lVar10 + 8) + 0x10))
                                 (*(longlong **)(lVar10 + 8),local_b8);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar13 = &DAT_143f3eda8;
              }
              else {
                puVar13 = (undefined2 *)*puVar7;
              }
              uVar6 = FWeakObjectPtr::Get(lVar10);
              puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(uVar6,local_a8,0);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar14 = &DAT_143f3eda8;
              }
              else {
                puVar14 = (undefined2 *)*puVar7;
              }
              FOutputDevice::LogfImpl(param_2,L"    %s, %s",puVar14,puVar13);
              if (local_a8[0] != 0) {
                FMemory::Free();
              }
              if (local_b8[0] != 0) {
                FMemory::Free();
              }
            }
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 0x10;
          } while (iVar11 < (int)plVar2[5]);
        }
        uStack_e0 = uStack_e0 & ~uStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
      } while (iStack_dc < (int)local_e8[6]);
    }
  }
  *param_4 = *param_4 + (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94));
  return;
}



// FUNCTION 1428711b0 FUN_1428711b0 body=309 status=ok
// SIG undefined FUN_1428711b0(void)

void FUN_1428711b0(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  wchar_t *pwVar4;
  int local_res18 [2];
  int local_res20 [2];
  
  iVar3 = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  FOutputDevice::LogfImpl(param_2,&DAT_143f3eda8);
  if ((param_4 == '\0') || (param_5 == '\0')) {
    pwVar4 = L"Disabled";
    if (param_4 != '\0') {
      pwVar4 = L"Enabled";
    }
  }
  else {
    pwVar4 = L"All";
  }
  FOutputDevice::LogfImpl
            (param_2,
             L"============================ Tick Functions (%s) ============================",pwVar4
            );
  FTickTaskLevel::DumpAllTickFunctions
            (*(undefined8 *)(param_3 + 0x5d8),param_2,local_res18,local_res20,param_4,param_5);
  iVar1 = UWorld::GetNumLevels(param_3);
  if (0 < iVar1) {
    do {
      lVar2 = UWorld::GetLevel(param_3,iVar3);
      if ((*(byte *)(lVar2 + 0x204) & 0x10) != 0) {
        FTickTaskLevel::DumpAllTickFunctions
                  (*(undefined8 *)(lVar2 + 0x140),param_2,local_res18,local_res20,param_4,param_5);
      }
      iVar3 = iVar3 + 1;
      iVar1 = UWorld::GetNumLevels(param_3);
    } while (iVar3 < iVar1);
  }
  FOutputDevice::LogfImpl(param_2,&DAT_143f3eda8);
  FOutputDevice::LogfImpl
            (param_2,L"Total registered tick functions: %d, enabled: %d, disabled: %d.",
             local_res20[0] + local_res18[0],local_res18[0],local_res20[0]);
  FOutputDevice::LogfImpl(param_2,&DAT_143f3eda8);
  return;
}



// FUNCTION 1428712f0 FUN_1428712f0 body=441 status=ok
// SIG undefined FUN_1428712f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428712f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if ((DAT_1468b616c == '\0') && (cVar7 = *(char *)(param_1 + 0xa2e), param_2 != cVar7)) {
    if (param_2 == '\0') {
      plVar3 = (longlong *)(param_1 + 0xa30);
      if ((longlong *)*plVar3 != *(longlong **)(param_1 + 0xa40)) {
        cVar7 = (**(code **)(*(longlong *)*plVar3 + 0x38))();
        if (cVar7 != '\0') {
          (**(code **)(*(longlong *)*plVar3 + 0x30))((longlong *)*plVar3,0);
        }
        plVar5 = *(longlong **)(param_1 + 0xa48);
        lVar6 = *(longlong *)(param_1 + 0xa40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_48 = lVar6;
        plStack_40 = plVar5;
        if (&local_48 != plVar3) {
          local_48 = *plVar3;
          plStack_40 = *(longlong **)(param_1 + 0xa38);
          *plVar3 = lVar6;
          *(longlong **)(param_1 + 0xa38) = plVar5;
          local_38 = lVar6;
          plStack_30 = plVar5;
        }
        plVar5 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_40 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_40 + 8))(plStack_40,1);
            }
          }
        }
      }
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0xa50) == '\0') {
          if ((*DAT_146b17628 == 2) ||
             ((*DAT_146b17628 == 1 && (*(char *)(param_1 + 0xa51) != '\0')))) {
            cVar7 = '\x01';
          }
          else {
            cVar7 = '\0';
          }
        }
        else {
          cVar7 = '\0';
        }
        cVar8 = (**(code **)(*(longlong *)*plVar3 + 0x38))();
        if (cVar7 != cVar8) {
          (**(code **)(*(longlong *)*plVar3 + 0x30))((longlong *)*plVar3,cVar7);
        }
      }
      (**(code **)(*(longlong *)*plVar3 + 0x40))((longlong *)*plVar3,0);
    }
    else {
      if (cVar7 == '\x03') {
        return;
      }
      if ((param_2 == '\x01') && (cVar7 == '\x02')) {
        return;
      }
      if (cVar7 != (char)(param_2 + -1)) {
        FUN_1428712f0();
      }
      (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x40))
                (*(longlong **)(param_1 + 0xa30),param_2);
    }
    *(char *)(param_1 + 0xa2e) = param_2;
  }
  return;
}



// FUNCTION 1428714b0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<enum_EIslandsEnum,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 142871530 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<enum_EIslandsEnum,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1428715b0 FUN_1428715b0 body=103 status=ok
// SIG undefined FUN_1428715b0(void)

void FUN_1428715b0(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar4 = uVar3;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8 + uVar4 + 8) + 0x128) = 0;
      uVar4 = uVar4 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  uVar1 = FUN_1424a1490();
  FUN_14249c8b0(uVar1);
  return;
}



// FUNCTION 142871620 EndRenderFrame body=120 status=ok
// SIG undefined EndRenderFrame(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FViewport::EndRenderFrame
               (longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_18 [2];
  
  QueryPerformanceCounter(local_18);
  FUN_141ec2170(param_2,*(undefined8 *)(param_1 + 0xb8),param_3,param_4);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3ad0 = DAT_146ac3ad0 + (local_res8.s.LowPart - local_18[0]._0_4_);
  _DAT_146ac3af0 = _DAT_146ac3af0 + 1;
  return;
}



// FUNCTION 1428716a0 FUN_1428716a0 body=484 status=ok
// SIG undefined FUN_1428716a0(void)

void FUN_1428716a0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  AdvanceFrameRenderPrerequisite();
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    uVar5 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    (**(code **)(*param_1 + 0x138))(param_1,uVar5);
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_38._0_4_);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar10 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar10 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar10);
    plVar7 = plVar10;
  }
  plVar10 = (longlong *)plVar7[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar7;
    if (plVar10 == (longlong *)0x0) {
      lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = lVar8;
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar8 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar2;
        } while (lVar8 != 0);
        *puVar2 = 0;
      }
      plVar10 = (longlong *)plVar7[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar7[1] = (longlong)plVar10;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar11 = (int)plVar7[2];
  }
  plVar7[1] = *plVar10;
  *(int *)(plVar7 + 2) = iVar11 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *(undefined1 *)(plVar10 + 3) = 0;
  *plVar10 = (longlong)&PTR_FUN_1451df138;
  plVar10[4] = 0;
  plVar10[2] = (longlong)param_1;
  lVar8 = plVar10[4];
  piVar1 = (int *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar8;
  FUN_140445100(plVar10,0,0xff,1);
  if (lVar8 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 142871890 FUN_142871890 body=2437 status=ok
// SIG undefined FUN_142871890(void)

undefined8 FUN_142871890(longlong param_1,longlong param_2,wchar_t *param_3,undefined8 param_4)

{
  wchar_t _C;
  code *pcVar1;
  char cVar2;
  byte bVar3;
  wint_t wVar4;
  wint_t wVar5;
  AKRESULT AVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ErrorCode EVar12;
  ErrorLevel EVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  wchar_t *pwVar20;
  undefined1 uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  wchar_t **ppwVar25;
  __uint64 _Var26;
  byte bVar27;
  wchar_t *pwVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  wchar_t *local_res18;
  ulong in_stack_ffffffffffffff98;
  undefined1 in_stack_ffffffffffffffa0;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  ulonglong local_40;
  wchar_t *local_38 [2];
  
  uVar18 = 0;
  local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffff00000000);
  if (DAT_146b17190 == 0) {
    if (*(longlong *)(param_1 + 0x788) == 0) {
      DAT_146b17190 = 0;
    }
    else {
      DAT_146b17190 = *(longlong *)(param_1 + 0x788) + 0x28;
    }
  }
  local_res18 = param_3;
  cVar2 = FUN_141764d70(param_2,param_3,param_4);
  if (cVar2 == '\x01') {
    return 1;
  }
  if ((DAT_1468c21a0 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*DAT_1468c21a0 + 8))(DAT_1468c21a0,param_2,local_res18,param_4),
     cVar2 == '\x01')) {
    return 1;
  }
  if ((DAT_1468c2208 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*DAT_1468c2208 + 8))(DAT_1468c2208,param_2,local_res18,param_4),
     cVar2 == '\x01')) {
    return 1;
  }
  uVar8 = param_4;
  cVar2 = FOutputDevice::CanBeUsedOnAnyThread(&PTR_PTR_146534f38,param_2,local_res18,param_4);
  if (cVar2 == '\x01') {
    return 1;
  }
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0xa30) != 0) {
      plVar7 = (longlong *)
               FAudioDeviceManager::GetAudioDevice
                         (*(longlong *)(param_1 + 0xa30),*(undefined4 *)(param_1 + 0xa38));
      goto LAB_142871997;
    }
  }
  else {
    plVar7 = (longlong *)UWorld::GetAudioDevice(param_2);
LAB_142871997:
    if ((plVar7 != (longlong *)0x0) &&
       (uVar8 = param_4, cVar2 = (**(code **)(*plVar7 + 8))(plVar7,param_2,local_res18,param_4),
       cVar2 == '\x01')) {
      return 1;
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  cVar2 = FParse::Value(local_res18,L"CULTURE=",&local_48,uVar8);
  if (cVar2 == '\0') {
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    local_48 = (wchar_t *)0x0;
    local_40 = 0;
    cVar2 = FParse::Value(local_res18,L"LANGUAGE=",&local_48,uVar8);
    if (cVar2 == '\0') {
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      ppwVar25 = &local_48;
      _Var26 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      local_48 = (wchar_t *)0x0;
      local_40 = 0;
      cVar2 = FParse::Value(local_res18,L"LOCALE=",ppwVar25);
      if (cVar2 == '\0') {
        if (local_48 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        uVar8 = CONCAT71((int7)((ulonglong)ppwVar25 >> 8),1);
        cVar2 = FParse::Command(&local_res18,L"FLUSHLOG",uVar8);
        if (cVar2 != '\0') {
          plVar7 = (longlong *)FUN_141672640();
          (**(code **)(*plVar7 + 0x40))(plVar7);
          plVar7 = (longlong *)FUN_141672640();
          (**(code **)(*plVar7 + 0x18))(plVar7);
          return 1;
        }
        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        EVar13 = 0x451d66a8;
        cVar2 = FParse::Command(&local_res18);
        uVar24 = (ulong)uVar8;
        if (cVar2 == '\0') {
          uVar24 = (ulong)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          EVar13 = 0x451d66b8;
          cVar2 = FParse::Command(&local_res18);
          if (cVar2 == '\0') {
            cVar2 = FParse::Command(&local_res18,L"STAT",1);
            lVar17 = DAT_146b17190;
            if (cVar2 != '\0') {
              local_58 = local_res18;
              uVar22 = uVar18;
              if (0 < *(int *)(param_1 + 0xc10)) {
                do {
                  lVar9 = *(longlong *)(param_1 + 0xc08);
                  if (*(int *)(uVar22 + 0x10 + lVar9) == 0) {
                    puVar14 = &DAT_143f3eda8;
                  }
                  else {
                    puVar14 = *(undefined2 **)(uVar22 + 8 + lVar9);
                  }
                  cVar2 = FParse::Command(&local_58,puVar14,1);
                  if (cVar2 != '\0') {
                    pcVar1 = *(code **)(uVar22 + 0x48 + lVar9);
                    if (pcVar1 == (code *)0x0) {
                      return 1;
                    }
                    if (lVar17 == 0) {
                      return 0;
                    }
                    uVar8 = (*pcVar1)(param_1 + -0x28 + (longlong)*(int *)(uVar22 + 0x50 + lVar9),
                                      param_2,lVar17,local_58);
                    return uVar8;
                  }
                  uVar15 = (int)uVar18 + 1;
                  uVar18 = (ulonglong)uVar15;
                  uVar22 = uVar22 + 0x60;
                } while ((int)uVar15 < *(int *)(param_1 + 0xc10));
              }
              return 0;
            }
            FParse::Command(&local_res18,L"STOPMOVIECAPTURE",1);
            cVar2 = FParse::Command(&local_res18,L"CRACKURL",1);
            if (cVar2 != '\0') {
              uVar8 = UEngine::HandleCrackURLCommand(param_1 + -0x28,local_res18,param_4);
              return uVar8;
            }
            cVar2 = FParse::Command(&local_res18,L"DEFER",1);
            pwVar28 = local_res18;
            if (cVar2 != '\0') {
              iVar16 = *(int *)(param_1 + 0x798);
              *(int *)(param_1 + 0x798) = iVar16 + 1;
              if (*(int *)(param_1 + 0x79c) < iVar16 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x790,iVar16);
              }
              puVar23 = (undefined8 *)((longlong)iVar16 * 0x10 + *(longlong *)(param_1 + 0x790));
              if (puVar23 == (undefined8 *)0x0) {
                return 1;
              }
              *puVar23 = 0;
              puVar23[1] = 0;
              if (pwVar28 == (wchar_t *)0x0) {
                return 1;
              }
              if (*pwVar28 == L'\0') {
                return 1;
              }
              lVar17 = -1;
              do {
                lVar17 = lVar17 + 1;
              } while (pwVar28[lVar17] != L'\0');
              iVar16 = (int)lVar17 + 1;
              *(int *)(puVar23 + 1) = iVar16;
              if (0 < iVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar23,0);
              }
              FGenericPlatformString::Memcpy(*puVar23,pwVar28,(longlong)iVar16 * 2);
              return 1;
            }
            cVar2 = FParse::Command(&local_res18,L"OPEN",1);
            if (cVar2 != '\0') {
              uVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x408))
                                (param_1 + -0x28,local_res18,param_4,param_2);
              return uVar8;
            }
            cVar2 = FParse::Command(&local_res18,L"STREAMMAP",1);
            if (cVar2 != '\0') {
              uVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x418))
                                (param_1 + -0x28,local_res18,param_4,param_2);
              return uVar8;
            }
            cVar2 = FParse::Command(&local_res18,L"SERVERTRAVEL",1);
            if (cVar2 != '\0') {
              uVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x420))
                                (param_1 + -0x28,local_res18,param_4,param_2);
              return uVar8;
            }
            cVar2 = FParse::Command(&local_res18,L"DISCONNECT",1);
            if (cVar2 != '\0') {
              uVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x430))
                                (param_1 + -0x28,local_res18,param_4,param_2);
              return uVar8;
            }
            cVar2 = FParse::Command(&local_res18,L"RECONNECT",1);
            if (cVar2 != '\0') {
              uVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x438))
                                (param_1 + -0x28,local_res18,param_4,param_2);
              return uVar8;
            }
            cVar2 = FParse::Command(&local_res18,L"TRAVEL",1);
            if (cVar2 != '\0') {
              uVar8 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x410))
                                (param_1 + -0x28,local_res18,param_4,param_2);
              return uVar8;
            }
            cVar2 = FParse::Command(&local_res18,&DAT_1451cf8e4,1);
            pwVar20 = local_res18;
            if (cVar2 == '\0') {
              cVar2 = FParse::Command(&local_res18,L"GAMMA",1);
              if (cVar2 == '\0') {
                cVar2 = FParse::Command(&local_res18,L"SCALABILITY",1);
                if (cVar2 != '\0') {
                  FUN_142734f30(local_res18,param_4);
                  return 1;
                }
                if (DAT_1468b1f88 == (longlong *)0x0) {
                  IConsoleManager::SetupSingleton();
                }
                cVar2 = (**(code **)(*DAT_1468b1f88 + 0xb8))
                                  (DAT_1468b1f88,local_res18,param_4,param_2,0);
                if (cVar2 != '\0') {
                  return 1;
                }
                cVar2 = IStreamingManager::HasShutdown();
                if (cVar2 == '\0') {
                  plVar7 = (longlong *)IStreamingManager::Get();
                  cVar2 = (**(code **)(*plVar7 + 0x40))(plVar7,param_2,local_res18,param_4);
                  if (cVar2 != '\0') {
                    return 1;
                  }
                }
                cVar2 = FParse::Command(&local_res18,L"DUMPTICKS",1);
                if (cVar2 != '\0') {
                  uVar21 = 1;
                  local_58 = local_res18;
                  uVar19 = 1;
                  cVar2 = FParse::Command(&local_58,L"ENABLED",1);
                  if (cVar2 == '\0') {
                    cVar2 = FParse::Command(&local_58,L"DISABLED",1);
                    uVar21 = 1;
                    if (cVar2 != '\0') {
                      uVar21 = 0;
                    }
                  }
                  else {
                    uVar19 = 0;
                  }
                  plVar7 = (longlong *)FUN_142873fe0();
                  (**(code **)(*plVar7 + 0x38))(plVar7,param_4,param_2,uVar21,uVar19);
                  return 1;
                }
                cVar2 = FParse::Command(&local_res18,L"CANCELASYNCLOAD",1);
                if (cVar2 != '\0') {
                  FUN_1416ebe40();
                  return 1;
                }
                return 0;
              }
              local_58 = local_res18;
              if (*local_res18 == L'\0') {
                fVar31 = 2.2;
              }
              else {
                puVar23 = (undefined8 *)FParse::Token(local_38,&local_58,0);
                if (*(int *)(puVar23 + 1) == 0) {
                  pwVar28 = L"";
                }
                else {
                  pwVar28 = (wchar_t *)*puVar23;
                }
                dVar29 = _wtof(pwVar28);
                fVar30 = (float)dVar29;
                fVar31 = 0.5;
                if ((0.5 <= fVar30) && (fVar31 = fVar30, 5.0 <= fVar30)) {
                  fVar31 = 5.0;
                }
                uVar18 = 1;
              }
              *(float *)(param_1 + 0x8d4) = fVar31;
              pwVar28 = local_38[0];
              if (uVar18 == 0) {
                return 1;
              }
            }
            else {
              local_58 = local_res18;
              local_48 = (wchar_t *)0x0;
              local_40 = 0x21;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              FGenericPlatformString::Memcpy(local_48,L"No level found for CE processing",0x42);
              bVar27 = 0;
              plVar7 = (longlong *)UDynamicEntryBox::GetAllEntries(param_2);
              while ((iVar16 = (int)uVar18, -1 < iVar16 && (iVar16 < (int)plVar7[1]))) {
                lVar17 = *(longlong *)(*plVar7 + (longlong)iVar16 * 8);
                if ((lVar17 == 0) || (lVar9 = ULevel::GetLevelScriptActor(lVar17), lVar9 == 0)) {
                  uVar18 = (ulonglong)(iVar16 + 1);
                  pwVar20 = local_58;
                }
                else {
                  uVar18 = local_40 >> 0x20;
                  local_40 = local_40 & 0xffffffff00000000;
                  if ((int)uVar18 != 0) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,0);
                  }
                  uVar8 = ULevel::GetLevelScriptActor(lVar17);
                  pwVar20 = local_58;
                  bVar3 = FUN_141785090(uVar8,local_58,param_4,0,1);
                  bVar27 = bVar27 | bVar3;
                  uVar18 = (ulonglong)(iVar16 + 1);
                }
              }
              pwVar28 = local_48;
              if (bVar27 == 0) {
                puVar23 = (undefined8 *)UObjectBaseUtility::GetPathName(param_2,local_38,0);
                if (*(int *)(puVar23 + 1) == 0) {
                  puVar14 = &DAT_143f3eda8;
                }
                else {
                  puVar14 = (undefined2 *)*puVar23;
                }
                FString::PrintfImpl(&local_58,
                                    L"CE command \'%s\' wasn\'t processed for levels from world \'%s\'."
                                    ,pwVar20,puVar14);
                if (local_48 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                pwVar28 = local_58;
                local_58 = (wchar_t *)0x0;
                local_50 = 0;
                if (local_38[0] != (wchar_t *)0x0) {
                  FMemory::Free();
                }
              }
            }
            goto joined_r0x000142871f07;
          }
        }
        pwVar20 = local_res18;
        EVar12 = (ErrorCode)local_38;
        puVar23 = (undefined8 *)FApp::GetBranchName();
        if (*(int *)(puVar23 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar23;
        }
        uVar8 = FCommandLine::Get();
        uVar10 = FUN_14162b4e0();
        AVar6 = AK::Monitor::PostCode
                          (EVar12,EVar13,uVar24,_Var26,in_stack_ffffffffffffff98,
                           (bool)in_stack_ffffffffffffffa0);
        uVar11 = FUN_1415bb3d0(AVar6);
        FString::PrintfImpl(&local_48,
                            L"GameVersion Branch: %s, Configuration: %s, Build: %s, CommandLine: %s"
                            ,puVar14,uVar11,uVar10,uVar8);
        if (local_38[0] != (wchar_t *)0x0) {
          FMemory::Free();
        }
        pwVar28 = L"";
        if ((int)local_40 != 0) {
          pwVar28 = local_48;
        }
        FOutputDevice::LogfImpl(param_4,&DAT_1451cf9f4,pwVar28);
        pwVar28 = L"";
        if ((int)local_40 != 0) {
          pwVar28 = local_48;
        }
        FUN_1416cf5b0(pwVar28);
        pwVar28 = local_48;
        if (pwVar20 != (wchar_t *)0x0) {
          wVar4 = towupper(0x2d);
          lVar17 = -1;
          do {
            lVar17 = lVar17 + 1;
          } while (L"-display"[lVar17] != L'\0');
          _C = *pwVar20;
          while (pwVar28 = local_48, _C != L'\0') {
            pwVar20 = pwVar20 + 1;
            wVar5 = towupper(_C);
            if ((wVar5 == wVar4) &&
               (iVar16 = _wcsnicmp(pwVar20,L"display",(longlong)((int)lVar17 + -1)),
               pwVar28 = local_48, iVar16 == 0)) break;
            _C = *pwVar20;
          }
        }
      }
      else {
        uVar8 = FInternationalization::Get();
        FInternationalization::SetCurrentLocale(uVar8,&local_48);
        pwVar28 = local_48;
      }
    }
    else {
      uVar8 = FInternationalization::Get();
      FInternationalization::SetCurrentLanguage(uVar8,&local_48);
      pwVar28 = local_48;
    }
  }
  else {
    uVar8 = FInternationalization::Get();
    FInternationalization::SetCurrentCulture(uVar8,&local_48);
    pwVar28 = local_48;
  }
joined_r0x000142871f07:
  if (pwVar28 != (wchar_t *)0x0) {
    FMemory::Free(pwVar28);
  }
  return 1;
}



// FUNCTION 142872220 ExecEngineStat body=299 status=ok
// SIG undefined ExecEngineStat(void)

void UEngine::ExecEngineStat(longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *local_28;
  undefined8 local_20;
  
  local_20 = 6;
  local_28 = (undefined2 *)0x0;
  DAT_146b17190 = param_3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar8 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"STAT ",0xc);
  uVar2 = local_20;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)((longlong)param_4 + lVar6 * 2) != 0);
  iVar5 = (int)lVar6;
  if (iVar5 != 0) {
    iVar1 = (int)local_20;
    lVar6 = (longlong)(int)local_20;
    iVar3 = (uint)((int)local_20 == 0) + (int)local_20 + iVar5;
    local_20 = CONCAT44(local_20._4_4_,iVar3);
    if (local_20._4_4_ < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar2 & 0xffffffff);
      puVar8 = local_28;
    }
    ::_guard_xfg_dispatch_icall_nop
              (puVar8 + (lVar6 - (ulonglong)(iVar1 != 0)),param_4,(longlong)iVar5 * 2);
    (puVar8 + (lVar6 - (ulonglong)(iVar1 != 0)))[iVar5] = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  puVar7 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar7 = puVar8;
  }
  uVar4 = FUN_141672640();
  (**(code **)(lVar6 + 8))(param_1 + 0x28,param_2,puVar7,uVar4);
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return;
}



// FUNCTION 142872350 FUN_142872350 body=35 status=ok
// SIG undefined FUN_142872350(void)

void FUN_142872350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000142872370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 142872380 Execute body=35 status=ok
// SIG undefined Execute(void)

void TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(void),FString>::Execute
               (longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FString::FString(local_18,param_1 + 0x10);
  (**(code **)(param_1 + 8))(uVar1);
  return;
}



// FUNCTION 1428723b0 Execute body=55 status=ok
// SIG undefined Execute(void)

undefined8
TBaseStaticDelegateInstance<FString_const___cdecl(void)>::Execute
          (longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = (**(code **)(param_1 + 8))(local_18);
  FString::FString(param_2,uVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1428723f0 FUN_1428723f0 body=42 status=ok
// SIG undefined FUN_1428723f0(void)

undefined8 FUN_1428723f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x10));
  return 1;
}



// FUNCTION 142872420 ExecuteIfSafe body=37 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1 TBaseStaticDelegateInstance<void___cdecl(void),FString>::ExecuteIfSafe(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FString::FString(local_18,param_1 + 0x10);
  (**(code **)(param_1 + 8))(uVar1);
  return 1;
}



// FUNCTION 142872450 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142863620(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451dfab0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872540 FUN_142872540 body=245 status=ok
// SIG undefined FUN_142872540(void)

void FUN_142872540(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1451dfb90;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872640 FUN_142872640 body=238 status=ok
// SIG undefined FUN_142872640(void)

void FUN_142872640(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142862eb0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_1451dfac0;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872730 FUN_142872730 body=238 status=ok
// SIG undefined FUN_142872730(void)

void FUN_142872730(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142862c50(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1451dfaf0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872820 FUN_142872820 body=70 status=ok
// SIG undefined FUN_142872820(void)

void FUN_142872820(undefined8 *param_1)

{
  FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142578240(param_1[2],param_1 + 3);
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
                    /* WARNING: Could not recover jumptable at 0x000142872863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 142872870 FUN_142872870 body=276 status=ok
// SIG undefined FUN_142872870(void)

void FUN_142872870(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x20))();
    (**(code **)(*(longlong *)param_1[2] + 0x18))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x20))();
    (**(code **)(*(longlong *)param_1[3] + 0x18))();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451dfbb0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872990 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_142863820(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451dfae0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872a80 FUN_142872a80 body=281 status=ok
// SIG undefined FUN_142872a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142872a80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  _DAT_146535468 = param_1[2];
  _DAT_146535470 = param_1[3];
  _DAT_146535478 = param_1[4];
  _DAT_146535480 = param_1[5];
  DAT_146535488 = *(undefined4 *)(param_1 + 6);
  DAT_14653548c = *(undefined4 *)((longlong)param_1 + 0x34);
  DAT_146535490 = *(undefined4 *)(param_1 + 7);
  DAT_146535494 = *(undefined4 *)((longlong)param_1 + 0x3c);
  DAT_146535498 = param_1[8];
  DAT_1465354a0 = *(undefined4 *)(param_1 + 9);
  *param_1 = &PTR_FUN_1451dfba0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872ba0 FUN_142872ba0 body=266 status=ok
// SIG undefined FUN_142872ba0(void)

void FUN_142872ba0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)param_1[2] + 0x138))((longlong *)param_1[2],uVar3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1451df138;
  *(undefined1 *)(param_1 + 3) = 0;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872cb0 FUN_142872cb0 body=237 status=ok
// SIG undefined FUN_142872cb0(void)

void FUN_142872cb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d220(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451df128;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872da0 FUN_142872da0 body=237 status=ok
// SIG undefined FUN_142872da0(void)

void FUN_142872da0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d2a0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451df148;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872e90 FUN_142872e90 body=265 status=ok
// SIG undefined FUN_142872e90(void)

void FUN_142872e90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  if (param_1[2] != 0) {
    FUN_1428647e0(param_1[2],1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1451dea48;
  *(undefined1 *)(param_1 + 3) = 0;
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
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142872fa0 FUN_142872fa0 body=237 status=ok
// SIG undefined FUN_142872fa0(void)

void FUN_142872fa0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d330(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1451dea38;
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
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873090 FUN_142873090 body=237 status=ok
// SIG undefined FUN_142873090(void)

void FUN_142873090(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d4e0(param_1 + 2,param_3,param_1 + 3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_1451df4b8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873180 FUN_142873180 body=237 status=ok
// SIG undefined FUN_142873180(void)

void FUN_142873180(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d610(param_1 + 2,param_3,param_1 + 10);
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_1451df118;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873270 FUN_142873270 body=237 status=ok
// SIG undefined FUN_142873270(void)

void FUN_142873270(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d710(param_1 + 2,param_3,param_1 + 10);
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_1451df0f8;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873360 FUN_142873360 body=237 status=ok
// SIG undefined FUN_142873360(void)

void FUN_142873360(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d810(param_1 + 2,param_3,param_1 + 8);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_1451df108;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873450 FUN_142873450 body=237 status=ok
// SIG undefined FUN_142873450(void)

void FUN_142873450(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14286d8b0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_1451de298;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873540 FUN_142873540 body=271 status=ok
// SIG undefined FUN_142873540(void)

void FUN_142873540(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (*(code *)**(undefined8 **)(param_1[2] + 0x78))
            ((undefined8 *)(param_1[2] + 0x78),uVar3,*(undefined1 *)(param_1 + 3));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1451de2a8;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873650 ExecuteTask body=260 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FTickTaskSequencer::DispatchTickGroup(param_1[2],param_3,*(undefined4 *)(param_1 + 3));
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR_FUN_1451de5d0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873760 ExecuteTask body=268 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FTickTaskSequencer::FResetTickGroupTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
            ((longlong)*(int *)(param_1 + 3) * 0x30 + param_1[2],0);
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR_FUN_1451de5e0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873870 FUN_142873870 body=422 status=ok
// SIG undefined FUN_142873870(void)

void FUN_142873870(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  if ((*(char *)(param_1 + 6) != '\0') && (*(char *)((longlong)param_1 + 0x31) != '\0')) {
    lVar5 = *(longlong *)(param_1[2] + 0x20);
    lVar6 = (longlong)*(int *)(param_1[2] + 0x28) * 0x10 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
      if (*(longlong *)(lVar5 + 8) != 0) {
        FTickFunction::ShowPrerequistes(*(longlong *)(lVar5 + 8),2);
      }
    }
  }
  lVar5 = param_1[2];
  if (*(char *)(lVar5 + 0xf) != '\0') {
    fVar9 = *(float *)(param_1 + 3);
    if (*(float *)(lVar5 + 0x40) == 0.0) {
      fVar8 = -1.0;
    }
    else {
      if ((*(byte *)(lVar5 + 0xc) & 1) == 0) {
        fVar8 = *(float *)(param_1[5] + 0x790);
      }
      else {
        fVar8 = *(float *)(param_1[5] + 0x794);
      }
      if (0.0 <= *(float *)(lVar5 + 0x3c)) {
        fVar9 = fVar8 - *(float *)(lVar5 + 0x3c);
      }
    }
    *(float *)(lVar5 + 0x3c) = fVar8;
    (**(code **)(*(longlong *)param_1[2] + 8))
              ((longlong *)param_1[2],fVar9,*(undefined4 *)((longlong)param_1 + 0x1c),param_3,
               param_1 + 8);
    lVar5 = param_1[2];
  }
  plVar7 = (longlong *)0x0;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_141591a60(param_1[8],param_2,param_3);
  *param_1 = &PTR_FUN_1451de5c0;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142873a20 FUN_142873a20 body=230 status=ok
// SIG undefined FUN_142873a20(void)

void FUN_142873a20(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  
  lVar3 = UWorld::GetActiveLevelCollection(*(undefined8 *)(param_1 + 0x30));
  if ((lVar3 == 0) ||
     (piVar4 = (int *)UWorld::GetActiveLevelCollection(*(undefined8 *)(param_1 + 0x30)),
     *piVar4 == 0)) {
    iVar5 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 0x30);
    *(int *)(param_1 + 0x18) = iVar5 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar5);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 8) =
         *(undefined8 *)(lVar3 + 0x5d8);
  }
  iVar5 = 0;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + *param_2);
      if ((*(byte *)(lVar2 + 0x204) & 0x10) != 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) =
             *(undefined8 *)(lVar2 + 0x140);
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142873b10 FUN_142873b10 body=147 status=ok
// SIG undefined FUN_142873b10(void)

longlong FUN_142873b10(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    if ((iVar5 < 0) || (*(int *)(param_1 + 0xc20) <= iVar5)) {
      return 0;
    }
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar5 * 8);
    if ((*(longlong *)(pcVar1 + 0x288) != 0) &&
       ((*(longlong *)(pcVar1 + 0x240) != 0 && ((*pcVar1 - 1U & 0xfd) == 0)))) {
      plVar3 = (longlong *)UListView::OnItemSelectionChanged();
      plVar4 = (longlong *)*plVar3;
      plVar3 = plVar4 + (int)plVar3[1];
      for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x108) == param_2)) {
          return lVar2;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



// FUNCTION 142873bb0 FUN_142873bb0 body=164 status=ok
// SIG undefined FUN_142873bb0(void)

longlong FUN_142873bb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0xc18);
  plVar5 = plVar3 + *(int *)(param_1 + 0xc20);
  if (plVar3 != plVar5) {
    while (lVar1 = *plVar3, *(longlong *)(lVar1 + 0x288) != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar5) {
        return 0;
      }
    }
    if (0 < *(int *)(lVar1 + 0x250)) {
      plVar5 = *(longlong **)(lVar1 + 0x248);
      lVar4 = 0;
      do {
        lVar2 = *plVar5;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x120) == param_3)) {
          return lVar2;
        }
        lVar4 = lVar4 + 1;
        plVar5 = plVar5 + 2;
      } while (lVar4 < *(int *)(lVar1 + 0x250));
    }
    if (0 < *(int *)(lVar1 + 0x298)) {
      plVar5 = *(longlong **)(lVar1 + 0x290);
      lVar4 = 0;
      do {
        lVar2 = *plVar5;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x120) == param_3)) {
          return lVar2;
        }
        lVar4 = lVar4 + 1;
        plVar5 = plVar5 + 2;
      } while (lVar4 < *(int *)(lVar1 + 0x298));
    }
  }
  return 0;
}



// FUNCTION 142873c60 FUN_142873c60 body=272 status=ok
// SIG undefined FUN_142873c60(void)

longlong FUN_142873c60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar5 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar5; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x1c8) == param_2) goto LAB_142873cb6;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142873cb6:
  if (0 < *(int *)(lVar3 + 0x250)) {
    plVar5 = *(longlong **)(lVar3 + 0x248);
    lVar4 = 0;
    do {
      lVar1 = *plVar5;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x120) == param_3)) {
        return lVar1;
      }
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 2;
    } while (lVar4 < *(int *)(lVar3 + 0x250));
  }
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar5 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar5; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x1c8) == param_2) goto LAB_142873d2a;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142873d2a:
  if (0 < *(int *)(lVar3 + 0x298)) {
    plVar5 = *(longlong **)(lVar3 + 0x290);
    lVar4 = 0;
    do {
      lVar1 = *plVar5;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x120) == param_3)) {
        return lVar1;
      }
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 2;
    } while (lVar4 < *(int *)(lVar3 + 0x298));
  }
  return 0;
}



// FUNCTION 142873d70 FindTimer body=307 status=ok
// SIG undefined FindTimer(void)

longlong FTimerManager::FindTimer(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0xd0) == lVar1) {
      if (param_3 != (int *)0x0) {
        *param_3 = -1;
      }
      return param_1 + 0x50;
    }
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x80);
      uVar5 = uVar3;
      uVar6 = uVar3;
      do {
        iVar4 = (int)uVar5;
        if (*plVar2 == lVar1) {
          if (iVar4 != -1) {
            if (param_3 != (int *)0x0) {
              *param_3 = iVar4;
            }
            return (longlong)iVar4 * 0x90 + *(longlong *)(param_1 + 0x10);
          }
          break;
        }
        uVar5 = (ulonglong)(iVar4 + 1);
        uVar6 = uVar6 + 1;
        plVar2 = plVar2 + 0x12;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x18));
    }
    if (0 < *(int *)(param_1 + 0x28)) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x80);
      uVar5 = uVar3;
      uVar6 = uVar3;
      do {
        iVar4 = (int)uVar5;
        if (*plVar2 == lVar1) {
          if (iVar4 != -1) {
            if (param_3 != (int *)0x0) {
              *param_3 = iVar4;
            }
            return (longlong)iVar4 * 0x90 + *(longlong *)(param_1 + 0x20);
          }
          break;
        }
        uVar5 = (ulonglong)(iVar4 + 1);
        uVar6 = uVar6 + 1;
        plVar2 = plVar2 + 0x12;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x28));
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x80);
      uVar5 = uVar3;
      do {
        iVar4 = (int)uVar3;
        if (*plVar2 == lVar1) {
          if (iVar4 == -1) {
            return 0;
          }
          if (param_3 != (int *)0x0) {
            *param_3 = iVar4;
          }
          return (longlong)iVar4 * 0x90 + *(longlong *)(param_1 + 0x30);
        }
        uVar3 = (ulonglong)(iVar4 + 1);
        uVar5 = uVar5 + 1;
        plVar2 = plVar2 + 0x12;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x38));
    }
  }
  return 0;
}



// FUNCTION 142873eb0 FindTimerInList body=64 status=ok
// SIG undefined FindTimerInList(void)

ulonglong FTimerManager::FindTimerInList(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*param_3 != 0) {
    uVar2 = 0;
    if (0 < (int)param_2[1]) {
      plVar1 = (longlong *)(*param_2 + 0x80);
      uVar3 = uVar2;
      do {
        if (*plVar1 == *param_3) {
          return uVar3;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar2 = uVar2 + 1;
        plVar1 = plVar1 + 0x12;
      } while ((longlong)uVar2 < (longlong)(int)param_2[1]);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142873ef0 FUN_142873ef0 body=124 status=ok
// SIG undefined FUN_142873ef0(void)

void FUN_142873ef0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0xbfffffff;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    DAT_146b17150 = 0;
    (**(code **)(*param_1 + 0x2a8))(param_1);
    _dynamic_initializer_for__ModuleRegistrantAudioCapture__();
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 142873f70 FUN_142873f70 body=52 status=ok
// SIG undefined FUN_142873f70(void)

void FUN_142873f70(longlong param_1,char param_2)

{
  *(float *)(param_1 + 0xa28) = DAT_146535184 + 1.0;
  if ((*(char *)(param_1 + 0xa2c) == '\0') && (param_2 == '\0')) {
    *(undefined1 *)(param_1 + 0xa2c) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xa2c) = 1;
  return;
}



// FUNCTION 142873fb0 FreeTickTaskLevel body=40 status=ok
// SIG undefined FreeTickTaskLevel(void)

void FTickTaskManager::FreeTickTaskLevel(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FTickTaskLevel::~FTickTaskLevel(param_2);
    FMemory::operator_delete(param_2,0x130);
  }
  return;
}



// FUNCTION 142873fe0 FUN_142873fe0 body=265 status=ok
// SIG undefined FUN_142873fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142873fe0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b181f0) {
    _Init_thread_header(&DAT_146b181f0);
    if (DAT_146b181f0 == -1) {
      _DAT_146b181a0 = &PTR__scalar_deleting_destructor__1451de710;
      _DAT_146b181a8 = FUN_142874100();
      _DAT_146b181c0 = 0;
      DAT_146b181b0 = 0;
      _DAT_146b181b8 = 0;
      _DAT_146b181c4 = 2;
      _DAT_146b181cc = 2;
      _DAT_146b181d0 = 0;
      DAT_146b181d8 = 0;
      DAT_146b181e0 = 0;
      _DAT_146b181e8 = 0;
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      (**(code **)(*DAT_1468b1f88 + 0x58))
                (DAT_1468b1f88,L"dumpticks",
                 L"Dumps all tick functions registered with FTickTaskManager to log.",0);
      atexit(`FTickTaskManager::Get'::`2'::_dynamic_atexit_destructor_for__SingletonInstance__);
      _Init_thread_footer(&DAT_146b181f0);
      return &DAT_146b181a0;
    }
  }
  return &DAT_146b181a0;
}



// FUNCTION 1428740f0 thunk_FUN_142873fe0 body=5 status=ok
// SIG undefined thunk_FUN_142873fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * thunk_FUN_142873fe0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b181f0) {
    _Init_thread_header(&DAT_146b181f0);
    if (DAT_146b181f0 == -1) {
      _DAT_146b181a0 = &PTR__scalar_deleting_destructor__1451de710;
      _DAT_146b181a8 = FUN_142874100();
      _DAT_146b181c0 = 0;
      DAT_146b181b0 = 0;
      _DAT_146b181b8 = 0;
      _DAT_146b181c4 = 2;
      _DAT_146b181cc = 2;
      _DAT_146b181d0 = 0;
      DAT_146b181d8 = 0;
      DAT_146b181e0 = 0;
      _DAT_146b181e8 = 0;
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      (**(code **)(*DAT_1468b1f88 + 0x58))
                (DAT_1468b1f88,L"dumpticks",
                 L"Dumps all tick functions registered with FTickTaskManager to log.",0);
      atexit(`FTickTaskManager::Get'::`2'::_dynamic_atexit_destructor_for__SingletonInstance__);
      _Init_thread_footer(&DAT_146b181f0);
      return &DAT_146b181a0;
    }
  }
  return &DAT_146b181a0;
}



// FUNCTION 142874100 FUN_142874100 body=123 status=ok
// SIG undefined FUN_142874100(void)

undefined * FUN_142874100(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b18190) {
    _Init_thread_header(&DAT_146b18190);
    if (DAT_146b18190 == -1) {
      FUN_142860880(&DAT_146b177d8);
      atexit(`FTickTaskSequencer::Get'::`2'::_dynamic_atexit_destructor_for__SingletonInstance__);
      _Init_thread_footer(&DAT_146b18190);
      return &DAT_146b177d8;
    }
  }
  return &DAT_146b177d8;
}



// FUNCTION 142874180 FUN_142874180 body=113 status=ok
// SIG undefined FUN_142874180(void)

undefined8 FUN_142874180(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xa58);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar2 + 0xa8);
  if (uVar1 != 0xffffffff) {
    if (((*(longlong *)(lVar2 + 0x70) != 0) && ((int)(uVar1 & 0xffffff) < *(int *)(lVar2 + 0x68)))
       && (*(char *)((ulonglong)(uVar1 & 0xffffff) + *(longlong *)(lVar2 + 0x60)) ==
           (char)(uVar1 >> 0x18))) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x90) + (ulonglong)(uVar1 & 0xffffff) * 8);
    }
    return 0;
  }
  uVar3 = FUN_142875430(DAT_146b17150);
  return uVar3;
}



// FUNCTION 1428741a0 FUN_1428741a0 body=214 status=ok
// SIG undefined FUN_1428741a0(void)

void FUN_1428741a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_18;
  int local_10;
  
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0xc20))); iVar3 = iVar3 + 1) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar3 * 8) + 0x240);
    if (lVar2 != 0) {
      UGameInstance::GetLocalPlayerIterator(lVar2,&local_18);
      plVar4 = local_18;
      for (; (-1 < local_10 && (local_10 < (int)plVar4[1])); local_10 = local_10 + 1) {
        lVar2 = *(longlong *)(*plVar4 + (longlong)local_10 * 8);
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x30);
          plVar4 = local_18;
        }
      }
    }
  }
  return;
}



// FUNCTION 142874280 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FArchiveReplaceObjectRefBase::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"ReplaceObjectRef",0x22);
  return param_2;
}



// FUNCTION 1428742c0 FUN_1428742c0 body=7 status=ok
// SIG undefined FUN_1428742c0(void)

undefined4 FUN_1428742c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa60);
}



// FUNCTION 1428742d0 FUN_1428742d0 body=8 status=ok
// SIG undefined FUN_1428742d0(void)

undefined8 FUN_1428742d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa58);
}



// FUNCTION 1428742e0 FUN_1428742e0 body=8 status=ok
// SIG undefined FUN_1428742e0(void)

undefined1 * FUN_1428742e0(void)

{
  return &DAT_146535468;
}



// FUNCTION 1428742f0 GetCompletionHandle body=24 status=ok
// SIG undefined GetCompletionHandle(void)

longlong * FTickFunction::GetCompletionHandle(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142874310 FUN_142874310 body=50 status=ok
// SIG undefined FUN_142874310(void)

ulonglong FUN_142874310(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x1e0))();
    *(int *)(param_1 + 2) = (int)uVar1;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 2);
}



// FUNCTION 142874350 FUN_142874350 body=109 status=ok
// SIG undefined FUN_142874350(void)

undefined8 FUN_142874350(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  if (*(byte *)(param_1 + 0xe2) == 0) {
    uVar1 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0xe2);
  }
  FString::PrintfImpl(param_2,L"Render to Texture %dx%d[%s]",*(undefined4 *)(param_1 + 0xc0),
                      *(undefined4 *)(param_1 + 0xc4),
                      (&PTR_u_unknown_1464ca1b0)[(longlong)(int)uVar1 * 5]);
  return param_2;
}



// FUNCTION 1428743c0 FUN_1428743c0 body=105 status=ok
// SIG undefined FUN_1428743c0(void)

undefined8 FUN_1428743c0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  if (*(byte *)(param_1 + 0xd5) == 0) {
    uVar1 = FUN_14046e310(*(undefined1 *)(param_1 + 0xd4));
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0xd5);
  }
  FString::PrintfImpl(param_2,L"Render to Texture Cube %dx%d[%s]",*(undefined4 *)(param_1 + 0xc0),
                      *(undefined4 *)(param_1 + 0xc0),
                      (&PTR_u_unknown_1464ca1b0)[(longlong)(int)uVar1 * 5]);
  return param_2;
}



// FUNCTION 142874440 GetDirectionPropertyName body=292 status=ok
// SIG undefined GetDirectionPropertyName(void)

undefined8 UTimelineTemplate::GetDirectionPropertyName(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  undefined2 *local_18;
  int local_10;
  
  FUN_1428927f0(&local_18,*(undefined8 *)(param_1 + 0x18));
  FUN_141682af0(param_1 + 0x88,local_28,0);
  puVar4 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar4 = local_18;
  }
  FString::PrintfImpl(&local_38,L"%s__Direction_%s",puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  iVar5 = 0;
  lVar3 = 0;
  while( true ) {
    if (local_30 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_30 + -1;
    }
    if (iVar2 <= iVar5) break;
    uVar1 = local_38[lVar3];
    if ((((uVar1 < 0x41) || (0x5a < uVar1)) && (0x19 < (ushort)(uVar1 - 0x61))) &&
       ((uVar1 != 0x5f && ((lVar3 < 1 || (9 < (ushort)(uVar1 - 0x30))))))) {
      local_38[lVar3] = 0x5f;
    }
    iVar5 = iVar5 + 1;
    lVar3 = lVar3 + 1;
  }
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  FName::FName(param_2,puVar4,1);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142874600 FUN_142874600 body=100 status=ok
// SIG undefined FUN_142874600(void)

float FUN_142874600(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  fVar3 = *(float *)(lVar1 + 0xb8);
  if (fVar3 <= 0.0009999999) {
    if (*(byte *)(lVar1 + 0xd5) == 0) {
      uVar2 = FUN_14046e310(*(undefined1 *)(lVar1 + 0xd4));
    }
    else {
      uVar2 = (uint)*(byte *)(lVar1 + 0xd5);
    }
    if ((1 < uVar2 - 9) && ((*(byte *)(lVar1 + 0xd6) & 2) == 0)) {
      return 2.2;
    }
    fVar3 = 1.0;
  }
  return fVar3;
}



// FUNCTION 142874670 FUN_142874670 body=168 status=ok
// SIG undefined FUN_142874670(void)

void FUN_142874670(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  param_2[1] = -0x40800000;
  *param_2 = 0;
  param_2[2] = -0x40800000;
  if (*(longlong **)(param_1 + 0xa30) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x10))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x38))();
      if (cVar1 == '\0') {
        *param_2 = (*(char *)(param_1 + 0xa50) != '\0') + 1;
      }
      else {
        *param_2 = 3;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x20))();
        param_2[1] = iVar2;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x28))();
        param_2[2] = iVar2;
      }
      fVar3 = (float)param_2[2];
      if ((float)param_2[1] <= (float)param_2[2]) {
        fVar3 = (float)param_2[1];
      }
      param_2[1] = (int)fVar3;
    }
  }
  return;
}



// FUNCTION 142874720 GetEventTrackFunctionName body=201 status=ok
// SIG undefined GetEventTrackFunctionName(void)

undefined8
UTimelineTemplate::GetEventTrackFunctionName(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_3 * 0x18);
  FUN_1428927f0(&local_28,*(undefined8 *)(param_1 + 0x18));
  puVar1 = (undefined8 *)FName::ToString(&local_res8,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  FString::PrintfImpl(&local_38,L"%s__%s__EventFunc",puVar2,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar3 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  FName::FName(param_2,puVar3,1);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1428747f0 GetFinishedFunctionName body=137 status=ok
// SIG undefined GetFinishedFunctionName(void)

undefined8 UTimelineTemplate::GetFinishedFunctionName(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  FUN_1428927f0(&local_18,*(undefined8 *)(param_1 + 0x18));
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(&local_28,L"%s__FinishedFunc",puVar1);
  puVar1 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar1 = local_28;
  }
  FName::FName(param_2,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142874880 FUN_142874880 body=91 status=ok
// SIG undefined FUN_142874880(void)

ulonglong FUN_142874880(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = uVar4;
  while ((iVar2 = (int)uVar3, -1 < iVar2 && (iVar2 < *(int *)(param_1 + 0xc20)))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar2 * 8);
    if (*(longlong *)(lVar1 + 0x1c8) == param_2) {
      if (*(longlong *)(lVar1 + 0x240) != 0) {
        uVar4 = UGameInstance::GetFirstGamePlayer();
      }
      return uVar4;
    }
    uVar3 = (ulonglong)(iVar2 + 1);
  }
  return 0;
}



// FUNCTION 1428748e0 GetFirstGamePlayer body=33 status=ok
// SIG undefined GetFirstGamePlayer(void)

undefined8 UEngine::GetFirstGamePlayer(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1428749e0();
  if (*(int *)(puVar1 + 1) != 0) {
    return *(undefined8 *)*puVar1;
  }
  return 0;
}



// FUNCTION 142874910 FUN_142874910 body=103 status=ok
// SIG undefined FUN_142874910(void)

undefined8 FUN_142874910(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_142874956;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142874956:
  if (*(longlong *)(lVar3 + 0x240) == 0) {
    return 0;
  }
  uVar4 = FUN_14244f490(*(longlong *)(lVar3 + 0x240),param_2);
  return uVar4;
}



// FUNCTION 142874980 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FDummyViewport::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDummyViewport",0x1e);
  return param_2;
}



// FUNCTION 1428749c0 GetGamePlayer body=27 status=ok
// SIG undefined GetGamePlayer(void)

undefined8 UEngine::GetGamePlayer(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1428749e0();
  return *(undefined8 *)(*plVar1 + (longlong)param_3 * 8);
}



// FUNCTION 1428749e0 FUN_1428749e0 body=103 status=ok
// SIG undefined FUN_1428749e0(void)

undefined8 * FUN_1428749e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_142874a26;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142874a26:
  if (*(longlong *)(lVar3 + 0x240) == 0) {
    return &DAT_146b17728;
  }
  puVar4 = (undefined8 *)UListView::OnItemSelectionChanged();
  return puVar4;
}



// FUNCTION 142874a50 FUN_142874a50 body=103 status=ok
// SIG undefined FUN_142874a50(void)

undefined8 * FUN_142874a50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x238) == param_2) goto LAB_142874a96;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142874a96:
  if (*(longlong *)(lVar3 + 0x240) == 0) {
    return &DAT_146b17728;
  }
  puVar4 = (undefined8 *)UListView::OnItemSelectionChanged();
  return puVar4;
}



// FUNCTION 142874ac0 FUN_142874ac0 body=39 status=ok
// SIG undefined FUN_142874ac0(void)

longlong FUN_142874ac0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x248);
  if (lVar1 == 0) {
    FUN_14286aa70();
    lVar1 = *(longlong *)(param_1 + 0x248);
  }
  return lVar1;
}



// FUNCTION 142874af0 FUN_142874af0 body=1816 status=ok
// SIG undefined FUN_142874af0(void)

/* WARNING: Removing unreachable block (ram,0x000142874d81) */

undefined8
FUN_142874af0(short *param_1,undefined8 param_2,uint *param_3,uint *param_4,float *param_5,
             int *param_6,undefined1 *param_7,undefined1 *param_8,undefined1 *param_9,
             wchar_t **param_10)

{
  ulonglong uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  undefined2 *puVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  bool bVar23;
  double dVar24;
  wchar_t *local_res8;
  undefined8 local_res10;
  uint *local_res18;
  uint *local_res20;
  wchar_t *local_a8;
  ulonglong local_a0;
  wchar_t *local_98;
  uint local_90;
  int local_8c;
  wchar_t *local_88;
  undefined8 local_80;
  wchar_t *local_78;
  ulonglong local_70;
  undefined2 *local_68;
  undefined8 local_60;
  
  pwVar12 = (wchar_t *)0x0;
  uVar19 = 0;
  local_a8 = (wchar_t *)0x0;
  local_a0 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    lVar16 = -1;
    do {
      lVar16 = lVar16 + 1;
    } while (param_1[lVar16] != 0);
    uVar13 = (int)lVar16 + 1;
    local_a0 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    }
    FGenericPlatformString::Memcpy(local_a8,param_1,(longlong)(int)uVar13 * 2);
  }
  local_98 = (wchar_t *)0x0;
  local_8c = 0;
  local_68 = (undefined2 *)0x0;
  local_60 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"filename=",0x14);
  iVar14 = (int)local_60;
  puVar10 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar10 = local_68;
  }
  iVar6 = FUN_141592950(&local_a8,puVar10,1,0,0xffffffff);
  if (iVar6 != -1) {
    local_78 = (wchar_t *)0x0;
    local_70 = 0;
    FParse::Value(param_1,L"filename=",&local_78,1);
    if (param_10 == &local_78) {
LAB_142874c4d:
      iVar9 = (uint)local_70;
    }
    else {
      lVar16 = (longlong)(int)(uint)local_70;
      local_res8 = local_78;
      *(uint *)(param_10 + 1) = (uint)local_70;
      if (((uint)local_70 != 0) || (*(int *)((longlong)param_10 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_10,local_70 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_10,local_res8,lVar16 * 2);
        goto LAB_142874c4d;
      }
      *(undefined4 *)((longlong)param_10 + 0xc) = 0;
      iVar9 = 0;
    }
    uVar13 = iVar14 - 1;
    if (iVar14 == 0) {
      uVar13 = uVar19;
    }
    uVar7 = uVar19;
    if (iVar9 != 0) {
      uVar7 = iVar9 - 1;
    }
    iVar14 = uVar7 + uVar13;
    if (iVar14 != 0) {
      iVar9 = ((uint)local_a0 - iVar14) - iVar6;
      if (iVar9 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (local_a8 + iVar6,local_a8 + (iVar14 + iVar6),(longlong)iVar9 * 2);
      }
      local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 - iVar14);
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_a8);
    }
    FString::TrimStartAndEndInline(&local_a8);
    if (local_78 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  pwVar20 = pwVar12;
  pwVar22 = pwVar12;
  uVar13 = (uint)local_a0;
  while( true ) {
    iVar14 = (int)pwVar20;
    uVar7 = 0;
    pwVar21 = local_a8;
    while( true ) {
      if (pwVar21 == local_a8 + (int)uVar13) goto LAB_142874cf5;
      if (*pwVar21 == L' ') break;
      pwVar21 = pwVar21 + 1;
    }
    uVar17 = (uint)((longlong)pwVar21 - (longlong)local_a8 >> 1);
    if (uVar17 == 0xffffffff) break;
    uVar15 = uVar13 - 1;
    if (uVar13 == 0) {
      uVar15 = uVar7;
    }
    if (uVar17 < uVar15) {
      uVar15 = uVar17;
    }
    local_88 = (wchar_t *)0x0;
    local_res8 = L"";
    if (uVar13 != 0) {
      local_res8 = local_a8;
    }
    uVar13 = uVar15 + 1;
    if (uVar15 == 0) {
      uVar13 = 0;
    }
    local_80 = (ulonglong)uVar13;
    pwVar21 = pwVar12;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      pwVar21 = local_88;
      uVar13 = (uint)local_80;
      if (0 < (int)(uint)local_80) {
        wcsncpy(local_88,local_res8,(longlong)(int)uVar15);
        pwVar21[(int)uVar15] = L'\0';
      }
    }
    lVar16 = (longlong)iVar14;
    local_90 = iVar14 + 1;
    if (local_8c < (int)local_90) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,pwVar20);
    }
    pwVar22 = local_98;
    pwVar20 = (wchar_t *)(ulonglong)local_90;
    uVar4 = local_80._4_4_;
    local_88 = (wchar_t *)0x0;
    local_80 = 0;
    *(wchar_t **)(local_98 + lVar16 * 8) = pwVar21;
    *(uint *)(local_98 + lVar16 * 8 + 4) = uVar13;
    *(undefined4 *)(local_98 + lVar16 * 8 + 6) = uVar4;
    uVar13 = uVar17 + 0x80000000;
    uVar15 = (uint)local_a0 - 1;
    if ((uint)local_a0 == 0) {
      uVar15 = uVar7;
    }
    if (uVar17 + 1 < uVar15) {
      uVar15 = uVar17 + 1;
    }
    uVar17 = (uint)local_a0 - 1;
    if ((uint)local_a0 == 0) {
      uVar17 = uVar7;
    }
    uVar7 = uVar15;
    if ((uVar15 <= uVar13) && (uVar7 = uVar17, uVar13 < uVar17)) {
      uVar7 = uVar13;
    }
    local_78 = (wchar_t *)0x0;
    local_res8 = L"";
    if ((uint)local_a0 != 0) {
      local_res8 = local_a8;
    }
    iVar14 = uVar7 - uVar15;
    uVar13 = iVar14 + 1;
    if (iVar14 == 0) {
      uVar13 = uVar19;
    }
    local_70 = (ulonglong)uVar13;
    pwVar21 = pwVar12;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      pwVar21 = local_78;
      uVar13 = (uint)local_70;
      if (0 < (int)(uint)local_70) {
        wcsncpy(local_78,local_res8 + (int)uVar15,(longlong)iVar14);
        pwVar21[iVar14] = L'\0';
      }
    }
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar1 = local_70 >> 0x20;
    local_70 = 0;
    local_78 = (wchar_t *)0x0;
    local_a0 = CONCAT44((int)uVar1,uVar13);
    local_a8 = pwVar21;
  }
LAB_142874cf5:
  if ((uVar13 != 0) && (0 < (int)(uVar13 - 1))) {
    local_90 = iVar14 + 1;
    if (local_8c < (int)local_90) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98,pwVar20);
      pwVar22 = local_98;
    }
    pwVar21 = local_a8;
    pwVar20 = (wchar_t *)(ulonglong)local_90;
    pwVar11 = pwVar22 + (longlong)iVar14 * 8;
    pwVar11[0] = L'\0';
    pwVar11[1] = L'\0';
    pwVar11[2] = L'\0';
    pwVar11[3] = L'\0';
    lVar16 = (longlong)(int)(uint)local_a0;
    *(uint *)(pwVar11 + 4) = (uint)local_a0;
    if ((uint)local_a0 == 0) {
      pwVar11[6] = L'\0';
      pwVar11[7] = L'\0';
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pwVar11,local_a0 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(*(void **)pwVar11,pwVar21,lVar16 * 2);
    }
  }
  puVar3 = local_res20;
  puVar2 = local_res18;
  uVar19 = (uint)pwVar20;
  if ((int)uVar19 < 1) {
    FOutputDevice::LogfImpl
              (local_res10,
               L"Error: Bad input. Input should be in either the form \"HighResShot 1920x1080\" or \"HighResShot 2\""
              );
    uVar18 = 0;
    goto LAB_14287517c;
  }
  pwVar21 = L"";
  if (*(int *)(pwVar22 + 4) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)pwVar22;
  }
  cVar5 = FUN_142884010(puVar10,local_res18,local_res20,&local_res8);
  if (cVar5 == '\0') {
    if (*(int *)(pwVar22 + 4) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)pwVar22;
    }
    dVar24 = _wtof(pwVar11);
    if ((0.0 < (float)dVar24) && (cVar5 = FString::IsNumeric(pwVar22), cVar5 != '\0')) {
      *param_5 = (float)dVar24;
LAB_142874fca:
      if ((int)uVar19 < 2) {
        iVar14 = 0;
      }
      else if (*(int *)(pwVar22 + 0xc) == 0) {
        iVar14 = _wtoi(L"");
      }
      else {
        iVar14 = _wtoi(*(wchar_t **)(pwVar22 + 8));
      }
      if ((int)uVar19 < 3) {
        iVar6 = 0;
      }
      else if (*(int *)(pwVar22 + 0x14) == 0) {
        iVar6 = _wtoi(L"");
      }
      else {
        iVar6 = _wtoi(*(wchar_t **)(pwVar22 + 0x10));
      }
      if (3 < (int)uVar19) {
        if (*(int *)(pwVar22 + 0x1c) == 0) {
          uVar7 = _wtoi(L"");
        }
        else {
          uVar7 = _wtoi(*(wchar_t **)(pwVar22 + 0x18));
        }
      }
      if ((int)uVar19 < 5) {
        iVar9 = 0;
      }
      else if (*(int *)(pwVar22 + 0x24) == 0) {
        iVar9 = _wtoi(L"");
      }
      else {
        iVar9 = _wtoi(*(wchar_t **)(pwVar22 + 0x20));
      }
      *param_6 = iVar14;
      param_6[1] = iVar6;
      param_6[2] = uVar7 + iVar14;
      param_6[3] = iVar9 + iVar6;
      bVar23 = false;
      bVar8 = bVar23;
      if (5 < (int)uVar19) {
        if (*(int *)(pwVar22 + 0x2c) == 0) {
          iVar14 = _wtoi(L"");
          bVar8 = iVar14 != 0;
        }
        else {
          iVar14 = _wtoi(*(wchar_t **)(pwVar22 + 0x28));
          bVar8 = iVar14 != 0;
        }
      }
      *param_7 = bVar8;
      if (6 < (int)uVar19) {
        if (*(int *)(pwVar22 + 0x34) == 0) {
          iVar14 = _wtoi(L"");
          bVar23 = iVar14 != 0;
        }
        else {
          iVar14 = _wtoi(*(wchar_t **)(pwVar22 + 0x30));
          bVar23 = iVar14 != 0;
        }
      }
      *param_8 = bVar23;
      if (7 < (int)uVar19) {
        if (*(int *)(pwVar22 + 0x3c) != 0) {
          pwVar21 = *(wchar_t **)(pwVar22 + 0x38);
        }
        iVar14 = _wtoi(pwVar21);
        pwVar12 = (wchar_t *)(ulonglong)(iVar14 != 0);
      }
      uVar18 = 1;
      *param_9 = (char)pwVar12;
      goto LAB_14287517c;
    }
    pwVar12 = 
    L"Error: Bad input. Input should be in either the form \"HighResShot 1920x1080\" or \"HighResShot 2\""
    ;
  }
  else {
    if ((*puVar2 != 0) && (*puVar3 != 0)) {
      if ((DAT_1464c9c64 < *puVar2) || (DAT_1464c9c64 < *puVar3)) {
        FOutputDevice::LogfImpl
                  (local_res10,
                   L"Error: Screenshot size exceeds the maximum allowed texture size (%d x %d)",
                   DAT_1464c9c64,DAT_1464c9c64);
        uVar18 = 0;
        goto LAB_14287517c;
      }
      goto LAB_142874fca;
    }
    pwVar12 = L"Error: Values must be greater than 0 in both dimensions";
  }
  FOutputDevice::LogfImpl(local_res10,pwVar12);
  uVar18 = 0;
LAB_14287517c:
  pwVar12 = pwVar22;
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  while (uVar19 != 0) {
    if (*(longlong *)pwVar12 != 0) {
      FMemory::Free();
    }
    uVar19 = (int)pwVar20 - 1;
    pwVar20 = (wchar_t *)(ulonglong)uVar19;
    pwVar12 = pwVar12 + 8;
  }
  if (pwVar22 != (wchar_t *)0x0) {
    FMemory::Free(pwVar22);
  }
  if (local_a8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar18;
}



// FUNCTION 142875210 GetHighresScreenshotMaskColorArray body=8 status=ok
// SIG undefined GetHighresScreenshotMaskColorArray(void)

undefined8 * FScreenshotRequest::GetHighresScreenshotMaskColorArray(void)

{
  return &DAT_146b17568;
}



// FUNCTION 142875220 GetCastShadowsOnClouds body=10 status=ok
// SIG undefined GetCastShadowsOnClouds(void)

byte FDirectionalLightSceneProxy::GetCastShadowsOnClouds(longlong param_1)

{
  return *(byte *)(param_1 + 0x210) & 1;
}



// FUNCTION 142875230 FUN_142875230 body=15 status=ok
// SIG undefined FUN_142875230(void)

undefined8 FUN_142875230(void)

{
  return *(undefined8 *)(DAT_146b17150 + 0x90);
}



// FUNCTION 142875240 FUN_142875240 body=232 status=ok
// SIG undefined FUN_142875240(void)

void FUN_142875240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b18200) && (_Init_thread_header(&DAT_146b18200), DAT_146b18200 == -1))
  {
    uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    UMaterialInstanceDynamic::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TheTimeline",1);
    DAT_146b181f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b18200);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b181f8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b181f8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b181f8 + 0x30));
  }
  return;
}



// FUNCTION 142875330 GetLocalPlayerFromControllerId body=65 status=ok
// SIG undefined GetLocalPlayerFromControllerId(void)

longlong UEngine::GetLocalPlayerFromControllerId(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_1428749e0();
  plVar3 = (longlong *)*plVar2;
  plVar2 = plVar3 + (int)plVar2[1];
  while( true ) {
    if (plVar3 == plVar2) {
      return 0;
    }
    lVar1 = *plVar3;
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x108) == param_3)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar1;
}



// FUNCTION 142875380 FUN_142875380 body=115 status=ok
// SIG undefined FUN_142875380(void)

longlong FUN_142875380(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar3 = plVar2 + *(int *)(param_1 + 0xc20);
  if (plVar2 != plVar3) {
    while (*(longlong *)(*plVar2 + 0x238) != param_2) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar3) {
        return 0;
      }
    }
    plVar3 = (longlong *)FUN_142874a50();
    plVar2 = (longlong *)*plVar3;
    plVar3 = plVar2 + (int)plVar3[1];
    for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x108) == param_3)) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 142875400 GetLocalPlayerIterator body=36 status=ok
// SIG undefined GetLocalPlayerIterator(void)

undefined8 *
UEngine::GetLocalPlayerIterator(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1428749e0(param_1,param_3);
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 142875430 FUN_142875430 body=27 status=ok
// SIG undefined FUN_142875430(void)

void FUN_142875430(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    FAudioDeviceManager::GetAudioDevice
              (*(longlong *)(param_1 + 0xa58),*(undefined4 *)(param_1 + 0xa60));
    return;
  }
  return;
}



// FUNCTION 142875460 FUN_142875460 body=85 status=ok
// SIG undefined FUN_142875460(void)

undefined4 FUN_142875460(void)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  
  puVar1 = DAT_146b176b0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return puVar1[1];
    }
  }
  return *puVar1;
}



// FUNCTION 1428754c0 FUN_1428754c0 body=622 status=ok
// SIG undefined FUN_1428754c0(void)

void FUN_1428754c0(longlong *param_1,float param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x2d8))();
  }
  lVar5 = DAT_146b176c8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  lVar1 = DAT_146b176e0;
  if (*(int *)(lVar6 + lVar5) != 0) {
    DAT_146b1845c = DAT_146b1845c + param_2;
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    if ((float)*(int *)(lVar5 + lVar1) * 0.001 + 1.0 < DAT_146b1845c) {
      FUN_1416b1760();
      DAT_146b1845c = 0.0;
    }
  }
  lVar5 = DAT_146b176f8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  lVar1 = DAT_146b176b0;
  if (*(int *)(lVar6 + lVar5) == 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    else {
      lVar5 = 0;
    }
    if (((0.0 < *(float *)(lVar5 + lVar1)) && (cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 == '\0')
        ) && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
  }
  else {
    iVar4 = rand();
    fVar7 = DAT_1465354dc + ((float)iVar4 * 0.0003051851 - 5.0);
    DAT_1465354dc = 8.0;
    if ((8.0 <= fVar7) && (DAT_1465354dc = fVar7, 32.0 <= fVar7)) {
      DAT_1465354dc = 32.0;
    }
  }
  return;
}



// FUNCTION 142875730 GetMediumFont body=12 status=ok
// SIG undefined GetMediumFont(void)

undefined8 UEngine::GetMediumFont(void)

{
  return *(undefined8 *)(DAT_146b17150 + 0x70);
}



// FUNCTION 142875740 GetSubtitleFont body=15 status=ok
// SIG undefined GetSubtitleFont(void)

undefined8 UEngine::GetSubtitleFont(void)

{
  return *(undefined8 *)(DAT_146b17150 + 0xd0);
}



// FUNCTION 142875750 GetNetMode body=16 status=ok
// SIG undefined GetNetMode(void)

undefined8 UEngine::GetNetMode(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1428cf800(param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142875760 GetNumGamePlayers body=17 status=ok
// SIG undefined GetNumGamePlayers(void)

undefined4 UEngine::GetNumGamePlayers(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1428749e0();
  return *(undefined4 *)(lVar1 + 8);
}



// FUNCTION 142875780 GetNumGamePlayers body=17 status=ok
// SIG undefined GetNumGamePlayers(void)

undefined4 UEngine::GetNumGamePlayers(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142874a50();
  return *(undefined4 *)(lVar1 + 8);
}



// FUNCTION 1428757a0 GetOrthoProjection body=211 status=ok
// SIG undefined GetOrthoProjection(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IStereoRendering::GetOrthoProjection
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_1464aa7d8;
  param_5[8] = _DAT_1464aa7d0;
  param_5[9] = uVar1;
  uVar1 = _DAT_1464aa7e8;
  param_5[10] = _DAT_1464aa7e0;
  param_5[0xb] = uVar1;
  uVar1 = _DAT_1464aa7f8;
  param_5[0xc] = _DAT_1464aa7f0;
  param_5[0xd] = uVar1;
  uVar1 = uRam00000001464aa808;
  param_5[0xe] = _DAT_1464aa800;
  param_5[0xf] = uVar1;
  *param_5 = param_5[8];
  param_5[1] = param_5[9];
  param_5[2] = param_5[10];
  param_5[3] = param_5[0xb];
  param_5[4] = param_5[0xc];
  param_5[5] = param_5[0xd];
  param_5[6] = param_5[0xe];
  param_5[7] = param_5[0xf];
  param_5[8] = 0x3f800000;
  param_5[9] = 0;
  param_5[10] = 0x3f80000000000000;
  param_5[0xb] = 0;
  param_5[0xc] = 0;
  param_5[0xd] = 0x3f800000;
  *(float *)(param_5 + 0xe) =
       (float)param_2 * *(float *)((longlong)param_5 + 0x4c) * 0.25 + (float)param_2 * 0.5;
  *(undefined4 *)((longlong)param_5 + 0x74) = 0;
  *(undefined4 *)(param_5 + 0xf) = 0;
  *(undefined4 *)((longlong)param_5 + 0x7c) = 0x3f800000;
  return;
}



// FUNCTION 142875880 GetPackageGuid body=238 status=ok
// SIG undefined GetPackageGuid(void)

undefined8 * UEngine::GetPackageGuid(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 local_res10;
  longlong local_18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  local_res10 = param_2;
  puVar4 = (undefined8 *)FName::ToString(&local_res10,local_18);
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(puVar4 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar4;
  }
  FUN_1417848b0(puVar6);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FName::ToString(&local_res10,local_18);
  if (*(int *)(puVar4 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar4;
  }
  lVar5 = FUN_141739590(0,puVar8,(param_3 & 0xff) * 0x80000 + 0x82,0,0,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  lVar7 = 0;
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0xa0), lVar5 != 0)) {
    uVar1 = *(undefined4 *)(lVar5 + 0x34);
    uVar2 = *(undefined4 *)(lVar5 + 0x38);
    uVar3 = *(undefined4 *)(lVar5 + 0x3c);
    *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + 0x30);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    lVar7 = lVar5;
  }
  FUN_14178a260();
  ResetLoaders(lVar7);
  return param_1;
}



// FUNCTION 142875970 GetUISoundVolume body=9 status=ok
// SIG undefined GetUISoundVolume(void)

undefined4 UIndianaGameUserSettings::GetUISoundVolume(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x180);
}



// FUNCTION 142875980 FUN_142875980 body=9 status=ok
// SIG undefined FUN_142875980(void)

undefined4 FUN_142875980(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x184);
}



// FUNCTION 142875990 GetRenderTargetResource body=19 status=ok
// SIG undefined GetRenderTargetResource(void)

longlong UTextureRenderTarget::GetRenderTargetResource(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  lVar2 = 0;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x28) != '\0')) {
    lVar2 = lVar1;
  }
  return lVar2;
}



// FUNCTION 1428759b0 RequestCurrentTime body=24 status=ok
// SIG undefined RequestCurrentTime(void)

undefined8 FMovieSceneTimeController::RequestCurrentTime(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
  return param_2;
}



// FUNCTION 1428759d0 FUN_1428759d0 body=21 status=ok
// SIG undefined FUN_1428759d0(void)

longlong * FUN_1428759d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x140);
  if (*plVar1 == 0) {
    plVar1 = (longlong *)(param_1 + 0x138);
  }
  return plVar1;
}



// FUNCTION 1428759f0 FUN_1428759f0 body=138 status=ok
// SIG undefined FUN_1428759f0(void)

void FUN_1428759f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_141758340();
  if (*(byte *)(param_1 + 0xe2) == 0) {
    uVar1 = FUN_14046e310(*(undefined1 *)(param_1 + 0xe1));
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0xe2);
  }
  lVar2 = (longlong)(int)uVar1;
  *(longlong *)(param_2 + 0x28) =
       *(longlong *)(param_2 + 0x28) +
       (longlong)
       (((*(int *)(param_1 + 0xc0) + -1 + (&DAT_1464ca1b8)[lVar2 * 10]) /
        (int)(&DAT_1464ca1b8)[lVar2 * 10]) *
        ((*(int *)(param_1 + 0xc4) + -1 + (&DAT_1464ca1bc)[lVar2 * 10]) /
        (int)(&DAT_1464ca1bc)[lVar2 * 10]) * (&DAT_1464ca1c4)[lVar2 * 10]);
  return;
}



// FUNCTION 142875a80 FUN_142875a80 body=140 status=ok
// SIG undefined FUN_142875a80(void)

void FUN_142875a80(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_141758340();
  if (*(byte *)(param_1 + 0xd5) == 0) {
    uVar1 = FUN_14046e310(*(undefined1 *)(param_1 + 0xd4));
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0xd5);
  }
  lVar2 = (longlong)(int)uVar1;
  *(longlong *)(param_2 + 0x28) =
       *(longlong *)(param_2 + 0x28) +
       (longlong)
       (((*(int *)(param_1 + 0xc0) + -1 + (&DAT_1464ca1bc)[lVar2 * 10]) /
        (int)(&DAT_1464ca1bc)[lVar2 * 10]) *
        ((*(int *)(param_1 + 0xc0) + -1 + (&DAT_1464ca1b8)[lVar2 * 10]) /
        (int)(&DAT_1464ca1b8)[lVar2 * 10]) * (&DAT_1464ca1c4)[lVar2 * 10] * 6);
  return;
}



// FUNCTION 142875b10 GetSamplerFilter body=20 status=ok
// SIG undefined GetSamplerFilter(void)

undefined1 UTextureLODSettings::GetSamplerFilter(longlong param_1,int param_2)

{
  return *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x18 + (longlong)param_2 * 0x50);
}



// FUNCTION 142875b30 GetSamplerFilter body=55 status=ok
// SIG undefined GetSamplerFilter(void)

undefined1 UTextureLODSettings::GetSamplerFilter(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x49);
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return *(undefined1 *)
              (*(longlong *)(param_1 + 0x28) + 0x18 + (ulonglong)*(byte *)(param_2 + 0x4a) * 0x50);
    }
    return 2;
  }
  return 1;
}



// FUNCTION 142875bc0 GetSmallFont body=12 status=ok
// SIG undefined GetSmallFont(void)

undefined8 UEngine::GetSmallFont(void)

{
  return *(undefined8 *)(DAT_146b17150 + 0x50);
}



// FUNCTION 142875bd0 GetStereoProjectionMatrix body=166 status=ok
// SIG undefined GetStereoProjectionMatrix(void)

float * FFakeStereoRenderingDevice::GetStereoProjectionMatrix
                  (longlong param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 8) * 0.008726646);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  fVar3 = DAT_1464aaa4c;
  if (param_3 == 3) {
    fVar3 = *(float *)(param_1 + 0xc);
  }
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xf] = 0.0;
  *param_2 = 1.0 / fVar4;
  param_2[5] = ((float)iVar1 * (1.0 / fVar4)) / (float)iVar2;
  param_2[0xe] = fVar3;
  param_2[0xb] = 1.0;
  param_2[0xc] = 0.0;
  return param_2;
}



// FUNCTION 142875c80 GetSubtitleFont body=15 status=ok
// SIG undefined GetSubtitleFont(void)

undefined8 UEngine::GetSubtitleFont(void)

{
  return *(undefined8 *)(DAT_146b17150 + 0xb0);
}



// FUNCTION 142875cb0 GetTextureLODGroup body=16 status=ok
// SIG undefined GetTextureLODGroup(void)

longlong UTextureLODSettings::GetTextureLODGroup(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x28);
}


