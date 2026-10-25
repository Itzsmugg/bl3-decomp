// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14235f4c0 FUN_14235f4c0 body=24 status=ok
// SIG undefined FUN_14235f4c0(void)

void FUN_14235f4c0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145050848;
  lVar1 = param_1[3];
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



// FUNCTION 14235f4e0 FUN_14235f4e0 body=159 status=ok
// SIG undefined FUN_14235f4e0(void)

void FUN_14235f4e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x420) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x420) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined ***)(param_1 + 0x3b0) = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x3f0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1000);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x3e0);
  FUN_141edd2d0(param_1 + 0x3b0);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  return;
}



// FUNCTION 14235f580 operator= body=232 status=ok
// SIG undefined operator=(void)

longlong FForceFeedbackAttenuationSettings::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_2 + 0x81);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  if (puVar1 != (undefined8 *)(param_2 + 0x88)) {
    iVar2 = *(int *)(param_2 + 0x90);
    _Src = *(void **)(param_2 + 0x88);
    *(int *)(param_1 + 0x90) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x94) == 0)) {
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x1c);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 14235f670 FUN_14235f670 body=504 status=ok
// SIG undefined FUN_14235f670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14235f670(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  plVar2 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    iVar6 = 0;
    if (0 < local_res8[0]) {
      lVar7 = 0;
      do {
        FUN_14235f870(param_1,*(undefined8 *)(lVar7 + *param_2));
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar6 < local_res8[0]);
    }
  }
  else {
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    TIndirectArray<FModelElement,FDefaultAllocator>::Empty(param_2,local_res8[0]);
    iVar6 = 0;
    if (0 < local_res8[0]) {
      do {
        uVar5 = FMemory::Malloc(0x78);
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar5;
        puVar3 = *(undefined8 **)(*param_2 + (longlong)iVar1 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR__scalar_deleting_destructor__145050848;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          *(undefined8 *)((longlong)puVar3 + 100) = _DAT_1468b5d90;
          uVar4 = DAT_1468b5d98;
          *(undefined4 *)((longlong)puVar3 + 0x6c) = DAT_1468b5d98;
          puVar3[0xb] = *(undefined8 *)((longlong)puVar3 + 100);
          *(undefined4 *)(puVar3 + 0xc) = uVar4;
          *(undefined1 *)(puVar3 + 0xe) = 0;
        }
        FUN_14235f870(param_1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14235f870 FUN_14235f870 body=421 status=ok
// SIG undefined FUN_14235f870(void)

longlong * FUN_14235f870(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong local_res8;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar6 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
    if (iVar6 < 9) {
      lVar7 = operator_new(0x30);
      if (lVar7 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)FUN_14217c900(lVar7);
      }
      *(longlong **)(param_2 + 0x28) = plVar8;
      local_res8 = *plVar8;
      FUN_14253eb20(param_1,&local_res8);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        plVar2 = (longlong *)*plVar8;
        *plVar8 = local_res8;
        if (local_res8 != 0) {
          *(int *)(local_res8 + 0x1c) = *(int *)(local_res8 + 0x1c) + 1;
        }
        if (plVar2 != (longlong *)0x0) {
          piVar1 = (int *)((longlong)plVar2 + 0x1c);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x38))();
          }
        }
      }
      lVar7 = *(longlong *)(param_2 + 0x28);
      local_res8 = *(longlong *)(lVar7 + 8);
      FUN_14276dcd0(param_1,&local_res8);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        plVar8 = *(longlong **)(lVar7 + 8);
        *(longlong *)(lVar7 + 8) = local_res8;
        if (local_res8 != 0) {
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
        }
        if (plVar8 != (longlong *)0x0) {
          plVar2 = plVar8 + 3;
          *(int *)plVar2 = (int)*plVar2 + -1;
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar8 + 0x38))();
          }
        }
      }
    }
  }
  iVar6 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
  if (iVar6 < 0xc) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar9 = (undefined4 *)FGuid::NewGuid(local_28);
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      *(undefined4 *)(param_2 + 0x30) = *puVar9;
      *(undefined4 *)(param_2 + 0x34) = uVar3;
      *(undefined4 *)(param_2 + 0x38) = uVar4;
      *(undefined4 *)(param_2 + 0x3c) = uVar5;
    }
  }
  else {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
    local_18 = local_28;
    local_10 = &local_18;
    FUN_141661f40(&local_18,param_2 + 0x30);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  }
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1,param_2 + 8);
  uVar10 = (**(code **)(*plVar8 + 0x30))(plVar8,param_2 + 0x10);
  FUN_14091a320(uVar10,param_2 + 0x18);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar6 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
    if (iVar6 < 9) {
      FUN_140910980(param_1,*(longlong *)(param_2 + 0x28) + 0x10);
    }
  }
  return param_1;
}



// FUNCTION 14235fa20 FUN_14235fa20 body=520 status=ok
// SIG undefined FUN_14235fa20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14235fa20(longlong *param_1)

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
  (**(code **)(*(longlong *)(*param_1 + 0x488) + 0x28))();
  (**(code **)(*(longlong *)(*param_1 + 0x3a0) + 0x28))();
  lVar2 = *param_1;
  iVar3 = 0;
  plVar4 = *(longlong **)(lVar2 + 0x590);
  if (*(longlong **)(lVar2 + 0x590) == (longlong *)0x0) {
    plVar4 = (longlong *)(lVar2 + 0x4e0);
  }
  plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0x598) * 0xb;
  if (plVar4 != plVar5) {
    do {
      (**(code **)(*plVar4 + 0x28))(plVar4);
      plVar4 = plVar4 + 0xb;
    } while (plVar4 != plVar5);
    lVar2 = *param_1;
  }
  local_118 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_60 = 0;
  uStack_58 = 0;
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
  FUN_1426fb810(lVar2 + 0x488,lVar2 + 0x5c8,&local_118);
  FUN_142723e40(*param_1 + 0x3a0,*param_1 + 0x5c8,&local_118);
  FUN_142723ca0(*param_1 + 0x3a0,*param_1 + 0x5c8,&local_118);
  FUN_142723be0(*param_1 + 0x3a0,*param_1 + 0x5c8,&local_118,0);
  lVar2 = *param_1;
  if (0 < *(int *)(lVar2 + 0x598)) {
    do {
      lVar1 = *(longlong *)(lVar2 + 0x590);
      if (*(longlong *)(lVar2 + 0x590) == 0) {
        lVar1 = lVar2 + 0x4e0;
      }
      FUN_142723a20(lVar1 + (longlong)iVar3 * 0x58,iVar3,lVar2 + 0x5c8,&local_118);
      lVar2 = *param_1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(lVar2 + 0x598));
  }
  FUN_142578240(lVar2 + 0x5c8,&local_118);
  (**(code **)(*(longlong *)(*param_1 + 0x5c8) + 0x28))();
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14235fc30 FUN_14235fc30 body=488 status=ok
// SIG undefined FUN_14235fc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14235fc30(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
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
  FRenderResource::UpdateRHI(param_1[1] + 0x488);
  FRenderResource::UpdateRHI(param_1[1] + 0x3a0);
  lVar1 = param_1[1];
  iVar2 = 0;
  lVar3 = *(longlong *)(lVar1 + 0x590);
  if (*(longlong *)(lVar1 + 0x590) == 0) {
    lVar3 = lVar1 + 0x4e0;
  }
  lVar4 = (longlong)*(int *)(lVar1 + 0x598) * 0x58 + lVar3;
  if (lVar3 != lVar4) {
    do {
      FRenderResource::UpdateRHI(lVar3);
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != lVar4);
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
  FUN_1426fb810(lVar1 + 0x488,*param_1,&local_118);
  FUN_142723e40(param_1[1] + 0x3a0,*param_1,&local_118);
  FUN_142723ca0(param_1[1] + 0x3a0,*param_1,&local_118);
  FUN_142723be0(param_1[1] + 0x3a0,*param_1,&local_118,0);
  lVar1 = param_1[1];
  if (0 < *(int *)(lVar1 + 0x598)) {
    do {
      lVar3 = *(longlong *)(lVar1 + 0x590);
      if (*(longlong *)(lVar1 + 0x590) == 0) {
        lVar3 = lVar1 + 0x4e0;
      }
      FUN_142723a20(lVar3 + (longlong)iVar2 * 0x58,iVar2,*param_1,&local_118);
      lVar1 = param_1[1];
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x598));
  }
  FUN_142578240(*param_1,&local_118);
  FRenderResource::UpdateRHI(*param_1);
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14235ff60 FUN_14235ff60 body=97 status=ok
// SIG undefined FUN_14235ff60(void)

undefined8 * FUN_14235ff60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14505ada8;
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



// FUNCTION 14235ffd0 FUN_14235ffd0 body=97 status=ok
// SIG undefined FUN_14235ffd0(void)

undefined8 * FUN_14235ffd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14505adb8;
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



// FUNCTION 142360040 FUN_142360040 body=97 status=ok
// SIG undefined FUN_142360040(void)

undefined8 * FUN_142360040(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145059d90;
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



// FUNCTION 1423600b0 FUN_1423600b0 body=97 status=ok
// SIG undefined FUN_1423600b0(void)

undefined8 * FUN_1423600b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145052590;
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



// FUNCTION 142360120 FUN_142360120 body=97 status=ok
// SIG undefined FUN_142360120(void)

undefined8 * FUN_142360120(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145056dd8;
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



// FUNCTION 142360190 FUN_142360190 body=97 status=ok
// SIG undefined FUN_142360190(void)

undefined8 * FUN_142360190(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145059d80;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142360200 FUN_142360200 body=97 status=ok
// SIG undefined FUN_142360200(void)

undefined8 * FUN_142360200(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145059d70;
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



// FUNCTION 142360270 FUN_142360270 body=120 status=ok
// SIG undefined FUN_142360270(void)

undefined8 * FUN_142360270(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0xd];
  *param_1 = &PTR_FUN_14504ee60;
  if (lVar1 != 0) {
    FComponentInstanceDataCache::~FComponentInstanceDataCache(lVar1);
    FMemory::operator_delete(lVar1,0x60);
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  FUN_1420d82a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1423602f0 FUN_1423602f0 body=43 status=ok
// SIG undefined FUN_1423602f0(void)

undefined8 * FUN_1423602f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504f408;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 142360320 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Audio::FEarlyReflections::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14271e9f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 142360360 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FForceFeedbackManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 8) = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1423603d0 FUN_1423603d0 body=43 status=ok
// SIG undefined FUN_1423603d0(void)

undefined8 * FUN_1423603d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504f408;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 142360400 FUN_142360400 body=102 status=ok
// SIG undefined FUN_142360400(void)

longlong FUN_142360400(longlong param_1,ulonglong param_2)

{
  TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
            (param_1 + 0x3c0);
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 142360470 FUN_142360470 body=43 status=ok
// SIG undefined FUN_142360470(void)

undefined8 * FUN_142360470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504f408;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 1423604a0 FUN_1423604a0 body=318 status=ok
// SIG undefined FUN_1423604a0(void)

undefined8 * FUN_1423604a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = param_1 + 0xb9;
  *param_1 = &PTR_FUN_145058470;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  (**(code **)(param_1[0x91] + 0x30))();
  (**(code **)(param_1[0x74] + 0x30))(param_1 + 0x74);
  plVar2 = (longlong *)param_1[0xb2];
  if ((longlong *)param_1[0xb2] == (longlong *)0x0) {
    plVar2 = param_1 + 0x9c;
  }
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0xb3) * 0xb;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 0xb) {
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1a4);
  if (param_1[0x199] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x183);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x182);
  FUN_141edd2d0(plVar1);
  if (param_1[0xb5] != 0) {
    FMemory::Free();
  }
  FUN_140944f50(param_1 + 0x9c);
  FPositionVertexBuffer::~FPositionVertexBuffer(param_1 + 0x91);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(param_1 + 0x74);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd40);
  }
  return param_1;
}



// FUNCTION 1423605e0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FModelElement::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145050848;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142360630 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SHorizontalBox>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504f408;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 142360660 FUN_142360660 body=52 status=ok
// SIG undefined FUN_142360660(void)

undefined8 FUN_142360660(undefined8 param_1,ulonglong param_2)

{
  FUN_1420d82a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1423606a0 `scalar_deleting_destructor' body=92 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FStaticShadowDepthMap::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142360700 FUN_142360700 body=52 status=ok
// SIG undefined FUN_142360700(void)

undefined8 FUN_142360700(undefined8 param_1,ulonglong param_2)

{
  FUN_1405911f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 142360740 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNiagaraSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14235f4e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 142360780 FUN_142360780 body=52 status=ok
// SIG undefined FUN_142360780(void)

undefined8 FUN_142360780(undefined8 param_1,ulonglong param_2)

{
  FUN_1405911f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 1423607c0 FUN_1423607c0 body=99 status=ok
// SIG undefined FUN_1423607c0(void)

longlong FUN_1423607c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2e8) = &PTR_FUN_143f48bb8;
  FRichCurve::~FRichCurve(param_1 + 0x310);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 142360830 FUN_142360830 body=67 status=ok
// SIG undefined FUN_142360830(void)

longlong FUN_142360830(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2e8);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 142360880 FUN_142360880 body=52 status=ok
// SIG undefined FUN_142360880(void)

undefined8 FUN_142360880(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f760();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 1423608c0 FUN_1423608c0 body=221 status=ok
// SIG undefined FUN_1423608c0(void)

longlong FUN_1423608c0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>::
  ~TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>(param_1 + 0x1e8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1d8);
  TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>::
  ~TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>(param_1 + 0x1c8);
  FUN_14235f3b0(param_1 + 0x1b8);
  TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>::
  ~TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x1a0);
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      FInputAxisUnifiedDelegate::~FInputAxisUnifiedDelegate(lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x198);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_14235f2f0(param_1 + 0x188);
  FUN_14235f230(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 1423609a0 FUN_1423609a0 body=158 status=ok
// SIG undefined FUN_1423609a0(void)

longlong FUN_1423609a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 142360a40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNavigationSystemV1::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14235f4e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x430);
  }
  return param_1;
}



// FUNCTION 142360a80 FUN_142360a80 body=102 status=ok
// SIG undefined FUN_142360a80(void)

longlong FUN_142360a80(longlong param_1,ulonglong param_2)

{
  TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
            (param_1 + 0x718);
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 142360af0 FUN_142360af0 body=52 status=ok
// SIG undefined FUN_142360af0(void)

undefined8 FUN_142360af0(undefined8 param_1,ulonglong param_2)

{
  FUN_14235f4e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x450);
  }
  return param_1;
}



// FUNCTION 142360b30 FUN_142360b30 body=73 status=ok
// SIG undefined FUN_142360b30(void)

longlong FUN_142360b30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x700);
  }
  return param_1;
}



// FUNCTION 142360b80 FUN_142360b80 body=85 status=ok
// SIG undefined FUN_142360b80(void)

longlong FUN_142360b80(longlong param_1,ulonglong param_2)

{
  FUN_140b9c500(param_1 + 0x700);
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 142360be0 FUN_142360be0 body=128 status=ok
// SIG undefined FUN_142360be0(void)

longlong FUN_142360be0(longlong param_1,uint param_2)

{
  TIndirectArray<FModelElement,FDefaultAllocator>::Empty(param_1 + 0x720,0);
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1440facf0;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 142360c60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 142360ca0 FUN_142360ca0 body=73 status=ok
// SIG undefined FUN_142360ca0(void)

longlong FUN_142360ca0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 142360cf0 FUN_142360cf0 body=90 status=ok
// SIG undefined FUN_142360cf0(void)

longlong FUN_142360cf0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 142360d50 FUN_142360d50 body=52 status=ok
// SIG undefined FUN_142360d50(void)

undefined8 FUN_142360d50(undefined8 param_1,ulonglong param_2)

{
  FUN_14235f4e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x480);
  }
  return param_1;
}



// FUNCTION 142360d90 FUN_142360d90 body=85 status=ok
// SIG undefined FUN_142360d90(void)

longlong FUN_142360d90(longlong param_1,ulonglong param_2)

{
  FBoneContainer::~FBoneContainer(param_1 + 0xa40);
  if (*(longlong *)(param_1 + 0xa30) != 0) {
    FMemory::Free();
  }
  FUN_14061f9e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb70);
  }
  return param_1;
}



// FUNCTION 142360df0 Activate body=70 status=ok
// SIG undefined Activate(void)

void UForceFeedbackComponent::Activate(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2c8))();
    if (cVar1 != '\x01') goto LAB_142360e20;
  }
  (**(code **)(*param_1 + 0x548))(param_1,0);
LAB_142360e20:
  FUN_14232c410(param_1,param_2);
  return;
}



// FUNCTION 142360e40 FUN_142360e40 body=105 status=ok
// SIG undefined FUN_142360e40(void)

void FUN_142360e40(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  
  if (*(char *)((longlong)param_1 + 0x245) != '\0') {
    if (param_2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x2c8))();
      if (cVar2 == '\0') goto LAB_142360e7e;
    }
    if (param_1[0x2f] != 0) {
      bVar1 = true;
      goto LAB_142360e81;
    }
  }
LAB_142360e7e:
  bVar1 = false;
LAB_142360e81:
  FUN_14232c410(param_1,param_2);
  if (bVar1) {
    *(undefined1 *)((longlong)param_1 + 0x245) = 0;
  }
  return;
}



// FUNCTION 142360eb0 FUN_142360eb0 body=394 status=ok
// SIG undefined FUN_142360eb0(void)

longlong FUN_142360eb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)
             SharedPointerInternals::
             NewIntrusiveReferenceController<FInputActionBinding,FInputActionBinding_const_&>
                       (param_2);
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar7 = local_10;
  plVar1 = local_18;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)(param_1 + 0x1d8);
  iVar9 = *(int *)(param_1 + 0x1e0);
  *(int *)(param_1 + 0x1e0) = iVar9 + 1;
  if (*(int *)(param_1 + 0x1e4) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar9);
  }
  plVar8 = local_10;
  plVar10 = (longlong *)((longlong)iVar9 * 0x10 + *plVar3);
  *plVar10 = (longlong)plVar1;
  plVar10[1] = (longlong)plVar7;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  lVar6 = *(longlong *)(*plVar3 + -0x10 + (longlong)*(int *)(param_1 + 0x1e0) * 0x10);
  bVar4 = *(byte *)(lVar6 + 2);
  if (bVar4 < 2) {
    iVar9 = *(int *)(param_1 + 0x1e0) + -2;
    lVar11 = (longlong)iVar9;
    if (-1 < iVar9) {
      lVar12 = lVar11 << 4;
      do {
        lVar5 = *(longlong *)(lVar12 + *plVar3);
        if (*(longlong *)(lVar5 + 8) == *(longlong *)(lVar6 + 8)) {
          if ((*(byte *)(lVar5 + 1) & 1) != 0) {
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 1;
            break;
          }
          if ((bool)*(char *)(lVar5 + 2) == (bVar4 == 0)) {
            *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | 1;
            *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 1;
          }
        }
        lVar12 = lVar12 + -0x10;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  lVar12 = (longlong)*(int *)(param_1 + 0x1f0) * 0x70 + lVar11;
  for (; lVar11 != lVar12; lVar11 = lVar11 + 0x70) {
    *(undefined4 *)(lVar11 + 8) = 0;
  }
  return lVar6;
}



// FUNCTION 142361040 FUN_142361040 body=111 status=ok
// SIG undefined FUN_142361040(void)

void FUN_142361040(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar2 = *(undefined4 *)(param_2 + 1);
  iVar3 = *(int *)(param_1 + 0x230);
  uVar1 = *param_2;
  uStack_1c = CONCAT31(uStack_1c._1_3_,param_3);
  *(int *)(param_1 + 0x230) = iVar3 + 1;
  if (*(int *)(param_1 + 0x234) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x228),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x228);
  lVar5 = (longlong)iVar3 * 0x1c;
  *(undefined8 *)(lVar5 + lVar4) = uVar1;
  ((undefined8 *)(lVar5 + lVar4))[1] = CONCAT44(uStack_1c,uVar2);
  *(undefined8 *)(lVar5 + 0x10 + lVar4) = local_18;
  *(undefined4 *)(lVar5 + 0x18 + lVar4) = local_10;
  return;
}



// FUNCTION 1423610b0 FUN_1423610b0 body=195 status=ok
// SIG undefined FUN_1423610b0(void)

void FUN_1423610b0(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6f8);
  *(int *)(param_1 + 0x6f8) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x6f0,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x6f0) + (longlong)iVar2 * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xfffffffe;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xfffffffe;
  *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) | (uint)param_4;
  puVar1[4] = param_7;
  *(undefined4 *)((longlong)puVar1 + 0x14) = param_5;
  *(undefined4 *)(puVar1 + 3) = param_6;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142361180 FUN_142361180 body=147 status=ok
// SIG undefined FUN_142361180(void)

void FUN_142361180(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_142399f40();
  if (cVar1 != '\0') {
    cVar1 = FUN_14239a1f0(param_1);
    if ((((cVar1 != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) &&
        (1e-05 < *(float *)(param_1 + 0x2d0) * 1000.0)) &&
       ((1e-05 < *(float *)(param_1 + 0x330) &&
        ((*(longlong *)(param_1 + 0x20) == 0 ||
         ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) >> 4 & 1) == 0)))))) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x000142361206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar2 + 0x1b8) + 0x170))(*(longlong **)(lVar2 + 0x1b8),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142361220 FUN_142361220 body=48 status=ok
// SIG undefined FUN_142361220(void)

void FUN_142361220(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x208) != 0) {
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_14269c750(*(longlong *)(param_1 + 0x208),&local_18);
  }
  return;
}



// FUNCTION 142361250 FUN_142361250 body=49 status=ok
// SIG undefined FUN_142361250(void)

void FUN_142361250(longlong param_1,undefined8 param_2)

{
  FUN_142381330();
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FComponentInstanceDataCache::AddReferencedObjects(*(longlong *)(param_1 + 0x68),param_2);
  }
  return;
}



// FUNCTION 142361290 AddReferencedObjects body=75 status=ok
// SIG undefined AddReferencedObjects(void)

void FForceFeedbackManager::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10,0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}



// FUNCTION 1423612e0 FUN_1423612e0 body=55 status=ok
// SIG undefined FUN_1423612e0(void)

void FUN_1423612e0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x18))();
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142361320 FUN_142361320 body=179 status=ok
// SIG undefined FUN_142361320(void)

void FUN_142361320(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x6f8,param_1,0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x728)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x720));
      (**(code **)(*param_2 + 0x38))(param_2,lVar1 + 8,param_1,0);
      (**(code **)(*param_2 + 0x38))(param_2,lVar1 + 0x10,param_1);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x728));
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1423613e0 FUN_1423613e0 body=19 status=ok
// SIG undefined FUN_1423613e0(void)

void FUN_1423613e0(longlong param_1)

{
  *(byte *)(param_1 + 0x2d8) = *(byte *)(param_1 + 0x2d8) | 0x10;
  FForceFeedbackAttenuationSettings::operator=(param_1 + 0x2e8);
  return;
}



// FUNCTION 142361460 FUN_142361460 body=88 status=ok
// SIG undefined FUN_142361460(void)

bool FUN_142361460(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2 - *(float *)(param_1 + 0x220);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x224);
  fVar2 = param_2[2] - *(float *)(param_1 + 0x228);
  fVar1 = *(float *)(param_1 + 0x440) + param_2[6];
  return fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <= fVar1 * fVar1;
}



// FUNCTION 1423614c0 FUN_1423614c0 body=278 status=ok
// SIG undefined FUN_1423614c0(void)

undefined8 FUN_1423614c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  cVar1 = FUN_1423a39c0();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x147) = 0;
    if (*(int *)((longlong)param_1 + 0xa3c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x146,0);
    }
    return 0;
  }
  if ((int)param_1[0x147] != *(int *)(param_1[0xe3] + 0x160)) {
    TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x146,param_1[0xe3] + 0x168);
    iVar2 = (int)param_1[0x147];
    iVar3 = 0;
    local_38 = 0;
    local_2c = 0;
    local_30 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      iVar2 = (int)param_1[0x147];
    }
    if (0 < iVar2) {
      do {
        *(short *)(local_38 + (longlong)iVar3 * 2) = (short)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[0x147]);
    }
    local_28[0] = 0;
    local_20 = 0;
    local_18 = 0;
    FBoneContainer::InitializeTo(param_1 + 0x148,&local_38,local_28,param_1[0xe3]);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  FUN_1423684e0(param_1);
  (**(code **)(*param_1 + 0x990))(param_1);
  return 1;
}



// FUNCTION 1423615e0 FUN_1423615e0 body=384 status=ok
// SIG undefined FUN_1423615e0(void)

void FUN_1423615e0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *local_18;
  int local_10;
  
  FUN_142381ae0();
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(longlong *)(param_2 + 0x2e8) = lVar1;
  if (*(longlong *)(param_2 + 0x2d8) != 0) {
    if (lVar1 != 0) {
      FName::ToString((longlong *)(param_2 + 0x2e8),&local_18);
      puVar5 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar5 = local_18;
      }
      cVar3 = (**(code **)(**(longlong **)(param_2 + 0x2d8) + 0x138))
                        (*(longlong **)(param_2 + 0x2d8),puVar5,0,2);
      if (cVar3 != '\0') {
        puVar5 = &DAT_143f3eda8;
        if (local_10 != 0) {
          puVar5 = local_18;
        }
        (**(code **)(**(longlong **)(param_2 + 0x2d8) + 0x138))
                  (*(longlong **)(param_2 + 0x2d8),puVar5,0,5);
      }
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_14232ea00(*(longlong *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x2d8),param_3);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2d8) + 0x168);
    if (lVar1 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x70);
      lVar7 = (longlong)*(int *)(param_1 + 0x78) * 0x40 + lVar6;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
        lVar4 = FWeakObjectPtr::Get(lVar6);
        if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x168), lVar2 != 0)) {
          FUN_1422279d0(lVar4,&DAT_146532190);
          FUN_142382f60(lVar2,lVar1,&DAT_146532180,*(undefined8 *)(lVar6 + 8));
          FUN_142398770(lVar2,lVar6 + 0x10,0,0,0);
          FUN_140942fb0(lVar2,0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142361760 FUN_142361760 body=65 status=ok
// SIG undefined FUN_142361760(void)

void FUN_142361760(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_142381ae0();
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  uVar2 = *(undefined4 *)(param_1 + 0x98);
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_2 + 0x2d0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 0x2d4) = uVar1;
  *(undefined4 *)(param_2 + 0x2d8) = uVar2;
  *(undefined4 *)(param_2 + 0x2dc) = uVar3;
  *(undefined4 *)(param_2 + 0x30c) = *(undefined4 *)(param_1 + 0xa0);
  FUN_1423424e0(param_2);
  return;
}



// FUNCTION 1423617b0 FUN_1423617b0 body=364 status=ok
// SIG undefined FUN_1423617b0(void)

void FUN_1423617b0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined1 local_88 [128];
  
  local_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_9c = *(undefined4 *)(param_1 + 0xac);
  fVar1 = *(float *)(param_1 + 0xfc);
  fVar2 = param_2[1];
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  fStack_a4 = fVar2 + *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0xf4);
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  uVar11 = *(undefined8 *)(param_1 + 0x98);
  local_c8._0_4_ = (undefined4)uVar8;
  local_c8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_c0._0_4_ = (undefined4)uVar9;
  uStack_c0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  fVar4 = param_2[2];
  fStack_a0 = fVar4 + *(float *)(param_1 + 0xa8);
  fVar5 = *(float *)(param_1 + 0xf8);
  fVar6 = *param_2;
  local_a8 = fVar6 + *(float *)(param_1 + 0xa0);
  fVar7 = *(float *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x70) = local_d8;
  *(undefined8 *)(param_1 + 0x78) = uStack_d0;
  local_b8._0_4_ = (undefined4)uVar10;
  local_b8._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_b0._0_4_ = (undefined4)uVar11;
  uStack_b0._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
  *(undefined4 *)(param_1 + 0x80) = (undefined4)local_c8;
  *(undefined4 *)(param_1 + 0x84) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_c0;
  *(undefined4 *)(param_1 + 0x8c) = uStack_c0._4_4_;
  *(undefined4 *)(param_1 + 0x90) = (undefined4)local_b8;
  *(undefined4 *)(param_1 + 0x94) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_b0;
  *(undefined4 *)(param_1 + 0x9c) = uStack_b0._4_4_;
  *(float *)(param_1 + 0xa0) = local_a8;
  *(float *)(param_1 + 0xa4) = fStack_a4;
  *(float *)(param_1 + 0xa8) = fStack_a0;
  *(undefined4 *)(param_1 + 0xac) = uStack_9c;
  local_c8 = uVar8;
  uStack_c0 = uVar9;
  local_b8 = uVar10;
  uStack_b0 = uVar11;
  puVar12 = (undefined8 *)FMatrix::InverseFast(&local_d8,local_88);
  uVar8 = puVar12[1];
  *(undefined8 *)(param_1 + 0x30) = *puVar12;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  uVar8 = puVar12[3];
  *(undefined8 *)(param_1 + 0x40) = puVar12[2];
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  uVar8 = puVar12[5];
  *(undefined8 *)(param_1 + 0x50) = puVar12[4];
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  uVar8 = puVar12[6];
  uVar9 = puVar12[7];
  *(float *)(param_1 + 0xf0) = fVar6 + fVar7;
  *(float *)(param_1 + 0xf4) = fVar2 + fVar3;
  *(float *)(param_1 + 0xf8) = fVar4 + fVar5;
  *(float *)(param_1 + 0xfc) = fVar1 + 1.0;
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  return;
}



// FUNCTION 1423619c0 FUN_1423619c0 body=388 status=ok
// SIG undefined FUN_1423619c0(void)

void FUN_1423619c0(longlong param_1,float *param_2)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_142381c70();
  pfVar3 = *(float **)(param_1 + 0x6f0);
  bVar1 = false;
  pfVar4 = pfVar3 + (longlong)*(int *)(param_1 + 0x6f8) * 0xd;
  if (pfVar3 != pfVar4) {
    bVar1 = true;
    pfVar2 = pfVar3 + 5;
    do {
      *pfVar3 = *pfVar3 + *param_2;
      pfVar3 = pfVar3 + 0xd;
      pfVar2[-4] = param_2[1] + pfVar2[-4];
      pfVar2[-3] = pfVar2[-3] + param_2[2];
      pfVar2[-2] = pfVar2[-2] + *param_2;
      pfVar2[-1] = pfVar2[-1] + param_2[1];
      *pfVar2 = *pfVar2 + param_2[2];
      pfVar2 = pfVar2 + 0xd;
    } while (pfVar3 != pfVar4);
  }
  pfVar4 = *(float **)(param_1 + 0x700);
  pfVar3 = pfVar4 + (longlong)*(int *)(param_1 + 0x708) * 10;
  if (pfVar4 != pfVar3) {
    bVar1 = true;
    do {
      *pfVar4 = *pfVar4 + *param_2;
      pfVar4[1] = param_2[1] + pfVar4[1];
      pfVar4[2] = pfVar4[2] + param_2[2];
      pfVar4 = pfVar4 + 10;
    } while (pfVar4 != pfVar3);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x718);
  puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x720) * 6;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 6) {
    pfVar4 = (float *)*puVar5;
    pfVar3 = pfVar4 + (longlong)*(int *)(puVar5 + 1) * 3;
    if (pfVar4 != pfVar3) {
      bVar1 = true;
      do {
        *pfVar4 = *pfVar4 + *param_2;
        pfVar4[1] = pfVar4[1] + param_2[1];
        pfVar4[2] = pfVar4[2] + param_2[2];
        pfVar4 = pfVar4 + 3;
      } while (pfVar4 != pfVar3);
    }
  }
  if (bVar1) {
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142361b50 FUN_142361b50 body=68 status=ok
// SIG undefined FUN_142361b50(void)

undefined8 FUN_142361b50(longlong param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x2d8) & 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      return 0;
    }
    param_1 = *(longlong *)(param_1 + 0x2e0) + 0x28;
  }
  else {
    param_1 = param_1 + 0x2e8;
  }
  if (param_1 == 0) {
    return 0;
  }
  FForceFeedbackAttenuationSettings::operator=(param_2);
  return 1;
}



// FUNCTION 142361ba0 FUN_142361ba0 body=53 status=ok
// SIG undefined FUN_142361ba0(void)

void FUN_142361ba0(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1423850d0();
  puVar1 = *(undefined8 **)(param_1 + 0x2f0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 142361be0 FUN_142361be0 body=45 status=ok
// SIG undefined FUN_142361be0(void)

void FUN_142361be0(longlong param_1)

{
  FUN_1423850d0();
  FUN_141edf360(param_1 + 0x3b0);
  FUN_141edede0(param_1 + 0x420,0);
  return;
}



// FUNCTION 142361c10 FUN_142361c10 body=55 status=ok
// SIG undefined FUN_142361c10(void)

void FUN_142361c10(longlong param_1)

{
  FUN_142330a70();
  if ((*(longlong *)(param_1 + 0x2d8) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x2d8) + 0x94) & 0x18) != 0x10)) {
    FUN_142227cf0();
    return;
  }
  return;
}



// FUNCTION 142361c50 FUN_142361c50 body=43 status=ok
// SIG undefined FUN_142361c50(void)

void FUN_142361c50(longlong param_1)

{
  FUN_142385110();
  FUN_142377330(param_1,*(float *)(param_1 + 0x704) + *(float *)(param_1 + 0x700));
  return;
}



// FUNCTION 142361c80 FUN_142361c80 body=393 status=ok
// SIG undefined FUN_142361c80(void)

void FUN_142361c80(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  FUN_142330a70();
  lVar1 = param_1[0x2f];
  if ((lVar1 != 0) && ((char)param_1[0x4b] != '\x01')) {
    uVar3 = *(undefined4 *)(lVar1 + 0x224);
    local_d0 = *(undefined4 *)(lVar1 + 0x228);
    *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)(lVar1 + 0x220);
    *(undefined4 *)(param_1 + 0x4a) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x254) = local_d0;
    *(float *)((longlong)param_1 + 0x23c) = 1.0 / *(float *)(param_1 + 0x38);
    if ((int)param_1[0x46] != 0) {
      (**(code **)(*param_1 + 0x538))(param_1,1);
      uVar3 = (**(code **)(*param_1 + 0x530))(param_1,local_c8,0);
      lVar1 = param_1[0x2f];
      local_b8 = *(float *)(lVar1 + 0x210);
      fStack_b4 = *(float *)(lVar1 + 0x214);
      fStack_b0 = *(float *)(lVar1 + 0x218);
      fStack_ac = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_b4);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_b8);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_b0);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_ac);
      iVar4 = movmskps(uVar3,auVar2);
      lVar6 = lVar1;
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_b8;
        *(float *)(lVar1 + 0x254) = fStack_b4;
        *(float *)(lVar1 + 600) = fStack_b0;
        *(float *)(lVar1 + 0x25c) = fStack_ac;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_b8);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
        lVar6 = param_1[0x2f];
      }
      local_d8 = *(undefined8 *)(lVar1 + 0x260);
      local_d0 = *(undefined4 *)(lVar1 + 0x268);
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FUN_142391970(lVar6,local_c8,&local_d8,0,local_98,0,0);
      *(undefined1 *)(param_1 + 0x4b) = 1;
    }
  }
  return;
}



// FUNCTION 142361e10 FUN_142361e10 body=272 status=ok
// SIG undefined FUN_142361e10(void)

void FUN_142361e10(undefined8 param_1,byte *param_2,undefined4 param_3)

{
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_9c = *(undefined4 *)(param_2 + 0xc);
  local_98 = *(undefined4 *)(param_2 + 0x10);
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_2c = 0;
  local_a8[0] = *param_2 & 3;
  local_94 = *(undefined8 *)(param_2 + 0x14);
  local_a4 = *(undefined4 *)(param_2 + 4);
  local_88 = *(undefined8 *)(param_2 + 0x20);
  local_a0 = *(uint *)(param_2 + 8) & 1;
  local_8c = *(undefined4 *)(param_2 + 0x1c);
  local_7c = *(undefined8 *)(param_2 + 0x2c);
  local_80 = *(undefined4 *)(param_2 + 0x28);
  local_74 = *(undefined4 *)(param_2 + 0x34);
  local_68 = *(undefined4 *)(param_2 + 0x40);
  local_5c = *(undefined4 *)(param_2 + 0x4c);
  local_50 = *(undefined4 *)(param_2 + 0x58);
  local_48 = *(undefined4 *)(param_2 + 0x60);
  local_44 = *(undefined4 *)(param_2 + 100);
  local_40 = *(undefined4 *)(param_2 + 0x68);
  local_3c = *(undefined4 *)(param_2 + 0x6c);
  local_38 = *(undefined4 *)(param_2 + 0x70);
  local_70 = *(undefined8 *)(param_2 + 0x38);
  local_34 = *(undefined4 *)(param_2 + 0x74);
  local_64 = *(undefined8 *)(param_2 + 0x44);
  local_30 = *(undefined4 *)(param_2 + 0x78);
  local_28 = *(undefined8 *)(param_2 + 0x80);
  local_58 = *(undefined8 *)(param_2 + 0x50);
  local_20 = *(undefined8 *)(param_2 + 0x88);
  local_4c = *(undefined4 *)(param_2 + 0x5c);
  local_18 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(local_4c,local_a8);
  return;
}



// FUNCTION 142361f20 FUN_142361f20 body=91 status=ok
// SIG undefined FUN_142361f20(void)

void FUN_142361f20(void)

{
  int iVar1;
  bool bVar2;
  undefined1 local_18 [24];
  
  iVar1 = *DAT_146af0488;
  bVar2 = iVar1 != DAT_146531d58;
  if (bVar2) {
    DAT_146531d58 = iVar1;
  }
  if (*DAT_146af04a0 != DAT_146531d5c) {
    DAT_146531d5c = *DAT_146af04a0;
    FUN_142362e70(local_18);
    return;
  }
  if (bVar2) {
    FUN_142362e70(local_18);
    return;
  }
  return;
}



// FUNCTION 142361f80 FUN_142361f80 body=140 status=ok
// SIG undefined FUN_142361f80(void)

undefined8 FUN_142361f80(longlong param_1,undefined8 param_2)

{
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  float local_14;
  
  local_2c = 0;
  local_20 = *(undefined8 *)(param_1 + 0x70c);
  local_24 = 0;
  local_18 = *(undefined4 *)(param_1 + 0x714);
  local_14 = SQRT(*(float *)(param_1 + 0x70c) * *(float *)(param_1 + 0x70c) +
                  *(float *)(param_1 + 0x710) * *(float *)(param_1 + 0x710) +
                  *(float *)(param_1 + 0x714) * *(float *)(param_1 + 0x714));
  FBoxSphereBounds::TransformBy(&local_2c);
  return param_2;
}



// FUNCTION 142362010 FUN_142362010 body=232 status=ok
// SIG undefined FUN_142362010(void)

undefined8 * FUN_142362010(longlong param_1,undefined8 *param_2,float *param_3)

{
  undefined4 uVar1;
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
  float fVar12;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar10 = DAT_1468b5d90 * param_3[8];
  fVar11 = DAT_1468b5d94 * param_3[9];
  fVar12 = DAT_1468b5d98 * param_3[10];
  uVar1 = *(undefined4 *)(param_1 + 0x700);
  *(undefined4 *)(param_2 + 3) = uVar1;
  fVar7 = fVar12 * fVar3 - fVar11 * fVar4;
  fVar8 = fVar10 * fVar4 - fVar12 * fVar2;
  fVar9 = fVar11 * fVar2 - fVar10 * fVar3;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar6 = param_3[6];
  *param_2 = CONCAT44((fVar7 * fVar4 - fVar9 * fVar2) + fVar5 * fVar8 + fVar11 + param_3[5],
                      (fVar9 * fVar3 - fVar8 * fVar4) + fVar5 * fVar7 + fVar10 + param_3[4]);
  *(float *)(param_2 + 1) = (fVar8 * fVar2 - fVar7 * fVar3) + fVar5 * fVar9 + fVar12 + fVar6;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(uVar1,uVar1);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  return param_2;
}



// FUNCTION 142362100 FUN_142362100 body=303 status=ok
// SIG undefined FUN_142362100(void)

undefined8 FUN_142362100(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  fVar3 = (float)*(undefined8 *)(param_1 + 0x2dc) - -*(float *)(param_1 + 0x2dc);
  fVar1 = *(float *)(param_1 + 0x2e4) - -*(float *)(param_1 + 0x2e4);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2dc) >> 0x20) -
          -*(float *)(param_1 + 0x2e0);
  local_38 = fVar1 * 0.5;
  local_40 = CONCAT44(fVar2 * 0.5,fVar3 * 0.5);
  local_44 = local_38 - *(float *)(param_1 + 0x2e4);
  local_4c = CONCAT44(fVar2 * 0.5 - *(float *)(param_1 + 0x2e0),
                      fVar3 * 0.5 - *(float *)(param_1 + 0x2dc));
  local_34 = SQRT((fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 0.25);
  FBoxSphereBounds::TransformBy(&local_4c);
  return param_2;
}



// FUNCTION 142362230 FUN_142362230 body=277 status=ok
// SIG undefined FUN_142362230(void)

undefined4 * FUN_142362230(longlong param_1,undefined4 *param_2,longlong param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [32];
  
  if ((*(longlong *)(param_1 + 0x6f0) != 0) && (cVar5 = FUN_142371b60(), cVar5 != '\0')) {
    uVar6 = UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x708),local_28);
    FBoxSphereBounds::TransformBy(uVar6,&local_48,param_3);
    fVar1 = *(float *)(param_1 + 0x364);
    *param_2 = local_48;
    param_2[1] = uStack_44;
    param_2[2] = uStack_40;
    param_2[3] = fStack_3c * fVar1;
    *(ulonglong *)(param_2 + 4) = CONCAT44(local_34 * fVar1,local_38 * fVar1);
    param_2[6] = local_30 * fVar1;
    return param_2;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 0x18);
  param_2[6] = 0x49800000;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  *(undefined8 *)(param_2 + 3) = 0x4980000049800000;
  param_2[5] = 0x49800000;
  return param_2;
}



// FUNCTION 142362350 FUN_142362350 body=1020 status=ok
// SIG undefined FUN_142362350(void)

undefined8 * FUN_142362350(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_48;
  
  if ((*(byte *)(param_1 + 0x728) & 1) != 0) {
    pfVar8 = *(float **)(param_1 + 0x6f0);
    bVar6 = false;
    pfVar9 = pfVar8 + (longlong)*(int *)(param_1 + 0x6f8) * 0xd;
    fVar13 = DAT_1468b5d98;
    fStack_48 = DAT_1468b5d94;
    fVar12 = DAT_1468b5d90;
    fVar14 = DAT_1468b5d90;
    fVar15 = DAT_1468b5d94;
    fVar16 = DAT_1468b5d98;
    if (pfVar8 != pfVar9) {
      pfVar7 = pfVar8 + 5;
      do {
        if (bVar6) {
          fVar1 = *pfVar8;
          if (fVar1 < fVar14) {
            fVar14 = fVar1;
          }
          fVar2 = pfVar7[-4];
          if (fVar2 < fVar15) {
            fVar15 = fVar2;
          }
          fVar3 = pfVar7[-3];
          if (fVar3 < fVar16) {
            fVar16 = fVar3;
          }
          if (fVar12 < fVar1) {
            fVar12 = fVar1;
          }
          if (fStack_48 < fVar2) {
            fStack_48 = fVar2;
          }
          if (fVar13 < fVar3) {
            fVar13 = fVar3;
          }
        }
        else {
          bVar6 = true;
          fVar13 = pfVar8[2];
          fVar12 = (float)*(undefined8 *)pfVar8;
          fStack_48 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
          fVar14 = fVar12;
          fVar15 = fStack_48;
          fVar16 = fVar13;
        }
        fVar1 = pfVar7[-2];
        if (fVar1 < fVar14) {
          fVar14 = fVar1;
        }
        fVar2 = pfVar7[-1];
        if (fVar2 < fVar15) {
          fVar15 = fVar2;
        }
        fVar3 = *pfVar7;
        if (fVar3 < fVar16) {
          fVar16 = fVar3;
        }
        if (fVar12 < fVar1) {
          fVar12 = fVar1;
        }
        if (fStack_48 < fVar2) {
          fStack_48 = fVar2;
        }
        if (fVar13 < fVar3) {
          fVar13 = fVar3;
        }
        pfVar8 = pfVar8 + 0xd;
        pfVar7 = pfVar7 + 0xd;
      } while (pfVar8 != pfVar9);
    }
    pfVar9 = *(float **)(param_1 + 0x700);
    pfVar8 = pfVar9 + (longlong)*(int *)(param_1 + 0x708) * 10;
    for (; pfVar9 != pfVar8; pfVar9 = pfVar9 + 10) {
      if (bVar6) {
        fVar1 = *pfVar9;
        if (fVar1 < fVar14) {
          fVar14 = fVar1;
        }
        fVar2 = pfVar9[1];
        if (fVar2 < fVar15) {
          fVar15 = fVar2;
        }
        fVar3 = pfVar9[2];
        if (fVar3 < fVar16) {
          fVar16 = fVar3;
        }
        if (fVar12 < fVar1) {
          fVar12 = fVar1;
        }
        if (fStack_48 < fVar2) {
          fStack_48 = fVar2;
        }
        if (fVar13 < fVar3) {
          fVar13 = fVar3;
        }
      }
      else {
        bVar6 = true;
        fVar13 = pfVar9[2];
        fVar12 = (float)*(undefined8 *)pfVar9;
        fStack_48 = (float)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
        fVar14 = fVar12;
        fVar15 = fStack_48;
        fVar16 = fVar13;
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x718);
    puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x720) * 6;
    for (; puVar10 != puVar11; puVar10 = puVar10 + 6) {
      pfVar9 = (float *)*puVar10;
      pfVar8 = pfVar9 + (longlong)*(int *)(puVar10 + 1) * 3;
      for (; pfVar9 != pfVar8; pfVar9 = pfVar9 + 3) {
        if (bVar6) {
          fVar1 = *pfVar9;
          if (fVar1 < fVar14) {
            fVar14 = fVar1;
          }
          fVar2 = pfVar9[1];
          if (fVar2 < fVar15) {
            fVar15 = fVar2;
          }
          fVar3 = pfVar9[2];
          if (fVar3 < fVar16) {
            fVar16 = fVar3;
          }
          if (fVar12 < fVar1) {
            fVar12 = fVar1;
          }
          if (fStack_48 < fVar2) {
            fStack_48 = fVar2;
          }
          if (fVar13 < fVar3) {
            fVar13 = fVar3;
          }
        }
        else {
          bVar6 = true;
          fVar13 = pfVar9[2];
          fVar12 = (float)*(undefined8 *)pfVar9;
          fStack_48 = (float)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
          fVar14 = fVar12;
          fVar15 = fStack_48;
          fVar16 = fVar13;
        }
      }
    }
    if (bVar6) {
      *(ulonglong *)((longlong)param_2 + 0xc) =
           CONCAT44((fStack_48 - fVar15) * 0.5,(fVar12 - fVar14) * 0.5);
      *(float *)((longlong)param_2 + 0x14) = (fVar13 - fVar16) * 0.5;
      *param_2 = CONCAT44(fVar15 + *(float *)(param_2 + 2),
                          fVar14 + *(float *)((longlong)param_2 + 0xc));
      *(float *)(param_2 + 1) = fVar16 + *(float *)((longlong)param_2 + 0x14);
      *(float *)(param_2 + 3) =
           SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
                *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
                *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
    }
    else {
      uVar4 = *(undefined4 *)(param_3 + 0x14);
      uVar5 = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)param_2 = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)((longlong)param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined8 *)((longlong)param_2 + 0xc) = 0x3f8000003f800000;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
      *(undefined4 *)(param_2 + 3) = 0x3f800000;
    }
    return param_2;
  }
  *param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)(param_2 + 1) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x4980000049800000;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x49800000;
  *(undefined4 *)(param_2 + 3) = 0x49ddb3d7;
  return param_2;
}



// FUNCTION 142362750 FUN_142362750 body=215 status=ok
// SIG undefined FUN_142362750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142362750(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  fVar13 = 1.0;
  if (0 < *(int *)(param_1 + 0x6f8)) {
    lVar5 = 0;
    pfVar4 = (float *)(*(longlong *)(param_1 + 0x6f0) + 0x14);
    do {
      if (((uint)pfVar4[-1] & 1) != 0) {
        fVar13 = 1048576.0;
        break;
      }
      lVar5 = lVar5 + 1;
      fVar6 = *pfVar4;
      if (*pfVar4 <= fVar13) {
        fVar6 = fVar13;
      }
      fVar13 = fVar6;
      if (fVar6 <= pfVar4[1]) {
        fVar13 = pfVar4[1];
      }
      pfVar4 = pfVar4 + 10;
    } while (lVar5 < *(int *)(param_1 + 0x6f8));
  }
  uVar9 = *(uint *)(param_3 + 0x20) & _DAT_146af04d0;
  uVar10 = *(uint *)(param_3 + 0x24) & uRam0000000146af04d4;
  uVar11 = *(uint *)(param_3 + 0x28) & uRam0000000146af04d8;
  uVar12 = *(uint *)(param_3 + 0x2c) & uRam0000000146af04dc;
  auVar7._4_4_ = uVar10;
  auVar7._0_4_ = uVar9;
  auVar7._8_4_ = uVar11;
  auVar7._12_4_ = uVar12;
  auVar8._4_4_ = uVar11;
  auVar8._0_4_ = uVar10;
  auVar8._8_4_ = uVar9;
  auVar8._12_4_ = uVar12;
  auVar8 = maxps(auVar7,auVar8);
  auVar1._4_4_ = uVar9;
  auVar1._0_4_ = uVar11;
  auVar1._8_4_ = uVar10;
  auVar1._12_4_ = uVar12;
  auVar8 = maxps(auVar8,auVar1);
  uVar2 = *(undefined4 *)(param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 0x18);
  fVar13 = fVar13 * auVar8._0_4_;
  *param_2 = *(undefined4 *)(param_3 + 0x10);
  param_2[1] = uVar2;
  *(ulonglong *)(param_2 + 3) = CONCAT44(fVar13,fVar13);
  param_2[2] = uVar3;
  param_2[5] = fVar13;
  param_2[6] = SQRT(fVar13 * fVar13 * 3.0);
  return param_2;
}



// FUNCTION 142362860 FUN_142362860 body=807 status=ok
// SIG undefined FUN_142362860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142362860(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  float local_e0;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  
  if (param_1[0x2f] == 0) {
    return 0;
  }
  lVar6 = param_1[0x24];
  if ((lVar6 == 0) && (lVar6 = FUN_1423407b0(), lVar6 == 0)) {
    return 0;
  }
  lVar6 = UWorld::GetWorldSettings(lVar6);
  if ((*(byte *)(lVar6 + 0x460) & 1) == 0) {
    return 1;
  }
  lVar2 = param_1[0x2f];
  plVar3 = *(longlong **)(lVar2 + 0x118);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  iVar1 = *(int *)((longlong)plVar3 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar11 = iVar1 >> 0x1f & 0xffff;
    uVar5 = iVar1 + uVar11;
    lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
  }
  else {
    lVar7 = 0;
  }
  if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  lVar7 = plVar3[0x2d];
  if (lVar7 == 0) {
    local_e0 = DAT_1468b5d98;
    uVar13 = _DAT_1468b5d90;
  }
  else {
    local_e0 = *(float *)(lVar7 + 0x228);
    uVar13 = *(undefined8 *)(lVar7 + 0x220);
  }
  if (*(float *)(lVar6 + 0x470) <= local_e0) {
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xb8) & 1) != 0)) {
      fVar12 = *(float *)(lVar2 + 0x1d0) - *(float *)(lVar2 + 0x1dc);
      if (((fVar12 < -1048576.0) ||
          (((1048576.0 < *(float *)(lVar2 + 0x1dc) + *(float *)(lVar2 + 0x1d0) ||
            (*(float *)(lVar2 + 0x1d4) - *(float *)(lVar2 + 0x1e0) < -1048576.0)) ||
           (1048576.0 < *(float *)(lVar2 + 0x1e0) + *(float *)(lVar2 + 0x1d4))))) ||
         ((*(float *)(lVar2 + 0x1d8) - *(float *)(lVar2 + 0x1e4) < -1048576.0 ||
          (1048576.0 < *(float *)(lVar2 + 0x1e4) + *(float *)(lVar2 + 0x1d8))))) {
        (**(code **)(*plVar3 + 0x558))(plVar3,0xc9800000,lVar2,fVar12,uVar13);
        FUN_14223c460(plVar3);
        _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
        local_bc = 0x3f800000;
        (**(code **)(*param_1 + 0x450))(param_1,0);
        *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
        *(float *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
        FUN_142361e10(param_1 + 0x3c,local_c8,(int)param_1[0x47]);
        return 0;
      }
    }
    return 1;
  }
  if (*(longlong *)(lVar6 + 0x478) != 0) {
    lVar8 = UDamageType::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar6 + 0x478);
    for (lVar7 = lVar2; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar8) {
        if (lVar2 != 0) {
          if (lVar2 == 0) goto LAB_142362a44;
          plVar10 = (longlong *)UDamageType::GetPrivateStaticClass();
          plVar9 = *(longlong **)(lVar6 + 0x478);
          plVar4 = plVar9;
          goto joined_r0x000142362a34;
        }
        break;
      }
    }
  }
  plVar9 = (longlong *)UDamageType::GetPrivateStaticClass();
  lVar6 = plVar9[0x1f];
  if (lVar6 != 0) goto LAB_1423629e5;
  (**(code **)(*plVar9 + 0x368))(plVar9);
  goto LAB_1423629de;
joined_r0x000142362a34:
  if (plVar4 == (longlong *)0x0) goto LAB_142362a44;
  if (plVar4 == plVar10) goto LAB_142362a46;
  plVar4 = (longlong *)plVar4[6];
  goto joined_r0x000142362a34;
LAB_142362a44:
  plVar9 = (longlong *)0x0;
LAB_142362a46:
  lVar6 = plVar9[0x1f];
  if (lVar6 != 0) goto LAB_1423629e5;
  (**(code **)(*plVar9 + 0x368))(plVar9);
LAB_1423629de:
  lVar6 = plVar9[0x1f];
LAB_1423629e5:
  (**(code **)(*plVar3 + 0x550))(plVar3,lVar6);
  return 0;
}



// FUNCTION 142362b90 FUN_142362b90 body=297 status=ok
// SIG undefined FUN_142362b90(void)

void FUN_142362b90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x1e8);
  lVar8 = (longlong)*(int *)(param_1 + 0x1f0) * 0x70 + lVar5;
  for (; lVar5 != lVar8; lVar5 = lVar5 + 0x70) {
    *(undefined4 *)(lVar5 + 8) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x1e4);
  lVar5 = *(longlong *)(param_1 + 0x1d8);
  iVar7 = *(int *)(param_1 + 0x1e0);
  if (iVar4 < 0) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar5 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar6 = plVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = *(int *)(param_1 + 0x1e4);
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    if (iVar4 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x1d8),0);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar5 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        plVar6 = plVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 142362cc0 FUN_142362cc0 body=206 status=ok
// SIG undefined FUN_142362cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142362cc0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x198);
  lVar3 = (longlong)*(int *)(param_1 + 0x1a0) * 0x38 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x38) {
    *(undefined4 *)(lVar2 + 0x30) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  lVar3 = (longlong)*(int *)(param_1 + 0x1b0) * 0x40 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x40) {
    *(undefined4 *)(lVar2 + 4) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  lVar2 = lVar3 + (longlong)*(int *)(param_1 + 0x1c0) * 0x48;
  if (lVar3 != lVar2) {
    puVar1 = (undefined8 *)(lVar3 + 4);
    do {
      lVar3 = lVar3 + 0x48;
      *puVar1 = _DAT_1468b5d90;
      *(undefined4 *)(puVar1 + 1) = DAT_1468b5d98;
      puVar1 = puVar1 + 9;
    } while (lVar3 != lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  lVar3 = (longlong)*(int *)(param_1 + 0x1d0) * 0x40 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x40) {
    *(undefined4 *)(lVar2 + 4) = 0;
  }
  return;
}



// FUNCTION 142362d90 FUN_142362d90 body=27 status=ok
// SIG undefined FUN_142362d90(void)

void FUN_142362d90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0x2d8) + 0x198,0);
    return;
  }
  return;
}



// FUNCTION 142362db0 FUN_142362db0 body=47 status=ok
// SIG undefined FUN_142362db0(void)

void FUN_142362db0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x60) = 0;
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  return;
}



// FUNCTION 142362de0 FUN_142362de0 body=129 status=ok
// SIG undefined FUN_142362de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142362de0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _DAT_1464aa818;
  uVar1 = _DAT_1464aa810;
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 142362e70 FUN_142362e70 body=621 status=ok
// SIG undefined FUN_142362e70(void)

void FUN_142362e70(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  longlong local_48;
  undefined1 local_40;
  byte local_3f;
  undefined8 local_38;
  undefined1 local_30;
  byte local_2f;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  lVar8 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = -1;
  uVar2 = UAkAudioInputComponent::GetPrivateStaticClass();
  FUN_1417a5560(uVar2,&local_28,1,0x10,0);
  uVar9 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar9 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      lVar5 = *(longlong *)(local_28 + (longlong)local_18 * 8);
      local_58 = 0xffffffff;
      local_54 = 0;
      FWeakObjectPtr::operator=(local_50,0);
      lVar4 = lVar8;
      if (((*(byte *)(lVar5 + 0xb8) & 1) != 0) &&
         ((*(longlong *)(lVar5 + 0x120) != 0 || (lVar3 = FUN_1423407b0(lVar5), lVar3 != 0)))) {
        lVar4 = *(longlong *)(lVar5 + 0x120);
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(lVar5);
        }
        local_3f = local_3f & 0xfd | 1;
        local_40 = 1;
        local_48 = lVar4;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_48);
        FUN_14233aad0(lVar5);
        *(undefined8 *)(lVar5 + 0x120) = 0;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_48);
      }
      FWeakObjectPtr::operator=(local_50,lVar4);
      cVar1 = FWeakObjectPtr::IsValid(local_50);
      lVar4 = lVar8;
      if (cVar1 != '\0') {
        lVar4 = lVar5;
      }
      FWeakObjectPtr::operator=(&local_58,lVar4);
      cVar1 = FWeakObjectPtr::IsValid(&local_58);
      if (cVar1 != '\0') {
        uVar2 = FWeakObjectPtr::Get(local_50);
        lVar4 = FWeakObjectPtr::Get(&local_58);
        uVar6 = *(uint *)(lVar4 + 0xc);
        lVar5 = lVar8;
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar7 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar7 = uVar7 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar7 * 0x18;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
          if ((*(byte *)(lVar4 + 0xb8) & 1) != 0) {
            FUN_14233aad0(lVar4);
          }
          *(undefined8 *)(lVar4 + 0x120) = uVar2;
          local_2f = local_2f & 0xfd | 1;
          local_30 = 1;
          local_38 = uVar2;
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
          FUN_14233a6f0(lVar4);
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_38);
        }
      }
      uVar9 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 1423630e0 FUN_1423630e0 body=1770 status=ok
// SIG undefined FUN_1423630e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423630e0(longlong param_1)

{
  void **ppvVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  void *_Src;
  int iVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  int *piVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  int iVar26;
  ulonglong uVar27;
  longlong *plVar28;
  ulonglong uVar29;
  undefined1 auStack_168 [32];
  uint local_148;
  int *local_140;
  int local_138;
  int local_134;
  longlong local_130;
  longlong local_128;
  void *local_120;
  uint local_118;
  uint local_114;
  undefined8 local_110;
  longlong *plStack_108;
  undefined4 local_100;
  int iStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_88 [2];
  undefined1 local_78 [16];
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar15 = 0;
  local_60._0_4_ = 0;
  local_68 = 0;
  local_140 = (int *)0x0;
  local_134 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_130 = param_1;
  iVar16 = iVar15;
  if (0 < *(int *)(param_1 + 0x728)) {
    local_128 = 0;
    do {
      uVar22 = 0;
      local_120 = (void *)0x0;
      iVar26 = 0;
      local_114 = 0;
      local_148 = 0;
      lVar4 = *(longlong *)(local_128 + *(longlong *)(local_130 + 0x720));
      piVar18 = local_140;
      uVar24 = uVar22;
      uVar27 = uVar22;
      uVar29 = uVar22;
      if (0 < *(int *)(lVar4 + 0x20)) {
        do {
          lVar5 = *(longlong *)(lVar4 + 0x18);
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(local_130 + 0x6f8) + 0x68) +
               (longlong)
               *(int *)((ulonglong)*(ushort *)(lVar5 + uVar27) * 0x40 + 0x14 +
                       *(longlong *)(*(longlong *)(local_130 + 0x6f8) + 0x28)) * 0x50) ==
              *(longlong *)(lVar4 + 0x10)) {
            iVar26 = (int)uVar29;
            local_118 = iVar26 + 1;
            uVar3 = (uint)uVar22;
            if ((int)uVar24 < (int)local_118) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,uVar29);
              uVar3 = local_148;
            }
            local_148 = uVar3;
            uVar29 = (ulonglong)local_118;
            *(undefined2 *)((longlong)local_120 + (longlong)iVar26 * 2) =
                 *(undefined2 *)(uVar27 + lVar5);
            piVar18 = local_140;
          }
          else {
            local_110 = lVar5 + (longlong)(int)(uint)uVar22 * 2;
            plStack_108 = &local_f0;
            local_f0 = lVar4;
            FUN_14235b710(local_88,local_c0,&local_110,0);
            for (piVar12 = piVar18; piVar12 != piVar18 + iVar16; piVar12 = piVar12 + 1) {
              if (*piVar12 == iVar15) {
                if ((int)((longlong)piVar12 - (longlong)piVar18 >> 2) != -1) goto LAB_142363275;
                break;
              }
            }
            local_138 = iVar16 + 1;
            if (local_134 < local_138) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_140,iVar16);
            }
            local_140[iVar16] = iVar15;
            piVar18 = local_140;
            iVar16 = local_138;
          }
LAB_142363275:
          iVar26 = (int)uVar29;
          local_148 = local_148 + 1;
          uVar22 = (ulonglong)local_148;
          uVar24 = (ulonglong)local_114;
          uVar27 = uVar27 + 2;
        } while ((int)local_148 < *(int *)(lVar4 + 0x20));
      }
      _Src = local_120;
      lVar5 = local_128;
      ppvVar1 = (void **)(lVar4 + 0x18);
      if (ppvVar1 != &local_120) {
        *(int *)(lVar4 + 0x20) = iVar26;
        if ((iVar26 == 0) && (*(int *)(lVar4 + 0x24) == 0)) {
          *(undefined4 *)(lVar4 + 0x24) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,iVar26);
          _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar26 * 2);
        }
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      local_128 = lVar5 + 8;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(local_130 + 0x728));
  }
  lVar4 = local_130;
  puVar14 = (undefined1 *)0x0;
  local_110._0_4_ = 0;
  local_110._4_4_ = 1;
  plStack_108 = (longlong *)local_78;
  iStack_fc = 0;
  uStack_f8 = 0;
  if ((int)local_60 != 0) {
    puVar25 = local_78;
    if (local_68 != 0) {
      puVar25 = puVar14;
    }
    uVar3 = *(uint *)((ulonglong)puVar25 | local_68);
    puVar20 = puVar14;
    while (uVar3 == 0) {
      iVar15 = (int)puVar14;
      uStack_f8 = (int)puVar20 + 0x20;
      puVar20 = (undefined1 *)(ulonglong)uStack_f8;
      local_110._0_4_ = iVar15 + 1;
      puVar14 = (undefined1 *)(ulonglong)(uint)local_110;
      iStack_fc = (int)local_60;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar15)
      goto LAB_142363420;
      uVar3 = ((uint *)((ulonglong)puVar25 | local_68))[(longlong)iVar15 + 1];
    }
    local_110._4_4_ = -uVar3 & uVar3;
    iVar15 = 0x1f;
    if (local_110._4_4_ != 0) {
      for (; local_110._4_4_ >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (local_110._4_4_ == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    iStack_fc = (uStack_f8 - iVar15) + 0x1f;
    if ((int)local_60 < iStack_fc) {
      iStack_fc = (int)local_60;
    }
  }
LAB_142363420:
  local_100 = 0xffffffff;
  local_e8 = local_88;
  uStack_b0 = (uint)local_110;
  uStack_ac = local_110._4_4_;
  uStack_a0 = 0xffffffff;
  iStack_9c = iStack_fc;
  uStack_98 = uStack_f8;
  uStack_94 = uStack_f4;
  uStack_d0 = 0xffffffff;
  iStack_cc = iStack_fc;
  uStack_e0 = (uint)local_110;
  uStack_dc = local_110._4_4_;
  local_c8 = uStack_f8;
  uStack_c4 = uStack_f4;
  piVar18 = local_140;
  local_d8 = (undefined1 *)plStack_108;
  local_b8 = local_e8;
  puStack_a8 = (undefined1 *)plStack_108;
  if (iStack_fc < (int)local_60) {
    plVar19 = (longlong *)(local_130 + 0x720);
    do {
      puVar17 = (undefined8 *)0x0;
      lVar23 = (longlong)*(int *)(lVar4 + 0x728);
      local_128 = (longlong)iStack_cc * 0x18;
      lVar5 = *(longlong *)((ushort *)(*local_e8 + local_128) + 4);
      plVar28 = (longlong *)
                ((longlong)
                 *(int *)((ulonglong)*(ushort *)(*local_e8 + local_128) * 0x40 + 0x14 +
                         *(longlong *)(*(longlong *)(lVar4 + 0x6f8) + 0x28)) * 0x50 +
                *(longlong *)(*(longlong *)(lVar4 + 0x6f8) + 0x68));
      if (lVar23 < 1) {
LAB_14236351e:
        local_f0 = FMemory::Malloc(0x78);
        iVar15 = *(int *)(lVar4 + 0x728);
        *(int *)(lVar4 + 0x728) = iVar15 + 1;
        if (*(int *)(lVar4 + 0x72c) < iVar15 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar19,iVar15);
        }
        *(longlong *)(*plVar19 + (longlong)iVar15 * 8) = local_f0;
        puVar17 = *(undefined8 **)(*plVar19 + (longlong)iVar15 * 8);
        if (puVar17 != (undefined8 *)0x0) {
          puVar17[2] = *plVar28;
          *puVar17 = &PTR__scalar_deleting_destructor__145050848;
          puVar17[1] = lVar4;
          puVar17[3] = 0;
          puVar17[4] = 0;
          puVar17[5] = 0;
          puVar17[6] = 0;
          puVar17[7] = 0;
          puVar17[8] = 0;
          puVar17[9] = 0;
          puVar17[10] = 0;
          *(undefined8 *)((longlong)puVar17 + 100) = _DAT_1468b5d90;
          uVar7 = DAT_1468b5d98;
          *(undefined4 *)((longlong)puVar17 + 0x6c) = DAT_1468b5d98;
          puVar17[0xb] = *(undefined8 *)((longlong)puVar17 + 100);
          *(undefined4 *)(puVar17 + 0xc) = uVar7;
          *(undefined1 *)(puVar17 + 0xe) = 0;
          puVar13 = (undefined8 *)FGuid::NewGuid(&local_110);
          uVar10 = puVar13[1];
          puVar17[6] = *puVar13;
          puVar17[7] = uVar10;
        }
        uVar7 = *(undefined4 *)(lVar5 + 0x34);
        uVar8 = *(undefined4 *)(lVar5 + 0x38);
        uVar9 = *(undefined4 *)(lVar5 + 0x3c);
        *(undefined4 *)(puVar17 + 6) = *(undefined4 *)(lVar5 + 0x30);
        *(undefined4 *)((longlong)puVar17 + 0x34) = uVar7;
        *(undefined4 *)(puVar17 + 7) = uVar8;
        *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar9;
      }
      else {
        plVar21 = (longlong *)*plVar19;
        do {
          puVar13 = (undefined8 *)*plVar21;
          if ((puVar13[2] == *plVar28) &&
             (((*(int *)(lVar5 + 0x3c) == *(int *)((longlong)puVar13 + 0x3c) &&
               *(int *)(lVar5 + 0x38) == *(int *)(puVar13 + 7)) &&
              *(int *)(lVar5 + 0x34) == *(int *)((longlong)puVar13 + 0x34)) &&
              *(int *)(lVar5 + 0x30) == *(int *)(puVar13 + 6))) {
            puVar17 = puVar13;
          }
          plVar21 = plVar21 + 1;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        if (puVar17 == (undefined8 *)0x0) goto LAB_14236351e;
      }
      iVar15 = *(int *)(puVar17 + 4);
      lVar5 = *local_e8;
      *(int *)(puVar17 + 4) = iVar15 + 1;
      if (*(int *)((longlong)puVar17 + 0x24) < iVar15 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar17 + 3,iVar15);
      }
      *(undefined2 *)(puVar17[3] + (longlong)iVar15 * 2) = *(undefined2 *)(local_128 + lVar5);
      iVar15 = *(int *)(lVar4 + 0x728) + -1;
      for (piVar12 = piVar18; piVar12 != piVar18 + iVar16; piVar12 = piVar12 + 1) {
        if (*piVar12 == iVar15) {
          if ((int)((longlong)piVar12 - (longlong)piVar18 >> 2) != -1) goto LAB_142363667;
          break;
        }
      }
      local_138 = iVar16 + 1;
      if (local_134 < local_138) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_140,iVar16);
        piVar18 = local_140;
      }
      piVar18[iVar16] = iVar15;
      iVar16 = local_138;
LAB_142363667:
      uStack_d0 = uStack_d0 & ~uStack_dc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    } while (iStack_cc < *(int *)(local_d8 + 0x18));
  }
  lVar4 = local_130;
  iVar15 = 1;
  FUN_1425b4560(local_130);
  lVar5 = local_130;
  iVar16 = 0;
  if (0 < *(int *)(lVar4 + 0x728)) {
    plVar19 = (longlong *)(lVar4 + 0x720);
    lVar23 = 0;
    do {
      lVar6 = *plVar19;
      if (*(int *)(*(longlong *)(lVar23 + lVar6) + 0x20) == 0) {
        lVar2 = (longlong)iVar16 * 8;
        puVar17 = *(undefined8 **)(lVar6 + lVar2);
        *puVar17 = &PTR__scalar_deleting_destructor__145050848;
        if (puVar17[3] != 0) {
          FMemory::Free();
        }
        FMemory::Free(*(undefined8 *)(lVar6 + lVar2));
        iVar26 = *(int *)(lVar4 + 0x728);
        iVar11 = (iVar26 - iVar16) + -1;
        if (iVar11 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar19 + lVar2),(void *)(*plVar19 + (longlong)iVar15 * 8),
                     (longlong)iVar11 << 3);
          iVar26 = *(int *)(lVar4 + 0x728);
        }
        *(int *)(lVar4 + 0x728) = iVar26 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar19);
        iVar16 = iVar16 + -1;
        iVar15 = iVar15 + -1;
        lVar23 = lVar23 + -8;
      }
      iVar16 = iVar16 + 1;
      iVar15 = iVar15 + 1;
      lVar23 = lVar23 + 8;
      piVar18 = local_140;
    } while (iVar16 < *(int *)(lVar5 + 0x728));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  if (piVar18 != (int *)0x0) {
    FMemory::Free(piVar18);
  }
  return;
}



// FUNCTION 1423637d0 ComputeAccumulatedScale body=250 status=ok
// SIG undefined ComputeAccumulatedScale(void)

float FDirectionalLightSceneProxy::ComputeAccumulatedScale(float param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = 0.0;
  if (0 < param_2) {
    fVar4 = 1.0;
    iVar1 = 0;
    fVar12 = 0.0;
    if (7 < param_3) {
      iVar2 = 2;
      do {
        if (iVar1 < param_2) {
          fVar3 = fVar3 + fVar4;
        }
        fVar5 = fVar4 * param_1;
        if (iVar2 + -1 < param_2) {
          fVar3 = fVar3 + fVar5;
        }
        fVar6 = fVar5 * param_1;
        if (iVar2 < param_2) {
          fVar3 = fVar3 + fVar6;
        }
        fVar7 = fVar6 * param_1;
        if (iVar2 + 1 < param_2) {
          fVar3 = fVar3 + fVar7;
        }
        fVar8 = fVar7 * param_1;
        if (iVar2 + 2 < param_2) {
          fVar3 = fVar3 + fVar8;
        }
        fVar9 = fVar8 * param_1;
        if (iVar2 + 3 < param_2) {
          fVar3 = fVar3 + fVar9;
        }
        fVar10 = fVar9 * param_1;
        if (iVar2 + 4 < param_2) {
          fVar3 = fVar3 + fVar10;
        }
        fVar11 = fVar10 * param_1;
        if (iVar2 + 5 < param_2) {
          fVar3 = fVar3 + fVar11;
        }
        iVar1 = iVar1 + 8;
        fVar12 = fVar12 + fVar4 + fVar5 + fVar6 + fVar7 + fVar8 + fVar9 + fVar10 + fVar11;
        iVar2 = iVar2 + 8;
        fVar4 = fVar11 * param_1;
      } while (iVar1 < param_3 + -7);
    }
    for (; iVar1 < param_3; iVar1 = iVar1 + 1) {
      if (iVar1 < param_2) {
        fVar3 = fVar3 + fVar4;
      }
      fVar12 = fVar12 + fVar4;
      fVar4 = fVar4 * param_1;
    }
    fVar3 = fVar3 / fVar12;
  }
  return fVar3;
}



// FUNCTION 1423638d0 FUN_1423638d0 body=54 status=ok
// SIG undefined FUN_1423638d0(void)

float FUN_1423638d0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x370);
  fVar2 = *(float *)(param_1 + 0x2e4);
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x378) & 1) != 0) {
      fVar2 = *(float *)(lVar1 + 0x100) * *(float *)(param_1 + 0x37c);
    }
    fVar2 = fVar2 * *(float *)(lVar1 + 0x104);
  }
  return fVar2;
}



// FUNCTION 142363980 FUN_142363980 body=736 status=ok
// SIG undefined FUN_142363980(void)

undefined8 * FUN_142363980(longlong param_1,undefined8 *param_2,float param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_80 = DAT_1468b5d98;
  local_88._4_4_ = DAT_1468b5d94;
  local_88._0_4_ = DAT_1468b5d90;
  lVar6 = 0;
  *param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  fVar9 = 0.0;
  *(float *)(param_2 + 1) = local_80;
  iVar2 = *(int *)(param_1 + 0x230);
  if (param_3 < 1.0) {
    if (0 < iVar2) {
      pfVar5 = (float *)(*(longlong *)(param_1 + 0x228) + 0x18);
      iVar8 = 0;
      do {
        fVar9 = fVar9 + *pfVar5;
        if (param_3 < fVar9) goto LAB_1423639f3;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
        pfVar5 = pfVar5 + 7;
      } while (lVar6 < iVar2);
    }
  }
  else {
    iVar8 = iVar2 + -1;
    pfVar5 = (float *)(longlong)iVar2;
LAB_1423639f3:
    if (iVar8 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x178);
      local_48 = *(float *)(lVar6 + 0x210);
      fStack_44 = *(float *)(lVar6 + 0x214);
      fStack_40 = *(float *)(lVar6 + 0x218);
      fStack_3c = *(float *)(lVar6 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_44);
      auVar1._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_48);
      auVar1._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_40);
      auVar1._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_3c);
      iVar2 = movmskps((int)pfVar5,auVar1);
      if (iVar2 != 0) {
        *(float *)(lVar6 + 0x250) = local_48;
        *(float *)(lVar6 + 0x254) = fStack_44;
        *(float *)(lVar6 + 600) = fStack_40;
        *(float *)(lVar6 + 0x25c) = fStack_3c;
        puVar3 = (undefined8 *)FQuat::Rotator(&local_48,local_58);
        *(undefined8 *)(lVar6 + 0x260) = *puVar3;
        *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar3 + 1);
      }
      local_78 = *(undefined8 *)(lVar6 + 0x260);
      lVar7 = *(longlong *)(param_1 + 0x228);
      local_70 = *(undefined4 *)(lVar6 + 0x268);
      lVar6 = (longlong)iVar8 * 0x1c;
      local_88 = *(undefined8 *)(lVar6 + lVar7);
      fVar9 = (param_3 - *(float *)(lVar6 + 0x10 + lVar7)) / *(float *)(lVar6 + 0x18 + lVar7);
      local_80 = *(float *)(lVar6 + 8 + lVar7);
      pfVar5 = &DAT_1468b5d90;
      if (*(char *)(lVar6 + 0xc + lVar7) == '\x01') {
        pfVar5 = (float *)(param_1 + 0x24c);
      }
      pfVar4 = (float *)FRotator::RotateVector(&local_78,local_58,&local_88);
      iVar8 = iVar8 + 1;
      local_88._0_4_ = *pfVar5 + *pfVar4;
      local_88._4_4_ = pfVar4[1] + pfVar5[1];
      local_80 = pfVar4[2] + pfVar5[2];
      iVar2 = 0;
      if ((-1 < iVar8) && (iVar2 = *(int *)(param_1 + 0x230) + -1, iVar8 < iVar2)) {
        iVar2 = iVar8;
      }
      lVar6 = *(longlong *)(param_1 + 0x228);
      lVar7 = (longlong)iVar2 * 0x1c;
      local_68 = *(undefined8 *)(lVar7 + lVar6);
      local_60 = *(undefined4 *)(lVar7 + 8 + lVar6);
      pfVar5 = &DAT_1468b5d90;
      if (*(char *)(lVar7 + 0xc + lVar6) == '\x01') {
        pfVar5 = (float *)(param_1 + 0x24c);
      }
      pfVar4 = (float *)FRotator::RotateVector(&local_78,local_58,&local_68);
      local_88._0_4_ = ((*pfVar4 + *pfVar5) - (float)local_88) * fVar9 + (float)local_88;
      local_88._4_4_ = ((pfVar4[1] + pfVar5[1]) - local_88._4_4_) * fVar9 + local_88._4_4_;
      local_80 = ((pfVar4[2] + pfVar5[2]) - local_80) * fVar9 + local_80;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x178);
  fVar9 = *(float *)(lVar6 + 0x228);
  if (((*(float *)(lVar6 + 0x220) != (float)local_88) ||
      (*(float *)(lVar6 + 0x224) != local_88._4_4_)) || (fVar9 != local_80)) {
    *param_2 = CONCAT44(local_88._4_4_ - *(float *)(lVar6 + 0x224),
                        (float)local_88 - *(float *)(lVar6 + 0x220));
    *(float *)(param_2 + 1) = local_80 - fVar9;
  }
  return param_2;
}



// FUNCTION 142363c60 FUN_142363c60 body=7635 status=ok
// SIG undefined FUN_142363c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142363c60(undefined8 param_1,byte param_2,undefined8 *param_3,float *param_4,
                  undefined1 *param_5,undefined8 *param_6,float *param_7)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_378 [32];
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined8 local_348;
  float local_340;
  float local_320;
  byte local_318;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  undefined1 local_2d8 [96];
  undefined1 *local_278;
  int local_268;
  int iStack_264;
  undefined1 local_258 [96];
  undefined1 *local_1f8;
  undefined8 local_1e8;
  undefined1 local_1d8 [128];
  longlong local_158;
  undefined8 local_148;
  float local_138;
  float afStack_134 [6];
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  local_2e8 = param_5;
  if ((((&DAT_1464c9c48)[DAT_1464c9c14] - 8 < 3) || ((&DAT_1464c9c48)[DAT_1464c9c14] == 0x18)) &&
     (cVar3 = FUN_142753a10(), cVar3 == '\0')) {
    local_318 = 1;
  }
  else {
    local_318 = 0;
  }
  local_318 = param_2 ^ local_318;
  puVar11 = (undefined1 *)0x0;
  iVar7 = 0;
  iVar8 = 0;
  local_278 = (undefined1 *)0x0;
  local_268 = 0;
  iStack_264 = 0;
  if (local_318 == 0) {
    fVar21 = (float)*(undefined8 *)((longlong)param_3 + 0x24);
    fVar19 = (float)param_3[3] - fVar21;
    fVar16 = (float)*param_3 - fVar21;
    fVar13 = *(float *)((longlong)param_3 + 0x2c);
    local_348._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x24) >> 0x20);
    fVar14 = (float)((ulonglong)param_3[3] >> 0x20) - local_348._4_4_;
    fVar15 = *(float *)((longlong)param_3 + 4) - local_348._4_4_;
    fVar20 = fVar14 * (*(float *)(param_3 + 1) - fVar13) -
             (*(float *)(param_3 + 4) - fVar13) * fVar15;
    fVar18 = (*(float *)(param_3 + 4) - fVar13) * fVar16 -
             fVar19 * (*(float *)(param_3 + 1) - fVar13);
    fVar15 = fVar19 * fVar15 - fVar14 * fVar16;
    fVar14 = fVar18 * fVar18 + fVar20 * fVar20 + fVar15 * fVar15;
    afStack_134[0] = fVar18;
    afStack_134[1] = fVar15;
    local_138 = fVar20;
    if ((fVar14 != 1.0) &&
       (afStack_134[0] = DAT_1468b5d94, afStack_134[1] = DAT_1468b5d98, local_138 = DAT_1468b5d90,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      afStack_134[0] = fVar18 * fVar16;
      afStack_134[1] = fVar15 * fVar16;
      local_138 = fVar20 * fVar16;
    }
    fVar15 = afStack_134[0] * local_348._4_4_;
    fVar22 = (float)*(undefined8 *)((longlong)param_3 + 0x54);
    local_348._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x54) >> 0x20);
    fVar14 = (float)((ulonglong)param_3[9] >> 0x20) - local_348._4_4_;
    afStack_134[2] = local_138 * fVar21 + fVar15 + afStack_134[1] * fVar13;
    fVar19 = (float)param_3[9] - fVar22;
    fVar16 = (float)param_3[3] - fVar22;
    fVar13 = *(float *)((longlong)param_3 + 0x5c);
    fVar15 = (float)((ulonglong)param_3[3] >> 0x20) - local_348._4_4_;
    fVar20 = fVar14 * (*(float *)(param_3 + 4) - fVar13) -
             (*(float *)(param_3 + 10) - fVar13) * fVar15;
    fVar18 = (*(float *)(param_3 + 10) - fVar13) * fVar16 -
             fVar19 * (*(float *)(param_3 + 4) - fVar13);
    fVar15 = fVar19 * fVar15 - fVar14 * fVar16;
    fVar14 = fVar18 * fVar18 + fVar20 * fVar20 + fVar15 * fVar15;
    afStack_134[4] = fVar18;
    afStack_134[5] = fVar15;
    afStack_134[3] = fVar20;
    if ((fVar14 != 1.0) &&
       (afStack_134[4] = DAT_1468b5d94, afStack_134[5] = DAT_1468b5d98,
       afStack_134[3] = DAT_1468b5d90, 1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      afStack_134[4] = fVar18 * fVar16;
      afStack_134[5] = fVar15 * fVar16;
      afStack_134[3] = fVar20 * fVar16;
    }
    fVar23 = (float)*param_3;
    fVar14 = afStack_134[4] * local_348._4_4_;
    local_348._4_4_ = (float)((ulonglong)*param_3 >> 0x20);
    fVar15 = (float)((ulonglong)param_3[6] >> 0x20) - local_348._4_4_;
    fVar21 = (float)param_3[6] - fVar23;
    fStack_11c = afStack_134[3] * fVar22 + fVar14 + afStack_134[5] * fVar13;
    fVar18 = (float)*(undefined8 *)((longlong)param_3 + 0x3c) - fVar23;
    fVar13 = *(float *)(param_3 + 1);
    fVar14 = *(float *)((longlong)param_3 + 0x44) - fVar13;
    fVar16 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x3c) >> 0x20) - local_348._4_4_
    ;
    fVar19 = fVar15 * fVar14 - (*(float *)(param_3 + 7) - fVar13) * fVar16;
    fVar20 = (*(float *)(param_3 + 7) - fVar13) * fVar18 - fVar21 * fVar14;
    fVar15 = fVar21 * fVar16 - fVar15 * fVar18;
    fVar14 = fVar20 * fVar20 + fVar19 * fVar19 + fVar15 * fVar15;
    local_118 = fVar19;
    fStack_114 = fVar20;
    fStack_110 = fVar15;
    if ((fVar14 != 1.0) &&
       (local_118 = DAT_1468b5d90, fStack_114 = DAT_1468b5d94, fStack_110 = DAT_1468b5d98,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      local_118 = fVar19 * fVar16;
      fStack_114 = fVar20 * fVar16;
      fStack_110 = fVar15 * fVar16;
    }
    fVar21 = (float)param_3[3];
    fVar18 = fStack_114 * local_348._4_4_;
    fVar16 = (float)param_3[6] - fVar21;
    local_348._4_4_ = (float)((ulonglong)param_3[3] >> 0x20);
    fVar15 = (float)((ulonglong)param_3[6] >> 0x20) - local_348._4_4_;
    fVar14 = (float)((ulonglong)param_3[9] >> 0x20) - local_348._4_4_;
    fVar19 = (float)param_3[9] - fVar21;
    fStack_10c = local_118 * fVar23 + fVar18 + fStack_110 * fVar13;
    fVar13 = *(float *)(param_3 + 4);
    fVar18 = fVar14 * (*(float *)(param_3 + 7) - fVar13) -
             (*(float *)(param_3 + 10) - fVar13) * fVar15;
    fVar20 = fVar19 * fVar15 - fVar14 * fVar16;
    fVar15 = (*(float *)(param_3 + 10) - fVar13) * fVar16 -
             fVar19 * (*(float *)(param_3 + 7) - fVar13);
    fVar14 = fVar15 * fVar15 + fVar18 * fVar18 + fVar20 * fVar20;
    local_108 = fVar18;
    fStack_104 = fVar15;
    fStack_100 = fVar20;
    if ((fVar14 != 1.0) &&
       (local_108 = DAT_1468b5d90, fStack_104 = DAT_1468b5d94, fStack_100 = DAT_1468b5d98,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      local_108 = fVar18 * fVar16;
      fStack_104 = fVar15 * fVar16;
      fStack_100 = fVar20 * fVar16;
    }
    fVar22 = (float)*(undefined8 *)((longlong)param_3 + 0x3c);
    fVar14 = fStack_104 * local_348._4_4_;
    fVar18 = (float)*(undefined8 *)((longlong)param_3 + 0x24) - fVar22;
    local_348._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x3c) >> 0x20);
    fVar16 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x24) >> 0x20) - local_348._4_4_
    ;
    fVar20 = (float)*(undefined8 *)((longlong)param_3 + 0x54) - fVar22;
    fVar15 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x54) >> 0x20) - local_348._4_4_
    ;
    fStack_fc = local_108 * fVar21 + fVar14 + fStack_100 * fVar13;
    fVar13 = *(float *)((longlong)param_3 + 0x44);
    fVar19 = *(float *)((longlong)param_3 + 0x5c) - fVar13;
    fVar14 = *(float *)((longlong)param_3 + 0x2c) - fVar13;
    local_358 = fVar15 * fVar14 - fVar19 * fVar16;
    fStack_350 = fVar20 * fVar16 - fVar15 * fVar18;
    fStack_354 = fVar19 * fVar18 - fVar20 * fVar14;
    fVar14 = fStack_354 * fStack_354 + local_358 * local_358 + fStack_350 * fStack_350;
    if (fVar14 != 1.0) {
      if (1e-08 <= fVar14) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar17._0_4_;
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        fStack_350 = fVar15 * fStack_350;
        local_358 = fVar15 * local_358;
        fStack_354 = fVar15 * fStack_354;
      }
      else {
        local_358 = DAT_1468b5d90;
        fStack_354 = DAT_1468b5d94;
        fStack_350 = DAT_1468b5d98;
      }
    }
    uVar1 = param_3[6];
    fVar21 = (float)uVar1;
    fVar18 = fStack_354 * local_348._4_4_;
    fVar16 = (float)*(undefined8 *)((longlong)param_3 + 0x54) - fVar21;
    local_348._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar15 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x54) >> 0x20) - local_348._4_4_
    ;
    fVar19 = (float)param_3[9] - fVar21;
    fVar14 = (float)((ulonglong)param_3[9] >> 0x20) - local_348._4_4_;
    local_f8 = local_358;
    fStack_f4 = fStack_354;
    fStack_f0 = fStack_350;
    fStack_ec = local_358 * fVar22 + fVar18 + fStack_350 * fVar13;
    local_320 = *(float *)(param_3 + 10);
    local_340 = *(float *)(param_3 + 7);
    fVar13 = *(float *)((longlong)param_3 + 0x5c) - local_340;
    fVar18 = fVar14 * fVar13 - (local_320 - local_340) * fVar15;
    fVar20 = fVar19 * fVar15 - fVar14 * fVar16;
    fVar15 = (local_320 - local_340) * fVar16 - fVar19 * fVar13;
    fVar14 = fVar15 * fVar15 + fVar18 * fVar18 + fVar20 * fVar20;
    local_e8 = fVar18;
    fVar13 = local_348._4_4_;
    fStack_350 = fVar20;
    fStack_354 = fVar15;
    if ((fVar14 != 1.0) &&
       (local_e8 = DAT_1468b5d90, fStack_350 = DAT_1468b5d98, fStack_354 = DAT_1468b5d94,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      local_e8 = fVar16 * fVar18;
      fStack_350 = fVar16 * fVar20;
      fStack_354 = fVar16 * fVar15;
    }
  }
  else {
    fVar20 = (float)*param_3;
    fVar19 = (float)param_3[3] - fVar20;
    fVar18 = (float)*(undefined8 *)((longlong)param_3 + 0x24) - fVar20;
    fVar13 = *(float *)(param_3 + 1);
    local_348._4_4_ = (float)((ulonglong)*param_3 >> 0x20);
    fVar14 = *(float *)((longlong)param_3 + 0x2c) - fVar13;
    fVar15 = (float)((ulonglong)param_3[3] >> 0x20) - local_348._4_4_;
    fVar16 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x24) >> 0x20) - local_348._4_4_
    ;
    local_358 = fVar15 * fVar14 - (*(float *)(param_3 + 4) - fVar13) * fVar16;
    fStack_354 = (*(float *)(param_3 + 4) - fVar13) * fVar18 - fVar19 * fVar14;
    fStack_350 = fVar19 * fVar16 - fVar15 * fVar18;
    fVar14 = fStack_354 * fStack_354 + local_358 * local_358 + fStack_350 * fStack_350;
    if (fVar14 != 1.0) {
      if (1e-08 <= fVar14) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar17._0_4_;
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        local_358 = fVar15 * local_358;
        fStack_354 = fVar15 * fStack_354;
        fStack_350 = fVar15 * fStack_350;
      }
      else {
        local_358 = DAT_1468b5d90;
        fStack_354 = DAT_1468b5d94;
        fStack_350 = DAT_1468b5d98;
      }
    }
    fVar21 = (float)param_3[3];
    fVar14 = fStack_354 * local_348._4_4_;
    local_348._4_4_ = (float)((ulonglong)param_3[3] >> 0x20);
    fVar15 = (float)((ulonglong)param_3[9] >> 0x20) - local_348._4_4_;
    afStack_134[2] = local_358 * fVar20 + fVar14 + fStack_350 * fVar13;
    fVar19 = (float)param_3[9] - fVar21;
    local_138 = local_358;
    afStack_134[0] = fStack_354;
    afStack_134[1] = fStack_350;
    fVar18 = (float)*(undefined8 *)((longlong)param_3 + 0x54) - fVar21;
    fVar13 = *(float *)(param_3 + 4);
    fVar14 = *(float *)((longlong)param_3 + 0x5c) - fVar13;
    fVar16 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x54) >> 0x20) - local_348._4_4_
    ;
    local_358 = fVar15 * fVar14 - (*(float *)(param_3 + 10) - fVar13) * fVar16;
    fStack_354 = (*(float *)(param_3 + 10) - fVar13) * fVar18 - fVar19 * fVar14;
    fStack_350 = fVar19 * fVar16 - fVar15 * fVar18;
    fVar14 = fStack_354 * fStack_354 + local_358 * local_358 + fStack_350 * fStack_350;
    if (fVar14 != 1.0) {
      if (1e-08 <= fVar14) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar17._0_4_;
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        local_358 = fVar15 * local_358;
        fStack_354 = fVar15 * fStack_354;
        fStack_350 = fVar15 * fStack_350;
      }
      else {
        local_358 = DAT_1468b5d90;
        fStack_354 = DAT_1468b5d94;
        fStack_350 = DAT_1468b5d98;
      }
    }
    fVar22 = (float)*(undefined8 *)((longlong)param_3 + 0x3c);
    fVar16 = (float)*param_3 - fVar22;
    fVar18 = fStack_354 * local_348._4_4_;
    local_348._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x3c) >> 0x20);
    fVar15 = (float)((ulonglong)*param_3 >> 0x20) - local_348._4_4_;
    fVar14 = (float)((ulonglong)param_3[6] >> 0x20) - local_348._4_4_;
    fVar19 = (float)param_3[6] - fVar22;
    afStack_134[3] = local_358;
    afStack_134[4] = fStack_354;
    afStack_134[5] = fStack_350;
    fStack_11c = local_358 * fVar21 + fVar18 + fStack_350 * fVar13;
    fVar13 = *(float *)((longlong)param_3 + 0x44);
    fVar18 = fVar14 * (*(float *)(param_3 + 1) - fVar13) -
             (*(float *)(param_3 + 7) - fVar13) * fVar15;
    fVar20 = fVar19 * fVar15 - fVar14 * fVar16;
    fVar15 = (*(float *)(param_3 + 7) - fVar13) * fVar16 -
             fVar19 * (*(float *)(param_3 + 1) - fVar13);
    fVar14 = fVar15 * fVar15 + fVar18 * fVar18 + fVar20 * fVar20;
    local_118 = fVar18;
    fStack_114 = fVar15;
    fStack_110 = fVar20;
    if ((fVar14 != 1.0) &&
       (local_118 = DAT_1468b5d90, fStack_114 = DAT_1468b5d94, fStack_110 = DAT_1468b5d98,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      local_118 = fVar18 * fVar16;
      fStack_114 = fVar15 * fVar16;
      fStack_110 = fVar20 * fVar16;
    }
    fVar21 = (float)param_3[6];
    fVar18 = fStack_114 * local_348._4_4_;
    fVar16 = (float)param_3[3] - fVar21;
    local_348._4_4_ = (float)((ulonglong)param_3[6] >> 0x20);
    fVar15 = (float)((ulonglong)param_3[3] >> 0x20) - local_348._4_4_;
    fVar19 = (float)param_3[9] - fVar21;
    fVar14 = (float)((ulonglong)param_3[9] >> 0x20) - local_348._4_4_;
    fStack_10c = local_118 * fVar22 + fVar18 + fStack_110 * fVar13;
    fVar13 = *(float *)(param_3 + 7);
    fVar18 = fVar14 * (*(float *)(param_3 + 4) - fVar13) -
             (*(float *)(param_3 + 10) - fVar13) * fVar15;
    fVar20 = fVar19 * fVar15 - fVar14 * fVar16;
    fVar15 = (*(float *)(param_3 + 10) - fVar13) * fVar16 -
             fVar19 * (*(float *)(param_3 + 4) - fVar13);
    fVar14 = fVar15 * fVar15 + fVar18 * fVar18 + fVar20 * fVar20;
    local_108 = fVar18;
    fStack_104 = fVar15;
    fStack_100 = fVar20;
    if ((fVar14 != 1.0) &&
       (local_108 = DAT_1468b5d90, fStack_104 = DAT_1468b5d94, fStack_100 = DAT_1468b5d98,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      local_108 = fVar18 * fVar16;
      fStack_104 = fVar15 * fVar16;
      fStack_100 = fVar20 * fVar16;
    }
    fVar23 = (float)*(undefined8 *)((longlong)param_3 + 0x24);
    fVar14 = fStack_104 * local_348._4_4_;
    fVar18 = (float)*(undefined8 *)((longlong)param_3 + 0x3c) - fVar23;
    local_348._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x24) >> 0x20);
    fVar16 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x3c) >> 0x20) - local_348._4_4_
    ;
    fVar22 = (float)*(undefined8 *)((longlong)param_3 + 0x54) - fVar23;
    fVar15 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x54) >> 0x20) - local_348._4_4_
    ;
    fStack_fc = local_108 * fVar21 + fVar14 + fStack_100 * fVar13;
    fVar13 = *(float *)((longlong)param_3 + 0x2c);
    fVar20 = *(float *)((longlong)param_3 + 0x5c) - fVar13;
    fVar14 = *(float *)((longlong)param_3 + 0x44) - fVar13;
    fVar19 = fVar15 * fVar14 - fVar20 * fVar16;
    fVar16 = fVar22 * fVar16 - fVar15 * fVar18;
    fVar15 = fVar20 * fVar18 - fVar22 * fVar14;
    fVar14 = fVar15 * fVar15 + fVar19 * fVar19 + fVar16 * fVar16;
    local_f8 = fVar19;
    fStack_f4 = fVar15;
    fStack_f0 = fVar16;
    if ((fVar14 != 1.0) &&
       (local_f8 = DAT_1468b5d90, fStack_f4 = DAT_1468b5d94, fStack_f0 = DAT_1468b5d98,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar18 = auVar17._0_4_;
      fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
      fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
      local_f8 = fVar19 * fVar18;
      fStack_f4 = fVar15 * fVar18;
      fStack_f0 = fVar16 * fVar18;
    }
    uVar1 = *(undefined8 *)((longlong)param_3 + 0x54);
    fVar21 = (float)uVar1;
    fVar18 = fStack_f4 * local_348._4_4_;
    fVar16 = (float)param_3[6] - fVar21;
    local_348._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar15 = (float)((ulonglong)param_3[6] >> 0x20) - local_348._4_4_;
    fVar19 = (float)param_3[9] - fVar21;
    fVar14 = (float)((ulonglong)param_3[9] >> 0x20) - local_348._4_4_;
    fStack_ec = local_f8 * fVar23 + fVar18 + fStack_f0 * fVar13;
    local_320 = *(float *)(param_3 + 10);
    local_340 = *(float *)((longlong)param_3 + 0x5c);
    fVar18 = fVar14 * (*(float *)(param_3 + 7) - local_340) - (local_320 - local_340) * fVar15;
    fVar20 = fVar19 * fVar15 - fVar14 * fVar16;
    fVar15 = (local_320 - local_340) * fVar16 - fVar19 * (*(float *)(param_3 + 7) - local_340);
    fVar14 = fVar15 * fVar15 + fVar18 * fVar18 + fVar20 * fVar20;
    local_e8 = fVar18;
    fVar13 = local_348._4_4_;
    fStack_350 = fVar20;
    fStack_354 = fVar15;
    if ((fVar14 != 1.0) &&
       (local_e8 = DAT_1468b5d90, fStack_350 = DAT_1468b5d98, fStack_354 = DAT_1468b5d94,
       1e-08 <= fVar14)) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar16 = auVar17._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar14 * 0.5 * fVar16 * fVar16);
      fStack_354 = fVar15 * fVar16;
      fStack_350 = fVar20 * fVar16;
      local_e8 = fVar18 * fVar16;
    }
  }
  local_348 = uVar1;
  lVar10 = 0;
  *param_6 = CONCAT44(afStack_134[0],local_138);
  param_6[1] = CONCAT44(afStack_134[2],afStack_134[1]);
  pfVar9 = &local_138;
  fStack_34c = local_e8 * fVar21 + fStack_354 * fVar13 + fStack_350 * local_340;
  *param_7 = local_e8;
  param_7[1] = fStack_354;
  param_7[2] = fStack_350;
  param_7[3] = fStack_34c;
  lVar12 = 6;
  fStack_e4 = fStack_354;
  fStack_e0 = fStack_350;
  fStack_dc = fStack_34c;
  _local_358 = CONCAT44(fStack_354,local_e8);
  local_308 = local_138;
  fStack_304 = afStack_134[0];
  fStack_300 = afStack_134[1];
  fStack_2fc = afStack_134[2];
  do {
    fStack_350 = pfVar9[2];
    if ((float)*(undefined8 *)pfVar9 * *param_4 + pfVar9[1] * param_4[1] + fStack_350 * param_4[2] <
        0.0) {
      local_268 = iVar8 + 1;
      if (iVar7 < local_268) {
        TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_2d8,iVar8);
        puVar11 = local_278;
      }
      puVar4 = local_2d8;
      if (puVar11 != (undefined1 *)0x0) {
        puVar4 = puVar11;
      }
      puVar5 = (undefined8 *)(puVar4 + (longlong)iVar8 * 0x10);
      fVar13 = pfVar9[2];
      *puVar5 = *(undefined8 *)pfVar9;
      *(float *)(puVar5 + 1) = fVar13;
      *(float *)((longlong)puVar5 + 0xc) = pfVar9[3];
      puVar11 = local_278;
      iVar8 = local_268;
      iVar7 = iStack_264;
    }
    puVar4 = local_2e8;
    bVar2 = local_318;
    pfVar9 = pfVar9 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  do {
    fVar13 = param_4[1];
    fStack_350 = afStack_134[(longlong)*(int *)((longlong)&DAT_145052730 + lVar10) * 4 + 1];
    local_320 = afStack_134[(longlong)*(int *)((longlong)&DAT_145052734 + lVar10) * 4 + 1];
    fVar14 = (float)*(undefined8 *)
                     (afStack_134 + (longlong)*(int *)((longlong)&DAT_145052730 + lVar10) * 4 + -1)
             * *param_4 +
             (float)((ulonglong)
                     *(undefined8 *)
                      (afStack_134 + (longlong)*(int *)((longlong)&DAT_145052730 + lVar10) * 4 + -1)
                    >> 0x20) * fVar13 + fStack_350 * param_4[2];
    if (((float)*(undefined8 *)
                 (afStack_134 + (longlong)*(int *)((longlong)&DAT_145052734 + lVar10) * 4 + -1) *
         *param_4 +
         (float)((ulonglong)
                 *(undefined8 *)
                  (afStack_134 + (longlong)*(int *)((longlong)&DAT_145052734 + lVar10) * 4 + -1) >>
                0x20) * fVar13 + local_320 * param_4[2]) * fVar14 < 0.0) {
      uVar1 = *(undefined8 *)
               ((longlong)param_3 + (longlong)*(int *)((longlong)&DAT_145052790 + lVar10) * 0xc);
      fVar23 = (float)uVar1;
      local_340 = *(float *)((longlong)param_3 +
                            (longlong)*(int *)((longlong)&DAT_145052790 + lVar10) * 0xc + 8);
      local_348._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      puVar6 = *(undefined1 **)
                ((longlong)param_3 + (longlong)*(int *)((longlong)&DAT_145052794 + lVar10) * 0xc);
      fVar19 = SUB84(puVar6,0);
      local_2e0 = *(float *)((longlong)param_3 +
                            (longlong)*(int *)((longlong)&DAT_145052794 + lVar10) * 0xc + 8);
      fVar21 = fVar23 - fVar19;
      fVar20 = local_340 - local_2e0;
      local_2e8._4_4_ = (float)((ulonglong)puVar6 >> 0x20);
      fVar22 = local_348._4_4_ - local_2e8._4_4_;
      fVar15 = SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20);
      fVar18 = fVar15 * *param_4 + fVar23;
      fVar16 = fVar15 * param_4[2] + local_340;
      fVar13 = fVar15 * fVar13 + local_348._4_4_;
      local_348 = uVar1;
      local_2e8 = puVar6;
      if (0.0 <= fVar14 == (bool)bVar2) {
        fVar13 = fVar13 - local_2e8._4_4_;
        fVar16 = fVar16 - local_2e0;
        fVar18 = fVar18 - fVar19;
        local_308 = fVar22 * fVar16 - fVar20 * fVar13;
        fStack_300 = fVar21 * fVar13 - fVar22 * fVar18;
        fStack_304 = fVar20 * fVar18 - fVar21 * fVar16;
        fVar13 = fStack_304 * fStack_304 + local_308 * local_308 + fStack_300 * fStack_300;
        if (fVar13 != 1.0) {
          if (1e-08 <= fVar13) {
            auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
            fVar14 = auVar17._0_4_;
            fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
            fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
            local_308 = fVar14 * local_308;
            fStack_304 = fVar14 * fStack_304;
            fStack_300 = fVar14 * fStack_300;
          }
          else {
            local_308 = DAT_1468b5d90;
            fStack_304 = DAT_1468b5d94;
            fStack_300 = DAT_1468b5d98;
          }
        }
        local_268 = iVar8 + 1;
        fVar13 = local_308 * fVar19 + fStack_304 * local_2e8._4_4_ + fStack_300 * local_2e0;
        if (iVar7 < local_268) {
          TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_2d8,iVar8);
          puVar11 = local_278;
        }
        puVar6 = local_2d8;
        if (puVar11 != (undefined1 *)0x0) {
          puVar6 = puVar11;
        }
        puVar5 = (undefined8 *)(puVar6 + (longlong)iVar8 * 0x10);
        fVar14 = local_308;
        fVar15 = fStack_304;
        fVar16 = fStack_300;
      }
      else {
        fVar13 = fVar13 - local_348._4_4_;
        fVar16 = fVar16 - local_340;
        fVar18 = fVar18 - fVar23;
        fVar14 = (local_2e8._4_4_ - local_348._4_4_) * fVar16 - (local_2e0 - local_340) * fVar13;
        fVar15 = (fVar19 - fVar23) * fVar13 - (local_2e8._4_4_ - local_348._4_4_) * fVar18;
        fVar16 = (local_2e0 - local_340) * fVar18 - (fVar19 - fVar23) * fVar16;
        fVar13 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
        local_2f8 = fVar14;
        local_2f0 = fVar15;
        fStack_2f4 = fVar16;
        if ((fVar13 != 1.0) &&
           (local_2f8 = DAT_1468b5d90, local_2f0 = DAT_1468b5d98, fStack_2f4 = DAT_1468b5d94,
           1e-08 <= fVar13)) {
          auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
          fVar18 = auVar17._0_4_;
          fVar18 = fVar18 + fVar18 * (0.5 - fVar13 * 0.5 * fVar18 * fVar18);
          fVar18 = fVar18 + fVar18 * (0.5 - fVar13 * 0.5 * fVar18 * fVar18);
          local_2f8 = fVar14 * fVar18;
          local_2f0 = fVar15 * fVar18;
          fStack_2f4 = fVar16 * fVar18;
        }
        local_268 = iVar8 + 1;
        fVar13 = local_2f8 * fVar23 + fStack_2f4 * local_348._4_4_ + local_2f0 * local_340;
        if (iVar7 < local_268) {
          TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow(local_2d8,iVar8);
          puVar11 = local_278;
        }
        puVar6 = local_2d8;
        if (puVar11 != (undefined1 *)0x0) {
          puVar6 = puVar11;
        }
        puVar5 = (undefined8 *)(puVar6 + (longlong)iVar8 * 0x10);
        fVar14 = local_2f8;
        fVar15 = fStack_2f4;
        fVar16 = local_2f0;
      }
      *puVar5 = CONCAT44(fVar15,fVar14);
      *(float *)(puVar5 + 1) = fVar16;
      *(float *)((longlong)puVar5 + 0xc) = fVar13;
      puVar11 = local_278;
      iVar8 = local_268;
      iVar7 = iStack_264;
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 < 0x60);
  local_1f8 = (undefined1 *)0x0;
  local_1e8 = CONCAT44(local_1e8._4_4_,iVar8);
  if (iVar8 == 0) {
    local_1e8 = 0;
  }
  else {
    TArray<FPlane,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy(local_258,iVar8,0);
    puVar6 = local_2d8;
    if (puVar11 != (undefined1 *)0x0) {
      puVar6 = puVar11;
    }
    puVar11 = local_258;
    if (local_1f8 != (undefined1 *)0x0) {
      puVar11 = local_1f8;
    }
    _guard_xfg_dispatch_icall_nop(puVar11,puVar6,(longlong)iVar8 << 4);
  }
  local_158 = 0;
  local_148 = 0;
  FConvexVolume::Init(local_258);
  puVar11 = local_1f8;
  if (puVar4 != local_258) {
    if (local_1f8 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(puVar4,local_258,0x60);
    }
    if (*(longlong *)(puVar4 + 0x60) != 0) {
      FMemory::Free();
      puVar11 = local_1f8;
    }
    *(undefined1 **)(puVar4 + 0x60) = puVar11;
    *(undefined4 *)(puVar4 + 0x70) = (undefined4)local_1e8;
    *(undefined4 *)(puVar4 + 0x74) = local_1e8._4_4_;
    local_1e8 = 0;
    local_1f8 = (undefined1 *)0x0;
  }
  lVar10 = local_158;
  if (puVar4 + 0x80 == local_1d8) {
    if (local_158 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (local_158 == 0) {
      _guard_xfg_dispatch_icall_nop(puVar4 + 0x80,local_1d8,0x80);
    }
    if (*(longlong *)(puVar4 + 0x100) != 0) {
      FMemory::Free();
      lVar10 = local_158;
    }
    *(longlong *)(puVar4 + 0x100) = lVar10;
    *(undefined4 *)(puVar4 + 0x110) = (undefined4)local_148;
    *(undefined4 *)(puVar4 + 0x114) = local_148._4_4_;
    local_148 = 0;
    local_158 = 0;
  }
  if (local_1f8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_278 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142365a40 FUN_142365a40 body=379 status=ok
// SIG undefined FUN_142365a40(void)

float * FUN_142365a40(longlong *param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    fVar1 = param_3[1];
    fVar2 = param_5[1];
    fVar5 = param_3[2];
    fVar3 = param_5[2];
    fVar4 = fVar1 * fVar2 + *param_5 * *param_3 + fVar5 * fVar3;
    *param_2 = (*param_3 - *param_5 * fVar4) * param_4;
    param_2[1] = (fVar1 - fVar2 * fVar4) * param_4;
    param_2[2] = (fVar5 - fVar3 * fVar4) * param_4;
  }
  else {
    local_58 = *(undefined8 *)param_5;
    local_50 = param_5[2];
    (**(code **)(*param_1 + 0x500))(local_58,&local_68,&local_58);
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar5 = fVar1 * local_64 + *param_3 * local_68 + fVar2 * local_60;
    *param_2 = (*param_3 - local_68 * fVar5) * param_4;
    param_2[1] = (fVar1 - local_64 * fVar5) * param_4;
    param_2[2] = (fVar2 - local_60 * fVar5) * param_4;
  }
  return param_2;
}



// FUNCTION 142365bc0 FUN_142365bc0 body=1428 status=ok
// SIG undefined FUN_142365bc0(void)

void FUN_142365bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  int local_res18 [2];
  int local_res20;
  int local_d0;
  uint uStack_cc;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  uint uStack_9c;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  if (param_2 != 0) {
    iVar12 = *(int *)(param_1 + 0x1f0) + -1;
    if (-1 < iVar12) {
      lVar16 = (longlong)iVar12 * 0x70;
      do {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar16);
        if (*plVar9 == param_2) {
          if ((int)plVar9[1] == *(int *)(param_2 + 0x2b0)) {
            return;
          }
          goto LAB_142365cbb;
        }
        if (*plVar9 == 0) {
          TArray<FCachedKeyToActionInfo,FDefaultAllocator>::RemoveAtSwapImpl
                    (param_1 + 0x1e8,iVar12,1,0);
        }
        lVar16 = lVar16 + -0x70;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
    plVar9 = (longlong *)(param_1 + 0x1e8);
    iVar12 = *(int *)(param_1 + 0x1f0);
    *(int *)(param_1 + 0x1f0) = iVar12 + 1;
    if (*(int *)(param_1 + 500) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar9,iVar12);
    }
    puVar10 = (undefined8 *)((longlong)iVar12 * 0x70 + *plVar9);
    *puVar10 = 0;
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    *(undefined4 *)(puVar10 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x44) = 0;
    puVar10[10] = 0;
    *(undefined4 *)(puVar10 + 0xb) = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    plVar9 = (longlong *)((longlong)(*(int *)(param_1 + 0x1f0) + -1) * 0x70 + *plVar9);
    *plVar9 = param_2;
LAB_142365cbb:
    plVar1 = plVar9 + 2;
    uVar5 = *(uint *)(plVar9 + 7);
    puVar2 = (uint *)(plVar9 + 4);
    uStack_cc = 1;
    local_d0 = 0;
    uStack_bc = 0;
    iStack_b8 = 0;
    if (uVar5 != 0) {
      puVar18 = (uint *)plVar9[6];
      if ((uint *)plVar9[6] == (uint *)0x0) {
        puVar18 = puVar2;
      }
      uVar17 = *puVar18;
      iStack_b8 = 0;
      local_d0 = 0;
      while (uVar17 == 0) {
        lVar16 = (longlong)local_d0;
        iStack_b8 = iStack_b8 + 0x20;
        iVar12 = local_d0 + 1;
        bVar7 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d0;
        local_d0 = iVar12;
        if (bVar7) goto LAB_142365d84;
        uVar17 = puVar18[lVar16 + 1];
      }
      uStack_cc = -uVar17 & uVar17;
      local_res20 = 0x1f;
      if (uStack_cc != 0) {
        for (; uStack_cc >> local_res20 == 0; local_res20 = local_res20 + -1) {
        }
      }
      if (uStack_cc == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - local_res20;
      }
      uStack_bc = (iStack_b8 - iVar12) + 0x1f;
      if ((int)uVar5 < (int)uStack_bc) {
LAB_142365d84:
        uStack_bc = uVar5;
      }
    }
    uStack_9c = *(uint *)(plVar9 + 7);
    uStack_58 = 0xffffffff;
    uStack_54 = uStack_bc;
    local_50 = CONCAT44(uStack_b4,iStack_b8);
    uVar17 = uStack_9c & 0xffffffe0;
    iStack_68 = local_d0;
    uStack_64 = uStack_cc;
    local_60 = puVar2;
    local_70 = plVar1;
    if (uStack_9c != uVar5) {
      puVar18 = (uint *)plVar9[6];
      if ((uint *)plVar9[6] == (uint *)0x0) {
        puVar18 = puVar2;
      }
      uVar11 = puVar18[(int)uStack_9c >> 5] & -1 << ((byte)uStack_9c & 0x1f);
      iVar12 = (int)uStack_9c >> 5;
      while (uVar11 == 0) {
        uVar17 = uVar17 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142365e5d;
        uVar11 = puVar18[(longlong)iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_9c = (uVar17 - iVar12) + 0x1f;
      if ((int)uVar5 < (int)uStack_9c) {
LAB_142365e5d:
        uStack_9c = uVar5;
      }
    }
    while (((uStack_54 != uStack_9c || (local_60 != puVar2)) || (local_70 != plVar1))) {
      lVar16 = (longlong)(int)uStack_54 * 0x30 + *local_70;
      iVar12 = *(int *)(lVar16 + 0x24);
      iVar15 = *(int *)(lVar16 + 0x20);
      if (iVar12 < 0) {
        if (iVar15 != 0) {
          plVar13 = (longlong *)(*(longlong *)(lVar16 + 0x18) + 8);
          do {
            plVar8 = (longlong *)*plVar13;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar8 + 1;
              lVar14 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar4 = (int *)((longlong)plVar8 + 0xc);
                iVar12 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            plVar13 = plVar13 + 2;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          iVar12 = *(int *)(lVar16 + 0x24);
        }
        *(undefined4 *)(lVar16 + 0x20) = 0;
        if (iVar12 != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar16 + 0x18,0);
        }
      }
      else {
        if (iVar15 != 0) {
          plVar13 = (longlong *)(*(longlong *)(lVar16 + 0x18) + 8);
          do {
            plVar8 = (longlong *)*plVar13;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar8 + 1;
              lVar14 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar4 = (int *)((longlong)plVar8 + 0xc);
                iVar12 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            plVar13 = plVar13 + 2;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        *(undefined4 *)(lVar16 + 0x20) = 0;
      }
      uStack_58 = uStack_58 & ~uStack_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
    }
    TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(plVar9 + 0xc,0);
    plVar13 = *(longlong **)(param_1 + 0x1d8);
    local_78 = plVar13 + (longlong)*(int *)(param_1 + 0x1e0) * 2;
    if (plVar13 != local_78) {
      do {
        plVar8 = (longlong *)UPlayerInput::GetKeysForAction(param_2,*(undefined8 *)(*plVar13 + 8));
        lVar14 = *plVar8;
        lVar16 = lVar14 + (longlong)(int)plVar8[1] * 0x28;
        for (; lVar14 != lVar16; lVar14 = lVar14 + 0x28) {
          lVar6 = *(longlong *)(lVar14 + 0x10);
          if (lVar6 == DAT_1469e97d8) {
            iVar12 = (int)plVar9[0xd];
            *(int *)(plVar9 + 0xd) = iVar12 + 1;
            if (*(int *)((longlong)plVar9 + 0x6c) < iVar12 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9 + 0xc,iVar12);
            }
            plVar8 = (longlong *)((longlong)iVar12 * 0x10 + plVar9[0xc]);
          }
          else {
            if ((int)plVar9[3] != *(int *)((longlong)plVar9 + 0x44)) {
              plVar8 = (longlong *)plVar9[10];
              if ((longlong *)plVar9[10] == (longlong *)0x0) {
                plVar8 = plVar9 + 9;
              }
              iVar12 = *(int *)((longlong)plVar8 +
                               ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                               (longlong)(int)plVar9[0xb] - 1U) * 4);
              if (iVar12 != -1) {
                do {
                  plVar8 = (longlong *)((longlong)iVar12 * 0x30 + *plVar1);
                  if (*plVar8 == lVar6) {
                    if ((iVar12 != -1) && (plVar8 != (longlong *)0x0)) goto LAB_14236608d;
                    break;
                  }
                  iVar12 = (int)plVar8[5];
                } while (iVar12 != -1);
              }
            }
            local_80 = lVar14 + 0x10;
            FUN_14235b3b0(plVar1,local_res18,&local_80,0);
            plVar8 = (longlong *)((longlong)local_res18[0] * 0x30 + *plVar1);
LAB_14236608d:
            iVar12 = (int)plVar8[4];
            *(int *)(plVar8 + 4) = iVar12 + 1;
            if (*(int *)((longlong)plVar8 + 0x24) < iVar12 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 3,iVar12);
            }
            plVar8 = (longlong *)((longlong)iVar12 * 0x10 + plVar8[3]);
          }
          *plVar8 = *plVar13;
          lVar6 = plVar13[1];
          plVar8[1] = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
        }
        plVar13 = plVar13 + 2;
      } while (plVar13 != local_78);
    }
    *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(param_2 + 0x2b0);
  }
  return;
}



// FUNCTION 142366160 FUN_142366160 body=195 status=ok
// SIG undefined FUN_142366160(void)

undefined8 * FUN_142366160(longlong param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0x1a8);
    fVar2 = *param_3 * *(float *)(param_1 + 0x1a0) + param_3[1] * *(float *)(param_1 + 0x1a4) +
            param_3[2] * fVar1;
    *(ulonglong *)param_3 =
         CONCAT44(param_3[1] - *(float *)(param_1 + 0x1a4) * fVar2,
                  *param_3 - *(float *)(param_1 + 0x1a0) * fVar2);
    param_3[2] = param_3[2] - fVar1 * fVar2;
  }
  fVar1 = param_3[2];
  *param_2 = *(undefined8 *)param_3;
  *(float *)(param_2 + 1) = fVar1;
  return param_2;
}



// FUNCTION 142366230 FUN_142366230 body=219 status=ok
// SIG undefined FUN_142366230(void)

undefined8 * FUN_142366230(longlong param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0x1a8);
    fVar2 = (param_3[1] - *(float *)(param_1 + 0x1b0)) * *(float *)(param_1 + 0x1a4) +
            (*param_3 - *(float *)(param_1 + 0x1ac)) * *(float *)(param_1 + 0x1a0) +
            (param_3[2] - *(float *)(param_1 + 0x1b4)) * fVar1;
    *(ulonglong *)param_3 =
         CONCAT44(param_3[1] - *(float *)(param_1 + 0x1a4) * fVar2,
                  *param_3 - *(float *)(param_1 + 0x1a0) * fVar2);
    param_3[2] = param_3[2] - fVar1 * fVar2;
  }
  fVar1 = param_3[2];
  *param_2 = *(undefined8 *)param_3;
  *(float *)(param_2 + 1) = fVar1;
  return param_2;
}



// FUNCTION 142366310 FUN_142366310 body=400 status=ok
// SIG undefined FUN_142366310(void)

undefined8 * FUN_142366310(longlong param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_48;
  float fStack_44;
  float local_40;
  
  if ((*(byte *)(param_1 + 0x198) & 1) != 0) {
    fVar1 = *param_3 * *(float *)(param_1 + 0x1a0) + param_3[1] * *(float *)(param_1 + 0x1a4) +
            param_3[2] * *(float *)(param_1 + 0x1a8);
    local_48 = *param_3 - *(float *)(param_1 + 0x1a0) * fVar1;
    fStack_44 = param_3[1] - *(float *)(param_1 + 0x1a4) * fVar1;
    local_40 = param_3[2] - *(float *)(param_1 + 0x1a8) * fVar1;
    fVar1 = fStack_44 * fStack_44 + local_48 * local_48 + local_40 * local_40;
    if (fVar1 != 1.0) {
      if (1e-08 <= fVar1) {
        auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
        fVar2 = auVar3._0_4_;
        fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
        fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
        local_48 = local_48 * fVar2;
        fStack_44 = fStack_44 * fVar2;
        local_40 = local_40 * fVar2;
      }
      else {
        local_48 = DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
        fStack_44 = DAT_1468b5d94;
      }
    }
    *(ulonglong *)param_3 = CONCAT44(fStack_44,local_48);
    param_3[2] = local_40;
  }
  fVar1 = param_3[2];
  *param_2 = *(undefined8 *)param_3;
  *(float *)(param_2 + 1) = fVar1;
  return param_2;
}



// FUNCTION 1423664a0 FUN_1423664a0 body=85 status=ok
// SIG undefined FUN_1423664a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423664a0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x208) == 0) {
    local_10 = DAT_1468b5d98;
    puVar2 = &local_18;
    local_18 = _DAT_1468b5d90;
  }
  else {
    puVar2 = (undefined8 *)FUN_14269c7c0(*(longlong *)(param_1 + 0x208),&local_18);
  }
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *param_2 = *puVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142366510 FUN_142366510 body=443 status=ok
// SIG undefined FUN_142366510(void)

void FUN_142366510(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  
  plVar1 = (longlong *)(param_1 + 0x720);
  TIndirectArray<FModelElement,FDefaultAllocator>::Empty(plVar1,0);
  iVar10 = 0;
  if (0 < *(int *)(param_2 + 0x728)) {
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar9 + *(longlong *)(param_2 + 0x720));
      uVar8 = FMemory::Malloc(0x78);
      iVar2 = *(int *)(param_1 + 0x728);
      *(int *)(param_1 + 0x728) = iVar2 + 1;
      if (*(int *)(param_1 + 0x72c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar8;
      puVar4 = *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR__scalar_deleting_destructor__145050848;
        puVar4[1] = *(undefined8 *)(lVar3 + 8);
        puVar4[2] = *(undefined8 *)(lVar3 + 0x10);
        puVar4[3] = 0;
        iVar2 = *(int *)(lVar3 + 0x20);
        _Src = *(void **)(lVar3 + 0x18);
        *(int *)(puVar4 + 4) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4 + 3,iVar2,0);
          _guard_xfg_dispatch_icall_nop((void *)puVar4[3],_Src,(longlong)iVar2 * 2);
        }
        puVar4[5] = *(undefined8 *)(lVar3 + 0x28);
        uVar8 = *(undefined8 *)(lVar3 + 0x38);
        puVar4[6] = *(undefined8 *)(lVar3 + 0x30);
        puVar4[7] = uVar8;
        puVar4[8] = *(undefined8 *)(lVar3 + 0x40);
        *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(lVar3 + 0x48);
        *(undefined4 *)((longlong)puVar4 + 0x4c) = *(undefined4 *)(lVar3 + 0x4c);
        *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(lVar3 + 0x50);
        *(undefined4 *)((longlong)puVar4 + 0x54) = *(undefined4 *)(lVar3 + 0x54);
        uVar5 = *(undefined4 *)(lVar3 + 0x5c);
        uVar6 = *(undefined4 *)(lVar3 + 0x60);
        uVar7 = *(undefined4 *)(lVar3 + 100);
        *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(lVar3 + 0x58);
        *(undefined4 *)((longlong)puVar4 + 0x5c) = uVar5;
        *(undefined4 *)(puVar4 + 0xc) = uVar6;
        *(undefined4 *)((longlong)puVar4 + 100) = uVar7;
        puVar4[0xd] = *(undefined8 *)(lVar3 + 0x68);
        *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(lVar3 + 0x70);
      }
      iVar10 = iVar10 + 1;
      puVar4[1] = param_1;
      lVar9 = lVar9 + 8;
    } while (iVar10 < *(int *)(param_2 + 0x728));
  }
  lVar9 = *(longlong *)(param_1 + 0x708);
  if ((lVar9 != 0) && (lVar3 = *(longlong *)(param_2 + 0x708), lVar3 != 0)) {
    uVar8 = *(undefined8 *)(lVar3 + 0xf8);
    *(undefined8 *)(lVar9 + 0xf0) = *(undefined8 *)(lVar3 + 0xf0);
    *(undefined8 *)(lVar9 + 0xf8) = uVar8;
  }
  return;
}



// FUNCTION 1423666d0 FUN_1423666d0 body=297 status=ok
// SIG undefined FUN_1423666d0(void)

void FUN_1423666d0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 local_res8;
  
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x14e);
  if (((cVar8 != '\0') && (param_1[0x151] != 0)) && (0 < (int)param_1[0x149])) {
    if (param_1[0xe3] == *(longlong *)(param_2 + 0x718)) {
      TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x146,param_2 + 0xa88);
    }
    else {
      TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x146,param_1[0xe3] + 0x168);
      iVar11 = 0;
      lVar12 = (longlong)*(int *)(*(longlong *)(param_2 + 0x718) + 0x160);
      if (0 < lVar12) {
        lVar13 = 0;
        do {
          FUN_1423acf90(param_2,&local_res8,iVar11);
          iVar9 = FUN_1423ac950(param_1,local_res8);
          if (iVar9 != -1) {
            lVar3 = *(longlong *)(param_2 + 0xa88);
            uVar7 = ((undefined8 *)(lVar3 + lVar13))[1];
            puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + param_1[0x146]);
            *puVar10 = *(undefined8 *)(lVar3 + lVar13);
            puVar10[1] = uVar7;
            puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar13);
            uVar7 = puVar1[1];
            puVar10[2] = *puVar1;
            puVar10[3] = uVar7;
            puVar2 = (undefined4 *)(lVar3 + 0x20 + lVar13);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            *(undefined4 *)(puVar10 + 4) = *puVar2;
            *(undefined4 *)((longlong)puVar10 + 0x24) = uVar4;
            *(undefined4 *)(puVar10 + 5) = uVar5;
            *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar6;
          }
          iVar11 = iVar11 + 1;
          lVar13 = lVar13 + 0x30;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
    (**(code **)(*param_1 + 0x960))(param_1,0);
  }
  return;
}



// FUNCTION 142366800 FUN_142366800 body=1850 status=ok
// SIG undefined FUN_142366800(void)

void FUN_142366800(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  longlong *plVar24;
  float local_f8;
  float fStack_f4;
  uint *puStack_f0;
  uint local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  ushort local_ae;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  uVar4 = param_1[0x23];
  if (((uVar4 != 0) && (*(char *)(uVar4 + 0x128) != '\x03')) && (param_1[0x5a] != 0)) {
    lVar12 = FUN_1428dfc70();
    lVar15 = param_1[0x5a];
    for (lVar14 = lVar15; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
      if (lVar14 == lVar12) {
        if (lVar15 != 0) {
          if (lVar15 == 0) goto LAB_142366892;
          plVar13 = (longlong *)FUN_1428dfc70();
          plVar18 = (longlong *)param_1[0x5a];
          plVar24 = plVar18;
          goto joined_r0x000142366882;
        }
        break;
      }
    }
  }
  goto LAB_1423668c5;
joined_r0x000142366882:
  if (plVar24 == (longlong *)0x0) goto LAB_142366892;
  if (plVar24 == plVar13) goto LAB_142366894;
  plVar24 = (longlong *)plVar24[6];
  goto joined_r0x000142366882;
LAB_142366960:
  do {
    if (!bVar6) goto LAB_142366f0c;
    lVar14 = *(longlong *)(uVar17 + 0x10);
    if (param_1[0x5a] != 0) {
      lVar16 = FUN_1428dfc70();
      lVar12 = param_1[0x5a];
      for (lVar19 = lVar12; lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 0x30)) {
        if (lVar19 == lVar16) goto LAB_1423669a0;
      }
    }
    lVar12 = 0;
LAB_1423669a0:
    bVar8 = false;
    if (lVar14 != lVar12) {
      bVar8 = bVar6;
    }
    bVar6 = bVar8;
    uVar17 = FUN_1422336c0(uVar17);
  } while (uVar17 != 0);
  if (!bVar6) goto LAB_142366f0c;
LAB_1423669c5:
  FActorSpawnParameters::FActorSpawnParameters(&local_d8);
  local_ae = local_ae | 0xc;
  local_b0 = 1;
  if (uVar4 == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = AActor::GetLevel(uVar4);
  }
  local_d8 = param_1[0x5d];
  if (param_1[0x5c] != 0) {
    lVar14 = *(longlong *)(param_1[0x5c] + 0x10);
    if (param_1[0x5a] != 0) {
      lVar16 = FUN_1428dfc70();
      lVar12 = param_1[0x5a];
      for (lVar19 = lVar12; lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 0x30)) {
        if (lVar19 == lVar16) goto LAB_142366a41;
      }
    }
    lVar12 = 0;
LAB_142366a41:
    if (lVar14 == lVar12) {
      local_d0 = param_1[0x5c];
    }
  }
  if ((*(uint *)(param_1 + 1) >> 3 & 1) == 0) {
    local_ac = local_ac & 0xfffffff7;
  }
  local_ac = local_ac | 0x2100000;
  if (((*(uint *)(param_1 + 1) >> 6 & 1) != 0) ||
     (cVar9 = (**(code **)(*param_1 + 0xf8))(param_1), cVar9 != '\0')) {
    local_ac = local_ac | 0x40;
  }
  uVar17 = param_1[0x23];
  local_ac = local_ac | *(uint *)(uVar17 + 8) & 0x40;
  local_c8 = uVar4;
  if (uVar4 == 0) {
LAB_142366af0:
    local_c0 = 0;
    if (uVar4 != 0) {
      uVar17 = FUN_140a63ba0(uVar4);
      local_c0 = uVar17;
    }
  }
  else {
    lVar14 = FUN_1429d7ab0();
    iVar11 = *(int *)(lVar14 + 0x90);
    uVar17 = (longlong)iVar11;
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < iVar11) ||
       (uVar17 = *(ulonglong *)(*(longlong *)(uVar4 + 0x10) + 0x88),
       *(longlong *)(uVar17 + (longlong)iVar11 * 8) != lVar14 + 0x88)) {
      uVar17 = uVar17 & 0xffffffffffffff00;
    }
    else {
      uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
    }
    local_c0 = uVar4;
    if ((char)uVar17 == '\0') goto LAB_142366af0;
  }
  uVar10 = (undefined4)uVar17;
  if ((*(byte *)((longlong)param_1 + 0x24c) & 1) == 0) {
    uVar10 = FUN_140942fb0(param_1,0,0);
  }
  local_a8 = (undefined4)param_1[0x44];
  local_a4 = *(undefined4 *)((longlong)param_1 + 0x224);
  local_a0 = (undefined4)param_1[0x45];
  local_f8 = *(float *)(param_1 + 0x42);
  fStack_f4 = *(float *)((longlong)param_1 + 0x214);
  fVar20 = *(float *)(param_1 + 0x43);
  puStack_f0 = (uint *)param_1[0x43];
  auVar7._4_4_ = -(uint)(*(float *)((longlong)param_1 + 0x254) != fStack_f4);
  auVar7._0_4_ = -(uint)(*(float *)(param_1 + 0x4a) != local_f8);
  auVar7._8_4_ = -(uint)(*(float *)(param_1 + 0x4b) != fVar20);
  auVar7._12_4_ =
       -(uint)(*(float *)((longlong)param_1 + 0x25c) != *(float *)((longlong)param_1 + 0x21c));
  iVar11 = movmskps(uVar10,auVar7);
  if (iVar11 != 0) {
    *(float *)(param_1 + 0x4a) = local_f8;
    *(float *)((longlong)param_1 + 0x254) = fStack_f4;
    *(float *)(param_1 + 0x4b) = fVar20;
    *(float *)((longlong)param_1 + 0x25c) = *(float *)((longlong)param_1 + 0x21c);
    plVar18 = (longlong *)FQuat::Rotator(&local_f8,local_38);
    param_1[0x4c] = *plVar18;
    *(int *)(param_1 + 0x4d) = (int)plVar18[1];
  }
  local_98 = param_1[0x4c];
  local_90 = (undefined4)param_1[0x4d];
  if (param_1[0x5a] != 0) {
    lVar19 = FUN_1428dfc70();
    lVar14 = param_1[0x5a];
    for (lVar12 = lVar14; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
      if (lVar12 == lVar19) goto LAB_142366bd0;
    }
  }
  lVar14 = 0;
LAB_142366bd0:
  plVar18 = &local_d8;
  lVar15 = UWorld::SpawnActor(lVar15,lVar14,&local_a8,&local_98,plVar18);
  param_1[0x5b] = lVar15;
  if (lVar15 != 0) {
    param_1[0x5d] = *(longlong *)(lVar15 + 0x18);
    FWeakObjectPtr::operator=(lVar15 + 0x198,param_1);
    (**(code **)(*param_1 + 0x550))(param_1,param_1[0x5b]);
    FUN_14222b9f0(param_1[0x5b],param_1 + 0x42);
    lVar15 = param_1[0x5b];
    plVar24 = (longlong *)(lVar15 + 0x2b0);
    local_f8 = 0.0;
    uVar2 = *(uint *)(lVar15 + 0x2d8);
    puVar1 = (uint *)(lVar15 + 0x2c0);
    fStack_f4 = 1.4013e-45;
    uStack_e4 = 0;
    iStack_e0 = 0;
    if (uVar2 != 0) {
      puVar23 = *(uint **)(lVar15 + 0x2d0);
      if (*(uint **)(lVar15 + 0x2d0) == (uint *)0x0) {
        puVar23 = puVar1;
      }
      uVar3 = *puVar23;
      iStack_e0 = 0;
      local_f8 = 0.0;
      while (uVar3 == 0) {
        lVar14 = (longlong)(int)local_f8;
        iStack_e0 = iStack_e0 + 0x20;
        fVar20 = (float)((int)local_f8 + 1);
        bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_f8;
        local_f8 = fVar20;
        if (bVar6) goto LAB_142366d03;
        uVar3 = puVar23[lVar14 + 1];
      }
      fStack_f4 = (float)(-uVar3 & uVar3);
      iVar11 = 0x1f;
      if (fStack_f4 != 0.0) {
        for (; (uint)fStack_f4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (fStack_f4 == 0.0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_e4 = (iStack_e0 - iVar11) + 0x1f;
      if ((int)uVar2 < (int)uStack_e4) {
LAB_142366d03:
        uStack_e4 = uVar2;
      }
    }
    uVar3 = *(uint *)(lVar15 + 0x2d8);
    uStack_70 = CONCAT44(uStack_e4,0xffffffff);
    local_68 = CONCAT44(uStack_dc,iStack_e0);
    uStack_58 = CONCAT44(fStack_f4,local_f8);
    local_e8 = -1 << ((byte)uVar3 & 0x1f);
    uVar22 = uVar3 & 0xffffffe0;
    fStack_80 = local_f8;
    fStack_7c = fStack_f4;
    puStack_f0 = puVar1;
    uStack_e4 = uVar3;
    local_78 = puVar1;
    local_60 = plVar24;
    puStack_50 = puVar1;
    uStack_48 = uStack_70;
    uStack_40 = local_68;
    local_88 = plVar24;
    if (uVar3 != uVar2) {
      puVar23 = *(uint **)(lVar15 + 0x2d0);
      if (*(uint **)(lVar15 + 0x2d0) == (uint *)0x0) {
        puVar23 = puVar1;
      }
      uVar21 = puVar23[(int)uVar3 >> 5] & local_e8;
      iVar11 = (int)uVar3 >> 5;
      while (uVar21 == 0) {
        uVar22 = uVar22 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_142366dd8;
        uVar21 = puVar23[(longlong)iVar11 + 1];
        local_e8 = 0xffffffff;
        iVar11 = iVar11 + 1;
      }
      uVar21 = -uVar21 & uVar21;
      iVar11 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar21 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_e4 = (uVar22 - iVar11) + 0x1f;
      uVar3 = uStack_e4;
      if ((int)uVar2 < (int)uStack_e4) {
LAB_142366dd8:
        uStack_e4 = uVar2;
        uVar3 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_70._4_4_ == uVar3) && (local_78 == puVar1)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (local_88 == plVar24)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) break;
      puVar23 = (uint *)(*(longlong *)(*local_88 + (longlong)(int)uStack_70._4_4_ * 0x10) + 8);
      *puVar23 = *puVar23 | *(uint *)(param_1 + 1) & 0x40;
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~(uint)fStack_7c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_80);
    }
    FUN_1422232e0(param_1[0x5b],param_1,&DAT_146532184,0);
    FUN_142350b20(param_1,*(byte *)(param_1[0x5b] + 0x92) >> 6 & 1);
    lVar15 = param_1[0x5e];
    if (lVar15 != 0) {
      lVar14 = *(longlong *)(lVar15 + 0x70);
      lVar15 = (longlong)*(int *)(lVar15 + 0x78) * 0x40 + lVar14;
      for (; lVar14 != lVar15; lVar14 = lVar14 + 0x40) {
        lVar12 = FWeakObjectPtr::Get(lVar14);
        if (lVar12 != 0) {
          lVar19 = FUN_14222e2a0(lVar12);
          if (lVar19 == 0) {
            FUN_142223280(lVar12,param_1[0x5b],&DAT_146532180,*(undefined8 *)(lVar14 + 8));
            plVar18 = (longlong *)((ulonglong)plVar18 & 0xffffffffffffff00);
            FUN_14223d0f0(lVar12,lVar14 + 0x10,0,0,plVar18);
          }
        }
      }
    }
  }
  goto LAB_142366f0c;
LAB_142366892:
  plVar18 = (longlong *)0x0;
LAB_142366894:
  lVar15 = plVar18[0x1f];
  if (lVar15 == 0) {
    (**(code **)(*plVar18 + 0x368))(plVar18);
    lVar15 = plVar18[0x1f];
    if (lVar15 == 0) goto LAB_1423668c5;
  }
  if ((*(byte *)(lVar15 + 0x92) & 0x40) != 0) {
    return;
  }
LAB_1423668c5:
  FUN_142367710(param_1);
  local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
  if (param_1[0x5a] != 0) {
    lVar14 = FUN_1428dfc70();
    for (lVar15 = param_1[0x5a];
        local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88), lVar15 != 0;
        lVar15 = *(longlong *)(lVar15 + 0x30)) {
      if (lVar15 == lVar14) {
        local_88 = (longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88);
        if (param_1[0x5a] == 0) break;
        lVar15 = param_1[0x24];
        if (lVar15 == 0) {
          lVar15 = FUN_1423407b0(param_1);
          if (lVar15 == 0) break;
        }
        bVar6 = true;
        uVar17 = uVar4;
        if (uVar4 != 0) goto LAB_142366960;
        goto LAB_1423669c5;
      }
    }
  }
LAB_142366f0c:
  puVar5 = (undefined8 *)param_1[0x5e];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
    param_1[0x5e] = 0;
  }
  return;
}



// FUNCTION 142366f40 FUN_142366f40 body=60 status=ok
// SIG undefined FUN_142366f40(void)

undefined8 FUN_142366f40(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMaterialInstanceDynamic::Create(*(undefined8 *)(param_1 + 0x6f0),param_1);
  *(undefined8 *)(param_1 + 0x6f0) = uVar1;
  FUN_1423424e0(param_1);
  return uVar1;
}



// FUNCTION 142366f80 FUN_142366f80 body=27 status=ok
// SIG undefined FUN_142366f80(void)

void FUN_142366f80(undefined8 param_1)

{
  FUN_142338230();
  FUN_142361180(param_1);
  return;
}



// FUNCTION 142366fa0 FUN_142366fa0 body=119 status=ok
// SIG undefined FUN_142366fa0(void)

void FUN_142366fa0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_142338230();
  if ((*(byte *)(param_1 + 0x2ec) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      FUN_1423407b0(param_1);
    }
    cVar1 = FUN_142399f40(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_14239a1f0(param_1);
      if ((cVar1 != '\0') && (0.0 < *(float *)(param_1 + 0x2e4))) {
        FUN_1423720a0(param_1);
        plVar2 = (longlong *)FUN_14233fea0(param_1);
        (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
        *(uint *)(param_1 + 0x428) = *(uint *)(param_1 + 0x428) | 1;
      }
    }
  }
  return;
}



// FUNCTION 142367020 FUN_142367020 body=72 status=ok
// SIG undefined FUN_142367020(void)

void FUN_142367020(longlong param_1)

{
  longlong lVar1;
  
  FUN_142338230();
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x710) = 0x3f8000003f800000;
    *(undefined4 *)(lVar1 + 0x718) = 0x3f800000;
  }
  return;
}



// FUNCTION 142367070 CreateAnimInstanceProxy body=46 status=ok
// SIG undefined CreateAnimInstanceProxy(void)

void UAnimInstance::CreateAnimInstanceProxy(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x3c0);
  if (lVar1 != 0) {
    FUN_14246d5b0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1423670a0 FUN_1423670a0 body=79 status=ok
// SIG undefined FUN_1423670a0(void)

undefined8 FUN_1423670a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*DAT_146af0508 != 0) || (*(longlong *)(param_1 + 0x118) == 0)) ||
     (*(char *)(param_1 + 0x24e) != '\0')) {
    lVar1 = operator_new(0x200);
    if (lVar1 != 0) {
      uVar2 = FUN_14235d070(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1423670f0 FUN_1423670f0 body=155 status=ok
// SIG undefined FUN_1423670f0(void)

undefined8 * FUN_1423670f0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x3c0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar2,param_1,0);
    *puVar2 = &PTR__scalar_deleting_destructor__1450530d8;
    *(undefined4 *)(puVar2 + 0x74) = *(undefined4 *)(param_1 + 0x6f0);
    *(undefined4 *)((longlong)puVar2 + 0x3a4) = *(undefined4 *)(param_1 + 0x6f4);
    *(undefined4 *)(puVar2 + 0x75) = *(undefined4 *)(param_1 + 0x6f8);
    *(undefined4 *)((longlong)puVar2 + 0x3ac) = *(undefined4 *)(param_1 + 0x6fc);
    uVar1 = *(undefined4 *)(param_1 + 0x700);
    *(uint *)((longlong)puVar2 + 0x1c) = *(uint *)((longlong)puVar2 + 0x1c) & 0xfffffffd;
    *(undefined4 *)(puVar2 + 0x76) = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142367190 FUN_142367190 body=115 status=ok
// SIG undefined FUN_142367190(void)

undefined8 FUN_142367190(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((*(longlong *)(param_1 + 0x750) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x750) + 0x460) != 0)) &&
     (*(longlong *)(param_1 + 0x6f0) != 0)) {
    cVar1 = FUN_142371b60();
    if (cVar1 != '\0') {
      FUN_142477830(*(undefined8 *)(param_1 + 0x6f0),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x750) + 0x470));
      lVar2 = operator_new(0x630);
      if (lVar2 != 0) {
        uVar3 = FUN_14246e860(lVar2,param_1);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 142367210 FUN_142367210 body=327 status=ok
// SIG undefined FUN_142367210(void)

undefined8 * FUN_142367210(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x3d0);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar3,param_1,0);
    *puVar3 = &PTR_FUN_145057768;
    puVar3[0x74] = 0;
    iVar1 = *(int *)(param_1 + 0x6f8);
    pvVar2 = *(void **)(param_1 + 0x6f0);
    *(int *)(puVar3 + 0x75) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x3ac) = 0;
    }
    else {
      TArray<FBatchedLine,FDefaultAllocator>::ResizeForCopy(puVar3 + 0x74,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar3[0x74],pvVar2,(longlong)iVar1 * 0x34);
    }
    puVar3[0x76] = 0;
    iVar1 = *(int *)(param_1 + 0x708);
    pvVar2 = *(void **)(param_1 + 0x700);
    *(int *)(puVar3 + 0x77) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x3bc) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(puVar3 + 0x76,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar3[0x76],pvVar2,(longlong)iVar1 * 0x28);
    }
    puVar3[0x78] = 0;
    TArray<FBatchedMesh,FDefaultAllocator>::CopyToEmpty<FBatchedMesh>
              (puVar3 + 0x78,*(undefined8 *)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x720),0,0);
    *(uint *)((longlong)puVar3 + 0x1c) = *(uint *)((longlong)puVar3 + 0x1c) & 0xfffffffd;
    *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) | 0x40000000;
    *(undefined4 *)((longlong)puVar3 + 0x74) = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142367360 CreateAnimInstanceProxy body=46 status=ok
// SIG undefined CreateAnimInstanceProxy(void)

void UControlRigSequencerAnimInstance::CreateAnimInstanceProxy(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xd40);
  if (lVar1 != 0) {
    FUN_14235da40(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142367390 FUN_142367390 body=79 status=ok
// SIG undefined FUN_142367390(void)

undefined8 FUN_142367390(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*DAT_146af0508 != 0) || (*(longlong *)(param_1 + 0x118) == 0)) ||
     (*(char *)(param_1 + 0x24e) != '\0')) {
    lVar1 = operator_new(0x1f0);
    if (lVar1 != 0) {
      uVar2 = FUN_14235dea0(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1423673e0 FUN_1423673e0 body=332 status=ok
// SIG undefined FUN_1423673e0(void)

undefined8 * FUN_1423673e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_14505ada8;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142367530 FUN_142367530 body=332 status=ok
// SIG undefined FUN_142367530(void)

undefined8 * FUN_142367530(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_14505adb8;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142367680 FUN_142367680 body=71 status=ok
// SIG undefined FUN_142367680(void)

void FUN_142367680(longlong *param_1)

{
  char cVar1;
  longlong *local_res8 [4];
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x550))(param_1);
    if ((*(byte *)((longlong)param_1 + 0xba) & 4) == 0) {
      local_res8[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x21,local_res8);
    }
  }
  return;
}



// FUNCTION 1423676d0 FUN_1423676d0 body=54 status=ok
// SIG undefined FUN_1423676d0(void)

void FUN_1423676d0(longlong *param_1)

{
  char cVar1;
  
  FUN_142338f40();
  cVar1 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001423676f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x430))(param_1);
    return;
  }
  return;
}



// FUNCTION 142367710 FUN_142367710 body=751 status=ok
// SIG undefined FUN_142367710(void)

void FUN_142367710(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  longlong *plStack_40;
  
  if (((*(longlong *)(param_1 + 0x2d8) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x2d8) + 0x128) == '\x03')) &&
     (lVar4 = AActor::GetLevel(*(undefined8 *)(param_1 + 0x118)),
     (*(byte *)(lVar4 + 0x206) & 1) == 0)) {
    lVar4 = 0;
    if (DAT_1468c2185 == '\0') {
      plVar8 = *(longlong **)(param_1 + 0x2d8);
      iVar1 = *(int *)((longlong)plVar8 + 0xc);
      lVar5 = lVar4;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar9 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar9;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      uVar3 = *(uint *)(lVar5 + 8) & 0x30000000;
      if ((uVar3 == 0) && ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0)) {
        iVar1 = *(int *)(param_1 + 0xc);
        lVar5 = lVar4;
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar10 = iVar1 >> 0x1f & 0xffff;
          uVar9 = iVar1 + uVar10;
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                  (longlong)(int)((uVar9 & 0xffff) - uVar10) * 0x18;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
          lVar5 = operator_new(0x80);
          if (lVar5 != 0) {
            lVar4 = FUN_14235ce00(lVar5,param_1);
          }
          plVar8 = *(longlong **)(param_1 + 0x2d8);
          *(longlong *)(param_1 + 0x2f0) = lVar4;
        }
      }
      lVar4 = (**(code **)(*plVar8 + 0x148))();
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x10);
        if (DAT_1468b6146 == '\0') {
          plStack_40 = &local_res8;
          local_48 = (undefined2 *)&LAB_142362830;
          local_res8 = param_1;
          FUN_14179d140(*(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x20),lVar5,&local_48);
        }
        cVar2 = IsGarbageCollecting();
        if (cVar2 == '\0') {
          local_res8 = *(longlong *)(lVar5 + 0x18);
          FName::ToString(&local_res8,&local_58);
          puVar12 = &DAT_143f3eda8;
          puVar11 = &DAT_143f3eda8;
          if (local_50 != 0) {
            puVar11 = local_58;
          }
          FString::PrintfImpl(&local_48,L"DESTROYED_%s_CHILDACTOR",puVar11);
          if (local_58 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          puVar11 = &DAT_143f3eda8;
          if ((int)plStack_40 != 0) {
            puVar11 = local_48;
          }
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x20);
          puVar6 = (undefined8 *)FName::FName(&local_res8,puVar11,1);
          uVar7 = FUN_141791c20(local_res10,uVar7,lVar5,*puVar6);
          puVar6 = (undefined8 *)FName::ToString(uVar7,&local_58);
          if (*(int *)(puVar6 + 1) != 0) {
            puVar12 = (undefined2 *)*puVar6;
          }
          (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x138))
                    (*(longlong **)(param_1 + 0x2d8),puVar12,0,5);
          if (local_58 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_48 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          local_res8 = 0;
          *(undefined8 *)(param_1 + 0x2e8) = 0;
          if (*(longlong *)(param_1 + 0x2f0) != 0) {
            local_res8 = 0;
            *(undefined8 *)(*(longlong *)(param_1 + 0x2f0) + 0x60) = 0;
          }
        }
        if (uVar3 == 0) {
          local_res8 = CONCAT44(local_res8._4_4_,0x10101);
          FUN_1422279d0(*(undefined8 *)(param_1 + 0x2d8),&local_res8);
          FUN_142543860(lVar4,*(undefined8 *)(param_1 + 0x2d8),0,1);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  return;
}



// FUNCTION 142367a00 DestroyObject body=32 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FInputActionBinding>::DestroyObject
               (longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
  return;
}



// FUNCTION 142367a20 FUN_142367a20 body=59 status=ok
// SIG undefined FUN_142367a20(void)

void FUN_142367a20(longlong param_1)

{
  longlong lVar1;
  
  UActorComponent::DestroyRenderState_Concurrent();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142367a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x178))(*(longlong **)(lVar1 + 0x1b8),param_1);
  return;
}



// FUNCTION 142367a60 FUN_142367a60 body=48 status=ok
// SIG undefined FUN_142367a60(void)

void FUN_142367a60(longlong param_1)

{
  longlong *plVar1;
  
  UActorComponent::DestroyRenderState_Concurrent();
  plVar1 = (longlong *)FUN_14233fea0(param_1);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
  *(uint *)(param_1 + 0x428) = *(uint *)(param_1 + 0x428) & 0xfffffffe;
  return;
}



// FUNCTION 142367a90 FUN_142367a90 body=179 status=ok
// SIG undefined FUN_142367a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142367a90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar3 = _DAT_1464aa818;
  uVar2 = _DAT_1464aa810;
  lVar1 = *param_1;
  *(uint *)(lVar1 + 0x180) = *(uint *)(lVar1 + 0x180) & 0xfffffffe;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined8 *)(lVar1 + 0xb8) = uVar3;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 0xcc) = 0;
  *(undefined4 *)(lVar1 + 200) = 0;
  *(undefined4 *)(lVar1 + 0xd4) = 0;
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142367b50 FUN_142367b50 body=189 status=ok
// SIG undefined FUN_142367b50(void)

void FUN_142367b50(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x6f8);
  *(int *)(param_1 + 0x6f8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x6fc) < iVar1 + 1) {
    TArray<FBatchedLine,FDefaultAllocator>::ResizeGrow(param_1 + 0x6f0,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x34 + *(longlong *)(param_1 + 0x6f0));
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)puVar4 + 0xc) = *param_3;
    *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)(param_3 + 1);
    uVar2 = *param_4;
    uVar3 = param_4[1];
    *(undefined4 *)(puVar4 + 5) = param_6;
    puVar4[3] = uVar2;
    puVar4[4] = uVar3;
    *(undefined1 *)(puVar4 + 6) = param_5;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = param_7;
  }
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142367c10 FUN_142367c10 body=187 status=ok
// SIG undefined FUN_142367c10(void)

void FUN_142367c10(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x708);
  *(int *)(param_1 + 0x708) = iVar2 + 1;
  if (*(int *)(param_1 + 0x70c) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x700,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x700) + (longlong)iVar2 * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar3;
    *(undefined4 *)(puVar1 + 2) = uVar4;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
    *(undefined4 *)(puVar1 + 3) = uVar6;
    *(undefined1 *)((longlong)puVar1 + 0x24) = param_5;
    *(undefined4 *)(puVar1 + 4) = param_6;
  }
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 142367cd0 Empty body=133 status=ok
// SIG undefined Empty(void)

void TIndirectArray<FModelElement,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    *puVar1 = &PTR__scalar_deleting_destructor__145050848;
    if (puVar1[3] != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142367d60 FUN_142367d60 body=64 status=ok
// SIG undefined FUN_142367d60(void)

void FUN_142367d60(longlong param_1)

{
  if (*(int *)(param_1 + 0x6f8) != 0) {
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x6fc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x6f0,0);
    }
    FUN_1423424e0(param_1);
    return;
  }
  return;
}



// FUNCTION 142367da0 FUN_142367da0 body=238 status=ok
// SIG undefined FUN_142367da0(void)

void FUN_142367da0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14235fa20(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14505ada8;
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



// FUNCTION 142367e90 ExecuteTask body=238 status=ok
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
  FUN_14235fc30(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14505adb8;
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



// FUNCTION 142367f80 FUN_142367f80 body=237 status=ok
// SIG undefined FUN_142367f80(void)

void FUN_142367f80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142367a90(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_145059d90;
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



// FUNCTION 142368070 FUN_142368070 body=272 status=ok
// SIG undefined FUN_142368070(void)

void FUN_142368070(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = param_1[2];
  *(undefined8 *)(lVar3 + 0x1cc) = param_1[3];
  *(undefined4 *)(lVar3 + 0x1d4) = *(undefined4 *)(param_1 + 4);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145052590;
  *(undefined1 *)(param_1 + 5) = 0;
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



// FUNCTION 142368180 FUN_142368180 body=258 status=ok
// SIG undefined FUN_142368180(void)

void FUN_142368180(undefined8 *param_1)

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
  *(undefined8 *)(param_1[2] + 0x68) = param_1[3];
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145056dd8;
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



// FUNCTION 142368290 FUN_142368290 body=276 status=ok
// SIG undefined FUN_142368290(void)

void FUN_142368290(undefined8 *param_1)

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
  FUN_142377bd0(param_1[2],param_1 + 4,param_1 + 6,(longlong)param_1 + 0x3c,param_1 + 9);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145059d80;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
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



// FUNCTION 1423683b0 FUN_1423683b0 body=291 status=ok
// SIG undefined FUN_1423683b0(void)

void FUN_1423683b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  fVar7 = *(float *)(param_1 + 3);
  lVar3 = param_1[2];
  *(float *)(lVar3 + 0x1c0) = fVar7;
  if (fVar7 <= 1e-05) {
    fVar7 = 1e-05;
  }
  *(float *)(lVar3 + 0x1c4) = 1.0 / fVar7;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145059d70;
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



// FUNCTION 1423684e0 FUN_1423684e0 body=1639 status=ok
// SIG undefined FUN_1423684e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423684e0(longlong param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xa30);
    iVar20 = 1;
    uVar12 = puVar2[1];
    puVar3 = *(undefined8 **)(param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x76c) * 0x10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar12;
    uVar12 = puVar2[3];
    puVar3[2] = puVar2[2];
    puVar3[3] = uVar12;
    uVar12 = puVar2[5];
    puVar3[4] = puVar2[4];
    puVar3[5] = uVar12;
    fVar16 = fRam0000000146af059c;
    fVar15 = fRam0000000146af0598;
    fVar14 = fRam0000000146af0594;
    fVar13 = _DAT_146af0590;
    if (1 < *(int *)(param_1 + 0xa38)) {
      pfVar19 = (float *)(puVar2 + 8);
      lVar21 = (longlong)puVar3 - (longlong)puVar2;
      lVar22 = 0x10;
      do {
        fVar46 = fRam0000000146af05d8;
        fVar43 = fRam0000000146af05d4;
        fVar32 = _DAT_146af05d0;
        fVar59 = fRam0000000146af03e8;
        fVar58 = fRam0000000146af03e4;
        fVar57 = _DAT_146af03e0;
        iVar17 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158) + 8 + lVar22);
        lVar18 = (longlong)iVar17;
        auVar23 = *(undefined1 (*) [16])(pfVar19 + 4);
        fVar33 = auVar23._0_4_;
        fVar37 = auVar23._4_4_;
        fVar4 = auVar23._8_4_;
        fVar6 = auVar23._12_4_;
        auVar24 = *(undefined1 (*) [16])(puVar3 + lVar18 * 6 + 4);
        fVar35 = auVar24._0_4_;
        fVar38 = auVar24._4_4_;
        fVar5 = auVar24._8_4_;
        fVar7 = auVar24._12_4_;
        auVar23 = minps(auVar23,auVar24);
        auVar24._4_4_ = -(uint)(auVar23._4_4_ < fRam0000000146af05d4);
        auVar24._0_4_ = -(uint)(auVar23._0_4_ < _DAT_146af05d0);
        auVar24._8_4_ = -(uint)(auVar23._8_4_ < fRam0000000146af05d8);
        auVar24._12_4_ = -(uint)(auVar23._12_4_ < fRam0000000146af05dc);
        iVar17 = movmskps(iVar17,auVar24);
        if (iVar17 == 0) {
          pfVar1 = (float *)(puVar3 + lVar18 * 6);
          fVar57 = *pfVar1;
          fVar58 = pfVar1[1];
          fVar59 = pfVar1[2];
          fVar32 = pfVar1[3];
          fVar43 = pfVar19[-4];
          fVar46 = pfVar19[-3];
          fVar49 = pfVar19[-2];
          fVar50 = pfVar19[-1];
          pfVar1 = (float *)(puVar3 + lVar18 * 6 + 2);
          fVar9 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          fVar40 = fVar35 * *pfVar19;
          fVar41 = fVar38 * pfVar19[1];
          fVar42 = fVar5 * pfVar19[2];
          fVar44 = fVar7 * pfVar19[3];
          fVar26 = fVar49 * fVar58 * _DAT_146af0580;
          fVar34 = fVar50 * fVar58 * fRam0000000146af0584;
          fVar28 = fVar43 * fVar58 * fRam0000000146af0588;
          fVar29 = fVar46 * fVar58 * fRam0000000146af058c;
          fVar30 = fVar46 * fVar59 * _DAT_146af0570;
          fVar39 = fVar43 * fVar59 * fRam0000000146af0574;
          fVar31 = fVar50 * fVar59 * fRam0000000146af0578;
          fVar36 = fVar49 * fVar59 * fRam0000000146af057c;
          pfVar1 = (float *)(lVar21 + 0x10 + (longlong)pfVar19);
          *pfVar1 = fVar33 * fVar35;
          pfVar1[1] = fVar37 * fVar38;
          pfVar1[2] = fVar4 * fVar5;
          pfVar1[3] = fVar6 * fVar7;
          pfVar1 = (float *)(lVar21 + -0x10 + (longlong)pfVar19);
          *pfVar1 = fVar50 * fVar57 * fVar13 + fVar43 * fVar32 + fVar26 + fVar30;
          pfVar1[1] = fVar49 * fVar57 * fVar14 + fVar46 * fVar32 + fVar34 + fVar39;
          pfVar1[2] = fVar46 * fVar57 * fVar15 + fVar49 * fVar32 + fVar28 + fVar31;
          pfVar1[3] = fVar43 * fVar57 * fVar16 + fVar50 * fVar32 + fVar29 + fVar36;
          fVar33 = fVar42 * fVar58 - fVar41 * fVar59;
          fVar35 = fVar40 * fVar59 - fVar42 * fVar57;
          fVar37 = fVar41 * fVar57 - fVar40 * fVar58;
          fVar38 = fVar44 * fVar32 - fVar44 * fVar32;
          fVar33 = fVar33 + fVar33;
          fVar35 = fVar35 + fVar35;
          fVar37 = fVar37 + fVar37;
          fVar38 = fVar38 + fVar38;
          pfVar1 = (float *)(lVar21 + (longlong)pfVar19);
          *pfVar1 = (fVar37 * fVar58 - fVar35 * fVar59) + fVar33 * fVar32 + fVar40 + fVar9;
          pfVar1[1] = (fVar33 * fVar59 - fVar37 * fVar57) + fVar35 * fVar32 + fVar41 + fVar25;
          pfVar1[2] = (fVar35 * fVar57 - fVar33 * fVar58) + fVar37 * fVar32 + fVar42 + fVar10;
          pfVar1[3] = (fVar38 * fVar32 - fVar38 * fVar32) + fVar38 * fVar32 + fVar44 + fVar11;
        }
        else {
          pfVar1 = (float *)(puVar3 + lVar18 * 6);
          fVar49 = *pfVar1;
          fVar50 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar25 = pfVar1[3];
          pfVar1 = (float *)(puVar3 + lVar18 * 6 + 2);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar26 = pfVar1[2];
          fVar28 = fVar50 + fVar50;
          fVar29 = fVar9 + fVar9;
          fVar39 = fVar49 * (fVar49 + fVar49);
          fVar34 = fVar25 * (fVar49 + fVar49);
          fVar54 = (fVar25 * fVar29 + fVar28 * fVar49) * fVar35;
          fVar55 = (fVar34 + fVar29 * fVar50) * fVar38;
          fVar56 = (fVar25 * fVar28 + fVar29 * fVar49) * fVar5;
          fVar41 = fVar38 * (fVar28 * fVar49 - fVar25 * fVar29);
          fVar44 = fVar5 * (fVar29 * fVar50 - fVar34);
          fVar47 = fVar35 * (fVar29 * fVar49 - fVar25 * fVar28);
          fVar34 = (float)((uint)((_DAT_146af03e0 - (fVar9 * fVar29 + fVar50 * fVar28)) * fVar35) &
                          _DAT_146af03f0);
          fVar29 = (float)((uint)((fRam0000000146af03e4 - (fVar9 * fVar29 + fVar39)) * fVar38) &
                          uRam0000000146af03f4);
          fVar30 = (float)((uint)((fRam0000000146af03e8 - (fVar50 * fVar28 + fVar39)) * fVar5) &
                          uRam0000000146af03f8);
          fVar31 = (float)((uint)((fRam0000000146af03ec - (fVar39 + fVar39)) * fVar7) &
                          uRam0000000146af03fc);
          fVar49 = pfVar19[-4];
          fVar50 = pfVar19[-3];
          fVar9 = pfVar19[-2];
          fVar25 = pfVar19[-1];
          fVar39 = fVar50 + fVar50;
          fVar36 = fVar9 + fVar9;
          fVar40 = fVar49 * (fVar49 + fVar49);
          fVar28 = (fVar49 + fVar49) * fVar25;
          fVar51 = (fVar36 * fVar25 + fVar39 * fVar49) * fVar33;
          fVar52 = (fVar28 + fVar36 * fVar50) * fVar37;
          fVar53 = (fVar39 * fVar25 + fVar36 * fVar49) * fVar4;
          fVar42 = fVar37 * (fVar39 * fVar49 - fVar36 * fVar25);
          fVar45 = fVar4 * (fVar36 * fVar50 - fVar28);
          fVar48 = fVar33 * (fVar36 * fVar49 - fVar39 * fVar25);
          fVar25 = (float)((uint)((_DAT_146af03e0 - (fVar9 * fVar36 + fVar50 * fVar39)) * fVar33) &
                          _DAT_146af03f0);
          fVar28 = (float)((uint)((fRam0000000146af03e4 - (fVar9 * fVar36 + fVar40)) * fVar37) &
                          uRam0000000146af03f4);
          fVar39 = (float)((uint)((fRam0000000146af03e8 - (fVar50 * fVar39 + fVar40)) * fVar4) &
                          uRam0000000146af03f8);
          fVar36 = (float)((uint)((fRam0000000146af03ec - (fVar40 + fVar40)) * fVar6) &
                          uRam0000000146af03fc);
          fVar49 = *pfVar19;
          fVar50 = pfVar19[1];
          fVar9 = pfVar19[2];
          local_108 = fVar51 * fVar41 + fVar25 * fVar34 + fVar48 * fVar56 + fVar36 * fVar10;
          fStack_104 = fVar51 * fVar29 + fVar25 * fVar54 + fVar48 * fVar44 + fVar36 * fVar11;
          fStack_100 = fVar51 * fVar55 + fVar25 * fVar47 + fVar48 * fVar30 + fVar36 * fVar26;
          fStack_fc = fVar51 * fVar31 + fVar25 * fVar31 + fVar48 * fVar31 +
                      fVar36 * fRam0000000146af03ec;
          local_f8 = fVar28 * fVar41 + fVar42 * fVar34 + fVar52 * fVar56 + fVar36 * fVar10;
          fStack_f4 = fVar28 * fVar29 + fVar42 * fVar54 + fVar52 * fVar44 + fVar36 * fVar11;
          fStack_f0 = fVar28 * fVar55 + fVar42 * fVar47 + fVar52 * fVar30 + fVar36 * fVar26;
          fStack_ec = fVar28 * fVar31 + fVar42 * fVar31 + fVar52 * fVar31 +
                      fVar36 * fRam0000000146af03ec;
          local_e8 = fVar45 * fVar41 + fVar53 * fVar34 + fVar39 * fVar56 + fVar36 * fVar10;
          fStack_e4 = fVar45 * fVar29 + fVar53 * fVar54 + fVar39 * fVar44 + fVar36 * fVar11;
          fStack_e0 = fVar45 * fVar55 + fVar53 * fVar47 + fVar39 * fVar30 + fVar36 * fVar26;
          fStack_dc = fVar45 * fVar31 + fVar53 * fVar31 + fVar39 * fVar31 +
                      fVar36 * fRam0000000146af03ec;
          local_d8 = fVar50 * fVar41 + fVar49 * fVar34 + fVar9 * fVar56 +
                     fRam0000000146af03ec * fVar10;
          fStack_d4 = fVar50 * fVar29 + fVar49 * fVar54 + fVar9 * fVar44 +
                      fRam0000000146af03ec * fVar11;
          fStack_d0 = fVar50 * fVar55 + fVar49 * fVar47 + fVar9 * fVar30 +
                      fRam0000000146af03ec * fVar26;
          fStack_cc = fVar50 * fVar31 + fVar49 * fVar31 + fVar9 * fVar31 +
                      fRam0000000146af03ec * fRam0000000146af03ec;
          FMatrix::RemoveScaling(&local_108);
          fVar57 = (float)(-(uint)(fVar32 <= fVar35 * fVar33) & (_DAT_146af05c0 ^ (uint)fVar57) ^
                          _DAT_146af05c0);
          fVar58 = (float)(-(uint)(fVar43 <= fVar38 * fVar37) &
                           (uRam0000000146af05c4 ^ (uint)fVar58) ^ uRam0000000146af05c4);
          fVar59 = (float)(-(uint)(fVar46 <= fVar5 * fVar4) & (uRam0000000146af05c8 ^ (uint)fVar59)
                          ^ uRam0000000146af05c8);
          local_108 = local_108 * fVar57;
          fStack_100 = fStack_100 * fVar57;
          fStack_104 = fStack_104 * fVar57;
          fStack_f0 = fStack_f0 * fVar58;
          fStack_f4 = fStack_f4 * fVar58;
          local_f8 = local_f8 * fVar58;
          fStack_e0 = fStack_e0 * fVar59;
          local_e8 = local_e8 * fVar59;
          fStack_e4 = fStack_e4 * fVar59;
          FQuat::FQuat(&local_118,&local_108);
          auVar27._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
          auVar27._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
          auVar27._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
          auVar27._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
          fVar43 = auVar27._4_4_ + auVar27._0_4_;
          fVar46 = auVar27._8_4_ + auVar27._4_4_;
          fVar49 = auVar27._12_4_ + auVar27._8_4_;
          fVar50 = auVar27._0_4_ + auVar27._12_4_;
          auVar8._4_4_ = fVar46;
          auVar8._0_4_ = fVar43;
          auVar8._8_4_ = fVar49;
          auVar8._12_4_ = fVar50;
          auVar23 = rsqrtps(auVar27,auVar8);
          fVar57 = auVar23._0_4_;
          fVar58 = auVar23._4_4_;
          fVar59 = auVar23._8_4_;
          fVar32 = auVar23._12_4_;
          fVar57 = (_DAT_146af05b0 - fVar57 * fVar57 * fVar43 * _DAT_146af05b0) * fVar57 + fVar57;
          fVar58 = (fRam0000000146af05b4 - fVar58 * fVar58 * fVar46 * fRam0000000146af05b4) * fVar58
                   + fVar58;
          fVar59 = (fRam0000000146af05b8 - fVar59 * fVar59 * fVar49 * fRam0000000146af05b8) * fVar59
                   + fVar59;
          fVar32 = (fRam0000000146af05bc - fVar32 * fVar32 * fVar50 * fRam0000000146af05bc) * fVar32
                   + fVar32;
          auVar23._4_4_ = fStack_d4;
          auVar23._0_4_ = local_d8;
          auVar23._8_4_ = fStack_d0;
          local_118 = (float)(((uint)(((_DAT_146af05b0 - fVar57 * fVar57 * fVar43 * _DAT_146af05b0)
                                       * fVar57 + fVar57) * local_118) ^ _DAT_146af05a0) &
                              -(uint)(1e-08 <= fVar43) ^ _DAT_146af05a0);
          fStack_114 = (float)(((uint)(((fRam0000000146af05b4 -
                                        fVar58 * fVar58 * fVar46 * fRam0000000146af05b4) * fVar58 +
                                       fVar58) * fStack_114) ^ uRam0000000146af05a4) &
                               -(uint)(1e-08 <= fVar46) ^ uRam0000000146af05a4);
          fStack_110 = (float)(((uint)(((fRam0000000146af05b8 -
                                        fVar59 * fVar59 * fVar49 * fRam0000000146af05b8) * fVar59 +
                                       fVar59) * fStack_110) ^ uRam0000000146af05a8) &
                               -(uint)(1e-08 <= fVar49) ^ uRam0000000146af05a8);
          fStack_10c = (float)(((uint)(((fRam0000000146af05bc -
                                        fVar32 * fVar32 * fVar50 * fRam0000000146af05bc) * fVar32 +
                                       fVar32) * fStack_10c) ^ uRam0000000146af05ac) &
                               -(uint)(1e-08 <= fVar50) ^ uRam0000000146af05ac);
          auVar23._12_4_ = 0;
          *(undefined1 (*) [16])(lVar21 + (longlong)pfVar19) = auVar23;
          pfVar1 = (float *)(lVar21 + 0x10 + (longlong)pfVar19);
          *pfVar1 = fVar35 * fVar33;
          pfVar1[1] = fVar38 * fVar37;
          pfVar1[2] = fVar5 * fVar4;
          pfVar1[3] = fVar7 * fVar6;
          pfVar1 = (float *)(lVar21 + -0x10 + (longlong)pfVar19);
          *pfVar1 = local_118;
          pfVar1[1] = fStack_114;
          pfVar1[2] = fStack_110;
          pfVar1[3] = fStack_10c;
        }
        iVar20 = iVar20 + 1;
        lVar22 = lVar22 + 0x10;
        pfVar19 = pfVar19 + 0xc;
      } while (iVar20 < *(int *)(param_1 + 0xa38));
    }
    *(byte *)(param_1 + 0x881) = *(byte *)(param_1 + 0x881) | 2;
  }
  return;
}



// FUNCTION 142368b50 FUN_142368b50 body=379 status=ok
// SIG undefined FUN_142368b50(void)

void FUN_142368b50(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  lVar1 = param_1[0x2f];
  if ((lVar1 != 0) && ((char)param_1[0x4b] != '\x01')) {
    uVar3 = *(undefined4 *)(lVar1 + 0x224);
    local_d0 = *(undefined4 *)(lVar1 + 0x228);
    *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)(lVar1 + 0x220);
    *(undefined4 *)(param_1 + 0x4a) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x254) = local_d0;
    *(float *)((longlong)param_1 + 0x23c) = 1.0 / *(float *)(param_1 + 0x38);
    if ((int)param_1[0x46] != 0) {
      (**(code **)(*param_1 + 0x538))(1.0 / *(float *)(param_1 + 0x38),1);
      uVar3 = (**(code **)(*param_1 + 0x530))(param_1,local_c8,0);
      lVar1 = param_1[0x2f];
      local_b8 = *(float *)(lVar1 + 0x210);
      fStack_b4 = *(float *)(lVar1 + 0x214);
      fStack_b0 = *(float *)(lVar1 + 0x218);
      fStack_ac = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_b4);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_b8);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_b0);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_ac);
      iVar4 = movmskps(uVar3,auVar2);
      lVar6 = lVar1;
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_b8;
        *(float *)(lVar1 + 0x254) = fStack_b4;
        *(float *)(lVar1 + 600) = fStack_b0;
        *(float *)(lVar1 + 0x25c) = fStack_ac;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_b8);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
        lVar6 = param_1[0x2f];
      }
      local_d8 = *(undefined8 *)(lVar1 + 0x260);
      local_d0 = *(undefined4 *)(lVar1 + 0x268);
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FUN_142391970(lVar6,local_c8,&local_d8,0,local_98,0,0);
      *(undefined1 *)(param_1 + 0x4b) = 1;
    }
  }
  return;
}



// FUNCTION 142368cd0 FUN_142368cd0 body=226 status=ok
// SIG undefined FUN_142368cd0(void)

void FUN_142368cd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (((0 < *(int *)(param_1 + 0x6f8)) || (0 < *(int *)(param_1 + 0x708))) ||
     (0 < *(int *)(param_1 + 0x720))) {
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    if (*(int *)(param_1 + 0x6fc) != 0) {
      TArray<FBatchedLine,FDefaultAllocator>::ResizeTo(param_1 + 0x6f0,0);
    }
    *(undefined4 *)(param_1 + 0x708) = 0;
    if (*(int *)(param_1 + 0x70c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x700,0);
    }
    plVar1 = *(longlong **)(param_1 + 0x718);
    for (iVar2 = *(int *)(param_1 + 0x720); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
    }
    *(undefined4 *)(param_1 + 0x720) = 0;
    if (*(int *)(param_1 + 0x724) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x718,0);
    }
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142368dc0 FUN_142368dc0 body=687 status=ok
// SIG undefined FUN_142368dc0(void)

undefined8 * FUN_142368dc0(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 local_res18 [2];
  
  puVar10 = (undefined8 *)0x0;
  for (plVar3 = DAT_146af04e0; plVar3 != DAT_146af04e0 + DAT_146af04e8; plVar3 = plVar3 + 1) {
    if (((undefined8 *)*plVar3)[3] == param_1) {
      return (undefined8 *)*plVar3;
    }
  }
  if (param_2 == '\0') {
    return (undefined8 *)0x0;
  }
  puVar7 = DAT_146af04f0;
  if ((DAT_146af04f0 == (undefined8 *)0x0) &&
     (plVar3 = (longlong *)FMemory::Realloc(0,0x20), puVar7 = puVar10, plVar3 != (longlong *)0x0)) {
    *plVar3 = (longlong)&PTR_GetPoolName_1440459e8;
    plVar3[1] = (longlong)FForceFeedbackManager::OnWorldCleanup;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144045a30;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
    iVar1 = DAT_1465357b0;
    lVar4 = (longlong)DAT_1465357b0;
    puVar7 = (undefined8 *)*plVar5;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
    }
    puVar6 = (undefined8 *)(lVar4 * 0x10 + DAT_1465357a8);
    *puVar6 = plVar3;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  DAT_146af04f0 = puVar7;
  puVar7 = (undefined8 *)operator_new(0x30);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR__purecall_143f740d8;
    plVar3 = (longlong *)FUN_1404cfca0();
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
    }
    *(undefined8 **)(*plVar3 + (longlong)iVar1 * 8) = puVar7;
    puVar7[1] = &PTR__scalar_deleting_destructor__143f73ca8;
    *(undefined1 *)(puVar7 + 2) = 0;
    if (DAT_1468c217e == '\0') {
      if (DAT_1469e6880 == 0) {
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res18[0] = 0;
        uVar9 = UGCObjectReferencer::GetPrivateStaticClass();
        DAT_1469e6880 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
        iVar1 = *(int *)(DAT_1469e6880 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar11 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar11;
          puVar10 = (undefined8 *)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                    (longlong)(int)((uVar2 & 0xffff) - uVar11) * 0x18);
        }
        *(uint *)(puVar10 + 1) = *(uint *)(puVar10 + 1) | 0x40000000;
      }
      UGCObjectReferencer::AddObject(DAT_1469e6880,puVar7 + 1);
      *(undefined1 *)(puVar7 + 2) = 1;
    }
    puVar7[3] = param_1;
    *puVar7 = &PTR_FUN_145053b40;
    puVar7[1] = &PTR_LAB_145053b88;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar10 = puVar7;
  }
  iVar1 = DAT_146af04e8;
  lVar4 = (longlong)DAT_146af04e8;
  DAT_146af04e8 = DAT_146af04e8 + 1;
  if (DAT_146af04ec < DAT_146af04e8) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af04e0,iVar1);
  }
  DAT_146af04e0[lVar4] = (longlong)puVar10;
  return puVar10;
}



// FUNCTION 142369070 FUN_142369070 body=457 status=ok
// SIG undefined FUN_142369070(void)

void FUN_142369070(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  plVar5 = *(longlong **)(param_1 + 0x1e8);
  plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x1f0) * 0xe;
  for (; plVar5 != plVar4; plVar5 = plVar5 + 0xe) {
    if (*plVar5 == param_2) {
      if ((int)plVar5[3] == *(int *)((longlong)plVar5 + 0x44)) goto LAB_1423691c2;
      lVar7 = *param_3;
      plVar4 = (longlong *)plVar5[10];
      if ((longlong *)plVar5[10] == (longlong *)0x0) {
        plVar4 = plVar5 + 9;
      }
      iVar2 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                      (longlong)(int)plVar5[0xb] - 1U) * 4);
      if (iVar2 == -1) goto LAB_1423691c2;
      goto LAB_1423691a0;
    }
  }
  FUN_142365bc0(param_1,param_2);
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = param_3[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_142369070(param_1,param_2,&local_28,param_4);
  goto LAB_142369100;
  while (iVar2 = (int)plVar4[5], iVar2 != -1) {
LAB_1423691a0:
    plVar4 = (longlong *)((longlong)iVar2 * 0x30 + plVar5[2]);
    if (*plVar4 == lVar7) {
      if (iVar2 != -1) goto LAB_1423691c5;
      break;
    }
  }
LAB_1423691c2:
  plVar4 = (longlong *)0x0;
LAB_1423691c5:
  plVar3 = plVar4 + 3;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    lVar7 = *plVar3;
    lVar6 = (longlong)(int)plVar3[1] * 0x10 + lVar7;
    for (; lVar7 != lVar6; lVar7 = lVar7 + 0x10) {
      TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
      ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                (param_4,lVar7);
    }
  }
  lVar7 = plVar5[0xc];
  lVar6 = (longlong)(int)plVar5[0xd] * 0x10 + lVar7;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x10) {
    TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
    ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
              (param_4,lVar7);
  }
LAB_142369100:
  plVar5 = (longlong *)param_3[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 142369240 FUN_142369240 body=137 status=ok
// SIG undefined FUN_142369240(void)

undefined8 FUN_142369240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_1c;
  float local_14;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  local_1c = DAT_146531d10;
  local_14 = DAT_146531d18;
  if (lVar1 != 0) {
    local_1c = *(undefined8 *)(lVar1 + 0x220);
    local_14 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
  }
  FUN_1422e0550(param_2,0,&local_1c,param_4,local_1c,local_14);
  return param_2;
}



// FUNCTION 1423692d0 FUN_1423692d0 body=163 status=ok
// SIG undefined FUN_1423692d0(void)

undefined4 FUN_1423692d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  lVar6 = (longlong)*(int *)(param_1 + 0x1b0) * 0x40 + lVar5;
  uVar7 = 0;
  if (lVar5 != lVar6) {
    do {
      if (*(longlong *)(lVar5 + 8) == *param_2) {
        uVar7 = *(undefined4 *)(lVar5 + 4);
        break;
      }
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != lVar6);
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 == (longlong *)0x0) {
    return uVar7;
  }
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
  return uVar7;
}



// FUNCTION 1423693e0 GetBoneLocationByName body=86 status=ok
// SIG undefined GetBoneLocationByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * UPoseableMeshComponent::GetBoneLocationByName(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_1423694f0(param_1,local_48);
  *param_2 = local_38;
  param_2[2] = uStack_30;
  param_2[1] = uStack_34;
  return param_2;
}



// FUNCTION 142369440 GetBoneRotationByName body=79 status=ok
// SIG undefined GetBoneRotationByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 UPoseableMeshComponent::GetBoneRotationByName(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_1423694f0(param_1,&local_48);
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = uStack_40;
  uStack_4c = uStack_3c;
  FRotator::FRotator(param_2,&local_58);
  return param_2;
}



// FUNCTION 142369490 GetBoneScaleByName body=86 status=ok
// SIG undefined GetBoneScaleByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * UPoseableMeshComponent::GetBoneScaleByName(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_1423694f0(param_1,local_48);
  *param_2 = local_28;
  param_2[2] = uStack_20;
  param_2[1] = uStack_24;
  return param_2;
}



// FUNCTION 1423694f0 FUN_1423694f0 body=507 status=ok
// SIG undefined FUN_1423694f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1423694f0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  
  if ((((*(longlong *)(param_1 + 0x718) == 0) ||
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xa70), cVar2 == '\0')) ||
      (*(longlong *)(param_1 + 0xa88) == 0)) || (*(int *)(param_1 + 0xa48) < 1)) {
    uVar7 = uRam0000000146af03ec;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = uVar7;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    uVar7 = uRam0000000146af03e4 & uRam0000000146af03f4;
    uVar8 = uRam0000000146af03e8 & uRam0000000146af03f8;
    uVar9 = uRam0000000146af03ec & uRam0000000146af03fc;
    param_2[8] = _DAT_146af03e0 & _DAT_146af03f0;
    param_2[9] = uVar7;
    param_2[10] = uVar8;
    param_2[0xb] = uVar9;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x720);
    if (lVar3 == 0) {
      FUN_14235bd00(param_2,param_3,param_4,param_1 + 0xa40,param_1);
    }
    else {
      lVar4 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar4 = FUN_1423ac7e0(lVar3);
        if (lVar4 != 0) {
          uVar5 = FUN_1422743b0(lVar4);
          FUN_14235c410(param_2,param_3,param_4,uVar5,lVar3);
          return param_2;
        }
        FString::PrintfImpl(&local_38,
                            L"Cannot return valid bone transform. Master Pose Component has no anim instance"
                           );
        puVar6 = &DAT_143f3eda8;
        if (local_30 != 0) {
          puVar6 = local_38;
        }
        FUN_141790820(puVar6,3,0);
      }
      else {
        FString::PrintfImpl(&local_28,
                            L"Cannot return valid bone transform. Master Pose Component is not of type USkeletalMeshComponent"
                           );
        puVar6 = &DAT_143f3eda8;
        if (local_20 != 0) {
          puVar6 = local_28;
        }
        FUN_141790820(puVar6,3,0);
        local_38 = local_28;
      }
      uVar7 = uRam0000000146af03ec;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      uVar7 = uRam0000000146af03e4 & uRam0000000146af03f4;
      uVar8 = uRam0000000146af03e8 & uRam0000000146af03f8;
      uVar9 = uRam0000000146af03ec & uRam0000000146af03fc;
      param_2[8] = _DAT_146af03e0 & _DAT_146af03f0;
      param_2[9] = uVar7;
      param_2[10] = uVar8;
      param_2[0xb] = uVar9;
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1423696f0 GetBoundingBox body=83 status=ok
// SIG undefined GetBoundingBox(void)

undefined8 * ULightComponent::GetBoundingBox(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc9800000c9800000;
  *(undefined4 *)(param_2 + 1) = 0xc9800000;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x4980000049800000;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x49800000;
  *(undefined1 *)(param_2 + 3) = 1;
  return param_2;
}



// FUNCTION 142369750 FUN_142369750 body=136 status=ok
// SIG undefined FUN_142369750(void)

undefined8 * FUN_142369750(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x220);
  fVar3 = *(float *)(param_1 + 0x224);
  fVar4 = *(float *)(param_1 + 0x228);
  fVar1 = *(float *)(param_1 + 0x440);
  *(undefined1 *)(param_2 + 3) = 1;
  *param_2 = CONCAT44(fVar3 - fVar1,fVar2 - fVar1);
  *(float *)(param_2 + 1) = fVar4 - fVar1;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar1 + fVar3,fVar1 + fVar2);
  *(float *)((longlong)param_2 + 0x14) = fVar1 + fVar4;
  return param_2;
}



// FUNCTION 142369800 FUN_142369800 body=93 status=ok
// SIG undefined FUN_142369800(void)

undefined4 * FUN_142369800(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = param_1[0x1e];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xf4);
  lVar3 = param_1[0x1f];
  uVar4 = (**(code **)(*param_1 + 0x18))();
  *param_2 = (int)lVar2;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar3;
  param_2[3] = uVar4;
  return param_2;
}



// FUNCTION 142369860 FUN_142369860 body=65 status=ok
// SIG undefined FUN_142369860(void)

undefined4 * FUN_142369860(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x224);
  uVar2 = *(undefined4 *)(param_1 + 0x228);
  *param_2 = *(undefined4 *)(param_1 + 0x220);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = *(undefined4 *)(param_1 + 0x440);
  return param_2;
}



// FUNCTION 1423698b0 FUN_1423698b0 body=535 status=ok
// SIG undefined FUN_1423698b0(void)

float FUN_1423698b0(longlong param_1,longlong param_2,char param_3,int param_4)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar6 = 0;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar5 + 0x38) < DAT_146af0618) &&
     (_Init_thread_header(&DAT_146af0618), DAT_146af0618 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.DistanceScale");
    lVar3 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
    }
    DAT_146af0610 = lVar3;
    _Init_thread_footer(&DAT_146af0618);
  }
  if (param_4 < 1) {
    fVar7 = 0.0;
  }
  else {
    fVar8 = 1.0;
    if (1 < *(int *)(*(longlong *)(param_2 + 0x10) + 8)) {
      if ((*(int *)(lVar5 + 0x38) < DAT_146af0628) &&
         (_Init_thread_header(&DAT_146af0628), DAT_146af0628 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar4 = (longlong *)
                 (**(code **)(*DAT_1468b1f88 + 0x98))
                           (DAT_1468b1f88,L"r.Shadow.DistanceScale.SplitScreen");
        lVar5 = lVar6;
        if (plVar4 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4);
        }
        DAT_146af0620 = lVar5;
        _Init_thread_footer(&DAT_146af0628);
      }
      fVar8 = *(float *)(DAT_146af0620 + 4);
      if (0.0 <= fVar8) {
        if (2.0 <= fVar8) {
          fVar8 = 2.0;
        }
      }
      else {
        fVar8 = 0.0;
      }
    }
    lVar5 = DAT_146af0458;
    fVar7 = *(float *)(DAT_146af0610 + 4);
    fVar9 = 0.0;
    if ((0.0 <= fVar7) && (fVar9 = fVar7, 2.0 <= fVar7)) {
      fVar9 = 2.0;
    }
    if (param_3 == '\0') {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
        lVar6 = 4;
      }
      fVar7 = *(float *)(lVar6 + lVar5);
    }
    else {
      fVar7 = *(float *)(param_1 + 0x1d8);
    }
    fVar7 = fVar7 * fVar9 * fVar8;
  }
  return fVar7;
}



// FUNCTION 142369ad0 FUN_142369ad0 body=648 status=ok
// SIG undefined FUN_142369ad0(void)

longlong * FUN_142369ad0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  int local_50;
  undefined1 local_48 [16];
  
  plVar8 = param_1 + 0xe0;
  uVar5 = (ulonglong)(int)param_1[0xe1];
  plVar12 = (longlong *)0x0;
  lVar7 = *plVar8;
  iVar4 = 0;
  plVar6 = plVar12;
  local_res8 = param_2;
  local_res10 = param_2;
  if ((int)param_1[0xe1] != 0) {
    do {
      uVar9 = uVar5 >> 1;
      iVar4 = FName::Compare((uVar9 + (longlong)plVar6) * 0x40 + lVar7,&local_res8);
      if (iVar4 < 0) {
        plVar6 = (longlong *)((ulonglong)((uint)uVar5 & 1) + uVar9 + (longlong)plVar6);
      }
      uVar5 = uVar9;
    } while (uVar9 != 0);
    iVar4 = (int)param_1[0xe1];
  }
  iVar10 = (int)plVar6;
  plVar6 = plVar12;
  if ((((((ulonglong)(longlong)iVar4 <= (ulonglong)(longlong)iVar10) ||
        (iVar4 = FName::Compare(&local_res8,(longlong)iVar10 * 0x40 + *plVar8), iVar4 < 0)) ||
       (iVar10 == -1)) ||
      (plVar6 = (longlong *)((longlong)iVar10 * 0x40 + *plVar8 + 8), plVar6 == (longlong *)0x0)) &&
     (param_3 != '\0')) {
    plVar6 = (longlong *)FUN_14235b270(plVar8,&local_res10);
    local_68 = local_res10;
    local_60 = 0x202ffff;
    local_5c = 0xffffffff;
    (**(code **)(*param_1 + 0x8e8))(param_1,&local_58);
    puVar1 = local_58 + local_50;
    for (puVar11 = local_58; puVar11 != puVar1; puVar11 = puVar11 + 1) {
      for (plVar8 = (longlong *)*puVar11; iVar4 = (int)plVar12, plVar8 != (longlong *)0x0;
          plVar8 = (longlong *)plVar8[0x12]) {
        lVar7 = FUN_1429ba110();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          if (plVar8 != (longlong *)0x0) {
            cVar3 = (**(code **)(*plVar8 + 0x370))(plVar8,&local_68,plVar6 + 6,0,1);
            if (cVar3 != '\0') {
              iVar10 = (int)plVar6[1];
              *(int *)(plVar6 + 1) = iVar10 + 1;
              if (*(int *)((longlong)plVar6 + 0xc) < iVar10 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6,iVar10);
              }
              *(int *)(*plVar6 + (longlong)iVar10 * 4) = iVar4;
            }
            cVar3 = (**(code **)(*plVar8 + 0x378))(plVar8,&local_68,local_48,0,1);
            if (cVar3 != '\0') {
              iVar10 = (int)plVar6[3];
              *(int *)(plVar6 + 3) = iVar10 + 1;
              if (*(int *)((longlong)plVar6 + 0x1c) < iVar10 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6 + 2,iVar10);
              }
              *(int *)(plVar6[2] + (longlong)iVar10 * 4) = iVar4;
            }
            cVar3 = (**(code **)(*plVar8 + 0x380))(plVar8,&local_68,&local_res8);
            if (cVar3 != '\0') {
              iVar10 = (int)plVar6[5];
              *(int *)(plVar6 + 5) = iVar10 + 1;
              if (*(int *)((longlong)plVar6 + 0x2c) < iVar10 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6 + 4,iVar10);
              }
              *(int *)(plVar6[4] + (longlong)iVar10 * 4) = iVar4;
            }
          }
          break;
        }
      }
      plVar12 = (longlong *)(ulonglong)(iVar4 + 1);
    }
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return plVar6;
}



// FUNCTION 142369d60 FUN_142369d60 body=75 status=ok
// SIG undefined FUN_142369d60(void)

void FUN_142369d60(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    return;
  }
  lVar1 = operator_new(0x80);
  if (lVar1 != 0) {
    FUN_14235ce00(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142369db0 FUN_142369db0 body=139 status=ok
// SIG undefined FUN_142369db0(void)

undefined8 * FUN_142369db0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14237e540(puVar2,param_1);
    *puVar2 = &PTR_FUN_145056db8;
    uVar1 = *(undefined8 *)(param_1 + 0x218);
    puVar2[0xc] = *(undefined8 *)(param_1 + 0x210);
    puVar2[0xd] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x228);
    puVar2[0xe] = *(undefined8 *)(param_1 + 0x220);
    puVar2[0xf] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x238);
    puVar2[0x10] = *(undefined8 *)(param_1 + 0x230);
    puVar2[0x11] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x2d8);
    puVar2[0x12] = *(undefined8 *)(param_1 + 0x2d0);
    puVar2[0x13] = uVar1;
    *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x30c);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142369e40 GetControllerAnalogKeyState body=89 status=ok
// SIG undefined GetControllerAnalogKeyState(void)

undefined8 UInputComponent::GetControllerAnalogKeyState(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x10);
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
    return 0;
  }
  return 0;
}



// FUNCTION 142369ea0 GetControllerVectorKeyState body=106 status=ok
// SIG undefined GetControllerVectorKeyState(void)

undefined8
UInputComponent::GetControllerVectorKeyState(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_3 + 0x10);
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 142369f10 FUN_142369f10 body=135 status=ok
// SIG undefined FUN_142369f10(void)

float * FUN_142369f10(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  fVar5 = fVar2 * 0.0 - fVar3 * 0.0;
  fVar6 = fVar3 * 1.0 - fVar1 * 0.0;
  fVar7 = fVar1 * 0.0 - fVar2 * 1.0;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  *param_2 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 1.0;
  param_2[2] = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0;
  param_2[1] = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 0.0;
  return param_2;
}



// FUNCTION 142369fa0 FUN_142369fa0 body=238 status=ok
// SIG undefined FUN_142369fa0(void)

float * FUN_142369fa0(longlong *param_1,float *param_2,longlong param_3,undefined4 param_4,
                     undefined1 param_5,undefined4 param_6)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x40) == 0) {
    *param_2 = 0.0;
    param_2[1] = 1.0;
  }
  else {
    fVar2 = (float)FUN_1423698b0(param_1,param_3,param_5,param_6);
    cVar1 = (**(code **)(*param_1 + 0xe8))(param_1,param_3,param_4,param_5,param_6);
    if (cVar1 != '\0') {
      fVar2 = (float)FUN_14236a090(param_1);
    }
    fVar3 = *(float *)((longlong)param_1 + 0x1a4);
    if (*(float *)((longlong)param_1 + 0x1a4) <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = fVar3 - fVar3 * *(float *)(param_1 + 0x3d);
    fVar3 = fVar3 - fVar2;
    *param_2 = fVar2;
    if (fVar3 <= 0.0001) {
      fVar3 = 0.0001;
    }
    param_2[1] = 1.0 / fVar3;
  }
  return param_2;
}



// FUNCTION 14236a090 FUN_14236a090 body=181 status=ok
// SIG undefined FUN_14236a090(void)

undefined4 FUN_14236a090(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af0638) {
    _Init_thread_header(&DAT_146af0638);
    if (DAT_146af0638 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GenerateMeshDistanceFields");
      lVar2 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      DAT_146af0630 = lVar2;
      _Init_thread_footer(&DAT_146af0638);
    }
  }
  if (*(int *)(DAT_146af0630 + 4) == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x1f0);
}



// FUNCTION 14236a150 FUN_14236a150 body=2132 status=ok
// SIG undefined FUN_14236a150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14236a150(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_218 [32];
  byte local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8 [8];
  float local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  uint local_1a8;
  longlong *local_1a0;
  longlong local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [24];
  undefined8 local_f8;
  float local_f0;
  ulonglong local_ec;
  float local_e4;
  ulonglong local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  ulonglong local_bc;
  float local_b4;
  ulonglong local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  fVar1 = *(float *)(param_1 + 0x3a4);
  local_198 = param_5;
  local_1a8 = param_4;
  local_1a0 = param_2;
  if (fVar1 <= 0.0) {
    if (fVar1 == 0.0) {
      fVar23 = 500.0;
    }
    else {
      fVar23 = fVar1 * -0.5;
    }
    fVar25 = *(float *)(param_1 + 0x3a8);
    fVar24 = *(float *)(param_1 + 0x3ac);
  }
  else {
    fVar24 = *(float *)(param_1 + 0x3ac);
    fVar23 = _guard_xfg_dispatch_icall_nop(fVar1 * 0.008726646);
    fVar25 = *(float *)(param_1 + 0x3a8);
    fVar23 = fVar23 * fVar24;
  }
  local_c0 = fVar23 / fVar25;
  local_f8 = CONCAT44(fVar23,fVar24);
  local_1d0 = -local_c0;
  local_f0 = local_c0;
  local_e4 = local_c0;
  local_ec = CONCAT44(fVar23,fVar24) ^ 0x8000000000000000;
  fVar2 = *(float *)(param_1 + 0x3b0);
  local_d8 = local_1d0;
  local_d4 = CONCAT44(fVar23,fVar24);
  local_e0 = CONCAT44(fVar23,fVar24) ^ 0x8000000000000000;
  local_cc = local_1d0;
  if (0.0 < fVar1) {
    fVar23 = _guard_xfg_dispatch_icall_nop(fVar1 * 0.008726646);
    fVar23 = fVar23 * fVar2;
    local_c0 = fVar23 / fVar25;
  }
  fVar1 = *(float *)(param_1 + 0x80);
  fVar24 = *(float *)(param_1 + 0x84);
  fVar25 = *(float *)(param_1 + 0x88);
  pfVar16 = &local_f0;
  fVar7 = *(float *)(param_1 + 0xa0);
  fVar8 = *(float *)(param_1 + 0xa4);
  fVar9 = *(float *)(param_1 + 0xa8);
  lVar18 = 2;
  local_c8 = CONCAT44(fVar23,fVar2);
  local_bc = CONCAT44(fVar23,fVar2) ^ 0x8000000000000000;
  local_b0 = CONCAT44(fVar23,fVar2) ^ 0x8000000000000000;
  fVar10 = *(float *)(param_1 + 0xb0);
  fVar11 = *(float *)(param_1 + 0xb4);
  fVar12 = *(float *)(param_1 + 0xb8);
  local_b4 = local_c0;
  fVar13 = *(float *)(param_1 + 0x90);
  fVar14 = *(float *)(param_1 + 0x94);
  fVar15 = *(float *)(param_1 + 0x98);
  local_a4 = CONCAT44(fVar23,fVar2);
  local_a8 = -local_c0;
  uStack_1bc = 0x3f800000;
  local_9c = -local_c0;
  do {
    fVar23 = pfVar16[-2];
    fVar2 = pfVar16[-1];
    fVar3 = *pfVar16;
    uStack_1b4 = 0;
    *(ulonglong *)(pfVar16 + -2) =
         CONCAT44(fVar3 * fVar8 + fVar11 * 1.0 + fVar23 * fVar24 + fVar2 * fVar14,
                  fVar3 * fVar7 + fVar10 * 1.0 + fVar23 * fVar1 + fVar2 * fVar13);
    *pfVar16 = fVar3 * fVar9 + fVar12 * 1.0 + fVar23 * fVar25 + fVar2 * fVar15;
    fVar23 = pfVar16[1];
    fVar2 = pfVar16[2];
    fVar3 = pfVar16[3];
    *(ulonglong *)(pfVar16 + 1) =
         CONCAT44(fVar3 * fVar8 + fVar11 * 1.0 + fVar23 * fVar24 + fVar2 * fVar14,
                  fVar3 * fVar7 + fVar10 * 1.0 + fVar23 * fVar1 + fVar2 * fVar13);
    pfVar16[3] = fVar3 * fVar9 + fVar12 * 1.0 + fVar23 * fVar25 + fVar2 * fVar15;
    fVar23 = pfVar16[4];
    fVar2 = pfVar16[5];
    fVar3 = pfVar16[6];
    local_1b8 = 0;
    local_1b0 = 0;
    *(ulonglong *)(pfVar16 + 4) =
         CONCAT44(fVar3 * fVar8 + fVar11 * 1.0 + fVar23 * fVar24 + fVar2 * fVar14,
                  fVar3 * fVar7 + fVar10 * 1.0 + fVar23 * fVar1 + fVar2 * fVar13);
    pfVar16[6] = fVar3 * fVar9 + fVar12 * 1.0 + fVar23 * fVar25 + fVar2 * fVar15;
    fVar23 = pfVar16[7];
    fVar2 = pfVar16[8];
    fVar3 = pfVar16[9];
    local_1c8 = pfVar16[7];
    fStack_1c4 = pfVar16[8];
    fStack_1c0 = pfVar16[9];
    local_1d0 = fVar3 * fVar9 + fVar12 * 1.0 + fVar23 * fVar25 + fVar2 * fVar15;
    *(ulonglong *)(pfVar16 + 7) =
         CONCAT44(fVar3 * fVar8 + fVar11 * 1.0 + fVar23 * fVar24 + fVar2 * fVar14,
                  fVar3 * fVar7 + fVar10 * 1.0 + fVar23 * fVar1 + fVar2 * fVar13);
    pfVar16[9] = local_1d0;
    pfVar16 = pfVar16 + 0xc;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iVar21 = 0;
  if (0 < (int)param_2[1]) {
    lVar18 = 0;
    uVar22 = 1;
    do {
      if ((param_4 & uVar22) != 0) {
        uVar4 = *(uint *)(param_1 + 0x18);
        lVar19 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar19 = param_5 + 0x78;
        }
        plVar5 = *(longlong **)(lVar19 + lVar18);
        if ((uVar4 >> 0xb & 1) != 0) {
          plVar6 = *(longlong **)(param_1 + 0x120);
          for (plVar17 = plVar6; plVar17 != plVar6 + *(int *)(param_1 + 0x128);
              plVar17 = plVar17 + 1) {
            if (*plVar17 == *(longlong *)(*(longlong *)(*param_2 + lVar18) + 0x350)) {
              if ((int)((longlong)plVar17 - (longlong)plVar6 >> 3) != -1) {
                bVar20 = (byte)(uVar4 >> 0x10);
                goto LAB_14236a688;
              }
              break;
            }
          }
        }
        bVar20 = (byte)(uVar4 >> 0xd);
LAB_14236a688:
        lVar19 = param_1 + 0x3a0;
        bVar20 = bVar20 & 7;
        FLinearColor::FLinearColor(&local_1b8,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_f8,&local_ec,&local_1b8);
        FLinearColor::FLinearColor(&local_1c8,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_ec,&local_e0,&local_1c8);
        FLinearColor::FLinearColor(local_1d8,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_e0,&local_d4,local_1d8);
        FLinearColor::FLinearColor(local_190,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_d4,&local_f8,local_190);
        FLinearColor::FLinearColor(local_180,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_c8,&local_bc,local_180);
        FLinearColor::FLinearColor(local_170,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_bc,&local_b0,local_170);
        FLinearColor::FLinearColor(local_160,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_b0,&local_a4,local_160);
        FLinearColor::FLinearColor(local_150,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_a4,&local_c8,local_150);
        FLinearColor::FLinearColor(local_140,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_f8,&local_c8,local_140);
        FLinearColor::FLinearColor(local_130,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_ec,&local_bc,local_130);
        FLinearColor::FLinearColor(local_120,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_e0,&local_b0,local_120);
        FLinearColor::FLinearColor(local_110,lVar19);
        local_1e0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = bVar20;
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_d4,&local_a4,local_110);
        param_2 = local_1a0;
        param_5 = local_198;
        param_4 = local_1a8;
      }
      iVar21 = iVar21 + 1;
      uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
      lVar18 = lVar18 + 8;
    } while (iVar21 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14236a9b0 FUN_14236a9b0 body=1280 status=ok
// SIG undefined FUN_14236a9b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14236a9b0(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong in_stack_ffffffffffffff08;
  undefined *puVar15;
  undefined *in_stack_ffffffffffffff10;
  undefined4 *in_stack_ffffffffffffff18;
  undefined4 uVar16;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 local_d8 [4];
  uint local_d4;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_d4 = 0;
  if (0 < (int)param_2[1]) {
    local_c0 = (ulonglong)_tls_index;
    local_c8 = 0;
    do {
      lVar14 = local_c8;
      uVar13 = local_d4;
      if ((param_4 >> (local_d4 & 0x1f) & 1) != 0) {
        local_b8 = *(longlong *)(local_c8 + *param_2);
        lVar6 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar6 = param_5 + 0x78;
        }
        iVar10 = 0;
        plVar2 = *(longlong **)(lVar6 + local_c8);
        if (0 < *(int *)(param_1 + 0x3a8)) {
          lVar6 = 0;
          do {
            lVar12 = *(longlong *)(param_1 + 0x3a0);
            lVar7 = (longlong)iVar10 * 0x34 + lVar12;
            in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
            in_stack_ffffffffffffff18 =
                 (undefined4 *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffff00000000);
            in_stack_ffffffffffffff10 =
                 (undefined *)
                 CONCAT44((int)((ulonglong)in_stack_ffffffffffffff10 >> 0x20),
                          *(undefined4 *)(lVar12 + 0x28 + lVar6));
            in_stack_ffffffffffffff08 =
                 CONCAT71((int7)(in_stack_ffffffffffffff08 >> 8),
                          *(undefined1 *)(lVar12 + 0x30 + lVar6));
            (**(code **)(*plVar2 + 0x38))
                      (plVar2,lVar7,lVar7 + 0xc,lVar7 + 0x18,in_stack_ffffffffffffff08,
                       in_stack_ffffffffffffff10,in_stack_ffffffffffffff18,in_stack_ffffffffffffff20
                      );
            iVar10 = iVar10 + 1;
            lVar6 = lVar6 + 0x34;
          } while (iVar10 < *(int *)(param_1 + 0x3a8));
        }
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 0x3b8)) {
          lVar6 = 0;
          do {
            lVar7 = *(longlong *)(param_1 + 0x3b0);
            lVar12 = lVar7 + (longlong)iVar10 * 0x28;
            in_stack_ffffffffffffff08 =
                 CONCAT71((int7)(in_stack_ffffffffffffff08 >> 8),
                          *(undefined1 *)(lVar7 + 0x24 + lVar6));
            (**(code **)(*plVar2 + 0x40))
                      (plVar2,lVar12,lVar12 + 0xc,*(undefined4 *)(lVar7 + 0x1c + lVar6),
                       in_stack_ffffffffffffff08);
            iVar10 = iVar10 + 1;
            lVar6 = lVar6 + 0x28;
          } while (iVar10 < *(int *)(param_1 + 0x3b8));
        }
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 0x3c8)) {
          lVar7 = 0;
          lVar12 = 0x38;
          local_a8 = 0x38;
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_c0 * 8);
          local_b0 = lVar6;
          do {
            if (*(int *)(lVar12 + lVar6) < DAT_146af074c) {
              _Init_thread_header(&DAT_146af074c);
              if (DAT_146af074c == -1) {
                _DAT_146af0740 = 0x3f800000;
                _DAT_146af0748 = 0;
                _Init_thread_footer(&DAT_146af074c);
              }
            }
            if (*(int *)(lVar12 + lVar6) < DAT_146af075c) {
              _Init_thread_header(&DAT_146af075c);
              if (DAT_146af075c == -1) {
                _DAT_146af0750 = 0;
                _DAT_146af0754 = 0x3f800000;
                _Init_thread_footer(&DAT_146af075c);
              }
            }
            if (*(int *)(lVar12 + lVar6) < DAT_146af076c) {
              _Init_thread_header(&DAT_146af076c);
              if (DAT_146af076c == -1) {
                _DAT_146af0760 = 0;
                _DAT_146af0768 = 0x3f800000;
                _Init_thread_footer(&DAT_146af076c);
              }
            }
            lVar14 = *(longlong *)(param_1 + 0x3c0);
            puVar15 = (undefined *)(in_stack_ffffffffffffff08 & 0xffffffffffffff00);
            FUN_1424290d0(local_88,*(undefined4 *)(local_b8 + 0x1a38),1,0,puVar15);
            iVar8 = 0;
            if (0 < *(int *)(lVar7 + 8 + lVar14)) {
              do {
                in_stack_ffffffffffffff18 = &DAT_1464aa730;
                in_stack_ffffffffffffff10 = &DAT_146af0760;
                puVar15 = &DAT_146af0750;
                FUN_14242c0d0(local_88,*(longlong *)(lVar7 + lVar14) + (longlong)iVar8 * 0xc,
                              &DAT_1468b5d88,&DAT_146af0740,&DAT_146af0750,&DAT_146af0760,
                              &DAT_1464aa730);
                iVar8 = iVar8 + 1;
                lVar12 = local_a8;
                lVar6 = local_b0;
              } while (iVar8 < *(int *)(lVar7 + 8 + lVar14));
            }
            uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
            iVar8 = 0;
            if (0 < *(int *)(lVar7 + 0x18 + lVar14)) {
              lVar9 = 4;
              do {
                lVar3 = *(longlong *)(lVar7 + 0x10 + lVar14);
                FUN_14242bf10(local_88,*(undefined4 *)(lVar3 + -4 + lVar9),
                              *(undefined4 *)(lVar3 + lVar9),*(undefined4 *)(lVar3 + 4 + lVar9));
                uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
                iVar8 = iVar8 + 3;
                lVar9 = lVar9 + 0xc;
              } while (iVar8 < *(int *)(lVar7 + 0x18 + lVar14));
            }
            puStack_90 = local_d8;
            local_d8[0] = 0;
            local_98 = &DAT_14060d670;
            local_68 = 0x4060d670;
            uStack_64 = 1;
            uStack_60 = puStack_90;
            lVar9 = FUN_1415d8310(&local_68,&DAT_146216a38);
            puVar11 = (undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0xfU & 0xfffffffffffffff0);
            puVar1 = (ulonglong *)(lVar9 + 0x18);
            puVar4 = puVar11 + 0x2b;
            if (*(undefined8 **)(lVar9 + 0x20) < puVar4) {
              FMemStackBase::AllocateNewChunk(puVar1,0x168);
              puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              puVar4 = puVar11 + 0x2b;
            }
            *puVar1 = (ulonglong)puVar4;
            if (puVar11 != (undefined8 *)0x0) {
              FLinearColor::FLinearColor(&local_58,lVar14 + 0x20 + lVar7);
              local_d0 = 0x3e;
              uVar5 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                                (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
              FUN_14257dfd0(puVar11);
              puVar11[0x27] = uVar5;
              *puVar11 = &PTR__scalar_deleting_destructor__1440fad20;
              puVar11[0x2a] = local_d0;
              *(undefined4 *)(puVar11 + 0x28) = local_58;
              *(undefined4 *)((longlong)puVar11 + 0x144) = uStack_54;
              *(undefined4 *)(puVar11 + 0x29) = uStack_50;
              *(undefined4 *)((longlong)puVar11 + 0x14c) = uStack_4c;
            }
            in_stack_ffffffffffffff18 = (undefined4 *)CONCAT44(uVar16,local_d4);
            in_stack_ffffffffffffff10 =
                 (undefined *)((ulonglong)in_stack_ffffffffffffff10 & 0xffffffffffffff00);
            in_stack_ffffffffffffff08 = (ulonglong)puVar15 & 0xffffffffffffff00;
            in_stack_ffffffffffffff20 = param_5;
            FDynamicMeshBuilder::GetMesh
                      (local_88,&DAT_1464aa7d0,puVar11,*(undefined1 *)(lVar7 + 0x24 + lVar14),
                       in_stack_ffffffffffffff08,in_stack_ffffffffffffff10,in_stack_ffffffffffffff18
                       ,param_5);
            FDynamicMeshBuilder::~FDynamicMeshBuilder(local_88);
            iVar10 = iVar10 + 1;
            lVar7 = lVar7 + 0x30;
            lVar14 = local_c8;
            uVar13 = local_d4;
          } while (iVar10 < *(int *)(param_1 + 0x3c8));
        }
      }
      local_d4 = uVar13 + 1;
      local_c8 = lVar14 + 8;
    } while ((int)local_d4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14236aeb0 FUN_14236aeb0 body=5669 status=ok
// SIG undefined FUN_14236aeb0(void)

void FUN_14236aeb0(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined2 uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined2 *puVar24;
  longlong lVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  longlong local_3c8;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  uint local_3b4;
  int local_3b0;
  int local_3ac;
  uint local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float local_374;
  float local_370;
  int local_36c;
  float local_368;
  float local_364;
  float local_360;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 local_354;
  undefined4 uStack_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  float local_2d8;
  float local_2d4;
  undefined1 local_2d0 [4];
  float local_2cc;
  longlong local_2c8;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined1 local_288 [12];
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  undefined4 local_26c;
  float local_268;
  float local_264;
  float local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined4 local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c0;
  float local_1b4;
  float local_1a8;
  float local_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [192];
  
  local_36c = *(int *)(param_1 + 0x5b0) * 4;
  iVar20 = local_36c * (int)param_2[1];
  if (0 < iVar20) {
    FPositionVertexBuffer::Init(param_1 + 0x488,iVar20,1);
    FStaticMeshVertexBuffer::Init(param_1 + 0x3a0,iVar20,1,1);
    if (*(int *)(param_1 + 0x598) < 1) {
      iVar16 = *(int *)(param_1 + 0x598);
      iVar9 = iVar16 + 1;
      *(int *)(param_1 + 0x598) = iVar9;
      if (*(int *)(param_1 + 0x59c) < iVar9) {
        FUN_14089e280(param_1 + 0x4e0,iVar16);
      }
      FUN_14271d780();
    }
    lVar17 = *(longlong *)(param_1 + 0x590);
    if (*(longlong *)(param_1 + 0x590) == 0) {
      lVar17 = param_1 + 0x4e0;
    }
    FColorVertexBuffer::Init(lVar17,iVar20);
    local_3ac = 0;
    if (0 < (int)param_2[1]) {
      local_338 = 0;
      local_3a8 = 1;
      do {
        lVar17 = local_338;
        uVar15 = local_3a8;
        iVar20 = local_3ac;
        if ((param_4 & local_3a8) != 0) {
          local_378 = *(float *)(param_1 + 0xb0);
          local_374 = *(float *)(param_1 + 0xb4);
          local_370 = *(float *)(param_1 + 0xb8);
          lVar25 = *(longlong *)(*param_2 + local_338 * 8);
          fVar28 = *(float *)(lVar25 + 0x8dc) - local_378;
          fVar29 = *(float *)(lVar25 + 0x8e0) - local_374;
          fVar27 = *(float *)(lVar25 + 0x8e4) - local_370;
          fVar30 = *(float *)(lVar25 + 0x640);
          fVar31 = *(float *)(lVar25 + 0x644);
          fVar32 = *(float *)(lVar25 + 0x648);
          fVar33 = *(float *)(lVar25 + 0x64c);
          fVar34 = *(float *)(lVar25 + 0x630);
          fVar35 = *(float *)(lVar25 + 0x634);
          fVar40 = *(float *)(lVar25 + 0x638);
          fVar37 = *(float *)(lVar25 + 0x63c);
          fVar39 = *(float *)(lVar25 + 0x620);
          fVar41 = *(float *)(lVar25 + 0x624);
          fVar38 = *(float *)(lVar25 + 0x628);
          fVar3 = *(float *)(lVar25 + 0x62c);
          fVar4 = *(float *)(lVar25 + 0x610);
          fVar5 = *(float *)(lVar25 + 0x614);
          fVar6 = *(float *)(lVar25 + 0x618);
          fVar7 = *(float *)(lVar25 + 0x61c);
          local_128 = 0x3f800000;
          uStack_124 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          fVar27 = SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar27 * fVar27);
          local_118 = 0;
          uStack_114 = 0x3f800000;
          uStack_110 = 0;
          uStack_10c = 0;
          local_3bc = fVar4 * 1.0 + fVar39 * 0.0 + fVar34 * 0.0 + fVar30 * 0.0;
          fStack_1e4 = fVar5 * 1.0 + fVar41 * 0.0 + fVar35 * 0.0 + fVar31 * 0.0;
          fStack_2b0 = fVar6 * 1.0 + fVar38 * 0.0 + fVar40 * 0.0 + fVar32 * 0.0;
          fStack_2ac = fVar7 * 1.0 + fVar3 * 0.0 + fVar37 * 0.0 + fVar33 * 0.0;
          _local_2b8 = CONCAT44(fStack_1e4,local_3bc);
          local_3bc = -local_3bc;
          local_1e8 = -fStack_1e4;
          fVar28 = -fStack_2b0;
          local_198 = -fStack_2b0;
          local_3c0 = fVar4 * 0.0 + fVar39 * 1.0 + fVar34 * 0.0 + fVar30 * 0.0;
          fStack_1f4 = fVar5 * 0.0 + fVar41 * 1.0 + fVar35 * 0.0 + fVar31 * 0.0;
          fStack_2a0 = fVar6 * 0.0 + fVar38 * 1.0 + fVar40 * 0.0 + fVar32 * 0.0;
          fStack_29c = fVar7 * 0.0 + fVar3 * 1.0 + fVar37 * 0.0 + fVar33 * 0.0;
          _local_2a8 = CONCAT44(fStack_1f4,local_3c0);
          local_3c0 = -local_3c0;
          local_1f8 = -fStack_1f4;
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0x3f800000;
          uStack_fc = 0;
          fVar29 = -fStack_2a0;
          local_188 = -fStack_2a0;
          fVar39 = fVar4 * 0.0 + fVar39 * 0.0 + fVar34 * 1.0 + fVar30 * 0.0;
          fVar41 = fVar5 * 0.0 + fVar41 * 0.0 + fVar35 * 1.0 + fVar31 * 0.0;
          fStack_290 = fVar6 * 0.0 + fVar38 * 0.0 + fVar40 * 1.0 + fVar32 * 0.0;
          fStack_28c = fVar7 * 0.0 + fVar3 * 0.0 + fVar37 * 1.0 + fVar33 * 0.0;
          _local_298 = CONCAT44(fVar41,fVar39);
          fVar39 = -fVar39;
          fVar40 = -fStack_290;
          fVar41 = -fVar41;
          local_360 = fVar27;
          local_348 = lVar25;
          fStack_1f0 = fStack_1f4;
          fStack_1ec = fStack_1f4;
          fStack_1e0 = fStack_1e4;
          fStack_1dc = fStack_1e4;
          fStack_194 = fStack_2b0;
          fStack_190 = fStack_2b0;
          fStack_18c = fStack_2b0;
          fStack_184 = fStack_2a0;
          fStack_180 = fStack_2a0;
          fStack_17c = fStack_2a0;
          FMatrix::InverseFast(param_1 + 0x80,&local_168);
          local_308 = local_3bc;
          fStack_304 = local_1e8;
          uStack_2fc = 0;
          fVar30 = local_138 * 0.0 + fVar28 * local_148 +
                   local_1e8 * local_158 + local_3bc * local_168;
          fVar32 = fStack_134 * 0.0 + fVar28 * fStack_144 +
                   local_1e8 * fStack_154 + local_3bc * fStack_164;
          fVar34 = fStack_130 * 0.0 + fVar28 * fStack_140 +
                   local_1e8 * fStack_150 + local_3bc * fStack_160;
          local_2f8 = local_3c0;
          fStack_2f4 = local_1f8;
          uStack_2ec = 0;
          local_3b0 = 0;
          local_340 = 0;
          fVar31 = local_138 * 0.0 + fVar29 * local_148 +
                   local_1f8 * local_158 + local_3c0 * local_168;
          fVar33 = fStack_134 * 0.0 + fVar29 * fStack_144 +
                   local_1f8 * fStack_154 + local_3c0 * fStack_164;
          fVar35 = fStack_130 * 0.0 + fVar29 * fStack_140 +
                   local_1f8 * fStack_150 + local_3c0 * fStack_160;
          uStack_2dc = 0;
          fStack_380 = fStack_130 * 0.0 + fVar40 * fStack_140 +
                       fVar41 * fStack_150 + fVar39 * fStack_160;
          fStack_37c = fStack_12c * 0.0 + fVar40 * fStack_13c +
                       fVar41 * fStack_14c + fVar39 * fStack_15c;
          _local_388 = CONCAT44(fStack_134 * 0.0 + fVar40 * fStack_144 +
                                fVar41 * fStack_154 + fVar39 * fStack_164,
                                local_138 * 0.0 + fVar40 * local_148 +
                                fVar41 * local_158 + fVar39 * local_168);
          fStack_300 = fVar28;
          fStack_2f0 = fVar29;
          local_2e8 = fVar39;
          fStack_2e4 = fVar41;
          fStack_2e0 = fVar40;
          if (0 < *(int *)(param_1 + 0x5b0)) {
            do {
              lVar18 = local_340;
              iVar16 = local_3b0;
              lVar17 = *(longlong *)(param_1 + 0x5a8);
              local_2c8 = local_340 * 5;
              if (*(longlong *)(lVar17 + local_340 * 0x28) != 0) {
                lVar19 = *(longlong *)(lVar17 + 0x20 + local_340 * 0x28);
                fVar40 = *(float *)(lVar17 + 0x14 + local_340 * 0x28);
                fVar37 = *(float *)(lVar17 + 0x18 + local_340 * 0x28);
                if (lVar19 != 0) {
                  fVar39 = (float)UCurveFloat::GetFloatValue(lVar19,fVar27);
                  fVar40 = fVar40 * fVar39;
                  fVar37 = fVar37 * fVar39;
                }
                local_328 = local_378;
                fStack_324 = local_374;
                fStack_320 = local_370;
                uStack_31c = 0x3f800000;
                local_1d8 = *(float *)(lVar25 + 0x5c0) * 1.0 +
                            local_370 * *(float *)(lVar25 + 0x5b0) +
                            local_374 * *(float *)(lVar25 + 0x5a0) +
                            local_378 * *(float *)(lVar25 + 0x590);
                fStack_1d4 = *(float *)(lVar25 + 0x5c4) * 1.0 +
                             local_370 * *(float *)(lVar25 + 0x5b4) +
                             local_374 * *(float *)(lVar25 + 0x5a4) +
                             local_378 * *(float *)(lVar25 + 0x594);
                fStack_1d0 = *(float *)(lVar25 + 0x5c8) * 1.0 +
                             local_370 * *(float *)(lVar25 + 0x5b8) +
                             local_374 * *(float *)(lVar25 + 0x5a8) +
                             local_378 * *(float *)(lVar25 + 0x598);
                fStack_1cc = *(float *)(lVar25 + 0x5cc) * 1.0 +
                             local_370 * *(float *)(lVar25 + 0x5bc) +
                             local_374 * *(float *)(lVar25 + 0x5ac) +
                             local_378 * *(float *)(lVar25 + 0x59c);
                fVar39 = SQRT(local_3c0 * local_3c0 + local_1f8 * local_1f8 + fVar29 * fVar29);
                local_3b8 = 1.0 / SQRT(local_3bc * local_3bc + local_1e8 * local_1e8 +
                                       fVar28 * fVar28);
                if ((*(byte *)(lVar17 + 0x10 + lVar18 * 0x28) & 1) == 0) {
                  local_3b8 = local_3b8 * fVar37;
                  fVar40 = fVar40 / fVar39;
                }
                else {
                  fVar40 = fVar40 * fStack_1cc;
                  local_3b8 = local_3b8 * fVar39 * fVar37 * fStack_1cc;
                }
                FLinearColor::FLinearColor(local_288,param_1 + 0x5c0);
                lVar25 = *(longlong *)(lVar17 + 8 + lVar18 * 0x28);
                if (lVar25 != 0) {
                  fVar37 = (float)UCurveFloat::GetFloatValue(lVar25,fVar27);
                  local_27c = local_27c * fVar37;
                }
                lVar25 = 4;
                uVar15 = iVar20 * local_36c + iVar16 * 4;
                local_364 = fStack_384 * fStack_384 + local_388 * local_388 +
                            fStack_380 * fStack_380;
                fVar37 = fVar32 * fVar32 + fVar30 * fVar30 + fVar34 * fVar34;
                local_3c8 = CONCAT44(local_3c8._4_4_,fVar37);
                local_368 = fVar33 * fVar33 + fVar31 * fVar31 + fVar35 * fVar35;
                local_3b4 = uVar15;
                do {
                  fVar39 = fStack_380;
                  fVar41 = local_388;
                  fVar38 = fStack_384;
                  if ((local_364 != 1.0) &&
                     (fVar39 = DAT_1468b5d98, fVar41 = DAT_1468b5d90, fVar38 = DAT_1468b5d94,
                     1e-08 <= local_364)) {
                    auVar36 = rsqrtss(ZEXT416((uint)local_364),ZEXT416((uint)local_364));
                    local_2d8 = auVar36._0_4_;
                    local_2d8 = local_2d8 +
                                local_2d8 * (0.5 - local_364 * 0.5 * local_2d8 * local_2d8);
                    local_2d8 = local_2d8 +
                                local_2d8 * (0.5 - local_364 * 0.5 * local_2d8 * local_2d8);
                    fVar39 = local_2d8 * fStack_380;
                    fVar41 = local_2d8 * local_388;
                    fVar38 = local_2d8 * fStack_384;
                  }
                  fVar41 = -fVar41;
                  fVar38 = -fVar38;
                  fVar39 = -fVar39;
                  local_3a4 = fVar30;
                  local_3a0 = fVar32;
                  local_39c = fVar34;
                  if (fVar37 != 1.0) {
                    if (1e-08 <= fVar37) {
                      auVar36 = rsqrtss(ZEXT416((uint)fVar37),ZEXT416((uint)fVar37));
                      local_2d4 = auVar36._0_4_;
                      local_2d4 = local_2d4 +
                                  local_2d4 * (0.5 - fVar37 * 0.5 * local_2d4 * local_2d4);
                      local_2d4 = local_2d4 +
                                  local_2d4 * (0.5 - fVar37 * 0.5 * local_2d4 * local_2d4);
                      local_3a4 = local_2d4 * fVar30;
                      local_3a0 = local_2d4 * fVar32;
                      local_39c = local_2d4 * fVar34;
                    }
                    else {
                      local_3a4 = DAT_1468b5d90;
                      local_3a0 = DAT_1468b5d94;
                      local_39c = DAT_1468b5d98;
                    }
                  }
                  local_390 = fVar35;
                  local_394 = fVar33;
                  local_398 = fVar31;
                  if ((local_368 != 1.0) &&
                     (local_390 = DAT_1468b5d98, local_394 = DAT_1468b5d94,
                     local_398 = DAT_1468b5d90, 1e-08 <= local_368)) {
                    auVar36 = rsqrtss(ZEXT416((uint)local_368),ZEXT416((uint)local_368));
                    local_2cc = auVar36._0_4_;
                    local_2cc = local_2cc +
                                local_2cc * (0.5 - local_368 * 0.5 * local_2cc * local_2cc);
                    local_2cc = local_2cc +
                                local_2cc * (0.5 - local_368 * 0.5 * local_2cc * local_2cc);
                    local_390 = local_2cc * fVar35;
                    local_394 = local_2cc * fVar33;
                    local_398 = local_2cc * fVar31;
                  }
                  lVar18 = *(longlong *)(param_1 + 0x460);
                  uVar23 = (ulonglong)uVar15;
                  if (*(char *)(param_1 + 0x481) == '\0') {
                    iVar20 = (int)ROUND(local_398 * 127.0 + local_398 * 127.0 + 0.5) >> 1;
                    if (iVar20 < -0x80) {
                      iVar16 = -0x80;
                    }
                    else {
                      iVar16 = 0x7f;
                      if (iVar20 < 0x7f) {
                        iVar16 = iVar20;
                      }
                    }
                    *(char *)(lVar18 + uVar23 * 8) = (char)iVar16;
                    iVar20 = (int)ROUND(local_394 * 127.0 + local_394 * 127.0 + 0.5) >> 1;
                    if (iVar20 < -0x80) {
                      iVar16 = -0x80;
                    }
                    else {
                      iVar16 = 0x7f;
                      if (iVar20 < 0x7f) {
                        iVar16 = iVar20;
                      }
                    }
                    *(char *)(lVar18 + 1 + uVar23 * 8) = (char)iVar16;
                    iVar20 = (int)ROUND(local_390 * 127.0 + local_390 * 127.0 + 0.5) >> 1;
                    if (iVar20 < -0x80) {
                      iVar16 = -0x80;
                    }
                    else {
                      iVar16 = 0x7f;
                      if (iVar20 < 0x7f) {
                        iVar16 = iVar20;
                      }
                    }
                    *(char *)(lVar18 + 2 + uVar23 * 8) = (char)iVar16;
                    local_208 = 0;
                    uStack_204 = 0;
                    uStack_200 = 0;
                    uStack_1fc = 0x3f800000;
                    *(undefined1 *)(lVar18 + 3 + uVar23 * 8) = 0x7f;
                    local_22c = 0;
                    local_21c = 0;
                    local_20c = 0;
                    local_238 = local_398;
                    local_234 = local_394;
                    local_230 = local_390;
                    local_228 = local_3a4;
                    local_224 = local_3a0;
                    local_220 = local_39c;
                    local_218 = fVar41;
                    local_214 = fVar38;
                    local_210 = fVar39;
                    fVar37 = (float)FMatrix::Determinant(&local_238);
                    if (0.0 <= fVar37) {
                      fVar37 = 254.5;
                    }
                    else {
                      fVar37 = -253.5;
                    }
                    iVar20 = (int)ROUND(fVar41 * 127.0 + fVar41 * 127.0 + 0.5) >> 1;
                    if (iVar20 < -0x80) {
                      iVar16 = -0x80;
                    }
                    else {
                      iVar16 = 0x7f;
                      if (iVar20 < 0x7f) {
                        iVar16 = iVar20;
                      }
                    }
                    *(char *)(lVar18 + 4 + uVar23 * 8) = (char)iVar16;
                    iVar20 = (int)ROUND(fVar38 * 127.0 + fVar38 * 127.0 + 0.5) >> 1;
                    if (iVar20 < -0x80) {
                      iVar16 = -0x80;
                    }
                    else {
                      iVar16 = 0x7f;
                      if (iVar20 < 0x7f) {
                        iVar16 = iVar20;
                      }
                    }
                    *(char *)(lVar18 + 5 + uVar23 * 8) = (char)iVar16;
                    iVar20 = (int)ROUND(fVar39 * 127.0 + fVar39 * 127.0 + 0.5) >> 1;
                    if (iVar20 < -0x80) {
                      iVar16 = -0x80;
                    }
                    else {
                      iVar16 = 0x7f;
                      if (iVar20 < 0x7f) {
                        iVar16 = iVar20;
                      }
                    }
                    *(char *)(lVar18 + 6 + uVar23 * 8) = (char)iVar16;
                    iVar20 = (int)ROUND(fVar37) >> 1;
                    if (iVar20 < -0x80) {
                      iVar16 = -0x80;
                    }
                    else {
                      iVar16 = 0x7f;
                      if (iVar20 < 0x7f) {
                        iVar16 = iVar20;
                      }
                    }
                    *(char *)(lVar18 + 7 + uVar23 * 8) = (char)iVar16;
                  }
                  else {
                    puVar24 = (undefined2 *)(uVar23 * 0x10 + lVar18);
                    iVar20 = (int)ROUND(local_398 * 32767.0 + local_398 * 32767.0 + 0.5) >> 1;
                    if (iVar20 < -0x8000) {
                      uVar14 = 0x8000;
                    }
                    else {
                      uVar14 = 0x7fff;
                      if (iVar20 < 0x7fff) {
                        uVar14 = (undefined2)iVar20;
                      }
                    }
                    *puVar24 = uVar14;
                    iVar20 = (int)ROUND(local_394 * 32767.0 + local_394 * 32767.0 + 0.5) >> 1;
                    if (iVar20 < -0x8000) {
                      iVar16 = -0x8000;
                    }
                    else {
                      iVar16 = 0x7fff;
                      if (iVar20 < 0x7fff) {
                        iVar16 = iVar20;
                      }
                    }
                    puVar24[1] = (short)iVar16;
                    iVar20 = (int)ROUND(local_390 * 32767.0 + local_390 * 32767.0 + 0.5) >> 1;
                    if (iVar20 < -0x8000) {
                      iVar16 = -0x8000;
                    }
                    else {
                      iVar16 = 0x7fff;
                      if (iVar20 < 0x7fff) {
                        iVar16 = iVar20;
                      }
                    }
                    puVar24[2] = (short)iVar16;
                    local_248 = 0;
                    uStack_244 = 0;
                    uStack_240 = 0;
                    uStack_23c = 0x3f800000;
                    puVar24[3] = 0x7fff;
                    local_26c = 0;
                    local_25c = 0;
                    local_24c = 0;
                    local_278 = local_398;
                    local_274 = local_394;
                    local_270 = local_390;
                    local_268 = local_3a4;
                    local_264 = local_3a0;
                    local_260 = local_39c;
                    local_258 = fVar41;
                    local_254 = fVar38;
                    local_250 = fVar39;
                    fVar37 = (float)FMatrix::Determinant(&local_278);
                    if (0.0 <= fVar37) {
                      fVar37 = 65534.5;
                    }
                    else {
                      fVar37 = -65533.5;
                    }
                    iVar20 = (int)ROUND(fVar41 * 32767.0 + fVar41 * 32767.0 + 0.5) >> 1;
                    if (iVar20 < -0x8000) {
                      iVar16 = -0x8000;
                    }
                    else {
                      iVar16 = 0x7fff;
                      if (iVar20 < 0x7fff) {
                        iVar16 = iVar20;
                      }
                    }
                    puVar24[4] = (short)iVar16;
                    iVar20 = (int)ROUND(fVar38 * 32767.0 + fVar38 * 32767.0 + 0.5) >> 1;
                    if (iVar20 < -0x8000) {
                      iVar16 = -0x8000;
                    }
                    else {
                      iVar16 = 0x7fff;
                      if (iVar20 < 0x7fff) {
                        iVar16 = iVar20;
                      }
                    }
                    puVar24[5] = (short)iVar16;
                    iVar20 = (int)ROUND(fVar39 * 32767.0 + fVar39 * 32767.0 + 0.5) >> 1;
                    if (iVar20 < -0x8000) {
                      iVar16 = -0x8000;
                    }
                    else {
                      iVar16 = 0x7fff;
                      if (iVar20 < 0x7fff) {
                        iVar16 = iVar20;
                      }
                    }
                    puVar24[6] = (short)iVar16;
                    iVar20 = (int)ROUND(fVar37) >> 1;
                    if (iVar20 < -0x8000) {
                      puVar24[7] = 0x8000;
                    }
                    else {
                      iVar16 = 0x7fff;
                      if (iVar20 < 0x7fff) {
                        iVar16 = iVar20;
                      }
                      puVar24[7] = (short)iVar16;
                    }
                  }
                  lVar18 = *(longlong *)(param_1 + 0x590);
                  if (*(longlong *)(param_1 + 0x590) == 0) {
                    lVar18 = param_1 + 0x4e0;
                  }
                  uVar21 = *(int *)(lVar18 + 0x50) * uVar15;
                  lVar18 = *(longlong *)(lVar18 + 0x48);
                  puVar11 = (undefined4 *)FLinearColor::ToFColor(local_288,local_2d0,1);
                  uVar15 = uVar15 + 1;
                  *(undefined4 *)((ulonglong)uVar21 + lVar18) = *puVar11;
                  lVar25 = lVar25 + -1;
                  fVar37 = (float)local_3c8;
                } while (lVar25 != 0);
                fVar37 = -fVar40;
                lVar25 = *(longlong *)(param_1 + 0x4d0);
                fVar39 = -local_3b8;
                uVar15 = *(int *)(param_1 + 0x4d8) * local_3b4;
                local_1c0 = fVar37 * fVar35 + local_3b8 * fVar34;
                *(ulonglong *)((ulonglong)uVar15 + lVar25) =
                     CONCAT44(fVar37 * fVar33 + local_3b8 * fVar32,
                              fVar37 * fVar31 + local_3b8 * fVar30);
                *(float *)((ulonglong)uVar15 + 8 + lVar25) = local_1c0;
                lVar25 = *(longlong *)(param_1 + 0x4d0);
                uVar15 = *(int *)(param_1 + 0x4d8) * (local_3b4 + 1);
                local_1b4 = fVar40 * fVar35 + local_3b8 * fVar34;
                *(ulonglong *)((ulonglong)uVar15 + lVar25) =
                     CONCAT44(fVar40 * fVar33 + local_3b8 * fVar32,
                              fVar40 * fVar31 + local_3b8 * fVar30);
                *(float *)((ulonglong)uVar15 + 8 + lVar25) = local_1b4;
                lVar25 = *(longlong *)(param_1 + 0x4d0);
                uVar15 = *(int *)(param_1 + 0x4d8) * (local_3b4 + 2);
                local_1a8 = fVar37 * fVar35 + fVar39 * fVar34;
                *(ulonglong *)((ulonglong)uVar15 + lVar25) =
                     CONCAT44(fVar37 * fVar33 + fVar39 * fVar32,fVar37 * fVar31 + fVar39 * fVar30);
                *(float *)((ulonglong)uVar15 + 8 + lVar25) = local_1a8;
                lVar25 = *(longlong *)(param_1 + 0x4d0);
                uVar15 = *(int *)(param_1 + 0x4d8) * (local_3b4 + 3);
                local_19c = fVar39 * fVar34 + fVar40 * fVar35;
                *(ulonglong *)((ulonglong)uVar15 + lVar25) =
                     CONCAT44(fVar39 * fVar32 + fVar40 * fVar33,fVar39 * fVar30 + fVar40 * fVar31);
                *(float *)((ulonglong)uVar15 + 8 + lVar25) = local_19c;
                lVar25 = (ulonglong)*(uint *)(param_1 + 0x478) * (ulonglong)local_3b4;
                if (*(char *)(param_1 + 0x480) == '\0') {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x468) + lVar25 * 4) = 0;
                }
                else {
                  *(undefined8 *)(*(longlong *)(param_1 + 0x468) + lVar25 * 8) = 0;
                }
                lVar25 = *(longlong *)(param_1 + 0x468);
                lVar18 = (ulonglong)(local_3b4 + 1) * (ulonglong)*(uint *)(param_1 + 0x478);
                if (*(char *)(param_1 + 0x480) == '\0') {
                  *(undefined4 *)(lVar25 + lVar18 * 4) = 0x3c000000;
                }
                else {
                  *(undefined4 *)(lVar25 + lVar18 * 8) = 0;
                  *(undefined4 *)(lVar25 + 4 + lVar18 * 8) = 0x3f800000;
                }
                lVar25 = (ulonglong)(local_3b4 + 2) * (ulonglong)*(uint *)(param_1 + 0x478);
                if (*(char *)(param_1 + 0x480) == '\0') {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x468) + lVar25 * 4) = 0x3c00;
                }
                else {
                  *(undefined8 *)(*(longlong *)(param_1 + 0x468) + lVar25 * 8) = 0x3f800000;
                }
                lVar25 = *(longlong *)(param_1 + 0x468);
                lVar18 = (ulonglong)(local_3b4 + 3) * (ulonglong)*(uint *)(param_1 + 0x478);
                if (*(char *)(param_1 + 0x480) == '\0') {
                  *(undefined4 *)(lVar25 + lVar18 * 4) = 0x3c003c00;
                }
                else {
                  *(undefined4 *)(lVar25 + lVar18 * 8) = 0x3f800000;
                  *(undefined4 *)(lVar25 + 4 + lVar18 * 8) = 0x3f800000;
                }
                iVar20 = FUN_1408bed80(param_5,1);
                lVar25 = (ulonglong)(uint)(iVar20 % 0x59) * 0xb8 +
                         *(longlong *)(*param_5 + (longlong)(iVar20 / 0x59) * 8);
                *(longlong *)(lVar25 + 0xa0) = param_1 + 0x5c8;
                plVar13 = *(longlong **)(lVar17 + local_2c8 * 8);
                uVar12 = (**(code **)(*plVar13 + 0x2a8))
                                   (plVar13,0,*(uint *)(param_1 + 0x18) >> 10 & 0xffffff01);
                *(undefined8 *)(lVar25 + 0xa8) = uVar12;
                uVar15 = *(uint *)(lVar25 + 0x8c);
                *(undefined8 *)(lVar25 + 0x98) = 0;
                uVar22 = (*(byte *)(param_1 + 0x18) & 1) << 3;
                *(uint *)(lVar25 + 0x8c) = uVar22 | uVar15 & 0xffffffd7;
                uVar21 = FUN_140814c80(param_1,local_348);
                uVar15 = (uVar21 & 7) << 0x12 | uVar22 | uVar15 & 0xffe01fd7 | 0x1010;
                *(uint *)(lVar25 + 0x8c) = uVar15;
                *(uint *)(lVar25 + 0x8c) =
                     (*(uint *)(param_1 + 0x1c) >> 0x11 ^ uVar15) & 0x200 ^ uVar15;
                lVar17 = *(longlong *)(lVar25 + 0x78);
                if (*(longlong *)(lVar25 + 0x78) == 0) {
                  lVar17 = lVar25;
                }
                *(undefined8 *)(lVar17 + 0x10) = 0;
                *(undefined4 *)(lVar17 + 0x48) = 0;
                *(undefined4 *)(lVar17 + 0x4c) = 3;
                local_3c8 = *(longlong *)(param_1 + 0x1c0);
                if (local_3c8 != 0) {
                  LOCK();
                  *(int *)(local_3c8 + 8) = *(int *)(local_3c8 + 8) + 1;
                  UNLOCK();
                }
                plVar13 = (longlong *)(lVar17 + 8);
                if (plVar13 != &local_3c8) {
                  puVar2 = (undefined8 *)*plVar13;
                  *plVar13 = local_3c8;
                  local_3c8 = 0;
                  if (puVar2 != (undefined8 *)0x0) {
                    LOCK();
                    piVar1 = (int *)(puVar2 + 1);
                    iVar20 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar20 == 1) {
                      if ((*(char *)(puVar2 + 2) == '\0') &&
                         ((DAT_146ab62f5 != '\0' ||
                          (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
                        LOCK();
                        bVar26 = *(int *)((longlong)puVar2 + 0xc) == 0;
                        if (bVar26) {
                          *(int *)((longlong)puVar2 + 0xc) = 1;
                        }
                        UNLOCK();
                        if (bVar26) {
                          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar2)
                          ;
                        }
                      }
                      else {
                        (**(code **)*puVar2)(puVar2,1);
                      }
                    }
                  }
                }
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3c8);
                lVar18 = lVar17 + 0x28;
                local_35c = 0;
                iVar20 = *(int *)(lVar17 + 0x38);
                uStack_358 = 2;
                *(int *)(lVar17 + 0x38) = iVar20 + 1;
                if (*(int *)(lVar17 + 0x3c) < iVar20 + 1) {
                  TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
                  ::ResizeGrow(lVar18,iVar20);
                }
                local_354 = 0;
                lVar19 = *(longlong *)(lVar17 + 0x30);
                if (*(longlong *)(lVar17 + 0x30) == 0) {
                  lVar19 = lVar18;
                }
                uStack_350 = 2;
                *(ulonglong *)(lVar19 + (longlong)iVar20 * 8) = CONCAT44(uStack_358,local_35c);
                *(uint *)(lVar17 + 0x44) = local_3b4;
                iVar16 = *(int *)(lVar17 + 0x38);
                *(int *)(lVar17 + 0x38) = iVar16 + 1;
                if (*(int *)(lVar17 + 0x3c) < iVar16 + 1) {
                  TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
                  ::ResizeGrow(lVar18,iVar16);
                }
                iVar20 = local_3ac;
                lVar19 = *(longlong *)(lVar17 + 0x30);
                if (*(longlong *)(lVar17 + 0x30) == 0) {
                  lVar19 = lVar18;
                }
                *(ulonglong *)(lVar19 + (longlong)iVar16 * 8) = CONCAT44(uStack_350,local_354);
                *(uint *)(lVar25 + 0x8c) = *(uint *)(lVar25 + 0x8c) | 0x200000;
                *(uint *)(lVar25 + 0x8c) =
                     -(uint)((*(uint *)(param_1 + 0x18) & 0x300) != 0) & 0x400000 |
                     *(uint *)(lVar25 + 0x8c) & 0xffbfffff;
                FUN_142747330(param_5,local_3ac,lVar25);
                lVar25 = local_348;
                fVar27 = local_360;
                fVar28 = local_198;
                fVar29 = local_188;
              }
              local_3b0 = local_3b0 + 1;
              local_340 = local_340 + 1;
              lVar17 = local_338;
              uVar15 = local_3a8;
            } while (local_3b0 < *(int *)(param_1 + 0x5b0));
          }
        }
        local_3ac = iVar20 + 1;
        local_3a8 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        local_338 = lVar17 + 1;
      } while (local_3ac < (int)param_2[1]);
    }
    local_318 = param_1 + 0x5c8;
    uStack_310 = param_1;
    if ((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
        local_178 = (undefined4)local_318;
        uStack_174 = local_318._4_4_;
        uStack_170 = (undefined4)uStack_310;
        uStack_16c = uStack_310._4_4_;
        uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14235fc30(&local_178,uVar12);
      }
      else {
        plVar13 = (longlong *)FUN_142367530(local_f8,0,0xff);
        lVar17 = *plVar13;
        *(undefined4 *)(lVar17 + 0x10) = (undefined4)local_318;
        *(undefined4 *)(lVar17 + 0x14) = local_318._4_4_;
        *(undefined4 *)(lVar17 + 0x18) = (undefined4)uStack_310;
        *(undefined4 *)(lVar17 + 0x1c) = uStack_310._4_4_;
        lVar17 = *plVar13;
        lVar19 = plVar13[2];
        lVar25 = plVar13[1];
        lVar18 = *(longlong *)(lVar17 + 0x28);
        piVar1 = (int *)(lVar18 + 0x48);
        if (lVar18 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_330 = lVar18;
        FUN_141b731c0(lVar17,lVar25,(int)lVar19,1);
        if (lVar18 != 0) {
          LOCK();
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            FGraphEvent::Recycle(local_330);
          }
        }
      }
    }
    else {
      uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14235fc30(&local_318,uVar12);
    }
  }
  return;
}



// FUNCTION 14236c4e0 FUN_14236c4e0 body=167 status=ok
// SIG undefined FUN_14236c4e0(void)

float FUN_14236c4e0(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 0x568);
  fVar3 = *(float *)((longlong)param_1 + 0xa4) - *(float *)(param_2 + 0x550);
  fVar4 = *(float *)(param_1 + 0x15) - *(float *)(param_2 + 0x554);
  fVar5 = *(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x54c);
  fVar2 = (float)(**(code **)(*param_1 + 0x18))();
  fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  return (fVar2 * fVar1) / fVar3;
}



// FUNCTION 14236c590 GetDisplayGamma body=9 status=ok
// SIG undefined GetDisplayGamma(void)

undefined4 UEngine::GetDisplayGamma(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x704);
}



// FUNCTION 14236c5b0 GetHeight body=9 status=ok
// SIG undefined GetHeight(void)

undefined4 APVPBasePawn::GetHeight(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x700);
}



// FUNCTION 14236c5c0 FUN_14236c5c0 body=89 status=ok
// SIG undefined FUN_14236c5c0(void)

longlong FUN_14236c5c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = APlayerState::GetPrivateStaticClass();
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



// FUNCTION 14236c620 FUN_14236c620 body=30 status=ok
// SIG undefined FUN_14236c620(void)

void FUN_14236c620(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x440))();
                    /* WARNING: Could not recover jumptable at 0x00014236c637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x720))(plVar1);
  return;
}



// FUNCTION 14236c640 FUN_14236c640 body=81 status=ok
// SIG undefined FUN_14236c640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14236c640(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  uVar3 = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x4a8);
    uVar2 = *(undefined4 *)(lVar1 + 0x4b0);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 14236c6a0 FUN_14236c6a0 body=22 status=ok
// SIG undefined FUN_14236c6a0(void)

undefined4 FUN_14236c6a0(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    return *(undefined4 *)(param_1 + 0x198);
  }
  return *(undefined4 *)(param_1 + 400);
}



// FUNCTION 14236c6c0 FUN_14236c6c0 body=22 status=ok
// SIG undefined FUN_14236c6c0(void)

undefined4 FUN_14236c6c0(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    return *(undefined4 *)(param_1 + 0x194);
  }
  return *(undefined4 *)(param_1 + 0x18c);
}



// FUNCTION 14236c6e0 FUN_14236c6e0 body=232 status=ok
// SIG undefined FUN_14236c6e0(void)

void FUN_14236c6e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af0660) && (_Init_thread_header(&DAT_146af0660), DAT_146af0660 == -1))
  {
    uVar1 = AAfrPlayerState::GetPrivateStaticClass();
    AAfrPlayerState::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bEnabled",1);
    DAT_146af0658 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af0660);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af0658 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af0658 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af0658 + 0x30));
  }
  return;
}



// FUNCTION 14236c7d0 FUN_14236c7d0 body=232 status=ok
// SIG undefined FUN_14236c7d0(void)

void FUN_14236c7d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14238b980();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af05e8) && (_Init_thread_header(&DAT_146af05e8), DAT_146af05e8 == -1))
  {
    uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
    UUGStartScreenUW::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ChildActor",1);
    DAT_146af05e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146af05e8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146af05e0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146af05e0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146af05e0 + 0x30));
  }
  return;
}



// FUNCTION 14236c8c0 FUN_14236c8c0 body=33 status=ok
// SIG undefined FUN_14236c8c0(void)

undefined8 FUN_14236c8c0(longlong param_1,undefined8 param_2)

{
  FLinearColor::FLinearColor(param_2,param_1 + 0x2e8);
  return param_2;
}



// FUNCTION 14236c8f0 FUN_14236c8f0 body=130 status=ok
// SIG undefined FUN_14236c8f0(void)

undefined8 FUN_14236c8f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar1 = AActor::GetLevel();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xc0) != 0)) {
      lVar2 = FUN_14256ac50();
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) ||
         (*(longlong *)(lVar1 + 0x1f0) != 0)) {
        local_18 = *(undefined4 *)(param_1 + 0x2d0);
        uStack_14 = *(undefined4 *)(param_1 + 0x2d4);
        uStack_10 = *(undefined4 *)(param_1 + 0x2d8);
        uStack_c = *(undefined4 *)(param_1 + 0x2dc);
        uVar3 = UMapBuildDataRegistry::GetLightBuildData(local_18,&local_18);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14236c980 FUN_14236c980 body=165 status=ok
// SIG undefined FUN_14236c980(void)

float * FUN_14236c980(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  param_2[3] = 0.0;
  fVar5 = fVar2 * 0.0 - fVar3 * 0.0;
  fVar6 = fVar3 * 1.0 - fVar1 * 0.0;
  fVar7 = fVar1 * 0.0 - fVar2 * 1.0;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  param_2[2] = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + 0.0) * -2097152.0;
  *param_2 = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + 1.0) * -2097152.0;
  param_2[1] = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + 0.0) * -2097152.0;
  return param_2;
}



// FUNCTION 14236ca30 FUN_14236ca30 body=113 status=ok
// SIG undefined FUN_14236ca30(void)

undefined8 * FUN_14236ca30(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x166,L"Pure virtual not implemented (%s)",L"ULightComponent::GetPosition");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x166,L"Pure virtual not implemented (%s)",L"ULightComponent::GetPosition");
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14236cae0 FUN_14236cae0 body=215 status=ok
// SIG undefined FUN_14236cae0(void)

float * FUN_14236cae0(longlong param_1,float *param_2,float *param_3)

{
  undefined8 local_18;
  float local_10;
  
  if (*(float *)(param_1 + 0x1cc) * *(float *)(param_1 + 0x1cc) +
      *(float *)(param_1 + 0x1d0) * *(float *)(param_1 + 0x1d0) +
      *(float *)(param_1 + 0x1d4) * *(float *)(param_1 + 0x1d4) <= 0.0) {
    local_10 = *(float *)(param_1 + 0x50);
    local_18 = CONCAT44(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x30));
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x1cc);
    local_10 = *(float *)(param_1 + 0x1d4);
  }
  *param_2 = *param_3 - (float)local_18 * 2097152.0;
  param_2[1] = param_3[1] - (float)((ulonglong)local_18 >> 0x20) * 2097152.0;
  param_2[2] = param_3[2] - local_10 * 2097152.0;
  return param_2;
}



// FUNCTION 14236cc30 FUN_14236cc30 body=88 status=ok
// SIG undefined FUN_14236cc30(void)

undefined8 FUN_14236cc30(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x16b,L"Pure virtual not implemented (%s)",L"ULightComponent::GetLightType");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x16b,L"Pure virtual not implemented (%s)",L"ULightComponent::GetLightType");
  return 4;
}



// FUNCTION 14236ccb0 FUN_14236ccb0 body=115 status=ok
// SIG undefined FUN_14236ccb0(void)

undefined4 * FUN_14236ccb0(undefined8 param_1,undefined4 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x16d,L"Pure virtual not implemented (%s)",L"ULightComponent::GetLightmassSettings");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x16d,L"Pure virtual not implemented (%s)",L"ULightComponent::GetLightmassSettings");
  *param_2 = 0x3f800000;
  param_2[1] = 0x40000000;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14236cdf0 FUN_14236cdf0 body=99 status=ok
// SIG undefined FUN_14236cdf0(void)

undefined8 FUN_14236cdf0(longlong param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = 0;
  if (-1 < param_2) {
    iVar4 = 0;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x728)) {
      plVar2 = *(longlong **)(param_1 + 0x720);
      lVar3 = 0;
      do {
        iVar4 = iVar4 + *(int *)(*plVar2 + 0x4c);
        if (param_2 < iVar4) {
          uVar1 = *(undefined8 *)(*plVar2 + 0x10);
          *param_3 = iVar5;
          return uVar1;
        }
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x728));
    }
  }
  return 0;
}



// FUNCTION 14236ce60 FUN_14236ce60 body=202 status=ok
// SIG undefined FUN_14236ce60(void)

byte * FUN_14236ce60(longlong *param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  iVar4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (0 < iVar1) {
    do {
      lVar2 = (**(code **)(*param_1 + 0x560))(param_1,iVar4);
      if (lVar2 == 0) {
        lVar2 = UMaterial::GetDefaultMaterial(0);
      }
      pbVar3 = (byte *)FUN_1425920e0(lVar2,local_res8,param_3);
      iVar4 = iVar4 + 1;
      *param_2 = *param_2 | *pbVar3;
      param_2[1] = param_2[1] | pbVar3[1];
      param_2[2] = param_2[2] | pbVar3[2];
      param_2[3] = param_2[3] | pbVar3[3];
      param_2[4] = param_2[4] | pbVar3[4];
      param_2[5] = param_2[5] | pbVar3[5];
      param_2[6] = param_2[6] | pbVar3[6];
      param_2[7] = param_2[7] | pbVar3[7];
      iVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    } while (iVar4 < iVar1);
  }
  return param_2;
}



// FUNCTION 14236cf30 FUN_14236cf30 body=203 status=ok
// SIG undefined FUN_14236cf30(void)

longlong * FUN_14236cf30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x908))();
  iVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 < 1) {
    return param_2;
  }
  lVar1 = param_2[1];
  iVar3 = (int)lVar1 + iVar2;
  *(int *)(param_2 + 1) = iVar3;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)(int)lVar1 * 8),0,(longlong)iVar2 * 8)
  ;
  uVar6 = uVar5;
  if (0 < iVar2) {
    do {
      lVar1 = *param_2;
      uVar4 = (**(code **)(*param_1 + 0x560))(param_1,uVar6);
      *(undefined8 *)(lVar1 + uVar5 * 8) = uVar4;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  return param_2;
}



// FUNCTION 14236d050 FUN_14236d050 body=180 status=ok
// SIG undefined FUN_14236d050(void)

undefined8 FUN_14236d050(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x6f8) + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_1429a0270();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0xc0) != 0)) {
      lVar3 = FUN_14256ac50();
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) ||
         (*(longlong *)(lVar1 + 0x1f0) != 0)) {
        local_18 = *(undefined4 *)(param_1 + 0x30);
        uStack_14 = *(undefined4 *)(param_1 + 0x34);
        uStack_10 = *(undefined4 *)(param_1 + 0x38);
        uStack_c = *(undefined4 *)(param_1 + 0x3c);
        uVar4 = UMapBuildDataRegistry::GetMeshBuildData(local_18,&local_18);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14236d130 FUN_14236d130 body=7 status=ok
// SIG undefined FUN_14236d130(void)

undefined4 FUN_14236d130(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6f8);
}



// FUNCTION 14236d140 FUN_14236d140 body=530 status=ok
// SIG undefined FUN_14236d140(void)

int FUN_14236d140(longlong param_1,longlong param_2,int param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  
  lVar1 = DAT_146af0470;
  iVar8 = *(int *)(param_1 + 0x1dc);
  lVar7 = 0;
  if (param_4 != '\0') goto LAB_14236d20a;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_14236d1b8;
  }
  else {
LAB_14236d1b8:
    lVar5 = lVar7;
  }
  iVar8 = *(int *)(lVar5 + lVar1);
  if (*(int *)(lVar5 + lVar1) < 1) {
    iVar8 = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af05f8) && (_Init_thread_header(&DAT_146af05f8), DAT_146af05f8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146af05f0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.UnbuiltPreviewInGame");
    _Init_thread_footer(&DAT_146af05f8);
  }
  iVar4 = (**(code **)(*DAT_146af05f0 + 0x68))();
  if ((iVar4 == 0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x280))(), cVar2 == '\0')) {
    iVar8 = 0;
  }
LAB_14236d20a:
  iVar4 = iVar8;
  if (1 < *(int *)(*(longlong *)(param_2 + 0x10) + 8)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af0608) &&
       (_Init_thread_header(&DAT_146af0608), DAT_146af0608 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.Shadow.CSM.MaxCascades.SplitScreen");
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146af0600 = lVar7;
      _Init_thread_footer(&DAT_146af0608);
    }
    iVar4 = *(int *)(DAT_146af0600 + 4);
    if (iVar8 <= *(int *)(DAT_146af0600 + 4)) {
      iVar4 = iVar8;
    }
  }
  fVar9 = (float)FUN_1423698b0(param_1,param_2,param_4,param_3);
  iVar8 = 0;
  if (0.0 < fVar9) {
    iVar8 = iVar4;
  }
  if (iVar8 <= param_3) {
    param_3 = iVar8;
  }
  return param_3;
}



// FUNCTION 14236d360 FUN_14236d360 body=37 status=ok
// SIG undefined FUN_14236d360(void)

int FUN_14236d360(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_14236d140(param_1,param_2,*(undefined4 *)(param_2 + 0x388),param_3);
  return iVar1 + *(int *)(param_1 + 0x1a8);
}



// FUNCTION 14236d390 FUN_14236d390 body=282 status=ok
// SIG undefined FUN_14236d390(void)

void FUN_14236d390(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = *(undefined1 (*) [12])(param_1 + 0x100);
  *(undefined1 (*) [16])(param_2 + 2) = auVar4;
  uVar1 = *(uint *)(param_1 + 0x50);
  param_2[4] = CONCAT44(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x30)) ^
               0x8000000080000000;
  *(uint *)(param_2 + 5) = uVar1 ^ 0x80000000;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  param_2[7] = 0;
  *(ulonglong *)((longlong)param_2 + 0x2c) = CONCAT44(uVar3,uVar2) ^ 0x8000000080000000;
  *(uint *)((longlong)param_2 + 0x34) = uVar1 ^ 0x80000000;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x134);
  fVar5 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 500) * 0.008726646);
  *(float *)((longlong)param_2 + 0x44) = fVar5;
  fVar5 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x1f8) * 0.008726646);
  *(float *)(param_2 + 9) = fVar5;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  param_2[10] = DAT_146ac3d68;
  return;
}



// FUNCTION 14236d4b0 FUN_14236d4b0 body=302 status=ok
// SIG undefined FUN_14236d4b0(void)

void FUN_14236d4b0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c4);
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  *param_2 = *(undefined4 *)(param_1 + 0xa0);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1d0);
  uVar2 = *(undefined4 *)(param_1 + 0x104);
  uVar3 = *(undefined4 *)(param_1 + 0x108);
  param_2[4] = *(undefined4 *)(param_1 + 0x100);
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  param_2[7] = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  uVar6 = *(uint *)(param_1 + 0x50);
  param_2[0xe] = 0xc0000000;
  param_2[0xf] = 0x3f800000;
  *(ulonglong *)(param_2 + 8) = CONCAT44(uVar3,uVar2) ^ 0x8000000080000000;
  param_2[10] = uVar6 ^ 0x80000000;
  *(ulonglong *)(param_2 + 0xb) = CONCAT44(uVar5,uVar4);
  param_2[0xd] = uVar1;
  param_2[0x10] = *(undefined4 *)(param_1 + 0x134);
  param_2[0x11] = *(undefined4 *)(param_1 + 0x1d4);
  param_2[0x12] = *(undefined4 *)(param_1 + 0x1d8);
  param_2[0x13] = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined8 *)(param_2 + 0x14) = DAT_146ac3d68;
  return;
}



// FUNCTION 14236d600 GetWidgetOwnerActor body=8 status=ok
// SIG undefined GetWidgetOwnerActor(void)

undefined8 UUGPhysicalScreenUserWidget::GetWidgetOwnerActor(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



// FUNCTION 14236d610 FUN_14236d610 body=81 status=ok
// SIG undefined FUN_14236d610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14236d610(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  uVar3 = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x49c);
    uVar2 = *(undefined4 *)(lVar1 + 0x4a4);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 14236d670 FUN_14236d670 body=156 status=ok
// SIG undefined FUN_14236d670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14236d670(longlong *param_1,undefined8 *param_2,byte *param_3)

{
  float fVar1;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  if ((*param_3 & 2) == 0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  fVar1 = *(float *)(param_3 + 0x5c);
  if (fVar1 <= 0.0) {
    fVar1 = 0.125;
  }
  fVar1 = fVar1 + ABS(DAT_146531d04);
  local_20 = fVar1 * *(float *)(param_3 + 0x34);
  local_28 = CONCAT44(fVar1 * *(float *)(param_3 + 0x30),fVar1 * *(float *)(param_3 + 0x2c));
  local_10 = local_20;
  (**(code **)(*param_1 + 0x4f0))(local_28,fVar1 * *(float *)(param_3 + 0x30),&local_28);
  return param_2;
}



// FUNCTION 14236d710 FUN_14236d710 body=1490 status=ok
// SIG undefined FUN_14236d710(void)

undefined8 FUN_14236d710(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  float fStack_174;
  float fStack_16c;
  float fStack_154;
  float fStack_14c;
  float local_e8;
  undefined8 uStack_dc;
  float fStack_cc;
  undefined1 local_b8 [176];
  
  uVar2 = param_2[1];
  *param_3 = *param_2 ^ 0x8000000080000000;
  *(uint *)(param_3 + 1) = (uint)uVar2 ^ 0x80000000;
  local_1a8 = *(float *)(param_1 + 0x30);
  local_1a4 = *(float *)(param_1 + 0x40);
  local_1a0 = *(float *)(param_1 + 0x50);
  fVar7 = local_1a4 * local_1a4 + local_1a8 * local_1a8 + local_1a0 * local_1a0;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_1a8 = DAT_1468b5d90;
      local_1a0 = DAT_1468b5d98;
      local_1a4 = DAT_1468b5d94;
    }
    else {
      auVar15 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar4 = auVar15._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar7 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar7 * 0.5 * fVar4 * fVar4);
      local_1a8 = local_1a8 * fVar4;
      local_1a4 = local_1a4 * fVar4;
      local_1a0 = local_1a0 * fVar4;
    }
  }
  pfVar3 = (float *)FVector::Rotation(&local_1a8,local_b8);
  uVar5 = __libm_sse2_sincosf_(pfVar3[2] * 0.017453292);
  local_198 = (float)((ulonglong)uVar5 >> 0x20);
  fVar7 = (float)uVar5;
  fVar4 = -fVar7;
  local_e8 = 0.0;
  uStack_dc = 0;
  fStack_cc = 0.0;
  fStack_194 = fVar7;
  fStack_190 = fVar7;
  fStack_18c = fVar7;
  uVar5 = __libm_sse2_sincosf_(*pfVar3 * 0.017453292);
  fVar19 = (float)((ulonglong)uVar5 >> 0x20);
  fVar17 = (float)uVar5;
  fVar16 = -fVar17;
  fStack_174 = 0.0;
  fStack_16c = 0.0;
  fStack_154 = 0.0;
  fStack_14c = 0.0;
  uVar5 = __libm_sse2_sincosf_(pfVar3[1] * 0.017453292);
  fVar9 = (float)((ulonglong)uVar5 >> 0x20);
  fVar8 = (float)uVar5;
  fVar6 = -fVar8;
  fVar20 = fVar6 * 0.0 + fVar9 * fVar19 + fVar17 * 0.0 + 0.0;
  fVar21 = fVar6 * 1.0 + fVar9 * fStack_174 + fStack_154 * 0.0 + 0.0;
  fVar22 = fVar6 * 0.0 + fVar9 * fVar16 + fVar19 * 0.0 + 0.0;
  fVar23 = fVar6 * 0.0 + fVar9 * fStack_16c + fStack_14c * 0.0 + 0.0;
  fVar11 = fVar9 * 0.0 + fVar8 * fVar19 + fVar17 * 0.0 + 0.0;
  fVar12 = fVar9 * 1.0 + fVar8 * fStack_174 + fStack_154 * 0.0 + 0.0;
  fVar13 = fVar9 * 0.0 + fVar8 * fVar16 + fVar19 * 0.0 + 0.0;
  fVar14 = fVar9 * 0.0 + fVar8 * fStack_16c + fStack_14c * 0.0 + 0.0;
  fVar8 = fVar19 * 0.0 + 0.0 + fVar17 * 1.0 + 0.0;
  fVar9 = fStack_174 * 0.0 + 0.0 + fStack_154 * 1.0 + 0.0;
  fVar6 = fVar16 * 0.0 + 0.0 + fVar19 * 1.0 + 0.0;
  fVar10 = fStack_16c * 0.0 + 0.0 + fStack_14c * 1.0 + 0.0;
  fVar17 = fVar19 * 0.0 + 0.0 + fVar17 * 0.0 + 0.0;
  fVar18 = fStack_174 * 0.0 + 0.0 + fStack_154 * 0.0 + 0.0;
  fVar19 = fVar16 * 0.0 + 0.0 + fVar19 * 0.0 + 0.0;
  fVar16 = fStack_16c * 0.0 + 0.0 + fStack_14c * 0.0 + 1.0;
  *(float *)(param_3 + 2) =
       fVar21 * local_e8 + fVar20 * 1.0 + fVar22 * uStack_dc._4_4_ + fVar23 * 0.0;
  *(float *)((longlong)param_3 + 0x14) =
       fVar21 * local_198 + fVar20 * 0.0 + fVar22 * fVar4 + fVar23 * 0.0;
  *(float *)(param_3 + 3) = fVar21 * fVar7 + fVar20 * 0.0 + fVar22 * local_198 + fVar23 * 0.0;
  *(float *)((longlong)param_3 + 0x1c) =
       fVar21 * (float)uStack_dc + fVar20 * 0.0 + fVar22 * fStack_cc + fVar23 * 1.0;
  *(float *)(param_3 + 4) =
       fVar12 * local_e8 + fVar11 * 1.0 + fVar13 * uStack_dc._4_4_ + fVar14 * 0.0;
  *(float *)((longlong)param_3 + 0x24) =
       fVar12 * local_198 + fVar11 * 0.0 + fVar13 * fVar4 + fVar14 * 0.0;
  *(float *)(param_3 + 5) = fVar12 * fVar7 + fVar11 * 0.0 + fVar13 * local_198 + fVar14 * 0.0;
  *(float *)((longlong)param_3 + 0x2c) =
       fVar12 * (float)uStack_dc + fVar11 * 0.0 + fVar13 * fStack_cc + fVar14 * 1.0;
  *(float *)(param_3 + 6) = fVar9 * local_e8 + fVar8 * 1.0 + fVar6 * uStack_dc._4_4_ + fVar10 * 0.0;
  *(float *)((longlong)param_3 + 0x34) =
       fVar9 * local_198 + fVar8 * 0.0 + fVar6 * fVar4 + fVar10 * 0.0;
  *(float *)(param_3 + 7) = fVar9 * fVar7 + fVar8 * 0.0 + fVar6 * local_198 + fVar10 * 0.0;
  *(float *)((longlong)param_3 + 0x3c) =
       fVar9 * (float)uStack_dc + fVar8 * 0.0 + fVar6 * fStack_cc + fVar10 * 1.0;
  *(float *)(param_3 + 8) =
       fVar18 * local_e8 + fVar17 * 1.0 + fVar19 * uStack_dc._4_4_ + fVar16 * 0.0;
  *(float *)((longlong)param_3 + 0x44) =
       fVar18 * local_198 + fVar17 * 0.0 + fVar19 * fVar4 + fVar16 * 0.0;
  *(float *)(param_3 + 9) = fVar18 * fVar7 + fVar17 * 0.0 + fVar19 * local_198 + fVar16 * 0.0;
  *(float *)((longlong)param_3 + 0x4c) =
       fVar18 * (float)uStack_dc + fVar17 * 0.0 + fVar19 * fStack_cc + fVar16 * 1.0;
  fVar7 = *(float *)(param_2 + 3);
  param_3[10] = CONCAT44(1.0 / fVar7,0x3f800000);
  *(float *)(param_3 + 0xb) = 1.0 / fVar7;
  *(undefined8 *)((longlong)param_3 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_3 + 100) = 0;
  fVar4 = DAT_1468b5d98;
  fVar7 = DAT_1468b5d94;
  fStack_18c = (float)*(undefined8 *)((longlong)param_2 + 0xc);
  uStack_188 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20);
  uVar2 = param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(float *)(param_3 + 0xd) = DAT_1468b5d90;
  *(float *)((longlong)param_3 + 0x6c) = fVar7;
  *(float *)(param_3 + 0xe) = fVar4;
  *(float *)((longlong)param_3 + 0x74) = fStack_18c;
  *(undefined4 *)(param_3 + 0x14) = 0xc9800000;
  param_3[0xf] = CONCAT44(uVar1,uStack_188);
  *(int *)(param_3 + 0x10) = (int)uVar2;
  *(undefined4 *)(param_3 + 0x12) = 0;
  *(undefined4 *)((longlong)param_3 + 0x94) = 0;
  *(undefined4 *)(param_3 + 0x13) = 0;
  *(undefined4 *)((longlong)param_3 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_3 + 0xa4) = 0x47000000;
  return CONCAT71((uint7)(uint3)((uint)(int)uVar2 >> 8),1);
}



// FUNCTION 14236dcf0 FUN_14236dcf0 body=1958 status=ok
// SIG undefined FUN_14236dcf0(void)

undefined8 FUN_14236dcf0(longlong *param_1,float *param_2,ulonglong *param_3)

{
  longlong lVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  float local_198;
  undefined1 auStack_194 [12];
  float fStack_184;
  float fStack_17c;
  float fStack_164;
  float fStack_15c;
  float local_f8;
  undefined8 uStack_ec;
  float fStack_dc;
  undefined1 local_c8 [176];
  
  (**(code **)(*param_1 + 0x108))(param_1,&local_1c8,param_2);
  local_1d8 = *param_2 - local_1c8;
  local_1d4 = param_2[1] - local_1c4;
  local_1d0 = param_2[2] - local_1c0;
  local_198 = 1.0;
  fVar16 = local_1d4 * local_1d4 + local_1d8 * local_1d8 + local_1d0 * local_1d0;
  fVar18 = SQRT(fVar16);
  fVar17 = SQRT(param_2[3] * param_2[3] + param_2[4] * param_2[4] + param_2[5] * param_2[5]);
  if (fVar17 < fVar18) {
    fVar4 = (fVar18 - fVar17) * (fVar17 + fVar18);
    auVar13 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar12 = auVar13._0_4_;
    auStack_194 = auVar13._4_12_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar4 * 0.5 * fVar12 * fVar12);
    local_198 = (fVar12 + fVar12 * (0.5 - fVar4 * 0.5 * fVar12 * fVar12)) * fVar17;
    if (1.0 <= local_198) {
      local_198 = 1.0;
    }
  }
  if (fVar18 <= fVar17 * 1.1) {
    fVar18 = local_1d8;
    fVar4 = local_1d4;
    fVar12 = local_1d0;
    if ((fVar16 != 1.0) &&
       (fVar18 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, fVar12 = DAT_1468b5d98, 1e-08 <= fVar16)) {
      auVar13 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      fVar12 = auVar13._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar16 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar16 * 0.5 * fVar12 * fVar12);
      fVar18 = local_1d8 * fVar12;
      fVar4 = local_1d4 * fVar12;
      fVar12 = local_1d0 * fVar12;
    }
    local_1d8 = fVar18 * fVar17 * 1.1;
    local_1d4 = fVar4 * fVar17 * 1.1;
    local_1d0 = fVar12 * fVar17 * 1.1;
    local_1c8 = *param_2 - local_1d8;
    local_1c4 = param_2[1] - local_1d4;
    local_198 = 1.0;
    local_1c0 = param_2[2] - local_1d0;
    fVar18 = fVar17 * 1.1;
  }
  *param_3 = CONCAT44(local_1c4,local_1c8) ^ 0x8000000080000000;
  fVar18 = 1.0 / fVar18;
  local_1d8 = local_1d8 * fVar18;
  *(float *)(param_3 + 1) = -local_1c0;
  local_1d4 = local_1d4 * fVar18;
  local_1d0 = local_1d0 * fVar18;
  pfVar2 = (float *)FVector::Rotation(&local_1d8,local_c8);
  uVar3 = __libm_sse2_sincosf_(pfVar2[2] * 0.017453292);
  local_1b8 = (float)((ulonglong)uVar3 >> 0x20);
  fVar18 = (float)uVar3;
  fVar16 = -fVar18;
  local_f8 = 0.0;
  uStack_ec = 0;
  fStack_dc = 0.0;
  fStack_1b4 = fVar18;
  fStack_1b0 = fVar18;
  fStack_1ac = fVar18;
  uVar3 = __libm_sse2_sincosf_(*pfVar2 * 0.017453292);
  fVar12 = (float)((ulonglong)uVar3 >> 0x20);
  fVar17 = (float)uVar3;
  fVar14 = -fVar17;
  fStack_184 = 0.0;
  fStack_17c = 0.0;
  fStack_164 = 0.0;
  fStack_15c = 0.0;
  uVar3 = __libm_sse2_sincosf_(pfVar2[1] * 0.017453292);
  fVar6 = (float)((ulonglong)uVar3 >> 0x20);
  fVar4 = (float)uVar3;
  fVar5 = -fVar4;
  fVar19 = fVar5 * 0.0 + fVar6 * fVar12 + fVar17 * 0.0 + 0.0;
  fVar20 = fVar5 * 1.0 + fVar6 * fStack_184 + fStack_164 * 0.0 + 0.0;
  fVar21 = fVar5 * 0.0 + fVar6 * fVar14 + fVar12 * 0.0 + 0.0;
  fVar22 = fVar5 * 0.0 + fVar6 * fStack_17c + fStack_15c * 0.0 + 0.0;
  fVar8 = fVar6 * 0.0 + fVar4 * fVar12 + fVar17 * 0.0 + 0.0;
  fVar9 = fVar6 * 1.0 + fVar4 * fStack_184 + fStack_164 * 0.0 + 0.0;
  fVar10 = fVar6 * 0.0 + fVar4 * fVar14 + fVar12 * 0.0 + 0.0;
  fVar11 = fVar6 * 0.0 + fVar4 * fStack_17c + fStack_15c * 0.0 + 0.0;
  fVar4 = fVar12 * 0.0 + 0.0 + fVar17 * 1.0 + 0.0;
  fVar6 = fStack_184 * 0.0 + 0.0 + fStack_164 * 1.0 + 0.0;
  fVar5 = fVar14 * 0.0 + 0.0 + fVar12 * 1.0 + 0.0;
  fVar7 = fStack_17c * 0.0 + 0.0 + fStack_15c * 1.0 + 0.0;
  fVar17 = fVar12 * 0.0 + 0.0 + fVar17 * 0.0 + 0.0;
  fVar15 = fStack_184 * 0.0 + 0.0 + fStack_164 * 0.0 + 0.0;
  fVar12 = fVar14 * 0.0 + 0.0 + fVar12 * 0.0 + 0.0;
  fVar14 = fStack_17c * 0.0 + 0.0 + fStack_15c * 0.0 + 1.0;
  *(float *)(param_3 + 2) =
       fVar20 * local_f8 + fVar19 * 1.0 + fVar21 * uStack_ec._4_4_ + fVar22 * 0.0;
  *(float *)((longlong)param_3 + 0x14) =
       fVar20 * local_1b8 + fVar19 * 0.0 + fVar21 * fVar16 + fVar22 * 0.0;
  *(float *)(param_3 + 3) = fVar20 * fVar18 + fVar19 * 0.0 + fVar21 * local_1b8 + fVar22 * 0.0;
  *(float *)((longlong)param_3 + 0x1c) =
       fVar20 * (float)uStack_ec + fVar19 * 0.0 + fVar21 * fStack_dc + fVar22 * 1.0;
  *(float *)(param_3 + 4) = fVar9 * local_f8 + fVar8 * 1.0 + fVar10 * uStack_ec._4_4_ + fVar11 * 0.0
  ;
  *(float *)((longlong)param_3 + 0x24) =
       fVar9 * local_1b8 + fVar8 * 0.0 + fVar10 * fVar16 + fVar11 * 0.0;
  *(float *)(param_3 + 5) = fVar9 * fVar18 + fVar8 * 0.0 + fVar10 * local_1b8 + fVar11 * 0.0;
  *(float *)((longlong)param_3 + 0x2c) =
       fVar9 * (float)uStack_ec + fVar8 * 0.0 + fVar10 * fStack_dc + fVar11 * 1.0;
  *(float *)(param_3 + 6) = fVar6 * local_f8 + fVar4 * 1.0 + fVar5 * uStack_ec._4_4_ + fVar7 * 0.0;
  *(float *)((longlong)param_3 + 0x34) =
       fVar6 * local_1b8 + fVar4 * 0.0 + fVar5 * fVar16 + fVar7 * 0.0;
  *(float *)(param_3 + 7) = fVar6 * fVar18 + fVar4 * 0.0 + fVar5 * local_1b8 + fVar7 * 0.0;
  *(float *)((longlong)param_3 + 0x3c) =
       fVar6 * (float)uStack_ec + fVar4 * 0.0 + fVar5 * fStack_dc + fVar7 * 1.0;
  *(float *)(param_3 + 8) =
       fVar15 * local_f8 + fVar17 * 1.0 + fVar12 * uStack_ec._4_4_ + fVar14 * 0.0;
  *(float *)((longlong)param_3 + 0x44) =
       fVar15 * local_1b8 + fVar17 * 0.0 + fVar12 * fVar16 + fVar14 * 0.0;
  *(float *)(param_3 + 9) = fVar15 * fVar18 + fVar17 * 0.0 + fVar12 * local_1b8 + fVar14 * 0.0;
  *(float *)((longlong)param_3 + 0x4c) =
       fVar15 * (float)uStack_ec + fVar17 * 0.0 + fVar12 * fStack_dc + fVar14 * 1.0;
  param_3[10] = CONCAT44(1.0 / local_198,0x3f800000);
  *(float *)(param_3 + 0xb) = 1.0 / local_198;
  *(undefined8 *)((longlong)param_3 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_3 + 100) = 0;
  fVar18 = param_2[2];
  fVar16 = param_2[1];
  fVar4 = param_2[5];
  fStack_1ac = (float)*(undefined8 *)(param_2 + 3);
  uStack_1a8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
  fVar17 = param_2[6];
  *(float *)(param_3 + 0xd) = *param_2 - local_1c8;
  *(float *)((longlong)param_3 + 0x6c) = fVar16 - local_1c4;
  *(float *)(param_3 + 0xe) = fVar18 - local_1c0;
  *(float *)((longlong)param_3 + 0x74) = fStack_1ac;
  *(undefined4 *)(param_3 + 0x14) = 0x3dcccccd;
  param_3[0xf] = CONCAT44(fVar4,uStack_1a8);
  *(float *)(param_3 + 0x10) = fVar17;
  param_3[0x12] = 0;
  param_3[0x13] = 0x3f800000;
  lVar1 = param_1[0x38];
  *(int *)((longlong)param_3 + 0xa4) = (int)lVar1;
  return CONCAT71((uint7)(uint3)((uint)(int)lVar1 >> 8),1);
}



// FUNCTION 14236e4c0 FUN_14236e4c0 body=204 status=ok
// SIG undefined FUN_14236e4c0(void)

undefined8 FUN_14236e4c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  fVar1 = *(float *)(param_1 + 0x1dc);
  local_3c = fVar1 * *(float *)(param_1 + 0x30) * 0.5;
  local_38 = fVar1 * *(float *)(param_1 + 0x40) * 0.5;
  local_34 = fVar1 * *(float *)(param_1 + 0x50) * 0.5;
  local_48 = local_3c + *(float *)(param_1 + 0xa0);
  local_3c = *(float *)(param_1 + 0xa0) - local_3c;
  local_44 = local_38 + *(float *)(param_1 + 0xa4);
  local_38 = *(float *)(param_1 + 0xa4) - local_38;
  local_40 = local_34 + *(float *)(param_1 + 0xa8);
  local_34 = *(float *)(param_1 + 0xa8) - local_34;
  FMath::ClosestPointOnSegment(param_2,param_3,&local_3c,&local_48);
  return param_2;
}



// FUNCTION 14236e590 FUN_14236e590 body=1027 status=ok
// SIG undefined FUN_14236e590(void)

undefined8 FUN_14236e590(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_d4;
  
  plVar11 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar15 = plVar11[0x1f];
  if (lVar15 == 0) {
    (**(code **)(*plVar11 + 0x368))();
    lVar15 = plVar11[0x1f];
  }
  fVar1 = *(float *)(lVar15 + 0x4c);
  plVar11 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar15 = plVar11[0x1f];
  if (lVar15 == 0) {
    (**(code **)(*plVar11 + 0x368))();
    lVar15 = plVar11[0x1f];
  }
  cVar4 = *(char *)(lVar15 + 0xac);
  if (cVar4 != '\0') {
    iVar18 = (int)param_2[7];
    *(int *)(param_2 + 7) = iVar18 + 1;
    if (*(int *)((longlong)param_2 + 0x3c) < iVar18 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 6,iVar18);
    }
    puVar12 = (undefined8 *)((longlong)iVar18 * 0x10 + param_2[6]);
    *puVar12 = 0;
    puVar12[1] = 0;
  }
  iVar18 = *(int *)(*(longlong *)(param_1 + 8) + 0xe8);
  iVar10 = (int)param_2[1] + iVar18;
  *(int *)(param_2 + 1) = iVar10;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
  }
  if (cVar4 != '\0') {
    lVar15 = param_2[6];
    iVar10 = *(int *)(lVar15 + 8) + iVar18;
    *(int *)(lVar15 + 8) = iVar10;
    if (*(int *)(lVar15 + 0xc) < iVar10) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
    }
  }
  if (0 < iVar18) {
    lVar16 = 0;
    lVar15 = 0;
    lVar17 = 0;
    do {
      lVar13 = *param_2;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
      *(undefined8 *)(lVar17 + lVar13) = *(undefined8 *)(lVar9 + lVar15);
      *(undefined4 *)(lVar17 + 8 + lVar13) = *(undefined4 *)(lVar9 + 8 + lVar15);
      if (cVar4 != '\0') {
        *(undefined8 *)(*(longlong *)param_2[6] + lVar16 * 8) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xe0) + 0x30 + lVar15);
      }
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0xc;
      lVar15 = lVar15 + 0x40;
    } while (lVar16 < iVar18);
  }
  iVar18 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar18 * 8);
      lVar16 = *(longlong *)(lVar15 + 0x40);
      if ((((lVar16 != 0) && (*(int *)(lVar16 + 0x48) != 0)) &&
          (*(int *)(lVar15 + 0x54) <= *(int *)(*(longlong *)(param_1 + 8) + 0xe8))) &&
         (uVar14 = 0, *(int *)(lVar15 + 0x4c) != 0)) {
        iVar10 = 0;
        do {
          lVar13 = (longlong)(*(int *)(lVar15 + 0x48) + iVar10);
          lVar17 = *(longlong *)(lVar16 + 0x40);
          iVar5 = *(int *)(lVar17 + lVar13 * 4);
          iVar6 = *(int *)(lVar17 + 4 + lVar13 * 4);
          iVar7 = *(int *)(lVar17 + 8 + lVar13 * 4);
          if (fVar1 < 0.0) {
LAB_14236e8b2:
            iVar8 = (int)param_2[3];
            *(int *)(param_2 + 3) = iVar8 + 1;
            if (*(int *)((longlong)param_2 + 0x1c) < iVar8 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2 + 2,iVar8);
            }
            lVar17 = param_2[2];
            *(ulonglong *)(lVar17 + (longlong)iVar8 * 0xc) = CONCAT44(iVar6,iVar5);
            *(int *)(lVar17 + 8 + (longlong)iVar8 * 0xc) = iVar7;
            iVar5 = (int)param_2[5];
            *(int *)(param_2 + 5) = iVar5 + 1;
            if (*(int *)((longlong)param_2 + 0x2c) < iVar5 + 1) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 4,iVar5);
            }
            *(short *)(param_2[4] + (longlong)iVar5 * 2) = (short)iVar18;
          }
          else {
            lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
            lVar13 = (longlong)iVar5 * 0x40;
            uVar2 = *(undefined8 *)(lVar13 + lVar17);
            fVar19 = *(float *)(lVar13 + 8 + lVar17);
            lVar13 = (longlong)iVar6 * 0x40;
            uVar3 = *(undefined8 *)(lVar13 + lVar17);
            fVar22 = (float)uVar2;
            fVar24 = (float)uVar3 - fVar22;
            fVar20 = *(float *)(lVar13 + 8 + lVar17) - fVar19;
            fStack_d4 = (float)((ulonglong)uVar2 >> 0x20);
            fVar23 = (float)((ulonglong)uVar3 >> 0x20) - fStack_d4;
            lVar13 = (longlong)iVar7 * 0x40;
            uVar2 = *(undefined8 *)(lVar13 + lVar17);
            fStack_d4 = (float)((ulonglong)uVar2 >> 0x20) - fStack_d4;
            fVar22 = (float)uVar2 - fVar22;
            fVar19 = *(float *)(lVar13 + 8 + lVar17) - fVar19;
            fVar21 = fVar19 * fVar23 - fStack_d4 * fVar20;
            fVar19 = fVar22 * fVar20 - fVar19 * fVar24;
            fVar20 = fStack_d4 * fVar24 - fVar22 * fVar23;
            if (fVar1 < SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20) * 0.5)
            goto LAB_14236e8b2;
          }
          uVar14 = uVar14 + 1;
          iVar10 = iVar10 + 3;
        } while (uVar14 < *(uint *)(lVar15 + 0x4c));
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(param_1 + 0x38));
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  return 1;
}



// FUNCTION 14236e9a0 FUN_14236e9a0 body=57 status=ok
// SIG undefined FUN_14236e9a0(void)

void FUN_14236e9a0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_14238cd00(*(longlong *)(param_1 + 0x178));
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  FUN_1428cb8d0(lVar1);
  return;
}



// FUNCTION 14236e9e0 GetPlacementExtent body=74 status=ok
// SIG undefined GetPlacementExtent(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * ULightComponentBase::GetPlacementExtent(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x41c8000041c80000;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x41c80000;
  *(undefined4 *)(param_2 + 3) = 0x41480000;
  return param_2;
}



// FUNCTION 14236ea30 FUN_14236ea30 body=226 status=ok
// SIG undefined FUN_14236ea30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14236ea30(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_3 == '\x04') {
    plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    param_3 = *(char *)(lVar3 + 0x89);
    if (param_3 == '\0') goto LAB_14236ea8e;
  }
  else if (param_3 == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x1a8);
    *param_2 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  if (param_3 == '\x01') {
    *param_2 = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (param_3 == '\x02') {
    *(undefined8 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined4 *)param_2 = 0;
    return param_2;
  }
  if (param_3 == '\x03') {
    *(undefined4 *)(param_2 + 1) = 0x3f800000;
    *param_2 = 0;
    return param_2;
  }
LAB_14236ea8e:
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14236eb20 GetYPosRef body=8 status=ok
// SIG undefined GetYPosRef(void)

longlong FDisplayDebugManager::GetYPosRef(longlong param_1)

{
  return param_1 + 0x1ac;
}



// FUNCTION 14236eb50 FUN_14236eb50 body=42 status=ok
// SIG undefined FUN_14236eb50(void)

undefined4 FUN_14236eb50(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x798);
  }
  return 0;
}



// FUNCTION 14236eb80 FUN_14236eb80 body=125 status=ok
// SIG undefined FUN_14236eb80(void)

undefined8 FUN_14236eb80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  local_res8[0] = *(longlong *)(param_1 + 0x718);
  if (local_res8[0] != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      local_res8[0] = *(longlong *)(param_1 + 0x718);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    uVar2 = FTimerManager::FindTimer(uVar3,local_res8,0);
    uVar3 = FTimerManager::InternalGetTimerRemaining(uVar3,uVar2);
    return uVar3;
  }
  return 0x7f7fffff;
}



// FUNCTION 14236ec00 FUN_14236ec00 body=273 status=ok
// SIG undefined FUN_14236ec00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14236ec00(longlong param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  fVar16 = *(float *)(param_1 + 0x230) * *(float *)(param_1 + 0x70c);
  fVar9 = *(float *)(param_1 + 0x234) * *(float *)(param_1 + 0x710);
  fVar8 = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x714);
  uVar5 = *(uint *)(param_1 + 0x220);
  uVar6 = *(uint *)(param_1 + 0x224);
  uVar7 = *(uint *)(param_1 + 0x228);
  fVar10 = fVar2 + fVar2;
  fVar13 = fVar3 + fVar3;
  fVar17 = (fVar1 + fVar1) * fVar1;
  fVar11 = (fVar1 + fVar1) * fVar4;
  uVar12 = (uint)((fRam0000000146af03e4 - (fVar13 * fVar3 + fVar17)) * fVar9) & uRam0000000146af03f4
  ;
  uVar14 = (uint)((fRam0000000146af03e8 - (fVar10 * fVar2 + fVar17)) * fVar8) & uRam0000000146af03f8
  ;
  uVar15 = (uint)((fRam0000000146af03ec - (fVar17 + fVar17)) * 0.0) & uRam0000000146af03fc;
  *param_2 = (uint)((_DAT_146af03e0 - (fVar13 * fVar3 + fVar10 * fVar2)) * fVar16) & _DAT_146af03f0;
  param_2[1] = (uint)((fVar13 * fVar4 + fVar10 * fVar1) * fVar16);
  param_2[2] = (uint)(fVar16 * (fVar13 * fVar1 - fVar10 * fVar4));
  param_2[3] = uVar15;
  param_2[4] = (uint)(fVar9 * (fVar10 * fVar1 - fVar13 * fVar4));
  param_2[5] = uVar12;
  param_2[6] = (uint)((fVar11 + fVar13 * fVar2) * fVar9);
  param_2[7] = uVar15;
  param_2[8] = (uint)((fVar10 * fVar4 + fVar13 * fVar1) * fVar8);
  param_2[9] = (uint)(fVar8 * (fVar13 * fVar2 - fVar11));
  param_2[10] = uVar14;
  param_2[0xb] = uVar15;
  fVar1 = fRam0000000146af03ec;
  param_2[0xc] = uVar5;
  param_2[0xd] = uVar6;
  param_2[0xe] = uVar7;
  param_2[0xf] = (uint)fVar1;
  return param_2;
}



// FUNCTION 14236ed40 FUN_14236ed40 body=171 status=ok
// SIG undefined FUN_14236ed40(void)

bool FUN_14236ed40(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  *param_2 = *param_4;
  param_2[1] = param_4[1];
  param_2[2] = param_4[2];
  param_2[3] = param_4[3];
  local_30 = *(undefined4 *)(param_3 + 0x8e4);
  local_28 = *(undefined8 *)(param_1 + 0xa0);
  local_38 = *(undefined8 *)(param_3 + 0x8dc);
  local_20 = *(undefined4 *)(param_1 + 0xa8);
  local_10 = local_20;
  iVar1 = FMath::ComputeProjectedSphereScissorRect
                    (param_2,&local_28,*(undefined4 *)(param_1 + 0x1c0),&local_38,param_3 + 0x510,
                     param_3 + 0x390);
  return iVar1 == 1;
}



// FUNCTION 14236edf0 FUN_14236edf0 body=721 status=ok
// SIG undefined FUN_14236edf0(void)

undefined8
FUN_14236edf0(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,undefined1 param_5,
             float *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_88;
  undefined4 local_80;
  
  iVar2 = FUN_14236d140(param_1,param_3,*(undefined4 *)(param_3 + 0x388),param_5);
  cVar1 = (**(code **)(*param_1 + 0xe8))
                    (param_1,param_3,*(undefined4 *)(param_3 + 0x1a38),param_5,
                     *(undefined4 *)(param_3 + 0x388));
  uVar3 = (**(code **)(*param_1 + 0xa8))(param_1,param_3,param_5);
  uVar6 = (uint)(cVar1 != '\0') + iVar2;
  if (uVar6 <= uVar3) {
    uVar6 = uVar3;
  }
  bVar7 = param_4 == -1;
  if (bVar7) {
    param_4 = iVar2;
  }
  fVar8 = (float)FUN_14236f8e0(param_1,param_3,param_4,param_5,bVar7);
  fVar9 = (float)FUN_14236f8e0(param_1,param_3,param_4 + 1,param_5,bVar7);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af0648) {
    _Init_thread_header(&DAT_146af0648);
    if (DAT_146af0648 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shadow.CSM.TransitionScale");
      lVar5 = 0;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4);
      }
      DAT_146af0640 = lVar5;
      _Init_thread_footer(&DAT_146af0648);
    }
  }
  fVar13 = *(float *)(DAT_146af0640 + 4);
  fVar12 = 0.0;
  if ((0.0 <= fVar13) && (fVar12 = fVar13, 2.0 <= fVar13)) {
    fVar12 = 2.0;
  }
  fVar12 = fVar12 * *(float *)((longlong)param_1 + 0x1e4);
  fVar10 = (fVar9 - fVar8) * fVar12;
  fVar13 = fVar9;
  if (param_4 < (int)(uVar6 - 1)) {
    fVar13 = fVar9 + fVar10;
  }
  if (param_6 != (float *)0x0) {
    param_6[3] = fVar10;
    param_6[2] = 0.0;
    if (param_4 != 0) {
      fVar10 = (float)FUN_14236f8e0(param_1,param_3,param_4 + -1,param_5,bVar7);
      fVar11 = (float)FUN_14236f8e0(param_1,param_3,param_4,param_5,bVar7);
      param_6[2] = (fVar11 - fVar10) * fVar12;
    }
    param_6[1] = fVar13;
    *param_6 = fVar8;
    param_6[4] = fVar9;
    param_6[5] = fVar13 - fVar9;
  }
  local_88 = *(undefined8 *)(param_3 + 0x8dc);
  local_80 = *(undefined4 *)(param_3 + 0x8e4);
  FUN_14236f0f0(param_1,param_2,param_3,&local_88,fVar8,fVar13,param_6);
  return param_2;
}



// FUNCTION 14236f0f0 FUN_14236f0f0 body=2016 status=ok
// SIG undefined FUN_14236f0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_14236f0f0(longlong param_1,float *param_2,longlong param_3,float *param_4,float param_5,
                     float param_6,longlong param_7)

{
  float fVar1;
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
  float fVar12;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  undefined8 local_110;
  float local_108;
  undefined8 local_104;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_140 = *(uint *)(param_1 + 0x30) ^ 0x80000000;
  local_138 = *(uint *)(param_1 + 0x50) ^ 0x80000000;
  local_13c = *(uint *)(param_1 + 0x40) ^ 0x80000000;
  fVar1 = 1.0 / *(float *)(param_3 + 0x940);
  fVar5 = *(float *)(param_3 + 0x954);
  if (1.0 < *(float *)(param_3 + 0x97c) || *(float *)(param_3 + 0x97c) == 1.0) {
    fVar2 = 0.7853982;
  }
  else {
    fVar2 = _guard_xfg_dispatch_icall_nop(fVar1);
  }
  local_188 = _guard_xfg_dispatch_icall_nop(fVar2);
  local_184 = local_188 * param_5;
  local_180 = local_188 * param_6;
  fVar2 = *(float *)(param_3 + 0xac0) * local_184;
  fVar3 = *(float *)(param_3 + 0xad0) * local_184;
  fVar4 = *(float *)(param_3 + 0xae0) * local_184;
  local_18c = 1.0 / (fVar1 * fVar5);
  fVar12 = *(float *)(param_3 + 0xae0) * local_180;
  fVar1 = local_18c * local_184;
  fVar10 = *(float *)(param_3 + 0xac0) * local_180;
  fVar11 = *(float *)(param_3 + 0xad0) * local_180;
  fVar5 = fVar1 * *(float *)(param_3 + 0xac4);
  fVar6 = fVar1 * *(float *)(param_3 + 0xae4);
  fVar1 = fVar1 * *(float *)(param_3 + 0xad4);
  fVar8 = local_18c * local_180;
  fVar7 = fVar8 * *(float *)(param_3 + 0xac4);
  fVar9 = fVar8 * *(float *)(param_3 + 0xae4);
  local_17c = *param_4;
  fVar8 = fVar8 * *(float *)(param_3 + 0xad4);
  local_1b4 = *(float *)(param_3 + 0xac8) * param_5 + local_17c;
  local_1b0 = *(float *)(param_3 + 0xad8) * param_5 + param_4[1];
  local_1b8 = *(float *)(param_3 + 0xae8) * param_5 + param_4[2];
  local_174 = local_1b4 + fVar2;
  local_194 = local_174 + fVar5;
  local_1ac = local_1b0 + fVar3;
  local_190 = local_1ac + fVar1;
  local_198 = local_1b8 + fVar4;
  local_178 = fVar6 + local_198;
  local_128 = CONCAT44(local_190,local_194);
  local_174 = local_174 - fVar5;
  local_1ac = local_1ac - fVar1;
  local_198 = local_198 - fVar6;
  local_11c = CONCAT44(local_1ac,local_174);
  local_1b4 = local_1b4 - fVar2;
  local_170 = fVar5 + local_1b4;
  local_1b0 = local_1b0 - fVar3;
  local_1b4 = local_1b4 - fVar5;
  local_16c = fVar1 + local_1b0;
  local_1b8 = local_1b8 - fVar4;
  local_1b0 = local_1b0 - fVar1;
  local_168 = fVar6 + local_1b8;
  local_1b8 = local_1b8 - fVar6;
  local_110 = CONCAT44(local_16c,local_170);
  local_104 = CONCAT44(local_1b0,local_1b4);
  fVar1 = *(float *)(param_3 + 0xad8) * param_6 + param_4[1];
  fVar4 = *(float *)(param_3 + 0xac8) * param_6 + *param_4;
  local_cc = *(float *)(param_3 + 0xae8) * param_6 + param_4[2];
  local_154 = fVar1 + fVar11;
  local_158 = fVar10 + fVar4;
  local_19c = fVar12 + local_cc;
  local_160 = fVar8 + local_154;
  local_164 = fVar7 + local_158;
  local_15c = fVar9 + local_19c;
  local_cc = local_cc - fVar12;
  local_158 = local_158 - fVar7;
  fVar1 = fVar1 - fVar11;
  local_f8 = CONCAT44(local_160,local_164);
  fVar4 = fVar4 - fVar10;
  local_19c = local_19c - fVar9;
  local_154 = local_154 - fVar8;
  local_1a8 = fVar1 - fVar8;
  fVar1 = fVar1 + fVar8;
  local_ec = CONCAT44(local_154,local_158);
  fVar2 = fVar4 + fVar7;
  fVar4 = fVar4 - fVar7;
  local_d8 = local_cc + fVar9;
  local_e0 = CONCAT44(fVar1,fVar2);
  local_cc = local_cc - fVar9;
  local_d4 = CONCAT44(local_1a8,fVar4);
  fVar5 = local_18c * local_188 * param_6;
  fVar3 = local_18c * local_188 * param_5;
  fVar5 = param_6 - (((fVar3 * fVar3 + local_184 * local_184) -
                     (fVar5 * fVar5 + local_180 * local_180)) * (0.5 / (param_6 - param_5)) +
                    (param_6 - param_5) * 0.5);
  if ((param_5 <= fVar5) && (param_5 = fVar5, param_6 <= fVar5)) {
    param_5 = param_6;
  }
  local_148 = param_5 * *(float *)(param_3 + 0xae8) + param_4[2];
  *(ulonglong *)param_2 =
       CONCAT44(param_5 * *(float *)(param_3 + 0xad8) + param_4[1],
                *(float *)(param_3 + 0xac8) * param_5 + local_17c);
  param_2[2] = local_148;
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = (fVar3 - local_190) * (fVar3 - local_190) + (fVar5 - local_194) * (fVar5 - local_194) +
          (fVar6 - local_178) * (fVar6 - local_178);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = (fVar3 - local_1ac) * (fVar3 - local_1ac) + (fVar5 - local_174) * (fVar5 - local_174) +
          (fVar6 - local_198) * (fVar6 - local_198);
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  fVar7 = (fVar3 - local_16c) * (fVar3 - local_16c) + (fVar5 - local_170) * (fVar5 - local_170) +
          (fVar6 - local_168) * (fVar6 - local_168);
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  fVar8 = (fVar3 - local_1b0) * (fVar3 - local_1b0) + (fVar5 - local_1b4) * (fVar5 - local_1b4) +
          (fVar6 - local_1b8) * (fVar6 - local_1b8);
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  fVar7 = (fVar3 - local_160) * (fVar3 - local_160) + (fVar5 - local_164) * (fVar5 - local_164) +
          (fVar6 - local_15c) * (fVar6 - local_15c);
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  fVar2 = fVar5 - fVar2;
  fVar4 = fVar5 - fVar4;
  fVar5 = (fVar3 - local_154) * (fVar3 - local_154) + (fVar5 - local_158) * (fVar5 - local_158) +
          (fVar6 - local_19c) * (fVar6 - local_19c);
  if (fVar5 <= fVar7) {
    fVar5 = fVar7;
  }
  fVar1 = fVar3 - fVar1;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + (fVar6 - local_d8) * (fVar6 - local_d8);
  if (fVar1 <= fVar5) {
    fVar1 = fVar5;
  }
  fVar5 = (fVar3 - local_1a8) * (fVar3 - local_1a8) + fVar4 * fVar4 +
          (fVar6 - local_cc) * (fVar6 - local_cc);
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar5 = SQRT(fVar5);
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  param_2[3] = fVar5;
  if (param_7 != 0) {
    local_1d0 = param_7 + 0x140;
    local_1c8 = param_7 + 0x150;
    local_1d8 = param_7 + 0x20;
    local_120 = local_178;
    local_114 = local_198;
    local_108 = local_168;
    local_fc = local_1b8;
    local_f0 = local_15c;
    local_e4 = local_19c;
    FUN_142363c60(param_1,*(undefined1 *)(param_3 + 0x11b4),&local_128,&local_140);
  }
  return param_2;
}



// FUNCTION 14236f8e0 FUN_14236f8e0 body=230 status=ok
// SIG undefined FUN_14236f8e0(void)

undefined8 FUN_14236f8e0(longlong param_1,longlong param_2,uint param_3,char param_4,char param_5)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  uVar1 = FUN_14236d140(param_1,param_2,*(undefined4 *)(param_2 + 0x388));
  fVar2 = (float)FUN_1423698b0(param_1,param_2,param_4,*(undefined4 *)(param_2 + 0x388));
  if (param_4 == '\0') {
    uVar4 = 0x40800000;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x1e0);
  }
  if (uVar1 < param_3) {
    if (param_5 == '\0') {
      uVar3 = FDirectionalLightSceneProxy::ComputeAccumulatedScale
                        (uVar4,param_3 - uVar1,*(undefined4 *)(param_1 + 0x1a8));
      uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar2 = (float)uVar3 * (*(float *)(param_1 + 0x1a4) - fVar2) + fVar2;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x1f0);
      uVar4 = 0;
    }
  }
  else {
    uVar3 = FDirectionalLightSceneProxy::ComputeAccumulatedScale(uVar4,param_3,uVar1);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar2 = (float)uVar3 * (fVar2 - *(float *)(param_2 + 0x11b0)) + *(float *)(param_2 + 0x11b0);
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 14236f9d0 FUN_14236f9d0 body=1765 status=ok
// SIG undefined FUN_14236f9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14236f9d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_160;
  longlong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  int *local_138;
  uint local_130;
  uint local_12c;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_58;
  ulonglong uVar16;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar11 = *(longlong *)(param_1 + 0x6f8);
  if (lVar11 != 0) {
    uVar9 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (undefined1 *)0x0;
    local_60 = 0;
    local_158 = param_1;
    local_c8 = param_3;
    if (0 < *(int *)(param_1 + 0x718)) {
      local_100 = &local_150;
      uVar16 = uVar9;
      uVar17 = uVar9;
      do {
        uVar3 = *(ushort *)(uVar17 + *(longlong *)(param_1 + 0x710));
        local_150 = CONCAT44(local_150._4_4_,(uint)uVar3);
        local_108 = (ulonglong)uVar3 * 0x40 + *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x28) +
                    0x14;
        FUN_14085ab10(&local_a8,&local_128,&local_108,0);
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar17 = uVar17 + 2;
      } while ((int)uVar15 < *(int *)(param_1 + 0x718));
      lVar11 = *(longlong *)(param_1 + 0x6f8);
    }
    local_138 = (int *)0x0;
    local_12c = 0;
    local_148 = 0;
    local_140 = 0;
    if (0 < *(int *)(lVar11 + 0x70)) {
      local_120 = 0;
      uVar16 = uVar9;
      uVar17 = uVar9;
      uVar14 = uVar9;
      do {
        uVar15 = 0;
        if (((int)uVar9 < 0) && (local_130 = 0, (int)uVar9 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_138,0);
          uVar15 = local_130;
        }
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
        ConditionalRehash(&local_a8,(int)local_a0 - local_74,0);
        uVar23 = (uint)uVar14;
        if (local_60 != 0) {
          puVar5 = local_70;
          if (local_68 != (undefined1 *)0x0) {
            puVar5 = local_68;
          }
          iVar13 = *(int *)(puVar5 + (longlong)(int)(local_60 - 1U & uVar23) * 4);
          do {
            iVar20 = iVar13;
            if (iVar20 == -1) goto LAB_14236fc30;
            iVar13 = *(int *)(local_a8 + 8 + (longlong)iVar20 * 0x10);
            param_1 = local_158;
          } while (*(uint *)(local_a8 + (longlong)iVar20 * 0x10) != uVar23);
          if (iVar20 != -1) {
            local_128 = CONCAT44(local_128._4_4_,iVar13);
            local_150 = CONCAT44(local_150._4_4_,iVar13);
            lVar11 = local_a8;
            piVar22 = local_138;
            uVar21 = local_12c;
            do {
              local_130 = uVar15 + 1;
              iVar10 = iVar13;
              iVar19 = iVar13;
              if ((int)uVar21 < (int)local_130) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_138,uVar15);
                lVar11 = local_a8;
                piVar22 = local_138;
                uVar21 = local_12c;
                iVar10 = (int)local_128;
                iVar19 = (int)local_150;
              }
              if (piVar22 + (int)uVar15 != (int *)0x0) {
                piVar22[(int)uVar15] = *(int *)(lVar11 + 4 + (longlong)iVar20 * 0x10);
                iVar10 = iVar19;
                lVar11 = local_a8;
              }
              do {
                iVar20 = iVar10;
                uVar15 = local_130;
                if (iVar13 == -1) {
                  uVar17 = local_140 >> 0x20;
                  param_1 = local_158;
                  goto LAB_14236fc30;
                }
                iVar13 = *(int *)(lVar11 + 8 + (longlong)iVar13 * 0x10);
                iVar10 = iVar13;
              } while (*(uint *)(lVar11 + (longlong)iVar20 * 0x10) != uVar23);
              local_128 = CONCAT44(local_128._4_4_,iVar13);
              local_150 = CONCAT44(local_150._4_4_,iVar13);
            } while( true );
          }
        }
LAB_14236fc30:
        if (uVar15 != 0) {
          lVar11 = *(longlong *)(*(longlong *)(local_158 + 0x6f8) + 0x68);
          uVar9 = 0;
          local_128 = lVar11;
          if (((int)uVar17 < 0) &&
             (local_140 = local_140 & 0xffffffff00000000, uVar9 = 0, (int)uVar17 != 0)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
            ResizeTo(&local_148,0);
            uVar9 = local_140 & 0xffffffff;
            uVar17 = local_140 >> 0x20;
            uVar16 = local_148;
          }
          if (0 < (int)uVar15) {
            local_150 = (ulonglong)uVar15;
            lVar11 = local_158;
            piVar22 = local_138;
            do {
              iVar13 = 0;
              lVar18 = (longlong)*piVar22 * 0x40 +
                       *(longlong *)(*(longlong *)(lVar11 + 0x6f8) + 0x28);
              uVar14 = uVar9;
              if (*(char *)(lVar18 + 0x36) != '\0') {
                do {
                  fVar24 = *(float *)(lVar11 + 0x210);
                  fVar29 = *(float *)(lVar11 + 0x214);
                  fVar1 = *(float *)(lVar11 + 0x218);
                  fVar2 = *(float *)(lVar11 + 0x21c);
                  iVar20 = (int)uVar14;
                  lVar7 = *(longlong *)(*(longlong *)(lVar11 + 0x6f8) + 0x58);
                  uVar15 = iVar20 + 1;
                  uVar9 = (ulonglong)uVar15;
                  local_140 = CONCAT44(local_140._4_4_,uVar15);
                  lVar6 = (longlong)
                          *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x6f8) + 0x38) +
                                  (longlong)(*(int *)(lVar18 + 0x10) + iVar13) * 0x18);
                  fVar28 = *(float *)(lVar7 + lVar6 * 0xc) * *(float *)(lVar11 + 0x230);
                  fVar30 = *(float *)(lVar7 + 4 + lVar6 * 0xc) * *(float *)(lVar11 + 0x234);
                  fVar31 = *(float *)(lVar7 + 8 + lVar6 * 0xc) * *(float *)(lVar11 + 0x238);
                  fVar25 = fVar31 * fVar29 - fVar30 * fVar1;
                  fVar26 = fVar28 * fVar1 - fVar31 * fVar24;
                  fVar27 = fVar30 * fVar24 - fVar28 * fVar29;
                  fVar25 = fVar25 + fVar25;
                  fVar26 = fVar26 + fVar26;
                  fVar27 = fVar27 + fVar27;
                  local_f8 = (fVar27 * fVar29 - fVar26 * fVar1) + fVar25 * fVar2 + fVar28 +
                             *(float *)(lVar11 + 0x220);
                  fStack_f4 = (fVar25 * fVar1 - fVar27 * fVar24) + fVar26 * fVar2 + fVar30 +
                              *(float *)(lVar11 + 0x224);
                  local_f0 = (fVar26 * fVar24 - fVar25 * fVar29) + fVar27 * fVar2 + fVar31 +
                             *(float *)(lVar11 + 0x228);
                  if ((int)uVar17 < (int)uVar15) {
                    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_148,uVar14);
                    uVar9 = local_140 & 0xffffffff;
                    uVar17 = local_140 >> 0x20;
                    uVar16 = local_148;
                    lVar11 = local_158;
                  }
                  iVar13 = iVar13 + 1;
                  *(ulonglong *)(uVar16 + (longlong)iVar20 * 0xc) = CONCAT44(fStack_f4,local_f8);
                  *(float *)(uVar16 + 8 + (longlong)iVar20 * 0xc) = local_f0;
                  uVar14 = uVar9;
                } while (iVar13 < (int)(uint)*(byte *)(lVar18 + 0x36));
              }
              piVar22 = piVar22 + 1;
              local_150 = local_150 - 1;
            } while (local_150 != 0);
            local_150 = 0;
            lVar11 = local_128;
          }
          FSphere::FSphere(&local_108,uVar16,uVar9);
          lVar18 = *(longlong *)(*(longlong *)(local_158 + 0x6f8) + 0x48);
          lVar7 = (longlong)*(int *)(local_120 + 0x18 + lVar11);
          lVar6 = (longlong)*(int *)(local_120 + 0x14 + lVar11);
          fVar24 = *(float *)(lVar18 + 4 + lVar7 * 0xc);
          fVar29 = *(float *)(lVar18 + lVar7 * 0xc);
          fVar1 = *(float *)(lVar18 + 8 + lVar7 * 0xc);
          plVar8 = *(longlong **)(local_120 + lVar11);
          fVar2 = *(float *)(lVar18 + 4 + lVar6 * 0xc);
          fVar25 = *(float *)(lVar18 + 8 + lVar6 * 0xc);
          fVar29 = SQRT(fVar29 * fVar29 + fVar24 * fVar24 + fVar1 * fVar1);
          fVar24 = *(float *)(lVar18 + lVar6 * 0xc);
          fVar24 = SQRT(fVar24 * fVar24 + fVar2 * fVar2 + fVar25 * fVar25);
          if (fVar24 <= fVar29) {
            fVar24 = fVar29;
          }
          fVar24 = DAT_146533de8 / fVar24;
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)UMaterial::GetDefaultMaterial(0);
          }
          uVar14 = 0;
          local_160 = 1;
          local_118 = 0;
          local_110 = 0;
          local_168 = DAT_1464c9c14;
          (**(code **)(*plVar8 + 0x2b8))(plVar8,&local_118,3,0);
          plVar8 = local_c8;
          uVar9 = uVar14;
          if (0 < (int)local_110) {
            do {
              lVar11 = *(longlong *)(local_118 + uVar9);
              if (lVar11 != 0) {
                lVar18 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  lVar18 = plVar8[1];
                  iVar13 = (int)lVar18 + 1;
                  *(int *)(plVar8 + 1) = iVar13;
                  if (*(int *)((longlong)plVar8 + 0xc) < iVar13) {
                    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar8);
                  }
                  plVar12 = (longlong *)((longlong)(int)lVar18 * 0x30 + *plVar8);
                  if (plVar12 == (longlong *)0x0) {
                    plVar12 = (longlong *)0x0;
                  }
                  else {
                    *plVar12 = 0;
                    plVar12[1] = 0;
                    plVar12[2] = 0;
                    plVar12[3] = 0;
                    *(undefined4 *)(plVar12 + 4) = 0;
                    *(undefined8 *)((longlong)plVar12 + 0x24) = 0x3f800000;
                  }
                  uStack_d8 = local_100._4_4_;
                  *plVar12 = lVar11;
                  local_b8 = local_100._4_4_;
                  *(undefined4 *)(plVar12 + 1) = (undefined4)local_108;
                  *(undefined4 *)((longlong)plVar12 + 0xc) = local_108._4_4_;
                  *(undefined4 *)(plVar12 + 2) = (undefined4)local_100;
                  *(undefined4 *)((longlong)plVar12 + 0x14) = local_100._4_4_;
                  uStack_d4 = local_100._4_4_;
                  local_e8 = (undefined4)local_108;
                  uStack_e4 = local_108._4_4_;
                  uStack_e0 = (undefined4)local_100;
                  uStack_dc = local_100._4_4_;
                  local_d0 = local_100._4_4_;
                  plVar12[3] = CONCAT44(local_100._4_4_,local_100._4_4_);
                  *(undefined4 *)(plVar12 + 4) = local_100._4_4_;
                  *(float *)((longlong)plVar12 + 0x24) = fVar24;
                }
              }
              uVar15 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar15;
              uVar9 = uVar9 + 8;
            } while ((int)uVar15 < (int)local_110);
            uVar17 = local_140 >> 0x20;
          }
          param_1 = local_158;
          if (local_118 != 0) {
            FMemory::Free();
            param_1 = local_158;
          }
        }
        uVar14 = (ulonglong)(uVar23 + 1);
        local_120 = local_120 + 0x50;
        uVar9 = (ulonglong)local_12c;
      } while ((int)(uVar23 + 1) < *(int *)(*(longlong *)(param_1 + 0x6f8) + 0x70));
      if (uVar16 != 0) {
        FMemory::Free(uVar16);
      }
      if (local_138 != (int *)0x0) {
        FMemory::Free(local_138);
      }
    }
    local_60 = 0;
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_a8);
  }
  return;
}



// FUNCTION 1423700c0 FUN_1423700c0 body=203 status=ok
// SIG undefined FUN_1423700c0(void)

void FUN_1423700c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  FStreamingTextureLevelContext::BindBuildData(param_2,param_3);
  iVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      local_38 = 0;
      local_48 = 0;
      uStack_40 = 0;
      cVar1 = (**(code **)(*param_1 + 0x920))(param_1,iVar3,&local_48);
      if (cVar1 != '\0') {
        FUN_1428583a0(param_2,param_1 + 0x3a,&local_48,param_4,param_5);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}



// FUNCTION 142370200 FUN_142370200 body=86 status=ok
// SIG undefined FUN_142370200(void)

undefined8 FUN_142370200(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x16f,L"Pure virtual not implemented (%s)",L"ULightComponent::GetUniformPenumbraSize");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Components/LightComponent.h",
             0x16f,L"Pure virtual not implemented (%s)",L"ULightComponent::GetUniformPenumbraSize");
  return 0;
}



// FUNCTION 1423702c0 GetUnitsConversionFactor body=142 status=ok
// SIG undefined GetUnitsConversionFactor(void)

float ULocalLightComponent::GetUnitsConversionFactor(char param_1,char param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 == param_2) {
    return 1.0;
  }
  if (param_1 == '\x01') {
    fVar3 = 625.0;
    fVar1 = 1.0;
    fVar2 = 6.2831855;
  }
  else if (param_1 == '\x02') {
    fVar2 = 1.0 / (1.0 - param_3);
    fVar3 = fVar2 * 99.47184;
    fVar1 = fVar2 * 0.15915494;
    fVar2 = fVar2 * 1.0;
  }
  else {
    fVar1 = 0.0016;
    fVar3 = 1.0;
    fVar2 = 0.010053096;
  }
  if ((param_2 != '\x01') && (fVar1 = fVar3, param_2 == '\x02')) {
    return (1.0 - param_3) * fVar2;
  }
  return fVar1;
}



// FUNCTION 142370350 FUN_142370350 body=73 status=ok
// SIG undefined FUN_142370350(void)

void FUN_142370350(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined8 *)(param_1 + 0x6f0);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1423703a0 FUN_1423703a0 body=192 status=ok
// SIG undefined FUN_1423703a0(void)

void FUN_1423703a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)param_1[0xdf]) {
    do {
      lVar3 = (**(code **)(*param_1 + 0x560))(param_1,iVar5);
      plVar2 = (longlong *)*param_2;
      iVar1 = (int)param_2[1];
      for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar3) {
          if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_14237043a;
          break;
        }
      }
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar3;
LAB_14237043a:
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[0xdf]);
  }
  return;
}



// FUNCTION 142370460 FUN_142370460 body=146 status=ok
// SIG undefined FUN_142370460(void)

void FUN_142370460(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (0 < iVar1) {
    do {
      lVar2 = (**(code **)(*param_1 + 0x560))(param_1,iVar3);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    } while (iVar3 < iVar1);
  }
  return;
}



// FUNCTION 142370500 FUN_142370500 body=141 status=ok
// SIG undefined FUN_142370500(void)

void FUN_142370500(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x728)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x720));
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x728));
  }
  return;
}



// FUNCTION 142370590 FUN_142370590 body=173 status=ok
// SIG undefined FUN_142370590(void)

undefined8 * FUN_142370590(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  lVar3 = lVar7 + (longlong)*(int *)(param_1 + 0x1c0) * 0x48;
  if (lVar7 != lVar3) {
    do {
      if (*(longlong *)(lVar7 + 0x10) == *param_3) {
        uVar5 = *(undefined4 *)(lVar7 + 0xc);
        *param_2 = *(undefined8 *)(lVar7 + 4);
        *(undefined4 *)(param_2 + 1) = uVar5;
        break;
      }
      lVar7 = lVar7 + 0x48;
    } while (lVar7 != lVar3);
  }
  plVar6 = (longlong *)param_3[2];
  if (plVar6 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar1 = plVar6 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return param_2;
}



// FUNCTION 142370640 FUN_142370640 body=2163 status=ok
// SIG undefined FUN_142370640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142370640(longlong param_1,longlong param_2,float *param_3,undefined8 *param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined1 *local_210;
  float *local_208;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1b4;
  float fStack_1ac;
  float fStack_194;
  float fStack_18c;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined1 local_138 [16];
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined8 uStack_104;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1e4 = param_3[3] - *param_3;
  fVar4 = param_3[5];
  fVar14 = param_3[2];
  *param_4 = CONCAT44((param_3[4] + param_3[1]) * -0.5,(*param_3 + param_3[3]) * -0.5);
  *(float *)(param_4 + 1) = (fVar4 + fVar14) * -0.5;
  local_1f8 = *(float *)(param_1 + 0x30);
  local_1f4 = *(float *)(param_1 + 0x40);
  local_1f0 = *(float *)(param_1 + 0x50);
  fVar4 = local_1f4 * local_1f4 + local_1f8 * local_1f8 + local_1f0 * local_1f0;
  if (fVar4 != 1.0) {
    if (fVar4 < 1e-08) {
      local_1f8 = DAT_1468b5d90;
      local_1f0 = DAT_1468b5d98;
      local_1f4 = DAT_1468b5d94;
    }
    else {
      auVar12 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      local_1e8 = auVar12._0_4_;
      local_1e8 = local_1e8 + local_1e8 * (0.5 - fVar4 * 0.5 * local_1e8 * local_1e8);
      local_1e8 = local_1e8 + local_1e8 * (0.5 - fVar4 * 0.5 * local_1e8 * local_1e8);
      local_1f8 = local_1f8 * local_1e8;
      local_1f4 = local_1f4 * local_1e8;
      local_1f0 = local_1f0 * local_1e8;
    }
  }
  pfVar1 = (float *)FVector::Rotation(&local_1f8,local_138);
  uVar2 = __libm_sse2_sincosf_(pfVar1[2] * 0.017453292);
  local_1d8 = (float)((ulonglong)uVar2 >> 0x20);
  fVar4 = (float)uVar2;
  local_1e8 = -fVar4;
  local_11c = (ulonglong)(uint)local_11c;
  fStack_10c = 0.0;
  fStack_108 = 0.0;
  fStack_fc = 0.0;
  fStack_1d4 = fVar4;
  fStack_1d0 = fVar4;
  fStack_1cc = fVar4;
  uVar2 = __libm_sse2_sincosf_(*pfVar1 * 0.017453292);
  fVar16 = (float)((ulonglong)uVar2 >> 0x20);
  fVar14 = (float)uVar2;
  fVar13 = -fVar14;
  fStack_1b4 = 0.0;
  fStack_1ac = 0.0;
  fStack_194 = 0.0;
  fStack_18c = 0.0;
  uVar2 = __libm_sse2_sincosf_(pfVar1[1] * 0.017453292);
  fVar6 = (float)((ulonglong)uVar2 >> 0x20);
  fVar5 = (float)uVar2;
  fVar3 = -fVar5;
  uStack_170 = 0;
  uStack_160 = 0;
  fVar17 = fVar3 * 0.0 + fVar6 * fVar16 + fVar14 * 0.0 + 0.0;
  fVar18 = fVar3 * 1.0 + fVar6 * fStack_1b4 + fStack_194 * 0.0 + 0.0;
  fVar19 = fVar3 * 0.0 + fVar6 * fVar13 + fVar16 * 0.0 + 0.0;
  fVar20 = fVar3 * 0.0 + fVar6 * fStack_1ac + fStack_18c * 0.0 + 0.0;
  fVar8 = fVar6 * 0.0 + fVar5 * fVar16 + fVar14 * 0.0 + 0.0;
  fVar9 = fVar6 * 1.0 + fVar5 * fStack_1b4 + fStack_194 * 0.0 + 0.0;
  fVar10 = fVar6 * 0.0 + fVar5 * fVar13 + fVar16 * 0.0 + 0.0;
  fVar11 = fVar6 * 0.0 + fVar5 * fStack_1ac + fStack_18c * 0.0 + 0.0;
  fVar5 = fVar16 * 0.0 + 0.0 + fVar14 * 1.0 + 0.0;
  fVar6 = fStack_1b4 * 0.0 + 0.0 + fStack_194 * 1.0 + 0.0;
  fVar3 = fVar13 * 0.0 + 0.0 + fVar16 * 1.0 + 0.0;
  fVar7 = fStack_1ac * 0.0 + 0.0 + fStack_18c * 1.0 + 0.0;
  fVar14 = fVar16 * 0.0 + 0.0 + fVar14 * 0.0 + 0.0;
  fVar15 = fStack_1b4 * 0.0 + 0.0 + fStack_194 * 0.0 + 0.0;
  fVar16 = fVar13 * 0.0 + 0.0 + fVar16 * 0.0 + 0.0;
  fVar13 = fStack_1ac * 0.0 + 0.0 + fStack_18c * 0.0 + 1.0;
  *(float *)(param_4 + 2) =
       fVar18 * local_11c._4_4_ + fVar17 * 1.0 + fVar19 * fStack_108 + fVar20 * 0.0;
  *(float *)((longlong)param_4 + 0x14) =
       fVar18 * local_1d8 + fVar17 * 0.0 + fVar19 * local_1e8 + fVar20 * 0.0;
  *(float *)(param_4 + 3) = fVar18 * fVar4 + fVar17 * 0.0 + fVar19 * local_1d8 + fVar20 * 0.0;
  *(float *)((longlong)param_4 + 0x1c) =
       fVar18 * fStack_10c + fVar17 * 0.0 + fVar19 * fStack_fc + fVar20 * 1.0;
  *(float *)(param_4 + 4) =
       fVar9 * local_11c._4_4_ + fVar8 * 1.0 + fVar10 * fStack_108 + fVar11 * 0.0;
  *(float *)((longlong)param_4 + 0x24) =
       fVar9 * local_1d8 + fVar8 * 0.0 + fVar10 * local_1e8 + fVar11 * 0.0;
  *(float *)(param_4 + 5) = fVar9 * fVar4 + fVar8 * 0.0 + fVar10 * local_1d8 + fVar11 * 0.0;
  *(float *)((longlong)param_4 + 0x2c) =
       fVar9 * fStack_10c + fVar8 * 0.0 + fVar10 * fStack_fc + fVar11 * 1.0;
  *(float *)(param_4 + 6) = fVar6 * local_11c._4_4_ + fVar5 * 1.0 + fVar3 * fStack_108 + fVar7 * 0.0
  ;
  *(float *)((longlong)param_4 + 0x34) =
       fVar6 * local_1d8 + fVar5 * 0.0 + fVar3 * local_1e8 + fVar7 * 0.0;
  *(float *)(param_4 + 7) = fVar6 * fVar4 + fVar5 * 0.0 + fVar3 * local_1d8 + fVar7 * 0.0;
  *(float *)((longlong)param_4 + 0x3c) =
       fVar6 * fStack_10c + fVar5 * 0.0 + fVar3 * fStack_fc + fVar7 * 1.0;
  param_4[10] = CONCAT44(2.0 / local_1e4,0x3f800000);
  *(undefined8 *)((longlong)param_4 + 0x5c) = 0x3f800000;
  *(float *)(param_4 + 0xb) = 2.0 / local_1e4;
  *(float *)(param_4 + 8) =
       fVar15 * local_11c._4_4_ + fVar14 * 1.0 + fVar16 * fStack_108 + fVar13 * 0.0;
  *(float *)((longlong)param_4 + 0x44) =
       fVar15 * local_1d8 + fVar14 * 0.0 + fVar16 * local_1e8 + fVar13 * 0.0;
  *(float *)(param_4 + 9) = fVar15 * fVar4 + fVar14 * 0.0 + fVar16 * local_1d8 + fVar13 * 0.0;
  *(float *)((longlong)param_4 + 0x4c) =
       fVar15 * fStack_10c + fVar14 * 0.0 + fVar16 * fStack_fc + fVar13 * 1.0;
  *(undefined4 *)((longlong)param_4 + 100) = 0;
  fStack_1d0 = DAT_1468b5d98;
  fStack_1d4 = DAT_1468b5d94;
  local_1d8 = DAT_1468b5d90;
  fStack_1c4 = (param_3[5] - param_3[2]) * 0.5;
  fStack_1c8 = (param_3[4] - param_3[1]) * 0.5;
  fStack_1cc = (param_3[3] - *param_3) * 0.5;
  local_1c0 = SQRT(local_1e4 * local_1e4 * 0.75);
  *(float *)(param_4 + 0xd) = DAT_1468b5d90;
  *(float *)((longlong)param_4 + 0x6c) = fStack_1d4;
  *(float *)(param_4 + 0xe) = fStack_1d0;
  *(float *)((longlong)param_4 + 0x74) = fStack_1cc;
  *(undefined4 *)(param_4 + 0x14) = 0xc9800000;
  param_4[0xf] = CONCAT44(fStack_1c4,fStack_1c8);
  *(undefined4 *)(param_4 + 0x12) = 0;
  *(undefined4 *)((longlong)param_4 + 0x94) = 0;
  *(undefined4 *)(param_4 + 0x13) = 0;
  *(undefined4 *)((longlong)param_4 + 0x9c) = 0x3f800000;
  *(float *)(param_4 + 0x10) = local_1c0;
  *(undefined4 *)((longlong)param_4 + 0xa4) = 0x47000000;
  fVar3 = param_3[3] - *param_3;
  fVar5 = *param_3 + param_3[3];
  fVar4 = param_3[5] - param_3[2];
  fVar14 = (param_3[2] + param_3[5]) * 0.5;
  fVar6 = param_3[4] - param_3[1];
  fStack_110 = (fVar3 + fVar5) * 0.5;
  fVar16 = param_3[1] + param_3[4];
  fStack_114 = fVar4 * -0.5;
  fVar5 = fVar5 * 0.5 - fVar3 * 0.5;
  local_120 = fVar4 * 0.5 + fVar14;
  fStack_fc = fStack_114 + fVar14;
  fStack_114 = fStack_114 + fVar14;
  fVar4 = (fVar6 + fVar16) * 0.5;
  fStack_10c = fVar16 * 0.5 - fVar6 * 0.5;
  local_128 = CONCAT44(fStack_10c,fVar5);
  local_11c = CONCAT44(fStack_10c,fVar5);
  uStack_104 = CONCAT44(fStack_10c,fStack_110);
  local_f8 = CONCAT44(fVar4,fVar5);
  local_ec = CONCAT44(fVar4,fVar5);
  local_208 = &local_1d8;
  local_e0 = CONCAT44(fVar4,fStack_110);
  local_d4 = CONCAT44(fVar4,fStack_110);
  local_1f8 = -*(float *)(param_1 + 0x30);
  local_1f4 = (float)(*(uint *)(param_1 + 0x40) ^ 0x80000000);
  local_1f0 = (float)(*(uint *)(param_1 + 0x50) ^ 0x80000000);
  local_218 = param_4 + 0x1a;
  local_210 = local_138;
  fStack_108 = local_120;
  local_f0 = local_120;
  local_e4 = fStack_fc;
  local_d8 = local_120;
  local_cc = fStack_fc;
  FUN_142363c60(param_1,*(undefined1 *)(param_2 + 0x11b4),&local_128,&local_1f8);
  return 1;
}



// FUNCTION 142370ec0 FUN_142370ec0 body=1683 status=ok
// SIG undefined FUN_142370ec0(void)

undefined8
FUN_142370ec0(longlong param_1,longlong param_2,int param_3,undefined1 param_4,ulonglong *param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float fStack_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  float local_1c4;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_194;
  float fStack_18c;
  float fStack_174;
  float fStack_16c;
  float local_108;
  undefined8 uStack_fc;
  float fStack_ec;
  undefined1 local_d8 [176];
  
  FUN_14236edf0(param_1,&local_1d0,param_2,param_3,param_4,param_5 + 0x16);
  iVar1 = FUN_14236d140(param_1,param_2,*(undefined4 *)(param_2 + 0x388),param_4);
  local_1dc = local_1c4 * 0.57735026;
  iVar3 = param_3;
  if (param_3 == -1) {
    iVar3 = iVar1;
  }
  *(int *)((longlong)param_5 + 0x214) = iVar3;
  *param_5 = CONCAT44(local_1cc,local_1d0) ^ 0x8000000080000000;
  *(uint *)(param_5 + 1) = local_1c8 ^ 0x80000000;
  local_1e8 = *(float *)(param_1 + 0x30);
  local_1e4 = *(float *)(param_1 + 0x40);
  local_1e0 = *(float *)(param_1 + 0x50);
  fVar7 = local_1e4 * local_1e4 + local_1e8 * local_1e8 + local_1e0 * local_1e0;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_1e8 = DAT_1468b5d90;
      local_1e0 = DAT_1468b5d98;
      local_1e4 = DAT_1468b5d94;
    }
    else {
      auVar15 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar4 = auVar15._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar7 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar7 * 0.5 * fVar4 * fVar4);
      local_1e8 = local_1e8 * fVar4;
      local_1e4 = local_1e4 * fVar4;
      local_1e0 = local_1e0 * fVar4;
    }
  }
  fStack_1d8 = local_1dc;
  local_1d4 = local_1dc;
  pfVar2 = (float *)FVector::Rotation(&local_1e8,local_d8);
  uVar5 = __libm_sse2_sincosf_(pfVar2[2] * 0.017453292);
  local_1b8 = (float)((ulonglong)uVar5 >> 0x20);
  fVar7 = (float)uVar5;
  fVar4 = -fVar7;
  local_108 = 0.0;
  uStack_fc = 0;
  fStack_ec = 0.0;
  fStack_1b4 = fVar7;
  fStack_1b0 = fVar7;
  fStack_1ac = fVar7;
  uVar5 = __libm_sse2_sincosf_(*pfVar2 * 0.017453292);
  fVar19 = (float)((ulonglong)uVar5 >> 0x20);
  fVar17 = (float)uVar5;
  fVar16 = -fVar17;
  fStack_194 = 0.0;
  fStack_18c = 0.0;
  fStack_174 = 0.0;
  fStack_16c = 0.0;
  uVar5 = __libm_sse2_sincosf_(pfVar2[1] * 0.017453292);
  fVar9 = (float)((ulonglong)uVar5 >> 0x20);
  fVar8 = (float)uVar5;
  fVar6 = -fVar8;
  fVar20 = fVar6 * 0.0 + fVar9 * fVar19 + fVar17 * 0.0 + 0.0;
  fVar21 = fVar6 * 1.0 + fVar9 * fStack_194 + fStack_174 * 0.0 + 0.0;
  fVar22 = fVar6 * 0.0 + fVar9 * fVar16 + fVar19 * 0.0 + 0.0;
  fVar23 = fVar6 * 0.0 + fVar9 * fStack_18c + fStack_16c * 0.0 + 0.0;
  fVar11 = fVar9 * 0.0 + fVar8 * fVar19 + fVar17 * 0.0 + 0.0;
  fVar12 = fVar9 * 1.0 + fVar8 * fStack_194 + fStack_174 * 0.0 + 0.0;
  fVar13 = fVar9 * 0.0 + fVar8 * fVar16 + fVar19 * 0.0 + 0.0;
  fVar14 = fVar9 * 0.0 + fVar8 * fStack_18c + fStack_16c * 0.0 + 0.0;
  fVar8 = fVar19 * 0.0 + 0.0 + fVar17 * 1.0 + 0.0;
  fVar9 = fStack_194 * 0.0 + 0.0 + fStack_174 * 1.0 + 0.0;
  fVar6 = fVar16 * 0.0 + 0.0 + fVar19 * 1.0 + 0.0;
  fVar10 = fStack_18c * 0.0 + 0.0 + fStack_16c * 1.0 + 0.0;
  fVar17 = fVar19 * 0.0 + 0.0 + fVar17 * 0.0 + 0.0;
  fVar18 = fStack_194 * 0.0 + 0.0 + fStack_174 * 0.0 + 0.0;
  fVar19 = fVar16 * 0.0 + 0.0 + fVar19 * 0.0 + 0.0;
  fVar16 = fStack_18c * 0.0 + 0.0 + fStack_16c * 0.0 + 1.0;
  *(float *)(param_5 + 2) =
       fVar21 * local_108 + fVar20 * 1.0 + fVar22 * uStack_fc._4_4_ + fVar23 * 0.0;
  *(float *)((longlong)param_5 + 0x14) =
       fVar21 * local_1b8 + fVar20 * 0.0 + fVar22 * fVar4 + fVar23 * 0.0;
  *(float *)(param_5 + 3) = fVar21 * fVar7 + fVar20 * 0.0 + fVar22 * local_1b8 + fVar23 * 0.0;
  *(float *)((longlong)param_5 + 0x1c) =
       fVar21 * (float)uStack_fc + fVar20 * 0.0 + fVar22 * fStack_ec + fVar23 * 1.0;
  *(float *)(param_5 + 4) =
       fVar12 * local_108 + fVar11 * 1.0 + fVar13 * uStack_fc._4_4_ + fVar14 * 0.0;
  *(float *)((longlong)param_5 + 0x24) =
       fVar12 * local_1b8 + fVar11 * 0.0 + fVar13 * fVar4 + fVar14 * 0.0;
  *(float *)(param_5 + 5) = fVar12 * fVar7 + fVar11 * 0.0 + fVar13 * local_1b8 + fVar14 * 0.0;
  *(float *)((longlong)param_5 + 0x2c) =
       fVar12 * (float)uStack_fc + fVar11 * 0.0 + fVar13 * fStack_ec + fVar14 * 1.0;
  *(float *)(param_5 + 6) = fVar9 * local_108 + fVar8 * 1.0 + fVar6 * uStack_fc._4_4_ + fVar10 * 0.0
  ;
  *(float *)((longlong)param_5 + 0x34) =
       fVar9 * local_1b8 + fVar8 * 0.0 + fVar6 * fVar4 + fVar10 * 0.0;
  *(float *)(param_5 + 7) = fVar9 * fVar7 + fVar8 * 0.0 + fVar6 * local_1b8 + fVar10 * 0.0;
  *(float *)((longlong)param_5 + 0x3c) =
       fVar9 * (float)uStack_fc + fVar8 * 0.0 + fVar6 * fStack_ec + fVar10 * 1.0;
  *(float *)(param_5 + 8) =
       fVar18 * local_108 + fVar17 * 1.0 + fVar19 * uStack_fc._4_4_ + fVar16 * 0.0;
  *(float *)((longlong)param_5 + 0x44) =
       fVar18 * local_1b8 + fVar17 * 0.0 + fVar19 * fVar4 + fVar16 * 0.0;
  *(float *)(param_5 + 9) = fVar18 * fVar7 + fVar17 * 0.0 + fVar19 * local_1b8 + fVar16 * 0.0;
  *(float *)((longlong)param_5 + 0x4c) =
       fVar18 * (float)uStack_fc + fVar17 * 0.0 + fVar19 * fStack_ec + fVar16 * 1.0;
  param_5[10] = CONCAT44(1.0 / local_1c4,0x3f800000);
  *(undefined8 *)((longlong)param_5 + 0x5c) = 0x3f800000;
  *(float *)(param_5 + 0xb) = 1.0 / local_1c4;
  *(undefined4 *)((longlong)param_5 + 100) = 0;
  fVar17 = DAT_1468b5d98;
  fVar4 = DAT_1468b5d94;
  fVar7 = DAT_1468b5d90;
  *(undefined4 *)(param_5 + 0x14) = 0xc9800000;
  *(undefined4 *)((longlong)param_5 + 0xa4) = 0x47000000;
  *(bool *)((longlong)param_5 + 0x221) = param_3 == -1;
  *(float *)(param_5 + 0xd) = fVar7;
  *(float *)((longlong)param_5 + 0x6c) = fVar4;
  *(float *)(param_5 + 0xe) = fVar17;
  *(float *)((longlong)param_5 + 0x74) = local_1dc;
  param_5[0xf] = CONCAT44(local_1d4,fStack_1d8);
  *(float *)(param_5 + 0x10) = local_1c4;
  *(undefined4 *)(param_5 + 0x12) = 0;
  *(undefined4 *)((longlong)param_5 + 0x94) = 0;
  *(undefined4 *)(param_5 + 0x13) = 0;
  *(undefined4 *)((longlong)param_5 + 0x9c) = 0x3f800000;
  if ((param_3 == -1) || (*(int *)((longlong)param_5 + 0x214) < iVar1)) {
    *(undefined1 *)(param_5 + 0x42) = 0;
  }
  else {
    *(undefined1 *)(param_5 + 0x42) = 1;
  }
  return CONCAT71((uint7)(uint3)((uint)local_1c4 >> 8),1);
}



// FUNCTION 142371560 GetViewRelevance body=112 status=ok
// SIG undefined GetViewRelevance(void)

undefined8 *
FDrawFrustumSceneProxy::GetViewRelevance(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff | 0x200;
  bVar1 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) =
       (*(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar1 << 0xb) & 0xffff7fff;
  return param_2;
}



// FUNCTION 1423715d0 GetViewRelevance body=61 status=ok
// SIG undefined GetViewRelevance(void)

undefined8 *
FLineBatcherSceneProxy::GetViewRelevance(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10 | 0x218;
  return param_2;
}



// FUNCTION 142371610 FUN_142371610 body=127 status=ok
// SIG undefined FUN_142371610(void)

undefined8 * FUN_142371610(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10 | 0x200;
  bVar1 = FUN_142730880(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 0xb;
  FUN_1425a2630(param_1 + 0x5b8,param_2);
  return param_2;
}



// FUNCTION 142371690 FUN_142371690 body=673 status=ok
// SIG undefined FUN_142371690(void)

undefined8 FUN_142371690(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong uStack_10;
  
  iVar10 = FSceneViewFamily::GetFeatureLevel(param_2);
  if ((iVar10 < 2) || (DAT_146531d0c == 0)) {
    uVar11 = 0;
  }
  else {
    iVar10 = *(int *)(param_3 + 0xd30);
    *(int *)(param_3 + 0xd30) = iVar10 + 1;
    if (*(int *)(param_3 + 0xd34) < iVar10 + 1) {
      TArray<FWholeSceneProjectedShadowInitializer,TInlineAllocator<6,FDefaultAllocator>_>::
      ResizeGrow(param_3,iVar10);
    }
    puVar14 = (ulonglong *)0x0;
    lVar12 = *(longlong *)(param_3 + 0xd20);
    if (*(longlong *)(param_3 + 0xd20) == 0) {
      lVar12 = param_3;
    }
    puVar13 = (ulonglong *)((longlong)iVar10 * 0x230 + lVar12);
    if (puVar13 != (ulonglong *)0x0) {
      puVar13[0x12] = 0;
      *(undefined4 *)(puVar13 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar13 + 0x9c) = 0x3f800000;
      *(undefined4 *)(puVar13 + 0x16) = 0;
      *(undefined8 *)((longlong)puVar13 + 0xb4) = 0x4a000000;
      *(undefined4 *)((longlong)puVar13 + 0xbc) = 0;
      puVar13[0x18] = 0x4a000000;
      puVar13[0x26] = 0;
      puVar13[0x28] = 0;
      puVar13[0x3a] = 0;
      puVar13[0x3c] = 0;
      *(undefined1 *)(puVar13 + 0x42) = 0;
      *(undefined4 *)((longlong)puVar13 + 0x214) = 0xffffffff;
      *(undefined2 *)(puVar13 + 0x44) = 0;
      puVar14 = puVar13;
    }
    uVar1 = *(uint *)(param_1 + 0xa8);
    *puVar14 = *(ulonglong *)(param_1 + 0xa0) ^ 0x8000000080000000;
    *(uint *)(puVar14 + 1) = uVar1 ^ 0x80000000;
    uStack_10 = *(ulonglong *)(param_1 + 0x68);
    uVar6 = *(ulonglong *)(param_1 + 0x38);
    uVar7 = *(ulonglong *)(param_1 + 0x40);
    uVar8 = *(ulonglong *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    uVar5 = *(undefined4 *)(param_1 + 0x5c);
    puVar14[2] = *(ulonglong *)(param_1 + 0x30);
    puVar14[3] = uVar6;
    puVar14[4] = uVar7;
    puVar14[5] = uVar8;
    *(undefined4 *)(puVar14 + 6) = uVar2;
    *(undefined4 *)((longlong)puVar14 + 0x34) = uVar3;
    *(undefined4 *)(puVar14 + 7) = uVar4;
    *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar5;
    uStack_10 = uStack_10 & 0xffffffff00000000;
    puVar14[8] = 0;
    puVar14[9] = uStack_10;
    puVar14[10] = 0x3f8000003f800000;
    *(undefined8 *)((longlong)puVar14 + 0x5c) = 0;
    *(undefined4 *)(puVar14 + 0xb) = 0x3f800000;
    *(undefined4 *)((longlong)puVar14 + 100) = 0x3f800000;
    uVar1 = *(uint *)(param_1 + 0x1c0);
    *(undefined4 *)(puVar14 + 0x14) = 0x3dcccccd;
    puVar14[0xd] = 0;
    puVar14[0xe] = (ulonglong)uVar1 << 0x20;
    puVar14[0xf] = CONCAT44(uVar1,uVar1);
    *(undefined4 *)(puVar14 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x94) = 0;
    *(undefined4 *)(puVar14 + 0x13) = 0x3f800000;
    *(undefined4 *)((longlong)puVar14 + 0x9c) = 0;
    *(uint *)(puVar14 + 0x10) = uVar1;
    *(undefined4 *)((longlong)puVar14 + 0xa4) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined1 *)(puVar14 + 0x44) = 1;
    if ((*(byte *)(param_1 + 0x182) & 1) != 0) {
      iVar10 = FSceneViewFamily::GetFeatureLevel(param_2);
      cVar9 = FUN_141b30a50((&DAT_1464c9c48)[iVar10]);
      if (cVar9 != '\0') {
        *(undefined1 *)((longlong)puVar14 + 0x221) = 1;
        return 1;
      }
    }
    *(undefined1 *)((longlong)puVar14 + 0x221) = 0;
    uVar11 = 1;
  }
  return uVar11;
}



// FUNCTION 142371940 FUN_142371940 body=450 status=ok
// SIG undefined FUN_142371940(void)

void FUN_142371940(longlong param_1,byte *param_2,undefined4 param_3)

{
  char cVar1;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if ((*(byte *)(param_1 + 0x1c4) & 1) != 0) {
    if (*(char *)(param_1 + 0x244) != '\0') {
      return;
    }
    local_9c = *(undefined4 *)(param_2 + 0xc);
    local_98 = *(undefined4 *)(param_2 + 0x10);
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_2c = 0;
    local_a8[0] = *param_2 & 3;
    local_94 = *(undefined8 *)(param_2 + 0x14);
    local_a4 = *(undefined4 *)(param_2 + 4);
    local_88 = *(undefined8 *)(param_2 + 0x20);
    local_a0 = *(uint *)(param_2 + 8) & 1;
    local_8c = *(undefined4 *)(param_2 + 0x1c);
    local_7c = *(undefined8 *)(param_2 + 0x2c);
    local_80 = *(undefined4 *)(param_2 + 0x28);
    local_74 = *(undefined4 *)(param_2 + 0x34);
    local_68 = *(undefined4 *)(param_2 + 0x40);
    local_5c = *(undefined4 *)(param_2 + 0x4c);
    local_50 = *(undefined4 *)(param_2 + 0x58);
    local_48 = *(undefined4 *)(param_2 + 0x60);
    local_44 = *(undefined4 *)(param_2 + 100);
    local_40 = *(undefined4 *)(param_2 + 0x68);
    local_3c = *(undefined4 *)(param_2 + 0x6c);
    local_38 = *(undefined4 *)(param_2 + 0x70);
    local_70 = *(undefined8 *)(param_2 + 0x38);
    local_34 = *(undefined4 *)(param_2 + 0x74);
    local_64 = *(undefined8 *)(param_2 + 0x44);
    local_30 = *(undefined4 *)(param_2 + 0x78);
    local_28 = *(undefined8 *)(param_2 + 0x80);
    local_58 = *(undefined8 *)(param_2 + 0x50);
    local_20 = *(undefined8 *)(param_2 + 0x88);
    local_4c = *(undefined4 *)(param_2 + 0x5c);
    local_18 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1f0,local_a8);
    *(undefined1 *)(param_1 + 0x244) = 1;
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1c8);
  if (cVar1 == '\0') {
LAB_1423719ba:
    FUN_142361e10(param_1 + 0x1e0);
    *(undefined1 *)(param_1 + 0x245) = 1;
    FUN_142379de0(param_1,param_2);
  }
  else {
    if (cVar1 == '\x01') {
      if (*(float *)(param_1 + 0x240) == -1.0) goto LAB_1423719ba;
    }
    else if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x238) = 0;
      FUN_142361e10(param_1 + 0x210,param_2,0);
      return;
    }
    FUN_142375490(param_1,param_2,param_3,1);
  }
  return;
}



// FUNCTION 142371b40 FUN_142371b40 body=25 status=ok
// SIG undefined FUN_142371b40(void)

undefined1 FUN_142371b40(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x118) != 0) && (*(char *)(param_1 + 0x24e) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142371b60 FUN_142371b60 body=220 status=ok
// SIG undefined FUN_142371b60(void)

ulonglong FUN_142371b60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x710) != 0) && (*(longlong *)(param_1 + 0x708) != 0)) {
    in_RAX = FUN_142820890(*(longlong *)(param_1 + 0x708),1,0xffffffff);
    if ((((char)in_RAX != '\0') &&
        (((in_RAX = *(ulonglong *)(param_1 + 0x718), in_RAX != 0 &&
          (*(longlong *)(param_1 + 0x720) != 0)) && (*(longlong *)(param_1 + 0x728) != 0)))) &&
       ((((*(longlong *)(param_1 + 0x730) != 0 && (*(longlong *)(param_1 + 0x738) != 0)) &&
         (plVar1 = (longlong *)(in_RAX + 0x60), *plVar1 != 0)) &&
        (((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x60), lVar2 != 0 &&
          (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x60), lVar3 != 0)) &&
         (((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x730) + 0x60), lVar4 != 0 &&
           ((((in_RAX = *(ulonglong *)(*(longlong *)(param_1 + 0x738) + 0x60), in_RAX != 0 &&
              (*(longlong *)(*plVar1 + 0x30) != 0)) && (*(longlong *)(lVar2 + 0x30) != 0)) &&
            ((*(longlong *)(lVar3 + 0x30) != 0 && (*(longlong *)(lVar4 + 0x30) != 0)))))) &&
          (*(longlong *)(in_RAX + 0x30) != 0)))))))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142371c60 FUN_142371c60 body=248 status=ok
// SIG undefined FUN_142371c60(void)

void FUN_142371c60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_48;
  float local_40;
  float local_30;
  undefined1 local_2c [36];
  
  if (*(longlong *)(param_1 + 0x750) == 0) {
    uVar2 = FUN_14236c5c0();
    *(undefined8 *)(param_1 + 0x750) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    cVar1 = FUN_142371b60(param_1);
    if (cVar1 != '\0') {
      lVar3 = UStaticMesh::GetBounds(*(undefined8 *)(param_1 + 0x708),local_2c);
      local_40 = (*(float *)(*(longlong *)(param_1 + 0x6f0) + 0x104) * 100000.0) /
                 *(float *)(lVar3 + 0x18);
      local_48 = CONCAT44(local_40,local_40);
      local_30 = local_40;
      FUN_142399c30(param_1,&local_48);
      local_48 = 0;
      local_40 = 0.0;
      FUN_14223c850(*(undefined8 *)(param_1 + 0x750),&local_48,0,0,0);
      FUN_142477830(*(undefined8 *)(param_1 + 0x6f0),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x750) + 0x470));
    }
  }
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    FUN_14234cb00();
    return;
  }
  FUN_14234b150(param_1);
  return;
}



// FUNCTION 142371d60 FUN_142371d60 body=696 status=ok
// SIG undefined FUN_142371d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142371d60(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  uint local_a8;
  int *local_a0;
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar2 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar2,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
      ((lVar5 = *(longlong *)(param_1 + 0x68), lVar5 != 0 && (0 < *(int *)(lVar5 + 0x40))))) &&
     ((local_a8 = *(int *)(lVar5 + 0x44), 0 < (int)local_a8 &&
      ((1 < DAT_1464c9c14 && (*(int *)(lVar5 + 0x50) != 0)))))) {
    local_80 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 1;
    local_54 = _DAT_1468b5d78;
    uStack_50 = uRam00000001468b5d7c;
    uStack_4c = uRam00000001468b5d80;
    uStack_48 = uRam00000001468b5d84;
    local_44 = 0;
    iVar3 = 0;
    local_88 = 0;
    local_90 = 1;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_98 = 1;
    local_a0 = (int *)CONCAT71(local_a0._1_7_,0x15);
    (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_70,&DAT_146ab6e78);
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,local_70);
    local_a0 = local_78;
    local_90 = CONCAT31(local_90._1_3_,1);
    local_78[0] = 0;
    local_98 = local_98 & 0xffffff00;
    local_a8 = 1;
    lVar1 = (**(code **)(*DAT_146ab6358 + 0x580))(DAT_146ab6358,&DAT_146ab6e78,local_70,0);
    lVar5 = *(longlong *)(param_1 + 0x68);
    uVar4 = *(int *)(lVar5 + 0x40) * DAT_1464ca50c;
    if (0 < *(int *)(lVar5 + 0x44)) {
      do {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((ulonglong)(uint)(iVar3 * local_78[0]) + lVar1),
                   (void *)((ulonglong)(iVar3 * uVar4) + *(longlong *)(lVar5 + 0x48)),
                   (ulonglong)uVar4);
        lVar5 = *(longlong *)(param_1 + 0x68);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar5 + 0x44));
    }
    local_a0 = (int *)CONCAT71(local_a0._1_7_,1);
    local_a8 = local_a8 & 0xffffff00;
    (**(code **)(*DAT_146ab6358 + 0x588))(DAT_146ab6358,&DAT_146ab6e78,local_70,0);
    lVar5 = *(longlong *)(param_1 + 0x68);
    *(undefined4 *)(lVar5 + 0x50) = 0;
    if (*(int *)(lVar5 + 0x54) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar5 + 0x48,0);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_70);
  }
  return;
}



// FUNCTION 142372020 FUN_142372020 body=126 status=ok
// SIG undefined FUN_142372020(void)

void FUN_142372020(longlong *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x1bd);
  *(undefined1 *)((longlong)param_1 + 0x1bd) = 1;
  FUN_142340f20();
  if ((((param_1[0x2f] == 0) && ((*(byte *)(param_1 + 0x37) & 8) != 0)) && (param_1[0x23] != 0)) &&
     (*(longlong *)(param_1[0x23] + 0x168) != 0)) {
    (**(code **)(*param_1 + 0x450))(param_1);
  }
  if ((*(byte *)(param_1 + 0x33) & 2) != 0) {
    (**(code **)(*param_1 + 0x508))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x1bd) = uVar1;
  return;
}



// FUNCTION 1423720a0 FUN_1423720a0 body=553 status=ok
// SIG undefined FUN_1423720a0(void)

void FUN_1423720a0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) && ((*(byte *)(param_1 + 0x24e) & 0xfd) != 0)) {
    plVar9 = (longlong *)0x0;
    lVar5 = FUN_14236c8f0();
    plVar11 = plVar9;
    if (lVar5 != 0) {
      plVar11 = (longlong *)(lVar5 + 0x10);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      *(longlong **)(param_1 + 0x418) = plVar11;
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar9 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar9);
        plVar7 = plVar9;
      }
      plVar9 = (longlong *)plVar7[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)*plVar7;
        if (plVar9 == (longlong *)0x0) {
          lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar5;
          if (lVar5 == 0) {
            puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar8;
            lVar5 = 0x1f;
            do {
              puVar2 = puVar8 + 0x20;
              *puVar8 = puVar2;
              lVar5 = lVar5 + -1;
              puVar8 = puVar2;
            } while (lVar5 != 0);
            *puVar2 = 0;
          }
          plVar9 = (longlong *)plVar7[1];
          iVar10 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar10 = 0x20;
          plVar7[1] = (longlong)plVar9;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar10 = (int)plVar7[2];
      }
      plVar7[1] = *plVar9;
      *(int *)(plVar7 + 2) = iVar10 + -1;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_145056dd8;
      *(undefined1 *)(plVar9 + 4) = 0;
      plVar9[5] = 0;
      plVar9[2] = param_1 + 0x3b0;
      plVar9[3] = (longlong)plVar11;
      lVar5 = plVar9[5];
      piVar1 = (int *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar5;
      FUN_1409421c0(plVar9,0,0xff,1,0);
      if (lVar5 != 0) {
        LOCK();
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    FUN_141edf270(param_1 + 0x3b0);
  }
  return;
}



// FUNCTION 1423722d0 FUN_1423722d0 body=112 status=ok
// SIG undefined FUN_1423722d0(void)

void FUN_1423722d0(longlong *param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    if ((param_1[0x23] != 0) &&
       ((*(char *)((longlong)param_1 + 0x24e) == '\0' ||
        ((param_1[0x23] != 0 && (*(char *)((longlong)param_1 + 0x24e) != '\x02')))))) {
      (**(code **)(*param_1 + 0x70))(param_1,1);
      FUN_141edf360(param_1 + 0x76);
      (**(code **)(*param_1 + 0x548))(param_1);
      FUN_1423424e0(param_1);
    }
    if (param_1[0x24] == 0) {
      FUN_1423407b0(param_1);
    }
  }
  return;
}



// FUNCTION 142372340 FUN_142372340 body=113 status=ok
// SIG undefined FUN_142372340(void)

void FUN_142372340(longlong *param_1)

{
  if ((param_1[0x23] != 0) &&
     ((*(char *)((longlong)param_1 + 0x24e) == '\0' ||
      ((param_1[0x23] != 0 && (*(char *)((longlong)param_1 + 0x24e) != '\x02')))))) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    FUN_141edf360(param_1 + 0x76);
    (**(code **)(*param_1 + 0x548))(param_1);
    FUN_1423424e0(param_1);
  }
  if (param_1[0x24] == 0) {
    FUN_1423407b0(param_1);
    return;
  }
  return;
}



// FUNCTION 1423723c0 FUN_1423723c0 body=87 status=ok
// SIG undefined FUN_1423723c0(void)

ulonglong FUN_1423723c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142372480 FUN_142372480 body=152 status=ok
// SIG undefined FUN_142372480(void)

undefined8 FUN_142372480(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float extraout_XMM0_Da;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x718);
  if ((local_res8 != 0) && (0.0 < *(float *)(param_1 + 0x704))) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      local_res8 = *(longlong *)(param_1 + 0x718);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    uVar2 = FTimerManager::FindTimer(uVar3,&local_res8,0);
    FTimerManager::InternalGetTimerElapsed(uVar3,uVar2);
    if (*(float *)(param_1 + 0x700) <= extraout_XMM0_Da &&
        extraout_XMM0_Da != *(float *)(param_1 + 0x700)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142372520 IsInLaptopMode body=20 status=ok
// SIG undefined IsInLaptopMode(void)

bool UPlatformEventsComponent::IsInLaptopMode(void)

{
  int iVar1;
  
  iVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  return iVar1 == 1;
}



// FUNCTION 142372540 IsInTabletMode body=20 status=ok
// SIG undefined IsInTabletMode(void)

bool UPlatformEventsComponent::IsInTabletMode(void)

{
  int iVar1;
  
  iVar1 = FWindowsPlatformMisc::GetConvertibleLaptopMode();
  return iVar1 == 2;
}



// FUNCTION 142372560 FUN_142372560 body=41 status=ok
// SIG undefined FUN_142372560(void)

undefined8 FUN_142372560(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x440))();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x49c) & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423725a0 FUN_1423725a0 body=162 status=ok
// SIG undefined FUN_1423725a0(void)

undefined1 FUN_1423725a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_1428b22c0(*param_1,&local_28,0);
  plVar4 = (longlong *)param_2[2];
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142372680 FUN_142372680 body=54 status=ok
// SIG undefined FUN_142372680(void)

undefined1 FUN_142372680(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14236c8f0();
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
     (*(char *)(param_1 + 0x24e) != '\x02')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1423726c0 FUN_1423726c0 body=255 status=ok
// SIG undefined FUN_1423726c0(void)

undefined8 FUN_1423726c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x728)) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x720));
      lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 8) + 0x6f8) + 0x20);
      if (lVar1 != 0) {
        lVar3 = FUN_1429a0270();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar2) && (*(longlong *)(lVar1 + 0xc0) != 0)) &&
           (((lVar3 = FUN_14256ac50(), lVar3 != 0 && (*(longlong *)(lVar3 + 0x1f0) != 0)) ||
            (*(longlong *)(lVar1 + 0x1f0) != 0)))) {
          local_18 = *(undefined4 *)(lVar4 + 0x30);
          uStack_14 = *(undefined4 *)(lVar4 + 0x34);
          uStack_10 = *(undefined4 *)(lVar4 + 0x38);
          uStack_c = *(undefined4 *)(lVar4 + 0x3c);
          lVar4 = UMapBuildDataRegistry::GetMeshBuildData(local_18,&local_18);
          if (lVar4 != 0) {
            return 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x728));
  }
  return 0;
}



// FUNCTION 1423727c0 IsReadyForFinishDestroy body=26 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool ULightComponent::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x420);
  return cVar1 != '\0';
}



// FUNCTION 142372800 K2_MoveUpdatedComponent body=87 status=ok
// SIG undefined K2_MoveUpdatedComponent(void)

void UMovementComponent::K2_MoveUpdatedComponent
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FRotator::Quaternion(param_3,local_18);
  FUN_1423755e0(param_1,param_2,uVar1,param_5,param_4,param_6);
  return;
}



// FUNCTION 142372860 FUN_142372860 body=168 status=ok
// SIG undefined FUN_142372860(void)

undefined1
FUN_142372860(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_1428b3730(*param_1,&local_28,param_3,param_4,0);
  plVar4 = (longlong *)param_2[2];
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142372910 FUN_142372910 body=110 status=ok
// SIG undefined FUN_142372910(void)

void FUN_142372910(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  if (((*(byte *)(param_1 + 0xe1) & 1) != 0) &&
     (((0.0 < *(float *)((longlong)param_1 + 0x704) || (0.0 < *(float *)(param_1 + 0xe0))) &&
      (plVar1 = (longlong *)param_1[0x23], plVar1 != (longlong *)0x0)))) {
    uVar3 = (**(code **)(*plVar1 + 0x148))(plVar1);
    cVar2 = UWorld::IsGameWorld(uVar3);
    if (cVar2 != '\0') {
      FUN_142227350(plVar1,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 142372980 FUN_142372980 body=989 status=ok
// SIG undefined FUN_142372980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142372980(longlong param_1,longlong *param_2,float param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88 [2];
  undefined8 local_80;
  float local_78;
  undefined8 local_68;
  float local_60;
  
  if (DAT_146af07a4 != '\0') {
    DAT_146af07a4 = 0;
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (param_3 <= 0.0) {
    return;
  }
  plVar6 = *(longlong **)(param_1 + 0x118);
  if (plVar6 == (longlong *)0x0) {
LAB_142372aa4:
    plVar6 = (longlong *)0x0;
LAB_142372aa6:
    bVar2 = false;
LAB_142372aa8:
    if (!bVar2) {
      return;
    }
    plVar6 = (longlong *)plVar6[0x91];
    if (plVar6 == (longlong *)0x0) {
      return;
    }
  }
  else {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar4 = FUN_14291fb80();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142372aa4;
      iVar1 = *(int *)((longlong)plVar6 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) goto LAB_142372aa6;
      bVar2 = true;
      goto LAB_142372aa8;
    }
  }
  iVar1 = *(int *)((longlong)plVar6 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  if (plVar6[0x92] == 0) {
    return;
  }
  if (param_2 != plVar6) {
    lVar4 = plVar6[0x2d];
    if (lVar4 == 0) {
      local_80 = _DAT_1468b5d90;
      local_78 = DAT_1468b5d98;
    }
    else {
      local_80 = *(undefined8 *)(lVar4 + 0x220);
      local_78 = *(float *)(lVar4 + 0x228);
    }
    fVar9 = (float)local_80 - *param_4;
    fVar7 = local_78 - param_4[2];
    fVar8 = (float)((ulonglong)local_80 >> 0x20) - param_4[1];
    (**(code **)(*plVar6 + 0x578))(plVar6,local_88,&local_80);
    if (local_88[0] * local_88[0] < fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      fVar7 = *(float *)(lVar4 + 0x790) - *(float *)(param_1 + 400);
      if ((*(float *)(param_1 + 0x188) <= fVar7 && fVar7 != *(float *)(param_1 + 0x188)) ||
         (*(float *)(param_1 + 0x18c) <= param_3)) {
        *(float *)(param_1 + 0x18c) = param_3;
        *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)param_4;
        *(float *)(param_1 + 0x184) = param_4[2];
        lVar4 = *(longlong *)(param_1 + 0x120);
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(param_1);
        }
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar4 + 0x790);
      }
      goto LAB_142372ce6;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  fVar7 = *(float *)(lVar4 + 0x790) - *(float *)(param_1 + 0x198);
  if ((*(float *)(param_1 + 0x188) <= fVar7 && fVar7 != *(float *)(param_1 + 0x188)) ||
     (*(float *)(param_1 + 0x194) <= param_3)) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    *(float *)(param_1 + 0x194) = param_3;
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar4 + 0x790);
  }
LAB_142372ce6:
  if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
    local_60 = param_4[2];
    local_68 = *(undefined8 *)param_4;
    local_80 = 0;
    DAT_146af07a4 = '\x01';
    FUN_1422369f0(param_2,param_3,plVar6,&local_68,0,0);
  }
  return;
}



// FUNCTION 142372d60 FUN_142372d60 body=8 status=ok
// SIG undefined FUN_142372d60(void)

void FUN_142372d60(longlong param_1)

{
  *(uint *)(param_1 + 0x710) = *(uint *)(param_1 + 0x710) | 1;
  return;
}



// FUNCTION 142372d70 FUN_142372d70 body=169 status=ok
// SIG undefined FUN_142372d70(void)

ulonglong FUN_142372d70(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 param_5,undefined1 param_6)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (param_1[0x2f] != 0) {
    local_20 = *(undefined4 *)(param_2 + 1);
    local_28 = *param_2;
    (**(code **)(*param_1 + 0x4f0))(local_28,local_18,&local_28);
    uVar1 = (**(code **)(*(longlong *)param_1[0x2f] + 0x490))
                      ((longlong *)param_1[0x2f],local_18,param_3,param_4,param_5,(int)param_1[0x31]
                       ,param_6);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142372e30 FUN_142372e30 body=327 status=ok
// SIG undefined FUN_142372e30(void)

void FUN_142372e30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  undefined4 uStack_1c;
  
  if (param_2 != 0) {
    lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(param_1 + 0x468) != param_2)) {
      uVar7 = 0;
      *(longlong *)(param_1 + 0x468) = param_2;
      plVar1 = (longlong *)(param_2 + 0x2e8);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x423730b0;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
        iVar2 = *(int *)(param_2 + 0x2f0);
        uVar7 = *puVar6;
        *(int *)(param_2 + 0x2f0) = iVar2 + 1;
        if (*(int *)(param_2 + 0x2f4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x470) = uVar7;
      FUN_14237bb90(param_1);
    }
  }
  return;
}



// FUNCTION 142372f80 FUN_142372f80 body=259 status=ok
// SIG undefined FUN_142372f80(void)

void FUN_142372f80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x468);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x470);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0x2f0)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x2e8) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x2f0));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x2e8,0);
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    FUN_14237bb90(param_1);
  }
  return;
}



// FUNCTION 142373090 FUN_142373090 body=27 status=ok
// SIG undefined FUN_142373090(void)

void FUN_142373090(undefined8 param_1)

{
  FUN_1423931c0();
  FUN_142367710(param_1);
  return;
}



// FUNCTION 1423730c0 FUN_1423730c0 body=316 status=ok
// SIG undefined FUN_1423730c0(void)

void FUN_1423730c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_142393b20();
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      lVar3 = FUN_1428dfc70();
      lVar5 = *(longlong *)(param_1 + 0x2d0);
      lVar4 = lVar5;
      if (lVar5 != 0) {
        while (lVar4 != lVar3) {
          plVar1 = (longlong *)(lVar4 + 0x30);
          lVar4 = *plVar1;
          if (*plVar1 == 0) {
            return;
          }
        }
        if (lVar5 != 0) {
          FUN_142366800(param_1);
          return;
        }
      }
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x2f8) & 1) == 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x10);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      lVar2 = FUN_1428dfc70();
      lVar4 = *(longlong *)(param_1 + 0x2d0);
      for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar2) goto LAB_142373122;
      }
    }
    lVar4 = 0;
LAB_142373122:
    if (lVar5 == lVar4) {
      lVar5 = *(longlong *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(lVar5 + 0x18);
      lVar4 = *(longlong *)(lVar5 + 0x168);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 400) != param_1)) {
        FUN_142382f60(lVar4,param_1,&DAT_146532184,0);
        lVar5 = *(longlong *)(param_1 + 0x2d8);
      }
      FUN_142350b20(param_1,*(byte *)(lVar5 + 0x92) >> 6 & 1);
      return;
    }
  }
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xfe;
  FUN_142367710(param_1);
  FUN_142366800(param_1);
  return;
}



// FUNCTION 142373200 FUN_142373200 body=66 status=ok
// SIG undefined FUN_142373200(void)

void FUN_142373200(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  FUN_142393b20();
  if (((*(int *)(param_1 + 0x2dc) == 0 && *(int *)(param_1 + 0x2d8) == 0) &&
      *(int *)(param_1 + 0x2d4) == 0) && *(int *)(param_1 + 0x2d0) == 0) {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x2d0) = *puVar2;
    *(undefined8 *)(param_1 + 0x2d8) = uVar1;
  }
  return;
}



// FUNCTION 142373250 FUN_142373250 body=595 status=ok
// SIG undefined FUN_142373250(void)

void FUN_142373250(longlong *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x1bc);
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 1;
  lVar7 = param_1[0x2f];
  if (lVar7 != 0) {
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1423732b4;
  }
  lVar7 = 0;
LAB_1423732b4:
  param_1[0x30] = lVar7;
  FUN_142343b00(param_1);
  if (*(char *)((longlong)param_1 + 0x19c) != '\0') {
    (**(code **)(*param_1 + 0x4c8))(param_1);
  }
  lVar7 = param_1[0x24];
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (cVar5 = UWorld::IsGameWorld(lVar7), cVar5 != '\0')) {
    fVar1 = *(float *)(param_1 + 0x34);
    fVar2 = *(float *)((longlong)param_1 + 0x1a4);
    fVar11 = *(float *)(param_1 + 0x35);
    fVar8 = fVar1 * fVar1 + fVar2 * fVar2 + fVar11 * fVar11;
    if (fVar8 == 1.0) {
      lVar7 = param_1[0x34];
      fVar11 = *(float *)(param_1 + 0x35);
    }
    else if (1e-08 <= fVar8) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar11 = fVar11 * fVar9;
      lVar7 = CONCAT44(fVar2 * fVar9,fVar1 * fVar9);
    }
    else {
      lVar7 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fVar11 = DAT_1468b5d98;
    }
    lVar6 = param_1[0x2f];
    param_1[0x34] = lVar7;
    *(float *)(param_1 + 0x35) = fVar11;
    if (((lVar6 == 0) && ((*(byte *)(param_1 + 0x37) & 8) != 0)) && (param_1[0x23] != 0)) {
      lVar6 = *(longlong *)(param_1[0x23] + 0x168);
    }
    (**(code **)(*param_1 + 0x450))(param_1,lVar6);
  }
  *(undefined1 *)((longlong)param_1 + 0x1bc) = uVar3;
  return;
}



// FUNCTION 1423734b0 FUN_1423734b0 body=216 status=ok
// SIG undefined FUN_1423734b0(void)

void FUN_1423734b0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  undefined4 uStack_c;
  
  FUN_142343b00();
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = 0x42371b10;
    *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_1442cc168;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af538,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464af540;
    lVar3 = (longlong)DAT_1464af540;
    DAT_1464af540 = DAT_1464af540 + 1;
    if (DAT_1464af544 < DAT_1464af540) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af538,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464af538);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  return;
}



// FUNCTION 1423735b0 FUN_1423735b0 body=104 status=ok
// SIG undefined FUN_1423735b0(void)

void FUN_1423735b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142394230();
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = FUN_1423407b0(param_1);
    if (lVar1 == 0) goto LAB_142373605;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = FUN_1428761d0(DAT_146b17150,lVar1);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 8) != '\0')) {
    return;
  }
LAB_142373605:
  FUN_142367710(param_1);
  return;
}



// FUNCTION 142373620 FUN_142373620 body=57 status=ok
// SIG undefined FUN_142373620(void)

void FUN_142373620(longlong *param_1)

{
  FUN_142394230();
  if ((param_1[0x23] != 0) && ((*(byte *)(param_1 + 0x5b) & 2) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014237364c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x550))(param_1);
  return;
}



// FUNCTION 142373660 FUN_142373660 body=34 status=ok
// SIG undefined FUN_142373660(void)

void FUN_142373660(undefined8 param_1)

{
  FUN_142344780();
  FUN_140483870(&DAT_1464af538,param_1);
  return;
}



// FUNCTION 142373690 OnWorldCleanup body=155 status=ok
// SIG undefined OnWorldCleanup(void)

void FForceFeedbackManager::OnWorldCleanup(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  plVar2 = DAT_146af04e0;
  if (0 < DAT_146af04e8) {
    while (plVar1 = (longlong *)*plVar2, plVar1[3] != param_1) {
      iVar4 = iVar4 + 1;
      plVar2 = plVar2 + 1;
      if (DAT_146af04e8 <= iVar4) {
        return;
      }
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    iVar3 = (DAT_146af04e8 - iVar4) + -1;
    if (0 < iVar3) {
      iVar3 = 1;
    }
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                (DAT_146af04e0 + iVar4,DAT_146af04e0 + (DAT_146af04e8 - iVar3),(longlong)iVar3 << 3)
      ;
    }
    DAT_146af04e8 = DAT_146af04e8 + -1;
  }
  return;
}


