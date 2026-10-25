// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141b32d50 FUN_141b32d50 body=587 status=ok
// SIG undefined FUN_141b32d50(void)

undefined8 * FUN_141b32d50(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 *local_res8;
  undefined8 local_res10;
  
  puVar9 = (undefined8 *)0x0;
  local_res10 = 0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_res10 = *(undefined8 *)(lVar3 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_res8 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x1;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    local_res8 = *(undefined8 **)(lVar3 + 0x50);
    puVar11 = puVar9;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    puVar11 = (undefined8 *)(ulonglong)((uint)puVar11 | 2);
    puVar10 = puVar9;
    puVar8 = puVar9;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    puVar10 = local_res8;
    puVar8 = *(undefined8 **)(lVar3 + 0x48);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x648);
  param_2[3] = local_res8;
  param_2[4] = local_res10;
  *param_2 = uVar5;
  param_2[1] = uVar4;
  param_2[2] = puVar8;
  param_2[5] = 0;
  if ((((ulonglong)puVar11 & 2) != 0) &&
     (puVar11 = (undefined8 *)(ulonglong)((uint)puVar11 & 0xfffffffd), puVar10 != (undefined8 *)0x0)
     ) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar10 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar12 = *(int *)((longlong)puVar10 + 0xc) == 0;
        if (bVar12) {
          *(int *)((longlong)puVar10 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar12) {
          uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
          puVar8 = puVar9;
          if (uVar7 != 0) {
            puVar8 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18);
          }
          puVar8[1] = puVar10;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        }
      }
      else {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
  if ((((ulonglong)puVar11 & 1) != 0) && (local_res8 != (undefined8 *)0x0)) {
    LOCK();
    piVar1 = (int *)(local_res8 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(local_res8 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))
         ) {
        LOCK();
        bVar12 = *(int *)((longlong)local_res8 + 0xc) == 0;
        if (bVar12) {
          *(int *)((longlong)local_res8 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar12) {
          uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar7 != 0) {
            puVar9 = (undefined8 *)
                     ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18);
          }
          puVar9[1] = local_res8;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar7);
        }
      }
      else {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141b32fa0 GetBufferSizeForConeTracing body=67 status=ok
// SIG undefined GetBufferSizeForConeTracing(void)

undefined4 * GetBufferSizeForConeTracing(undefined4 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined1 local_res8 [8];
  
  iVar2 = DAT_1464c19f4;
  puVar3 = (ulonglong *)FUN_141b08510(local_res8);
  uVar1 = *puVar3;
  *param_1 = (int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
                  (longlong)iVar2);
  param_1[1] = (int)((longlong)((ulonglong)(uint)((longlong)uVar1 >> 0x3f) << 0x20 | uVar1 >> 0x20)
                    / (longlong)iVar2);
  return param_1;
}



// FUNCTION 141b32ff0 GetJitterOffset body=75 status=ok
// SIG undefined GetJitterOffset(void)

float * GetJitterOffset(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if ((DAT_1464c19f0 != 0) && (DAT_1464c1a0c != 0)) {
    fVar2 = (float)DAT_1464c19f4;
    fVar1 = *(float *)(&DAT_1464c1ba0 + (longlong)param_2 * 8);
    param_1[1] = fVar2 * *(float *)(&DAT_1464c1ba4 + (longlong)param_2 * 8);
    *param_1 = fVar2 * fVar1;
    return param_1;
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  return param_1;
}



// FUNCTION 141b33040 FUN_141b33040 body=320 status=ok
// SIG undefined FUN_141b33040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33040(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3f0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e00;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3f0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3f0 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3f0 =
           TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c3f0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c3f0 != 0) {
      lVar7 = DAT_146a1c3f0;
    }
    DAT_146a1c3f0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3f0 + 0x30);
}



// FUNCTION 141b33180 FUN_141b33180 body=320 status=ok
// SIG undefined FUN_141b33180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33180(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3b8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e10;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3b8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3b8 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3b8 = FUN_141b27e30(lVar7);
      return *(undefined8 *)(DAT_146a1c3b8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141b27e30(lVar7);
    }
    LOCK();
    if (DAT_146a1c3b8 != 0) {
      lVar7 = DAT_146a1c3b8;
    }
    DAT_146a1c3b8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3b8 + 0x30);
}



// FUNCTION 141b332c0 FUN_141b332c0 body=320 status=ok
// SIG undefined FUN_141b332c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b332c0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3e8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e20;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3e8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3e8 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3e8 = FUN_141b27ec0(lVar7);
      return *(undefined8 *)(DAT_146a1c3e8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141b27ec0(lVar7);
    }
    LOCK();
    if (DAT_146a1c3e8 != 0) {
      lVar7 = DAT_146a1c3e8;
    }
    DAT_146a1c3e8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3e8 + 0x30);
}



// FUNCTION 141b33400 FUN_141b33400 body=320 status=ok
// SIG undefined FUN_141b33400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33400(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3a8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e30;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3a8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3a8 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3a8 =
           TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c3a8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c3a8 != 0) {
      lVar7 = DAT_146a1c3a8;
    }
    DAT_146a1c3a8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3a8 + 0x30);
}



// FUNCTION 141b33540 FUN_141b33540 body=320 status=ok
// SIG undefined FUN_141b33540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33540(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c390 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e40;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c390 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c390 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c390 = FUN_141b27fe0(lVar7);
      return *(undefined8 *)(DAT_146a1c390 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141b27fe0(lVar7);
    }
    LOCK();
    if (DAT_146a1c390 != 0) {
      lVar7 = DAT_146a1c390;
    }
    DAT_146a1c390 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c390 + 0x30);
}



// FUNCTION 141b33680 FUN_141b33680 body=320 status=ok
// SIG undefined FUN_141b33680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33680(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3b0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e50;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3b0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3b0 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3b0 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c3b0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c3b0 != 0) {
      lVar7 = DAT_146a1c3b0;
    }
    DAT_146a1c3b0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3b0 + 0x30);
}



// FUNCTION 141b337c0 FUN_141b337c0 body=320 status=ok
// SIG undefined FUN_141b337c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b337c0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3f8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e60;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3f8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3f8 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3f8 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,1,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c3f8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,1,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c3f8 != 0) {
      lVar7 = DAT_146a1c3f8;
    }
    DAT_146a1c3f8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3f8 + 0x30);
}



// FUNCTION 141b33900 FUN_141b33900 body=320 status=ok
// SIG undefined FUN_141b33900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33900(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c400 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e70;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c400 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c400 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c400 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c400 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c400 != 0) {
      lVar7 = DAT_146a1c400;
    }
    DAT_146a1c400 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c400 + 0x30);
}



// FUNCTION 141b33a40 FUN_141b33a40 body=320 status=ok
// SIG undefined FUN_141b33a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33a40(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3e0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e80;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3e0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3e0 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3e0 =
           TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c3e0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c3e0 != 0) {
      lVar7 = DAT_146a1c3e0;
    }
    DAT_146a1c3e0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3e0 + 0x30);
}



// FUNCTION 141b33b80 FUN_141b33b80 body=320 status=ok
// SIG undefined FUN_141b33b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33b80(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c3a0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33e90;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c3a0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c3a0 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c3a0 =
           TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c3a0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c3a0 != 0) {
      lVar7 = DAT_146a1c3a0;
    }
    DAT_146a1c3a0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c3a0 + 0x30);
}



// FUNCTION 141b33cc0 FUN_141b33cc0 body=320 status=ok
// SIG undefined FUN_141b33cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b33cc0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a1c398 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b33ea0;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a1c398 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a1c398 = 0;
        return _DAT_00000030;
      }
      DAT_146a1c398 =
           TStaticStateRHI<TStaticSamplerState<2,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a1c398 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<2,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a1c398 != 0) {
      lVar7 = DAT_146a1c398;
    }
    DAT_146a1c398 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a1c398 + 0x30);
}



// FUNCTION 141b33eb0 FUN_141b33eb0 body=152 status=ok
// SIG undefined FUN_141b33eb0(void)

undefined4 FUN_141b33eb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1b3b8) {
    _Init_thread_header(&DAT_146a1b3b8);
    if (DAT_146a1b3b8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RefractionQuality");
      lVar2 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      DAT_146a1b3b0 = lVar2;
      _Init_thread_footer(&DAT_146a1b3b8);
    }
  }
  return *(undefined4 *)(DAT_146a1b3b0 + 4);
}



// FUNCTION 141b33f50 FUN_141b33f50 body=248 status=ok
// SIG undefined FUN_141b33f50(void)

void FUN_141b33f50(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = param_3[1];
  uVar4 = (uint)*(ushort *)(param_1 + 0x1c);
  if ((uint)*(ushort *)(param_1 + 0x1c) <= (uint)*(ushort *)(param_1 + 0x14)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x14);
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0xc);
  if ((uint)*(ushort *)(param_1 + 0xc) <= (uint)*(ushort *)(param_1 + 4)) {
    uVar3 = (uint)*(ushort *)(param_1 + 4);
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  iVar2 = (int)lVar1 + 1 + uVar4;
  *(int *)(param_3 + 1) = iVar2;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*param_3 + (longlong)(int)lVar1 * 8),0,(ulonglong)(uVar4 + 1) << 3);
  if (*(short *)(param_1 + 6) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 4) * 8) =
         *(undefined8 *)(param_2 + 0x10);
  }
  if (*(short *)(param_1 + 0xe) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 0xc) * 8) =
         *(undefined8 *)(param_2 + 0x60);
  }
  if (*(short *)(param_1 + 0x16) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 0x14) * 8) =
         *(undefined8 *)(param_2 + 0x38);
  }
  if (*(short *)(param_1 + 0x1e) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 0x1c) * 8) =
         *(undefined8 *)(param_2 + 0x88);
  }
  return;
}



// FUNCTION 141b34050 FUN_141b34050 body=258 status=ok
// SIG undefined FUN_141b34050(void)

void FUN_141b34050(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  lVar1 = param_3[1];
  if (*(ushort *)(param_1 + 10) == 0) {
    uVar2 = 0;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x12);
  if (*(ushort *)(param_1 + 0x12) <= uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x1a);
  if (*(ushort *)(param_1 + 0x1a) <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x22);
  if (*(ushort *)(param_1 + 0x22) <= uVar2) {
    uVar3 = uVar2;
  }
  iVar4 = uVar3 + 1 + (int)lVar1;
  *(int *)(param_3 + 1) = iVar4;
  if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*param_3 + (longlong)(int)lVar1 * 8),0,(ulonglong)(uVar3 + 1) << 3);
  if (*(short *)(param_1 + 0xc) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 10) * 8) =
         *(undefined8 *)(param_2 + 0x88);
  }
  if (*(short *)(param_1 + 0x14) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 0x12) * 8) =
         *(undefined8 *)(param_2 + 0xb0);
  }
  if (*(short *)(param_1 + 0x1c) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 0x1a) * 8) =
         *(undefined8 *)(param_2 + 0xd8);
  }
  if (*(short *)(param_1 + 0x24) != 0) {
    *(undefined8 *)(*param_3 + (ulonglong)*(ushort *)(param_1 + 0x22) * 8) =
         *(undefined8 *)(param_2 + 0x100);
  }
  return;
}



// FUNCTION 141b34160 FUN_141b34160 body=11 status=ok
// SIG undefined FUN_141b34160(void)

longlong FUN_141b34160(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x648;
}



// FUNCTION 141b34170 FUN_141b34170 body=335 status=ok
// SIG undefined FUN_141b34170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b34170(longlong param_1)

{
  uint uVar1;
  
  if ((DAT_146ab62f3 == '\0') || (uVar1 = 0x2000, *(int *)(DAT_146a9d500 + 4) == 0)) {
    uVar1 = 0;
  }
  uVar1 = uVar1 | _DAT_146a9dacc | 1;
  FUN_141ac25e0(param_1 + 0x38,4,*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34) * 9,0x1c,uVar1,
                L"ScreenGridConeVisibility",0);
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_141ac25e0(param_1 + 0x68,4,*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34) * 0x5a,0xd,1,
                  0,0);
    FUN_141ac25e0(param_1 + 0x90,0x10,*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34) * 10,1,1,0
                  ,0);
    FUN_141ac25e0(param_1 + 0xb8,8,*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34),10,uVar1,
                  L"SurfelIrradiance",0);
    FUN_141ac25e0(param_1 + 0xe0,8,*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34),10,uVar1,
                  L"HeightfieldIrradiance",0);
  }
  return;
}



// FUNCTION 141b342c0 FUN_141b342c0 body=457 status=ok
// SIG undefined FUN_141b342c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b342c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((DAT_146ab62f3 == '\0') || (uVar3 = 0x2000, *(int *)(DAT_146a9d500 + 4) == 0)) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | _DAT_146a9dac8 | 1;
  FUN_141ac25e0(param_1 + 0x30,0x10,*(int *)(param_1 + 0x120) * *(int *)(param_1 + 0x124),1,uVar3,
                L"TileConeAxisAndCos",0);
  FUN_141ac25e0(param_1 + 0x58,0x10,*(int *)(param_1 + 0x120) * *(int *)(param_1 + 0x124),1,uVar3,
                L"TileConeDepthRanges",0);
  FUN_141ac25e0(param_1 + 0x80,4,*(undefined4 *)(param_1 + 0x128),0x1c,uVar3,L"NumCulledTilesArray",
                0);
  FUN_141ac25e0(param_1 + 0xa8,4,*(undefined4 *)(param_1 + 0x128),0x1c,uVar3,
                L"CulledTilesStartOffsetArray",0);
  if ((*(char *)(param_1 + 300) != '\0') && (*(int *)(param_1 + 0x128) < 0x10000)) {
    iVar1 = *(int *)(param_1 + 0x120);
    iVar4 = *(int *)(param_1 + 0x124);
    if (iVar1 * iVar4 < 0x10000) {
      uVar2 = 2;
      uVar5 = 0x20;
      goto LAB_141b34419;
    }
  }
  iVar4 = *(int *)(param_1 + 0x124);
  uVar2 = 4;
  iVar1 = *(int *)(param_1 + 0x120);
  uVar5 = 0x1c;
LAB_141b34419:
  FUN_141ac25e0(param_1 + 0xd0,uVar2,iVar4 * iVar1 * DAT_1464c1a20 * DAT_1464c1a2c,uVar5,uVar3,
                L"CulledTileDataArray",0);
  FUN_141ac25e0(param_1 + 0xf8,4,3,0x1c,0x101,0,0);
  return;
}



// FUNCTION 141b34490 FUN_141b34490 body=1220 status=ok
// SIG undefined FUN_141b34490(void)

void FUN_141b34490(float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong in_RCX;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  iVar9 = 0;
  if (0 < *(int *)(in_RCX + 200)) {
    lVar13 = 0;
    do {
      lVar10 = *(longlong *)(in_RCX + 0xc0) + lVar13;
      param_1 = (float)FUN_141ac14e0(param_1);
      puVar4 = *(undefined8 **)(lVar10 + 0x10);
      lVar12 = (longlong)*(int *)(puVar4 + 1);
      if (0 < lVar12) {
        plVar11 = (longlong *)*puVar4;
        iVar8 = 0;
        do {
          lVar5 = *plVar11;
          plVar11 = plVar11 + 1;
          iVar7 = iVar8 + 1;
          if (*(char *)(lVar5 + 0x1a98) == '\0') {
            iVar7 = iVar8;
          }
          lVar12 = lVar12 + -1;
          iVar8 = iVar7;
        } while (lVar12 != 0);
        if ((((0 < iVar7) &&
             (param_1 = (float)puVar4[5], ((uint)((ulonglong)puVar4[5] >> 0x30) & 1) != 0)) &&
            (*(int *)(DAT_146a177c8 + 4) == 1)) &&
           (0 < *(int *)(*(longlong *)(in_RCX + 8) + 0x1900))) {
          lVar12 = *(longlong *)(*(longlong *)(in_RCX + 8) + 0x18f8);
          fVar14 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar12 + 0x20) * 0.017453292);
          if (-0.99999 <= fVar14) {
            if (0.99999 <= fVar14) {
              fVar14 = 0.99999;
            }
          }
          else {
            fVar14 = -0.99999;
          }
          fVar17 = *(float *)(lVar12 + 0x10);
          fVar16 = (*(float *)(lVar12 + 8) - *(float *)(lVar10 + 0x8e4)) * fVar17;
          if (-125.0 <= fVar16) {
            if (126.0 <= fVar16) {
              fVar16 = 126.0;
            }
          }
          else {
            fVar16 = -125.0;
          }
          fVar16 = _guard_xfg_dispatch_icall_nop(2.0,fVar16);
          uVar18 = *(undefined4 *)(lVar12 + 0x18);
          *(float *)(lVar10 + 0x2810) = fVar16 * *(float *)(lVar12 + 0xc);
          *(float *)(lVar10 + 0x2814) = fVar17;
          *(float *)(lVar10 + 0x2818) = fVar14;
          *(undefined4 *)(lVar10 + 0x281c) = uVar18;
          uVar18 = *(undefined4 *)(lVar12 + 0x2c);
          *(undefined8 *)(lVar10 + 0x2820) = *(undefined8 *)(lVar12 + 0x24);
          *(undefined4 *)(lVar10 + 0x2828) = uVar18;
          *(undefined4 *)(lVar10 + 0x282c) = *(undefined4 *)(lVar12 + 0x14);
          if (*(longlong *)(lVar12 + 0x50) == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0x3f800000;
          }
          uVar1 = *(undefined4 *)(lVar12 + 8);
          uVar2 = *(undefined4 *)(lVar12 + 0x1c);
          *(undefined4 *)(lVar10 + 0x2830) = *(undefined4 *)(lVar12 + 0xc);
          *(undefined4 *)(lVar10 + 0x2834) = uVar1;
          *(undefined4 *)(lVar10 + 0x2838) = uVar18;
          *(undefined4 *)(lVar10 + 0x283c) = uVar2;
          uVar15 = __libm_sse2_sincosf_(*(undefined4 *)(lVar12 + 0x58));
          *(undefined8 *)(lVar10 + 0x2840) = uVar15;
          fVar17 = 1.0;
          *(undefined8 *)(lVar10 + 0x2850) = *(undefined8 *)(lVar12 + 0x50);
          *(undefined1 *)(lVar10 + 0x2848) = *(undefined1 *)(lVar12 + 0x99);
          *(undefined4 *)(lVar10 + 0x284c) = *(undefined4 *)(lVar12 + 0x9c);
          fVar14 = *(float *)(lVar12 + 0x5c) - *(float *)(lVar12 + 0x60);
          if (fVar14 <= 1e-05) {
            fVar14 = 1e-05;
          }
          if (*(longlong *)(lVar12 + 0x50) != 0) {
            lVar5 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + 0xb8);
            iVar8 = 0;
            if (lVar5 != 0) {
              iVar8 = *(int *)(lVar5 + 0x18);
            }
            fVar17 = (float)iVar8;
          }
          *(ulonglong *)(lVar10 + 0x2858) =
               CONCAT44(*(float *)(lVar12 + 0x60) * (1.0 / fVar14),1.0 / fVar14) ^
               0x8000000000000000;
          param_1 = 0.0;
          *(float *)(lVar10 + 0x2860) = fVar17;
          *(undefined4 *)(lVar10 + 0x2868) = *(undefined4 *)(lVar12 + 0x34);
          *(undefined4 *)(lVar10 + 0x286c) = *(undefined4 *)(lVar12 + 0x38);
          *(undefined1 *)(lVar10 + 0x2864) = 0;
          *(undefined8 *)(lVar10 + 0x2870) = 0;
          *(undefined4 *)(lVar10 + 0x2878) = 0;
          lVar5 = *(longlong *)(*(longlong *)(in_RCX + 8) + 0x1188);
          if ((lVar5 != 0) &&
             (param_1 = *(float *)(lVar12 + 0x3c) * 0.3,
             0.0001 < *(float *)(lVar12 + 0x40) * 0.59 + param_1 + *(float *)(lVar12 + 0x44) * 0.11)
             ) {
            lVar6 = *(longlong *)(lVar5 + 0x30);
            uVar3 = *(uint *)(lVar6 + 0x50);
            *(ulonglong *)(lVar10 + 0x2870) =
                 CONCAT44(*(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x30)) ^
                 0x8000000080000000;
            *(undefined1 *)(lVar10 + 0x2864) = 1;
            *(uint *)(lVar10 + 0x2878) = uVar3 ^ 0x80000000;
            lVar5 = *(longlong *)(lVar5 + 0x30);
            fVar16 = *(float *)(lVar5 + 0x104) * 0.59 + *(float *)(lVar5 + 0x100) * 0.3 +
                     *(float *)(lVar5 + 0x108) * 0.11;
            param_1 = fVar16 * *(float *)(lVar12 + 0x40);
            fVar14 = *(float *)(lVar12 + 0x44);
            fVar17 = *(float *)(lVar12 + 0x48);
            *(float *)(lVar10 + 0x287c) = fVar16 * *(float *)(lVar12 + 0x3c);
            *(float *)(lVar10 + 0x2880) = param_1;
            *(float *)(lVar10 + 0x2884) = fVar16 * fVar14;
            *(float *)(lVar10 + 0x2888) = fVar16 * fVar17;
          }
        }
      }
      iVar9 = iVar9 + 1;
      lVar13 = lVar13 + 0x30d0;
    } while (iVar9 < *(int *)(in_RCX + 200));
  }
  return;
}



// FUNCTION 141b34960 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34990 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b349c0 FUN_141b349c0 body=47 status=ok
// SIG undefined FUN_141b349c0(void)

void FUN_141b349c0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = FUN_141b2e790(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b349f0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34a20 FUN_141b34a20 body=47 status=ok
// SIG undefined FUN_141b34a20(void)

void FUN_141b34a20(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = FUN_141b2e930(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34a50 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010300;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34ab0 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,1,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_14 = 0x10000;
  local_10 = 7;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34b10 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_10 = 7;
  local_c = 0x101;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34b70 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 1;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34be0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x1010102;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34c50 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<2,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 2;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b34cc0 FUN_141b34cc0 body=350 status=ok
// SIG undefined FUN_141b34cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b34cc0(int *param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((0 < param_1[2]) && (0 < param_1[1])) {
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_78 = 0x202;
    if ((char)param_1[3] != '\0') {
      local_78 = 0x204;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    local_70 = &local_58;
    (**(code **)(*DAT_146ab6358 + 0x490))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,
               (&DAT_1464ca1c4)[(longlong)*param_1 * 10] * param_1[1] * param_1[2]);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 4,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    local_70 = (undefined8 *)CONCAT71(local_70._1_7_,(char)*param_1);
    local_78 = (&DAT_1464ca1c4)[(longlong)*param_1 * 10];
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 4));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 141b34e20 FUN_141b34e20 body=229 status=ok
// SIG undefined FUN_141b34e20(void)

void FUN_141b34e20(int *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  if (0 < *param_1) {
    if ((DAT_146ab62cc < 0x20) && ((0xc8c51814U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar2 = 1;
    lVar3 = 1;
    if (!bVar1) {
      lVar3 = 0xd;
      iVar2 = 4;
    }
    FUN_141ac25e0(param_1 + 2,(&DAT_1464ca1c4)[lVar3 * 10],iVar2 * *param_1,lVar3,0,
                  L"FDistanceFieldObjectBuffers::Bounds",0);
    FUN_141ac25e0(param_1 + 0xc,(&DAT_1464ca1c4)[lVar3 * 10],iVar2 * *param_1 * DAT_1464c1a34,lVar3,
                  0,L"FDistanceFieldObjectBuffers::Data",0);
  }
  return;
}



// FUNCTION 141b34f10 FUN_141b34f10 body=486 status=ok
// SIG undefined FUN_141b34f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b34f10(longlong *param_1,int param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined1 param_6,undefined1 param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  int local_c8;
  uint local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [16];
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = param_2 * param_3;
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = &local_88;
  lVar6 = 0;
  local_64 = 0;
  local_58 = 0;
  local_c0 = param_4 | 0x208;
  *(int *)(param_1 + 3) = local_c8;
  local_78 = 1;
  local_74 = _DAT_1468b5d78;
  uStack_70 = uRam00000001468b5d7c;
  uStack_6c = uRam00000001468b5d80;
  uStack_68 = uRam00000001468b5d84;
  local_50 = 0;
  local_60 = param_5;
  (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,&local_a8,&DAT_146ab6e78,param_2);
  if (param_1 != &local_a8) {
    puVar3 = (undefined8 *)*param_1;
    *param_1 = local_a8;
    local_a8 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 != 0) {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
  local_c0 = CONCAT31(local_c0._1_3_,param_7);
  local_c8 = CONCAT31(local_c8._1_3_,param_6);
  (**(code **)(*DAT_146ab6358 + 0x618))(DAT_146ab6358,local_a0,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_a0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_a0);
  (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_98,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,local_98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
  return;
}



// FUNCTION 141b35100 FUN_141b35100 body=122 status=ok
// SIG undefined FUN_141b35100(void)

void FUN_141b35100(int *param_1)

{
  if (0 < *param_1) {
    FUN_141ac25e0(param_1 + 2,0x10,*param_1 * DAT_1464c1798,1,1,0,0);
    FUN_141ac25e0(param_1 + 0xc,0x10,*param_1 * DAT_1464c32a8,1,1,0,0);
  }
  return;
}



// FUNCTION 141b35180 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FShadowObjectCullPS<1>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"SCATTER_CULLING_COUNT_PASS",1);
  return;
}



// FUNCTION 141b351c0 ModifyCompilationEnvironment body=54 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FShadowObjectCullPS<0>::ModifyCompilationEnvironment(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"SCATTER_CULLING_COUNT_PASS",0);
  return;
}



// FUNCTION 141b35200 FUN_141b35200 body=188 status=ok
// SIG undefined FUN_141b35200(void)

void FUN_141b35200(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"CONE_TRACE_OBJECTS",1);
  FUN_141a172f0(param_2,L"CONE_TRACE_GLOBAL_DISPATCH_SIZEX",8);
  FUN_1404a3a40(param_2,L"OUTPUT_VISIBILITY_DIRECTLY",&DAT_143f591f0);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_1404a3a40(param_2,L"USE_GLOBAL_DISTANCE_FIELD",&DAT_143f591f0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b352c0 FUN_141b352c0 body=185 status=ok
// SIG undefined FUN_141b352c0(void)

void FUN_141b352c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"CONE_TRACE_OBJECTS",0);
  FUN_141a172f0(param_2,L"CONE_TRACE_GLOBAL_DISPATCH_SIZEX",8);
  FUN_1404a3a40(param_2,L"OUTPUT_VISIBILITY_DIRECTLY",&DAT_143f591f0);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_1404a3a40(param_2,L"USE_GLOBAL_DISTANCE_FIELD",&DAT_143f591f0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b35380 ModifyCompilationEnvironment body=214 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TConeTraceScreenGridObjectOcclusionCS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"CULLED_TILE_DATA_STRIDE",DAT_1464c1a20);
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_141a172f0(param_2,L"CONE_TRACE_OBJECTS_THREADGROUP_SIZE",DAT_1464c1a24);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_IRRADIANCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_GLOBAL_DISTANCE_FIELD",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b35460 ModifyCompilationEnvironment body=211 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TConeTraceScreenGridObjectOcclusionCS<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"CULLED_TILE_DATA_STRIDE",DAT_1464c1a20);
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_141a172f0(param_2,L"CONE_TRACE_OBJECTS_THREADGROUP_SIZE",DAT_1464c1a24);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_IRRADIANCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_GLOBAL_DISTANCE_FIELD",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b35540 ModifyCompilationEnvironment body=211 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TConeTraceScreenGridObjectOcclusionCS<0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"CULLED_TILE_DATA_STRIDE",DAT_1464c1a20);
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_141a172f0(param_2,L"CONE_TRACE_OBJECTS_THREADGROUP_SIZE",DAT_1464c1a24);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_IRRADIANCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_GLOBAL_DISTANCE_FIELD",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b35620 ModifyCompilationEnvironment body=208 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TConeTraceScreenGridObjectOcclusionCS<0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"CULLED_TILE_DATA_STRIDE",DAT_1464c1a20);
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_141a172f0(param_2,L"CONE_TRACE_OBJECTS_THREADGROUP_SIZE",DAT_1464c1a24);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_IRRADIANCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_GLOBAL_DISTANCE_FIELD",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b35730 ModifyCompilationEnvironment body=142 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingCS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SCATTER_TILE_CULLING",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DF_SHADOW_QUALITY",1);
  return;
}



// FUNCTION 141b357c0 ModifyCompilationEnvironment body=142 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingCS<1,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SCATTER_TILE_CULLING",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DF_SHADOW_QUALITY",2);
  return;
}



// FUNCTION 141b35850 ModifyCompilationEnvironment body=145 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingCS<2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SCATTER_TILE_CULLING",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"POINT_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DF_SHADOW_QUALITY",1);
  return;
}



// FUNCTION 141b358f0 ModifyCompilationEnvironment body=145 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingCS<2,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SCATTER_TILE_CULLING",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"POINT_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DF_SHADOW_QUALITY",2);
  return;
}



// FUNCTION 141b35990 ModifyCompilationEnvironment body=145 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingCS<0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SCATTER_TILE_CULLING",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DF_SHADOW_QUALITY",1);
  return;
}



// FUNCTION 141b35a30 ModifyCompilationEnvironment body=145 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingCS<0,2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",8);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",8);
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SCATTER_TILE_CULLING",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"POINT_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"DF_SHADOW_QUALITY",2);
  return;
}



// FUNCTION 141b35ad0 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingUpsamplePS<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPSAMPLE_REQUIRED",1);
  return;
}



// FUNCTION 141b35b10 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDistanceFieldShadowingUpsamplePS<0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPSAMPLE_REQUIRED",0);
  return;
}



// FUNCTION 141b35b90 FUN_141b35b90 body=113 status=ok
// SIG undefined FUN_141b35b90(void)

void FUN_141b35b90(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",1);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141b35c10 FUN_141b35c10 body=110 status=ok
// SIG undefined FUN_141b35c10(void)

void FUN_141b35c10(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",1);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141b35c80 FUN_141b35c80 body=113 status=ok
// SIG undefined FUN_141b35c80(void)

void FUN_141b35c80(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141b35d00 FUN_141b35d00 body=110 status=ok
// SIG undefined FUN_141b35d00(void)

void FUN_141b35d00(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141b35d70 FUN_141b35d70 body=113 status=ok
// SIG undefined FUN_141b35d70(void)

void FUN_141b35d70(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",1);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141b35df0 FUN_141b35df0 body=110 status=ok
// SIG undefined FUN_141b35df0(void)

void FUN_141b35df0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",1);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141b35e60 FUN_141b35e60 body=116 status=ok
// SIG undefined FUN_141b35e60(void)

void FUN_141b35e60(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",1);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",1);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141b35ee0 FUN_141b35ee0 body=113 status=ok
// SIG undefined FUN_141b35ee0(void)

void FUN_141b35ee0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",1);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",1);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141b35f60 FUN_141b35f60 body=116 status=ok
// SIG undefined FUN_141b35f60(void)

void FUN_141b35f60(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",1);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141b35fe0 FUN_141b35fe0 body=113 status=ok
// SIG undefined FUN_141b35fe0(void)

void FUN_141b35fe0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",1);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141b36060 FUN_141b36060 body=110 status=ok
// SIG undefined FUN_141b36060(void)

void FUN_141b36060(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",1);
  return;
}



// FUNCTION 141b360d0 FUN_141b360d0 body=107 status=ok
// SIG undefined FUN_141b360d0(void)

void FUN_141b360d0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_FOG_INSCATTERING_TEXTURE",0);
  FShaderCompilerDefinitions::SetDefine
            (param_2 + 0x200,L"SUPPORT_FOG_DIRECTIONAL_LIGHT_INSCATTERING",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SUPPORT_VOLUMETRIC_FOG",0);
  FUN_141a172f0(param_2,L"GBX_USE_CUSTOM_DEPTH_TEXTURE_FOR_FOG",0);
  return;
}



// FUNCTION 141b36140 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterHistoryPS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",1);
  return;
}



// FUNCTION 141b36180 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TFilterHistoryPS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MANUALLY_CLAMP_UV",0);
  return;
}



// FUNCTION 141b361c0 FUN_141b361c0 body=144 status=ok
// SIG undefined FUN_141b361c0(void)

void FUN_141b361c0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"CULLED_TILE_DATA_STRIDE",DAT_1464c1a20);
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_141a172f0(param_2,L"CONE_TRACE_OBJECTS_THREADGROUP_SIZE",DAT_1464c1a24);
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FUN_141a172f0(param_2,L"SCATTER_CULLING_COUNT_PASS",1);
  return;
}



// FUNCTION 141b36250 FUN_141b36250 body=141 status=ok
// SIG undefined FUN_141b36250(void)

void FUN_141b36250(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"CULLED_TILE_DATA_STRIDE",DAT_1464c1a20);
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_141a172f0(param_2,L"CONE_TRACE_OBJECTS_THREADGROUP_SIZE",DAT_1464c1a24);
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FUN_141a172f0(param_2,L"SCATTER_CULLING_COUNT_PASS",0);
  return;
}



// FUNCTION 141b362e0 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TRemoveObjectsFromBufferCS<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPDATEOBJECTS_THREADGROUP_SIZE",0x40);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"REMOVE_FROM_SAME_BUFFER",1);
  return;
}



// FUNCTION 141b36320 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TRemoveObjectsFromBufferCS<0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"UPDATEOBJECTS_THREADGROUP_SIZE",0x40);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"REMOVE_FROM_SAME_BUFFER",0);
  return;
}



// FUNCTION 141b36360 ModifyCompilationEnvironment body=104 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TVisualizeMeshDistanceFieldCS<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1794);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_GLOBAL_DISTANCE_FIELD",1);
  return;
}



// FUNCTION 141b363d0 ModifyCompilationEnvironment body=101 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TVisualizeMeshDistanceFieldCS<0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1794);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_GLOBAL_DISTANCE_FIELD",0);
  return;
}



// FUNCTION 141b36440 ModifyCompilationEnvironment body=141 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FBuildTileConesCS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1794);
  FUN_141a172f0(param_2,L"DOWNSAMPLE_FACTOR",2);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b364d0 ModifyCompilationEnvironment body=119 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FCombineConeVisibilityCS::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"COMBINE_CONES_SIZEX",8);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b36590 ModifyCompilationEnvironment body=127 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FComputeCulledTilesStartOffsetCS::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141a172f0(param_2,L"CULLED_TILE_DATA_STRIDE",DAT_1464c1a20);
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_141a172f0(param_2,L"CONE_TRACE_OBJECTS_THREADGROUP_SIZE",DAT_1464c1a24);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"COMPUTE_START_OFFSET_GROUP_SIZE",0x40);
  return;
}



// FUNCTION 141b36610 ModifyCompilationEnvironment body=142 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FComputeIrradianceScreenGridCS::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"CULLED_TILE_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  FUN_1404a3a40(param_2,L"IRRADIANCE_FROM_SURFELS",&DAT_143f591f0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b366a0 ModifyCompilationEnvironment body=119 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FComputeStepBentNormalScreenGridCS::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_141a172f0(param_2,L"SCREEN_GRID_IRRADIANCE_THREADGROUP_SIZE_X",8);
  FUN_141a172f0(param_2,L"TRACE_DOWNSAMPLE_FACTOR",DAT_1464c19f4);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  return;
}



// FUNCTION 141b36740 FUN_141b36740 body=58 status=ok
// SIG undefined FUN_141b36740(void)

void FUN_141b36740(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1794);
  return;
}



// FUNCTION 141b367a0 FUN_141b367a0 body=80 status=ok
// SIG undefined FUN_141b367a0(void)

void FUN_141b367a0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c1bf8);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c1bfc);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c1c00);
  return;
}



// FUNCTION 141b367f0 FUN_141b367f0 body=80 status=ok
// SIG undefined FUN_141b367f0(void)

void FUN_141b367f0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c1c08);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c1c0c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c1c10);
  return;
}



// FUNCTION 141b36840 FUN_141b36840 body=80 status=ok
// SIG undefined FUN_141b36840(void)

void FUN_141b36840(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADGROUP_X",DAT_1464c1c18);
  FUN_141a172f0(param_2,L"THREADGROUP_Y",DAT_1464c1c1c);
  FUN_141a172f0(param_2,L"THREADGROUP_Z",DAT_1464c1c20);
  return;
}



// FUNCTION 141b368b0 FUN_141b368b0 body=57 status=ok
// SIG undefined FUN_141b368b0(void)

void FUN_141b368b0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"LIGHT_VPLS_THREADGROUP_SIZE",0x40);
  return;
}



// FUNCTION 141b36910 FUN_141b36910 body=80 status=ok
// SIG undefined FUN_141b36910(void)

void FUN_141b36910(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"SHADOW_TILE_ARRAY_DATA_STRIDE",DAT_1464c1a44);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEX",DAT_1464c1790);
  FUN_141a172f0(param_2,L"THREADGROUP_SIZEY",DAT_1464c1794);
  return;
}



// FUNCTION 141b36960 FUN_141b36960 body=193 status=ok
// SIG undefined FUN_141b36960(void)

void FUN_141b36960(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (((*(uint *)(param_3 + 0x8c) & 0x4000000) != 0) && (param_4 == '\0')) {
    iVar1 = *(int *)(param_3 + 200);
    lVar3 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5);
    uVar4 = 1 << ((byte)iVar1 & 0x1f);
    lVar2 = *(longlong *)(param_2 + 0x1bd0);
    if (*(longlong *)(param_2 + 0x1bd0) == 0) {
      lVar2 = param_2 + 0x1bc0;
    }
    if ((*(uint *)(lVar2 + lVar3 * 4) & uVar4) != 0) {
      uVar5 = FUN_14274fcb0(param_2);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      return;
    }
    lVar2 = *(longlong *)(param_2 + 0x1bf0);
    if (*(longlong *)(param_2 + 0x1bf0) == 0) {
      lVar2 = param_2 + 0x1be0;
    }
    if ((*(uint *)(lVar2 + lVar3 * 4) & uVar4) != 0) {
      fVar6 = (float)FUN_14274fcb0(param_2);
      *(float *)(param_1 + 0x30) = fVar6 - 1.0;
    }
  }
  return;
}



// FUNCTION 141b36a30 FUN_141b36a30 body=5613 status=ok
// SIG undefined FUN_141b36a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b36a30(char param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5,
                  float *param_6,char param_7,undefined8 param_8,longlong *param_9,
                  longlong *param_10,longlong *param_11)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  float *pfVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
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
  char local_res18 [8];
  char local_res20 [8];
  int local_4f4;
  int local_4d8;
  int local_4d4;
  uint local_4d0;
  longlong local_4c8;
  undefined4 local_4b8 [2];
  float local_4b0;
  float local_4ac;
  int local_4a8;
  int iStack_4a4;
  int local_4a0;
  int local_498;
  int iStack_494;
  int local_490;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  undefined8 local_458;
  float fStack_450;
  float fStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  float local_428;
  float local_424;
  float local_420;
  float local_418;
  float fStack_414;
  float fStack_410;
  undefined4 uStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  undefined8 uStack_3c4;
  float fStack_3bc;
  undefined4 uStack_3b8;
  float fStack_3b4;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  float fStack_3a0;
  undefined4 uStack_39c;
  float local_388;
  float fStack_384;
  float fStack_380;
  undefined4 uStack_37c;
  float local_378;
  undefined8 uStack_374;
  undefined8 uStack_36c;
  float fStack_364;
  undefined8 uStack_360;
  undefined8 local_358;
  float fStack_350;
  undefined4 uStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  undefined4 uStack_33c;
  longlong local_338;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
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
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [48];
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
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
  
  lVar5 = *(longlong *)(param_3 + 8);
  piVar1 = (int *)(lVar5 + 0x15f0);
  *(undefined4 *)(param_9 + 1) = 0;
  local_338 = lVar5;
  if (0x7fffffff < *(uint *)((longlong)param_9 + 0xc)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_9,0);
  }
  (**(code **)(**(longlong **)(param_4 + 8) + 0x90))
            (*(longlong **)(param_4 + 8),&local_478,&local_4b0,&local_498,&local_4a8,local_res20,
             local_res18,local_4b8,param_9);
  if ((((-1 < local_498) && (-1 < iStack_494)) && (-1 < local_490)) && (0 < (int)param_9[1])) {
    lVar18 = *(longlong *)(param_4 + 8);
    if ((*(int *)(lVar18 + 0x10) != 2) ||
       (local_4c8 = 1, (*(uint *)(lVar18 + 0x18) & 0x40000000) != 0)) {
      local_4c8 = 0;
    }
    if ((1 < (int)param_9[1]) || (*(float *)(lVar18 + 0xd8) < _DAT_1464c1a38)) {
      local_448 = 0;
      uStack_440 = 0x100000000;
      local_4d4 = 0;
      local_4d8 = 0;
      if (param_7 != '\0') {
        puVar14 = (undefined8 *)FSurfelBufferAllocator::FindAllocation(lVar5 + 0x1628,param_4);
        piVar15 = (int *)FSurfelBufferAllocator::FindAllocation(lVar5 + 0x1698,param_4);
        if (puVar14 != (undefined8 *)0x0) {
          local_448 = *puVar14;
          uStack_440 = puVar14[1];
          local_3f8 = (float)*piVar15;
          fStack_3f4 = (float)piVar15[1];
          local_4d8 = piVar15[2];
          fStack_3ec = (float)piVar15[3];
          fStack_3f0 = (float)local_4d8;
          FUN_141dcda20(param_2,param_3,*(undefined8 *)(param_3 + 0xc0),param_4,*param_9,&local_448)
          ;
          if ((int)uStack_440 == 0) {
            local_4d8 = 0;
          }
          local_4d4 = (int)local_3f8;
        }
      }
      iVar13 = 0;
      if (param_1 != '\0') {
        lVar18 = param_9[1];
        *(undefined4 *)(param_4 + 0x80) = 0;
        if (*(int *)(param_4 + 0x84) != (int)lVar18) {
          TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo();
          iVar13 = *(int *)(param_4 + 0x80);
        }
        lVar18 = param_9[1];
        iVar12 = (int)lVar18 + iVar13;
        *(int *)(param_4 + 0x80) = iVar12;
        if (*(int *)(param_4 + 0x84) < iVar12) {
          TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow();
        }
        lVar19 = *(longlong *)(param_4 + 0x78);
        if (*(longlong *)(param_4 + 0x78) == 0) {
          lVar19 = param_4 + 0x70;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar19 + (longlong)iVar13 * 4),0,(longlong)(int)lVar18 << 2);
      }
      uVar22 = 0;
      local_4d0 = 0;
      uVar23 = uVar22;
      if (0 < (int)param_9[1]) {
        do {
          uVar20 = (uint)uVar22;
          lVar18 = *param_9;
          lVar19 = uVar23 * 0x40;
          pfVar16 = (float *)(lVar19 + 0x10 + lVar18);
          local_318 = *pfVar16;
          fStack_314 = pfVar16[1];
          local_458 = *(longlong *)pfVar16;
          fStack_450 = pfVar16[2];
          fStack_44c = pfVar16[3];
          pfVar16 = (float *)(lVar19 + 0x20 + lVar18);
          fVar40 = *pfVar16;
          fVar26 = pfVar16[1];
          fVar27 = pfVar16[2];
          fVar50 = pfVar16[3];
          pfVar16 = (float *)(lVar19 + lVar18);
          local_3d8 = *pfVar16;
          fStack_3d4 = pfVar16[1];
          fStack_3d0 = pfVar16[2];
          fStack_3cc = pfVar16[3];
          puVar14 = (undefined8 *)(lVar19 + 0x30 + lVar18);
          local_438 = *puVar14;
          uStack_430 = puVar14[1];
          local_1b8._4_4_ = fStack_314;
          local_1b8._0_4_ = fStack_314;
          local_1b8._8_4_ = fStack_314;
          local_1b8._12_4_ = fStack_314;
          fVar25 = fStack_314 * fStack_314 + local_318 * local_318 + fStack_450 * fStack_450;
          fVar24 = fVar26 * fVar26 + fVar40 * fVar40 + fVar27 * fVar27;
          local_1c8._4_4_ = fStack_3d4;
          local_1c8._0_4_ = fStack_3d4;
          local_1c8._8_4_ = fStack_3d4;
          local_1c8._12_4_ = fStack_3d4;
          if (fVar25 <= fVar24) {
            fVar25 = fVar24;
          }
          fVar24 = fStack_3d4 * fStack_3d4 + local_3d8 * local_3d8 + fStack_3d0 * fStack_3d0;
          if (fVar25 <= fVar24) {
            fVar25 = fVar24;
          }
          if (fVar25 <= 0.0) {
            if (param_1 != '\0') {
              lVar18 = *(longlong *)(param_4 + 0x78);
              if (*(longlong *)(param_4 + 0x78) == 0) {
                lVar18 = param_4 + 0x70;
              }
              *(undefined4 *)(lVar18 + uVar23 * 4) = 0xffffffff;
            }
          }
          else {
            if (param_1 == '\0') {
              lVar18 = *(longlong *)(param_4 + 0x78);
              if (*(longlong *)(param_4 + 0x78) == 0) {
                lVar18 = param_4 + 0x70;
              }
              local_4f4 = *(int *)(lVar18 + uVar23 * 4);
            }
            else {
              local_4f4 = param_5 + (int)param_10[1];
              *piVar1 = *piVar1 + 1;
            }
            iVar13 = (int)param_10[1];
            *(int *)(param_10 + 1) = iVar13 + 1;
            local_3f8 = fVar27;
            fStack_3f4 = fVar27;
            fStack_3f0 = fVar27;
            fStack_3ec = fVar27;
            local_328 = local_3d8;
            fStack_324 = fStack_3d4;
            fStack_320 = fStack_3d0;
            fStack_31c = fStack_3cc;
            fStack_310 = fStack_450;
            fStack_30c = fStack_44c;
            local_308 = fVar40;
            fStack_304 = fVar26;
            fStack_300 = fVar27;
            fStack_2fc = fVar50;
            local_2f8 = local_438;
            uStack_2f0 = uStack_430;
            local_1e8 = fVar26;
            fStack_1e4 = fVar26;
            fStack_1e0 = fVar26;
            fStack_1dc = fVar26;
            local_1a8 = fStack_3d0;
            fStack_1a4 = fStack_3d0;
            fStack_1a0 = fStack_3d0;
            fStack_19c = fStack_3d0;
            local_198 = fStack_450;
            fStack_194 = fStack_450;
            fStack_190 = fStack_450;
            fStack_18c = fStack_450;
            if (*(int *)((longlong)param_10 + 0xc) < iVar13 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_10,iVar13);
            }
            *(int *)(*param_10 + (longlong)iVar13 * 4) = local_4f4;
            fVar25 = fVar26;
            fVar24 = fVar27;
            if (local_res18[0] != '\0') {
              FMatrix::GetScaleVector(&local_328,&local_428);
              fVar25 = ABS(local_428);
              if (ABS(local_424) <= ABS(local_428)) {
                fVar25 = ABS(local_424);
              }
              if (local_420 <= 0.0) {
                if (0.0 <= local_420) {
                  fVar25 = 0.0;
                }
                else {
                  fVar25 = -fVar25;
                }
              }
              fVar25 = fVar25 / ABS(local_420);
              fVar40 = fVar40 * fVar25;
              fVar24 = fVar27 * fVar25;
              fVar25 = fVar26 * fVar25;
              fVar50 = fStack_2fc;
              local_3f8 = fVar24;
              fStack_3f4 = fVar27;
              fStack_3f0 = fVar27;
              fStack_3ec = fVar27;
              local_308 = fVar40;
              fStack_304 = fVar25;
              fStack_300 = fVar24;
              local_1e8 = fVar25;
              fStack_1e4 = fVar26;
              fStack_1e0 = fVar26;
              fStack_1dc = fVar26;
            }
            fVar11 = fStack_3cc;
            fVar10 = fStack_3d0;
            fVar9 = fStack_3d4;
            fVar8 = local_3d8;
            fVar3 = fStack_44c;
            fVar41 = fStack_450;
            local_3c8 = (local_46c - local_478) * 0.5;
            fStack_3bc = 0.0;
            uStack_3b8 = 0;
            fStack_3b4 = (local_468 - local_474) * 0.5;
            fStack_344 = (local_474 + local_468) * 0.5;
            uStack_3b0 = 0;
            local_348 = (local_478 + local_46c) * 0.5;
            fStack_340 = (local_470 + local_464) * 0.5;
            fStack_3a0 = (local_464 - local_470) * 0.5;
            uStack_3c4 = 0;
            uStack_33c = 0x3f800000;
            fVar46 = local_3c8 * 1.0 + 0.0 + 0.0 + local_348 * 0.0;
            fVar47 = local_3c8 * 0.0 + 0.0 + 0.0 + fStack_344 * 0.0;
            fVar48 = local_3c8 * 0.0 + 0.0 + 0.0 + fStack_340 * 0.0;
            fVar49 = local_3c8 * 0.0 + 0.0 + 0.0 + 0.0;
            fVar30 = fStack_3b4 * 0.0 + 0.0 + 0.0 + local_348 * 0.0;
            fVar33 = fStack_3b4 * 1.0 + 0.0 + 0.0 + fStack_344 * 0.0;
            fVar34 = fStack_3b4 * 0.0 + 0.0 + 0.0 + fStack_340 * 0.0;
            fVar36 = fStack_3b4 * 0.0 + 0.0 + 0.0 + 0.0;
            local_3a8 = 0;
            uStack_39c = 0;
            fVar26 = fStack_3a0 * 0.0 + 0.0 + local_348 * 0.0;
            fVar27 = fStack_3a0 * 0.0 + 0.0 + fStack_344 * 0.0;
            fVar28 = fStack_3a0 * 1.0 + 0.0 + fStack_340 * 0.0;
            fVar29 = fStack_3a0 * 0.0 + 0.0 + 0.0;
            fVar7 = (float)local_458;
            fVar31 = local_458._4_4_;
            local_228 = fVar47 * (float)local_458 + fVar46 * local_3d8 + fVar48 * fVar40 +
                        fVar49 * (float)local_438;
            fStack_224 = fVar47 * local_458._4_4_ + fVar46 * fStack_3d4 + fVar48 * fVar25 +
                         fVar49 * local_438._4_4_;
            fStack_220 = fVar47 * fStack_450 + fVar46 * fStack_3d0 + fVar48 * fVar24 +
                         fVar49 * (float)uStack_430;
            fStack_21c = fVar47 * fStack_44c + fVar46 * fStack_3cc + fVar48 * fVar50 +
                         fVar49 * uStack_430._4_4_;
            fVar46 = local_348 * 1.0 + 0.0;
            fVar47 = fStack_344 * 1.0 + 0.0;
            fVar48 = fStack_340 * 1.0 + 0.0;
            local_218 = fVar33 * (float)local_458 + fVar30 * local_3d8 + fVar34 * fVar40 +
                        fVar36 * (float)local_438;
            fStack_214 = fVar33 * local_458._4_4_ + fVar30 * fStack_3d4 + fVar34 * fVar25 +
                         fVar36 * local_438._4_4_;
            fStack_210 = fVar33 * fStack_450 + fVar30 * fStack_3d0 + fVar34 * fVar24 +
                         fVar36 * (float)uStack_430;
            fStack_20c = fVar33 * fStack_44c + fVar30 * fStack_3cc + fVar34 * fVar50 +
                         fVar36 * uStack_430._4_4_;
            local_208 = fVar27 * (float)local_458 + fVar26 * local_3d8 + fVar28 * fVar40 +
                        fVar29 * (float)local_438;
            fStack_204 = fVar27 * local_458._4_4_ + fVar26 * fStack_3d4 + fVar28 * fVar25 +
                         fVar29 * local_438._4_4_;
            fStack_200 = fVar27 * fStack_450 + fVar26 * fStack_3d0 + fVar28 * fVar24 +
                         fVar29 * (float)uStack_430;
            fStack_1fc = fVar27 * fStack_44c + fVar26 * fStack_3cc + fVar28 * fVar50 +
                         fVar29 * uStack_430._4_4_;
            fVar29 = fVar47 * (float)local_458 + fVar46 * local_3d8 + fVar48 * fVar40 +
                     (float)local_438 * 1.0;
            fVar30 = fVar47 * local_458._4_4_ + fVar46 * fStack_3d4 + fVar48 * fVar25 +
                     local_438._4_4_ * 1.0;
            fVar33 = fVar47 * fStack_450 + fVar46 * fStack_3d0 + fVar48 * fVar24 +
                     (float)uStack_430 * 1.0;
            fStack_1ec = fVar47 * fStack_44c + fVar46 * fStack_3cc + fVar48 * fVar50 +
                         uStack_430._4_4_ * 1.0;
            local_1f8 = fVar29;
            fStack_1f4 = fVar30;
            fStack_1f0 = fVar33;
            local_188 = fVar29;
            fStack_184 = fVar30;
            fStack_180 = fVar33;
            fStack_17c = fStack_1ec;
            pfVar16 = (float *)FMatrix::GetScaleVector(&local_228,local_128);
            iVar13 = (int)param_11[1];
            fVar26 = *pfVar16;
            fVar27 = pfVar16[2];
            uStack_3c4 = CONCAT44(fVar33,fVar33);
            fVar28 = pfVar16[1];
            *(int *)(param_11 + 1) = iVar13 + 1;
            fStack_47c = SQRT(fVar26 * fVar26 + fVar28 * fVar28 + fVar27 * fVar27);
            local_488 = fVar29;
            fStack_484 = fVar30;
            fStack_480 = fVar33;
            local_3c8 = fVar33;
            fStack_3bc = fVar33;
            local_178 = fVar30;
            fStack_174 = fVar30;
            fStack_170 = fVar30;
            fStack_16c = fVar30;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11,iVar13);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)iVar13 * 0x10);
            *puVar14 = CONCAT44(fStack_484,local_488);
            puVar14[1] = CONCAT44(fStack_47c,fStack_480);
            fVar26 = (local_46c - local_478) * 0.5;
            local_138 = (local_478 + local_46c) * 0.5;
            fStack_130 = (local_470 + local_464) * 0.5;
            fStack_134 = (local_474 + local_468) * 0.5;
            fVar27 = (local_464 - local_470) * 0.5;
            local_378 = (local_468 - local_474) * 0.5;
            if (local_378 <= fVar26) {
              local_378 = fVar26;
            }
            uStack_12c = 0x3f800000;
            if (local_378 <= fVar27) {
              local_378 = fVar27;
            }
            uStack_374 = 0;
            fVar42 = local_378 * 1.0 + 0.0 + 0.0 + local_138 * 0.0;
            fVar43 = local_378 * 0.0 + 0.0 + 0.0 + fStack_134 * 0.0;
            fVar44 = local_378 * 0.0 + 0.0 + 0.0 + fStack_130 * 0.0;
            fVar45 = local_378 * 0.0 + 0.0 + 0.0 + 0.0;
            uStack_36c = 0;
            uStack_360 = 0;
            fVar49 = local_378 * 0.0 + 0.0 + 0.0 + local_138 * 0.0;
            fVar37 = local_378 * 1.0 + 0.0 + 0.0 + fStack_134 * 0.0;
            fVar38 = local_378 * 0.0 + 0.0 + 0.0 + fStack_130 * 0.0;
            fVar39 = local_378 * 0.0 + 0.0 + 0.0 + 0.0;
            local_358 = 0;
            uStack_34c = 0;
            fVar46 = local_378 * 0.0 + 0.0 + local_138 * 0.0;
            fVar47 = local_378 * 0.0 + 0.0 + fStack_134 * 0.0;
            fVar48 = local_378 * 1.0 + 0.0 + fStack_130 * 0.0;
            fVar30 = local_378 * 0.0 + 0.0 + 0.0;
            fVar26 = (float)local_438;
            fVar27 = local_438._4_4_;
            fVar28 = (float)uStack_430;
            fVar29 = uStack_430._4_4_;
            fVar33 = local_138 * 1.0 + 0.0;
            fVar34 = fStack_134 * 1.0 + 0.0;
            fVar36 = fStack_130 * 1.0 + 0.0;
            local_1d8 = fVar43 * fVar7 + fVar42 * fVar8 + fVar44 * fVar40 +
                        fVar45 * (float)local_438;
            fStack_1d4 = fVar43 * fVar31 + fVar42 * fVar9 + fVar44 * fVar25 +
                         fVar45 * local_438._4_4_;
            fStack_1d0 = fVar43 * fVar41 + fVar42 * fVar10 + fVar44 * fVar24 +
                         fVar45 * (float)uStack_430;
            fStack_1cc = fVar43 * fVar3 + fVar42 * fVar11 + fVar44 * fVar50 +
                         fVar45 * uStack_430._4_4_;
            local_108 = fVar37 * fVar7 + fVar49 * fVar8 + fVar38 * fVar40 +
                        fVar39 * (float)local_438;
            fStack_104 = fVar37 * fVar31 + fVar49 * fVar9 + fVar38 * fVar25 +
                         fVar39 * local_438._4_4_;
            fStack_100 = fVar37 * fVar41 + fVar49 * fVar10 + fVar38 * fVar24 +
                         fVar39 * (float)uStack_430;
            fStack_fc = fVar37 * fVar3 + fVar49 * fVar11 + fVar38 * fVar50 +
                        fVar39 * uStack_430._4_4_;
            local_438 = CONCAT44(fStack_104,local_108);
            uStack_430 = CONCAT44(fStack_fc,fStack_100);
            fVar49 = (float)local_4a0;
            local_3d8 = fVar47 * fVar7 + fVar46 * fVar8 + fVar48 * fVar40 + fVar30 * fVar26;
            fStack_3d4 = fVar47 * fVar31 + fVar46 * fVar9 + fVar48 * fVar25 + fVar30 * fVar27;
            fStack_3d0 = fVar47 * fVar41 + fVar46 * fVar10 + fVar48 * fVar24 + fVar30 * fVar28;
            fStack_3cc = fVar47 * fVar3 + fVar46 * fVar11 + fVar48 * fVar50 + fVar30 * fVar29;
            fVar46 = ((local_46c - local_478) * 0.5) / local_378;
            fVar47 = ((local_468 - local_474) * 0.5) / local_378;
            local_e8 = fVar34 * fVar7 + fVar33 * fVar8 + fVar36 * fVar40 + fVar26 * 1.0;
            fStack_e4 = fVar34 * fVar31 + fVar33 * fVar9 + fVar36 * fVar25 + fVar27 * 1.0;
            fStack_e0 = fVar34 * fVar41 + fVar33 * fVar10 + fVar36 * fVar24 + fVar28 * 1.0;
            fStack_dc = fVar34 * fVar3 + fVar33 * fVar11 + fVar36 * fVar50 + fVar29 * 1.0;
            fVar31 = (float)local_4a8;
            fVar41 = (float)iStack_4a4;
            fVar26 = *param_6;
            fVar27 = param_6[1];
            fVar50 = param_6[2];
            local_458 = CONCAT44(local_458._4_4_,1.0 / (float)iStack_4a4);
            fVar24 = ((local_464 - local_470) * 0.5) / local_378;
            fVar25 = fStack_104 * fStack_104 + local_108 * local_108 + fStack_100 * fStack_100;
            fVar28 = fStack_3d4 * fStack_3d4 + local_3d8 * local_3d8 + fStack_3d0 * fStack_3d0;
            if (fVar25 <= fVar28) {
              fVar25 = fVar28;
            }
            fVar28 = fStack_1d4 * fStack_1d4 + local_1d8 * local_1d8 + fStack_1d0 * fStack_1d0;
            if (fVar25 <= fVar28) {
              fVar25 = fVar28;
            }
            fStack_364 = local_378;
            fStack_350 = local_378;
            local_118 = local_1d8;
            fStack_114 = fStack_1d4;
            fStack_110 = fStack_1d0;
            fStack_10c = fStack_1cc;
            local_f8 = local_3d8;
            fStack_f4 = fStack_3d4;
            fStack_f0 = fStack_3d0;
            fStack_ec = fStack_3cc;
            puVar17 = (undefined4 *)FMatrix::Inverse(&local_118,local_168);
            iVar13 = (int)param_11[1];
            local_2e8 = *puVar17;
            uStack_2e4 = puVar17[4];
            uStack_2e0 = puVar17[8];
            uStack_2dc = puVar17[0xc];
            local_2d8 = puVar17[1];
            uStack_2d4 = puVar17[5];
            uStack_2d0 = puVar17[9];
            uStack_2cc = puVar17[0xd];
            local_2c8 = puVar17[2];
            uStack_2c4 = puVar17[6];
            uStack_2c0 = puVar17[10];
            uStack_2bc = puVar17[0xe];
            *(int *)(param_11 + 1) = iVar13 + 1;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11,iVar13);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)iVar13 * 0x10);
            *puVar14 = CONCAT44(uStack_2e4,local_2e8);
            puVar14[1] = CONCAT44(uStack_2dc,uStack_2e0);
            iVar13 = (int)param_11[1];
            *(int *)(param_11 + 1) = iVar13 + 1;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11,iVar13);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)iVar13 * 0x10);
            *puVar14 = CONCAT44(uStack_2d4,local_2d8);
            puVar14[1] = CONCAT44(uStack_2cc,uStack_2d0);
            iVar13 = (int)param_11[1];
            *(int *)(param_11 + 1) = iVar13 + 1;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11,iVar13);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)iVar13 * 0x10);
            *puVar14 = CONCAT44(uStack_2c4,local_2c8);
            puVar14[1] = CONCAT44(uStack_2bc,uStack_2c0);
            if (local_4c8 == 1) {
              uStack_40c = 0x3f800000;
            }
            else {
              uStack_40c = 0;
            }
            iVar13 = (int)param_11[1];
            local_418 = fVar46 - 1.0 / fVar31;
            fStack_414 = fVar47 - (float)local_458;
            *(int *)(param_11 + 1) = iVar13 + 1;
            fStack_410 = fVar24 - 1.0 / fVar49;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11,iVar13);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)iVar13 * 0x10);
            *puVar14 = CONCAT44(fStack_414,local_418);
            puVar14[1] = CONCAT44(uStack_40c,fStack_410);
            iVar13 = (int)param_11[1];
            local_408 = ((float)local_4a8 * *param_6 * 0.5) / fVar46;
            fVar28 = param_6[1];
            fStack_404 = ((float)iStack_4a4 * fVar28 * 0.5) / fVar47;
            fVar3 = param_6[2];
            iVar12 = 1;
            if (local_res20[0] != '\0') {
              iVar12 = -1;
            }
            fStack_400 = ((float)local_4a0 * fVar3 * 0.5) / fVar24;
            *(int *)(param_11 + 1) = iVar13 + 1;
            fStack_3fc = (float)iVar12 * SQRT(fVar25);
            if (*(int *)((longlong)param_11 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11,iVar13);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)iVar13 * 0x10);
            *puVar14 = CONCAT44(fStack_404,local_408);
            puVar14[1] = CONCAT44(fStack_3fc,fStack_400);
            iVar13 = (int)param_11[1];
            *(int *)(param_11 + 1) = iVar13 + 1;
            fStack_380 = (float)local_490 * fVar3 + fVar49 * fVar50 * 0.5;
            local_388 = (float)local_498 * *param_6 + fVar31 * fVar26 * 0.5;
            fStack_384 = (float)iStack_494 * fVar28 + fVar41 * fVar27 * 0.5;
            uStack_37c = local_4b8[0];
            if (*(int *)((longlong)param_11 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11,iVar13);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)iVar13 * 0x10);
            *puVar14 = CONCAT44(fStack_384,local_388);
            puVar14[1] = CONCAT44(uStack_37c,fStack_380);
            uVar4 = *(undefined4 *)
                     (*(longlong *)(local_338 + 0x1000) + 0x1c +
                     (longlong)*(int *)(param_4 + 0xe8) * 0x28);
            fVar26 = *(float *)(*(longlong *)(local_338 + 0x1000) + 0x24 +
                               (longlong)*(int *)(param_4 + 0xe8) * 0x28);
            lVar18 = FUN_1428742e0();
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            fVar26 = fVar26 * *(float *)(lVar18 + 0x1c);
            iVar13 = (int)param_11[1] + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
              iVar13 = (int)param_11[1];
            }
            lVar19 = (longlong)iVar13;
            lVar18 = *param_11;
            *(float *)(lVar18 + -0x10 + lVar19 * 0x10) = local_4ac - local_4b0;
            *(float *)(lVar18 + -0xc + lVar19 * 0x10) = local_4b0;
            *(undefined4 *)(lVar18 + -8 + lVar19 * 0x10) = uVar4;
            *(float *)(lVar18 + -4 + lVar19 * 0x10) = fVar26 * fVar26;
            lVar18 = param_11[1];
            iVar13 = (int)lVar18 + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_1d4,local_1d8);
            puVar14[1] = CONCAT44(fStack_1cc,fStack_1d0);
            lVar18 = param_11[1];
            iVar13 = (int)lVar18 + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = local_438;
            puVar14[1] = uStack_430;
            lVar18 = param_11[1];
            iVar13 = (int)lVar18 + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            local_298 = local_1c8._0_4_;
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_3d4,local_3d8);
            puVar14[1] = CONCAT44(fStack_3cc,fStack_3d0);
            lVar18 = param_11[1];
            uStack_29c = (undefined4)local_2f8;
            iVar13 = (int)lVar18 + 1;
            fStack_290 = local_1e8;
            uStack_28c = local_2f8._4_4_;
            uStack_294 = local_1b8._0_4_;
            fStack_280 = local_3f8;
            local_288 = local_1a8;
            uStack_27c = (undefined4)uStack_2f0;
            local_2a8 = fVar8;
            fStack_2a4 = fVar7;
            fStack_284 = local_198;
            *(int *)(param_11 + 1) = iVar13;
            fStack_2a0 = fVar40;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_2a4,local_2a8);
            puVar14[1] = CONCAT44(uStack_29c,fStack_2a0);
            lVar18 = param_11[1];
            iVar13 = (int)lVar18 + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(uStack_294,local_298);
            puVar14[1] = CONCAT44(uStack_28c,fStack_290);
            lVar18 = param_11[1];
            iVar13 = (int)lVar18 + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_284,local_288);
            puVar14[1] = CONCAT44(uStack_27c,fStack_280);
            lVar18 = param_11[1];
            local_3e8 = (float)(int)local_448;
            fStack_3e4 = (float)local_448._4_4_;
            iVar13 = (int)lVar18 + 1;
            fStack_3dc = (float)(int)(uVar20 * local_4d8 + local_4d4);
            *(int *)(param_11 + 1) = iVar13;
            fStack_3e0 = (float)(int)uStack_440;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            local_268 = local_228;
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_3e4,local_3e8);
            puVar14[1] = CONCAT44(fStack_3dc,fStack_3e0);
            lVar18 = param_11[1];
            fStack_264 = local_218;
            fStack_25c = local_188;
            iVar13 = (int)lVar18 + 1;
            fStack_260 = local_208;
            local_258 = fStack_224;
            fStack_254 = fStack_214;
            fStack_250 = fStack_204;
            fStack_24c = local_178;
            fStack_244 = fStack_210;
            local_248 = fStack_220;
            fStack_23c = local_3c8;
            fStack_240 = fStack_200;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_264,local_268);
            puVar14[1] = CONCAT44(fStack_25c,fStack_260);
            lVar18 = param_11[1];
            iVar13 = (int)lVar18 + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_254,local_258);
            puVar14[1] = CONCAT44(fStack_24c,fStack_250);
            lVar18 = param_11[1];
            iVar13 = (int)lVar18 + 1;
            *(int *)(param_11 + 1) = iVar13;
            if (*(int *)((longlong)param_11 + 0xc) < iVar13) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_11);
            }
            puVar14 = (undefined8 *)(*param_11 + (longlong)(int)lVar18 * 0x10);
            *puVar14 = CONCAT44(fStack_244,local_248);
            puVar14[1] = CONCAT44(fStack_23c,fStack_240);
            if (param_1 == '\0') {
              lVar18 = *(longlong *)(param_4 + 0x78);
              if (*(longlong *)(param_4 + 0x78) == 0) {
                lVar18 = param_4 + 0x70;
              }
              iVar13 = *(int *)(lVar18 + uVar23 * 4);
              if (iVar13 < 0) {
                uVar32 = CONCAT44(fStack_484,local_488);
                uVar35 = CONCAT44(fStack_47c,fStack_480);
              }
              else {
                local_458 = *(longlong *)(lVar5 + 0x1600);
                plVar21 = (longlong *)(piVar1 + (local_4c8 + 0x18) * 4);
                iVar12 = (int)plVar21[1];
                *(int *)(plVar21 + 1) = iVar12 + 1;
                if (*(int *)((longlong)plVar21 + 0xc) < iVar12 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar12);
                }
                uVar32 = CONCAT44(fStack_484,local_488);
                uVar35 = CONCAT44(fStack_47c,fStack_480);
                lVar18 = (longlong)iVar13 * 0x20;
                puVar14 = (undefined8 *)(lVar18 + local_458);
                uVar6 = puVar14[1];
                puVar2 = (undefined8 *)(*plVar21 + (longlong)iVar12 * 0x10);
                *puVar2 = *puVar14;
                puVar2[1] = uVar6;
                puVar14 = (undefined8 *)(lVar18 + *(longlong *)(lVar5 + 0x1600));
                *puVar14 = uVar32;
                puVar14[1] = uVar35;
              }
            }
            else {
              iVar13 = *(int *)(lVar5 + 0x1608);
              uStack_3b8 = (undefined4)param_4;
              fStack_3b4 = (float)((ulonglong)param_4 >> 0x20);
              uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar20);
              iVar12 = iVar13 + 1;
              *(int *)(lVar5 + 0x1608) = iVar12;
              if (*(int *)(lVar5 + 0x160c) < iVar12) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(lVar5 + 0x1600);
              }
              lVar18 = *(longlong *)(lVar5 + 0x1600);
              uVar32 = CONCAT44(fStack_484,local_488);
              uVar35 = CONCAT44(fStack_47c,fStack_480);
              lVar19 = (longlong)iVar13 * 0x20;
              puVar14 = (undefined8 *)(lVar19 + lVar18);
              *puVar14 = uVar32;
              puVar14[1] = uVar35;
              puVar14 = (undefined8 *)(lVar19 + 0x10 + lVar18);
              *puVar14 = CONCAT44(fStack_3b4,uStack_3b8);
              puVar14[1] = uStack_3b0;
              lVar18 = *(longlong *)(param_4 + 0x78);
              if (*(longlong *)(param_4 + 0x78) == 0) {
                lVar18 = param_4 + 0x70;
              }
              *(int *)(lVar18 + uVar23 * 4) = local_4f4;
            }
            plVar21 = (longlong *)(piVar1 + (local_4c8 + 0x18) * 4);
            iVar13 = (int)plVar21[1];
            *(int *)(plVar21 + 1) = iVar13 + 1;
            if (*(int *)((longlong)plVar21 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar13);
            }
            puVar14 = (undefined8 *)(*plVar21 + (longlong)iVar13 * 0x10);
            *puVar14 = uVar32;
            puVar14[1] = uVar35;
            uVar20 = local_4d0;
          }
          local_4d0 = uVar20 + 1;
          uVar22 = (ulonglong)local_4d0;
          uVar23 = uVar23 + 1;
        } while ((int)local_4d0 < (int)param_9[1]);
      }
    }
  }
  return;
}



// FUNCTION 141b38020 FUN_141b38020 body=131 status=ok
// SIG undefined FUN_141b38020(void)

void FUN_141b38020(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if ((iVar3 == 1) && (lVar2 = *param_1, *(char *)(lVar2 + 0x11) != '\0')) {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x6a0))(DAT_146ab6358,lVar2);
      }
      *(undefined1 *)(lVar2 + 0x11) = 0;
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 1,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,0);
  return;
}



// FUNCTION 141b380b0 FUN_141b380b0 body=68 status=ok
// SIG undefined FUN_141b380b0(void)

void FUN_141b380b0(longlong param_1)

{
  FUN_141ace450(param_1 + 0x38);
  FUN_141ace450(param_1 + 0x68);
  FUN_141ace450(param_1 + 0x90);
  FUN_141ace450(param_1 + 0xb8);
  FUN_141ace450(param_1 + 0xe0);
  return;
}



// FUNCTION 141b38100 FUN_141b38100 body=80 status=ok
// SIG undefined FUN_141b38100(void)

void FUN_141b38100(longlong param_1)

{
  FUN_141ace450(param_1 + 0x30);
  FUN_141ace450(param_1 + 0x58);
  FUN_141ace450(param_1 + 0x80);
  FUN_141ace450(param_1 + 0xa8);
  FUN_141ace450(param_1 + 0xd0);
  FUN_141ace450(param_1 + 0xf8);
  return;
}



// FUNCTION 141b38150 RemovePrimitive body=296 status=ok
// SIG undefined RemovePrimitive(void)

void FSurfelBufferAllocator::RemovePrimitive(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int local_res8;
  int iStackX_c;
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,&local_res8,param_2);
  if (local_res8 != -1) {
    puVar1 = (undefined8 *)((longlong)local_res8 * 0x20 + 8 + *(longlong *)(param_1 + 8));
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 8);
    local_res8 = (int)uVar5;
    uVar7 = 0;
    iStackX_c = (int)((ulonglong)uVar6 >> 0x20) * (int)uVar6;
    if (0 < *(int *)(param_1 + 0x60)) {
      lVar4 = *(longlong *)(param_1 + 0x58);
      uVar9 = uVar7;
      do {
        iVar3 = *(int *)(lVar4 + uVar7 * 8);
        iVar8 = (int)uVar9;
        if (iVar3 == iStackX_c + local_res8) {
          *(int *)(lVar4 + (longlong)iVar8 * 8) = local_res8;
          piVar2 = (int *)(*(longlong *)(param_1 + 0x58) + 4 + (longlong)iVar8 * 8);
          *piVar2 = *piVar2 + iStackX_c;
          return;
        }
        if (iVar3 + *(int *)(lVar4 + 4 + uVar7 * 8) == local_res8) {
          piVar2 = (int *)(lVar4 + 4 + (longlong)iVar8 * 8);
          *piVar2 = *piVar2 + iStackX_c;
          return;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x60));
    }
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar3 + 1;
    if (*(int *)(param_1 + 100) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar3);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8) =
         CONCAT44(iStackX_c,local_res8);
  }
  return;
}



// FUNCTION 141b38280 FUN_141b38280 body=4359 status=ok
// SIG undefined FUN_141b38280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b38280(longlong param_1,longlong param_2,longlong param_3,float *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  undefined1 auStack_168 [32];
  float *local_148;
  float *local_140;
  longlong *local_138;
  longlong local_130;
  undefined8 local_128;
  float *local_120;
  char local_118;
  int local_114;
  char local_110;
  longlong *local_108;
  undefined *local_100;
  undefined4 local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  int local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  wchar_t *local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_a8 = param_5;
  local_108 = param_6;
  local_a0 = param_7;
  local_e8 = param_4;
  local_b0 = param_1;
  cVar5 = FUN_141b0a640(param_3);
  if (((DAT_1464c1c88 == 0) || (*param_4 <= 0.0)) ||
     (*(int *)(*(longlong *)(param_1 + 8) + 0x15f0) < 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_118 = cVar5;
  local_110 = FUN_141b196c0();
  iVar8 = DAT_1464c19f4;
  puVar9 = (ulonglong *)FUN_141b08510(&local_d0);
  uVar1 = *puVar9;
  local_e0 = (int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
                  (longlong)iVar8);
  iVar19 = (int)((longlong)((ulonglong)(uint)((longlong)uVar1 >> 0x3f) << 0x20 | uVar1 >> 0x20) /
                (longlong)iVar8);
  iVar6 = (*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) / 2;
  iVar7 = (*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)) / 2;
  iVar8 = 1;
  if (0 < iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = 1;
  if (0 < iVar6) {
    iVar7 = iVar6;
  }
  plVar15 = (longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8);
  plVar11 = (longlong *)*plVar15;
  local_d0 = CONCAT44((iVar7 + -1 + DAT_1464c1794) / DAT_1464c1794,
                      (DAT_1464c1790 + -1 + iVar8) / DAT_1464c1790);
  local_c8 = iVar19;
  local_c0 = plVar15;
  if (plVar11 == (longlong *)0x0) {
    puVar13 = (undefined8 *)operator_new(0x108);
    puVar12 = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar13 + 1) = 4;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *(undefined1 *)(puVar13 + 5) = 0;
      *puVar13 = &PTR_FUN_144de01d8;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      *(undefined4 *)(puVar13 + 10) = 0;
      puVar13[0xb] = 0;
      *(undefined1 *)(puVar13 + 0xc) = 0;
      puVar13[0xd] = 0;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      *(undefined4 *)(puVar13 + 0x10) = 0;
      puVar13[0x11] = 0;
      puVar13[0x12] = 0;
      puVar13[0x13] = 0;
      puVar13[0x14] = 0;
      *(undefined4 *)(puVar13 + 0x15) = 0;
      puVar13[0x16] = 0;
      puVar13[0x17] = 0;
      puVar13[0x18] = 0;
      puVar13[0x19] = 0;
      *(undefined4 *)(puVar13 + 0x1a) = 0;
      puVar13[0x1b] = 0;
      puVar13[0x1c] = 0;
      puVar13[0x1d] = 0;
      puVar13[0x1e] = 0;
      *(undefined4 *)(puVar13 + 0x1f) = 0;
      puVar13[0x20] = 0;
      puVar12 = puVar13;
    }
    *plVar15 = (longlong)puVar12;
LAB_141b384cd:
    *(char *)(puVar12 + 0xc) = cVar5;
    lVar17 = *plVar15;
    *(int *)(lVar17 + 0x30) = local_e0;
    *(int *)(lVar17 + 0x34) = iVar19;
    (**(code **)(*(longlong *)*plVar15 + 0x28))();
    plVar11 = (longlong *)*plVar15;
  }
  else if ((((int)plVar11[6] != local_e0) || (*(int *)((longlong)plVar11 + 0x34) != iVar19)) ||
          (((char)plVar11[0xc] != cVar5 || (((char)plVar11[5] == '\0' || (DAT_146a9dad4 != '\0')))))
          ) {
    (**(code **)(*plVar11 + 0x30))(plVar11);
    puVar12 = (undefined8 *)*plVar15;
    goto LAB_141b384cd;
  }
  lVar17 = plVar11[7];
  if (*(char *)(lVar17 + 0x11) == '\0') {
    if (DAT_146ab62f3 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar17);
    }
    *(undefined1 *)(lVar17 + 0x11) = 1;
  }
  if ((char)plVar11[0xc] != '\0') {
    lVar17 = plVar11[0x12];
    if (*(char *)(lVar17 + 0x11) == '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar17);
      }
      *(undefined1 *)(lVar17 + 0x11) = 1;
    }
    lVar17 = plVar11[0x17];
    if (*(char *)(lVar17 + 0x11) == '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar17);
      }
      *(undefined1 *)(lVar17 + 0x11) = 1;
    }
    lVar17 = plVar11[0x1c];
    if (*(char *)(lVar17 + 0x11) == '\0') {
      if (DAT_146ab62f3 != '\0') {
        (**(code **)(*DAT_146ab6358 + 0x690))(DAT_146ab6358,lVar17);
      }
      *(undefined1 *)(lVar17 + 0x11) = 1;
    }
  }
  FUN_141a19150(param_2,0,0,0);
  if (bVar4) {
    local_f0 = 0x3f800000;
    ClearUAV(param_2,*plVar15 + 0x38,0x3f800000);
    lVar17 = *(longlong *)(param_3 + 0x3090);
    iVar8 = ((*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)) / 2) / DAT_1464c19f4 + 7;
    iVar19 = (int)((iVar8 >> 0x1f & 7U) + iVar8) >> 3;
    iVar8 = ((*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) / 2) / DAT_1464c19f4 + 7;
    local_f0 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
    if (local_110 == '\0') {
      local_100 = &DAT_146a19820;
      local_f8 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar17 + 0x38,&local_114,&local_100);
      plVar11 = (longlong *)0x0;
      if (local_114 != -1) {
        plVar11 = (longlong *)((longlong)local_114 * 0x20 + *(longlong *)(lVar17 + 0x38));
      }
      plVar15 = plVar11 + 2;
      if (plVar11 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
      }
      lVar17 = *plVar15;
      lVar16 = *(longlong *)(lVar17 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      uVar2 = *(undefined8 *)(lVar16 + 0x60);
      FRHIComputeShader::UpdateStats(uVar2);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 3;
      }
      pfVar18 = local_e8;
      *(undefined8 **)(param_2 + 0x30) = puVar12;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_144d91e50;
      local_138 = (longlong *)(param_3 + 0x1c90);
      puVar13[2] = uVar2;
      local_140 = local_e8;
      local_148 = (float *)(*local_108 + 8);
      FUN_141b3e0b0(lVar17,param_2,param_3,local_d0);
      local_148 = (float *)CONCAT44(local_148._4_4_,1);
      DispatchComputeShader(param_2,lVar17,iVar19,local_f0);
      lVar16 = *(longlong *)(lVar17 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      FRWShaderParameter::UnsetUAV<FRHICommandList>
                (lVar17 + 0x18a,param_2,*(undefined8 *)(lVar16 + 0x60));
      plVar11 = local_c0;
      goto LAB_141b38e39;
    }
    local_100 = &DAT_146a196d0;
    local_f8 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar17 + 0x38,&local_114,&local_100);
    plVar11 = (longlong *)0x0;
    if (local_114 != -1) {
      plVar11 = (longlong *)((longlong)local_114 * 0x20 + *(longlong *)(lVar17 + 0x38));
    }
    plVar15 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
    }
    lVar17 = *plVar15;
    lVar16 = *(longlong *)(lVar17 + 0x48);
    if (*(char *)(lVar16 + 0x28) == '\0') {
      FUN_1419f3850(lVar16);
    }
    uVar2 = *(undefined8 *)(lVar16 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar13;
    *(undefined8 **)(param_2 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_144d91e50;
    local_138 = (longlong *)(param_3 + 0x1c90);
    puVar13[2] = uVar2;
    local_140 = local_e8;
    local_148 = (float *)(*local_108 + 8);
    FUN_141b3e0b0(lVar17,param_2,param_3,local_d0);
    local_148 = (float *)CONCAT44(local_148._4_4_,1);
    DispatchComputeShader(param_2,lVar17,iVar19,local_f0);
    lVar16 = *(longlong *)(lVar17 + 0x48);
    if (*(char *)(lVar16 + 0x28) == '\0') {
      FUN_1419f3850(lVar16);
    }
    FRWShaderParameter::UnsetUAV<FRHICommandList>
              (lVar17 + 0x18a,param_2,*(undefined8 *)(lVar16 + 0x60));
  }
  plVar11 = local_c0;
  pfVar18 = local_e8;
  if (local_110 != '\0') {
    lVar16 = *(longlong *)(param_3 + 0x3090);
    lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x13d0);
    lVar17 = lVar16 + 0x38;
    if (bVar4) {
      plVar11 = (longlong *)0x0;
      local_f8 = 0;
      if (local_118 == '\0') {
        local_100 = &DAT_146a192e0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar17,&local_114,&local_100);
        plVar15 = plVar11;
        if (local_114 != -1) {
          plVar15 = (longlong *)((longlong)local_114 * 0x20 + *(longlong *)(lVar16 + 0x38));
        }
        plVar10 = plVar15 + 2;
        if (plVar15 == (longlong *)0x0) {
          plVar10 = plVar11;
        }
        lVar17 = *plVar10;
        lVar16 = *(longlong *)(lVar17 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        uVar2 = *(undefined8 *)(lVar16 + 0x60);
        FRHIComputeShader::UpdateStats(uVar2);
        puVar9 = (ulonglong *)(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(puVar9,0x20);
          puVar13 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar13 + 3;
        }
        *puVar9 = (ulonglong)puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144d91e50;
        local_140 = (float *)(param_3 + 0x1c90);
        puVar13[2] = uVar2;
        local_148 = local_e8;
        FUN_141b3fe20(lVar17,param_2,param_3,*local_108 + 8);
      }
      else {
        local_100 = &DAT_146a19190;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar17,&local_114,&local_100);
        plVar15 = plVar11;
        if (local_114 != -1) {
          plVar15 = (longlong *)((longlong)local_114 * 0x20 + *(longlong *)(lVar16 + 0x38));
        }
        plVar10 = plVar15 + 2;
        if (plVar15 == (longlong *)0x0) {
          plVar10 = plVar11;
        }
        lVar17 = *plVar10;
        lVar16 = *(longlong *)(lVar17 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        uVar2 = *(undefined8 *)(lVar16 + 0x60);
        FRHIComputeShader::UpdateStats(uVar2);
        puVar9 = (ulonglong *)(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(puVar9,0x20);
          puVar13 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar13 + 3;
        }
        *puVar9 = (ulonglong)puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144d91e50;
        local_140 = (float *)(param_3 + 0x1c90);
        puVar13[2] = uVar2;
        local_148 = local_e8;
        FUN_141b3ec70(lVar17,param_2,param_3,*local_108 + 8);
      }
      DispatchIndirectComputeShader(param_2,lVar17,*(undefined8 *)(lVar3 + 0xf8),0);
      lVar16 = *(longlong *)(lVar17 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      FRWShaderParameter::UnsetUAV<FRHICommandList>
                (lVar17 + 0x1aa,param_2,*(undefined8 *)(lVar16 + 0x60));
      lVar16 = *(longlong *)(lVar17 + 0x48);
      pfVar18 = local_e8;
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
        pfVar18 = local_e8;
      }
    }
    else {
      plVar11 = (longlong *)0x0;
      local_f8 = 0;
      if (local_118 == '\0') {
        local_100 = &DAT_146a19580;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar17,&local_114,&local_100);
        plVar15 = plVar11;
        if (local_114 != -1) {
          plVar15 = (longlong *)((longlong)local_114 * 0x20 + *(longlong *)(lVar16 + 0x38));
        }
        plVar10 = plVar15 + 2;
        if (plVar15 == (longlong *)0x0) {
          plVar10 = plVar11;
        }
        lVar17 = *plVar10;
        lVar16 = *(longlong *)(lVar17 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        uVar2 = *(undefined8 *)(lVar16 + 0x60);
        FRHIComputeShader::UpdateStats(uVar2);
        puVar9 = (ulonglong *)(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(puVar9,0x20);
          puVar13 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar13 + 3;
        }
        pfVar18 = local_e8;
        *puVar9 = (ulonglong)puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144d91e50;
        local_140 = (float *)(param_3 + 0x1c90);
        puVar13[2] = uVar2;
        local_148 = local_e8;
        FUN_141b40990(lVar17,param_2,param_3,*local_108 + 8);
      }
      else {
        local_100 = &DAT_146a19430;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar17,&local_114,&local_100);
        plVar15 = plVar11;
        if (local_114 != -1) {
          plVar15 = (longlong *)((longlong)local_114 * 0x20 + *(longlong *)(lVar16 + 0x38));
        }
        plVar10 = plVar15 + 2;
        if (plVar15 == (longlong *)0x0) {
          plVar10 = plVar11;
        }
        lVar17 = *plVar10;
        lVar16 = *(longlong *)(lVar17 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        uVar2 = *(undefined8 *)(lVar16 + 0x60);
        FRHIComputeShader::UpdateStats(uVar2);
        puVar9 = (ulonglong *)(param_2 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(puVar9,0x20);
          puVar13 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar13 + 3;
        }
        pfVar18 = local_e8;
        *puVar9 = (ulonglong)puVar12;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_144d91e50;
        local_140 = (float *)(param_3 + 0x1c90);
        puVar13[2] = uVar2;
        local_148 = local_e8;
        FUN_141b3f7f0(lVar17,param_2,param_3,*local_108 + 8);
      }
      DispatchIndirectComputeShader(param_2,lVar17,*(undefined8 *)(lVar3 + 0xf8),0);
      lVar16 = *(longlong *)(lVar17 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
      FRWShaderParameter::UnsetUAV<FRHICommandList>
                (lVar17 + 0x1aa,param_2,*(undefined8 *)(lVar16 + 0x60));
      lVar16 = *(longlong *)(lVar17 + 0x48);
      if (*(char *)(lVar16 + 0x28) == '\0') {
        FUN_1419f3850(lVar16);
      }
    }
    puVar9 = (ulonglong *)(param_2 + 0x30);
    FRWShaderParameter::UnsetUAV<FRHICommandList>
              (lVar17 + 0x1b2,param_2,*(undefined8 *)(lVar16 + 0x60));
    plVar11 = local_c0;
    puVar13 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
    local_d0 = *(undefined8 *)(*local_c0 + 0x40);
    puVar12 = puVar13 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(puVar9,0x10);
      puVar13 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar13 + 1;
    }
    *puVar9 = (ulonglong)puVar12;
    *puVar13 = local_d0;
    puVar14 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar14 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(puVar9,0x38);
      puVar14 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar14 + 6;
    }
    *puVar9 = (ulonglong)puVar12;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar14 + 2) = 1;
    puVar14[3] = puVar13;
    *(undefined4 *)(puVar14 + 4) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x24) = 3;
    puVar14[5] = 0;
  }
LAB_141b38e39:
  iVar19 = local_c8;
  iVar8 = local_e0;
  local_b8 = (longlong *)0x0;
  if (local_118 != '\0') {
    local_88 = DAT_146ab6938;
    local_78 = 1;
    local_70 = 1;
    local_58 = L"UnknownTexture2D";
    local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
    local_140 = (float *)CONCAT71(local_140._1_7_,1);
    local_98 = _DAT_146ab6928;
    uStack_94 = uRam0000000146ab692c;
    uStack_90 = uRam0000000146ab6930;
    uStack_8c = uRam0000000146ab6934;
    local_148 = (float *)0x144dd7330;
    local_84 = local_e0;
    local_80 = local_c8;
    local_7c = 0;
    local_74 = 0x10000;
    local_6c = 10;
    local_64 = 0x10001;
    local_60 = 0;
    local_50 = 1;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,&local_b8);
    local_138 = local_b8 + 1;
    local_140 = (float *)*plVar11;
    local_148 = (float *)(*local_108 + 8);
    FUN_141b2b600(param_2,param_3,*(undefined8 *)(local_b0 + 8),pfVar18);
  }
  local_148 = (float *)*plVar11;
  local_140 = pfVar18;
  FUN_141b5be40(param_3 + 0x3018,param_3,param_2,*local_108 + 8);
  local_88 = DAT_146ab6938;
  local_138 = (longlong *)CONCAT71(local_138._1_7_,1);
  local_78 = 1;
  local_70 = 1;
  local_140 = (float *)CONCAT71(local_140._1_7_,1);
  local_58 = L"UnknownTexture2D";
  local_148 = (float *)0x144dd7360;
  local_d8 = (longlong *)0x0;
  local_98 = _DAT_146ab6928;
  uStack_94 = uRam0000000146ab692c;
  uStack_90 = uRam0000000146ab6930;
  uStack_8c = uRam0000000146ab6934;
  local_84 = iVar8;
  local_80 = iVar19;
  local_7c = 0;
  local_74 = 0x10000;
  local_6c = CONCAT44(DAT_146a9da64,10);
  local_64 = 0x10001;
  local_60 = 0;
  local_50 = 1;
  FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_98,&local_d8);
  iVar8 = iVar8 + 7;
  local_f8 = 0;
  iVar19 = iVar19 + 7;
  lVar17 = *(longlong *)(param_3 + 0x3090);
  local_100 = &DAT_146a16f70;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar17 + 0x38,&local_114,&local_100);
  plVar11 = (longlong *)0x0;
  if (local_114 != -1) {
    plVar11 = (longlong *)((longlong)local_114 * 0x20 + *(longlong *)(lVar17 + 0x38));
  }
  plVar15 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  lVar17 = *plVar15;
  lVar16 = *(longlong *)(lVar17 + 0x48);
  if (*(char *)(lVar16 + 0x28) == '\0') {
    FUN_1419f3850(lVar16);
  }
  uVar2 = *(undefined8 *)(lVar16 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e50;
  puVar13[2] = uVar2;
  local_148 = (float *)(local_d8 + 1);
  FUN_141b42c90(lVar17,param_2,param_3,*local_108 + 8);
  local_148 = (float *)CONCAT44(local_148._4_4_,1);
  DispatchComputeShader
            (param_2,lVar17,(int)((iVar8 >> 0x1f & 7U) + iVar8) >> 3,
             (int)((iVar19 >> 0x1f & 7U) + iVar19) >> 3);
  plVar11 = local_d8;
  lVar16 = *(longlong *)(lVar17 + 0x48);
  if (*(char *)(lVar16 + 0x28) == '\0') {
    FUN_1419f3850(lVar16);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>
            (lVar17 + 0xf0,param_2,*(undefined8 *)(lVar16 + 0x60));
  local_b0 = plVar11[3];
  plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar11 = plVar15 + 1;
  if (*(longlong **)(param_2 + 0x38) < plVar11) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar15 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar11;
  *plVar15 = local_b0;
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar12;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar13;
  *(undefined8 **)(param_2 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = plVar15;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 3;
  puVar13[5] = 0;
  if ((DAT_146ab62f3 != '\0') && (*(int *)(DAT_146a9d500 + 4) != 0)) {
    lVar17 = *local_c0;
    lVar16 = *(longlong *)(lVar17 + 0x38);
    if (*(char *)(lVar16 + 0x11) != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar16);
      *(undefined1 *)(lVar16 + 0x11) = 0;
    }
    if (*(char *)(lVar17 + 0x60) != '\0') {
      lVar16 = *(longlong *)(lVar17 + 0x90);
      if (*(char *)(lVar16 + 0x11) != '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar16);
        }
        *(undefined1 *)(lVar16 + 0x11) = 0;
      }
      lVar16 = *(longlong *)(lVar17 + 0xb8);
      if (*(char *)(lVar16 + 0x11) != '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar16);
        }
        *(undefined1 *)(lVar16 + 0x11) = 0;
      }
      lVar17 = *(longlong *)(lVar17 + 0xe0);
      if (*(char *)(lVar17 + 0x11) != '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x6a8))(DAT_146ab6358,lVar17);
        }
        *(undefined1 *)(lVar17 + 0x11) = 0;
      }
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
  plVar11 = local_d8;
  lVar17 = *local_108;
  uVar2 = *local_a8;
  FSceneRenderTargets::Get(param_2);
  lVar16 = *(longlong *)(param_3 + 0x18);
  local_148 = (float *)(lVar17 + 8);
  local_120 = local_e8;
  local_128 = local_a0;
  local_138 = (longlong *)(lVar16 + 0x1288);
  local_130 = lVar16 + 0x1298;
  if (lVar16 == 0) {
    local_138 = (longlong *)0;
    local_130 = 0;
  }
  local_140 = (float *)(plVar11 + 1);
  FUN_141b492b0(param_2,param_3,L"DistanceFieldAOHistory",uVar2);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x30))();
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x30))();
  }
  return;
}



// FUNCTION 141b39390 FUN_141b39390 body=2931 status=ok
// SIG undefined FUN_141b39390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b39390(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  short sVar10;
  char cVar11;
  byte bVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  ulonglong *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStack_628 [32];
  wchar_t *local_608;
  undefined1 local_600;
  undefined1 local_5f8;
  byte local_5e8;
  short local_5e6;
  longlong *local_5e0;
  int local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  longlong *local_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined8 local_598;
  longlong local_590;
  longlong local_588;
  undefined1 local_580 [8];
  longlong local_578;
  undefined1 local_570 [8];
  longlong local_568;
  longlong local_560;
  undefined8 local_558;
  longlong local_550;
  longlong local_548;
  longlong local_540;
  longlong local_538 [3];
  undefined4 local_520;
  undefined4 local_51c;
  undefined2 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined4 local_500;
  longlong local_4f8;
  longlong local_4f0;
  undefined4 local_4e8;
  uint local_4e4;
  undefined4 local_4e0;
  undefined1 local_4dc;
  undefined1 local_4d8 [24];
  undefined1 local_4c0 [24];
  undefined1 local_4a8 [304];
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  short local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined1 local_340;
  wchar_t *local_338;
  undefined2 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  uint local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8 [192];
  undefined4 local_218;
  undefined1 local_148 [12];
  undefined4 local_13c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_628;
  lVar22 = 0;
  local_538[0] = 0;
  local_538[1] = 0;
  local_598 = 0;
  local_5d0 = param_1;
  FScopedGPUStatEvent::Begin(local_538,param_2,&DAT_146a17770,&local_598);
  bVar8 = false;
  if (0 < *(int *)(param_1 + 200)) {
    piVar13 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x1da0);
    lVar18 = lVar22;
    do {
      if (0 < *piVar13) {
        bVar8 = true;
        break;
      }
      lVar18 = lVar18 + 1;
      piVar13 = piVar13 + 0xc34;
    } while (lVar18 < *(int *)(param_1 + 200));
  }
  bVar12 = 0;
  local_5e0 = (longlong *)0x0;
  local_5e8 = 0;
  lVar18 = FSceneRenderTargets::Get(param_2);
  local_568 = lVar18;
  lVar14 = (**(code **)(**(longlong **)(lVar18 + 0x60) + 0x10))();
  local_5e6 = *(short *)(lVar14 + 0x28);
  if (bVar8) {
    lVar14 = *(longlong *)(lVar18 + 0x378);
    local_368 = DAT_1464c9cc8;
    local_5c0._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
    local_360 = local_5c0._4_4_;
    local_338 = L"UnknownTexture2D";
    local_348 = DAT_146a9da74;
    local_364 = (undefined4)lVar14;
    local_5f8 = 1;
    local_600 = 1;
    local_608 = L"Distortion";
    local_378 = _DAT_1464c9cb8;
    uStack_374 = uRam00000001464c9cbc;
    uStack_370 = uRam00000001464c9cc0;
    uStack_36c = DAT_1464c9cc4;
    local_35c = 0;
    local_358 = 1;
    local_354 = 0x10000;
    local_34c = 2;
    local_344 = 1;
    local_340 = 0;
    local_330 = 1;
    local_5c0 = lVar14;
    local_350 = local_5e6;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_378,&local_5e0);
    if (local_5e0 == (longlong *)0x0) goto LAB_141b39eab;
    local_538[2] = local_5e0[1];
    local_520 = 0;
    local_5a8 = *(undefined8 *)(*(longlong *)(lVar18 + 0x60) + 8);
    local_51c = 0xffffffff;
    local_518 = 0x102;
    local_5a0 = 0x10001;
    local_59c = 0x21;
    FUN_140c63b80(local_2d8,1,local_538 + 2,&local_5a8);
    puVar24 = (ulonglong *)(param_2 + 0x30);
    puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
    uVar6 = *(undefined8 *)(*(longlong *)(lVar18 + 0x60) + 8);
    puVar17 = puVar19 + 4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(puVar24,0x28);
      puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar19 + 4;
    }
    *puVar24 = (ulonglong)puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar19;
    *(undefined8 **)(param_2 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_LAB_144dc9c70;
    *(undefined4 *)(puVar19 + 2) = local_13c;
    puVar19[3] = uVar6;
    FRHICommandListBase::CacheActiveRenderTargets(param_2,local_218,local_2d8,local_148);
    puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar19 + 0x54;
    if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
      FMemStackBase::AllocateNewChunk(puVar24,0x2a8);
      puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar19 + 0x54;
    }
    *puVar24 = (ulonglong)puVar17;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar19;
    *(undefined8 **)(param_2 + 8) = puVar19 + 1;
    puVar19[1] = 0;
    *puVar19 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar19 + 2,local_2d8);
    local_5d8 = 0;
    lVar14 = local_5d0;
    if (0 < *(int *)(local_5d0 + 200)) {
      local_5c0 = 0;
      do {
        local_5c8 = *(longlong *)(local_5d0 + 0xc0) + local_5c0;
        puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        uVar2 = *(undefined4 *)(local_5c8 + 0x1aac);
        uVar3 = *(undefined4 *)(local_5c8 + 0x1aa8);
        uVar4 = *(undefined4 *)(local_5c8 + 0x1aa4);
        uVar5 = *(undefined4 *)(local_5c8 + 0x1aa0);
        puVar17 = puVar19 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
          FMemStackBase::AllocateNewChunk(puVar24,0x30);
          puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar19 + 5;
        }
        lVar18 = local_568;
        lVar14 = local_5c8;
        *puVar24 = (ulonglong)puVar17;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar19;
        *(undefined8 **)(param_2 + 8) = puVar19 + 1;
        *(undefined4 *)(puVar19 + 2) = uVar5;
        *(undefined4 *)((longlong)puVar19 + 0x14) = uVar4;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_143f59420;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar3;
        *(undefined4 *)(puVar19 + 4) = uVar2;
        *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
        FUN_141d05c90(local_568,*(undefined4 *)(local_5c8 + 0x1a38),0xf,local_4a8);
        local_608 = (wchar_t *)CONCAT44(local_608._4_4_,1);
        (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_590,local_4a8,&DAT_146a632d8);
        local_5c8 = local_590;
        if (local_590 != 0) {
          LOCK();
          *(int *)(local_590 + 8) = *(int *)(local_590 + 8) + 1;
          UNLOCK();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        local_4f8 = *(longlong *)(lVar14 + 0x20);
        local_500 = 0x11;
        if (local_4f8 != 0) {
          LOCK();
          *(int *)(local_4f8 + 8) = *(int *)(local_4f8 + 8) + 1;
          UNLOCK();
        }
        local_4f0 = local_5c8;
        local_4e0 = 0;
        local_4dc = 0;
        local_4e4 = (uint)(*(char *)(lVar14 + 0x1205) != '\0') |
                    -(uint)(*(char *)(lVar14 + 0x11b4) != '\0') & 8;
        if (DAT_146a1c3b0 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar11 = IsInRenderingThread();
            if (cVar11 == '\0') {
              FScopedEvent::FScopedEvent(local_580);
              plVar16 = (longlong *)FUN_14049e3d0(local_4d8,0,0xff);
              lVar15 = *plVar16;
              *(undefined1 **)(lVar15 + 0x10) = &LAB_141b33e50;
              *(undefined1 **)(lVar15 + 0x18) = local_580;
              lVar15 = *plVar16;
              lVar9 = plVar16[2];
              lVar25 = plVar16[1];
              lVar7 = *(longlong *)(lVar15 + 0x28);
              piVar13 = (int *)(lVar7 + 0x48);
              if (lVar7 != 0) {
                LOCK();
                *piVar13 = *piVar13 + 1;
                UNLOCK();
              }
              local_588 = lVar7;
              FUN_1404a4fe0(lVar15,lVar25,(int)lVar9,1);
              if (lVar7 != 0) {
                LOCK();
                iVar1 = *piVar13;
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (iVar1 == 1) {
                  FGraphEvent::Recycle(local_588);
                }
              }
              FScopedEvent::~FScopedEvent(local_580);
            }
            else {
              lVar15 = operator_new(0x38);
              if (lVar15 == 0) {
                DAT_146a1c3b0 = 0;
              }
              else {
                DAT_146a1c3b0 =
                     TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar15);
              }
            }
          }
          else {
            lVar15 = operator_new(0x38);
            if (lVar15 == 0) {
              LOCK();
              if (DAT_146a1c3b0 == 0) {
                DAT_146a1c3b0 = 0;
              }
              UNLOCK();
            }
            else {
              lVar15 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar15);
              LOCK();
              if (DAT_146a1c3b0 != 0) {
                lVar15 = DAT_146a1c3b0;
              }
              DAT_146a1c3b0 = lVar15;
              UNLOCK();
            }
          }
        }
        local_4e8 = 1;
        local_508 = *(undefined8 *)(DAT_146a1c3b0 + 0x30);
        if (DAT_146a1c3a8 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar11 = IsInRenderingThread();
            if (cVar11 == '\0') {
              FScopedEvent::FScopedEvent(local_570);
              plVar16 = (longlong *)FUN_14049e3d0(local_4c0,0,0xff);
              lVar15 = *plVar16;
              *(undefined1 **)(lVar15 + 0x10) = &LAB_141b33e30;
              *(undefined1 **)(lVar15 + 0x18) = local_570;
              lVar15 = *plVar16;
              lVar9 = plVar16[2];
              lVar25 = plVar16[1];
              lVar7 = *(longlong *)(lVar15 + 0x28);
              piVar13 = (int *)(lVar7 + 0x48);
              if (lVar7 != 0) {
                LOCK();
                *piVar13 = *piVar13 + 1;
                UNLOCK();
              }
              local_578 = lVar7;
              FUN_1404a4fe0(lVar15,lVar25,(int)lVar9,1);
              if (lVar7 != 0) {
                LOCK();
                iVar1 = *piVar13;
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (iVar1 == 1) {
                  FGraphEvent::Recycle(local_578);
                }
              }
              FScopedEvent::~FScopedEvent(local_570);
            }
            else {
              lVar15 = operator_new(0x38);
              if (lVar15 == 0) {
                DAT_146a1c3a8 = 0;
              }
              else {
                DAT_146a1c3a8 =
                     TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar15);
              }
            }
          }
          else {
            lVar15 = operator_new(0x38);
            if (lVar15 == 0) {
              LOCK();
              if (DAT_146a1c3a8 == 0) {
                DAT_146a1c3a8 = 0;
              }
              UNLOCK();
            }
            else {
              lVar15 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar15);
              LOCK();
              if (DAT_146a1c3a8 != 0) {
                lVar15 = DAT_146a1c3a8;
              }
              DAT_146a1c3a8 = lVar15;
              UNLOCK();
            }
          }
        }
        local_608 = (wchar_t *)((ulonglong)local_608 & 0xffffffffffffff00);
        local_510 = *(undefined8 *)(DAT_146a1c3a8 + 0x30);
        bVar12 = FUN_141b30ab0(lVar14 + 0x1d98,param_2,lVar14,&local_510);
        bVar12 = local_5e8 | bVar12;
        local_5e8 = bVar12;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_4f8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_5c8);
        lVar14 = local_5d0;
        local_5d8 = local_5d8 + 1;
        local_5c0 = local_5c0 + 0x30d0;
      } while (local_5d8 < *(int *)(local_5d0 + 200));
      if (bVar12 != 0) {
        plVar21 = (longlong *)(*puVar24 + 7 & 0xfffffffffffffff8);
        local_560 = local_5e0[1];
        plVar16 = plVar21 + 1;
        if (*(longlong **)(param_2 + 0x38) < plVar16) {
          FMemStackBase::AllocateNewChunk(puVar24,0x10);
          plVar21 = (longlong *)(*puVar24 + 7 & 0xfffffffffffffff8);
          plVar16 = plVar21 + 1;
        }
        *puVar24 = (ulonglong)plVar16;
        *plVar21 = local_560;
        puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar19 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
          FMemStackBase::AllocateNewChunk(puVar24,0x30);
          puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar19 + 5;
        }
        *puVar24 = (ulonglong)puVar17;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar19;
        *(undefined8 **)(param_2 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar19 + 2) = 1;
        puVar19[3] = plVar21;
        *(undefined4 *)(puVar19 + 4) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x24) = 0;
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
      }
    }
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2d8);
    if (bVar12 != 0) {
      plVar16 = (longlong *)FUN_141ce54b0(lVar18);
      puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      local_558 = *(undefined8 *)(*plVar16 + 8);
      puVar17 = puVar19 + 1;
      if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(puVar24,0x10);
        puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar19 + 1;
      }
      *puVar24 = (ulonglong)puVar17;
      *puVar19 = local_558;
      puVar20 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar20 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(puVar24,0x30);
        puVar20 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar20 + 5;
      }
      *puVar24 = (ulonglong)puVar17;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar20;
      *(undefined8 **)(param_2 + 8) = puVar20 + 1;
      puVar20[1] = 0;
      *puVar20 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar20 + 2) = 1;
      puVar20[3] = puVar19;
      *(undefined4 *)(puVar20 + 4) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x24) = 0;
      local_5b0 = (longlong *)0x0;
      puVar17 = (undefined8 *)FUN_141ce54b0(lVar18);
      puVar17 = (undefined8 *)(**(code **)(*(longlong *)*puVar17 + 0x10))();
      local_5f8 = 1;
      local_600 = 1;
      local_328 = *puVar17;
      uStack_320 = puVar17[1];
      local_318 = puVar17[2];
      uStack_310 = puVar17[3];
      local_308 = puVar17[4];
      uStack_300 = puVar17[5];
      uStack_2f4 = *(undefined4 *)((longlong)puVar17 + 0x34);
      uStack_2f0 = *(undefined4 *)(puVar17 + 7);
      uStack_2ec = *(undefined4 *)((longlong)puVar17 + 0x3c);
      local_2e8 = *(undefined4 *)(puVar17 + 8);
      uStack_2e4 = *(undefined4 *)((longlong)puVar17 + 0x44);
      uStack_2e0 = *(undefined4 *)(puVar17 + 9);
      uStack_2dc = *(undefined4 *)((longlong)puVar17 + 0x4c);
      local_2f8 = *(uint *)(puVar17 + 6) & 0x7fefffff;
      local_608 = L"DistortedSceneColor";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_328,&local_5b0);
      plVar16 = local_5b0;
      local_600 = 0;
      local_608 = (wchar_t *)CONCAT44(local_608._4_4_,0x11);
      FUN_141ad74f0(param_2,local_5b0[1],*(undefined8 *)(*(longlong *)(lVar18 + 0x60) + 8),0);
      lVar15 = local_5d0;
      sVar10 = local_5e6;
      if (0 < (int)*(uint *)(lVar14 + 200)) {
        uVar26 = (ulonglong)*(uint *)(lVar14 + 200);
        do {
          if (sVar10 == 1) {
            FUN_141b1c630();
          }
          else {
            FUN_141b1c1d0(param_2,lVar18,*(longlong *)(lVar15 + 0xc0) + lVar22,local_5e0);
          }
          lVar22 = lVar22 + 0x30d0;
          uVar26 = uVar26 - 1;
          lVar14 = local_5d0;
        } while (uVar26 != 0);
      }
      lVar22 = 0;
      puVar24 = (ulonglong *)(param_2 + 0x30);
      local_550 = plVar16[1];
      plVar23 = (longlong *)(*puVar24 + 7 & 0xfffffffffffffff8);
      plVar21 = plVar23 + 1;
      if (*(longlong **)(param_2 + 0x38) < plVar21) {
        FMemStackBase::AllocateNewChunk(puVar24,0x10);
        plVar23 = (longlong *)(*puVar24 + 7 & 0xfffffffffffffff8);
        plVar21 = plVar23 + 1;
      }
      *puVar24 = (ulonglong)plVar21;
      *plVar23 = local_550;
      puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar19 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar17) {
        FMemStackBase::AllocateNewChunk(puVar24,0x30);
        puVar19 = (undefined8 *)(*puVar24 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar19 + 5;
      }
      *puVar24 = (ulonglong)puVar17;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar19;
      *(undefined8 **)(param_2 + 8) = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar19 + 2) = 1;
      puVar19[3] = plVar23;
      *(undefined4 *)(puVar19 + 4) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x24) = 0;
      uVar6 = *(undefined8 *)(*(longlong *)(lVar18 + 0x60) + 8);
      plVar21 = (longlong *)FUN_141ce54b0(lVar18);
      local_600 = 1;
      local_608 = (wchar_t *)CONCAT44(local_608._4_4_,0x21);
      FUN_141ad74f0(param_2,*(undefined8 *)(*plVar21 + 8),uVar6,0);
      sVar10 = local_5e6;
      if (0 < (int)*(uint *)(lVar14 + 200)) {
        uVar26 = (ulonglong)*(uint *)(lVar14 + 200);
        do {
          lVar15 = plVar16[1];
          lVar25 = *(longlong *)(lVar14 + 0xc0) + lVar22;
          if (sVar10 == 1) {
            local_548 = lVar15;
            FUN_141b1d020(param_2,lVar18,lVar25,&local_548);
          }
          else {
            local_540 = lVar15;
            FUN_141b1ca90(param_2,lVar18,lVar25,&local_540);
          }
          lVar22 = lVar22 + 0x30d0;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      if (local_5b0 != (longlong *)0x0) {
        (**(code **)(*local_5b0 + 0x30))();
      }
    }
  }
  if (local_5e0 != (longlong *)0x0) {
    (**(code **)(*local_5e0 + 0x30))();
  }
LAB_141b39eab:
  if (local_538[0] != 0) {
    FScopedGPUStatEvent::End(local_538);
  }
  return;
}



// FUNCTION 141b39f10 FUN_141b39f10 body=5029 status=ok
// SIG undefined FUN_141b39f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b39f10(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_518 [32];
  wchar_t *local_4f8;
  float local_4f0;
  float local_4e8;
  float local_4e0;
  float local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b0;
  ulonglong local_4a8;
  uint local_498;
  undefined8 local_490;
  longlong local_488;
  undefined8 local_480;
  longlong local_478;
  undefined8 *local_470;
  longlong *local_468;
  int local_460;
  int local_45c;
  longlong local_458;
  longlong local_450;
  longlong local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined8 local_424;
  undefined8 uStack_41c;
  undefined8 local_414;
  undefined4 local_40c;
  undefined1 local_408 [8];
  longlong local_400;
  undefined1 local_3f8 [8];
  longlong local_3f0;
  longlong local_3e8;
  undefined1 local_3e0 [8];
  longlong local_3d8;
  undefined1 local_3d0 [8];
  longlong local_3c8;
  longlong local_3c0;
  undefined1 local_3b8 [8];
  longlong local_3b0;
  undefined8 local_3a8;
  ulonglong local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368;
  uint local_364;
  undefined4 local_360;
  undefined1 local_35c;
  undefined *local_358;
  undefined4 local_350;
  undefined *local_348;
  undefined4 local_340;
  longlong local_338 [8];
  ulonglong local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [64];
  longlong local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_238 [24];
  undefined1 local_220 [24];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [80];
  undefined8 local_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_518;
  iVar15 = 0;
  local_498 = 0;
  local_4a8 = local_4a8 & 0xffffffff00000000;
  local_450 = param_2;
  local_448 = param_1;
  cVar7 = FUN_142753a10();
  if (((cVar7 != '\0') && (cVar7 = FUN_142753b00(), cVar7 == '\0')) ||
     (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 != '\0')) {
    bVar27 = false;
    if (0 < *(int *)(param_1 + 200)) {
      piVar9 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x1da0);
      do {
        if (0 < *piVar9) {
          bVar27 = true;
          break;
        }
        iVar15 = iVar15 + 1;
        piVar9 = piVar9 + 0xc34;
      } while (iVar15 < *(int *)(param_1 + 200));
    }
    uVar26 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x38) <
         DAT_146a1b3c8) && (_Init_thread_header(&DAT_146a1b3c8), DAT_146a1b3c8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a1b3c0 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DisableDistortion");
      _Init_thread_footer(&DAT_146a1b3c8);
    }
    iVar15 = (**(code **)(*DAT_146a1b3c0 + 0x68))();
    if ((bVar27) && (iVar15 == 0)) {
      lVar10 = FSceneRenderTargets::Get(param_2);
      local_42c = *(undefined4 *)(param_1 + 0x2b0);
      local_428 = *(undefined4 *)(param_1 + 0x2b4);
      local_438 = 0;
      local_430 = 0;
      local_424 = 0xffffffffffffffff;
      uStack_41c = 0xffffffffffffffff;
      local_414 = 0;
      local_40c = 0;
      local_488 = lVar10;
      puVar11 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture(lVar10);
      uVar3 = *puVar11;
      puVar11 = (undefined8 *)FSceneRenderTargets::GetSceneColorSurface(lVar10);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar13 = (longlong *)*puVar11;
      puVar11 = puVar20 + 10;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
        puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar20 + 10;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar20;
      *(undefined8 **)(param_2 + 8) = puVar20 + 1;
      puVar20[1] = 0;
      *puVar20 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar20 + 2) = (undefined4)local_438;
      *(undefined4 *)((longlong)puVar20 + 0x14) = local_438._4_4_;
      *(undefined4 *)(puVar20 + 3) = local_430;
      *(undefined4 *)((longlong)puVar20 + 0x1c) = local_42c;
      *(undefined4 *)(puVar20 + 4) = local_428;
      *(undefined4 *)((longlong)puVar20 + 0x24) = (undefined4)local_424;
      *(undefined4 *)(puVar20 + 5) = local_424._4_4_;
      *(undefined4 *)((longlong)puVar20 + 0x2c) = (undefined4)uStack_41c;
      *(undefined4 *)(puVar20 + 6) = uStack_41c._4_4_;
      *(undefined4 *)((longlong)puVar20 + 0x34) = (undefined4)local_414;
      *(undefined4 *)(puVar20 + 7) = local_414._4_4_;
      *(undefined4 *)((longlong)puVar20 + 0x3c) = local_40c;
      puVar20[8] = plVar13;
      puVar20[9] = uVar3;
      lVar10 = (**(code **)(*plVar13 + 8))(plVar13);
      if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[8] + 0x18))(), lVar10 == 0))
      {
        (**(code **)(*(longlong *)puVar20[8] + 0x20))();
      }
      lVar10 = (**(code **)(*(longlong *)puVar20[9] + 8))();
      if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[9] + 0x18))(), lVar10 == 0))
      {
        (**(code **)(*(longlong *)puVar20[9] + 0x20))();
      }
      lVar10 = local_488;
      local_468 = (longlong *)0x0;
      puVar11 = (undefined8 *)FUN_141ce54b0(local_488);
      puVar11 = (undefined8 *)(**(code **)(*(longlong *)*puVar11 + 0x10))();
      local_4e8 = (float)CONCAT31(local_4e8._1_3_,1);
      local_4f0._0_1_ = 1;
      local_a8 = *puVar11;
      uStack_a0 = puVar11[1];
      local_98 = puVar11[2];
      uStack_90 = puVar11[3];
      local_88 = puVar11[4];
      uStack_80 = puVar11[5];
      uStack_74 = *(undefined4 *)((longlong)puVar11 + 0x34);
      uStack_70 = *(undefined4 *)(puVar11 + 7);
      uStack_6c = *(undefined4 *)((longlong)puVar11 + 0x3c);
      local_68 = puVar11[8];
      uStack_60 = puVar11[9];
      local_78 = *(uint *)(puVar11 + 6) & 0x7fefffff;
      local_4f8 = L"SceneColorDistorted";
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_a8,&local_468);
      local_168 = 0;
      puStack_160 = (undefined8 *)0x0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = (undefined8 *)0x0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_128 = 0;
      local_120 = 0;
      local_11c = 0x26;
      local_114 = 0;
      local_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_bc = 0;
      local_b4 = 0;
      local_4f0 = (float)((uint)local_4f0._1_3_ << 8);
      local_398 = 1;
      local_4f8 = (wchar_t *)CONCAT44(local_4f8._4_4_,1);
      FUN_141ad74f0(param_2,local_468[1],*(undefined8 *)(*(longlong *)(lVar10 + 0x60) + 8),4);
      FUN_14049afe0(param_2,&local_168);
      iVar15 = *(int *)(param_1 + 200);
      puVar11 = (undefined8 *)(longlong)iVar15;
      local_470 = puVar11;
      if (0 < iVar15) {
        local_478 = 0;
        puVar20 = puVar11;
        local_3a0 = uVar26;
        do {
          lVar10 = local_478 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
          local_458 = lVar10;
          FUN_141cd7760(local_338,param_2,lVar10);
          uVar26 = local_2f8;
          local_2c8 = *(undefined1 (*) [16])(lVar10 + 0x1aa0);
          local_2f0 = local_2c8._0_4_;
          local_4a8 = local_2c8._0_8_;
          local_2e8 = local_2c8._8_4_;
          uVar5 = local_2c8._12_4_;
          uVar23 = local_2c8._4_4_;
          local_490 = local_2c8._8_8_;
          puVar16 = (undefined8 *)(*(longlong *)(local_2f8 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar16 + 5;
          local_2ec = uVar23;
          local_2e4 = uVar5;
          if (*(undefined8 **)(local_2f8 + 0x38) < puVar14) {
            FMemStackBase::AllocateNewChunk(local_2f8 + 0x30,0x30);
            puVar16 = (undefined8 *)(*(longlong *)(uVar26 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar16 + 5;
          }
          *(undefined8 **)(uVar26 + 0x30) = puVar14;
          *(int *)(uVar26 + 0x14) = *(int *)(uVar26 + 0x14) + 1;
          **(undefined8 **)(uVar26 + 8) = puVar16;
          *(undefined8 **)(uVar26 + 8) = puVar16 + 1;
          puVar16[1] = 0;
          *puVar16 = &PTR_LAB_143f59420;
          *(int *)(puVar16 + 2) = (int)local_4a8;
          *(undefined4 *)((longlong)puVar16 + 0x14) = uVar23;
          plVar13 = (longlong *)0x0;
          *(int *)((longlong)puVar16 + 0x1c) = (int)local_490;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(undefined4 *)(puVar16 + 4) = uVar5;
          *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
          if (DAT_146852b40 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar7 = IsInRenderingThread();
              if (cVar7 == '\0') {
                FScopedEvent::FScopedEvent(local_3b8);
                plVar12 = (longlong *)FUN_14049e3d0(local_238,0,0xff);
                lVar10 = *plVar12;
                *(undefined1 **)(lVar10 + 0x10) = &LAB_1404a0f60;
                *(undefined1 **)(lVar10 + 0x18) = local_3b8;
                lVar10 = *plVar12;
                lVar4 = plVar12[2];
                lVar22 = plVar12[1];
                lVar17 = *(longlong *)(lVar10 + 0x28);
                piVar9 = (int *)(lVar17 + 0x48);
                if (lVar17 != 0) {
                  LOCK();
                  *piVar9 = *piVar9 + 1;
                  UNLOCK();
                }
                local_3c0 = lVar17;
                FUN_1404a4fe0(lVar10,lVar22,(int)lVar4,1);
                if (lVar17 != 0) {
                  LOCK();
                  iVar15 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    FGraphEvent::Recycle(local_3c0);
                  }
                }
                FScopedEvent::~FScopedEvent(local_3b8);
              }
              else {
                lVar10 = operator_new(0x38);
                if (lVar10 == 0) {
                  DAT_146852b40 = 0;
                }
                else {
                  DAT_146852b40 =
                       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
                }
              }
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                LOCK();
                if (DAT_146852b40 == 0) {
                  DAT_146852b40 = 0;
                }
                UNLOCK();
              }
              else {
                lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar10);
                LOCK();
                if (DAT_146852b40 != 0) {
                  lVar10 = DAT_146852b40;
                }
                DAT_146852b40 = lVar10;
                UNLOCK();
              }
            }
          }
          local_138 = *(undefined8 *)(DAT_146852b40 + 0x30);
          if (DAT_146864320 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar7 = IsInRenderingThread();
              if (cVar7 == '\0') {
                FScopedEvent::FScopedEvent(local_408);
                plVar12 = (longlong *)FUN_14049e3d0(local_1d8,0,0xff);
                lVar10 = *plVar12;
                *(undefined1 **)(lVar10 + 0x10) = &LAB_140985690;
                *(undefined1 **)(lVar10 + 0x18) = local_408;
                lVar10 = *plVar12;
                lVar4 = plVar12[2];
                lVar22 = plVar12[1];
                lVar17 = *(longlong *)(lVar10 + 0x28);
                piVar9 = (int *)(lVar17 + 0x48);
                if (lVar17 != 0) {
                  LOCK();
                  *piVar9 = *piVar9 + 1;
                  UNLOCK();
                }
                local_3b0 = lVar17;
                FUN_1404a4fe0(lVar10,lVar22,(int)lVar4,1);
                if (lVar17 != 0) {
                  LOCK();
                  iVar15 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    FGraphEvent::Recycle(local_3b0);
                  }
                }
                FScopedEvent::~FScopedEvent(local_408);
              }
              else {
                lVar10 = operator_new(0x38);
                if (lVar10 == 0) {
                  DAT_146864320 = 0;
                }
                else {
                  DAT_146864320 =
                       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
                }
              }
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                LOCK();
                if (DAT_146864320 == 0) {
                  DAT_146864320 = 0;
                }
                UNLOCK();
              }
              else {
                lVar10 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar10);
                LOCK();
                if (DAT_146864320 != 0) {
                  lVar10 = DAT_146864320;
                }
                DAT_146864320 = lVar10;
                UNLOCK();
              }
            }
          }
          uStack_130 = *(undefined8 *)(DAT_146864320 + 0x30);
          if (DAT_146864318 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar7 = IsInRenderingThread();
              if (cVar7 == '\0') {
                FScopedEvent::FScopedEvent(local_3f8);
                plVar12 = (longlong *)FUN_14049e3d0(local_220,0,0xff);
                lVar10 = *plVar12;
                *(undefined1 **)(lVar10 + 0x10) = &LAB_140985680;
                *(undefined1 **)(lVar10 + 0x18) = local_3f8;
                lVar10 = *plVar12;
                lVar4 = plVar12[2];
                lVar22 = plVar12[1];
                lVar17 = *(longlong *)(lVar10 + 0x28);
                piVar9 = (int *)(lVar17 + 0x48);
                if (lVar17 != 0) {
                  LOCK();
                  *piVar9 = *piVar9 + 1;
                  UNLOCK();
                }
                local_400 = lVar17;
                FUN_1404a4fe0(lVar10,lVar22,(int)lVar4,1);
                if (lVar17 != 0) {
                  LOCK();
                  iVar15 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    FGraphEvent::Recycle(local_400);
                  }
                }
                FScopedEvent::~FScopedEvent(local_3f8);
              }
              else {
                lVar10 = operator_new(0x38);
                if (lVar10 == 0) {
                  DAT_146864318 = 0;
                }
                else {
                  DAT_146864318 =
                       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
                }
              }
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                LOCK();
                if (DAT_146864318 == 0) {
                  DAT_146864318 = 0;
                }
                UNLOCK();
              }
              else {
                lVar10 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar10);
                LOCK();
                if (DAT_146864318 != 0) {
                  lVar10 = DAT_146864318;
                }
                DAT_146864318 = lVar10;
                UNLOCK();
              }
            }
          }
          local_350 = 0;
          local_128 = *(undefined8 *)(DAT_146864318 + 0x30);
          lVar10 = *(longlong *)(local_458 + 0x3090);
          local_358 = &DAT_146a51f90;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar10 + 0x38,&local_460,&local_358);
          plVar12 = plVar13;
          if (local_460 != -1) {
            plVar12 = (longlong *)((longlong)local_460 * 0x20 + *(longlong *)(lVar10 + 0x38));
          }
          local_340 = 0;
          plVar21 = plVar12 + 2;
          if (plVar12 == (longlong *)0x0) {
            plVar21 = plVar13;
          }
          local_348 = &DAT_146a1abd0;
          lVar22 = *plVar21;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar10 + 0x38,&local_45c,&local_348);
          plVar12 = plVar13;
          if (local_45c != -1) {
            plVar12 = (longlong *)((longlong)local_45c * 0x20 + *(longlong *)(lVar10 + 0x38));
          }
          plVar21 = plVar12 + 2;
          if (plVar12 == (longlong *)0x0) {
            plVar21 = plVar13;
          }
          lVar10 = *plVar21;
          local_168 = DAT_1464c2720;
          if (lVar22 == 0) {
            local_498 = local_498 | 1;
            puStack_160 = (undefined8 *)0x0;
            puVar11 = puStack_160;
          }
          else {
            lVar17 = *(longlong *)(lVar22 + 0x48);
            if (*(char *)(lVar17 + 0x28) == '\0') {
              FUN_1419f3850(lVar17);
            }
            puStack_160 = *(undefined8 **)(lVar17 + 0x38);
          }
          puVar14 = (undefined8 *)0x0;
          uVar24 = local_498;
          if (((local_498 & 1) != 0) &&
             (uVar24 = local_498 & 0xfffffffe, local_498 = uVar24, puVar11 != (undefined8 *)0x0)) {
            LOCK();
            piVar9 = (int *)(puVar11 + 1);
            iVar15 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              if ((*(char *)(puVar11 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                LOCK();
                bVar27 = *(int *)((longlong)puVar11 + 0xc) == 0;
                if (bVar27) {
                  *(int *)((longlong)puVar11 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar27) {
                  uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  puVar16 = puVar14;
                  if (uVar8 != 0) {
                    puVar16 = (undefined8 *)
                              ((&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18);
                  }
                  puVar16[1] = puVar11;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar8);
                }
              }
              else {
                (**(code **)*puVar11)(puVar11,1);
              }
            }
          }
          if (lVar10 == 0) {
            uVar24 = uVar24 | 2;
            puVar20 = puVar14;
            local_498 = uVar24;
          }
          else {
            lVar17 = *(longlong *)(lVar10 + 0x48);
            if (*(char *)(lVar17 + 0x28) == '\0') {
              FUN_1419f3850(lVar17);
            }
            puVar14 = *(undefined8 **)(lVar17 + 0x40);
          }
          lVar17 = 0;
          local_148 = puVar14;
          if (((uVar24 & 2) != 0) && (local_498 = uVar24 & 0xfffffffd, puVar20 != (undefined8 *)0x0)
             ) {
            LOCK();
            piVar9 = (int *)(puVar20 + 1);
            iVar15 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              if ((*(char *)(puVar20 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                LOCK();
                bVar27 = *(int *)((longlong)puVar20 + 0xc) == 0;
                if (bVar27) {
                  *(int *)((longlong)puVar20 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar27) {
                  uVar24 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar24 != 0) {
                    lVar17 = (&DAT_1468a81f8)[uVar24 >> 0xe] + (ulonglong)(uVar24 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar17 + 8) = puVar20;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar24);
                }
              }
              else {
                (**(code **)*puVar20)(puVar20,1);
              }
            }
          }
          local_11c = local_11c & 0xffffffff00000000;
          FUN_141ed6ac0(local_450,&local_168,2,1);
          lVar17 = *(longlong *)(lVar22 + 0x48);
          local_440 = *(undefined8 *)(local_338[0] + 0x20);
          if (*(char *)(lVar17 + 0x28) == '\0') {
            FUN_1419f3850(lVar17);
          }
          local_490 = *(undefined8 *)(lVar17 + 0x38);
          lVar17 = 0;
          local_4a8 = local_2f8;
          if (0 < *(int *)(lVar22 + 0x10)) {
            do {
              if (*(undefined **)(*(longlong *)(lVar22 + 8) + lVar17 * 8) == &DAT_146b096e0) {
                if (lVar17 != -1) {
                  puVar19 = *(undefined4 **)(*(longlong *)(lVar22 + 0x18) + lVar17 * 8);
                  *puVar19 = *(undefined4 *)(lVar22 + 0xb8);
                  goto LAB_141b3ab16;
                }
                break;
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(int *)(lVar22 + 0x10));
          }
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + local_3a0 * 8) + 0x38) <
               DAT_146a0e8b8) && (_Init_thread_header(&DAT_146a0e8b8), DAT_146a0e8b8 == -1)) {
            _DAT_146a0e8b0 = 0;
            DAT_146a0e8b4 = 0;
            DAT_146a0e8b6 = 0;
            _Init_thread_footer(&DAT_146a0e8b8);
          }
          puVar19 = (undefined4 *)&DAT_146a0e8b0;
LAB_141b3ab16:
          if (*(char *)((longlong)puVar19 + 6) != '\0') {
            puVar1 = (ulonglong *)(local_4a8 + 0x30);
            uVar2 = *(ushort *)(puVar19 + 1);
            puVar16 = (undefined8 *)(*(longlong *)(local_4a8 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar16 + 5;
            if (*(undefined8 **)(local_4a8 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(puVar1);
              puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar14 = puVar16 + 5;
            }
            *puVar1 = (ulonglong)puVar14;
            *(int *)(local_4a8 + 0x14) = *(int *)(local_4a8 + 0x14) + 1;
            **(undefined8 **)(local_4a8 + 8) = puVar16;
            *(undefined8 **)(local_4a8 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_144dcb388;
            puVar16[2] = local_490;
            puVar16[4] = local_440;
            *(uint *)(puVar16 + 3) = (uint)uVar2;
          }
          plVar13 = (longlong *)FUN_141ce54b0(local_488);
          local_490 = *(undefined8 *)(*plVar13 + 0x10);
          FSceneRenderTargets::Get(local_2f8);
          lVar17 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar17 + 0x28) == '\0') {
            FUN_1419f3850(lVar17);
          }
          uVar3 = *(undefined8 *)(lVar17 + 0x40);
          FUN_141aa9690(lVar10,local_2f8,uVar3,*(undefined8 *)(local_458 + 0x20));
          local_3a8 = FUN_1404a0e20();
          uVar26 = local_2f8;
          if (*(short *)(lVar10 + 0xc2) != 0) {
            local_4a8 = CONCAT44(local_4a8._4_4_,(uint)*(ushort *)(lVar10 + 0xc0));
            puVar16 = (undefined8 *)(*(longlong *)(local_2f8 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar16 + 5;
            if (*(undefined8 **)(local_2f8 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(local_2f8 + 0x30);
              puVar16 = (undefined8 *)(*(longlong *)(uVar26 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar16 + 5;
            }
            *(undefined8 **)(uVar26 + 0x30) = puVar14;
            *(int *)(uVar26 + 0x14) = *(int *)(uVar26 + 0x14) + 1;
            **(undefined8 **)(uVar26 + 8) = puVar16;
            *(undefined8 **)(uVar26 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_143f59c80;
            *(undefined4 *)(puVar16 + 3) = (undefined4)local_4a8;
            puVar16[4] = local_490;
            puVar16[2] = uVar3;
          }
          if (*(short *)(lVar10 + 0xc6) != 0) {
            local_4a8 = CONCAT44(local_4a8._4_4_,(uint)*(ushort *)(lVar10 + 0xc4));
            puVar16 = (undefined8 *)(*(longlong *)(uVar26 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar16 + 5;
            if (*(undefined8 **)(uVar26 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(uVar26 + 0x30);
              puVar16 = (undefined8 *)(*(longlong *)(uVar26 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar16 + 5;
            }
            *(undefined8 **)(uVar26 + 0x30) = puVar14;
            *(int *)(uVar26 + 0x14) = *(int *)(uVar26 + 0x14) + 1;
            **(undefined8 **)(uVar26 + 8) = puVar16;
            *(undefined8 **)(uVar26 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_143f59c70;
            *(undefined4 *)(puVar16 + 3) = (undefined4)local_4a8;
            puVar16[4] = local_3a8;
            puVar16[2] = uVar3;
          }
          param_2 = local_450;
          local_4b0 = 1;
          iVar15 = *(int *)(local_458 + 0x1aac) - *(int *)(local_458 + 0x1aa4);
          local_4c8 = *(undefined8 *)(local_488 + 0x378);
          iVar18 = *(int *)(local_458 + 0x1aa8) - *(int *)(local_458 + 0x1aa0);
          local_4b8 = 1;
          local_4d8 = (float)iVar15;
          local_480 = CONCAT44(iVar15,iVar18);
          local_4d0 = local_480;
          local_4e0 = (float)iVar18;
          local_4f0 = (float)*(int *)(local_458 + 0x1aa0);
          local_4e8 = (float)*(int *)(local_458 + 0x1aa4);
          local_4f8 = (wchar_t *)CONCAT44(local_4f8._4_4_,local_4d8);
          local_4c0 = lVar22;
          DrawRectangle(local_450);
          FRenderingCompositePassContext::~FRenderingCompositePassContext(local_338);
          local_478 = local_478 + 1;
          param_1 = local_448;
        } while (local_478 < (longlong)local_470);
        iVar15 = *(int *)(local_448 + 200);
      }
      local_480 = (longlong)iVar15;
      if (0 < iVar15) {
        local_478 = 0;
        do {
          lVar22 = *(longlong *)(param_1 + 0xc0) + local_478;
          FUN_141cd7760(local_2a8,param_2,lVar22);
          lVar10 = local_268;
          local_2b8 = *(undefined1 (*) [16])(lVar22 + 0x1aa0);
          local_258 = local_2b8._8_4_;
          uVar5 = local_2b8._12_4_;
          local_470 = local_2b8._8_8_;
          uVar23 = local_2b8._0_4_;
          uVar25 = local_2b8._4_4_;
          puVar20 = (undefined8 *)(*(longlong *)(local_268 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar11 = puVar20 + 5;
          local_260 = uVar23;
          local_25c = uVar25;
          local_254 = uVar5;
          if (*(undefined8 **)(local_268 + 0x38) < puVar11) {
            FMemStackBase::AllocateNewChunk(local_268 + 0x30,0x30);
            puVar20 = (undefined8 *)(*(longlong *)(lVar10 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar11 = puVar20 + 5;
          }
          *(undefined8 **)(lVar10 + 0x30) = puVar11;
          *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
          **(undefined8 **)(lVar10 + 8) = puVar20;
          *(undefined8 **)(lVar10 + 8) = puVar20 + 1;
          puVar20[1] = 0;
          *puVar20 = &PTR_LAB_143f59420;
          *(int *)((longlong)puVar20 + 0x1c) = (int)local_470;
          *(undefined4 *)(puVar20 + 2) = uVar23;
          *(undefined4 *)((longlong)puVar20 + 0x14) = uVar25;
          *(undefined4 *)(puVar20 + 3) = 0;
          *(undefined4 *)(puVar20 + 4) = uVar5;
          *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
          FUN_141d05b30(local_488,*(undefined4 *)(lVar22 + 0x1a38),1,local_1b8);
          local_4f8 = (wchar_t *)CONCAT44(local_4f8._4_4_,1);
          (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_3f0,local_1b8,&DAT_146a63368);
          local_3c8 = local_3f0;
          if (local_3f0 != 0) {
            LOCK();
            *(int *)(local_3f0 + 8) = *(int *)(local_3f0 + 8) + 1;
            UNLOCK();
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
          local_378 = *(longlong *)(lVar22 + 0x20);
          local_380 = 0x11;
          if (local_378 != 0) {
            LOCK();
            *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
            UNLOCK();
          }
          local_370 = local_3c8;
          local_360 = 0;
          local_35c = 0;
          local_364 = (uint)(*(char *)(lVar22 + 0x1205) != '\0') |
                      -(uint)(*(char *)(lVar22 + 0x11b4) != '\0') & 8;
          if (DAT_146852b40 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar7 = IsInRenderingThread();
              if (cVar7 == '\0') {
                FScopedEvent::FScopedEvent(local_3e0);
                plVar13 = (longlong *)FUN_14049e3d0(local_208,0,0xff);
                lVar10 = *plVar13;
                *(undefined1 **)(lVar10 + 0x10) = &LAB_1404a0f60;
                *(undefined1 **)(lVar10 + 0x18) = local_3e0;
                lVar10 = *plVar13;
                lVar6 = plVar13[2];
                lVar17 = plVar13[1];
                lVar4 = *(longlong *)(lVar10 + 0x28);
                piVar9 = (int *)(lVar4 + 0x48);
                if (lVar4 != 0) {
                  LOCK();
                  *piVar9 = *piVar9 + 1;
                  UNLOCK();
                }
                local_3e8 = lVar4;
                FUN_1404a4fe0(lVar10,lVar17,(int)lVar6,1);
                if (lVar4 != 0) {
                  LOCK();
                  iVar15 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    FGraphEvent::Recycle(local_3e8);
                  }
                }
                FScopedEvent::~FScopedEvent(local_3e0);
              }
              else {
                lVar10 = operator_new(0x38);
                if (lVar10 == 0) {
                  DAT_146852b40 = 0;
                }
                else {
                  DAT_146852b40 =
                       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
                }
              }
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                LOCK();
                if (DAT_146852b40 == 0) {
                  DAT_146852b40 = 0;
                }
                UNLOCK();
              }
              else {
                lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar10);
                LOCK();
                if (DAT_146852b40 != 0) {
                  lVar10 = DAT_146852b40;
                }
                DAT_146852b40 = lVar10;
                UNLOCK();
              }
            }
          }
          local_390 = *(undefined8 *)(DAT_146852b40 + 0x30);
          if (DAT_146a0e7a0 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar7 = IsInRenderingThread();
              if (cVar7 == '\0') {
                FScopedEvent::FScopedEvent(local_3d0);
                plVar13 = (longlong *)FUN_14049e3d0(local_1f0,0,0xff);
                lVar10 = *plVar13;
                *(undefined1 **)(lVar10 + 0x10) = &LAB_141ac0f40;
                *(undefined1 **)(lVar10 + 0x18) = local_3d0;
                lVar10 = *plVar13;
                lVar6 = plVar13[2];
                lVar17 = plVar13[1];
                lVar4 = *(longlong *)(lVar10 + 0x28);
                piVar9 = (int *)(lVar4 + 0x48);
                if (lVar4 != 0) {
                  LOCK();
                  *piVar9 = *piVar9 + 1;
                  UNLOCK();
                }
                local_3d8 = lVar4;
                FUN_1404a4fe0(lVar10,lVar17,(int)lVar6,1);
                if (lVar4 != 0) {
                  LOCK();
                  iVar15 = *piVar9;
                  *piVar9 = *piVar9 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    FGraphEvent::Recycle(local_3d8);
                  }
                }
                FScopedEvent::~FScopedEvent(local_3d0);
              }
              else {
                lVar10 = operator_new(0x38);
                if (lVar10 == 0) {
                  DAT_146a0e7a0 = 0;
                }
                else {
                  DAT_146a0e7a0 =
                       TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
                }
              }
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                LOCK();
                if (DAT_146a0e7a0 == 0) {
                  DAT_146a0e7a0 = 0;
                }
                UNLOCK();
              }
              else {
                lVar10 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar10);
                LOCK();
                if (DAT_146a0e7a0 != 0) {
                  lVar10 = DAT_146a0e7a0;
                }
                DAT_146a0e7a0 = lVar10;
                UNLOCK();
              }
            }
          }
          param_2 = local_450;
          local_388 = *(undefined8 *)(DAT_146a0e7a0 + 0x30);
          local_368 = 0;
          local_4f8 = (wchar_t *)((ulonglong)local_4f8 & 0xffffffffffffff00);
          FUN_141b30ab0(lVar22 + 0x1d98,local_450,lVar22,&local_390);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_378);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3c8);
          FRenderingCompositePassContext::~FRenderingCompositePassContext(local_2a8);
          local_478 = local_478 + 0x30d0;
          local_480 = local_480 + -1;
          param_1 = local_448;
        } while (local_480 != 0);
      }
      FUN_141d04b60(local_488,local_468);
      if (local_468 != (longlong *)0x0) {
        (**(code **)(*local_468 + 0x30))();
      }
    }
  }
  return;
}



// FUNCTION 141b3b2c0 FUN_141b3b2c0 body=247 status=ok
// SIG undefined FUN_141b3b2c0(void)

undefined8 FUN_141b3b2c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((0 < *(int *)(*(longlong *)(param_1 + 8) + 0x1900)) &&
     ((DAT_146ac3ac0 == 0 || (*(int *)(param_1 + 0x2a0) < 3)))) {
    uVar2 = FSceneRenderTargets::Get(param_2);
    FUN_141cdeb70(uVar2,param_2,0,0x21,1);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + *(longlong *)(param_1 + 0xc0);
        if ((*(char *)(lVar1 + 0x1a98) != '\0') &&
           (*(float *)(lVar1 + 0x3cc) <= 1.0 && *(float *)(lVar1 + 0x3cc) != 1.0)) {
          FUN_141b3bdc0(param_1,param_2,lVar1,param_3);
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 0x30d0;
      } while (iVar4 < *(int *)(param_1 + 200));
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141b3b3c0 FUN_141b3b3c0 body=539 status=ok
// SIG undefined FUN_141b3b3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141b3b3c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong *param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined *local_160;
  longlong *local_158;
  longlong local_150;
  undefined4 local_148;
  longlong local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((1.0 < *(float *)(param_4 + 0x3cc) || *(float *)(param_4 + 0x3cc) == 1.0) ||
     (*(int *)(*(longlong *)(param_1 + 8) + 0x1900) < 1)) {
    uVar6 = 0;
  }
  else {
    cVar7 = '\0';
    local_e8 = 0;
    local_e0 = 0;
    local_d4 = 0;
    local_cc = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_dc = 0x26;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_14049afe0(param_2,&local_128);
    uStack_f0 = FUN_140985530();
    local_f8 = FUN_141abcfb0();
    local_e8 = FUN_1409853f0();
    bVar1 = false;
    local_dc = local_dc & 0xffffffff00000000;
    local_60 = '\0';
    cVar2 = FUN_141dd7f70();
    if (cVar2 != '\0') {
      lVar4 = FSceneRenderTargets::Get(param_2);
      plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x420) + 0x10);
      if (plVar5 != &local_68) {
        local_68 = *plVar5;
        if (local_68 != 0) {
          LOCK();
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          UNLOCK();
        }
        cVar7 = '\x01';
        bVar1 = true;
        local_60 = '\x01';
      }
    }
    local_130 = 0;
    if (bVar1) {
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
        cVar7 = local_60;
      }
      local_130 = 1;
      local_138 = local_68;
    }
    uVar3 = FDeferredShadingSceneRenderer::ShouldRenderVolumetricFog(param_1);
    local_158 = &local_138;
    local_168 = CONCAT31(local_168._1_3_,uVar3);
    local_160 = (undefined *)param_3;
    FUN_141b22a30(param_2,&local_128,*(undefined8 *)(param_1 + 8),param_4);
    local_150 = *param_5;
    local_148 = 8;
    local_158 = (longlong *)CONCAT44(local_158._4_4_,2);
    local_160 = &DAT_144de0228;
    local_168 = 2;
    FUN_141abae60(param_2,0,0,param_5[1] - local_150 >> 3);
    if (cVar7 != '\0') {
      local_60 = 0;
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_68);
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 141b3b5e0 FUN_141b3b5e0 body=327 status=ok
// SIG undefined FUN_141b3b5e0(void)

void FUN_141b3b5e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  
  if ((((uint)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x2e) & 1) != 0) &&
     (*(int *)(DAT_146a18360 + 4) == 1)) {
    iVar1 = *(int *)(param_1 + 200);
    if (0 < iVar1) {
      uVar7 = 0;
      piVar3 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x1df0);
      uVar4 = uVar7;
      while (*piVar3 == 0) {
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 0xc34;
        if ((longlong)iVar1 <= (longlong)uVar4) {
          return;
        }
      }
      bVar8 = 0;
      uVar4 = uVar7;
      if (0 < iVar1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0xc0) + uVar4;
          if (*(longlong *)(lVar5 + 0x1ab0) != 0) {
            FUN_141b74950(*(longlong *)(lVar5 + 0x1ab0) + 0x17a8,param_2,
                          *(undefined8 *)(lVar5 + 0x30));
          }
          FUN_141b570f0(param_2,lVar5,6);
          bVar2 = FUN_141b241c0(param_2,lVar5,param_1,0,lVar5 + 0x1de8);
          bVar8 = bVar8 | bVar2;
          FUN_141b63bb0(param_2,lVar5,6);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar4 = uVar4 + 0x30d0;
        } while ((int)uVar6 < *(int *)(param_1 + 200));
        if (bVar8 != 0) {
          FUN_141d71a00(param_1,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 141b3b730 FUN_141b3b730 body=1674 status=ok
// SIG undefined FUN_141b3b730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141b3b730(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       undefined1 param_5)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  longlong local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  int local_198;
  int local_194;
  int local_190 [2];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar14 = (longlong *)0x0;
  local_198 = 0;
  uVar7 = FUN_141b2a100();
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    local_188 = 0;
    uStack_180 = 0;
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x5c8) + 0x30);
    cVar5 = (**(code **)(*plVar12 + 0xd8))(plVar12,&local_188,param_3,param_3 + 0x1aa0);
    if (cVar5 == '\0') {
      local_188 = *(undefined8 *)(param_3 + 0x1aa0);
      uStack_180 = *(undefined8 *)(param_3 + 0x1aa8);
    }
    if ((DAT_146ab62f3 != '\0') && (*(int *)(DAT_146a9d500 + 4) != 0)) {
      FUN_141b2f230(&DAT_146a17160);
    }
    local_160 = 0x21;
    lVar8 = FSceneRenderTargets::Get(param_2);
    local_1e0 = CONCAT71(local_1e0._1_7_,1);
    local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,0x21);
    FUN_141ad74f0(param_2,*(undefined8 *)(param_4 + 8),
                  *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 8),0);
    local_d8 = 0;
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d0 = 0;
    local_cc = 0x26;
    local_c4 = 0;
    local_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    FUN_14049afe0(param_2,&local_118);
    uVar4 = uStack_180._4_4_;
    local_198 = (int)uStack_180;
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_190[0] = local_188._4_4_;
    local_194 = (int)local_188;
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59420;
    *(int *)(puVar11 + 2) = local_194;
    *(int *)((longlong)puVar11 + 0x14) = local_190[0];
    *(int *)((longlong)puVar11 + 0x1c) = local_198;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined4 *)(puVar11 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
    uStack_e0 = FUN_140985530();
    local_d8 = FUN_1409853f0();
    FUN_141dac6c0(param_1,&local_118,param_5,0);
    lVar8 = *(longlong *)(param_3 + 0x3090);
    local_148 = &DAT_146a51f90;
    local_140 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar8 + 0x38,&local_198,&local_148);
    plVar12 = plVar14;
    if (local_198 != -1) {
      plVar12 = (longlong *)((longlong)local_198 * 0x20 + *(longlong *)(lVar8 + 0x38));
    }
    plVar13 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      plVar13 = plVar14;
    }
    lVar8 = *plVar13;
    local_118 = DAT_1464c2720;
    if (lVar8 == 0) {
      plVar12 = (longlong *)0x1;
      local_158 = 0;
      plStack_110 = plVar14;
    }
    else {
      lVar10 = *(longlong *)(lVar8 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      plStack_110 = *(longlong **)(lVar10 + 0x38);
      plVar12 = plVar14;
    }
    if (plVar12 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    bVar3 = false;
    bVar2 = false;
    lVar10 = *(longlong *)(param_3 + 0x3090);
    local_cc = local_cc & 0xffffffff00000000;
    local_d0 = CONCAT31(local_d0._1_3_,(char)(*(uint *)(param_1 + 0x560) >> 4)) & 0xffffff01;
    if (DAT_146a15384 == 0) {
      local_120 = 0;
      local_128 = &DAT_146a1a3f0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x38,&local_194,&local_128);
      plVar12 = plVar14;
      if (local_194 != -1) {
        plVar12 = (longlong *)((longlong)local_194 * 0x20 + *(longlong *)(lVar10 + 0x38));
      }
      plVar13 = plVar12 + 2;
      if (plVar12 == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      lVar10 = *plVar13;
      if (lVar10 == 0) {
        bVar3 = true;
        local_150 = 0;
        local_f8 = plVar14;
      }
      else {
        local_168 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(local_168 + 0x28) == '\0') {
          FUN_1419f3850(local_168);
        }
        local_f8 = *(longlong **)(local_168 + 0x40);
      }
      if (bVar3) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
      }
      FUN_141ed6ac0(param_2,&local_118,2,1);
      FPostProcessVS::SetParameters(lVar8,param_2,*(undefined8 *)(param_3 + 0x20));
      local_1e8 = &local_188;
      local_1e0 = param_1 + 0x5c0;
      FUN_141b40fa0(lVar10,param_2,param_3);
    }
    else {
      local_130 = 0;
      local_138 = &DAT_146a1a540;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar10 + 0x38,local_190,&local_138);
      plVar12 = plVar14;
      if (local_190[0] != -1) {
        plVar12 = (longlong *)((longlong)local_190[0] * 0x20 + *(longlong *)(lVar10 + 0x38));
      }
      plVar13 = plVar12 + 2;
      if (plVar12 == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      lVar10 = *plVar13;
      if (lVar10 == 0) {
        local_168 = 0;
        bVar2 = true;
        local_f8 = plVar14;
      }
      else {
        local_178 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(local_178 + 0x28) == '\0') {
          FUN_1419f3850(local_178);
        }
        local_f8 = *(longlong **)(local_178 + 0x40);
      }
      if (bVar2) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
      }
      FUN_141ed6ac0(param_2,&local_118,2,1);
      FPostProcessVS::SetParameters(lVar8,param_2,*(undefined8 *)(param_3 + 0x20));
      local_1e8 = &local_188;
      local_1e0 = param_1 + 0x5c0;
      FUN_141b40fa0(lVar10,param_2,param_3);
    }
    if ((*(byte *)(param_1 + 0x560) & 0x10) != 0) {
      SetDepthBoundsTest(param_2,*(float *)(param_1 + 0x3c0) - *(float *)(param_1 + 0x3c8));
    }
    iVar15 = 2 - (uint)(DAT_146a15384 != 0);
    lVar10 = FSceneRenderTargets::Get();
    iVar16 = uStack_180._4_4_ - local_188._4_4_;
    uVar7 = *(ulonglong *)(lVar10 + 0x378);
    local_170 = (undefined4)
                ((longlong)((ulonglong)(uint)((int)uVar7 >> 0x1f) << 0x20 | uVar7 & 0xffffffff) /
                (longlong)iVar15);
    uStack_16c = (undefined4)
                 ((longlong)((ulonglong)(uint)((longlong)uVar7 >> 0x3f) << 0x20 | uVar7 >> 0x20) /
                 (longlong)iVar15);
    local_178 = CONCAT44(iVar16,(int)uStack_180 - (int)local_188);
    iVar15 = 2 - (uint)(DAT_146a15384 != 0);
    local_1a0 = 1;
    local_1a8 = 0;
    local_1c8 = (float)(iVar16 / iVar15);
    local_1d0 = (float)(((int)uStack_180 - (int)local_188) / iVar15);
    local_1d8 = (float)(local_188._4_4_ / iVar15);
    local_1b8 = CONCAT44(uStack_16c,local_170);
    local_1c0 = local_178;
    local_1e0 = CONCAT44(local_1e0._4_4_,(float)((int)local_188 / iVar15));
    local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,(float)iVar16);
    local_1b0 = lVar8;
    uVar7 = DrawRectangle(param_2,(longlong)(int)local_188 % (longlong)iVar15 & 0xffffffff);
    plVar12 = *(longlong **)(param_1 + 0x5c0);
    *(longlong *)(param_1 + 0x5c0) = 0;
    if (plVar12 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar12 + 0x30))();
    }
    puVar9 = *(undefined8 **)(param_1 + 0x5b8);
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar9 + 1);
      uVar6 = *puVar1;
      uVar7 = (ulonglong)uVar6;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar6 == 1) {
        if ((*(char *)(puVar9 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          uVar7 = 0;
          LOCK();
          uVar6 = *(uint *)((longlong)puVar9 + 0xc);
          if (uVar6 == 0) {
            *(uint *)((longlong)puVar9 + 0xc) = 1;
          }
          else {
            uVar7 = (ulonglong)uVar6;
          }
          UNLOCK();
          if (uVar6 == 0) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              plVar14 = (longlong *)
                        ((&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18);
            }
            plVar14[1] = (longlong)puVar9;
            uVar7 = FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          uVar7 = (**(code **)*puVar9)(puVar9,1);
        }
      }
    }
  }
  return uVar7;
}



// FUNCTION 141b3bdc0 FUN_141b3bdc0 body=542 status=ok
// SIG undefined FUN_141b3bdc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b3bdc0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined *local_170;
  undefined8 *local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong local_130 [3];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_cc = 0x26;
  local_d8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  FUN_14049afe0(param_2,&local_118);
  local_140 = 0;
  local_130[0] = 0;
  local_130[1] = 0;
  FScopedGPUStatEvent::Begin(local_130,param_2,&DAT_146a177a8,&local_140);
  uVar1 = *(undefined4 *)(param_3 + 0x1aac);
  uVar2 = *(undefined4 *)(param_3 + 0x1aa8);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(param_3 + 0x1aa4));
  local_148 = *(undefined4 *)(param_3 + 0x1aa0);
  puVar4 = puVar5 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar5 + 2) = local_148;
  *(undefined4 *)((longlong)puVar5 + 0x14) = (undefined4)local_140;
  *(undefined4 *)(puVar5 + 3) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0x3f800000;
  uStack_e0 = FUN_140985530();
  local_e8 = FUN_141abcfb0();
  local_d8 = FUN_1409853f0();
  local_cc = local_cc & 0xffffffff00000000;
  local_138 = 0;
  uVar3 = FDeferredShadingSceneRenderer::ShouldRenderVolumetricFog(param_1);
  local_168 = &local_140;
  local_178 = CONCAT31(local_178._1_3_,uVar3);
  local_170 = (undefined *)param_4;
  FUN_141b23150(param_2,&local_118,*(undefined8 *)(param_1 + 8),param_3);
  local_158 = 8;
  local_160 = &DAT_1464c1c28;
  local_168 = (undefined8 *)CONCAT44(local_168._4_4_,2);
  local_170 = &DAT_144de0218;
  local_178 = 2;
  FUN_141abae60(param_2,0,0,4);
  if (local_130[0] != 0) {
    FScopedGPUStatEvent::End(local_130);
  }
  return;
}



// FUNCTION 141b3bfe0 ResizeGrow body=69 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TMemStackAllocator<0>_>::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  iVar2 = 4;
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_140848a70(param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 141b3c030 FUN_141b3c030 body=26 status=ok
// SIG undefined FUN_141b3c030(void)

void FUN_141b3c030(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140848a70(param_1,*(undefined4 *)(param_1 + 8),param_2,4);
    return;
  }
  return;
}



// FUNCTION 141b3c050 FUN_141b3c050 body=499 status=ok
// SIG undefined FUN_141b3c050(void)

void FUN_141b3c050(ushort *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float local_res8;
  float local_resc;
  
  if (*param_5 == 0) {
    puVar4 = (undefined8 *)(DAT_146ac3d68 + 0x30);
  }
  else {
    puVar4 = (undefined8 *)(*param_5 + 0x10);
  }
  uVar2 = *puVar4;
  uVar5 = FUN_141a156e0();
  uVar3 = *param_3;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar3;
    puVar6[4] = uVar2;
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar5;
  }
  FUN_141b08510(&param_5);
  local_res8 = ((float)((*(int *)(param_4 + 0x1aa8) - *(int *)(param_4 + 0x1aa0)) / 2) - 0.51) /
               (float)(int)param_5;
  local_resc = ((float)((*(int *)(param_4 + 0x1aac) - *(int *)(param_4 + 0x1aa4)) / 2) - 0.51) /
               (float)param_5._4_4_;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*param_3,param_1 + 4,&local_res8,0);
  return;
}



// FUNCTION 141b3c250 FUN_141b3c250 body=936 status=ok
// SIG undefined FUN_141b3c250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b3c250(ushort *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float local_res8 [2];
  float local_res18;
  float local_res1c;
  undefined8 local_res20;
  float local_78;
  float local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  local_res20 = param_4;
  local_60 = FUN_141a156e0();
  uVar3 = *param_3;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    puVar5[4] = local_60;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
  }
  uVar2 = *(undefined8 *)(param_6 + 8);
  param_6 = FUN_141a156e0();
  uVar3 = *param_3;
  if (param_1[5] != 0) {
    uVar1 = param_1[4];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = uVar3;
    puVar5[4] = uVar2;
  }
  uVar2 = param_6;
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  GetJitterOffset(&local_78,*(undefined4 *)(*(longlong *)(local_res20 + 0x1ab0) + 0x4dc));
  FUN_141b08510(&local_70);
  local_res18 = 1.0 / (float)local_70;
  local_res1c = 1.0 / (float)local_6c;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*param_3,param_1 + 8,&local_res18,0);
  local_res20 = CONCAT44(local_74 * local_res1c,local_78 * local_res18);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*param_3,param_1 + 0xb,&local_res20,0);
  GetBufferSizeForConeTracing(&local_68);
  local_58 = (float)local_68;
  local_54 = (float)local_64;
  local_50 = 1.0 / local_58;
  local_4c = 1.0 / local_54;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*param_3,param_1 + 0xe,&local_58,0);
  param_5._0_4_ = (float)DAT_1464c19f4;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x11,&param_5,0);
  fVar6 = DAT_1464c17ac;
  if (65000.0 <= DAT_1464c17ac) {
    fVar6 = 65000.0;
  }
  local_res8[0] = 1.0 / (fVar6 * (1.0 - _DAT_1464c1a1c));
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x14,local_res8,0);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*param_3,param_1 + 0x17,&local_78,0);
  return;
}



// FUNCTION 141b3c600 FUN_141b3c600 body=2752 status=ok
// SIG undefined FUN_141b3c600(void)

void FUN_141b3c600(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x308) + 8);
  puVar6 = puVar8 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *puVar8 = uVar2;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar8;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  uVar4 = **(undefined8 **)(param_3 + 0x310);
  if (*(short *)(param_1 + 0xf2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e40;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_3 + 0x338) + 0x10);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0xf6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xfa) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf8);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x1d8);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0xfe) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xfc);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x102) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x100);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x1e0);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0x106) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x104);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x10a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x108);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x1e8);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0x10e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10c);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x112) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x110);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x1f0);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0x116) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x114);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x11a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x118);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x1f8);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0x11e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x11c);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x122) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x120);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + 0x10);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0x126) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x124);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x12a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x128);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x248);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0x12e) != 0) {
    uVar1 = *(ushort *)(param_1 + 300);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x132) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x130);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x250);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0x136) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x134);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x13a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x138);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  return;
}



// FUNCTION 141b3d0c0 FUN_141b3d0c0 body=876 status=ok
// SIG undefined FUN_141b3d0c0(void)

void FUN_141b3d0c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5,int param_6,int param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar2 = *param_4;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar7 = uVar2;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f59470;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = *(undefined8 *)((longlong)param_7 * 8 + *param_5);
  puVar4 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar7 = uVar5;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = uVar2;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  uVar5 = *(undefined8 *)((longlong)param_7 * 8 + *param_5);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = *(undefined8 *)(param_4[6] + (longlong)param_6 * 8);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = FUN_141b33b80();
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141b3d430 FUN_141b3d430 body=1052 status=ok
// SIG undefined FUN_141b3d430(void)

void FUN_141b3d430(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6,int param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *param_5;
  puVar4 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar7 = uVar2;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[3] = puVar7;
  *puVar6 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = **(undefined8 **)(param_3 + 0x13c0);
  puVar4 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar7 = uVar5;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = uVar2;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  uVar5 = **(undefined8 **)(param_3 + 0x13c0);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = *(undefined8 *)param_5[6];
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_4 + 0x308) + 0x38) + (longlong)param_7 * 8);
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = FUN_141b33b80();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0xd0,&param_6,0);
  return;
}



// FUNCTION 141b3d850 FUN_141b3d850 body=896 status=ok
// SIG undefined FUN_141b3d850(void)

void FUN_141b3d850(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x13b8) + 8);
  puVar4 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar7 = uVar2;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[3] = puVar7;
  *puVar6 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = **(undefined8 **)(param_4 + 0x328);
  puVar4 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar7 = uVar5;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = uVar2;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  uVar5 = **(undefined8 **)(param_4 + 0x328);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e40;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = **(undefined8 **)(*(longlong *)(param_3 + 0x13b8) + 0x38);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = FUN_141b33b80();
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0xcc,&stack0x00000028,0);
  return;
}



// FUNCTION 141b3dbd0 FUN_141b3dbd0 body=267 status=ok
// SIG undefined FUN_141b3dbd0(void)

void FUN_141b3dbd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  
  lVar1 = *param_1;
  local_10[0] = param_6;
  if ((DAT_146ab62cc < 0x1e) && ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  lVar2 = *(longlong *)(lVar1 + 0x48);
  local_18[0] = param_4;
  if (bVar3) {
    local_18[0] = 0;
  }
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar2 + 0x38),lVar1 + 0x104,local_18,0);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  local_18[0] = param_5;
  if (bVar3) {
    local_18[0] = 0;
  }
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar2 + 0x38),lVar1 + 0xfe,local_18,0);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar2 + 0x38),lVar1 + 0xf8,local_10,0);
  return;
}



// FUNCTION 141b3dce0 FUN_141b3dce0 body=487 status=ok
// SIG undefined FUN_141b3dce0(void)

void FUN_141b3dce0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar4 = param_1[9];
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  lVar4 = FSceneRenderTargets::Get(param_2);
  FUN_141d84bb0(param_1,param_2,uVar2,param_3,param_4,param_5,param_6,param_7,0);
  (**(code **)(*param_1 + 0x30))(param_1,param_2,param_4);
  uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + 0x308) + 0x10);
  uVar5 = FUN_141b33cc0();
  if (*(short *)((longlong)param_1 + 0x152) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x2a);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)((longlong)param_1 + 0x156) != 0) {
    uVar1 = *(ushort *)((longlong)param_1 + 0x154);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x2b,*(longlong *)(param_4 + 0x30) + 0x200);
  return;
}



// FUNCTION 141b3ded0 FUN_141b3ded0 body=479 status=ok
// SIG undefined FUN_141b3ded0(void)

void FUN_141b3ded0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,int param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  lVar4 = *(longlong *)(param_5 + 0x78);
  if (*(longlong *)(param_5 + 0x78) == 0) {
    lVar4 = param_5;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar4 = lVar4 + (longlong)param_6 * 0x78;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141d84f90(lVar1,param_2,*(undefined8 *)(lVar2 + 0x38),uVar3,param_3,param_4,lVar4,param_7,0);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 8);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    FUN_141d84710(lVar1,param_2,*(undefined8 *)(lVar2 + 0x48),uVar3,param_3,param_4,lVar4,param_7,0)
    ;
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    FUN_141d83e90(lVar1,param_2,*(undefined8 *)(lVar2 + 0x50),uVar3,param_3,param_4,lVar4,param_7,0)
    ;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    FUN_141d84bb0(lVar1,param_2,*(undefined8 *)(lVar2 + 0x40),uVar3,param_3,param_4,lVar4,param_7,0)
    ;
  }
  return;
}



// FUNCTION 141b3e0b0 FUN_141b3e0b0 body=2995 status=ok
// SIG undefined FUN_141b3e0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b3e0b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,longlong param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res20;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_19c;
  undefined8 local_198;
  float local_190 [2];
  undefined8 local_188;
  float local_178 [28];
  float *local_108;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar13 = *(longlong *)(param_1 + 0x48);
  local_res20 = param_4;
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  uVar2 = *(undefined8 *)(lVar13 + 0x60);
  local_198 = uVar2;
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  local_1b8 = CONCAT44(local_1b8._4_4_,0xf);
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_198,*(undefined4 *)(param_3 + 0x1a38));
  FUN_141b21bb0(param_1 + 0xd0,param_2,&local_198,&DAT_146a163f0);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xfe,param_2,uVar2,param_6);
  local_1b8 = param_5;
  FUN_141b21980(param_1 + 0x11c,param_2,&local_198,param_3);
  if ((*(short *)(param_1 + 0x15a) != 0) || (*(short *)(param_1 + 0x160) != 0)) {
    lVar13 = *(longlong *)(param_7 + 0xb0);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_1a8 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x138) != 0) {
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_198 = CONCAT44(local_198._4_4_,(uint)*(ushort *)(param_1 + 0x136));
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar8 + 3) = (undefined4)local_198;
      puVar8[2] = uVar2;
      puVar8[4] = lVar13;
    }
    if (*(short *)(param_1 + 0x148) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x146);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[4] = local_1a8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
    }
    lVar13 = *(longlong *)(param_7 + 0xb8);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_1a8 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x13c) != 0) {
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_198 = CONCAT44(local_198._4_4_,(uint)*(ushort *)(param_1 + 0x13a));
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar8 + 3) = (undefined4)local_198;
      puVar8[2] = uVar2;
      puVar8[4] = lVar13;
    }
    if (*(short *)(param_1 + 0x14c) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x14a);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[4] = local_1a8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
    }
    lVar13 = *(longlong *)(param_7 + 0xc0);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_1a8 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x140) != 0) {
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_198 = CONCAT44(local_198._4_4_,(uint)*(ushort *)(param_1 + 0x13e));
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar8 + 3) = (undefined4)local_198;
      puVar8[2] = uVar2;
      puVar8[4] = lVar13;
    }
    if (*(short *)(param_1 + 0x150) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x14e);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[4] = local_1a8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
    }
    lVar13 = *(longlong *)(param_7 + 200);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_1a8 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x144) != 0) {
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_198 = CONCAT44(local_198._4_4_,(uint)*(ushort *)(param_1 + 0x142));
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar8 + 3) = (undefined4)local_198;
      puVar8[2] = uVar2;
      puVar8[4] = lVar13;
    }
    if (*(short *)(param_1 + 0x154) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x152);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144dcb3b8;
      puVar8[4] = local_1a8;
      puVar8[2] = uVar2;
      *(uint *)(puVar8 + 3) = (uint)uVar1;
    }
    local_1b0 = 0;
    local_1b8._0_4_ = 4;
    FUN_141aace20(param_2,uVar2,param_1 + 0x156,param_7 + 0x30);
    local_1b0 = 0;
    local_1b8._0_4_ = 4;
    FUN_141aace20(param_2,uVar2,param_1 + 0x15c,param_7 + 0x70);
    local_1b8._0_4_ = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x162,param_7 + 0xd0);
    local_1b8._0_4_ = 0;
    local_198 = CONCAT44(local_198._4_4_,1.0 / *(float *)(param_7 + 0xd0));
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x168,&local_198);
    local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x16e,param_7 + 0xd4);
  }
  uVar6 = 0;
  local_108 = (float *)0x0;
  local_100 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_178);
  uStack_19c = 0x3f800000;
  pfVar10 = local_178;
  if (local_108 != (float *)0x0) {
    pfVar10 = local_108;
  }
  local_f8 = *pfVar10;
  fStack_f4 = pfVar10[1];
  fStack_f0 = pfVar10[2];
  uStack_ec = 0x3f800000;
  local_e8 = pfVar10[3];
  fStack_e4 = pfVar10[4];
  fStack_e0 = pfVar10[5];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar10[6];
  fStack_d4 = pfVar10[7];
  fStack_d0 = pfVar10[8];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar10[9];
  fStack_c4 = pfVar10[10];
  fStack_c0 = pfVar10[0xb];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar10[0xc];
  fStack_b4 = pfVar10[0xd];
  fStack_b0 = pfVar10[0xe];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar10[0xf];
  fStack_a4 = pfVar10[0x10];
  fStack_a0 = pfVar10[0x11];
  uStack_9c = 0x3f800000;
  local_98 = pfVar10[0x12];
  fStack_94 = pfVar10[0x13];
  fStack_90 = pfVar10[0x14];
  uStack_8c = 0x3f800000;
  local_88 = pfVar10[0x15];
  fStack_84 = pfVar10[0x16];
  fStack_80 = pfVar10[0x17];
  uStack_7c = 0x3f800000;
  local_78 = pfVar10[0x18];
  fStack_74 = pfVar10[0x19];
  fStack_70 = pfVar10[0x1a];
  uStack_6c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar6;
    do {
      iVar7 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar6 * 8) == &DAT_146a11040) {
        if (iVar7 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b3e916;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar7 + 1);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar12 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b3e916:
  FUN_141b24000(param_2,uVar2,puVar12,&local_f8);
  cVar4 = FUN_141b196c0();
  if ((cVar4 != '\0') &&
     (uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d0) + 0x68),
     *(short *)(param_1 + 0x176) != 0)) {
    uVar1 = *(ushort *)(param_1 + 0x174);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144dcb360;
    puVar8[2] = uVar2;
    puVar8[4] = uVar3;
  }
  local_1b8 = local_1b8 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar2,param_1 + 0x178,&local_res20);
  fVar14 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_198 = CONCAT44(local_198._4_4_,fVar14);
  local_1b8 = local_1b8 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0x17e,&local_198);
  local_1b8 = local_1b8 & 0xffffffff00000000;
  pfVar10 = local_178;
  if (local_108 != (float *)0x0) {
    pfVar10 = local_108;
  }
  fVar16 = *pfVar10 + pfVar10[3] + pfVar10[6] + pfVar10[9] + pfVar10[0xc] + pfVar10[0xf] +
           pfVar10[0x12] + pfVar10[0x15] + pfVar10[0x18];
  fVar14 = pfVar10[1] + pfVar10[4] + pfVar10[7] + pfVar10[10] + pfVar10[0xd] + pfVar10[0x10] +
           pfVar10[0x13] + pfVar10[0x16] + pfVar10[0x19];
  fVar15 = pfVar10[2] + pfVar10[5] + pfVar10[8] + pfVar10[0xb] + pfVar10[0xe] + pfVar10[0x11] +
           pfVar10[0x14] + pfVar10[0x17] + pfVar10[0x1a];
  local_190[0] = 1.0 / SQRT((fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15) * 0.012345679);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0x184,local_190);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8);
  puVar5 = puVar8 + 1;
  local_188 = *(undefined8 *)(lVar13 + 0x40);
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar8 = local_188;
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar11 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar11 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar11 + 2) = 1;
  puVar11[3] = puVar8;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 3;
  puVar11[5] = 0;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x18a,param_2,uVar2,lVar13 + 0x38);
  if (local_108 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b3ec70 FUN_141b3ec70 body=2944 status=ok
// SIG undefined FUN_141b3ec70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b3ec70(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,longlong param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  float local_170 [2];
  float local_168 [28];
  float *local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar10 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  uVar2 = *(undefined8 *)(lVar10 + 0x60);
  local_178 = uVar2;
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  local_198 = CONCAT44(local_198._4_4_,0xf);
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_178,*(undefined4 *)(param_3 + 0x1a38));
  FUN_141b21bb0(param_1 + 0xd0,param_2,&local_178,&DAT_146a163f0);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xfe,param_2,uVar2,param_5);
  local_198 = param_4;
  FUN_141b21980(param_1 + 0x11c,param_2,&local_178,param_3);
  if ((*(short *)(param_1 + 0x15a) != 0) || (*(short *)(param_1 + 0x160) != 0)) {
    lVar10 = *(longlong *)(param_6 + 0xb0);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x138) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x136));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x148) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x146);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    lVar10 = *(longlong *)(param_6 + 0xb8);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x13c) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x13a));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x14c) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x14a);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    lVar10 = *(longlong *)(param_6 + 0xc0);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x140) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x13e));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x150) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x14e);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    lVar10 = *(longlong *)(param_6 + 200);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x144) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x142));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x154) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x152);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    local_190 = 0;
    local_198._0_4_ = 4;
    FUN_141aace20(param_2,uVar2,param_1 + 0x156,param_6 + 0x30);
    local_190 = 0;
    local_198._0_4_ = 4;
    FUN_141aace20(param_2,uVar2,param_1 + 0x15c,param_6 + 0x70);
    local_198._0_4_ = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x162,param_6 + 0xd0);
    local_198._0_4_ = 0;
    local_178 = CONCAT44(local_178._4_4_,1.0 / *(float *)(param_6 + 0xd0));
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x168,&local_178);
    local_198 = (ulonglong)local_198._4_4_ << 0x20;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x16e,param_6 + 0xd4);
  }
  uVar4 = 0;
  local_f8 = (float *)0x0;
  local_f0 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_168);
  pfVar8 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar8 = local_f8;
  }
  local_e8 = *pfVar8;
  fStack_e4 = pfVar8[1];
  fStack_e0 = pfVar8[2];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar8[3];
  fStack_d4 = pfVar8[4];
  fStack_d0 = pfVar8[5];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar8[6];
  fStack_c4 = pfVar8[7];
  fStack_c0 = pfVar8[8];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar8[9];
  fStack_b4 = pfVar8[10];
  fStack_b0 = pfVar8[0xb];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar8[0xc];
  fStack_a4 = pfVar8[0xd];
  fStack_a0 = pfVar8[0xe];
  uStack_9c = 0x3f800000;
  local_98 = pfVar8[0xf];
  fStack_94 = pfVar8[0x10];
  fStack_90 = pfVar8[0x11];
  uStack_8c = 0x3f800000;
  local_88 = pfVar8[0x12];
  fStack_84 = pfVar8[0x13];
  fStack_80 = pfVar8[0x14];
  uStack_7c = 0x3f800000;
  local_78 = pfVar8[0x15];
  fStack_74 = pfVar8[0x16];
  fStack_70 = pfVar8[0x17];
  uStack_6c = 0x3f800000;
  local_68 = pfVar8[0x18];
  fStack_64 = pfVar8[0x19];
  fStack_60 = pfVar8[0x1a];
  local_188 = *(undefined8 *)(pfVar8 + 0x18);
  fStack_180 = pfVar8[0x1a];
  uStack_17c = 0x3f800000;
  uStack_5c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar5 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a11040) {
        if (iVar5 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b3f4e2;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar9 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b3f4e2:
  FUN_141b24000(param_2,uVar2,puVar9,&local_e8);
  lVar10 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d0);
  local_188 = *(undefined8 *)(lVar10 + 0x68);
  if (*(short *)(param_1 + 0x176) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x174);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = local_188;
    puVar6[2] = uVar2;
  }
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar2,param_1 + 0x178,lVar10 + 0x120);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x17e,param_2,uVar2,lVar10 + 0x80);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x186,param_2,uVar2,lVar10 + 0xa8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x18e,param_2,uVar2,lVar10 + 0xd0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x196,param_2,uVar2,lVar10 + 0xf8);
  fVar11 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_178 = CONCAT44(local_178._4_4_,fVar11);
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0x19e,&local_178);
  local_198 = local_198 & 0xffffffff00000000;
  pfVar8 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar8 = local_f8;
  }
  fVar13 = *pfVar8 + pfVar8[3] + pfVar8[6] + pfVar8[9] + pfVar8[0xc] + pfVar8[0xf] + pfVar8[0x12] +
           pfVar8[0x15] + pfVar8[0x18];
  fVar11 = pfVar8[1] + pfVar8[4] + pfVar8[7] + pfVar8[10] + pfVar8[0xd] + pfVar8[0x10] +
           pfVar8[0x13] + pfVar8[0x16] + pfVar8[0x19];
  fVar12 = pfVar8[5] + pfVar8[2] + pfVar8[8] + pfVar8[0xb] + pfVar8[0xe] + pfVar8[0x11] +
           pfVar8[0x14] + pfVar8[0x17] + pfVar8[0x1a];
  local_170[0] = 1.0 / SQRT((fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12) * 0.012345679);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0x1a4,local_170);
  lVar10 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1aa,param_2,uVar2,lVar10 + 0x38);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1b2,param_2,uVar2,lVar10 + 0x68);
  if (local_f8 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b3f7f0 FUN_141b3f7f0 body=1574 status=ok
// SIG undefined FUN_141b3f7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b3f7f0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined8 local_188;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178 [4];
  float local_168 [28];
  float *local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_188 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  local_198 = CONCAT44(local_198._4_4_,0xf);
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_188,*(undefined4 *)(param_3 + 0x1a38));
  FUN_141b21bb0(param_1 + 0xd0,param_2,&local_188,&DAT_146a163f0);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xfe,param_2,uVar3,param_5);
  local_198 = param_4;
  FUN_141b21980(param_1 + 0x11c,param_2,&local_188,param_3);
  uVar4 = 0;
  local_f8 = (float *)0x0;
  local_f0 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_168);
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  local_e8 = *pfVar9;
  fStack_e4 = pfVar9[1];
  fStack_e0 = pfVar9[2];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar9[3];
  fStack_d4 = pfVar9[4];
  fStack_d0 = pfVar9[5];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar9[6];
  fStack_c4 = pfVar9[7];
  fStack_c0 = pfVar9[8];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar9[9];
  fStack_b4 = pfVar9[10];
  fStack_b0 = pfVar9[0xb];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar9[0xc];
  fStack_a4 = pfVar9[0xd];
  fStack_a0 = pfVar9[0xe];
  uStack_9c = 0x3f800000;
  local_98 = pfVar9[0xf];
  fStack_94 = pfVar9[0x10];
  fStack_90 = pfVar9[0x11];
  uStack_8c = 0x3f800000;
  local_88 = pfVar9[0x12];
  fStack_84 = pfVar9[0x13];
  fStack_80 = pfVar9[0x14];
  uStack_7c = 0x3f800000;
  local_78 = pfVar9[0x15];
  fStack_74 = pfVar9[0x16];
  fStack_70 = pfVar9[0x17];
  uStack_6c = 0x3f800000;
  local_68 = pfVar9[0x18];
  fStack_64 = pfVar9[0x19];
  fStack_60 = pfVar9[0x1a];
  local_188 = *(undefined8 *)(pfVar9 + 0x18);
  fStack_180 = pfVar9[0x1a];
  uStack_17c = 0x3f800000;
  uStack_5c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a11040) {
        if (iVar6 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b3fb03;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar10 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b3fb03:
  FUN_141b24000(param_2,uVar3,puVar10,&local_e8);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d0);
  local_188 = *(undefined8 *)(lVar2 + 0x68);
  if (*(short *)(param_1 + 0x176) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x174);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb360;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = local_188;
    puVar8[2] = uVar3;
  }
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x178,lVar2 + 0x120);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x17e,param_2,uVar3,lVar2 + 0x80);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x186,param_2,uVar3,lVar2 + 0xa8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x18e,param_2,uVar3,lVar2 + 0xd0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x196,param_2,uVar3,lVar2 + 0xf8);
  fVar11 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_188 = CONCAT44(local_188._4_4_,fVar11);
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x19e,&local_188);
  local_198 = local_198 & 0xffffffff00000000;
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  fVar11 = pfVar9[1] + pfVar9[4] + pfVar9[7] + pfVar9[10] + pfVar9[0xd] + pfVar9[0x10] +
           pfVar9[0x13] + pfVar9[0x16] + pfVar9[0x19];
  fVar13 = pfVar9[3] + *pfVar9 + pfVar9[6] + pfVar9[9] + pfVar9[0xc] + pfVar9[0xf] + pfVar9[0x12] +
           pfVar9[0x15] + pfVar9[0x18];
  fVar12 = pfVar9[5] + pfVar9[2] + pfVar9[8] + pfVar9[0xb] + pfVar9[0xe] + pfVar9[0x11] +
           pfVar9[0x14] + pfVar9[0x17] + pfVar9[0x1a];
  local_178[0] = 1.0 / SQRT((fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12) * 0.012345679);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x1a4,local_178);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1aa,param_2,uVar3,lVar2 + 0x38);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1b2,param_2,uVar3,lVar2 + 0x68);
  if (local_f8 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b3fe20 FUN_141b3fe20 body=2922 status=ok
// SIG undefined FUN_141b3fe20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b3fe20(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,longlong param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  float local_170 [2];
  float local_168 [28];
  float *local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar10 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  uVar2 = *(undefined8 *)(lVar10 + 0x60);
  local_178 = uVar2;
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  local_198 = CONCAT44(local_198._4_4_,0xf);
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_178,*(undefined4 *)(param_3 + 0x1a38));
  FUN_141b21bb0(param_1 + 0xd0,param_2,&local_178,&DAT_146a163f0);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xfe,param_2,uVar2,param_5);
  local_198 = param_4;
  FUN_141b21980(param_1 + 0x11c,param_2,&local_178,param_3);
  if ((*(short *)(param_1 + 0x15a) != 0) || (*(short *)(param_1 + 0x160) != 0)) {
    lVar10 = *(longlong *)(param_6 + 0xb0);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x138) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x136));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x148) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x146);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    lVar10 = *(longlong *)(param_6 + 0xb8);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x13c) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x13a));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x14c) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x14a);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    lVar10 = *(longlong *)(param_6 + 0xc0);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x140) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x13e));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x150) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x14e);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    lVar10 = *(longlong *)(param_6 + 200);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    local_188 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x144) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_178 = CONCAT44(local_178._4_4_,(uint)*(ushort *)(param_1 + 0x142));
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_178;
      puVar6[2] = uVar2;
      puVar6[4] = lVar10;
    }
    if (*(short *)(param_1 + 0x154) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x152);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[4] = local_188;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
    }
    local_190 = 0;
    local_198._0_4_ = 4;
    FUN_141aace20(param_2,uVar2,param_1 + 0x156,param_6 + 0x30);
    local_190 = 0;
    local_198._0_4_ = 4;
    FUN_141aace20(param_2,uVar2,param_1 + 0x15c,param_6 + 0x70);
    local_198._0_4_ = 0;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x162,param_6 + 0xd0);
    local_198._0_4_ = 0;
    local_178 = CONCAT44(local_178._4_4_,1.0 / *(float *)(param_6 + 0xd0));
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x168,&local_178);
    local_198 = (ulonglong)local_198._4_4_ << 0x20;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x16e,param_6 + 0xd4);
  }
  uVar4 = 0;
  local_f8 = (float *)0x0;
  local_f0 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_168);
  pfVar8 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar8 = local_f8;
  }
  local_e8 = *pfVar8;
  fStack_e4 = pfVar8[1];
  fStack_e0 = pfVar8[2];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar8[3];
  fStack_d4 = pfVar8[4];
  fStack_d0 = pfVar8[5];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar8[6];
  fStack_c4 = pfVar8[7];
  fStack_c0 = pfVar8[8];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar8[9];
  fStack_b4 = pfVar8[10];
  fStack_b0 = pfVar8[0xb];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar8[0xc];
  fStack_a4 = pfVar8[0xd];
  fStack_a0 = pfVar8[0xe];
  uStack_9c = 0x3f800000;
  local_98 = pfVar8[0xf];
  fStack_94 = pfVar8[0x10];
  fStack_90 = pfVar8[0x11];
  uStack_8c = 0x3f800000;
  local_88 = pfVar8[0x12];
  fStack_84 = pfVar8[0x13];
  fStack_80 = pfVar8[0x14];
  uStack_7c = 0x3f800000;
  local_78 = pfVar8[0x15];
  fStack_74 = pfVar8[0x16];
  fStack_70 = pfVar8[0x17];
  uStack_6c = 0x3f800000;
  local_68 = pfVar8[0x18];
  fStack_64 = pfVar8[0x19];
  fStack_60 = pfVar8[0x1a];
  local_188 = *(undefined8 *)(pfVar8 + 0x18);
  fStack_180 = pfVar8[0x1a];
  uStack_17c = 0x3f800000;
  uStack_5c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar5 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a11040) {
        if (iVar5 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b40692;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar9 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b40692:
  FUN_141b24000(param_2,uVar2,puVar9,&local_e8);
  lVar10 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d0);
  local_188 = *(undefined8 *)(lVar10 + 0x68);
  if (*(short *)(param_1 + 0x176) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x174);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = local_188;
    puVar6[2] = uVar2;
  }
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar2,param_1 + 0x178,lVar10 + 0x120);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x17e,param_2,uVar2,lVar10 + 0x80);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x186,param_2,uVar2,lVar10 + 0xa8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x18e,param_2,uVar2,lVar10 + 0xd0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x196,param_2,uVar2,lVar10 + 0xf8);
  fVar11 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_178 = CONCAT44(local_178._4_4_,fVar11);
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0x19e,&local_178);
  local_198 = local_198 & 0xffffffff00000000;
  pfVar8 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar8 = local_f8;
  }
  fVar13 = *pfVar8 + pfVar8[3] + pfVar8[6] + pfVar8[9] + pfVar8[0xc] + pfVar8[0xf] + pfVar8[0x12] +
           pfVar8[0x15] + pfVar8[0x18];
  fVar11 = pfVar8[1] + pfVar8[4] + pfVar8[7] + pfVar8[10] + pfVar8[0xd] + pfVar8[0x10] +
           pfVar8[0x13] + pfVar8[0x16] + pfVar8[0x19];
  fVar12 = pfVar8[5] + pfVar8[2] + pfVar8[8] + pfVar8[0xb] + pfVar8[0xe] + pfVar8[0x11] +
           pfVar8[0x14] + pfVar8[0x17] + pfVar8[0x1a];
  local_170[0] = 1.0 / SQRT((fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12) * 0.012345679);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0x1a4,local_170);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1aa,param_2,uVar2,
             *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8) + 0x38);
  if (local_f8 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b40990 FUN_141b40990 body=1552 status=ok
// SIG undefined FUN_141b40990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b40990(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined8 local_188;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178 [4];
  float local_168 [28];
  float *local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_188 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  local_198 = CONCAT44(local_198._4_4_,0xf);
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_188,*(undefined4 *)(param_3 + 0x1a38));
  FUN_141b21bb0(param_1 + 0xd0,param_2,&local_188,&DAT_146a163f0);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xfe,param_2,uVar3,param_5);
  local_198 = param_4;
  FUN_141b21980(param_1 + 0x11c,param_2,&local_188,param_3);
  uVar4 = 0;
  local_f8 = (float *)0x0;
  local_f0 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_168);
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  local_e8 = *pfVar9;
  fStack_e4 = pfVar9[1];
  fStack_e0 = pfVar9[2];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar9[3];
  fStack_d4 = pfVar9[4];
  fStack_d0 = pfVar9[5];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar9[6];
  fStack_c4 = pfVar9[7];
  fStack_c0 = pfVar9[8];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar9[9];
  fStack_b4 = pfVar9[10];
  fStack_b0 = pfVar9[0xb];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar9[0xc];
  fStack_a4 = pfVar9[0xd];
  fStack_a0 = pfVar9[0xe];
  uStack_9c = 0x3f800000;
  local_98 = pfVar9[0xf];
  fStack_94 = pfVar9[0x10];
  fStack_90 = pfVar9[0x11];
  uStack_8c = 0x3f800000;
  local_88 = pfVar9[0x12];
  fStack_84 = pfVar9[0x13];
  fStack_80 = pfVar9[0x14];
  uStack_7c = 0x3f800000;
  local_78 = pfVar9[0x15];
  fStack_74 = pfVar9[0x16];
  fStack_70 = pfVar9[0x17];
  uStack_6c = 0x3f800000;
  local_68 = pfVar9[0x18];
  fStack_64 = pfVar9[0x19];
  fStack_60 = pfVar9[0x1a];
  local_188 = *(undefined8 *)(pfVar9 + 0x18);
  fStack_180 = pfVar9[0x1a];
  uStack_17c = 0x3f800000;
  uStack_5c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a11040) {
        if (iVar6 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b40ca3;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar10 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b40ca3:
  FUN_141b24000(param_2,uVar3,puVar10,&local_e8);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d0);
  local_188 = *(undefined8 *)(lVar2 + 0x68);
  if (*(short *)(param_1 + 0x176) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x174);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb360;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = local_188;
    puVar8[2] = uVar3;
  }
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x178,lVar2 + 0x120);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x17e,param_2,uVar3,lVar2 + 0x80);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x186,param_2,uVar3,lVar2 + 0xa8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x18e,param_2,uVar3,lVar2 + 0xd0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x196,param_2,uVar3,lVar2 + 0xf8);
  fVar11 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_188 = CONCAT44(local_188._4_4_,fVar11);
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x19e,&local_188);
  local_198 = local_198 & 0xffffffff00000000;
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  fVar11 = pfVar9[1] + pfVar9[4] + pfVar9[7] + pfVar9[10] + pfVar9[0xd] + pfVar9[0x10] +
           pfVar9[0x13] + pfVar9[0x16] + pfVar9[0x19];
  fVar13 = pfVar9[3] + *pfVar9 + pfVar9[6] + pfVar9[9] + pfVar9[0xc] + pfVar9[0xf] + pfVar9[0x12] +
           pfVar9[0x15] + pfVar9[0x18];
  fVar12 = pfVar9[5] + pfVar9[2] + pfVar9[8] + pfVar9[0xb] + pfVar9[0xe] + pfVar9[0x11] +
           pfVar9[0x14] + pfVar9[0x17] + pfVar9[0x1a];
  local_178[0] = 1.0 / SQRT((fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12) * 0.012345679);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x1a4,local_178);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x1aa,param_2,uVar3,
             *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8) + 0x38);
  if (local_f8 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b40fa0 FUN_141b40fa0 body=896 status=ok
// SIG undefined FUN_141b40fa0(void)

void FUN_141b40fa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
                  undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 local_58;
  undefined8 local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_res8 = uVar3;
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  uVar4 = *(undefined8 *)(*(longlong *)CONCAT44(param_6._4_4_,(float)param_6) + 0x10);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  param_6._0_4_ = (float)(param_5[2] - *param_5);
  param_6._4_4_ = param_5[3] - param_5[1];
  local_58 = *(undefined8 *)param_5;
  local_50 = CONCAT44(param_6._4_4_,(float)param_6);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd8,&local_58,0);
  if (((*(byte *)(param_4 + 0x560) & 0x10) == 0) || (*(float *)(param_4 + 0x3d4) <= 0.0)) {
    param_6._0_4_ = 0.0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xde,&param_6,0);
    param_6._0_4_ = 0.0;
  }
  else {
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xde,param_4 + 0x3d0,0);
    param_6._0_4_ = *(float *)(param_4 + 0x3d4);
    if ((float)param_6 <= 1e-05) {
      param_6._0_4_ = 1e-05;
    }
    param_6._0_4_ = 1.0 / (float)param_6;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe4,&param_6,0);
  if (((*(byte *)(param_4 + 0x560) & 0x10) == 0) || (*(float *)(param_4 + 0x3c8) <= 0.0)) {
    param_6._0_4_ = -1.0;
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xea,&param_6,0);
    param_6._0_4_ = 1.0;
  }
  else {
    param_6._0_4_ = *(float *)(param_4 + 0x3c0) - *(float *)(param_4 + 0x3c8);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar3,param_1 + 0xea,&param_6,0);
    param_6._0_4_ = *(float *)(param_4 + 0x3c8);
    if ((float)param_6 <= 1e-05) {
      param_6._0_4_ = 1e-05;
    }
    param_6._0_4_ = 1.0 / (float)param_6;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xf0,&param_6,0);
  return;
}



// FUNCTION 141b41320 FUN_141b41320 body=651 status=ok
// SIG undefined FUN_141b41320(void)

void FUN_141b41320(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar4 = FSceneRenderTargets::Get(*(undefined8 *)(param_2 + 0x40));
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,*(undefined8 *)(param_2 + 0x40),uVar3,*(undefined8 *)(param_3 + 0x20));
  uVar7 = *(undefined8 *)(param_4 + 8);
  plVar5 = (longlong *)FUN_141ce54b0(uVar4);
  uVar4 = *(undefined8 *)(*plVar5 + 8);
  uVar6 = FUN_1404a0e20();
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar9;
    *(undefined8 **)(lVar2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar7;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar9;
    *(undefined8 **)(lVar2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  uVar7 = FUN_141a156e0();
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar9;
    *(undefined8 **)(lVar2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[4] = uVar4;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar8;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar9;
    *(undefined8 **)(lVar2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar7;
  }
  return;
}



// FUNCTION 141b415b0 FUN_141b415b0 body=376 status=ok
// SIG undefined FUN_141b415b0(void)

void FUN_141b415b0(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FSceneRenderTargets::Get(*(undefined8 *)(param_2 + 0x40));
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,*(undefined8 *)(param_2 + 0x40),uVar3,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *param_4;
  uVar5 = FUN_1404a0e20();
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar6;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar7;
    *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar6;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar7;
    *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141b41730 FUN_141b41730 body=505 status=ok
// SIG undefined FUN_141b41730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b41730(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong _Size;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  (**(code **)(*param_3 + 0x40))(param_3,*(undefined4 *)(param_4 + 0x1a38),local_70,&local_78);
  local_98 = local_78;
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_88 = param_5 + 0x18;
  local_90 = param_4;
  local_80 = uVar3;
  FUN_141aa87d0(param_1,param_2,*(undefined8 *)(lVar4 + 0x40),param_3);
  local_68 = *(undefined4 *)(param_4 + 0x390);
  lVar4 = *(longlong *)(param_1 + 0x48);
  local_60 = (float)(*(int *)(param_4 + 0x370) - *(int *)(param_4 + 0x368));
  local_5c = (float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c));
  local_64 = local_60 / local_5c;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  uVar5 = (uint)*(ushort *)(param_1 + 0x154);
  if (0xf < *(ushort *)(param_1 + 0x154)) {
    uVar5 = 0x10;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x152);
    uVar2 = *(ushort *)(param_1 + 0x150);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_68,_Size);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f594b0;
    puVar8[2] = uVar3;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  return;
}



// FUNCTION 141b41930 FUN_141b41930 body=1098 status=ok
// SIG undefined FUN_141b41930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b41930(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined8 *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar2 + 0x40),uVar12);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x3f800000;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3f800000;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3f800000;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  FUN_141b45c30(param_3,0);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar4;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a177d0) {
        if (iVar8 != -1) {
          puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar13 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b41a52;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c410) {
    _Init_thread_header(&DAT_146a1c410);
    if (DAT_146a1c410 == -1) {
      _DAT_146a1c408 = 0;
      DAT_146a1c40c = 0;
      DAT_146a1c40e = 0;
      _Init_thread_footer(&DAT_146a1c410);
    }
  }
  puVar13 = (undefined4 *)&DAT_146a1c408;
LAB_141b41a52:
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141b240e0(param_2,*(undefined8 *)(lVar2 + 0x40),puVar13,&local_d8);
  if (*param_4 == 0) {
    plVar11 = (longlong *)(DAT_146ac3d68 + 0x30);
  }
  else {
    plVar11 = (longlong *)(*param_4 + 0x10);
  }
  lVar2 = *plVar11;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = lVar2;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar12 = *(undefined8 *)(lVar3 + 0x40);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[2] = uVar12;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = lVar2;
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar12;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  if (*(short *)(param_1 + 0xda) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(param_5 + 1) == '\0') {
      uVar12 = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    }
    else {
      uVar12 = *param_5;
    }
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x40);
    uVar6 = FUN_1404a0e20();
    if (*(short *)(param_1 + 0xda) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd8);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f59c80;
      puVar10[4] = uVar12;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[2] = uVar5;
    }
    if (*(short *)(param_1 + 0xde) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xdc);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      puVar10[4] = uVar6;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[2] = uVar5;
      *puVar10 = &PTR_LAB_143f59c70;
    }
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_res18);
  if (*(char *)(param_5 + 1) != '\0') {
    *(undefined1 *)(param_5 + 1) = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_5);
  }
  return;
}



// FUNCTION 141b41d80 FUN_141b41d80 body=962 status=ok
// SIG undefined FUN_141b41d80(void)

void FUN_141b41d80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  FUN_141aa9590(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  uVar3 = *(undefined8 *)(param_5 + 8);
  param_5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar2;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    puVar9[4] = param_5;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar2;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  uVar3 = *(undefined8 *)(param_4 + 8);
  uVar6 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xdc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xda);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar2;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xe0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xde);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar2;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 200,&DAT_1464c1a14,0);
  lVar8 = FSceneRenderTargets::Get(param_2);
  iVar4 = (int)*(undefined8 *)(lVar8 + 0x378) / 2;
  param_5._4_4_ = (int)((ulonglong)*(undefined8 *)(lVar8 + 0x378) >> 0x20);
  iVar5 = param_5._4_4_ / 2;
  fVar10 = (float)iVar4;
  param_5 = CONCAT44(iVar5,iVar4);
  local_res8 = 1.0 / fVar10;
  local_resc = 1.0 / (float)iVar5;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar2,param_1 + 0xce,&local_res8,0);
  param_5 = CONCAT44(((float)((*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) / 2) - 2.5)
                     / (float)iVar5,
                     ((float)((*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)) / 2) - 2.5)
                     / fVar10);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar2,param_1 + 0xd4,&param_5,0);
  return;
}



// FUNCTION 141b42150 FUN_141b42150 body=785 status=ok
// SIG undefined FUN_141b42150(void)

void FUN_141b42150(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float local_res8;
  float local_resc;
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x40);
  FUN_141aa9590(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar4 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  uVar3 = *(undefined8 *)(param_4 + 8);
  uVar4 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xdc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xda);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xe0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xde);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 200,&DAT_1464c1a14,0);
  lVar6 = FSceneRenderTargets::Get(param_2);
  param_5._4_4_ = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x378) >> 0x20);
  local_res8 = 1.0 / (float)((int)*(undefined8 *)(lVar6 + 0x378) / 2);
  local_resc = 1.0 / (float)(param_5._4_4_ / 2);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar2,param_1 + 0xce,&local_res8,0);
  return;
}



// FUNCTION 141b42470 FUN_141b42470 body=575 status=ok
// SIG undefined FUN_141b42470(void)

void FUN_141b42470(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined8 local_48 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_48[0] = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_res8 = uVar3;
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141b22160(param_1 + 0xc0,param_2,&local_res8,&DAT_146a163f0);
  FAOParameters::Set<FRHIPixelShader_*>(param_1 + 0xee,param_2,uVar3,param_5);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x13d0);
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0x134) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x132);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d8e600;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x68);
  if (*(short *)(param_1 + 0x138) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x136);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d8e600;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar3,param_1 + 0x10c,lVar2 + 0x120,0);
  FUN_141b228d0(param_1 + 0x112,param_2,uVar3,lVar2 + 0x80);
  FUN_141b228d0(param_1 + 0x11a,param_2,uVar3,lVar2 + 0xa8);
  FUN_141b228d0(param_1 + 0x122,param_2,uVar3,lVar2 + 0xd0);
  FUN_141b228d0(param_1 + 0x12a,param_2,uVar3,lVar2 + 0xf8);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar3,param_1 + 0x13a,local_48,0);
  return;
}



// FUNCTION 141b426b0 FUN_141b426b0 body=522 status=ok
// SIG undefined FUN_141b426b0(void)

void FUN_141b426b0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined4 local_res20 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res20[0] = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = uVar3;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xc0,local_res20,0);
  if (*(short *)(param_1 + 200) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = param_5;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
  }
  FUN_141aa5410(param_1 + 0xca,param_2,&local_res8,*(undefined8 *)(param_3 + 0x15f8),
                *(undefined4 *)(param_3 + 0x15f0),1);
  if (*(short *)(param_1 + 0xf0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xee);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    puVar5[4] = param_6;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xf4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf2);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    puVar5[4] = param_7;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 141b428c0 FUN_141b428c0 body=975 status=ok
// SIG undefined FUN_141b428c0(void)

void FUN_141b428c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *_Dst;
  ulonglong _Size;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),0xf);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xd0,param_2,uVar3,param_7);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x13d0);
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  uVar7 = *(undefined8 *)(lVar2 + 0x60);
  puVar8 = puVar10 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *puVar10 = uVar4;
  puVar10[1] = uVar7;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  puVar9[5] = 0;
  *puVar9 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar9 + 2) = 2;
  puVar9[3] = puVar10;
  *(undefined4 *)(puVar9 + 4) = 2;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xee,param_2,uVar3,lVar2 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xf6,param_2,uVar3,lVar2 + 0x58);
  uVar5 = (uint)*(ushort *)(param_1 + 0x102);
  if (0xf < *(ushort *)(param_1 + 0x102)) {
    uVar5 = 0x10;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x100);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0xfe));
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)(param_3 + 0x1aa0),_Size);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d92080;
    *(undefined4 *)(puVar10 + 4) = (undefined4)local_res8;
    puVar10[2] = uVar3;
    puVar10[3] = _Dst;
    *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
    *(uint *)(puVar10 + 5) = uVar5;
  }
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x104,&param_6,0);
  uVar4 = *(undefined8 *)(param_4 + 8);
  uVar7 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0x10c) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10a);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d92090;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x110) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10e);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144dcb3b8;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar7;
  }
  return;
}



// FUNCTION 141b42c90 FUN_141b42c90 body=1703 status=ok
// SIG undefined FUN_141b42c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b42c90(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  longlong local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198 [2];
  undefined8 local_190;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  float local_178;
  float local_174;
  float local_168 [28];
  float *local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_190 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  local_1b8 = param_4;
  FUN_141b21980(param_1 + 0xc0,param_2,&local_190,param_3);
  uVar5 = 0;
  local_f8 = (float *)0x0;
  local_f0 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_168);
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  local_e8 = *pfVar9;
  fStack_e4 = pfVar9[1];
  fStack_e0 = pfVar9[2];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar9[3];
  fStack_d4 = pfVar9[4];
  fStack_d0 = pfVar9[5];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar9[6];
  fStack_c4 = pfVar9[7];
  fStack_c0 = pfVar9[8];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar9[9];
  fStack_b4 = pfVar9[10];
  fStack_b0 = pfVar9[0xb];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar9[0xc];
  fStack_a4 = pfVar9[0xd];
  fStack_a0 = pfVar9[0xe];
  uStack_9c = 0x3f800000;
  local_98 = pfVar9[0xf];
  fStack_94 = pfVar9[0x10];
  fStack_90 = pfVar9[0x11];
  uStack_8c = 0x3f800000;
  local_88 = pfVar9[0x12];
  fStack_84 = pfVar9[0x13];
  fStack_80 = pfVar9[0x14];
  uStack_7c = 0x3f800000;
  local_78 = pfVar9[0x15];
  fStack_74 = pfVar9[0x16];
  fStack_70 = pfVar9[0x17];
  uStack_6c = 0x3f800000;
  local_68 = pfVar9[0x18];
  fStack_64 = pfVar9[0x19];
  fStack_60 = pfVar9[0x1a];
  local_1a8 = *(longlong *)(pfVar9 + 0x18);
  fStack_1a0 = pfVar9[0x1a];
  uStack_19c = 0x3f800000;
  uStack_5c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146a11040) {
        if (iVar7 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b42f53;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar11 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b42f53:
  FUN_141b24000(param_2,uVar3,puVar11,&local_e8);
  local_1b8 = local_1b8 & 0xffffffff00000000;
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  fVar15 = pfVar9[3] + *pfVar9 + pfVar9[6] + pfVar9[9] + pfVar9[0xc] + pfVar9[0xf] + pfVar9[0x12] +
           pfVar9[0x15] + pfVar9[0x18];
  fVar13 = pfVar9[1] + pfVar9[4] + pfVar9[7] + pfVar9[10] + pfVar9[0xd] + pfVar9[0x10] +
           pfVar9[0x13] + pfVar9[0x16] + pfVar9[0x19];
  fVar14 = pfVar9[2] + pfVar9[5] + pfVar9[8] + pfVar9[0xb] + pfVar9[0xe] + pfVar9[0x11] +
           pfVar9[0x14] + pfVar9[0x17] + pfVar9[0x1a];
  local_198[0] = 1.0 / SQRT((fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14) * 0.012345679);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0xda,local_198);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_1a8 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8);
  puVar6 = puVar12 + 1;
  local_190 = *(undefined8 *)(param_5 + 0x10);
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar12 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *puVar12 = local_190;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  puVar10[5] = 0;
  *puVar10 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar10 + 2) = 1;
  puVar10[3] = puVar12;
  *(undefined4 *)(puVar10 + 4) = 2;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 3;
  local_1b8 = *(ulonglong *)(param_5 + 0x10);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xf0,param_2,uVar3,*(undefined8 *)(param_5 + 8));
  uVar4 = *(undefined8 *)(local_1a8 + 0x48);
  if (*(short *)(param_1 + 0xee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xec);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar12 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar12 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_144dcb360;
    puVar12[2] = uVar3;
    *(uint *)(puVar12 + 3) = (uint)uVar1;
    puVar12[4] = uVar4;
  }
  local_1b8 = local_1b8 & 0xffffffff00000000;
  local_188 = ((*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)) / 2) / DAT_1464c19f4 + -1;
  local_184 = ((*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) / 2) / DAT_1464c19f4 + -1;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe6,&local_188);
  FUN_141b08510(&local_180);
  local_1b8 = local_1b8 & 0xffffffff00000000;
  local_178 = ((float)((*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)) / 2) - 0.5) /
              (float)local_180;
  local_174 = ((float)((*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)) / 2) - 0.5) /
              (float)local_17c;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe0,&local_178);
  if (local_f8 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b43340 FUN_141b43340 body=621 status=ok
// SIG undefined FUN_141b43340(void)

void FUN_141b43340(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *(undefined8 *)(param_4 + 200);
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0xf0);
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  puVar5 = puVar6 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar6 = uVar4;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar6;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  puVar7[5] = 0;
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,uVar3,*(undefined8 *)(param_5 + 8),
             *(undefined8 *)(param_5 + 0x10));
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd0,param_4 + 0x30);
  return;
}



// FUNCTION 141b435b0 FUN_141b435b0 body=405 status=ok
// SIG undefined FUN_141b435b0(void)

void FUN_141b435b0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_res8;
  longlong local_38;
  undefined8 local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x60);
  FUN_141aa9420(param_1,param_2,local_res8,*(undefined8 *)(param_3 + 0x20));
  local_38 = 0;
  local_30 = 0;
  FUN_141b33f50(param_1 + 0xc0,param_4,&local_38);
  lVar1 = local_38;
  iVar2 = (int)local_30;
  lVar8 = (longlong)(int)local_30;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar6 = (int)local_30 * 8;
  uVar3 = (longlong)iVar6 + (longlong)puVar7;
  if (*(ulonglong *)(param_2 + 0x38) < uVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar6 + 8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = (longlong)iVar6 + (longlong)puVar7;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar3;
  if (0 < iVar2) {
    puVar4 = puVar7;
    do {
      *puVar4 = *(undefined8 *)((lVar1 - (longlong)puVar7) + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  puVar5[5] = 0;
  *puVar5 = &PTR_LAB_144d91e60;
  *(int *)(puVar5 + 2) = iVar2;
  puVar5[3] = puVar7;
  *(undefined4 *)(puVar5 + 4) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  FUN_141b21db0(param_1 + 0xc0,param_2,&local_res8,param_4);
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 141b43750 FUN_141b43750 body=549 status=ok
// SIG undefined FUN_141b43750(void)

void FUN_141b43750(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_res8;
  longlong local_38;
  undefined8 local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  lVar1 = *(longlong *)(lVar1 + 0x60);
  local_res8 = lVar1;
  FUN_141aa9420(param_1,param_2,lVar1,*(undefined8 *)(param_3 + 0x20));
  FUN_141b21bb0(param_1 + 0xc0,param_2,&local_res8,&DAT_146a163f0);
  local_res8 = param_1 + 0xee;
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x13d0);
  local_38 = 0;
  local_30 = 0;
  FUN_141b34050(local_res8,lVar2,&local_38);
  lVar3 = local_38;
  iVar4 = (int)local_30;
  lVar10 = (longlong)(int)local_30;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar8 = (int)local_30 * 8;
  uVar5 = (longlong)iVar8 + (longlong)puVar9;
  if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar8 + 8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar8 + (longlong)puVar9;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar5;
  if (0 < iVar4) {
    puVar6 = puVar9;
    do {
      *puVar6 = *(undefined8 *)((lVar3 - (longlong)puVar9) + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 6;
  }
  lVar10 = local_res8;
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  puVar7[3] = puVar9;
  puVar7[5] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(int *)(puVar7 + 2) = iVar4;
  *(undefined4 *)(puVar7 + 4) = 1;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,lVar1,local_res8,lVar2 + 0x120,0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (lVar10 + 6,param_2,lVar1,lVar2 + 0x80);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (lVar10 + 0xe,param_2,lVar1,lVar2 + 0xa8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (lVar10 + 0x16,param_2,lVar1,lVar2 + 0xd0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (lVar10 + 0x1e,param_2,lVar1,lVar2 + 0xf8);
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return;
}



// FUNCTION 141b43980 FUN_141b43980 body=909 status=ok
// SIG undefined FUN_141b43980(void)

void FUN_141b43980(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FUN_141aa5e80(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),
                CONCAT44(uVar9,0xf));
  FUN_141b21bb0(param_1 + 0xd0,param_2,&local_res8,&DAT_146a163f0);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xfe,param_2,uVar3,param_5);
  FUN_141b21980(param_1 + 0x11c,param_2,&local_res8,param_3,param_4);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20);
  lVar4 = *(longlong *)(lVar2 + 0x1620);
  lVar2 = *(longlong *)(lVar2 + 0x1690);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x136,param_2,uVar3,lVar4 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x13e,param_2,uVar3,lVar4 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x146,param_2,uVar3,lVar2 + 8);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d0);
  uVar5 = *(undefined8 *)(lVar2 + 0x68);
  if (*(short *)(param_1 + 0x150) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x14e);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  param_4 = param_4 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0x152,lVar2 + 0x120,param_4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x158,param_5 + 4,param_4 & 0xffffffff00000000);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x1ab0) + 0x13d8);
  uVar5 = *(undefined8 *)(lVar2 + 0xa0);
  if (*(short *)(param_1 + 0x160) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x15e);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  uVar5 = *(undefined8 *)(lVar2 + 0xc0);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *puVar7 = uVar5;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar7;
  *(undefined4 *)(puVar8 + 4) = 2;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
  puVar8[5] = 0;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x162,param_2,uVar3,lVar2 + 0xb8);
  return;
}



// FUNCTION 141b43d10 FUN_141b43d10 body=1439 status=ok
// SIG undefined FUN_141b43d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b43d10(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined8 local_188;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178 [4];
  float local_168 [28];
  float *local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_188 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  local_198 = param_4;
  FUN_141b21980(param_1 + 0xc0,param_2,&local_188,param_3);
  uVar5 = 0;
  local_f8 = (float *)0x0;
  local_f0 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_168);
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  local_e8 = *pfVar9;
  fStack_e4 = pfVar9[1];
  fStack_e0 = pfVar9[2];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar9[3];
  fStack_d4 = pfVar9[4];
  fStack_d0 = pfVar9[5];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar9[6];
  fStack_c4 = pfVar9[7];
  fStack_c0 = pfVar9[8];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar9[9];
  fStack_b4 = pfVar9[10];
  fStack_b0 = pfVar9[0xb];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar9[0xc];
  fStack_a4 = pfVar9[0xd];
  fStack_a0 = pfVar9[0xe];
  uStack_9c = 0x3f800000;
  local_98 = pfVar9[0xf];
  fStack_94 = pfVar9[0x10];
  fStack_90 = pfVar9[0x11];
  uStack_8c = 0x3f800000;
  local_88 = pfVar9[0x12];
  fStack_84 = pfVar9[0x13];
  fStack_80 = pfVar9[0x14];
  uStack_7c = 0x3f800000;
  local_78 = pfVar9[0x15];
  fStack_74 = pfVar9[0x16];
  fStack_70 = pfVar9[0x17];
  uStack_6c = 0x3f800000;
  local_68 = pfVar9[0x18];
  fStack_64 = pfVar9[0x19];
  fStack_60 = pfVar9[0x1a];
  local_188 = *(undefined8 *)(pfVar9 + 0x18);
  fStack_180 = pfVar9[0x1a];
  uStack_17c = 0x3f800000;
  uStack_5c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146a11040) {
        if (iVar7 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar12 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b43fd2;
        }
        break;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar12 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b43fd2:
  FUN_141b24000(param_2,uVar3,puVar12,&local_e8);
  local_198 = local_198 & 0xffffffff00000000;
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  fVar15 = pfVar9[3] + *pfVar9 + pfVar9[6] + pfVar9[9] + pfVar9[0xc] + pfVar9[0xf] + pfVar9[0x12] +
           pfVar9[0x15] + pfVar9[0x18];
  fVar13 = pfVar9[4] + pfVar9[1] + pfVar9[7] + pfVar9[10] + pfVar9[0xd] + pfVar9[0x10] +
           pfVar9[0x13] + pfVar9[0x16] + pfVar9[0x19];
  fVar14 = pfVar9[2] + pfVar9[5] + pfVar9[8] + pfVar9[0xb] + pfVar9[0xe] + pfVar9[0x11] +
           pfVar9[0x14] + pfVar9[0x17] + pfVar9[0x1a];
  local_178[0] = 1.0 / SQRT((fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14) * 0.012345679);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0xda,local_178);
  uVar4 = *(undefined8 *)(param_5 + 0x78);
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144dcb360;
    puVar10[2] = uVar3;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar4;
  }
  local_188 = *(undefined8 *)(param_5 + 0x98);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar10 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *puVar10 = local_188;
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar11 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar11 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  puVar11[5] = 0;
  *puVar11 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar11 + 2) = 1;
  puVar11[3] = puVar10;
  *(undefined4 *)(puVar11 + 4) = 2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 3;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xe4,param_2,uVar3,param_5 + 0x90);
  if (local_f8 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b442b0 FUN_141b442b0 body=452 status=ok
// SIG undefined FUN_141b442b0(void)

void FUN_141b442b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined8 *)(param_5 + 0x38);
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  puVar5 = puVar7 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar7 = uVar4;
  puVar7[1] = uVar3;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 2;
  puVar6[3] = puVar7;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = 0;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,uVar2,param_5 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 200,param_2,uVar2,param_5 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xd0,param_2,uVar2,param_3 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xd8,param_2,uVar2,param_3 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xe0,param_2,uVar2,param_4 + 8);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0xe8,&stack0x00000030,0);
  return;
}



// FUNCTION 141b44480 FUN_141b44480 body=415 status=ok
// SIG undefined FUN_141b44480(void)

void FUN_141b44480(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  puVar4 = puVar6 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar6 = uVar3;
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar5 + 2) = 1;
  puVar5[3] = puVar6;
  *(undefined4 *)(puVar5 + 4) = 2;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  puVar5[5] = 0;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,uVar2,param_5 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 200,param_2,uVar2,param_3 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xd0,param_2,uVar2,param_3 + 0x30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xd8,param_2,uVar2,param_4 + 8);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0xe0,&stack0x00000030,0);
  return;
}



// FUNCTION 141b44620 FUN_141b44620 body=893 status=ok
// SIG undefined FUN_141b44620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141b44620(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  undefined1 auStack_b8 [32];
  int local_98;
  uint local_90;
  ulonglong local_88 [3];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  uVar5 = param_7;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_70 = param_5;
  local_68 = param_8;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(ulonglong *)(lVar2 + 0x60);
  local_88[0] = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_4 + 0x20));
  local_98 = *(undefined4 *)(param_3 + 0x15f0);
  local_90 = local_90 & 0xffffff00;
  FUN_141aa5410(param_1 + 0xc0,param_2,local_88,*(undefined8 *)(param_3 + 0x15f8));
  local_58 = DAT_146a171c0;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_50 = DAT_146a171e8;
  local_48 = DAT_146a17210;
  puVar7 = puVar9 + 4;
  local_60 = DAT_146a17170;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *puVar9 = local_60;
  puVar9[1] = local_58;
  puVar9[2] = local_50;
  puVar9[3] = local_48;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 4;
  puVar8[3] = puVar9;
  *(undefined4 *)(puVar8 + 4) = 2;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
  puVar8[5] = 0;
  FUN_141b21bb0(param_1 + 0xe4,param_2,local_88,&DAT_146a17160);
  local_88[1] = 0x24;
  uVar4 = (uint)*(ushort *)(param_1 + 0x116);
  if (7 < *(ushort *)(param_1 + 0x116)) {
    uVar4 = 8;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x114);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_88[0] = CONCAT44(local_88[0]._4_4_,(uint)*(ushort *)(param_1 + 0x112));
    uVar6 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,local_88 + 1,_Size);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d92080;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *(undefined4 *)(puVar9 + 4) = (undefined4)local_88[0];
    puVar9[2] = uVar3;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 5) = uVar4;
  }
  local_98 = 0;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar3,param_1 + 0x118,local_70);
  local_98 = 0;
  FUN_141a120e0(param_2,uVar3,param_1 + 0x124,local_68);
  local_98 = 0;
  if (param_6 < 0xd) {
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x11e,&param_6);
    local_90 = 0;
    local_98 = param_6;
    FUN_141aace20(param_2,uVar3,param_1 + 0x12a,uVar5);
  }
  else {
    local_88[0] = local_88[0] & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x11e,local_88);
  }
  return;
}



// FUNCTION 141b449a0 FUN_141b449a0 body=646 status=ok
// SIG undefined FUN_141b449a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b449a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_68 = DAT_146a16450;
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_60 = DAT_146a16478;
  local_58 = DAT_146a164a0;
  local_70 = DAT_146a16400;
  local_50 = *(undefined8 *)(*(longlong *)(param_3 + 0x15f8) + 0x38);
  local_48 = *(undefined8 *)(*(longlong *)(param_3 + 0x15f8) + 0x10);
  puVar2 = puVar4 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar4 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *puVar4 = local_70;
  puVar4[1] = local_68;
  puVar4[2] = local_60;
  puVar4[3] = local_58;
  puVar4[4] = local_50;
  puVar4[5] = local_48;
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar3;
  *(undefined8 **)(param_2 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar3 + 2) = 6;
  puVar3[3] = puVar4;
  *(undefined4 *)(puVar3 + 4) = 2;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 3;
  puVar3[5] = 0;
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar1 = *(undefined8 *)(lVar5 + 0x60);
  local_78 = uVar1;
  FUN_141aa9420(param_1,param_2,uVar1,*(undefined8 *)(param_4 + 0x20));
  local_88 = *(undefined4 *)(param_3 + 0x15f0);
  local_80 = local_80 & 0xffffff00;
  FUN_141aa5410(param_1 + 0xc0,param_2,&local_78,*(undefined8 *)(param_3 + 0x15f8));
  FUN_141b21bb0(param_1 + 0xe4,param_2,&local_78,&DAT_146a163f0);
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0x112,param_2,uVar1,param_5);
  local_88 = 0;
  local_78._0_4_ = *(undefined4 *)(param_4 + 0x10e0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar1,param_1 + 0x130,&local_78);
  local_80 = 0;
  lVar5 = *(longlong *)(param_4 + 0x10d0);
  if (*(longlong *)(param_4 + 0x10d0) == 0) {
    lVar5 = param_4 + 0x1070;
  }
  local_88 = *(undefined4 *)(param_4 + 0x10e0);
  FUN_141aace20(param_2,uVar1,param_1 + 0x136,lVar5);
  local_78 = CONCAT44(local_78._4_4_,DAT_1464c21a0);
  local_88 = 0;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar1,param_1 + 0x13c,&local_78);
  return;
}



// FUNCTION 141b44c30 FUN_141b44c30 body=426 status=ok
// SIG undefined FUN_141b44c30(void)

void FUN_141b44c30(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa9800(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),uVar2);
  fVar6 = *(float *)(param_3 + 0x281c);
  if (fVar6 <= 30.0) {
    fVar6 = 30.0;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  fVar3 = *(float *)(param_3 + 0x440) * 1.0 + *(float *)(param_3 + 0x430) * 1.0 +
          *(float *)(param_3 + 0x420) * 1.0 + *(float *)(param_3 + 0x410) * 1.0;
  fVar4 = *(float *)(param_3 + 0x444) * 1.0 + *(float *)(param_3 + 0x434) * 1.0 +
          *(float *)(param_3 + 0x424) * 1.0 + *(float *)(param_3 + 0x414) * 1.0;
  fVar5 = *(float *)(param_3 + 0x448) * 1.0 + *(float *)(param_3 + 0x438) * 1.0 +
          *(float *)(param_3 + 0x428) * 1.0 + *(float *)(param_3 + 0x418) * 1.0;
  fVar6 = (fVar5 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5)) * fVar6;
  local_res8[0] =
       (*(float *)(param_3 + 0x3c8) * 1.0 + fVar6 * *(float *)(param_3 + 0x3b8) +
       *(float *)(param_3 + 0x3a8) * 0.0 + *(float *)(param_3 + 0x398) * 0.0) /
       (*(float *)(param_3 + 0x3cc) * 1.0 + fVar6 * *(float *)(param_3 + 0x3bc) +
       *(float *)(param_3 + 0x3ac) * 0.0 + *(float *)(param_3 + 0x39c) * 0.0);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar1 + 0x38),param_1 + 0xc0,local_res8,0);
  return;
}



// FUNCTION 141b44de0 FUN_141b44de0 body=455 status=ok
// SIG undefined FUN_141b44de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b44de0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_res8 [2];
  float local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_58 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  local_res8[0] = uVar2;
  FUN_141aa9800(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  FUN_141b225a0(param_1 + 0xc0,param_2,local_res8,&DAT_146a163f0);
  FUN_1404986d0(param_2,uVar2,param_1 + 0xee,param_4 + 1,0);
  fVar3 = _guard_xfg_dispatch_icall_nop(2.0,-((float)(DAT_1464c17b8 - 1) * _DAT_1464c17a8));
  fVar4 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_res8[0] = CONCAT44(local_res8[0]._4_4_,fVar3 * ((float)param_4[1] / (fVar4 + 1.0)));
  FUN_1404986d0(param_2,uVar2,param_1 + 0xf4,local_res8,0);
  FUN_1404986d0(param_2,uVar2,param_1 + 0xfa,&DAT_1464c17a8,0);
  local_res18[0] = DAT_1464c17ac;
  if (65000.0 <= DAT_1464c17ac) {
    local_res18[0] = 65000.0;
  }
  FUN_1404986d0(param_2,uVar2,param_1 + 0x100,local_res18,0);
  local_res20[0] = *param_4;
  FUN_1404986d0(param_2,uVar2,param_1 + 0x106,local_res20,0);
  local_58[0] = 0x3fb504f3;
  FUN_1404986d0(param_2,uVar2,param_1 + 0x10c,local_58,0);
  return;
}



// FUNCTION 141b44fb0 SetParameters body=85 status=ok
// SIG undefined SetParameters(void)

void FPostProcessVS::SetParameters(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FUN_141aa9800(param_1,param_2,*(undefined8 *)(lVar1 + 0x38),param_3);
  return;
}



// FUNCTION 141b45010 FUN_141b45010 body=209 status=ok
// SIG undefined FUN_141b45010(void)

void FUN_141b45010(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,float param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  float local_res8 [2];
  float local_res18;
  float fStackX_1c;
  undefined8 local_28 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  local_28[0] = uVar2;
  FUN_141aa9800(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  FUN_141b225a0(param_1 + 0xc0,param_2,local_28,&DAT_146a17160);
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar2,param_1 + 0xee,param_5,0);
  local_res18 = (float)param_4;
  fStackX_1c = (float)((ulonglong)param_4 >> 0x20);
  if (fStackX_1c <= local_res18) {
    local_res18 = fStackX_1c;
  }
  local_res8[0] = (param_6 * 1.414) / local_res18;
  FUN_1404986d0(param_2,uVar2,param_1 + 0xf4,local_res8,0);
  return;
}



// FUNCTION 141b450f0 FUN_141b450f0 body=1293 status=ok
// SIG undefined FUN_141b450f0(void)

void FUN_141b450f0(longlong param_1,longlong param_2,longlong param_3,int *param_4,ulonglong param_5
                  ,undefined8 param_6,longlong param_7,longlong param_8,undefined8 param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar13;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar2 = *(undefined8 *)(lVar7 + 0x40);
  local_res8 = uVar2;
  FUN_141aa9590(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res8,*(undefined4 *)(param_3 + 0x1a38),
                CONCAT44(uVar13,0xf));
  FAOParameters::Set<FRHIPixelShader_*>(param_1 + 0xd0,param_2,uVar2,param_9);
  FUN_141b3c250(param_1 + 0xee,param_2,&local_res8,param_3,param_5,param_6);
  uVar3 = *(undefined8 *)(param_7 + 8);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x124) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x122);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar3;
  }
  if (*(short *)(param_1 + 0x128) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x126);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  param_5 = param_5 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x12a,&DAT_1464c1a14,param_5);
  param_5 = param_5 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x130,&DAT_1464c1a18,param_5);
  if ((DAT_1464c1a10 == 0) || (DAT_1464c17a0 < 2)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x3f800000;
  }
  param_7 = CONCAT44(param_7._4_4_,uVar13);
  param_5 = param_5 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x136,&param_7,param_5);
  if (param_8 == 0) {
    puVar6 = (undefined8 *)(DAT_146ac3e00 + 0x30);
  }
  else {
    puVar6 = (undefined8 *)(param_8 + 0x10);
  }
  uVar3 = *puVar6;
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x13e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x13c);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar2;
    puVar8[4] = uVar3;
  }
  if (*(short *)(param_1 + 0x142) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x140);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  lVar7 = FSceneRenderTargets::Get(param_2);
  param_5 = param_5 & 0xffffffff00000000;
  iVar4 = (int)*(undefined8 *)(lVar7 + 0x378) / 2;
  param_7._4_4_ = (int)((ulonglong)*(undefined8 *)(lVar7 + 0x378) >> 0x20);
  param_7._4_4_ = param_7._4_4_ / 2;
  param_7 = CONCAT44(param_7._4_4_,iVar4);
  local_50 = 1.0 / (float)iVar4;
  local_54 = 1.0 / (float)param_7._4_4_;
  fVar12 = (float)(param_4[2] - *param_4);
  fVar11 = (float)param_4[1];
  fVar10 = (float)(param_4[3] - param_4[1]);
  local_68 = fVar12 * local_50 * 0.5;
  local_64 = (fVar10 * local_54) / (DAT_1464c9c24 * -2.0);
  fVar9 = (float)*param_4;
  local_60 = (fVar10 * 0.5 + fVar11) * local_54;
  local_58 = (fVar9 + 0.5) * local_50;
  local_5c = (fVar12 * 0.5 + fVar9) * local_50;
  local_4c = ((float)param_4[3] - 0.5) * local_54;
  local_54 = (fVar11 + 0.5) * local_54;
  local_50 = ((float)param_4[2] - 0.5) * local_50;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x144,&local_68,param_5);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0x14a,&local_58,param_5 & 0xffffffff00000000);
  return;
}



// FUNCTION 141b45600 FUN_141b45600 body=408 status=ok
// SIG undefined FUN_141b45600(void)

void FUN_141b45600(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined4 local_res20 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res20[0] = param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = uVar3;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xc0,local_res20,0);
  if (*(short *)(param_1 + 200) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    puVar5[4] = param_5;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xcc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xca);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    puVar5[4] = param_6;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
  }
  FUN_141aa5410(param_1 + 0xce,param_2,&local_res8,*(undefined8 *)(param_3 + 0x15f8),
                *(undefined4 *)(param_3 + 0x15f0),1);
  return;
}



// FUNCTION 141b457a0 FUN_141b457a0 body=558 status=ok
// SIG undefined FUN_141b457a0(void)

void FUN_141b457a0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5,longlong param_6,byte param_7,byte param_8)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong _Size;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_6 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141aa8c40(param_1,param_2,*(undefined8 *)(lVar3 + 0x38),param_3,param_4,param_5,param_5 + 0x28
                ,uVar4);
  if (*(short *)(param_1 + 0x15a) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    param_6._0_4_ = (uint)param_7;
    param_4 = param_4 & 0xffffffff00000000;
    FUN_1404986d0(param_2,*(undefined8 *)(lVar3 + 0x38),param_1 + 0x156,&param_6,param_4);
  }
  if (*(short *)(param_1 + 0x160) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    param_6._0_4_ = (uint)param_8;
    FUN_1404986d0(param_2,*(undefined8 *)(lVar3 + 0x38),param_1 + 0x15c,&param_6,
                  param_4 & 0xffffffff00000000);
  }
  if (*(short *)(param_1 + 0x154) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    param_6._0_4_ = 0;
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    uVar5 = (uint)*(ushort *)(param_1 + 0x154);
    if (3 < *(ushort *)(param_1 + 0x154)) {
      uVar5 = 4;
    }
    _Size = (ulonglong)uVar5;
    if (uVar5 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x152);
      uVar2 = *(ushort *)(param_1 + 0x150);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar6 = _Size + (longlong)_Dst;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar6;
      _guard_xfg_dispatch_icall_nop(_Dst,&param_6,_Size);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *(uint *)(puVar8 + 4) = (uint)uVar2;
      *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
      *puVar8 = &PTR_LAB_143f4d340;
      puVar8[2] = uVar4;
      puVar8[3] = _Dst;
      *(uint *)(puVar8 + 5) = uVar5;
    }
  }
  return;
}



// FUNCTION 141b459d0 FUN_141b459d0 body=561 status=ok
// SIG undefined FUN_141b459d0(void)

void FUN_141b459d0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  undefined1 local_40 [8];
  
  FUN_141a0cff0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_4 + 0x1a38),param_2);
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = *(longlong *)(param_1 + 0x38);
  local_res8 = 0;
  (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined4 *)(param_4 + 0x1a38),local_40,&local_res8);
  uVar6 = local_res8;
  lVar5 = *(longlong *)(lVar4 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  lVar1 = param_3 + 0x18;
  FUN_141aa8c40(lVar4,param_2,*(undefined8 *)(lVar5 + 0x38),plVar2,uVar6,param_4,lVar1,uVar3);
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    local_res8 = 0;
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined4 *)(param_4 + 0x1a38),local_40,&local_res8);
    uVar6 = local_res8;
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    FUN_141aa8360(lVar4,param_2,*(undefined8 *)(lVar5 + 0x48),plVar2,uVar6,param_4,lVar1,uVar3);
    plVar2 = *(longlong **)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    lVar4 = *(longlong *)(param_1 + 0x48);
    local_res8 = 0;
    (**(code **)(*plVar2 + 0x40))(plVar2,*(undefined4 *)(param_4 + 0x1a38),local_40,&local_res8);
    uVar6 = local_res8;
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    FUN_141aa7ef0(lVar4,param_2,*(undefined8 *)(lVar5 + 0x50),plVar2,uVar6,param_4,lVar1,uVar3);
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_141b41730(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  param_3);
  }
  return;
}



// FUNCTION 141b45c10 FUN_141b45c10 body=19 status=ok
// SIG undefined FUN_141b45c10(void)

void FUN_141b45c10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_141a0cff0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_4 + 0x1a38),param_2);
  return;
}



// FUNCTION 141b45c30 FUN_141b45c30 body=501 status=ok
// SIG undefined FUN_141b45c30(void)

void FUN_141b45c30(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined4 uVar11;
  
  lVar9 = DAT_146ac3e50;
  if (*(longlong *)(param_1 + 0x2850) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2850) + 0x60);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x2818);
  uVar11 = 0x3f800000;
  *param_2 = *(undefined8 *)(param_1 + 0x2810);
  param_2[1] = uVar7;
  fVar1 = *(float *)(param_1 + 0x282c);
  uVar2 = *(undefined4 *)(param_1 + 0x2824);
  uVar3 = *(undefined4 *)(param_1 + 0x2828);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x2820);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(float *)((longlong)param_2 + 0x1c) = 1.0 - fVar1;
  uVar7 = *(undefined8 *)(param_1 + 0x2838);
  param_2[4] = *(undefined8 *)(param_1 + 0x2830);
  param_2[5] = uVar7;
  param_2[6] = *(undefined8 *)(param_1 + 0x2840);
  param_2[8] = *(undefined8 *)(param_1 + 0x2858);
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_1 + 0x2860);
  cVar4 = *(char *)(param_1 + 0x2864);
  uVar2 = *(undefined4 *)(param_1 + 0x2874);
  uVar3 = *(undefined4 *)(param_1 + 0x2878);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x2870);
  *(undefined4 *)((longlong)param_2 + 0x54) = uVar2;
  *(undefined4 *)(param_2 + 0xb) = uVar3;
  *(float *)((longlong)param_2 + 0x5c) = (float)(cVar4 != '\0');
  fVar1 = *(float *)(param_1 + 0x2868);
  fVar10 = 1e-06;
  if ((1e-06 <= fVar1) && (fVar10 = fVar1, 1000.0 <= fVar1)) {
    fVar10 = 1000.0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2880);
  uVar3 = *(undefined4 *)(param_1 + 0x2884);
  uVar5 = *(undefined4 *)(param_1 + 0x2880);
  uVar6 = *(undefined4 *)(param_1 + 0x2884);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x287c);
  *(undefined4 *)((longlong)param_2 + 100) = uVar5;
  *(undefined4 *)(param_2 + 0xd) = uVar6;
  *(float *)((longlong)param_2 + 0x6c) = fVar10;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0x286c);
  param_2[0x10] = *(undefined8 *)(lVar9 + 0x30);
  uVar7 = FUN_141b33b80(uVar2,uVar3);
  param_2[0x11] = uVar7;
  *(uint *)(param_2 + 0xf) = (uint)(*(char *)(param_1 + 0x2848) != '\0');
  *(undefined4 *)((longlong)param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x284c);
  lVar9 = *(longlong *)(param_1 + 0x2fc8);
  if (((lVar9 == 0) || (lVar8 = *(longlong *)(lVar9 + 0x10), lVar8 == 0)) &&
     (lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar8 == 0)) {
    lVar8 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  if (lVar9 == 0) {
    uVar11 = 0;
  }
  *(undefined4 *)((longlong)param_2 + 0x74) = uVar11;
  param_2[0x12] = lVar8;
  uVar7 = FUN_141a156e0();
  param_2[0x13] = uVar7;
  return;
}



// FUNCTION 141b45e30 FUN_141b45e30 body=59 status=ok
// SIG undefined FUN_141b45e30(void)

undefined4 FUN_141b45e30(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1419ef5f0(*param_1);
  if (2 < iVar2) {
    cVar1 = FUN_141b30a50(*param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_141ed1340(*param_1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141b45e70 FUN_141b45e70 body=47 status=ok
// SIG undefined FUN_141b45e70(void)

undefined4 FUN_141b45e70(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = *param_1;
  iVar3 = FUN_1419ef5f0(uVar1);
  if (2 < iVar3) {
    cVar2 = FUN_141b30a50(uVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b45ea0 FUN_141b45ea0 body=100 status=ok
// SIG undefined FUN_141b45ea0(void)

undefined8 FUN_141b45ea0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = (**(code **)(*param_2 + 0x220))(param_2), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b45f10 FUN_141b45f10 body=39 status=ok
// SIG undefined FUN_141b45f10(void)

undefined8 FUN_141b45f10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x220))(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b45f40 FUN_141b45f40 body=128 status=ok
// SIG undefined FUN_141b45f40(void)

undefined8 FUN_141b45f40(uint *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  iVar3 = FUN_1419ef5f0(uVar1);
  if (iVar3 < 3) {
    return 0;
  }
  if ((((0x1e < uVar1) || ((0x40000015U >> (uVar1 & 0x1f) & 1) == 0)) &&
      ((0x1b < uVar1 ||
       ((((0x8c51800U >> (uVar1 & 0x1f) & 1) == 0 || (iVar3 = FUN_1419ef5f0(uVar1), iVar3 < 3)) ||
        (uVar4 = RHIGetShaderLanguageVersion(uVar1), uVar4 < 2)))))) &&
     ((uVar1 - 0x14 & 0xfffffff7) != 0)) {
    return 0;
  }
  cVar2 = FUN_141ed1340(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 141b45fc0 ShouldCompilePermutation body=40 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined4 FCombineIrradianceScreenGridCS::ShouldCompilePermutation(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(iVar1);
  if ((2 < iVar2) && (iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141b45ff0 FUN_141b45ff0 body=153 status=ok
// SIG undefined FUN_141b45ff0(void)

undefined8 FUN_141b45ff0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong local_18 [2];
  
  bVar5 = false;
  pwVar3 = _guard_xfg_dispatch_icall_nop(*(wchar_t **)(param_3 + 0x10),L"LocalVertexFactory");
  if (pwVar3 == (wchar_t *)0x0) {
LAB_141b46064:
    uVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
    if (cVar1 == '\0') {
      uVar4 = (**(code **)(*param_2 + 0x388))(param_2,local_18);
      bVar5 = true;
      iVar2 = FUN_141592950(uVar4,L"M_GbxSky_Default",1,0,0xffffffff);
      if (iVar2 == -1) goto LAB_141b46064;
    }
    uVar4 = 1;
  }
  if ((bVar5) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 141b46090 FUN_141b46090 body=366 status=ok
// SIG undefined FUN_141b46090(void)

undefined8 FUN_141b46090(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  bVar2 = false;
  iVar8 = 0;
  if (0 < *(int *)(lVar4 + 0x10d0)) {
    lVar7 = 0;
    bVar2 = false;
    do {
      lVar4 = *(longlong *)(lVar7 + *(longlong *)(lVar4 + 0x10c8));
      lVar6 = *(longlong *)(lVar4 + 0x30);
      if ((((1e-05 <= *(float *)(lVar6 + 0x100) * *(float *)(lVar6 + 0x100)) ||
           (1e-05 <= *(float *)(lVar6 + 0x104) * *(float *)(lVar6 + 0x104))) ||
          (1e-05 <= *(float *)(lVar6 + 0x108) * *(float *)(lVar6 + 0x108))) &&
         (((*(uint *)(lVar6 + 0x180) >> 2 & 1) == 0 || (cVar3 = FUN_141ba17a0(lVar4), cVar3 == '\0')
          ))) {
        lVar6 = 0;
        lVar4 = (longlong)*(int *)(lVar4 + 0x58) * 0x70 + *(longlong *)(param_1 + 0x1c8);
        iVar1 = *(int *)(lVar4 + 0x18);
        if (0 < iVar1) {
          plVar5 = *(longlong **)(lVar4 + 0x10);
          do {
            if ((*(uint *)(*plVar5 + 0x560) & 0x200) != 0) {
              bVar2 = true;
              break;
            }
            lVar6 = lVar6 + 1;
            plVar5 = plVar5 + 1;
          } while (lVar6 < iVar1);
        }
      }
      lVar4 = *(longlong *)(param_1 + 8);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar8 < *(int *)(lVar4 + 0x10d0));
  }
  if (((*(byte *)(param_1 + 0x3c) & 0x40) != 0) && (bVar2)) {
    if ((DAT_1464c19f8 != 0) && (-1 < DAT_1464c19fc)) {
      iVar8 = 2;
      if (DAT_1464c19fc < 2) {
        iVar8 = DAT_1464c19fc;
      }
      if (((0 < iVar8) && (2 < *(int *)(lVar4 + 8))) &&
         (cVar3 = FUN_141b30a50((&DAT_1464c9c48)[*(int *)(lVar4 + 8)]), cVar3 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141b46200 FUN_141b46200 body=105 status=ok
// SIG undefined FUN_141b46200(void)

ulonglong FUN_141b46200(undefined8 *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(param_1 + 1);
  iVar2 = 0;
  if (0 < lVar4) {
    puVar3 = (ulonglong *)*param_1;
    do {
      in_RAX = *puVar3;
      puVar3 = puVar3 + 1;
      iVar1 = iVar2 + 1;
      if (*(char *)(in_RAX + 0x1a98) == '\0') {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (0 < iVar2) {
      in_RAX = (ulonglong)param_1[5] >> 0x20;
      if ((((uint)((ulonglong)param_1[5] >> 0x30) & 1) != 0) &&
         (in_RAX = DAT_146a177c8, *(int *)(DAT_146a177c8 + 4) == 1)) {
        return CONCAT71((int7)(DAT_146a177c8 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141b46270 FUN_141b46270 body=407 status=ok
// SIG undefined FUN_141b46270(void)

void FUN_141b46270(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = 0;
  if (*(short *)(param_1 + 0xf2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf0);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    puVar5[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_res8 = **(undefined8 **)(param_3 + 0x310);
  puVar4 = puVar5 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar5 = local_res8;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar5;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = uVar3;
  return;
}



// FUNCTION 141b46410 FUN_141b46410 body=451 status=ok
// SIG undefined FUN_141b46410(void)

void FUN_141b46410(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = 0;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb3b8;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar5;
  }
  return;
}



// FUNCTION 141b465e0 FUN_141b465e0 body=756 status=ok
// SIG undefined FUN_141b465e0(void)

void FUN_141b465e0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = 0;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  uVar4 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb3b8;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_res8 = *(undefined8 *)(*(longlong *)(param_3 + 0x13b8) + 0x10);
  puVar5 = puVar6 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar6 = local_res8;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar6;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
  return;
}



// FUNCTION 141b468e0 FUN_141b468e0 body=644 status=ok
// SIG undefined FUN_141b468e0(void)

void FUN_141b468e0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = 0;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d91e40;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = 0;
  }
  uVar4 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb3b8;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_res8 = *(undefined8 *)(*(longlong *)(param_3 + 0x13b8) + 0x10);
  puVar5 = puVar6 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar6 = local_res8;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar6;
  *(undefined4 *)(puVar7 + 4) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
  return;
}



// FUNCTION 141b46b70 UnsetParameters body=443 status=ok
// SIG undefined UnsetParameters(void)

void FComputeCulledObjectStartOffsetCS::UnsetParameters
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xc0,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 200,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xd0,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xd8,param_2,uVar2);
  local_28 = 0;
  local_20 = 0;
  FUN_141b33f50(param_1 + 0xc0,param_4,&local_28);
  lVar1 = local_28;
  iVar3 = (int)local_20;
  lVar9 = (longlong)(int)local_20;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar7 = (int)local_20 * 8;
  uVar4 = (longlong)iVar7 + (longlong)puVar8;
  if (*(ulonglong *)(param_2 + 0x38) < uVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar7 + 8);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar4 = (longlong)iVar7 + (longlong)puVar8;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar4;
  if (0 < iVar3) {
    puVar6 = puVar8;
    do {
      *puVar6 = *(undefined8 *)((lVar1 - (longlong)puVar8) + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar5 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar5 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e60;
  *(int *)(puVar5 + 2) = iVar3;
  puVar5[3] = puVar8;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  puVar5[5] = 0;
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 141b46d30 FUN_141b46d30 body=417 status=ok
// SIG undefined FUN_141b46d30(void)

void FUN_141b46d30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xd0,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xd8,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xe0,param_2,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>
            (param_1 + 0xc0,param_2,*(undefined8 *)(lVar1 + 0x60));
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 200,param_2,*(undefined8 *)(lVar1 + 0x60))
  ;
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar6 = uVar3;
  puVar6[1] = uVar2;
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  puVar5[3] = puVar6;
  *puVar5 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar5 + 2) = 2;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 3;
  puVar5[5] = 0;
  return;
}



// FUNCTION 141b46ee0 FUN_141b46ee0 body=467 status=ok
// SIG undefined FUN_141b46ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b46ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xc0,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 200,param_2,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xe4,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xec,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xf4,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xfc,param_2,uVar2);
  local_40 = DAT_146a171c0;
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_38 = DAT_146a171e8;
  local_30 = DAT_146a17210;
  puVar3 = puVar5 + 4;
  local_48 = DAT_146a17170;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *puVar5 = local_48;
  puVar5[1] = local_40;
  puVar5[2] = local_38;
  puVar5[3] = local_30;
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar4 + 2) = 4;
  puVar4[3] = puVar5;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 3;
  puVar4[5] = 0;
  return;
}



// FUNCTION 141b470c0 FUN_141b470c0 body=528 status=ok
// SIG undefined FUN_141b470c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b470c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xc0,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 200,param_2,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xe4,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xec,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xf4,param_2,uVar2);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0xfc,param_2,uVar2);
  local_50 = DAT_146a16450;
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_48 = DAT_146a16478;
  local_40 = DAT_146a164a0;
  local_58 = DAT_146a16400;
  local_38 = *(undefined8 *)(*(longlong *)(param_3 + 0x15f8) + 0x38);
  local_30 = *(undefined8 *)(*(longlong *)(param_3 + 0x15f8) + 0x10);
  puVar3 = puVar5 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *puVar5 = local_58;
  puVar5[1] = local_50;
  puVar5[2] = local_48;
  puVar5[3] = local_40;
  puVar5[4] = local_38;
  puVar5[5] = local_30;
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar4 + 2) = 6;
  puVar4[3] = puVar5;
  *(undefined4 *)(puVar4 + 4) = 2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 3;
  puVar4[5] = 0;
  return;
}



// FUNCTION 141b472d0 FUN_141b472d0 body=5620 status=ok
// SIG undefined FUN_141b472d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b472d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  float fVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  void *pvVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  void *pvVar24;
  uint *puVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined *_Src;
  undefined1 auVar28 [16];
  longlong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  int local_res20 [2];
  undefined8 in_stack_fffffffffffffe98;
  undefined8 uVar29;
  float *in_stack_fffffffffffffea0;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 uVar30;
  int local_128;
  undefined *local_120;
  ulonglong local_118;
  int local_110;
  int local_10c;
  int local_108 [2];
  void *local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined *local_e8;
  undefined *local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  uint uStack_b8;
  int iStack_b4;
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  int local_9c;
  void *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong uStack_78;
  uint *puStack_70;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  plVar17 = *(longlong **)(param_1 + 8);
  plVar1 = plVar17 + 0x2be;
  if ((DAT_146532078 != 0) &&
     ((((0 < (int)plVar17[0x2e1] || (0 < (int)plVar17[0x2e3] - *(int *)((longlong)plVar17 + 0x1744))
        ) || (0 < (int)plVar17[0x2ed])) || ((int)plVar17[0x2f2] != DAT_146532138)))) {
    puVar14 = (undefined8 *)0x0;
    local_res8 = param_1;
    local_res10 = param_2;
    local_d0 = plVar17;
    if (plVar17[0x2bf] == 0) {
      puVar9 = (undefined8 *)operator_new(0x58);
      puVar19 = puVar14;
      if (puVar9 != (undefined8 *)0x0) {
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined4 *)(puVar9 + 4) = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        *(undefined4 *)(puVar9 + 9) = 0;
        puVar9[10] = 0;
        *(undefined4 *)puVar9 = 0;
        puVar19 = puVar9;
      }
      plVar17[0x2bf] = (longlong)puVar19;
    }
    if (plVar17[0x2c4] == 0) {
      puVar9 = (undefined8 *)operator_new(0x58);
      puVar19 = puVar14;
      if (puVar9 != (undefined8 *)0x0) {
        _guard_xfg_dispatch_icall_nop(puVar9,0,0x58);
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined4 *)(puVar9 + 4) = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        *(undefined4 *)(puVar9 + 9) = 0;
        puVar9[10] = 0;
        puVar19 = puVar9;
      }
      plVar17[0x2c4] = (longlong)puVar19;
    }
    if (plVar17[0x2d2] == 0) {
      puVar9 = (undefined8 *)operator_new(0x30);
      puVar19 = puVar14;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        puVar9[4] = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *(undefined4 *)(puVar9 + 4) = 0;
        puVar9[5] = 0;
        puVar19 = puVar9;
      }
      plVar17[0x2d2] = (longlong)puVar19;
    }
    if (((int)plVar17[0x2f2] != DAT_146532138) &&
       (*(int *)(plVar17 + 0x2f2) = DAT_146532138, puVar19 = puVar14, 0 < (int)plVar17[0x2c1])) {
      do {
        iVar18 = 0;
        lVar12 = plVar17[0x2c0];
        if (*(int *)((longlong)puVar14 + lVar12 + 0x18) == 0) {
          if (0 < (int)plVar17[0x2ed]) {
            plVar22 = (longlong *)plVar17[0x2ec];
            do {
              if (*plVar22 == *(longlong *)((longlong)puVar14 + lVar12 + 0x10)) goto LAB_141b4751b;
              iVar18 = iVar18 + 1;
              plVar22 = plVar22 + 5;
            } while (iVar18 < (int)plVar17[0x2ed]);
          }
          plVar13 = (longlong *)plVar17[0x2e0];
          plVar22 = plVar13 + (int)plVar17[0x2e1];
          if (plVar13 != plVar22) {
            do {
              if (*plVar13 == *(longlong *)((longlong)puVar14 + lVar12 + 0x10)) goto LAB_141b4751b;
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar22);
          }
          piVar10 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                     (plVar17 + 0x2e2,&local_res18);
          if (*piVar10 == -1) {
            FUN_141b1d480(plVar17 + 0x2e2,local_res20);
          }
        }
LAB_141b4751b:
        uVar27 = (int)puVar19 + 1;
        puVar14 = puVar14 + 4;
        param_1 = local_res8;
        puVar19 = (undefined8 *)(ulonglong)uVar27;
      } while ((int)uVar27 < (int)plVar17[0x2c1]);
    }
    FUN_141b488d0(param_2,*(undefined8 *)(param_1 + 8));
    local_e8 = (undefined *)0x0;
    local_128 = 0;
    local_120 = (undefined *)0x0;
    local_118 = 0;
    local_100 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = 0;
    if (((DAT_1464c1a48 == 0) || (DAT_146a153b0 == 0)) ||
       ((iVar18 = *(int *)(*(longlong *)(param_1 + 8) + 8), iVar18 < 3 ||
        ((&DAT_1464c9c48)[iVar18] != 0)))) {
      local_res18 = (ulonglong)local_res18._1_7_ << 8;
    }
    else {
      local_res18 = CONCAT71(local_res18._1_7_,1);
    }
    if ((0 < (int)plVar17[0x2e1]) ||
       (_Src = (undefined *)0x0, 0 < (int)plVar17[0x2e3] - *(int *)((longlong)plVar17 + 0x1744))) {
      uVar26 = 0;
      iVar18 = ((int)plVar17[0x2e3] - *(int *)((longlong)plVar17 + 0x1744)) + (int)plVar17[0x2e1];
      local_e0 = (undefined *)0x0;
      local_d8 = 0;
      if (DAT_146a15538 * iVar18 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_98);
      }
      local_100 = local_98;
      if (iVar18 != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_120,iVar18);
        local_e8 = local_120;
        local_128 = (int)local_118;
      }
      local_res20[0] = (int)*plVar1;
      iVar18 = (int)plVar17[0x2c5];
      local_88 = CONCAT44(local_88._4_4_,(int)plVar17[0x2d3]);
      local_f0 = 1.0 / (float)*(int *)(DAT_146532078 + 0x68);
      _local_f8 = CONCAT44(1.0 / (float)*(int *)(DAT_146532078 + 100),
                           1.0 / (float)*(int *)(DAT_146532078 + 0x60));
      uVar7 = 0;
      local_108[0] = iVar18;
      if ((char)local_res18 != '\0') {
        uVar20 = uVar26;
        if (0 < (int)plVar17[0x2e1]) {
          do {
            lVar12 = *(longlong *)(uVar20 + plVar17[0x2e0]);
            local_10c = 0;
            local_a0 = 0;
            (**(code **)(**(longlong **)(lVar12 + 8) + 0x98))
                      (*(longlong **)(lVar12 + 8),&local_10c,&local_a0);
            ComputeNumSurfels();
            if ((0 < local_9c) && (0 < local_10c)) {
              uVar29 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),1);
              FSurfelBufferAllocator::AddPrimitive(plVar17 + 0x2c5,lVar12,local_110,local_9c,uVar29)
              ;
              in_stack_fffffffffffffe98 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),local_10c);
              FSurfelBufferAllocator::AddPrimitive
                        (plVar17 + 0x2d3,lVar12,local_110,local_9c,in_stack_fffffffffffffe98);
            }
            uVar27 = (int)uVar26 + 1;
            uVar26 = (ulonglong)uVar27;
            uVar20 = uVar20 + 8;
          } while ((int)uVar27 < (int)plVar17[0x2e1]);
          iVar18 = (int)local_d0[0x2c5];
          param_2 = local_res10;
        }
        plVar22 = (longlong *)0x0;
        iVar2 = *(int *)plVar17[0x2c4];
        if (iVar2 < iVar18) {
          if (iVar2 < 1) {
            *(int *)plVar17[0x2c4] = (int)(iVar18 * 5 + (iVar18 * 5 >> 0x1f & 3U)) >> 2;
            FUN_141b35100(plVar17[0x2c4]);
          }
          else {
            plVar11 = (longlong *)operator_new(0x58);
            uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
            plVar13 = plVar22;
            if (plVar11 != (longlong *)0x0) {
              _guard_xfg_dispatch_icall_nop(plVar11,0,0x58);
              plVar11[2] = 0;
              plVar11[3] = 0;
              *(undefined4 *)(plVar11 + 4) = 0;
              plVar11[5] = 0;
              plVar11[6] = 0;
              plVar11[7] = 0;
              plVar11[8] = 0;
              *(undefined4 *)(plVar11 + 9) = 0;
              plVar11[10] = 0;
              plVar13 = plVar11;
            }
            iVar18 = (int)plVar17[0x2c5] * 5;
            *(int *)plVar13 = (int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2;
            FUN_141b35100(plVar13);
            uStack_c8 = (ulonglong)uStack_c8._4_4_ << 0x20;
            local_d0 = (longlong *)&DAT_146a16cc0;
            lVar12 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(*(longlong *)(local_res8 + 8) + 8)]);
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar12 + 0x38,&local_110);
            plVar11 = plVar22;
            if (local_110 != -1) {
              plVar11 = (longlong *)((longlong)local_110 * 0x20 + *(longlong *)(lVar12 + 0x38));
            }
            plVar21 = plVar11 + 2;
            if (plVar11 == (longlong *)0x0) {
              plVar21 = plVar22;
            }
            lVar12 = *plVar21;
            lVar16 = *(longlong *)(lVar12 + 0x48);
            if (*(char *)(lVar16 + 0x28) == '\0') {
              FUN_1419f3850(lVar16);
            }
            uVar29 = *(undefined8 *)(lVar16 + 0x60);
            FRHIComputeShader::UpdateStats(uVar29);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar19 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
              puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar19 + 3;
            }
            iVar18 = local_108[0];
            *(undefined8 **)(param_2 + 0x30) = puVar14;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            in_stack_fffffffffffffea0 = (float *)CONCAT44(uVar31,local_108[0]);
            **(undefined8 **)(param_2 + 8) = puVar19;
            *(undefined8 **)(param_2 + 8) = puVar19 + 1;
            puVar19[1] = 0;
            *puVar19 = &PTR_LAB_144d91e50;
            puVar19[2] = uVar29;
            plVar22 = plVar13;
            FUN_141b442b0(lVar12,param_2,plVar17[0x2c4],plVar17[0x2d2],plVar13,
                          in_stack_fffffffffffffea0);
            in_stack_fffffffffffffe98 = CONCAT44((int)((ulonglong)plVar22 >> 0x20),1);
            DispatchComputeShader(param_2,lVar12,iVar18 + 0x3fU >> 6,1,in_stack_fffffffffffffe98);
            FUN_141b46d30(lVar12,param_2,plVar13);
            lVar12 = plVar17[0x2c4];
            FUN_141ace450(lVar12 + 8);
            FUN_141ace450(lVar12 + 0x30);
            lVar12 = plVar17[0x2c4];
            if (lVar12 != 0) {
              FUN_141ace450(lVar12 + 0x30);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 0x40);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 0x38);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 0x30);
              FUN_141ace450(lVar12 + 8);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 0x18);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 0x10);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 8);
              FMemory::operator_delete(lVar12,0x58);
            }
            plVar17[0x2c4] = (longlong)plVar13;
          }
        }
        uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        iVar18 = *(int *)plVar17[0x2d2];
        if (iVar18 < (int)plVar17[0x2d3]) {
          if (iVar18 < 1) {
            iVar18 = (int)plVar17[0x2d3] * 5;
            *(int *)plVar17[0x2d2] = (int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2;
            iVar18 = *(int *)plVar17[0x2d2];
            if (0 < iVar18) {
              in_stack_fffffffffffffea0 = (float *)0x0;
              in_stack_fffffffffffffe98 = CONCAT44(uVar31,1);
              FUN_141ac25e0((int *)plVar17[0x2d2] + 2,0x10,iVar18,1,in_stack_fffffffffffffe98,0,0);
            }
          }
          else {
            plVar13 = (longlong *)operator_new(0x30);
            uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
            plVar11 = (longlong *)0x0;
            plVar22 = plVar11;
            if (plVar13 != (longlong *)0x0) {
              *plVar13 = 0;
              plVar13[4] = 0;
              plVar13[1] = 0;
              plVar13[2] = 0;
              plVar13[3] = 0;
              *(undefined4 *)(plVar13 + 4) = 0;
              plVar13[5] = 0;
              plVar22 = plVar13;
            }
            iVar18 = (int)plVar17[0x2d3] * 5;
            iVar18 = (int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2;
            *(int *)plVar22 = iVar18;
            if (0 < iVar18) {
              uVar32 = 0;
              FUN_141ac25e0(plVar22 + 1,0x10,iVar18,1,CONCAT44(uVar31,1),0,0);
            }
            local_d0 = (longlong *)&DAT_146a16e10;
            uStack_c8 = uStack_c8 & 0xffffffff00000000;
            lVar12 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(*(longlong *)(local_res8 + 8) + 8)]);
            TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
            ::FindId(lVar12 + 0x38,local_108,&local_d0);
            plVar13 = plVar11;
            if (local_108[0] != -1) {
              plVar13 = (longlong *)((longlong)local_108[0] * 0x20 + *(longlong *)(lVar12 + 0x38));
            }
            plVar21 = plVar13 + 2;
            if (plVar13 == (longlong *)0x0) {
              plVar21 = plVar11;
            }
            lVar12 = *plVar21;
            lVar16 = *(longlong *)(lVar12 + 0x48);
            if (*(char *)(lVar16 + 0x28) == '\0') {
              FUN_1419f3850(lVar16);
            }
            uVar29 = *(undefined8 *)(lVar16 + 0x60);
            FRHIComputeShader::UpdateStats(uVar29);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar19 + 3;
            if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
              puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar19 + 3;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar14;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar19;
            *(undefined8 **)(param_2 + 8) = puVar19 + 1;
            puVar19[2] = uVar29;
            iVar18 = (int)local_88;
            puVar19[1] = 0;
            *puVar19 = &PTR_LAB_144d91e50;
            in_stack_fffffffffffffea0 = (float *)CONCAT44(uVar32,(int)local_88);
            plVar13 = plVar22;
            FUN_141b44480(lVar12,param_2,plVar17[0x2c4],plVar17[0x2d2],plVar22,
                          in_stack_fffffffffffffea0);
            in_stack_fffffffffffffe98 = CONCAT44((int)((ulonglong)plVar13 >> 0x20),1);
            DispatchComputeShader(param_2,lVar12,iVar18 + 0x3fU >> 6,1,in_stack_fffffffffffffe98);
            lVar16 = *(longlong *)(lVar12 + 0x48);
            if (*(char *)(lVar16 + 0x28) == '\0') {
              FUN_1419f3850(lVar16);
            }
            uVar29 = *(undefined8 *)(lVar16 + 0x60);
            FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar12 + 200,param_2,uVar29);
            FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar12 + 0xd0,param_2,uVar29);
            FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar12 + 0xd8,param_2,uVar29);
            if (*(char *)(*(longlong *)(lVar12 + 0x48) + 0x28) == '\0') {
              FUN_1419f3850(*(longlong *)(lVar12 + 0x48));
            }
            FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar12 + 0xc0,param_2);
            local_d0 = (longlong *)plVar22[2];
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar19 + 1;
            if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
              puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar19 + 1;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar14;
            *puVar19 = local_d0;
            puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar9 + 6;
            if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
              puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar9 + 6;
            }
            *(undefined8 **)(param_2 + 0x30) = puVar14;
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
            **(undefined8 **)(param_2 + 8) = puVar9;
            *(undefined8 **)(param_2 + 8) = puVar9 + 1;
            puVar9[1] = 0;
            *puVar9 = &PTR_LAB_144d91e60;
            *(undefined4 *)(puVar9 + 2) = 1;
            puVar9[3] = puVar19;
            *(undefined4 *)(puVar9 + 4) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
            puVar9[5] = 0;
            FUN_141ace450(plVar17[0x2d2] + 8);
            lVar12 = plVar17[0x2d2];
            if (lVar12 != 0) {
              FUN_141ace450(lVar12 + 8);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 0x18);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 0x10);
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar12 + 8);
              FMemory::operator_delete(lVar12,0x30);
            }
            plVar17[0x2d2] = (longlong)plVar22;
          }
        }
        uVar7 = (char)local_res18;
      }
      fVar6 = local_f0;
      uVar29 = _local_f8;
      iVar18 = 0;
      if (0 < (int)plVar17[0x2e1]) {
        lVar12 = 0;
        do {
          in_stack_fffffffffffffea0 = &local_f8;
          in_stack_fffffffffffffe98 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),local_res20[0]);
          _local_f8 = uVar29;
          local_f0 = fVar6;
          FUN_141b36a30(CONCAT71((int7)((ulonglong)&local_e0 >> 8),1),param_2,local_res8,
                        *(undefined8 *)(lVar12 + plVar17[0x2e0]),in_stack_fffffffffffffe98,
                        in_stack_fffffffffffffea0,uVar7,1,&local_e0,&local_120,&local_98);
          lVar12 = lVar12 + 8;
          iVar18 = iVar18 + 1;
          uVar7 = (char)local_res18;
        } while (iVar18 < (int)plVar17[0x2e1]);
        local_e8 = local_120;
        local_100 = local_98;
        local_128 = (int)local_118;
      }
      iVar2 = local_res20[0];
      uVar26 = local_res18;
      lVar12 = local_res8;
      uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
      local_a8 = plVar17 + 0x2e2;
      iVar18 = (int)plVar17[0x2e7];
      puStack_70 = (uint *)(plVar17 + 0x2e4);
      local_d0 = (longlong *)0x100000000;
      local_c0._4_4_ = 0;
      uStack_b8 = 0;
      if (iVar18 != 0) {
        puVar25 = (uint *)plVar17[0x2e6];
        if ((uint *)plVar17[0x2e6] == (uint *)0x0) {
          puVar25 = puStack_70;
        }
        uVar27 = *puVar25;
        uStack_b8 = 0;
        iVar8 = 0;
        while (uVar27 == 0) {
          uStack_b8 = uStack_b8 + 0x20;
          uVar20 = (ulonglong)local_d0 >> 0x20;
          local_d0 = (longlong *)CONCAT44((int)uVar20,iVar8 + 1);
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141b47e9f;
          uVar27 = puVar25[(longlong)iVar8 + 1];
          iVar8 = iVar8 + 1;
        }
        uVar27 = -uVar27 & uVar27;
        iVar8 = 0x1f;
        if (uVar27 != 0) {
          for (; uVar27 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        local_d0 = (longlong *)CONCAT44(uVar27,SUB84(local_d0,0));
        if (uVar27 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        local_c0._4_4_ = (uStack_b8 - iVar8) + 0x1f;
        if (iVar18 < local_c0._4_4_) {
LAB_141b47e9f:
          local_c0._4_4_ = iVar18;
        }
      }
      uStack_68 = 0xffffffff;
      iStack_64 = local_c0._4_4_;
      iStack_60 = uStack_b8;
      iStack_5c = iStack_b4;
      uStack_78 = (ulonglong)local_d0;
      uStack_c8 = (ulonglong)local_d0;
      auVar5._4_8_ = local_d0;
      auVar5._0_4_ = local_c0._4_4_;
      auVar28._0_8_ = auVar5._0_8_ << 0x20;
      auVar28._8_4_ = uStack_b8;
      auVar28._12_4_ = iStack_b4;
      local_b0 = auVar28._8_8_;
      uStack_b8 = 0xffffffff;
      iStack_b4 = local_c0._4_4_;
      bVar4 = local_c0._4_4_ < iVar18;
      local_d0 = local_a8;
      local_80 = local_a8;
      local_c0 = puStack_70;
      if (bVar4) {
        do {
          in_stack_fffffffffffffea0 = &local_f8;
          in_stack_fffffffffffffe98 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),iVar2);
          _local_f8 = uVar29;
          local_f0 = fVar6;
          FUN_141b36a30(0,param_2,lVar12,*(undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x10),
                        in_stack_fffffffffffffe98,in_stack_fffffffffffffea0,uVar26 & 0xff,1,
                        &local_e0,&local_120,&local_98);
          uStack_b8 = uStack_b8 & ~uStack_c8._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c8);
          uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        } while (iStack_b4 < (int)local_c0[6]);
        local_e8 = local_120;
        local_100 = local_98;
        local_128 = (int)local_118;
      }
      _Src = local_e8;
      pvVar24 = local_100;
      plVar22 = (longlong *)0x0;
      *(undefined4 *)(plVar17 + 0x2e1) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar17 + 0x170c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar17 + 0x2e0,0);
      }
      *(undefined4 *)(plVar17 + 0x2e3) = 0;
      if (*(int *)((longlong)plVar17 + 0x171c) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar17 + 0x2e2,0);
      }
      *(undefined4 *)(plVar17 + 0x2e8) = 0xffffffff;
      *(undefined4 *)((longlong)plVar17 + 0x1744) = 0;
      *(undefined4 *)(plVar17 + 0x2e7) = 0;
      if (*(int *)((longlong)plVar17 + 0x173c) != 0) {
        *(undefined4 *)((longlong)plVar17 + 0x173c) = 0;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar17 + 0x2e4,0);
      }
      if (0 < (int)*(uint *)(plVar17 + 0x2eb)) {
        uVar26 = (ulonglong)*(uint *)(plVar17 + 0x2eb);
        plVar13 = plVar22;
        do {
          uVar20 = (longlong)(int)plVar17[0x2eb] - 1U & (ulonglong)plVar13;
          plVar11 = (longlong *)plVar17[0x2ea];
          if ((longlong *)plVar17[0x2ea] == (longlong *)0x0) {
            plVar11 = plVar17 + 0x2e9;
          }
          plVar13 = (longlong *)((longlong)plVar13 + 1);
          *(undefined4 *)((longlong)plVar11 + uVar20 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      iVar18 = *(int *)plVar17[0x2bf];
      if (iVar18 < (int)*plVar1) {
        if (iVar18 < 1) {
          iVar18 = (int)*plVar1 * 5;
          *(int *)plVar17[0x2bf] = (int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2;
          FUN_141b34e20(plVar17[0x2bf]);
        }
        else {
          plVar11 = (longlong *)operator_new(0x58);
          plVar13 = plVar22;
          if (plVar11 != (longlong *)0x0) {
            plVar11[1] = 0;
            plVar11[2] = 0;
            plVar11[3] = 0;
            *(undefined4 *)(plVar11 + 4) = 0;
            plVar11[5] = 0;
            plVar11[6] = 0;
            plVar11[7] = 0;
            plVar11[8] = 0;
            *(undefined4 *)(plVar11 + 9) = 0;
            plVar11[10] = 0;
            *(undefined4 *)plVar11 = 0;
            plVar13 = plVar11;
          }
          iVar18 = (int)*plVar1 * 5;
          *(int *)plVar13 = (int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2;
          FUN_141b34e20(plVar13);
          local_118 = local_118 & 0xffffffff00000000;
          local_120 = &DAT_146a16b70;
          lVar12 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(*(longlong *)(local_res8 + 8) + 8)]);
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar12 + 0x38,&local_res18);
          plVar11 = plVar22;
          if ((int)local_res18 != -1) {
            plVar11 = (longlong *)((longlong)(int)local_res18 * 0x20 + *(longlong *)(lVar12 + 0x38))
            ;
          }
          plVar21 = plVar11 + 2;
          if (plVar11 == (longlong *)0x0) {
            plVar21 = plVar22;
          }
          lVar12 = *plVar21;
          lVar16 = *(longlong *)(lVar12 + 0x48);
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          uVar29 = *(undefined8 *)(lVar16 + 0x60);
          FRHIComputeShader::UpdateStats(uVar29);
          puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar19 + 3;
          if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar19 + 3;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar14;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar19;
          *(undefined8 **)(param_2 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_144d91e50;
          puVar19[2] = uVar29;
          lVar16 = *(longlong *)(lVar12 + 0x48);
          local_res18 = plVar17[0x2bf];
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          plVar21 = *(longlong **)(lVar16 + 0x60);
          local_118 = plVar13[7];
          local_120 = (undefined *)plVar13[2];
          plVar23 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar11 = plVar23 + 2;
          local_d0 = plVar21;
          if (*(longlong **)(param_2 + 0x38) < plVar11) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            plVar23 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            plVar11 = plVar23 + 2;
          }
          *(longlong **)(param_2 + 0x30) = plVar11;
          *plVar23 = (longlong)local_120;
          plVar23[1] = local_118;
          puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar19 + 6;
          if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar19 + 6;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar14;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar19;
          *(undefined8 **)(param_2 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          puVar19[5] = 0;
          *puVar19 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar19 + 2) = 2;
          puVar19[3] = plVar23;
          *(undefined4 *)(puVar19 + 4) = 2;
          *(undefined4 *)((longlong)puVar19 + 0x24) = 3;
          FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
                    (lVar12 + 0xc0,param_2,plVar21,plVar13 + 1);
          local_88 = lVar12 + 200;
          FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
                    (local_88,param_2,plVar21,plVar13 + 6);
          iVar18 = local_res20[0];
          in_stack_fffffffffffffea0 =
               (float *)((ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
          uVar29 = CONCAT44(uVar31,local_res20[0]);
          FUN_141aa5410(lVar12 + 0xd0,param_2,&local_d0,local_res18,uVar29,in_stack_fffffffffffffea0
                       );
          uVar29 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),1);
          DispatchComputeShader(param_2,lVar12,iVar18 + 0x3fU >> 6,1,uVar29);
          uVar31 = (undefined4)((ulonglong)uVar29 >> 0x20);
          lVar16 = *(longlong *)(lVar12 + 0x48);
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          uVar29 = *(undefined8 *)(lVar16 + 0x60);
          FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar12 + 0xd0,param_2,uVar29);
          FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar12 + 0xd8,param_2,uVar29);
          lVar16 = *(longlong *)(lVar12 + 0x48);
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          FRWShaderParameter::UnsetUAV<FRHICommandList>
                    (lVar12 + 0xc0,param_2,*(undefined8 *)(lVar16 + 0x60));
          lVar12 = *(longlong *)(lVar12 + 0x48);
          if (*(char *)(lVar12 + 0x28) == '\0') {
            FUN_1419f3850(lVar12);
          }
          FRWShaderParameter::UnsetUAV<FRHICommandList>
                    (local_88,param_2,*(undefined8 *)(lVar12 + 0x60));
          local_118 = plVar13[7];
          local_120 = (undefined *)plVar13[2];
          plVar21 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar11 = plVar21 + 2;
          if (*(longlong **)(param_2 + 0x38) < plVar11) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
            plVar21 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            plVar11 = plVar21 + 2;
          }
          *(longlong **)(param_2 + 0x30) = plVar11;
          *plVar21 = (longlong)local_120;
          plVar21[1] = local_118;
          puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar19 + 6;
          if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
            puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar19 + 6;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar14;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar19;
          *(undefined8 **)(param_2 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_144d91e60;
          *(undefined4 *)(puVar19 + 2) = 2;
          puVar19[3] = plVar21;
          *(undefined4 *)(puVar19 + 4) = 0;
          *(undefined4 *)((longlong)puVar19 + 0x24) = 3;
          puVar19[5] = 0;
          lVar12 = plVar17[0x2bf];
          FUN_141ace450(lVar12 + 8);
          FUN_141ace450(lVar12 + 0x30);
          if (plVar17[0x2bf] != 0) {
            FUN_141b29230(plVar17[0x2bf],1);
          }
          plVar17[0x2bf] = (longlong)plVar13;
          pvVar24 = local_100;
          _Src = local_e8;
        }
      }
      uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
      if (local_e0 != (undefined *)0x0) {
        FMemory::Free();
      }
      if (0 < local_128) {
        if ((DAT_1464c1b38 < local_128) ||
           ((1000 < DAT_1464c1b38 && (local_128 * 2 < DAT_1464c1b38)))) {
          iVar18 = (int)((local_128 * 5 >> 0x1f & 3U) + local_128 * 5) >> 2;
          DAT_1464c1b38 = iVar18;
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1b40,0);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1b48,0);
          FUN_141b34cc0(&DAT_1464c1b30);
          _DAT_1464c1ae8 = iVar18;
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1af0,0);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1af8,0);
          FUN_141b34cc0(&DAT_1464c1ae0);
        }
        uVar30 = CONCAT44(uVar32,1);
        uVar29 = CONCAT44(uVar31,*(undefined4 *)(DAT_1464c1b40 + 0x18));
        pvVar15 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                    (DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1b40,0,uVar29,uVar30);
        uVar31 = (undefined4)((ulonglong)uVar29 >> 0x20);
        uVar32 = (undefined4)((ulonglong)uVar30 >> 0x20);
        _guard_xfg_dispatch_icall_nop(pvVar15,_Src,(ulonglong)(uint)(local_128 * 4));
        (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1b40);
        pvVar15 = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                    (DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1af0,0,
                                     CONCAT44(uVar31,*(undefined4 *)(DAT_1464c1af0 + 0x18)),
                                     CONCAT44(uVar32,1));
        _guard_xfg_dispatch_icall_nop(pvVar15,pvVar24,(ulonglong)(uint)((int)local_90 << 4));
        (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1af0);
        lVar12 = local_res8;
        local_d8 = local_d8 & 0xffffffff00000000;
        local_e0 = &DAT_146a16a20;
        lVar16 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(*(longlong *)(local_res8 + 8) + 8)]);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar16 + 0x38,&local_res8);
        plVar17 = plVar22;
        if ((int)local_res8 != -1) {
          plVar17 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar16 + 0x38));
        }
        plVar13 = plVar17 + 2;
        if (plVar17 == (longlong *)0x0) {
          plVar13 = plVar22;
        }
        lVar16 = *plVar13;
        lVar3 = *(longlong *)(lVar16 + 0x48);
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1419f3850(lVar3);
        }
        uVar29 = *(undefined8 *)(lVar3 + 0x60);
        FRHIComputeShader::UpdateStats(uVar29);
        puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar19 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
          puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar19 + 3;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar14;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar19;
        *(undefined8 **)(param_2 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_144d91e50;
        puVar19[2] = uVar29;
        FUN_141b45600(lVar16,param_2,*(undefined8 *)(lVar12 + 8),local_128,DAT_1464c1b48,
                      DAT_1464c1af8);
        DispatchComputeShader(param_2,lVar16,local_128 + 0x3fU >> 6,1,1);
        lVar3 = *(longlong *)(lVar16 + 0x48);
        lVar12 = *(longlong *)(lVar12 + 8);
        if (*(char *)(lVar3 + 0x28) == '\0') {
          FUN_1419f3850(lVar3);
        }
        local_res8 = *(longlong *)(lVar3 + 0x60);
        FUN_141b25290(lVar16 + 0xce,param_2,&local_res8,*(undefined8 *)(lVar12 + 0x15f8),1);
        lVar12 = *(longlong *)(lVar12 + 0x15f8);
        plVar22 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        local_e0 = *(undefined **)(lVar12 + 0x10);
        local_d8 = *(ulonglong *)(lVar12 + 0x38);
        plVar17 = plVar22 + 2;
        if (*(longlong **)(param_2 + 0x38) < plVar17) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          plVar22 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar17 = plVar22 + 2;
        }
        *(longlong **)(param_2 + 0x30) = plVar17;
        *plVar22 = (longlong)local_e0;
        plVar22[1] = local_d8;
        puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar14 = puVar19 + 6;
        if (*(undefined8 **)(param_2 + 0x38) < puVar14) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar19 + 6;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar14;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar19;
        *(undefined8 **)(param_2 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_144d91e60;
        *(undefined4 *)(puVar19 + 2) = 2;
        puVar19[3] = plVar22;
        *(undefined4 *)(puVar19 + 4) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x24) = 3;
        puVar19[5] = 0;
        _Src = local_e8;
      }
    }
    pvVar24 = local_100;
    if (DAT_146a15380 != '\0') {
      AK::MemoryMgr::StartProfileThreadUsage((long)plVar1);
    }
    if (pvVar24 != (void *)0x0) {
      FMemory::Free(pvVar24);
    }
    if (_Src != (undefined *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 141b488d0 FUN_141b488d0 body=2514 status=ok
// SIG undefined FUN_141b488d0(void)

void FUN_141b488d0(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *_Dst;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar20;
  int iVar21;
  undefined *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  int *piVar25;
  int iVar26;
  undefined4 *puVar27;
  int *piVar28;
  int *piVar29;
  void *pvVar30;
  ulonglong local_res10;
  LARGE_INTEGER local_res18;
  int local_res20;
  undefined8 uVar31;
  uint local_c8;
  int local_c4;
  int local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  int local_78;
  int local_74;
  int *local_70;
  uint local_68;
  int local_64;
  longlong local_60;
  undefined *local_58;
  undefined4 *local_50;
  undefined4 *puVar19;
  
  piVar14 = (int *)0x0;
  local_a0 = (void *)0x0;
  local_80 = (void *)0x0;
  local_res20 = 0;
  local_c4 = 0;
  local_74 = 0;
  local_50 = (undefined4 *)0x0;
  if (0 < *(int *)(param_2 + 0x1768)) {
    local_90 = (int *)0x0;
    local_70 = (int *)0x0;
    local_c0 = 0;
    local_64 = 0;
    local_c8 = 0;
    piVar29 = piVar14;
    piVar25 = piVar14;
    piVar28 = piVar14;
    local_res10 = param_2;
    do {
      uVar31 = *(undefined8 *)((longlong)piVar14 + *(longlong *)(param_2 + 0x1760));
      FSurfelBufferAllocator::RemovePrimitive(param_2 + 0x1628,uVar31);
      FSurfelBufferAllocator::RemovePrimitive(param_2 + 0x1698,uVar31);
      uVar8 = 0;
      local_res18.s.LowPart = 0;
      local_60 = *(longlong *)(param_2 + 0x1760);
      puVar22 = (undefined *)(local_60 + 0x10 + (longlong)piVar14);
      uVar24 = uVar8;
      uVar16 = (uint)piVar28;
      local_58 = puVar22;
      if (0 < *(int *)((longlong)piVar14 + local_60 + 0x20)) {
        do {
          puVar9 = *(undefined **)((longlong)piVar14 + local_60 + 0x18);
          if (puVar9 == (undefined *)0x0) {
            puVar9 = puVar22;
          }
          iVar21 = *(int *)(puVar9 + uVar24);
          uVar12 = (uint)uVar8;
          if (-1 < iVar21) {
            puVar27 = (undefined4 *)((longlong)iVar21 * 0x20 + *(longlong *)(param_2 + 0x1600));
            lVar17 = 0x180;
            if (*(char *)((longlong)piVar14 + *(longlong *)(param_2 + 0x1760) + 8) != '\0') {
              lVar17 = 400;
            }
            plVar18 = (longlong *)(lVar17 + param_2 + 0x15f0);
            iVar15 = (int)plVar18[1];
            *(int *)(plVar18 + 1) = iVar15 + 1;
            if (*(int *)((longlong)plVar18 + 0xc) < iVar15 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar15);
            }
            uVar12 = puVar27[1];
            uVar1 = puVar27[2];
            uVar2 = puVar27[3];
            iVar26 = (int)piVar29;
            puVar19 = (undefined4 *)(*plVar18 + (longlong)iVar15 * 0x10);
            *puVar19 = *puVar27;
            puVar19[1] = uVar12;
            puVar19[2] = uVar1;
            puVar19[3] = uVar2;
            local_68 = iVar26 + 1;
            if (local_c0 < (int)local_68) {
              TArray<int,TMemStackAllocator<0>_>::ResizeGrow(&local_70,piVar29);
              local_c0 = local_64;
              local_90 = local_70;
            }
            piVar29 = (int *)(ulonglong)local_68;
            local_90[iVar26] = iVar21;
            puVar22 = local_58;
            piVar25 = local_90;
            uVar12 = local_res18.s.LowPart;
          }
          local_res18.s.LowPart = uVar12 + 1;
          uVar8 = (ulonglong)local_res18.s.LowPart;
          uVar24 = uVar24 + 4;
          uVar16 = local_c8;
        } while ((int)local_res18.s.LowPart < *(int *)((longlong)piVar14 + local_60 + 0x20));
      }
      local_c8 = uVar16 + 1;
      piVar28 = (int *)(ulonglong)local_c8;
      piVar14 = piVar14 + 10;
    } while ((int)local_c8 < *(int *)(param_2 + 0x1768));
    iVar21 = *(int *)(param_2 + 0x176c);
    lVar17 = *(longlong *)(param_2 + 0x1760);
    iVar15 = *(int *)(param_2 + 0x1768);
    if (iVar21 < 0) {
      if (iVar15 != 0) {
        plVar18 = (longlong *)(lVar17 + 0x18);
        do {
          if (*plVar18 != 0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 5;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        iVar21 = *(int *)(param_2 + 0x176c);
      }
      *(undefined4 *)(param_2 + 0x1768) = 0;
      if (iVar21 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  ((longlong *)(param_2 + 0x1760),0);
      }
    }
    else {
      if (iVar15 != 0) {
        plVar18 = (longlong *)(lVar17 + 0x18);
        do {
          if (*plVar18 != 0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 5;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      *(undefined4 *)(param_2 + 0x1768) = 0;
    }
    puVar27 = (undefined4 *)0x0;
    iVar21 = (int)piVar29;
    if (0 < iVar21) {
      AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                (piVar25,(longlong)iVar21,local_res10 & 0xff,&local_res18);
      uVar24 = local_res10;
      iVar15 = piVar25[iVar21 + -1];
      iVar26 = *(int *)(local_res10 + 0x15f0) - iVar21;
      local_98 = iVar15;
      if (iVar15 < iVar26) {
        uVar8 = local_res10;
        if (0 < iVar21) {
          plVar18 = (longlong *)(local_res10 + 0x1600);
          uStack_88 = 0;
          do {
            iVar13 = local_res20;
            iVar21 = *(int *)(local_res10 + 0x15f0);
            lVar17 = (longlong)local_res20;
            iVar4 = iVar21 + -1;
            local_res20 = local_res20 + 1;
            *(int *)(local_res10 + 0x15f0) = iVar4;
            iVar15 = *piVar25;
            local_90 = (int *)CONCAT44(iVar4,iVar15);
            local_78 = local_res20;
            if (local_c4 < local_res20) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_80,iVar13);
              local_a0 = local_80;
              local_c4 = local_74;
            }
            lVar23 = (longlong)iVar21 * 0x20;
            puVar27 = (undefined4 *)((longlong)local_a0 + lVar17 * 0x10);
            *puVar27 = (undefined4)local_90;
            puVar27[1] = local_90._4_4_;
            puVar27[2] = (undefined4)uStack_88;
            puVar27[3] = uStack_88._4_4_;
            lVar17 = *(longlong *)(lVar23 + -0x10 + *plVar18);
            lVar6 = *(longlong *)(lVar17 + 0x78);
            if (lVar6 == 0) {
              lVar6 = lVar17 + 0x70;
            }
            *(int *)(lVar6 + (longlong)*(int *)(lVar23 + -8 + *plVar18) * 4) = iVar15;
            iVar21 = *(int *)(uVar24 + 0x1608);
            iVar13 = (iVar21 - iVar15) + -1;
            if (0 < iVar13) {
              iVar13 = 1;
            }
            local_res20 = local_78;
            if (iVar13 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar15 * 0x20 + *plVar18),
                         (void *)((longlong)(iVar21 - iVar13) * 0x20 + *plVar18),
                         (longlong)iVar13 << 5);
              iVar21 = *(int *)(uVar24 + 0x1608);
            }
            *(int *)(uVar24 + 0x1608) = iVar21 + -1;
            TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar18);
            piVar25 = piVar25 + 1;
            piVar29 = (int *)((longlong)piVar29 + -1);
            uVar8 = local_res10;
            iVar15 = local_98;
          } while (piVar29 != (int *)0x0);
        }
      }
      else {
        QueryPerformanceCounter(&local_res18);
        puVar19 = *(undefined4 **)(uVar24 + 0x15f8);
        local_50 = puVar19;
        puVar5 = (undefined4 *)operator_new(0x58);
        puVar10 = puVar27;
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar5 + 2) = 0;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          puVar5[8] = 0;
          *(undefined8 *)(puVar5 + 10) = 0;
          *(undefined8 *)(puVar5 + 0xc) = 0;
          *(undefined8 *)(puVar5 + 0xe) = 0;
          *(undefined8 *)(puVar5 + 0x10) = 0;
          puVar5[0x12] = 0;
          *(undefined8 *)(puVar5 + 0x14) = 0;
          *puVar5 = 0;
          puVar10 = puVar5;
        }
        *(undefined4 **)(uVar24 + 0x15f8) = puVar10;
        *puVar10 = *puVar19;
        FUN_141b34e20(*(undefined8 *)(uVar24 + 0x15f8));
        plVar18 = (longlong *)(uVar24 + 0x1600);
        local_90 = (int *)0x0;
        iVar13 = *(int *)(uVar24 + 0x1608);
        pvVar30 = (void *)*plVar18;
        local_b0 = (int *)0x0;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar13);
        if (iVar13 != 0) {
          TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_b0,iVar13,0);
          local_90 = local_b0;
          _guard_xfg_dispatch_icall_nop(local_b0,pvVar30,(longlong)iVar13 << 5);
        }
        *(undefined4 *)(uVar24 + 0x1608) = 0;
        if ((*(int *)(uVar24 + 0x160c) < 0) && (*(int *)(uVar24 + 0x160c) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(plVar18);
        }
        local_res18.s.LowPart = 0;
        iVar13 = *(int *)(local_res10 + 0x15f0) - iVar21;
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar13);
        if (0 < iVar13) {
          lVar17 = 0;
          uStack_a8 = 0;
          puVar19 = puVar27;
          puVar10 = puVar27;
          puVar5 = puVar27;
          do {
            uVar16 = (uint)puVar19;
            uVar20 = (uint)puVar10;
            for (; ((int)uVar20 < iVar21 && (uVar16 = (uint)puVar19, piVar25[lVar17] == uVar16));
                lVar17 = lVar17 + 1) {
              uVar20 = (int)puVar10 + 1;
              puVar10 = (undefined4 *)(ulonglong)uVar20;
              uVar16 = uVar16 + 1;
              puVar19 = (undefined4 *)(ulonglong)uVar16;
              puVar5 = (undefined4 *)((longlong)puVar5 + 1);
            }
            lVar6 = (longlong)local_res20;
            local_b0._0_4_ = SUB84(puVar27,0);
            local_b0 = (int *)CONCAT44(uVar16,(undefined4)local_b0);
            local_res20 = local_res20 + 1;
            local_78 = local_res20;
            if (local_c4 < local_res20) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_80);
              local_c4 = local_74;
              local_a0 = local_80;
            }
            piVar14 = local_90 + (longlong)puVar5 * 8;
            puVar27 = (undefined4 *)((longlong)local_a0 + lVar6 * 0x10);
            *puVar27 = (undefined4)local_b0;
            puVar27[1] = local_b0._4_4_;
            puVar27[2] = (undefined4)uStack_a8;
            puVar27[3] = uStack_a8._4_4_;
            lVar6 = *(longlong *)(*(longlong *)(piVar14 + 4) + 0x78);
            if (lVar6 == 0) {
              lVar6 = *(longlong *)(piVar14 + 4) + 0x70;
            }
            *(DWORD *)(lVar6 + (longlong)piVar14[6] * 4) = local_res18.s.LowPart;
            iVar15 = *(int *)(uVar24 + 0x1608);
            local_60 = CONCAT44(local_60._4_4_,iVar15);
            *(int *)(uVar24 + 0x1608) = iVar15 + 1;
            local_res20 = local_78;
            if (*(int *)(uVar24 + 0x160c) < iVar15 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar18);
              iVar15 = (int)local_60;
            }
            lVar6 = *plVar18;
            puVar19 = (undefined4 *)(ulonglong)(uVar16 + 1);
            iVar13 = piVar14[1];
            iVar4 = piVar14[2];
            iVar3 = piVar14[3];
            puVar5 = (undefined4 *)((longlong)puVar5 + 1);
            piVar29 = (int *)((longlong)iVar15 * 0x20 + lVar6);
            *piVar29 = *piVar14;
            piVar29[1] = iVar13;
            piVar29[2] = iVar4;
            piVar29[3] = iVar3;
            uVar31 = *(undefined8 *)(piVar14 + 6);
            puVar7 = (undefined8 *)((longlong)iVar15 * 0x20 + 0x10 + lVar6);
            *puVar7 = *(undefined8 *)(piVar14 + 4);
            puVar7[1] = uVar31;
            local_res18.s.LowPart = local_res18.s.LowPart + 1;
            puVar27 = (undefined4 *)(ulonglong)local_res18.s.LowPart;
            iVar15 = local_98;
            iVar13 = (int)local_58;
          } while ((int)local_res18.s.LowPart < (int)local_58);
        }
        uVar8 = local_res10;
        *(int *)(local_res10 + 0x15f0) = iVar13;
        if (DAT_146a153b4 != 0) {
          QueryPerformanceCounter(&local_res18);
        }
        if (local_90 != (int *)0x0) {
          FMemory::Free(local_90);
        }
      }
      lVar17 = 0;
      if ((local_c0 < 0) && (local_68 = 0, local_c0 != 0)) {
        FUN_141b3c030(&local_70,0);
      }
      iVar21 = local_res20;
      pvVar30 = local_a0;
      if (0 < local_res20) {
        if (DAT_1464c1b88 < local_res20) {
          DAT_1464c1b88 = (int)(local_res20 * 5 + (local_res20 * 5 >> 0x1f & 3U)) >> 2;
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1b90,0);
          TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1b98,0);
          FUN_141b34cc0(&DAT_1464c1b80);
        }
        _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                                 (DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1b90,0,
                                  *(undefined4 *)(DAT_1464c1b90 + 0x18),1);
        pvVar30 = local_a0;
        _guard_xfg_dispatch_icall_nop(_Dst,local_a0,(ulonglong)(uint)(iVar21 << 4));
        (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1b90);
        lVar6 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(uVar8 + 8)]);
        uStack_a8 = uStack_a8 & 0xffffffff00000000;
        if (iVar15 < iVar26) {
          local_b0 = (int *)&DAT_146a18ef0;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar6 + 0x38,&local_res18,&local_b0);
          if (local_res18.s.LowPart != 0xffffffff) {
            lVar17 = (longlong)(int)local_res18.s.LowPart * 0x20 + *(longlong *)(lVar6 + 0x38);
          }
          plVar18 = (longlong *)(lVar17 + 0x10);
          if (lVar17 == 0) {
            plVar18 = (longlong *)0x0;
          }
          lVar17 = *plVar18;
          lVar6 = *(longlong *)(lVar17 + 0x48);
          if (*(char *)(lVar6 + 0x28) == '\0') {
            FUN_1419f3850(lVar6);
          }
          uVar31 = *(undefined8 *)(lVar6 + 0x60);
          FRHIComputeShader::UpdateStats(uVar31);
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 3;
          if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_1 + 0x30);
            puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar11 + 3;
          }
          uVar24 = local_res10;
          *(undefined8 **)(param_1 + 0x30) = puVar7;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar11;
          *(undefined8 **)(param_1 + 8) = puVar11 + 1;
          puVar11[1] = 0;
          puVar11[2] = uVar31;
          *puVar11 = &PTR_LAB_144d91e50;
          uVar31 = DAT_1464c1b98;
          FUN_141b426b0(lVar17,param_1,local_res10,iVar21,DAT_1464c1b98,0,0);
          uVar12 = (undefined4)((ulonglong)uVar31 >> 0x20);
        }
        else {
          local_b0 = (int *)&DAT_146a19040;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar6 + 0x38,&local_res18,&local_b0);
          if (local_res18.s.LowPart != 0xffffffff) {
            lVar17 = (longlong)(int)local_res18.s.LowPart * 0x20 + *(longlong *)(lVar6 + 0x38);
          }
          plVar18 = (longlong *)(lVar17 + 0x10);
          if (lVar17 == 0) {
            plVar18 = (longlong *)0x0;
          }
          lVar17 = *plVar18;
          lVar6 = *(longlong *)(lVar17 + 0x48);
          if (*(char *)(lVar6 + 0x28) == '\0') {
            FUN_1419f3850(lVar6);
          }
          uVar31 = *(undefined8 *)(lVar6 + 0x60);
          FRHIComputeShader::UpdateStats(uVar31);
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 3;
          if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_1 + 0x30);
            puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar11 + 3;
          }
          uVar24 = local_res10;
          *(undefined8 **)(param_1 + 0x30) = puVar7;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar11;
          *(undefined8 **)(param_1 + 8) = puVar11 + 1;
          puVar11[2] = uVar31;
          puVar11[1] = 0;
          *puVar11 = &PTR_LAB_144d91e50;
          uVar31 = DAT_1464c1b98;
          FUN_141b426b0(lVar17,param_1,local_res10,iVar21,DAT_1464c1b98,
                        *(undefined8 *)(local_50 + 6),*(undefined8 *)(local_50 + 0x10));
          uVar12 = (undefined4)((ulonglong)uVar31 >> 0x20);
        }
        DispatchComputeShader(param_1,lVar17,iVar21 + 0x3fU >> 6,1,CONCAT44(uVar12,1));
        lVar6 = *(longlong *)(lVar17 + 0x48);
        if (*(char *)(lVar6 + 0x28) == '\0') {
          FUN_1419f3850(lVar6);
        }
        local_res10 = *(ulonglong *)(lVar6 + 0x60);
        FUN_141b25290(lVar17 + 0xca,param_1,&local_res10,*(undefined8 *)(uVar24 + 0x15f8),1);
      }
      puVar27 = local_50;
      if (local_50 != (undefined4 *)0x0) {
        FUN_141ace450(local_50 + 2);
        FUN_141ace450(puVar27 + 0xc);
        FUN_141ace450(puVar27 + 0xc);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar27 + 0x10);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar27 + 0xe);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar27 + 0xc);
        FUN_141ace450(puVar27 + 2);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar27 + 6);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar27 + 4);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar27 + 2);
        FMemory::operator_delete(puVar27,0x58);
      }
      if (pvVar30 != (void *)0x0) {
        FMemory::Free(pvVar30);
      }
    }
  }
  return;
}



// FUNCTION 141b492b0 FUN_141b492b0 body=4288 status=ok
// SIG undefined FUN_141b492b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b492b0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,ulonglong param_6,int *param_7,longlong *param_8,
                  longlong *param_9,ulonglong param_10)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_228 [32];
  longlong *local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  undefined *local_1e0;
  ulonglong local_1d8;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_158;
  longlong local_150;
  int local_148;
  int local_144;
  longlong *local_140;
  int *local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_138 = param_7;
  bVar4 = false;
  local_1b0 = local_1b0 & 0xffffffff00000000;
  local_140 = param_9;
  local_130 = param_10;
  local_150 = param_4;
  local_198 = FSceneRenderTargets::Get();
  if ((param_8 == (longlong *)0x0) || (DAT_1464c1a0c == 0)) {
    local_208 = (longlong *)CONCAT44(local_208._4_4_,DAT_146a9da60);
    local_1b8 = (longlong *)0x0;
    FUN_141b299c0(param_1,&local_1b8,L"DistanceFieldBentNormalAO",10);
    local_200 = param_10;
    local_208 = (longlong *)param_6;
    FUN_141b327c0(param_1,param_2,&local_1b8,param_5);
    local_190 = 0xffffffff00000000;
    uStack_188 = 0xffffffffffffffff;
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    local_180 = 0xffffffffffffffff;
    uStack_178 = 0xffffffffffffffff;
    local_170 = 0xffffffff;
    uStack_168 = 0;
    lVar9 = local_1b8[2];
    plVar11 = (longlong *)local_1b8[1];
    puVar12 = puVar13 + 10;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 10;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar13;
    *(undefined8 **)(param_1 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar13 + 2) = (undefined4)local_190;
    *(undefined4 *)((longlong)puVar13 + 0x14) = local_190._4_4_;
    *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_188;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_188._4_4_;
    *(undefined4 *)(puVar13 + 4) = (undefined4)local_180;
    *(undefined4 *)((longlong)puVar13 + 0x24) = local_180._4_4_;
    *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_178;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_178._4_4_;
    *(undefined4 *)(puVar13 + 6) = (undefined4)local_170;
    *(undefined4 *)((longlong)puVar13 + 0x34) = local_170._4_4_;
    *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_168;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_168._4_4_;
    puVar13[8] = plVar11;
    puVar13[9] = lVar9;
    lVar9 = (**(code **)(*plVar11 + 8))(plVar11);
    if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar9 == 0)) {
      (**(code **)(*(longlong *)puVar13[8] + 0x20))();
    }
    lVar9 = (**(code **)(*(longlong *)puVar13[9] + 8))();
    if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar9 == 0)) {
      (**(code **)(*(longlong *)puVar13[9] + 0x20))();
    }
    plVar11 = (longlong *)*param_9;
    *param_9 = (longlong)local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      (**(code **)(*local_1b8 + 0x28))();
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11);
    }
    if (local_1b8 != (longlong *)0x0) {
      (**(code **)(*local_1b8 + 0x30))();
    }
  }
  else {
    FUN_141b08510(&local_148);
    if ((((((longlong *)*param_8 == (longlong *)0x0) || (*(char *)(param_2 + 0x11f4) != '\0')) ||
         ((*(byte *)(param_2 + 0x28cc) & 0x20) != 0)) ||
        ((DAT_146a1538c != 0 ||
         (lVar9 = (**(code **)(*(longlong *)*param_8 + 0x10))(), *(int *)(lVar9 + 0x14) != local_148
         )))) || (*(int *)(lVar9 + 0x18) != local_144)) {
      local_1b8 = (longlong *)0x0;
      local_208 = (longlong *)CONCAT44(local_208._4_4_,DAT_146a9da60);
      FUN_141b299c0(param_1,&local_1b8,L"DistanceFieldBentNormalAO",10);
      local_200 = param_10;
      local_208 = (longlong *)param_6;
      FUN_141b327c0(param_1,param_2,&local_1b8,param_5);
      local_190 = 0xffffffff00000000;
      uStack_188 = 0xffffffffffffffff;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      local_180 = 0xffffffffffffffff;
      uStack_178 = 0xffffffffffffffff;
      local_170 = 0xffffffff;
      uStack_168 = 0;
      local_1a8 = (undefined *)local_1b8[2];
      plVar11 = (longlong *)local_1b8[1];
      puVar12 = puVar13 + 10;
      if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 10;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar12;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar13;
      *(undefined8 **)(param_1 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar13 + 2) = (undefined4)local_190;
      *(undefined4 *)((longlong)puVar13 + 0x14) = local_190._4_4_;
      *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_188;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_188._4_4_;
      *(undefined4 *)(puVar13 + 4) = (undefined4)local_180;
      *(undefined4 *)((longlong)puVar13 + 0x24) = local_180._4_4_;
      *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_178;
      *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_178._4_4_;
      *(undefined4 *)(puVar13 + 6) = (undefined4)local_170;
      *(undefined4 *)((longlong)puVar13 + 0x34) = local_170._4_4_;
      *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_168;
      *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_168._4_4_;
      puVar13[9] = local_1a8;
      puVar13[8] = plVar11;
      lVar9 = (**(code **)(*plVar11 + 8))(plVar11);
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[8] + 0x20))();
      }
      lVar9 = (**(code **)(*(longlong *)puVar13[9] + 8))();
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[9] + 0x20))();
      }
      plVar11 = (longlong *)*param_8;
      *param_8 = (longlong)local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        (**(code **)(*local_1b8 + 0x28))();
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x30))(plVar11);
      }
      plVar11 = (longlong *)*param_9;
      *param_9 = (longlong)local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        (**(code **)(*local_1b8 + 0x28))();
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x30))(plVar11);
      }
    }
    else {
      if ((DAT_1464c1a10 == 0) || (DAT_1464c17a0 < 2)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      local_1b8 = (longlong *)0x0;
      uVar6 = 0;
      if (bVar3) {
        uVar6 = DAT_146a9da5c;
      }
      local_208 = (longlong *)CONCAT44(local_208._4_4_,uVar6);
      FUN_141b299c0(param_1,&local_1b8,param_3,10);
      FUN_141a19150(param_1,local_1b8[1],0,0);
      iVar7 = *(int *)(param_2 + 0x1aac);
      iVar8 = *(int *)(param_2 + 0x1aa4);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      iVar1 = *(int *)(param_2 + 0x1aa8);
      iVar2 = *(int *)(param_2 + 0x1aa0);
      puVar12 = puVar13 + 5;
      if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar12;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar13;
      *(undefined8 **)(param_1 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *(undefined4 *)(puVar13 + 3) = 0;
      *puVar13 = &PTR_LAB_143f59420;
      *(int *)((longlong)puVar13 + 0x1c) = (iVar1 - iVar2) / 2;
      *(int *)(puVar13 + 4) = (iVar7 - iVar8) / 2;
      *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
      local_e8 = 0;
      local_e0 = 0;
      local_d4 = 0;
      local_cc = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_dc = 0x26;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_14049afe0(param_1,&local_128);
      uStack_f0 = FUN_140985530();
      local_e8 = FUN_1409853f0();
      local_f8 = FUN_1404a0ce0();
      FUN_141b26620(&local_160,*(undefined8 *)(param_2 + 0x3090));
      puVar5 = local_160;
      local_128 = DAT_1464c2720;
      if (local_160 == (undefined *)0x0) {
        uStack_120 = 0;
        bVar4 = true;
        local_160 = (undefined *)0x0;
      }
      else {
        lVar9 = *(longlong *)(local_160 + 0x48);
        if (*(char *)(lVar9 + 0x28) == '\0') {
          FUN_1419f3850(lVar9);
        }
        uStack_120 = *(undefined8 *)(lVar9 + 0x38);
      }
      if (bVar4) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
      }
      bVar4 = false;
      local_dc = local_dc & 0xffffffff00000000;
      local_158 = 0;
      lVar9 = *(longlong *)(param_2 + 0x3090);
      local_160 = &DAT_146a16100;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x38,&local_1b0,&local_160);
      if ((int)local_1b0 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)(int)local_1b0 * 0x20 + *(longlong *)(lVar9 + 0x38);
      }
      plVar11 = (longlong *)0x0;
      plVar14 = (longlong *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        plVar14 = plVar11;
      }
      lVar9 = *plVar14;
      if (lVar9 == 0) {
        bVar4 = true;
        local_160 = (undefined *)0x0;
      }
      else {
        local_160 = *(undefined **)(lVar9 + 0x48);
        if (*(char *)((longlong)local_160 + 0x28) == '\0') {
          FUN_1419f3850(local_160);
        }
        plVar11 = *(longlong **)((longlong)local_160 + 0x40);
      }
      local_108 = plVar11;
      if (bVar4) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
      }
      bVar4 = false;
      FUN_141ed6ac0(param_1,&local_128,2,1);
      local_1f8 = *param_8 + 8;
      local_1e8 = local_130;
      local_1f0 = local_150;
      local_200 = param_6;
      local_208 = (longlong *)param_5;
      FUN_141b450f0(lVar9,param_1,param_2,local_138);
      FPostProcessVS::SetParameters(puVar5,param_1,*(undefined8 *)(param_2 + 0x20));
      local_1c0 = 1;
      local_1b0._4_4_ = (int)((ulonglong)*(undefined8 *)(local_198 + 0x378) >> 0x20);
      local_1b0 = CONCAT44(local_1b0._4_4_ / 2,(int)*(undefined8 *)(local_198 + 0x378) / 2);
      iVar7 = (*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) / 2;
      iVar8 = (*(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4)) / 2;
      local_160 = (undefined *)CONCAT44(iVar8,iVar7);
      fVar15 = (float)iVar8;
      local_1c8 = 0;
      local_1d0 = puVar5;
      local_1d8 = local_1b0;
      local_1e0 = local_160;
      local_1e8 = CONCAT44(local_1e8._4_4_,fVar15);
      local_1f0 = CONCAT44(local_1f0._4_4_,(float)iVar7);
      local_1f8 = CONCAT44(local_1f8._4_4_,(float)(*(int *)(param_2 + 0x1aa4) / 2));
      local_200 = CONCAT44(local_200._4_4_,(float)(*(int *)(param_2 + 0x1aa0) / 2));
      local_208 = (longlong *)CONCAT44(local_208._4_4_,fVar15);
      DrawRectangle(param_1);
      local_190 = 0xffffffff00000000;
      uStack_188 = 0xffffffffffffffff;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      local_180 = 0xffffffffffffffff;
      uStack_178 = 0xffffffffffffffff;
      local_170 = 0xffffffff;
      uStack_168 = 0;
      local_150 = local_1b8[2];
      plVar11 = (longlong *)local_1b8[1];
      puVar12 = puVar13 + 10;
      if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 10;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar12;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar13;
      *(undefined8 **)(param_1 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar13 + 2) = (undefined4)local_190;
      *(undefined4 *)((longlong)puVar13 + 0x14) = local_190._4_4_;
      *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_188;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_188._4_4_;
      *(undefined4 *)(puVar13 + 4) = (undefined4)local_180;
      *(undefined4 *)((longlong)puVar13 + 0x24) = local_180._4_4_;
      *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_178;
      *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_178._4_4_;
      *(undefined4 *)(puVar13 + 6) = (undefined4)local_170;
      *(undefined4 *)((longlong)puVar13 + 0x34) = local_170._4_4_;
      *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_168;
      *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_168._4_4_;
      puVar13[9] = local_150;
      puVar13[8] = plVar11;
      lVar9 = (**(code **)(*plVar11 + 8))(plVar11);
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[8] + 0x20))();
      }
      lVar9 = (**(code **)(*(longlong *)puVar13[9] + 8))();
      if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar9 == 0)) {
        (**(code **)(*(longlong *)puVar13[9] + 0x20))();
      }
      if ((DAT_1464c1a10 == 0) || (DAT_1464c17a0 < 2)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      plVar11 = (longlong *)*param_8;
      if (bVar3) {
        lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar7 = (int)*(undefined8 *)(local_198 + 0x378) / 2;
        local_1b0._4_4_ = (int)((ulonglong)*(undefined8 *)(local_198 + 0x378) >> 0x20);
        local_1b0._4_4_ = local_1b0._4_4_ / 2;
        local_1b0 = CONCAT44(local_1b0._4_4_,iVar7);
        if ((*(int *)(lVar9 + 0x14) != iVar7) || (*(int *)(lVar9 + 0x18) != local_1b0._4_4_)) {
          FUN_141ce3ef0(&PTR_PTR_1464c2560,param_8);
          plVar11 = (longlong *)*param_8;
          *param_8 = 0;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x30))();
          }
          local_208 = (longlong *)((ulonglong)local_208 & 0xffffffff00000000);
          FUN_141b299c0(param_1,param_8,param_3,10);
        }
        FUN_141a19150(param_1,*(undefined8 *)(*param_8 + 8),0,0);
        iVar7 = *(int *)(param_2 + 0x1aac);
        iVar8 = *(int *)(param_2 + 0x1aa4);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        iVar1 = *(int *)(param_2 + 0x1aa8);
        iVar2 = *(int *)(param_2 + 0x1aa0);
        puVar12 = puVar13 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar13;
        *(undefined8 **)(param_1 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *(undefined4 *)(puVar13 + 3) = 0;
        *(int *)(puVar13 + 4) = (iVar7 - iVar8) / 2;
        uVar10 = 0;
        *puVar13 = &PTR_LAB_143f59420;
        *(int *)((longlong)puVar13 + 0x1c) = (iVar1 - iVar2) / 2;
        *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
        local_e0 = 0;
        local_90 = 0;
        local_88 = 0;
        local_7c = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = (longlong *)0x0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        local_dc = 0x26;
        local_d4 = 0;
        local_cc = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_84 = 0;
        local_74 = 0;
        FUN_14049afe0(param_1,&local_128);
        uStack_f0 = FUN_140985530();
        local_e8 = FUN_1409853f0();
        local_f8 = FUN_1404a0ce0();
        FUN_141b26620(&local_1a8,*(undefined8 *)(param_2 + 0x3090));
        puVar5 = local_1a8;
        local_128 = DAT_1464c2720;
        if (local_1a8 == (undefined *)0x0) {
          bVar4 = true;
          local_1a8 = (undefined *)0x0;
        }
        else {
          lVar9 = *(longlong *)(local_1a8 + 0x48);
          if (*(char *)(lVar9 + 0x28) == '\0') {
            FUN_1419f3850(lVar9);
          }
          uVar10 = *(undefined8 *)(lVar9 + 0x38);
        }
        uStack_120 = uVar10;
        if (bVar4) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
        }
        bVar3 = false;
        bVar4 = false;
        local_dc = local_dc & 0xffffffff00000000;
        if ((((*(int *)(param_2 + 0x1aa0) == DAT_1468b5ca0) &&
             (*(int *)(param_2 + 0x1aa4) == DAT_1468b5ca4)) &&
            (*(int *)(param_2 + 0x1aa8) == (int)*(undefined8 *)(local_198 + 0x378))) &&
           (*(int *)(param_2 + 0x1aac) ==
            (int)((ulonglong)*(undefined8 *)(local_198 + 0x378) >> 0x20))) {
          local_1a0 = 0;
          lVar9 = *(longlong *)(param_2 + 0x3090);
          local_1a8 = &DAT_146a18710;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar9 + 0x38,&local_1b0,&local_1a8);
          if ((int)local_1b0 == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)(int)local_1b0 * 0x20 + *(longlong *)(lVar9 + 0x38);
          }
          plVar11 = (longlong *)0x0;
          plVar14 = (longlong *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            plVar14 = plVar11;
          }
          lVar9 = *plVar14;
          if (lVar9 == 0) {
            local_1a8 = (undefined *)0x0;
            bVar4 = true;
          }
          else {
            local_1a8 = *(undefined **)(lVar9 + 0x48);
            if (local_1a8[0x28] == '\0') {
              FUN_1419f3850(local_1a8);
            }
            plVar11 = *(longlong **)(local_1a8 + 0x40);
          }
          local_108 = plVar11;
          if (bVar4) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
          }
          FUN_141ed6ac0(param_1,&local_128,2,1);
          local_208 = local_1b8 + 1;
          FUN_141b42150(lVar9,param_1,param_2,param_5);
        }
        else {
          local_1a0 = 0;
          lVar9 = *(longlong *)(param_2 + 0x3090);
          local_1a8 = &DAT_146a18860;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar9 + 0x38,&local_1b0,&local_1a8);
          if ((int)local_1b0 == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)(int)local_1b0 * 0x20 + *(longlong *)(lVar9 + 0x38);
          }
          plVar11 = (longlong *)0x0;
          plVar14 = (longlong *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            plVar14 = plVar11;
          }
          lVar9 = *plVar14;
          if (lVar9 == 0) {
            bVar3 = true;
            local_1a8 = (undefined *)0x0;
          }
          else {
            local_1a8 = *(undefined **)(lVar9 + 0x48);
            if (local_1a8[0x28] == '\0') {
              FUN_1419f3850(local_1a8);
            }
            plVar11 = *(longlong **)(local_1a8 + 0x40);
          }
          local_108 = plVar11;
          if (bVar3) {
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a8);
          }
          FUN_141ed6ac0(param_1,&local_128,2,1);
          local_208 = local_1b8 + 1;
          FUN_141b41d80(lVar9,param_1,param_2,param_5);
        }
        FPostProcessVS::SetParameters(puVar5,param_1,*(undefined8 *)(param_2 + 0x20));
        local_1c0 = 1;
        puVar12 = (undefined8 *)(local_198 + 0x378);
        local_198._4_4_ = (int)((ulonglong)*puVar12 >> 0x20);
        local_198 = CONCAT44(local_198._4_4_ / 2,(int)*puVar12 / 2);
        iVar7 = (*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) / 2;
        iVar8 = (*(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4)) / 2;
        local_160 = (undefined *)CONCAT44(iVar8,iVar7);
        local_1c8 = 0;
        local_1d0 = puVar5;
        local_1d8 = local_198;
        local_1e0 = local_160;
        fVar15 = (float)iVar8;
        local_1e8 = CONCAT44(local_1e8._4_4_,fVar15);
        local_1f0 = CONCAT44(local_1f0._4_4_,(float)iVar7);
        local_1f8 = local_1f8 & 0xffffffff00000000;
        local_200 = local_200 & 0xffffffff00000000;
        local_208 = (longlong *)CONCAT44(local_208._4_4_,fVar15);
        DrawRectangle(param_1);
        local_190 = 0xffffffff00000000;
        uStack_188 = 0xffffffffffffffff;
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        local_180 = 0xffffffffffffffff;
        uStack_178 = 0xffffffffffffffff;
        local_170 = 0xffffffff;
        uStack_168 = 0;
        uVar10 = *(undefined8 *)(*param_8 + 0x10);
        plVar11 = *(longlong **)(*param_8 + 8);
        puVar12 = puVar13 + 10;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar13 + 10;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar13;
        *(undefined8 **)(param_1 + 8) = puVar13 + 1;
        puVar13[1] = 0;
        *puVar13 = &PTR_LAB_143f489f0;
        *(undefined4 *)(puVar13 + 2) = (undefined4)local_190;
        *(undefined4 *)((longlong)puVar13 + 0x14) = local_190._4_4_;
        *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_188;
        *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_188._4_4_;
        *(undefined4 *)(puVar13 + 4) = (undefined4)local_180;
        *(undefined4 *)((longlong)puVar13 + 0x24) = local_180._4_4_;
        *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_178;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_178._4_4_;
        *(undefined4 *)(puVar13 + 6) = (undefined4)local_170;
        *(undefined4 *)((longlong)puVar13 + 0x34) = local_170._4_4_;
        *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_168;
        *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_168._4_4_;
        puVar13[8] = plVar11;
        puVar13[9] = uVar10;
        lVar9 = (**(code **)(*plVar11 + 8))(plVar11);
        if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar9 == 0)) {
          (**(code **)(*(longlong *)puVar13[8] + 0x20))();
        }
        lVar9 = (**(code **)(*(longlong *)puVar13[9] + 8))();
        if ((lVar9 == 0) && (lVar9 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar9 == 0)) {
          (**(code **)(*(longlong *)puVar13[9] + 0x20))();
        }
        param_8 = (longlong *)*param_8;
        plVar11 = (longlong *)*local_140;
        *local_140 = (longlong)param_8;
        if (param_8 != (longlong *)0x0) {
          (**(code **)(*param_8 + 0x28))();
        }
      }
      else {
        *param_8 = (longlong)local_1b8;
        if (local_1b8 != (longlong *)0x0) {
          (**(code **)(*local_1b8 + 0x28))();
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x30))(plVar11);
        }
        plVar11 = (longlong *)*local_140;
        *local_140 = (longlong)local_1b8;
        if (local_1b8 != (longlong *)0x0) {
          (**(code **)(*local_1b8 + 0x28))();
        }
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x30))(plVar11);
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      (**(code **)(*local_1b8 + 0x30))();
    }
    *local_138 = DAT_1468b5ca0;
    local_138[1] = DAT_1468b5ca4;
    local_138[2] = (*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) / 2;
    local_138[3] = (*(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4)) / 2;
  }
  return;
}



// FUNCTION 141b4a370 FUN_141b4a370 body=3680 status=ok
// SIG undefined FUN_141b4a370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4a370(longlong param_1,longlong *param_2,ulonglong param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_2d8 [32];
  ulonglong local_2b8;
  float local_2b0;
  float local_2a8;
  float local_2a0;
  float local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong local_280;
  undefined4 local_278;
  undefined4 local_270;
  uint local_268;
  undefined4 local_264;
  char local_260;
  longlong local_258;
  longlong local_250;
  int local_248;
  undefined4 local_244;
  longlong *local_240;
  int local_238;
  int local_234;
  undefined4 local_230;
  int local_22c;
  undefined1 local_228 [8];
  longlong local_220;
  undefined1 local_218 [8];
  longlong local_210;
  undefined1 local_208 [8];
  longlong local_200;
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  int local_1d8;
  int iStack_1d4;
  longlong local_1d0;
  longlong local_1c8;
  ulonglong *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_244 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_268 = 0;
  local_260 = param_4;
  local_258 = param_1;
  local_240 = param_2;
  local_1e8 = param_3;
  FUN_14049afe0(param_1,&local_118);
  local_248 = 0;
  if (0 < (int)param_2[1]) {
    puVar18 = (ulonglong *)(local_258 + 0x30);
    local_1d0 = 0;
    plVar16 = local_240;
    plVar20 = local_240;
    plVar24 = local_240;
    plVar25 = local_240;
    local_1c0 = puVar18;
    do {
      local_250 = local_1d0 * 0x30d0 + *param_2;
      puVar12 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      uVar2 = *(undefined4 *)(local_250 + 0x1aac);
      uVar3 = *(undefined4 *)(local_250 + 0x1aa8);
      uVar4 = *(undefined4 *)(local_250 + 0x1aa4);
      local_264 = *(undefined4 *)(local_250 + 0x1aa0);
      puVar11 = puVar12 + 5;
      if ((undefined8 *)puVar18[1] < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar18,0x30);
        puVar12 = (undefined8 *)(*local_1c0 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar12 + 5;
        puVar18 = local_1c0;
      }
      *puVar18 = (ulonglong)puVar11;
      *(int *)(local_258 + 0x14) = *(int *)(local_258 + 0x14) + 1;
      **(undefined8 **)(local_258 + 8) = puVar12;
      *(undefined8 **)(local_258 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uVar4;
      *puVar12 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar12 + 2) = local_264;
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar3;
      *(undefined4 *)(puVar12 + 4) = uVar2;
      *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
      if (DAT_146864320 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_228);
            plVar15 = (longlong *)FUN_14049e3d0(local_180,0,0xff);
            lVar9 = *plVar15;
            *(undefined1 **)(lVar9 + 0x10) = &LAB_140985690;
            *(undefined1 **)(lVar9 + 0x18) = local_228;
            lVar9 = *plVar15;
            lVar5 = plVar15[2];
            lVar13 = plVar15[1];
            lVar10 = *(longlong *)(lVar9 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1c8 = lVar10;
            FUN_1404a4fe0(lVar9,lVar13,(int)lVar5,1);
            if (lVar10 != 0) {
              LOCK();
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                FGraphEvent::Recycle(local_1c8);
              }
            }
            FScopedEvent::~FScopedEvent(local_228);
          }
          else {
            lVar9 = operator_new(0x38);
            if (lVar9 == 0) {
              DAT_146864320 = 0;
            }
            else {
              DAT_146864320 =
                   TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar9);
            }
          }
        }
        else {
          lVar9 = operator_new(0x38);
          if (lVar9 == 0) {
            LOCK();
            if (DAT_146864320 == 0) {
              DAT_146864320 = 0;
            }
            UNLOCK();
          }
          else {
            lVar9 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar9);
            LOCK();
            if (DAT_146864320 != 0) {
              lVar9 = DAT_146864320;
            }
            DAT_146864320 = lVar9;
            UNLOCK();
          }
        }
      }
      uStack_e0 = *(undefined8 *)(DAT_146864320 + 0x30);
      if (DAT_146864318 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_218);
            plVar15 = (longlong *)FUN_14049e3d0(local_168,0,0xff);
            lVar9 = *plVar15;
            *(undefined1 **)(lVar9 + 0x10) = &LAB_140985680;
            *(undefined1 **)(lVar9 + 0x18) = local_218;
            lVar9 = *plVar15;
            lVar5 = plVar15[2];
            lVar13 = plVar15[1];
            lVar10 = *(longlong *)(lVar9 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_220 = lVar10;
            FUN_1404a4fe0(lVar9,lVar13,(int)lVar5,1);
            if (lVar10 != 0) {
              LOCK();
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                FGraphEvent::Recycle(local_220);
              }
            }
            FScopedEvent::~FScopedEvent(local_218);
          }
          else {
            lVar9 = operator_new(0x38);
            if (lVar9 == 0) {
              DAT_146864318 = 0;
            }
            else {
              DAT_146864318 =
                   TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar9);
            }
          }
        }
        else {
          lVar9 = operator_new(0x38);
          if (lVar9 == 0) {
            LOCK();
            if (DAT_146864318 == 0) {
              DAT_146864318 = 0;
            }
            UNLOCK();
          }
          else {
            lVar9 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar9);
            LOCK();
            if (DAT_146864318 != 0) {
              lVar9 = DAT_146864318;
            }
            DAT_146864318 = lVar9;
            UNLOCK();
          }
        }
      }
      cVar7 = local_260;
      local_d8 = *(undefined8 *)(DAT_146864318 + 0x30);
      local_cc = local_cc & 0xffffffff00000000;
      if (local_260 == '\0') {
        lVar9 = DAT_146852b40;
        if (DAT_146852b40 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar6 = IsInRenderingThread();
            if (cVar6 == '\0') {
              FScopedEvent::FScopedEvent(local_1f8);
              plVar15 = (longlong *)FUN_14049e3d0(local_138,0,0xff);
              lVar9 = *plVar15;
              *(undefined1 **)(lVar9 + 0x10) = &LAB_1404a0f60;
              *(undefined1 **)(lVar9 + 0x18) = local_1f8;
              lVar9 = *plVar15;
              lVar5 = plVar15[2];
              lVar13 = plVar15[1];
              lVar10 = *(longlong *)(lVar9 + 0x28);
              piVar1 = (int *)(lVar10 + 0x48);
              if (lVar10 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_200 = lVar10;
              FUN_1404a4fe0(lVar9,lVar13,(int)lVar5,1);
              if (lVar10 != 0) {
                LOCK();
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  FGraphEvent::Recycle(local_200);
                }
              }
              FScopedEvent::~FScopedEvent(local_1f8);
              lVar9 = DAT_146852b40;
            }
            else {
              lVar9 = operator_new(0x38);
              if (lVar9 == 0) {
                DAT_146852b40 = 0;
                lVar9 = DAT_146852b40;
              }
              else {
                DAT_146852b40 =
                     TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar9);
                lVar9 = DAT_146852b40;
              }
            }
          }
          else {
            lVar9 = operator_new(0x38);
            if (lVar9 == 0) {
              LOCK();
              if (DAT_146852b40 == 0) {
                DAT_146852b40 = 0;
              }
              UNLOCK();
              lVar9 = DAT_146852b40;
            }
            else {
              lVar9 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                      ::FStaticStateResource::FStaticStateResource(lVar9);
              LOCK();
              if (DAT_146852b40 != 0) {
                lVar9 = DAT_146852b40;
              }
              DAT_146852b40 = lVar9;
              UNLOCK();
              lVar9 = DAT_146852b40;
            }
          }
        }
      }
      else {
        lVar9 = DAT_146a1c3b8;
        if (DAT_146a1c3b8 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar6 = IsInRenderingThread();
            if (cVar6 == '\0') {
              FScopedEvent::FScopedEvent(local_208);
              plVar15 = (longlong *)FUN_14049e3d0(local_150,0,0xff);
              lVar9 = *plVar15;
              *(undefined1 **)(lVar9 + 0x10) = &LAB_141b33e10;
              *(undefined1 **)(lVar9 + 0x18) = local_208;
              lVar9 = *plVar15;
              lVar5 = plVar15[2];
              lVar13 = plVar15[1];
              lVar10 = *(longlong *)(lVar9 + 0x28);
              piVar1 = (int *)(lVar10 + 0x48);
              if (lVar10 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_210 = lVar10;
              FUN_1404a4fe0(lVar9,lVar13,(int)lVar5,1);
              if (lVar10 != 0) {
                LOCK();
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  FGraphEvent::Recycle(local_210);
                }
              }
              FScopedEvent::~FScopedEvent(local_208);
              lVar9 = DAT_146a1c3b8;
            }
            else {
              lVar9 = operator_new(0x38);
              if (lVar9 == 0) {
                DAT_146a1c3b8 = 0;
                lVar9 = DAT_146a1c3b8;
              }
              else {
                DAT_146a1c3b8 = FUN_141b27e30(lVar9);
                lVar9 = DAT_146a1c3b8;
              }
            }
          }
          else {
            lVar9 = operator_new(0x38);
            if (lVar9 == 0) {
              LOCK();
              if (DAT_146a1c3b8 == 0) {
                DAT_146a1c3b8 = 0;
              }
              UNLOCK();
              lVar9 = DAT_146a1c3b8;
            }
            else {
              lVar9 = FUN_141b27e30(lVar9);
              LOCK();
              if (DAT_146a1c3b8 != 0) {
                lVar9 = DAT_146a1c3b8;
              }
              DAT_146a1c3b8 = lVar9;
              UNLOCK();
              lVar9 = DAT_146a1c3b8;
            }
          }
        }
      }
      lVar13 = 0;
      local_e8 = *(undefined8 *)(lVar9 + 0x30);
      local_1b8 = &DAT_146a51f90;
      local_1b0 = 0;
      plVar15 = (longlong *)(*(longlong *)(local_250 + 0x3090) + 0x38);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar15,&local_238,&local_1b8);
      if (local_238 != -1) {
        lVar13 = (longlong)local_238 * 0x20 + *plVar15;
      }
      plVar17 = (longlong *)(lVar13 + 0x10);
      if (lVar13 == 0) {
        plVar17 = (longlong *)0x0;
      }
      lVar9 = *plVar17;
      if (cVar7 == '\0') {
        local_190 = 0;
        local_198 = &DAT_146a189b0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar15,&local_22c,&local_198);
        if (local_22c == -1) {
          lVar13 = 0;
        }
        else {
          lVar13 = (longlong)local_22c * 0x20 + *plVar15;
        }
        plVar15 = (longlong *)(lVar13 + 0x10);
        if (lVar13 == 0) {
          plVar15 = (longlong *)0x0;
        }
        lVar13 = *plVar15;
        local_118 = DAT_1464c2720;
        if (lVar9 == 0) {
          plVar25 = (longlong *)0x0;
          local_268 = local_268 | 4;
          uStack_110 = 0;
        }
        else {
          lVar10 = *(longlong *)(lVar9 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          uStack_110 = *(undefined8 *)(lVar10 + 0x38);
        }
        uVar21 = local_268;
        if (((local_268 & 4) != 0) &&
           (uVar21 = local_268 & 0xfffffffb, local_268 = uVar21, plVar25 != (longlong *)0x0)) {
          LOCK();
          plVar15 = plVar25 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar25[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar26 = *(int *)((longlong)plVar25 + 0xc) == 0;
              if (bVar26) {
                *(int *)((longlong)plVar25 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar26) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar8 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar10 + 8) = plVar25;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar25)(plVar25,1);
            }
          }
        }
        if (lVar13 == 0) {
          local_268 = uVar21 | 8;
          local_f8 = (longlong *)0x0;
          plVar20 = local_f8;
        }
        else {
          lVar10 = *(longlong *)(lVar13 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          local_f8 = *(longlong **)(lVar10 + 0x40);
        }
        if (((local_268 & 8) != 0) &&
           (local_268 = local_268 & 0xfffffff7, plVar20 != (longlong *)0x0)) {
          LOCK();
          plVar15 = plVar20 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar20[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar26 = *(int *)((longlong)plVar20 + 0xc) == 0;
              if (bVar26) {
                *(int *)((longlong)plVar20 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar26) {
                uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar21 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar10 + 8) = plVar20;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar20)(plVar20,1);
            }
          }
        }
        FUN_141ed6ac0(local_258,&local_118,2,1);
        lVar10 = *(longlong *)(lVar13 + 0x48);
        if (*(char *)(lVar10 + 0x28) == '\0') {
          FUN_1419f3850(lVar10);
        }
        uVar23 = *(undefined8 *)(lVar10 + 0x40);
        local_1e0 = uVar23;
        FUN_141aa9590(lVar13,local_258,uVar23,*(undefined8 *)(local_250 + 0x20));
        local_2b8 = CONCAT44(local_2b8._4_4_,0xf);
        FUN_141aa6800(lVar13 + 0xc0,local_258,&local_1e0,*(undefined4 *)(local_250 + 0x1a38));
        local_2b8 = local_1e8;
        FUN_141b3c050(lVar13 + 0xd0,local_258,&local_1e0,local_250);
        lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(local_250 + 0x10) + 0x20) + 0x1150);
        if (lVar10 == 0) {
          local_244 = 0;
        }
        else {
          local_244 = *(undefined4 *)(lVar10 + 0x118);
        }
        puVar19 = &local_244;
      }
      else {
        local_1a0 = 0;
        local_1a8 = &DAT_146a18b00;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar15,&local_234);
        if (local_234 == -1) {
          lVar13 = 0;
        }
        else {
          lVar13 = (longlong)local_234 * 0x20 + *plVar15;
        }
        plVar15 = (longlong *)(lVar13 + 0x10);
        if (lVar13 == 0) {
          plVar15 = (longlong *)0x0;
        }
        lVar13 = *plVar15;
        local_118 = DAT_1464c2720;
        if (lVar9 == 0) {
          plVar16 = (longlong *)0x0;
          local_268 = local_268 | 1;
          uStack_110 = 0;
        }
        else {
          lVar10 = *(longlong *)(lVar9 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          uStack_110 = *(undefined8 *)(lVar10 + 0x38);
        }
        uVar21 = local_268;
        if (((local_268 & 1) != 0) &&
           (uVar21 = local_268 & 0xfffffffe, local_268 = uVar21, plVar16 != (longlong *)0x0)) {
          LOCK();
          plVar15 = plVar16 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar16[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar26 = *(int *)((longlong)plVar16 + 0xc) == 0;
              if (bVar26) {
                *(int *)((longlong)plVar16 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar26) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar8 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar10 + 8) = plVar16;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar16)(plVar16,1);
            }
          }
        }
        if (lVar13 == 0) {
          local_268 = uVar21 | 2;
          local_f8 = (longlong *)0x0;
          plVar24 = local_f8;
        }
        else {
          lVar10 = *(longlong *)(lVar13 + 0x48);
          if (*(char *)(lVar10 + 0x28) == '\0') {
            FUN_1419f3850(lVar10);
          }
          local_f8 = *(longlong **)(lVar10 + 0x40);
        }
        if (((local_268 & 2) != 0) &&
           (local_268 = local_268 & 0xfffffffd, plVar24 != (longlong *)0x0)) {
          LOCK();
          plVar15 = plVar24 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            if (((char)plVar24[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar26 = *(int *)((longlong)plVar24 + 0xc) == 0;
              if (bVar26) {
                *(int *)((longlong)plVar24 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar26) {
                uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar21 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar10 + 8) = plVar24;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar24)(plVar24,1);
            }
          }
        }
        FUN_141ed6ac0(local_258,&local_118,2,1);
        lVar10 = *(longlong *)(lVar13 + 0x48);
        if (*(char *)(lVar10 + 0x28) == '\0') {
          FUN_1419f3850(lVar10);
        }
        uVar23 = *(undefined8 *)(lVar10 + 0x40);
        local_1f0 = uVar23;
        FUN_141aa9590(lVar13,local_258,uVar23,*(undefined8 *)(local_250 + 0x20));
        local_2b8 = CONCAT44(local_2b8._4_4_,0xf);
        FUN_141aa6800(lVar13 + 0xc0,local_258,&local_1f0,*(undefined4 *)(local_250 + 0x1a38));
        local_2b8 = local_1e8;
        FUN_141b3c050(lVar13 + 0xd0,local_258,&local_1f0,local_250);
        lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(local_250 + 0x10) + 0x20) + 0x1150);
        if (lVar10 == 0) {
          puVar19 = &local_230;
          local_230 = 0;
        }
        else {
          local_230 = *(undefined4 *)(lVar10 + 0x118);
          puVar19 = &local_230;
        }
      }
      local_2b8 = local_2b8 & 0xffffffff00000000;
      SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                (local_258,uVar23,lVar13 + 0xde,puVar19);
      iVar22 = *(int *)(local_250 + 0x1aa8) - *(int *)(local_250 + 0x1aa0);
      iVar14 = *(int *)(local_250 + 0x1aac) - *(int *)(local_250 + 0x1aa4);
      local_1d8 = iVar22;
      iStack_1d4 = iVar14;
      puVar11 = (undefined8 *)FUN_141b08510(local_188);
      local_298 = (float)(iVar14 / 2);
      local_2a0 = (float)(iVar22 / 2);
      local_2a8 = (float)(*(int *)(local_250 + 0x1aa4) / 2);
      local_270 = 1;
      local_278 = 0;
      local_288 = *puVar11;
      local_290 = CONCAT44(iStack_1d4,local_1d8);
      local_2b0 = (float)(*(int *)(local_250 + 0x1aa0) / 2);
      local_2b8 = CONCAT44(local_2b8._4_4_,(float)iVar14);
      local_280 = lVar9;
      DrawRectangle(local_258);
      local_248 = local_248 + 1;
      local_1d0 = local_1d0 + 1;
      puVar18 = (ulonglong *)(local_258 + 0x30);
      param_2 = local_240;
    } while (local_248 < (int)local_240[1]);
  }
  return;
}



// FUNCTION 141b4b1d0 FUN_141b4b1d0 body=507 status=ok
// SIG undefined FUN_141b4b1d0(void)

longlong * FUN_141b4b1d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b4b5e0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"InscatteringLightDirection";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalInscatteringColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalInscatteringStartDistance";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ApplyVolumetricFog";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000074;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b4b3d0 FUN_141b4b3d0 body=521 status=ok
// SIG undefined FUN_141b4b3d0(void)

longlong * FUN_141b4b3d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b4b1d0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CameraRelative";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x78;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"RelativeOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"FogInscatteringColorCubemap";
  puVar1[1] = L"TextureCube";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x80;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"FogInscatteringColorSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x800000088;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b4b5e0 FUN_141b4b5e0 body=598 status=ok
// SIG undefined FUN_141b4b5e0(void)

longlong * FUN_141b4b5e0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"ExponentialFogParameters";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"ExponentialFogColorParameter";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"ExponentialFogParameters3";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SinCosInscatteringColorCubemapRotation";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"FogInscatteringTextureParameters";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000040;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 3;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141b4b840 FUN_141b4b840 body=222 status=ok
// SIG undefined FUN_141b4b840(void)

undefined1 FUN_141b4b840(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd6);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xda);
  FUN_1419e0a40(uVar1,param_1 + 0xde);
  operator<<(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0x112);
  FUN_1419e0a40(param_2,param_1 + 0x118);
  FUN_1419e0a40(param_2,param_1 + 0x11e);
  return 0;
}



// FUNCTION 141b4b920 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FCullObjectsForVolumeCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 141b4b960 Serialize body=177 status=ok
// SIG undefined Serialize(void)

ulonglong GPUFFT::FComplexFFTPassCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xda);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xe0);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b4ba20 Serialize body=163 status=ok
// SIG undefined Serialize(void)

ulonglong GPUFFT::FGSConvolutionBaseCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd4);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xda);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b4bad0 InitDynamicRHI body=63 status=ok
// SIG undefined InitDynamicRHI(void)

void FObjectGridBuffers::InitDynamicRHI(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    FUN_141ac25e0(param_1 + 0x38,4,iVar1 * iVar1 * iVar1 * 0x800,0x1c,0,0,0);
  }
  return;
}



// FUNCTION 141b4bb20 FUN_141b4bb20 body=117 status=ok
// SIG undefined FUN_141b4bb20(void)

undefined8 * FUN_141b4bb20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144de9668;
  FRenderResource::ReleaseResource();
  FUN_141ace450(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141b4bba0 Serialize body=174 status=ok
// SIG undefined Serialize(void)

undefined1 FCullObjectsToGridCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  ::operator<<(param_2,param_1 + 0xc0);
  ::operator<<(param_2,param_1 + 0xee);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 300);
  FUN_1419e0b60(uVar1,param_1 + 0x130);
  FUN_1419e0a40(param_2,param_1 + 0x134);
  FUN_1419e0a40(param_2,param_1 + 0x13a);
  FUN_1419e0a40(param_2,param_1 + 0x140);
  FUN_1419e0a40(param_2,param_1 + 0x146);
  FUN_1419e0a40(param_2,param_1 + 0x14c);
  return 0;
}



// FUNCTION 141b4bc50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCullObjectsToGridCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 141b4bc90 Serialize body=105 status=ok
// SIG undefined Serialize(void)

ulonglong GPUFFT::FPackTwoForOneFFTPassCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 200);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xce);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b4bd00 FUN_141b4bd00 body=219 status=ok
// SIG undefined FUN_141b4bd00(void)

undefined1 FUN_141b4bd00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  operator<<(param_2,param_1 + 0xc0);
  operator<<(param_2,param_1 + 0xee);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 300);
  FUN_1419e0b60(uVar1,param_1 + 0x130);
  FUN_1419e0b60(param_2,param_1 + 0x134);
  FUN_1419e0b60(param_2,param_1 + 0x138);
  FUN_1419e0a40(param_2,param_1 + 0x13c);
  FUN_1419e0a40(param_2,param_1 + 0x142);
  FUN_1419e0a40(param_2,param_1 + 0x148);
  FUN_1419e0a40(param_2,param_1 + 0x14e);
  FUN_1419e0a40(param_2,param_1 + 0x154);
  FUN_1419e0a40(param_2,param_1 + 0x15a);
  return 0;
}



// FUNCTION 141b4bde0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCompositeObjectDistanceFieldsCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 141b4be20 Serialize body=133 status=ok
// SIG undefined Serialize(void)

ulonglong GPUFFT::FComplexMultiplyImagesCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xcc);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xd2);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b4beb0 Serialize body=207 status=ok
// SIG undefined Serialize(void)

ulonglong GPUFFT::FGSComplexTransformBaseCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xda);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xe0);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xe6);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141b4bf80 Serialize body=174 status=ok
// SIG undefined Serialize(void)

undefined1
GPUFFT::FGSConvolutionWithTextureKernelBaseCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd4);
  FUN_1419e0a40(uVar1,param_1 + 0xda);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  return 0;
}



// FUNCTION 141b4c030 FUN_141b4c030 body=364 status=ok
// SIG undefined FUN_141b4c030(void)

undefined1 FUN_141b4c030(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  FUN_1419e0b60(param_2,param_1 + 0xce);
  FUN_1419e0b60(param_2,param_1 + 0xd2);
  FUN_1419e0b60(param_2,param_1 + 0xd6);
  operator<<(param_2,param_1 + 0xda);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  FUN_1419e0a40(param_2,param_1 + 0x10e);
  FUN_1419e0a40(param_2,param_1 + 0x114);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x11a);
  FUN_1419e0b60(uVar1,param_1 + 0x11e);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x122);
  FUN_1419e0b60(uVar1,param_1 + 0x126);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x12a);
  FUN_1419e0b60(uVar1,param_1 + 0x12e);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x132);
  FUN_1419e0b60(uVar1,param_1 + 0x136);
  FUN_1419e0a40(param_2,param_1 + 0x13a);
  FUN_1419e0a40(param_2,param_1 + 0x140);
  FUN_1419e0a40(param_2,param_1 + 0x146);
  FUN_1419e0a40(param_2,param_1 + 0x14c);
  return 0;
}



// FUNCTION 141b4c1a0 Serialize body=249 status=ok
// SIG undefined Serialize(void)

undefined1
FCompositeHeightfieldsIntoGlobalDistanceFieldCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xfe);
  FUN_1419e0b60(uVar1,param_1 + 0x102);
  FUN_1419e0a40(param_2,param_1 + 0x106);
  FUN_1419e0a40(param_2,param_1 + 0x10c);
  FUN_1419e0a40(param_2,param_1 + 0x112);
  FUN_1419e0a40(param_2,param_1 + 0x118);
  FUN_1419e0a40(param_2,param_1 + 0x11e);
  FUN_1419e0b60(param_2,param_1 + 0x124);
  FUN_1419e0a40(param_2,param_1 + 0x128);
  FUN_1419e0b60(param_2,param_1 + 0x12e);
  FUN_1419e0b60(param_2,param_1 + 0x132);
  FUN_1419e0b60(param_2,param_1 + 0x136);
  FUN_1419e0b60(param_2,param_1 + 0x13a);
  return 0;
}



// FUNCTION 141b4c2a0 FUN_141b4c2a0 body=134 status=ok
// SIG undefined FUN_141b4c2a0(void)

undefined1 FUN_141b4c2a0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c120();
  FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x116);
  FUN_1419e0a40(param_2,param_1 + 0x11c);
  FUN_1419e0a40(param_2,param_1 + 0x122);
  FUN_1419e0a40(param_2,param_1 + 0x128);
  return uVar1;
}



// FUNCTION 141b4c330 FUN_141b4c330 body=73 status=ok
// SIG undefined FUN_141b4c330(void)

longlong FUN_141b4c330(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141b4c380 FUN_141b4c380 body=93 status=ok
// SIG undefined FUN_141b4c380(void)

undefined1 FUN_141b4c380(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c120();
  FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x116);
  FUN_1419e0a40(param_2,param_1 + 0x11c);
  return uVar1;
}



// FUNCTION 141b4c3e0 FUN_141b4c3e0 body=73 status=ok
// SIG undefined FUN_141b4c3e0(void)

longlong FUN_141b4c3e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 141b4c430 FUN_141b4c430 body=254 status=ok
// SIG undefined FUN_141b4c430(void)

undefined1 FUN_141b4c430(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c120();
  FUN_1419e0b60(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x114);
  FUN_1419e0b60(param_2,param_1 + 0x11a);
  FUN_1419e0b60(param_2,param_1 + 0x11e);
  FUN_1419e0b60(param_2,param_1 + 0x122);
  FUN_1419e0b60(param_2,param_1 + 0x126);
  FUN_1419e0a40(param_2,param_1 + 0x12a);
  FUN_1419e0a40(param_2,param_1 + 0x130);
  FUN_1419e0a40(param_2,param_1 + 0x136);
  FUN_1419e0b60(param_2,param_1 + 0x13c);
  FUN_1419e0b60(param_2,param_1 + 0x140);
  FUN_1419e0a40(param_2,param_1 + 0x144);
  FUN_1419e0a40(param_2,param_1 + 0x14a);
  return uVar1;
}



// FUNCTION 141b4c530 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGenericEnvironmentalInteractionComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141b4c580 Serialize body=264 status=ok
// SIG undefined Serialize(void)

undefined1
FCalculateHeightfieldOcclusionScreenGridCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  ::operator<<(param_2,param_1 + 0xde);
  FUN_1419e0b60(param_2,param_1 + 0xf8);
  FUN_1419e0a40(param_2,param_1 + 0xfc);
  FUN_1419e0b60(param_2,param_1 + 0x102);
  FUN_1419e0b60(param_2,param_1 + 0x106);
  FUN_1419e0b60(param_2,param_1 + 0x10a);
  FUN_1419e0b60(param_2,param_1 + 0x10e);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x112);
  FUN_1419e0b60(uVar1,param_1 + 0x116);
  FUN_1419e0a40(param_2,param_1 + 0x11a);
  return 0;
}



// FUNCTION 141b4c690 Serialize body=80 status=ok
// SIG undefined Serialize(void)

undefined1 FInitializeHeightfieldsPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  return 0;
}



// FUNCTION 141b4c6e0 FUN_141b4c6e0 body=333 status=ok
// SIG undefined FUN_141b4c6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b4c6e0(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 **local_78;
  undefined1 local_68 [8];
  undefined4 *local_60;
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
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_60;
  local_60 = (undefined4 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_88 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x60);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *local_60 = 0x3f800000;
  local_60[1] = 0x3f800000;
  local_60[2] = 0x3f800000;
  *(undefined8 *)(local_60 + 3) = 0x3f800000;
  *(undefined8 *)(local_60 + 5) = 0x3f800000;
  local_60[7] = 0x3f800000;
  *(undefined8 *)(local_60 + 8) = 0x3f800000;
  *(undefined8 *)(local_60 + 10) = 0x3f800000;
  *(undefined8 *)(local_60 + 0xc) = 0x3f800000;
  *(undefined8 *)(local_60 + 0xe) = 0x3f800000;
  local_60[0x10] = 0;
  *(undefined8 *)(local_60 + 0x11) = 0x3f800000;
  *(undefined8 *)(local_60 + 0x13) = 0x3f800000;
  *(undefined8 *)(local_60 + 0x15) = 0;
  local_60[0x17] = 0;
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141b4c830 FUN_141b4c830 body=89 status=ok
// SIG undefined FUN_141b4c830(void)

undefined8 * FUN_141b4c830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144deaba0;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b4c890 Serialize body=354 status=ok
// SIG undefined Serialize(void)

undefined1
FCalculateHeightfieldIrradianceScreenGridCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  ::operator<<(param_2,param_1 + 0xde);
  FUN_1419e0b60(param_2,param_1 + 0xf8);
  FUN_1419e0a40(param_2,param_1 + 0xfc);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0x102);
  FUN_1419e0b60(uVar1,param_1 + 0x106);
  FUN_1419e0a40(param_2,param_1 + 0x10a);
  FUN_1419e0b60(param_2,param_1 + 0x110);
  FUN_1419e0b60(param_2,param_1 + 0x114);
  FUN_1419e0b60(param_2,param_1 + 0x118);
  FUN_1419e0b60(param_2,param_1 + 0x11c);
  FUN_1419e0a40(param_2,param_1 + 0x120);
  FUN_1419e0b60(param_2,param_1 + 0x126);
  FUN_1419e0b60(param_2,param_1 + 0x12a);
  FUN_1419e0a40(param_2,param_1 + 0x12e);
  FUN_1419e0a40(param_2,param_1 + 0x134);
  FUN_1419e0b60(param_2,param_1 + 0x13a);
  return 0;
}



// FUNCTION 141b4ca00 FUN_141b4ca00 body=329 status=ok
// SIG undefined FUN_141b4ca00(void)

undefined1 FUN_141b4ca00(longlong param_1,undefined8 param_2)

{
  operator<<(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xf0);
  FUN_1419e0b60(param_2,param_1 + 0xf4);
  FUN_1419e0b60(param_2,param_1 + 0xf8);
  FUN_1419e0b60(param_2,param_1 + 0xfc);
  FUN_1419e0b60(param_2,param_1 + 0x100);
  FUN_1419e0b60(param_2,param_1 + 0x104);
  FUN_1419e0b60(param_2,param_1 + 0x108);
  FUN_1419e0b60(param_2,param_1 + 0x10c);
  FUN_1419e0b60(param_2,param_1 + 0x110);
  FUN_1419e0b60(param_2,param_1 + 0x114);
  FUN_1419e0b60(param_2,param_1 + 0x118);
  FUN_1419e0b60(param_2,param_1 + 0x11c);
  FUN_1419e0b60(param_2,param_1 + 0x120);
  FUN_1419e0b60(param_2,param_1 + 0x124);
  FUN_1419e0b60(param_2,param_1 + 0x128);
  FUN_1419e0b60(param_2,param_1 + 300);
  FUN_1419e0b60(param_2,param_1 + 0x130);
  FUN_1419e0b60(param_2,param_1 + 0x134);
  FUN_1419e0b60(param_2,param_1 + 0x138);
  return 0;
}



// FUNCTION 141b4cb50 FUN_141b4cb50 body=67 status=ok
// SIG undefined FUN_141b4cb50(void)

longlong FUN_141b4cb50(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd0);
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 141b4cba0 FUN_141b4cba0 body=74 status=ok
// SIG undefined FUN_141b4cba0(void)

undefined1 FUN_141b4cba0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  return 0;
}



// FUNCTION 141b4cbf0 FUN_141b4cbf0 body=307 status=ok
// SIG undefined FUN_141b4cbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4cbf0(longlong param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  undefined2 local_150;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined4 local_136;
  undefined4 local_132;
  undefined4 local_12e;
  undefined2 local_12a;
  undefined1 local_128 [4];
  undefined2 local_124 [126];
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  iVar3 = 5;
  local_150 = 0;
  local_14e = 0x500004;
  local_14a = 0x10000000;
  local_146 = 0x500104;
  local_142 = 0x20000000;
  local_13e = 0x500204;
  local_13a = 0x30000000;
  local_136 = 0x500304;
  local_132 = 0x40000000;
  local_12e = 0x500404;
  local_12a = 0;
  local_28 = 5;
  FUN_141a09aa0(local_128,5,0);
  puVar1 = local_128 + 2;
  puVar2 = &local_14e;
  do {
    puVar1[-2] = *(undefined1 *)((longlong)puVar2 + -2);
    puVar1[-1] = *(undefined1 *)((longlong)puVar2 + -1);
    *puVar1 = *(undefined1 *)puVar2;
    puVar1[1] = *(undefined1 *)((longlong)puVar2 + 1);
    *(undefined2 *)(puVar1 + 2) = *(undefined2 *)((longlong)puVar2 + 2);
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar2 + 1);
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 8;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0);
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_158,&DAT_146ab6e78,local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_158);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_158);
  return;
}



// FUNCTION 141b4cd30 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UColorblindUserSetting::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc0);
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141b4cd80 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144deb140;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b4cdd0 Serialize body=29 status=ok
// SIG undefined Serialize(void)

ulonglong TLightGridInjectionCS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141b4cdf0 Serialize body=56 status=ok
// SIG undefined Serialize(void)

undefined1 FHeightfieldComponentQuadVS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc4);
  return 0;
}



// FUNCTION 141b4ce30 Serialize body=219 status=ok
// SIG undefined Serialize(void)

undefined1 FShadowHeightfieldsPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  FUN_1419e0b60(param_2,param_1 + 0xce);
  FUN_1419e0b60(param_2,param_1 + 0xd2);
  FUN_1419e0b60(param_2,param_1 + 0xd6);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  FUN_1419e0a40(param_2,param_1 + 0xe0);
  FUN_1419e0a40(param_2,param_1 + 0xe6);
  FUN_1419e0a40(param_2,param_1 + 0xec);
  FUN_1419e0b60(param_2,param_1 + 0xf2);
  FUN_1419e0b60(param_2,param_1 + 0xf6);
  return 0;
}



// FUNCTION 141b4cf10 operator()<FIntRect> body=306 status=ok
// SIG undefined operator()<FIntRect>(void)

longlong *
GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
          (longlong *param_1,ushort *param_2,void *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  ulonglong _Size;
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)param_1[1];
  uVar5 = (uint)param_2[2];
  if (0xf < param_2[2]) {
    uVar5 = 0x10;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *param_2;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = param_2[1];
    uVar6 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(lVar3 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(lVar3 + 0x30) = uVar6;
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
    puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar7;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar8;
    *(undefined8 **)(lVar3 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92080;
    puVar8[2] = uVar4;
    puVar8[3] = _Dst;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar2;
    *(uint *)(puVar8 + 4) = (uint)uVar1;
    *(uint *)(puVar8 + 5) = uVar5;
  }
  return param_1;
}



// FUNCTION 141b4d050 FUN_141b4d050 body=443 status=ok
// SIG undefined FUN_141b4d050(void)

void FUN_141b4d050(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *_Dst;
  void *_Src;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 0x80) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  FUN_141b6c800(param_1,param_3 + param_5,param_4);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar2 = param_1;
  }
  if (param_3 != 0) {
    param_2 = param_2 - lVar2;
    puVar3 = (undefined8 *)(lVar2 + 0x30);
    do {
      puVar3[-6] = *(undefined8 *)(param_2 + -0x30 + (longlong)puVar3);
      lVar2 = *(longlong *)(param_2 + -0x28 + (longlong)puVar3);
      puVar3[-5] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3[-4] = *(undefined8 *)(param_2 + -0x20 + (longlong)puVar3);
      puVar3[-3] = *(undefined8 *)(param_2 + -0x18 + (longlong)puVar3);
      puVar3[-3] = *(undefined8 *)(param_2 + -0x18 + (longlong)puVar3);
      puVar3[-2] = *(undefined8 *)(param_2 + -0x10 + (longlong)puVar3);
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 8 + (longlong)puVar3);
      _Src = *(void **)(param_2 + (longlong)puVar3);
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
        ResizeForCopy(puVar3 + -1,iVar1,0);
        if (_Src == (void *)0x0) {
          _Src = (void *)(param_2 + -8 + (longlong)puVar3);
        }
        _Dst = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
          _Dst = puVar3 + -1;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 3);
      }
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(param_2 + 0x14 + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + (longlong)puVar3);
      puVar3[4] = *(undefined8 *)(param_2 + 0x20 + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x34) = *(undefined1 *)(param_2 + 0x34 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x35) = *(undefined1 *)(param_2 + 0x35 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x36) = *(undefined1 *)(param_2 + 0x36 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x37) = *(undefined1 *)(param_2 + 0x37 + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 7) = *(undefined1 *)(param_2 + 0x38 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x39) = *(undefined1 *)(param_2 + 0x39 + (longlong)puVar3);
      puVar3[8] = *(undefined8 *)(param_2 + 0x40 + (longlong)puVar3);
      puVar3 = puVar3 + 0xf;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141b4d210 FUN_141b4d210 body=702 status=ok
// SIG undefined FUN_141b4d210(void)

int * FUN_141b4d210(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 uVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  void *local_res10;
  
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (undefined4 *)*param_3;
  uVar9 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  _Src = (ulonglong *)(*param_1 + (longlong)iVar10 * 0x28);
  *(undefined4 *)_Src = *puVar2;
  *(undefined4 *)((longlong)_Src + 4) = uVar9;
  *(undefined4 *)(_Src + 1) = uVar4;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar5;
  _Src[2] = 0;
  _Src[3] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res10 = (void *)CONCAT44(local_res10._4_4_,iVar8);
  uVar9 = 1;
  if (iVar8 != 1) {
    TSet<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    iVar8 = local_res8[0];
    lVar15 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      local_res10 = (void *)(*param_1 + lVar15 * 0x28);
      if (*(longlong *)((longlong)local_res10 + 0x10) != 0) {
        FMemory::Free();
        iVar10 = *param_2;
      }
      _guard_xfg_dispatch_icall_nop(local_res10,_Src,0x20);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
      }
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + (longlong)iVar10 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar15 + 4 + (longlong)iVar10 * 0x28) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar14 = (undefined1)local_res8[0];
      goto LAB_141b4d4aa;
    }
    uVar9 = local_res10._0_4_;
  }
  uVar14 = 0;
  cVar6 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,uVar9,0);
  if (cVar6 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar16 = -(iVar10 + uVar13) ^ uVar13 >> 0xd;
    uVar11 = (iVar10 - uVar13) - uVar16 ^ uVar16 >> 0xc;
    uVar13 = (uVar13 - uVar11) - uVar16 ^ uVar11 << 0x10;
    uVar16 = (uVar16 - uVar13) - uVar11 ^ uVar13 >> 5;
    uVar11 = (uVar11 - uVar13) - uVar16 ^ uVar16 >> 3;
    uVar13 = (uVar13 - uVar11) - uVar16 ^ uVar11 << 10;
    uVar11 = ((uVar16 - uVar13) - uVar11 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141b4d4aa:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar14;
  }
  return param_2;
}



// FUNCTION 141b4d4d0 FUN_141b4d4d0 body=735 status=ok
// SIG undefined FUN_141b4d4d0(void)

int * FUN_141b4d4d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int *_Src;
  bool bVar16;
  
  uVar15 = 0xffffffff;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x50);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  param_3 = (undefined8 *)*param_3;
  bVar16 = false;
  _Src = (int *)((longlong)iVar13 * 0x50 + *param_1);
  *(undefined8 *)_Src = *param_3;
  _Src[2] = *(int *)(param_3 + 1);
  uVar6 = puVar3[1];
  *(undefined8 *)(_Src + 4) = *puVar3;
  *(undefined8 *)(_Src + 6) = uVar6;
  uVar6 = puVar3[3];
  *(undefined8 *)(_Src + 8) = puVar3[2];
  *(undefined8 *)(_Src + 10) = uVar6;
  iVar13 = *(int *)((longlong)puVar3 + 0x24);
  iVar8 = *(int *)(puVar3 + 5);
  iVar2 = *(int *)((longlong)puVar3 + 0x2c);
  _Src[0xc] = *(int *)(puVar3 + 4);
  _Src[0xd] = iVar13;
  _Src[0xe] = iVar8;
  _Src[0xf] = iVar2;
  *(undefined8 *)(_Src + 0x10) = puVar3[6];
  _Src[0x12] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar13 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar8 = FCrc::MemCrc_DEPRECATED(_Src,0xc,0);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar8) * 4);
      if (iVar8 != -1) {
        lVar4 = *param_1;
        do {
          lVar10 = (longlong)iVar8;
          if (((*(int *)(lVar4 + lVar10 * 0x50) == *_Src) &&
              (*(int *)(lVar4 + 4 + lVar10 * 0x50) == _Src[1])) &&
             (*(int *)(lVar4 + 8 + lVar10 * 0x50) == _Src[2])) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          iVar13 = iVar8;
        } while ((!bVar16) &&
                (iVar8 = *(int *)(lVar4 + 0x48 + lVar10 * 0x50), iVar13 = iVar14, iVar8 != -1));
      }
    }
    bVar16 = iVar13 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar13 * 0x50 + *param_1),_Src,0x48);
      iVar14 = *param_2;
      bVar5 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x50) = iVar14;
      }
      puVar11 = (undefined4 *)((longlong)iVar14 * 0x50 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar11[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_141b4d782;
    }
  }
  cVar7 = TSet<TTuple<FIntVector,FBlockUpdateInfo>,TDefaultMapHashableKeyFuncs<FIntVector,FBlockUpdateInfo,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar14 = *param_2;
    uVar9 = FCrc::MemCrc_DEPRECATED(_Src,0xc);
    uVar9 = (int)param_1[9] - 1U & uVar9;
    _Src[0x13] = uVar9;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Src[0x12] = *(int *)((longlong)plVar12 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar14;
  }
LAB_141b4d782:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141b4d7b0 FUN_141b4d7b0 body=709 status=ok
// SIG undefined FUN_141b4d7b0(void)

int * FUN_141b4d7b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  int *_Src;
  uint uVar11;
  char cVar12;
  bool bVar13;
  
  iVar10 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)iVar7 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
  puVar5 = (undefined8 *)param_3[1];
  param_3 = (undefined8 *)*param_3;
  bVar13 = false;
  _Src = (int *)((longlong)iVar7 * 0x40 + *param_1);
  *(undefined8 *)_Src = *param_3;
  _Src[2] = *(int *)(param_3 + 1);
  uVar6 = puVar5[1];
  *(undefined8 *)(_Src + 3) = *puVar5;
  *(undefined8 *)(_Src + 5) = uVar6;
  iVar7 = *(int *)((longlong)puVar5 + 0x14);
  iVar1 = *(int *)(puVar5 + 3);
  iVar4 = *(int *)((longlong)puVar5 + 0x1c);
  _Src[7] = *(int *)(puVar5 + 2);
  _Src[8] = iVar7;
  _Src[9] = iVar1;
  _Src[10] = iVar4;
  *(undefined8 *)(_Src + 0xb) = puVar5[4];
  _Src[0xd] = *(int *)(puVar5 + 5);
  _Src[0xe] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar7 = FCrc::MemCrc_DEPRECATED(_Src,0xc,0);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        do {
          lVar3 = (longlong)iVar7 * 0x40 + *param_1;
          if (((*(int *)((longlong)iVar7 * 0x40 + *param_1) == *_Src) &&
              (*(int *)(lVar3 + 4) == _Src[1])) && (*(int *)(lVar3 + 8) == _Src[2])) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          if (bVar13) goto LAB_141b4d94a;
          iVar7 = *(int *)(lVar3 + 0x38);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_141b4d94a:
    bVar13 = iVar7 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 * 0x40 + *param_1),_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_141b4da4c;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar8 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar8 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar8 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = *param_2;
    uVar11 = FCrc::MemCrc_DEPRECATED(_Src,0xc);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    _Src[0xf] = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[0xe] = *(int *)((longlong)plVar9 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FIntVector,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<FIntVector,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141b4da4c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141b4da80 Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_&&>_> body=407 status=ok
// SIG undefined Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_&&>_>(void)

int * TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar5;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x18) == *local_30) goto LAB_141b4db4b;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141b4db4b:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_141b4dbef;
    }
  }
  cVar2 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[5] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[4] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141b4dbef:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 141b4dc20 FUN_141b4dc20 body=1090 status=ok
// SIG undefined FUN_141b4dc20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4dc20(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [64];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  fVar11 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[0xb];
  fVar12 = param_1[5];
  fVar1 = param_1[6];
  fVar2 = param_1[7];
  fVar13 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  local_124 = 0x3de147ae;
  local_120 = 0x3f170a3d;
  local_128 = 0x3e99999a;
  fVar15 = fVar3 * 0.3 + fVar1 * 0.59 + fVar6 * 0.11;
  fVar16 = -(fVar4 * 0.3 + fVar2 * 0.59 + fVar7 * 0.11);
  fVar17 = -(fVar13 * 0.3 + fVar12 * 0.59 + fVar11 * 0.11);
  fVar8 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
  fVar14 = fVar15;
  fVar9 = fVar16;
  fVar18 = fVar17;
  if ((fVar8 != 1.0) &&
     (fVar14 = DAT_1468b5d98, fVar9 = DAT_1468b5d90, fVar18 = DAT_1468b5d94, 1e-08 <= fVar8)) {
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar18 = auVar10._0_4_;
    fVar18 = fVar18 + fVar18 * (0.5 - fVar8 * 0.5 * fVar18 * fVar18);
    fVar18 = fVar18 + fVar18 * (0.5 - fVar8 * 0.5 * fVar18 * fVar18);
    fVar14 = fVar15 * fVar18;
    fVar9 = fVar16 * fVar18;
    fVar18 = fVar17 * fVar18;
  }
  fVar8 = fVar14 * 1.0233277;
  fVar15 = fVar18 * -1.0233277;
  fVar18 = fVar18 * 1.0233277;
  fVar16 = fVar9 * 1.0233277;
  fVar9 = fVar9 * -1.0233277;
  fVar14 = fVar14 * -1.0233277;
  _local_118 = CONCAT44(fVar18,0x3f62dfcf);
  _fStack_110 = CONCAT44(fVar16,fVar14);
  fVar13 = (fVar15 * fVar13 + fVar9 * fVar4 + *param_1 * 0.88622755 + fVar8 * fVar3) * 0.05 -
           (fVar18 * fVar13 + fVar16 * fVar4 + *param_1 * 0.88622755 + fVar14 * fVar3);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar12 = (fVar15 * fVar12 + fVar9 * fVar2 + param_1[4] * 0.88622755 + fVar8 * fVar1) * 0.05 -
           (fVar18 * fVar12 + fVar16 * fVar2 + param_1[4] * 0.88622755 + fVar14 * fVar1);
  fVar11 = (fVar15 * fVar11 + fVar9 * fVar7 + param_1[8] * 0.88622755 + fVar8 * fVar6) * 0.05 -
           (fVar18 * fVar11 + fVar16 * fVar7 + param_1[8] * 0.88622755 + fVar14 * fVar6);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  _local_108 = CONCAT44(fVar12,fVar13);
  _fStack_100 = CONCAT44(uStack_fc,fVar11);
  pfVar5 = (float *)FLinearColor::FLinearColor(local_f8,&local_108);
  fVar11 = *pfVar5 * 3.5449078;
  fVar6 = pfVar5[1] * 3.5449078;
  fVar7 = pfVar5[2] * 3.5449078;
  *param_1 = *param_1 + fVar11 * 0.28209478;
  param_1[1] = param_1[1] + fVar11 * 0.0;
  param_1[2] = param_1[2] + fVar11 * 0.0;
  param_1[3] = param_1[3] + fVar11 * 0.0;
  param_1[4] = param_1[4] + fVar6 * 0.28209478;
  param_1[5] = param_1[5] + fVar6 * 0.0;
  param_1[6] = param_1[6] + fVar6 * 0.0;
  param_1[7] = param_1[7] + fVar6 * 0.0;
  param_1[8] = param_1[8] + fVar7 * 0.28209478;
  param_1[9] = param_1[9] + fVar7 * 0.0;
  param_1[10] = param_1[10] + fVar7 * 0.0;
  param_1[0xb] = param_1[0xb] + fVar7 * 0.0;
  return;
}



// FUNCTION 141b4e070 FUN_141b4e070 body=945 status=ok
// SIG undefined FUN_141b4e070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4e070(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_108 [32];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_b0 [24];
  float local_98 [12];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar9 = TSHVectorRGB<3>::GetLuminance(param_1,local_98);
  fVar16 = -*(float *)(lVar9 + 0xc);
  fVar2 = *(float *)(lVar9 + 8);
  fVar18 = -*(float *)(lVar9 + 4);
  fVar14 = fVar18 * fVar18 + fVar16 * fVar16 + fVar2 * fVar2;
  fVar17 = fVar16;
  fVar19 = fVar18;
  fVar20 = fVar2;
  if ((fVar14 != 1.0) &&
     (fVar17 = DAT_1468b5d90, fVar19 = DAT_1468b5d94, fVar20 = DAT_1468b5d98, 1e-08 <= fVar14)) {
    auVar15 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    local_d8 = auVar15._0_4_;
    local_d8 = local_d8 + local_d8 * (0.5 - fVar14 * 0.5 * local_d8 * local_d8);
    local_d8 = local_d8 + local_d8 * (0.5 - fVar14 * 0.5 * local_d8 * local_d8);
    fVar17 = fVar16 * local_d8;
    fVar19 = fVar18 * local_d8;
    fVar20 = fVar2 * local_d8;
  }
  local_e8 = fVar17;
  fStack_e4 = fVar19;
  fStack_e0 = fVar20;
  TSHVector<3>::CalcDiffuseTransfer(local_98,&local_e8);
  lVar13 = 3;
  pfVar10 = local_98;
  local_b8 = 0.0;
  lVar9 = 3;
  local_d4 = 0.0;
  do {
    pfVar1 = (float *)((param_1 - (longlong)local_98) + (longlong)pfVar10);
    fVar2 = *pfVar10;
    pfVar3 = pfVar10 + 1;
    pfVar4 = pfVar10 + 2;
    pfVar5 = pfVar10 + 3;
    pfVar10 = pfVar10 + 4;
    local_d4 = local_d4 +
               pfVar1[1] * *pfVar3 + pfVar1[3] * *pfVar5 + *pfVar1 * fVar2 + pfVar1[2] * *pfVar4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar12 = 0;
  local_cc = 0.0;
  lVar11 = 3;
  lVar9 = lVar12;
  do {
    pfVar10 = (float *)(param_1 + 0x30 + lVar9);
    pfVar1 = (float *)((longlong)local_98 + lVar9);
    lVar6 = lVar9 + 4;
    lVar7 = lVar9 + 8;
    lVar8 = lVar9 + 0xc;
    lVar9 = lVar9 + 0x10;
    local_cc = local_cc +
               pfVar10[1] * *(float *)((longlong)local_98 + lVar6) +
               pfVar10[3] * *(float *)((longlong)local_98 + lVar8) +
               *pfVar10 * *pfVar1 + pfVar10[2] * *(float *)((longlong)local_98 + lVar7);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  local_d8 = 0.0;
  lVar11 = 3;
  lVar9 = lVar12;
  do {
    pfVar10 = (float *)(param_1 + 0x60 + lVar9);
    pfVar1 = (float *)((longlong)local_98 + lVar9);
    lVar6 = lVar9 + 4;
    lVar7 = lVar9 + 8;
    lVar8 = lVar9 + 0xc;
    lVar9 = lVar9 + 0x10;
    local_d8 = local_d8 +
               pfVar10[1] * *(float *)((longlong)local_98 + lVar6) +
               pfVar10[3] * *(float *)((longlong)local_98 + lVar8) +
               *pfVar10 * *pfVar1 + pfVar10[2] * *(float *)((longlong)local_98 + lVar7);
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  local_e8 = -fVar17;
  fStack_e4 = -fVar19;
  fStack_e0 = -fVar20;
  TSHVector<3>::CalcDiffuseTransfer(local_98,&local_e8);
  pfVar10 = local_98;
  lVar9 = 3;
  local_d0 = 0.0;
  do {
    pfVar1 = (float *)((param_1 - (longlong)local_98) + (longlong)pfVar10);
    fVar2 = *pfVar10;
    pfVar3 = pfVar10 + 1;
    pfVar4 = pfVar10 + 2;
    pfVar5 = pfVar10 + 3;
    pfVar10 = pfVar10 + 4;
    local_d0 = local_d0 +
               pfVar1[1] * *pfVar3 + pfVar1[3] * *pfVar5 + *pfVar1 * fVar2 + pfVar1[2] * *pfVar4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  local_c8 = 0.0;
  lVar11 = 3;
  lVar9 = lVar12;
  do {
    pfVar10 = (float *)((longlong)local_98 + lVar9);
    lVar6 = lVar9 + 4;
    lVar7 = lVar9 + 8;
    lVar8 = lVar9 + 0xc;
    pfVar1 = (float *)(param_1 + 0x30 + lVar9);
    lVar9 = lVar9 + 0x10;
    local_c8 = local_c8 +
               *(float *)((longlong)local_98 + lVar6) * pfVar1[1] +
               *(float *)((longlong)local_98 + lVar8) * pfVar1[3] +
               *pfVar10 * *pfVar1 + *(float *)((longlong)local_98 + lVar7) * pfVar1[2];
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  do {
    pfVar10 = (float *)((longlong)local_98 + lVar12);
    lVar9 = lVar12 + 4;
    lVar11 = lVar12 + 8;
    lVar6 = lVar12 + 0xc;
    pfVar1 = (float *)(lVar12 + 0x60 + param_1);
    lVar12 = lVar12 + 0x10;
    local_b8 = local_b8 +
               *(float *)((longlong)local_98 + lVar9) * pfVar1[1] +
               *(float *)((longlong)local_98 + lVar6) * pfVar1[3] +
               *pfVar10 * *pfVar1 + *(float *)((longlong)local_98 + lVar11) * pfVar1[2];
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  local_c0 = local_d4 * 0.05 - local_d0;
  local_b8 = local_d8 * 0.05 - local_b8;
  if (local_c0 <= 0.0) {
    local_c0 = 0.0;
  }
  if (local_b8 <= 0.0) {
    local_b8 = 0.0;
  }
  local_bc = local_cc * 0.05 - local_c8;
  if (local_bc <= 0.0) {
    local_bc = 0.0;
  }
  pfVar10 = (float *)FLinearColor::FLinearColor(local_b0,&local_c0);
  local_e8 = *pfVar10 * 3.5449078;
  fStack_e4 = pfVar10[1] * 3.5449078;
  fStack_e0 = pfVar10[2] * 3.5449078;
  fStack_dc = pfVar10[3] * 3.5449078;
  TSHVectorRGB<3>::AddAmbient(param_1,&local_e8);
  return;
}



// FUNCTION 141b4e430 FUN_141b4e430 body=939 status=ok
// SIG undefined FUN_141b4e430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4e430(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  float param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar12 = (longlong *)0x0;
  local_138 = local_138 & 0xffffffff00000000;
  local_120 = param_2;
  lVar4 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_3 + 0x1a38)]);
  local_d8 = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  FUN_14049afe0(param_1,&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_128 = 0;
  local_130 = &DAT_146a20db0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_138,&local_130);
  plVar11 = plVar12;
  if ((int)local_138 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  local_128 = 0;
  plVar8 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  local_130 = &DAT_146a20b10;
  lVar1 = *plVar8;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_138,&local_130);
  plVar11 = plVar12;
  if ((int)local_138 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar8 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  lVar4 = *plVar8;
  local_118 = DAT_1464c1e70;
  if (lVar1 == 0) {
    local_138 = 0;
    plVar11 = (longlong *)0x1;
    plStack_110 = plVar12;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_110 = *(longlong **)(lVar2 + 0x38);
    plVar11 = plVar12;
  }
  uVar5 = 0;
  if (plVar11 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  bVar3 = false;
  if (lVar4 == 0) {
    bVar3 = true;
    local_138 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_f8 = uVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  FUN_141b6e590(lVar4,param_1,param_3,param_4);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FUN_141aa9800(lVar1,param_1,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(param_3 + 0x20));
  uVar5 = local_120;
  for (uVar10 = ((int)ROUND(-0.5 - (param_5 * 200000.0 + param_5 * 200000.0)) >> 1) * -3;
      uVar10 != 0; uVar10 = uVar10 - uVar9) {
    uVar9 = 600000;
    if (uVar10 < 0x927c1) {
      uVar9 = uVar10;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar7;
    *(undefined8 **)(param_1 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar7[3] = uVar5;
    *(undefined4 *)(puVar7 + 4) = 0;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 4;
    if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 4;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar7;
    *(undefined8 **)(param_1 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59410;
    puVar7[2] = 0;
    *(uint *)(puVar7 + 3) = uVar9 / 3;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 1;
  }
  return;
}



// FUNCTION 141b4e7e0 FUN_141b4e7e0 body=939 status=ok
// SIG undefined FUN_141b4e7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4e7e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  float param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar12 = (longlong *)0x0;
  local_138 = local_138 & 0xffffffff00000000;
  local_120 = param_2;
  lVar4 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_3 + 0x1a38)]);
  local_d8 = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  FUN_14049afe0(param_1,&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_128 = 0;
  local_130 = &DAT_146a20f00;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_138,&local_130);
  plVar11 = plVar12;
  if ((int)local_138 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  local_128 = 0;
  plVar8 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  local_130 = &DAT_146a20b10;
  lVar1 = *plVar8;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_138,&local_130);
  plVar11 = plVar12;
  if ((int)local_138 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_138 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar8 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  lVar4 = *plVar8;
  local_118 = DAT_1464c1e70;
  if (lVar1 == 0) {
    local_138 = 0;
    plVar11 = (longlong *)0x1;
    plStack_110 = plVar12;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_110 = *(longlong **)(lVar2 + 0x38);
    plVar11 = plVar12;
  }
  uVar5 = 0;
  if (plVar11 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  bVar3 = false;
  if (lVar4 == 0) {
    bVar3 = true;
    local_138 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar5 = *(undefined8 *)(lVar2 + 0x40);
  }
  local_f8 = uVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  FUN_141b6e590(lVar4,param_1,param_3,param_4);
  lVar4 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  FUN_141aa9800(lVar1,param_1,*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(param_3 + 0x20));
  uVar5 = local_120;
  for (uVar10 = ((int)ROUND(-0.5 - (param_5 * 200000.0 + param_5 * 200000.0)) >> 1) * -3;
      uVar10 != 0; uVar10 = uVar10 - uVar9) {
    uVar9 = 600000;
    if (uVar10 < 0x927c1) {
      uVar9 = uVar10;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar7;
    *(undefined8 **)(param_1 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar7[3] = uVar5;
    *(undefined4 *)(puVar7 + 4) = 0;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 4;
    if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 4;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar7;
    *(undefined8 **)(param_1 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59410;
    puVar7[2] = 0;
    *(uint *)(puVar7 + 3) = uVar9 / 3;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 1;
  }
  return;
}



// FUNCTION 141b4eb90 FUN_141b4eb90 body=1228 status=ok
// SIG undefined FUN_141b4eb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4eb90(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  float param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_160;
  int local_158 [2];
  undefined *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar15 = (longlong *)0x0;
  local_158[0] = 0;
  local_140 = param_3;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_3 + 0x1a38)]);
  local_f8 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f0 = 0;
  local_ec = 0x26;
  local_e4 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  FUN_14049afe0(param_1,&local_138);
  local_108 = FUN_1404a0ce0();
  uStack_100 = FUN_140985530();
  local_f8 = FUN_1409853f0();
  local_148 = 0;
  local_150 = &DAT_146a20c60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_148 = 0;
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  local_150 = &DAT_146a205d0;
  lVar2 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  lVar7 = *plVar12;
  local_138 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_150 = (undefined *)0x0;
    plVar13 = (longlong *)0x1;
    plStack_130 = plVar15;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_130 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar15;
  }
  uVar8 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  bVar5 = false;
  if (lVar7 == 0) {
    bVar5 = true;
    local_150 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_118 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  local_ec = local_ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_138,2,1);
  lVar3 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9590(lVar7,param_1,uVar8,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *(undefined8 *)(*param_4 + 0x10);
  local_150 = (undefined *)FUN_1404a0e20();
  if (*(short *)(lVar7 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc0);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar8;
    puVar11[4] = uVar4;
  }
  puVar6 = local_150;
  if (*(short *)(lVar7 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc4);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c70;
    puVar11[2] = uVar8;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = puVar6;
  }
  lVar7 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  FUN_141aa9800(lVar2,param_1,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(local_140 + 0x20));
  param_5 = param_5 * 512.0;
  uVar10 = (ulonglong)
           (float)-((int)ROUND(-0.5 - (param_5 * 0.001953125 + param_5 * 0.001953125)) >> 1);
  if ((int)uVar10 != 0) {
    uVar14 = 0;
    local_158[0] = 0x200;
    local_158[1] = 0x200;
    local_150 = (undefined *)0x20000000200;
    uVar10 = uVar10 & 0xffffffff;
    do {
      local_160 = 1;
      local_168 = 0;
      local_180 = 0x20000000200;
      local_1a8 = (float)uVar14 + 512.0;
      if (param_5 <= local_1a8) {
        local_1a8 = param_5;
      }
      local_1a8 = local_1a8 - (float)uVar14;
      local_190 = 0x44000000;
      local_198 = 0;
      local_1a0 = 0;
      local_188 = local_1a8;
      local_178 = 0x20000000200;
      local_170 = lVar2;
      DrawRectangle(param_1,0,0,0x44000000);
      uVar14 = uVar14 + 0x200;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141b4f060 FUN_141b4f060 body=1228 status=ok
// SIG undefined FUN_141b4f060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4f060(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  float param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_160;
  int local_158 [2];
  undefined *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar15 = (longlong *)0x0;
  local_158[0] = 0;
  local_140 = param_3;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_3 + 0x1a38)]);
  local_f8 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f0 = 0;
  local_ec = 0x26;
  local_e4 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  FUN_14049afe0(param_1,&local_138);
  local_108 = FUN_1404a0ce0();
  uStack_100 = FUN_140985530();
  local_f8 = FUN_1409853f0();
  local_148 = 0;
  local_150 = &DAT_146a20c60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_148 = 0;
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  local_150 = &DAT_146a20720;
  lVar2 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  lVar7 = *plVar12;
  local_138 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_150 = (undefined *)0x0;
    plVar13 = (longlong *)0x1;
    plStack_130 = plVar15;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_130 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar15;
  }
  uVar8 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  bVar5 = false;
  if (lVar7 == 0) {
    bVar5 = true;
    local_150 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_118 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  local_ec = local_ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_138,2,1);
  lVar3 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9590(lVar7,param_1,uVar8,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *(undefined8 *)(*param_4 + 0x10);
  local_150 = (undefined *)FUN_1404a0e20();
  if (*(short *)(lVar7 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc0);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar8;
    puVar11[4] = uVar4;
  }
  puVar6 = local_150;
  if (*(short *)(lVar7 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc4);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c70;
    puVar11[2] = uVar8;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = puVar6;
  }
  lVar7 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  FUN_141aa9800(lVar2,param_1,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(local_140 + 0x20));
  param_5 = param_5 * 512.0;
  uVar10 = (ulonglong)
           (float)-((int)ROUND(-0.5 - (param_5 * 0.001953125 + param_5 * 0.001953125)) >> 1);
  if ((int)uVar10 != 0) {
    uVar14 = 0;
    local_158[0] = 0x200;
    local_158[1] = 0x200;
    local_150 = (undefined *)0x20000000200;
    uVar10 = uVar10 & 0xffffffff;
    do {
      local_160 = 1;
      local_168 = 0;
      local_180 = 0x20000000200;
      local_1a8 = (float)uVar14 + 512.0;
      if (param_5 <= local_1a8) {
        local_1a8 = param_5;
      }
      local_1a8 = local_1a8 - (float)uVar14;
      local_190 = 0x44000000;
      local_198 = 0;
      local_1a0 = 0;
      local_188 = local_1a8;
      local_178 = 0x20000000200;
      local_170 = lVar2;
      DrawRectangle(param_1,0,0,0x44000000);
      uVar14 = uVar14 + 0x200;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141b4f530 FUN_141b4f530 body=1228 status=ok
// SIG undefined FUN_141b4f530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4f530(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  float param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_160;
  int local_158 [2];
  undefined *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar15 = (longlong *)0x0;
  local_158[0] = 0;
  local_140 = param_3;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_3 + 0x1a38)]);
  local_f8 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f0 = 0;
  local_ec = 0x26;
  local_e4 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  FUN_14049afe0(param_1,&local_138);
  local_108 = FUN_1404a0ce0();
  uStack_100 = FUN_140985530();
  local_f8 = FUN_1409853f0();
  local_148 = 0;
  local_150 = &DAT_146a20c60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_148 = 0;
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  local_150 = &DAT_146a20870;
  lVar2 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  lVar7 = *plVar12;
  local_138 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_150 = (undefined *)0x0;
    plVar13 = (longlong *)0x1;
    plStack_130 = plVar15;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_130 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar15;
  }
  uVar8 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  bVar5 = false;
  if (lVar7 == 0) {
    bVar5 = true;
    local_150 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_118 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  local_ec = local_ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_138,2,1);
  lVar3 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9590(lVar7,param_1,uVar8,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *(undefined8 *)(*param_4 + 0x10);
  local_150 = (undefined *)FUN_1404a0e20();
  if (*(short *)(lVar7 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc0);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar8;
    puVar11[4] = uVar4;
  }
  puVar6 = local_150;
  if (*(short *)(lVar7 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc4);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c70;
    puVar11[2] = uVar8;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = puVar6;
  }
  lVar7 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  FUN_141aa9800(lVar2,param_1,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(local_140 + 0x20));
  param_5 = param_5 * 512.0;
  uVar10 = (ulonglong)
           (float)-((int)ROUND(-0.5 - (param_5 * 0.001953125 + param_5 * 0.001953125)) >> 1);
  if ((int)uVar10 != 0) {
    uVar14 = 0;
    local_158[0] = 0x200;
    local_158[1] = 0x200;
    local_150 = (undefined *)0x20000000200;
    uVar10 = uVar10 & 0xffffffff;
    do {
      local_160 = 1;
      local_168 = 0;
      local_180 = 0x20000000200;
      local_1a8 = (float)uVar14 + 512.0;
      if (param_5 <= local_1a8) {
        local_1a8 = param_5;
      }
      local_1a8 = local_1a8 - (float)uVar14;
      local_190 = 0x44000000;
      local_198 = 0;
      local_1a0 = 0;
      local_188 = local_1a8;
      local_178 = 0x20000000200;
      local_170 = lVar2;
      DrawRectangle(param_1,0,0,0x44000000);
      uVar14 = uVar14 + 0x200;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141b4fa00 FUN_141b4fa00 body=1228 status=ok
// SIG undefined FUN_141b4fa00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4fa00(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  float param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_160;
  int local_158 [2];
  undefined *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar15 = (longlong *)0x0;
  local_158[0] = 0;
  local_140 = param_3;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_3 + 0x1a38)]);
  local_f8 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f0 = 0;
  local_ec = 0x26;
  local_e4 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  FUN_14049afe0(param_1,&local_138);
  local_108 = FUN_1404a0ce0();
  uStack_100 = FUN_140985530();
  local_f8 = FUN_1409853f0();
  local_148 = 0;
  local_150 = &DAT_146a20c60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_148 = 0;
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  local_150 = &DAT_146a209c0;
  lVar2 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  lVar7 = *plVar12;
  local_138 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_150 = (undefined *)0x0;
    plVar13 = (longlong *)0x1;
    plStack_130 = plVar15;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_130 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar15;
  }
  uVar8 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  bVar5 = false;
  if (lVar7 == 0) {
    bVar5 = true;
    local_150 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_118 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  local_ec = local_ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_138,2,1);
  lVar3 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9590(lVar7,param_1,uVar8,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *(undefined8 *)(*param_4 + 0x10);
  local_150 = (undefined *)FUN_1404a0e20();
  if (*(short *)(lVar7 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc0);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar8;
    puVar11[4] = uVar4;
  }
  puVar6 = local_150;
  if (*(short *)(lVar7 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc4);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c70;
    puVar11[2] = uVar8;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = puVar6;
  }
  lVar7 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  FUN_141aa9800(lVar2,param_1,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(local_140 + 0x20));
  param_5 = param_5 * 512.0;
  uVar10 = (ulonglong)
           (float)-((int)ROUND(-0.5 - (param_5 * 0.001953125 + param_5 * 0.001953125)) >> 1);
  if ((int)uVar10 != 0) {
    uVar14 = 0;
    local_158[0] = 0x200;
    local_158[1] = 0x200;
    local_150 = (undefined *)0x20000000200;
    uVar10 = uVar10 & 0xffffffff;
    do {
      local_160 = 1;
      local_168 = 0;
      local_180 = 0x20000000200;
      local_1a8 = (float)uVar14 + 512.0;
      if (param_5 <= local_1a8) {
        local_1a8 = param_5;
      }
      local_1a8 = local_1a8 - (float)uVar14;
      local_190 = 0x44000000;
      local_198 = 0;
      local_1a0 = 0;
      local_188 = local_1a8;
      local_178 = 0x20000000200;
      local_170 = lVar2;
      DrawRectangle(param_1,0,0,0x44000000);
      uVar14 = uVar14 + 0x200;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141b4fed0 FUN_141b4fed0 body=1228 status=ok
// SIG undefined FUN_141b4fed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b4fed0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  float param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_160;
  int local_158 [2];
  undefined *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar15 = (longlong *)0x0;
  local_158[0] = 0;
  local_140 = param_3;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_3 + 0x1a38)]);
  local_f8 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f0 = 0;
  local_ec = 0x26;
  local_e4 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  FUN_14049afe0(param_1,&local_138);
  local_108 = FUN_1404a0ce0();
  uStack_100 = FUN_140985530();
  local_f8 = FUN_1409853f0();
  local_148 = 0;
  local_150 = &DAT_146a20c60;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  local_148 = 0;
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  local_150 = &DAT_146a20480;
  lVar2 = *plVar12;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar7 + 0x38,local_158,&local_150);
  plVar13 = plVar15;
  if (local_158[0] != -1) {
    plVar13 = (longlong *)((longlong)local_158[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  plVar12 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar12 = plVar15;
  }
  lVar7 = *plVar12;
  local_138 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_150 = (undefined *)0x0;
    plVar13 = (longlong *)0x1;
    plStack_130 = plVar15;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_130 = *(longlong **)(lVar3 + 0x38);
    plVar13 = plVar15;
  }
  uVar8 = 0;
  if (plVar13 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  bVar5 = false;
  if (lVar7 == 0) {
    bVar5 = true;
    local_150 = (undefined *)0x0;
  }
  else {
    lVar3 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_118 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  local_ec = local_ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_138,2,1);
  lVar3 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_141aa9590(lVar7,param_1,uVar8,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *(undefined8 *)(*param_4 + 0x10);
  local_150 = (undefined *)FUN_1404a0e20();
  if (*(short *)(lVar7 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc0);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    *puVar11 = &PTR_LAB_143f59c80;
    puVar11[2] = uVar8;
    puVar11[4] = uVar4;
  }
  puVar6 = local_150;
  if (*(short *)(lVar7 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar7 + 0xc4);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59c70;
    puVar11[2] = uVar8;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = puVar6;
  }
  lVar7 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  FUN_141aa9800(lVar2,param_1,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(local_140 + 0x20));
  param_5 = param_5 * 512.0;
  uVar10 = (ulonglong)
           (float)-((int)ROUND(-0.5 - (param_5 * 0.001953125 + param_5 * 0.001953125)) >> 1);
  if ((int)uVar10 != 0) {
    uVar14 = 0;
    local_158[0] = 0x200;
    local_158[1] = 0x200;
    local_150 = (undefined *)0x20000000200;
    uVar10 = uVar10 & 0xffffffff;
    do {
      local_160 = 1;
      local_168 = 0;
      local_180 = 0x20000000200;
      local_1a8 = (float)uVar14 + 512.0;
      if (param_5 <= local_1a8) {
        local_1a8 = param_5;
      }
      local_1a8 = local_1a8 - (float)uVar14;
      local_190 = 0x44000000;
      local_198 = 0;
      local_1a0 = 0;
      local_188 = local_1a8;
      local_178 = 0x20000000200;
      local_170 = lVar2;
      DrawRectangle(param_1,0,0,0x44000000);
      uVar14 = uVar14 + 0x200;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 141b503a0 FUN_141b503a0 body=793 status=ok
// SIG undefined FUN_141b503a0(void)

void FUN_141b503a0(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x10);
  uVar3 = FUN_141a156e0();
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92090;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb3b8;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x38) + 0x10);
  uVar3 = FUN_141a156e0();
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    *puVar5 = &PTR_LAB_144d92090;
    puVar5[2] = param_3;
    puVar5[4] = uVar2;
  }
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb3b8;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 0x10);
  uVar3 = FUN_141a156e0();
  if (param_1[5] != 0) {
    uVar1 = param_1[4];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92090;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb3b8;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  return;
}



// FUNCTION 141b506c0 Set<FRHIComputeShader_*> body=201 status=ok
// SIG undefined Set<FRHIComputeShader_*>(void)

void FHeightfieldDescriptionParameters::Set<FRHIComputeShader_*>
               (ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1[1] != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *param_1;
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144dcb360;
    puVar3[2] = param_3;
    puVar3[4] = param_4;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,param_3,param_1 + 2,&stack0x00000028,0);
  return;
}



// FUNCTION 141b50790 FUN_141b50790 body=786 status=ok
// SIG undefined FUN_141b50790(void)

void FUN_141b50790(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x60) + 0x30);
  uVar3 = FUN_141a156e0();
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92090;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb3b8;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  if (param_5 == 0) {
    uVar2 = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    uVar3 = FUN_141a156e0();
    if (param_1[5] != 0) {
      uVar1 = param_1[4];
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      *puVar5 = &PTR_LAB_144d92090;
      puVar5[2] = param_3;
      puVar5[4] = uVar2;
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb3b8;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_5 + 0x60) + 0x30);
    uVar3 = FUN_141a156e0();
    if (param_1[5] != 0) {
      uVar1 = param_1[4];
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144d92090;
      puVar5[2] = param_3;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = uVar2;
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dcb3b8;
  }
  puVar5[4] = uVar3;
  *(uint *)(puVar5 + 3) = (uint)uVar1;
  puVar5[2] = param_3;
  return;
}



// FUNCTION 141b50ab0 FUN_141b50ab0 body=793 status=ok
// SIG undefined FUN_141b50ab0(void)

void FUN_141b50ab0(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x10);
  uVar3 = FUN_141a156e0();
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x38) + 0x10);
  uVar3 = FUN_141a156e0();
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = param_3;
    puVar5[4] = uVar2;
  }
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 0x10);
  uVar3 = FUN_141a156e0();
  if (param_1[5] != 0) {
    uVar1 = param_1[4];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  if (param_1[7] != 0) {
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  return;
}



// FUNCTION 141b50dd0 Set<FRHIPixelShader_*> body=201 status=ok
// SIG undefined Set<FRHIPixelShader_*>(void)

void FHeightfieldDescriptionParameters::Set<FRHIPixelShader_*>
               (ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1[1] != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *param_1;
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144d8e600;
    puVar3[2] = param_3;
    puVar3[4] = param_4;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 2,&stack0x00000028,0);
  return;
}



// FUNCTION 141b50ea0 FUN_141b50ea0 body=786 status=ok
// SIG undefined FUN_141b50ea0(void)

void FUN_141b50ea0(ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x60) + 0x30);
  uVar3 = FUN_141a156e0();
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar2;
  }
  if (param_1[3] != 0) {
    uVar1 = param_1[2];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = param_3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar3;
  }
  if (param_5 == 0) {
    uVar2 = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    uVar3 = FUN_141a156e0();
    if (param_1[5] != 0) {
      uVar1 = param_1[4];
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      *puVar5 = &PTR_LAB_143f59c80;
      puVar5[2] = param_3;
      puVar5[4] = uVar2;
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_5 + 0x60) + 0x30);
    uVar3 = FUN_141a156e0();
    if (param_1[5] != 0) {
      uVar1 = param_1[4];
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_143f59c80;
      puVar5[2] = param_3;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = uVar2;
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar1 = param_1[6];
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
  }
  puVar5[4] = uVar3;
  *(uint *)(puVar5 + 3) = (uint)uVar1;
  puVar5[2] = param_3;
  return;
}



// FUNCTION 141b511c0 FUN_141b511c0 body=179 status=ok
// SIG undefined FUN_141b511c0(void)

void FUN_141b511c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  char cVar1;
  float _X;
  float fVar2;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  
  fVar2 = 1.0;
  cVar1 = (char)(*(longlong **)(param_4 + 0x30))[0x31];
  if (cVar1 == '\x02') {
    _X = (float)(**(code **)(**(longlong **)(param_4 + 0x30) + 0x20))();
    local_28 = _guard_xfg_dispatch_icall_nop(_X);
  }
  else {
    local_28 = fVar2;
    local_1c = fVar2;
    if (cVar1 == '\x01') goto LAB_141b51208;
  }
  local_1c = 0.0;
LAB_141b51208:
  if (cVar1 != '\x02') {
    fVar2 = 0.0;
  }
  local_24 = param_5;
  local_20 = fVar2;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,param_3,param_1,&local_28,0);
  return;
}



// FUNCTION 141b51280 FUN_141b51280 body=2216 status=ok
// SIG undefined FUN_141b51280(void)

void FUN_141b51280(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res18;
  float local_res1c;
  undefined4 uVar25;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  
  local_208 = 0;
  uStack_200 = 0x3f80000000000000;
  local_1f8 = 0.0;
  fStack_1f4 = 0.0;
  fStack_1f0 = 0.0;
  uStack_1ec = 0x3f800000;
  (**(code **)(**(longlong **)(param_4 + 0x30) + 0x68))(*(longlong **)(param_4 + 0x30),&local_208);
  lVar6 = param_5;
  local_1a8 = local_208;
  local_1a0 = (undefined4)uStack_200;
  local_19c = uStack_200._4_4_;
  if ((*(byte *)(*(longlong **)(param_4 + 0x30) + 0x30) & 1) != 0) {
    local_19c = uStack_200._4_4_ ^ 0x80000000;
  }
  local_198 = local_1f8;
  fStack_194 = fStack_1f4;
  fStack_190 = fStack_1f0;
  uStack_18c = uStack_1ec;
  uVar5 = *(undefined4 *)(param_5 + 0x1a38);
  local_188 = local_1e8;
  local_178 = local_1dc;
  local_180 = local_1e0;
  local_170 = local_1d4;
  local_168 = local_1d0;
  uStack_160 = uStack_1c8;
  local_158 = local_1c0;
  local_154 = local_1bc;
  local_d8 = *(undefined8 *)(local_1b8 + 0x30);
  lVar12 = **(longlong **)(param_4 + 0x30);
  uVar7 = FUN_141ba17a0(param_4);
  uVar25 = *(undefined4 *)(lVar6 + 0x388);
  (**(code **)(lVar12 + 0x70))
            (*(undefined8 *)(param_4 + 0x30),&local_res18,lVar6,uVar5,uVar7,uVar25);
  local_148 = local_res1c;
  local_144 = -(local_res1c * local_res18);
  iVar14 = *(int *)(*(longlong *)(param_4 + 0x30) + 0x148);
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar12 + 0x38) < DAT_146a25408) && (_Init_thread_header(), DAT_146a25408 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar10 = 0;
    if (plVar11 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146a25400 = lVar10;
    _Init_thread_footer();
  }
  if ((DAT_146a25400 != 0) && (*(int *)(DAT_146a25400 + 4) == 0)) {
    iVar14 = -1;
  }
  fVar19 = (float)(iVar14 == 0);
  fStack_134 = (float)(iVar14 == 1);
  fVar16 = (float)(iVar14 == 2);
  fStack_12c = (float)(iVar14 == 3);
  local_138 = fVar19;
  fStack_130 = fVar16;
  if ((*(byte *)(*(longlong *)(lVar6 + 0x10) + 0x2c) & 0x40) != 0) {
    FUN_141d9d740();
  }
  lVar10 = *(longlong *)(param_4 + 0x30);
  if (((*(uint *)(lVar10 + 0x180) >> 5 & 1) == 0) && (*(longlong *)(lVar10 + 0x170) == 0)) {
    local_128 = 0;
  }
  else {
    local_128 = 1;
  }
  if (((*(uint *)(lVar10 + 0x180) >> 4 & 1) == 0) ||
     ((*(byte *)(*(longlong *)(lVar6 + 0x10) + 0x2c) & 0x40) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 3;
  }
  local_128 = local_128 | uVar8;
  local_120 = *(undefined4 *)(lVar10 + 0x114);
  if ((*(int *)(lVar12 + 0x38) < DAT_146a25418) &&
     (_Init_thread_header(&DAT_146a25418), DAT_146a25418 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ContactShadows");
    lVar12 = 0;
    if (plVar11 != (longlong *)0x0) {
      lVar12 = (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146a25410 = lVar12;
    _Init_thread_footer(&DAT_146a25418);
  }
  local_150 = 0.0;
  if (((DAT_146a25410 != 0) && (*(int *)(DAT_146a25410 + 4) != 0)) &&
     ((*(uint *)(*(longlong *)(lVar6 + 0x10) + 0x28) & 0x10000000) != 0)) {
    local_150 = *(float *)(*(longlong *)(param_4 + 0x30) + 300);
    if ((*(byte *)(*(longlong *)(param_4 + 0x30) + 0x130) & 1) == 0) {
      local_150 = local_150 + local_150;
    }
    else {
      local_150 = -local_150;
    }
  }
  lVar12 = *(longlong *)(param_4 + 0x30);
  if ((*(byte *)(lVar12 + 0x180) & 1) == 0) {
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    fVar19 = *(float *)(lVar12 + 0xc0);
    local_118 = *(undefined8 *)(lVar12 + 0xc0);
    fVar16 = *(float *)(lVar12 + 200);
    fVar22 = 1.0 / (float)*(undefined8 *)(lVar12 + 0xd8);
    fVar23 = 1.0 / (float)((ulonglong)*(undefined8 *)(lVar12 + 0xd8) >> 0x20);
    fVar24 = 1.0 / *(float *)(lVar12 + 0xe0);
    fVar15 = *(float *)(lVar12 + 0xb4);
    fVar1 = *(float *)(lVar12 + 0xb0);
    fVar2 = *(float *)(lVar12 + 0xbc);
    fVar20 = -fVar15 + -fVar15;
    fVar3 = *(float *)(lVar12 + 0xb8);
    uStack_110 = (ulonglong)(uint)fVar16;
    fVar17 = fVar3 + fVar3;
    fVar18 = -fVar3 + -fVar3;
    fVar21 = fVar1 + fVar1;
    local_108 = CONCAT44((fVar17 * fVar2 - fVar20 * fVar1) * fVar22,
                         ((fVar15 * fVar20 - fVar17 * fVar3) + 1.0) * fVar22);
    uStack_100 = CONCAT44(-1.0 / (1.0 - fVar22 * (float)*(undefined8 *)(lVar12 + 0xcc)),
                          (fVar17 * fVar1 + fVar20 * fVar2) * fVar22);
    fVar17 = -fVar1 + -fVar1;
    fVar20 = fVar15 + fVar15;
    local_f8 = CONCAT44(((fVar3 * fVar18 - fVar1 * fVar21) + 1.0) * fVar23,
                        (fVar18 * fVar2 + fVar15 * fVar21) * fVar23);
    uStack_f0 = CONCAT44(-1.0 / (1.0 - fVar23 * (float)((ulonglong)*(undefined8 *)(lVar12 + 0xcc) >>
                                                       0x20)),
                         (fVar21 * fVar2 - fVar15 * fVar18) * fVar23);
    local_e8 = CONCAT44((fVar17 * fVar2 + fVar20 * fVar3) * fVar24,
                        (fVar20 * fVar2 - fVar17 * fVar3) * fVar24);
    uStack_e0 = CONCAT44(-1.0 / (1.0 - fVar24 * *(float *)(lVar12 + 0xd4)),
                         ((fVar17 * fVar1 - fVar20 * fVar15) + 1.0) * fVar24);
  }
  local_11c = *(byte *)(lVar12 + 0x1bc) & 1;
  if (*(char *)(lVar6 + 0x1203) != '\0') {
    fVar15 = *(float *)(lVar12 + 0x110);
    local_198 = local_198 * fVar15;
    fStack_194 = fStack_194 * fVar15;
    fStack_190 = fStack_190 * fVar15;
  }
  if ((((byte)(*(char *)(lVar12 + 0x188) - 1U) < 2) || (*(char *)(lVar12 + 0x188) == '\x03')) &&
     (*(float *)(lVar6 + 0x3cc) <= 1.0 && *(float *)(lVar6 + 0x3cc) != 1.0)) {
    fVar15 = (float)FUN_141b9c370(lVar6);
    lVar12 = *(longlong *)(param_4 + 0x30);
    local_198 = local_198 * fVar15;
    fStack_194 = fStack_194 * fVar15;
    fStack_190 = fStack_190 * fVar15;
  }
  local_124 = (uint)*(byte *)(lVar12 + 0x189);
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&param_5,&local_1a8,&DAT_146a28708,0,uVar25,fVar19,fVar16);
    lVar6 = param_5;
    uVar4 = *(ushort *)(param_3 + 4);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar13 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar13 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar13;
    *(undefined8 **)(param_1 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_144d920a0;
    puVar13[2] = param_2;
    *(uint *)(puVar13 + 3) = (uint)uVar4;
    puVar13[4] = lVar6;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_5);
  }
  return;
}



// FUNCTION 141b51b30 FUN_141b51b30 body=178 status=ok
// SIG undefined FUN_141b51b30(void)

void FUN_141b51b30(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar2 = *param_4;
    uVar1 = *(ushort *)(param_3 + 4);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
    *puVar4 = &PTR_LAB_144dcb3c8;
    puVar4[2] = param_2;
  }
  return;
}



// FUNCTION 141b51bf0 FUN_141b51bf0 body=892 status=ok
// SIG undefined FUN_141b51bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b51bf0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78 [4];
  undefined8 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 8,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x10,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x18,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x20,param_2,*param_3);
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 0x28,param_2,*param_3);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_4c = 0;
  if (*(short *)(param_1 + 6) != 0) {
    uVar1 = *(undefined8 *)(param_4 + 8);
    local_50 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_78);
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    *puVar4 = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x30);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x16) != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x58);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x1e) != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x80);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x26) != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x2b8);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (*(short *)(param_1 + 0x2e) != 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x2e0);
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_78,iVar2);
    }
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar4[iVar2] = uVar1;
  }
  iVar2 = local_50;
  if (0 < local_50) {
    puVar4 = local_78;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
    }
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    iVar6 = local_50 * 8;
    uVar3 = (longlong)iVar6 + (longlong)puVar8;
    if (*(ulonglong *)(param_2 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar6 + 8);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar3 = (longlong)iVar6 + (longlong)puVar8;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar3;
    lVar7 = (longlong)iVar2;
    if (0 < iVar2) {
      puVar5 = puVar8;
      do {
        *puVar5 = *(undefined8 *)(((longlong)puVar4 - (longlong)puVar8) + (longlong)puVar5);
        puVar5 = puVar5 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e60;
    *(int *)(puVar5 + 2) = iVar2;
    puVar5[3] = puVar8;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 1;
    puVar5[5] = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 141b51f70 FUN_141b51f70 body=828 status=ok
// SIG undefined FUN_141b51f70(void)

undefined8 * FUN_141b51f70(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  FAtmosphereShaderTextureParameters::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind(param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"CubeMapUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"CloudDensityTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"CloudDensitySampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"NoiseTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"NoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"WeatherTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"WeatherSampler",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"CirrusTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"CirrusSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x124,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"TempATexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"TempASampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),L"TempBTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"TempBSampler",0);
  return param_1;
}



// FUNCTION 141b522b0 FUN_141b522b0 body=162 status=ok
// SIG undefined FUN_141b522b0(void)

undefined8 * FUN_141b522b0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 141b52360 FUN_141b52360 body=828 status=ok
// SIG undefined FUN_141b52360(void)

undefined8 * FUN_141b52360(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 2;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  FAtmosphereShaderTextureParameters::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind(param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"CubeMapUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"CloudDensityTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"CloudDensitySampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"NoiseTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"NoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"WeatherTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"WeatherSampler",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"CirrusTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"CirrusSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x124,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"TempATexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"TempASampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),L"TempBTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"TempBSampler",0);
  return param_1;
}



// FUNCTION 141b526a0 FUN_141b526a0 body=162 status=ok
// SIG undefined FUN_141b526a0(void)

undefined8 * FUN_141b526a0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 2;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 141b52750 FUN_141b52750 body=828 status=ok
// SIG undefined FUN_141b52750(void)

undefined8 * FUN_141b52750(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 4;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  FAtmosphereShaderTextureParameters::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind(param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"CubeMapUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"CloudDensityTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"CloudDensitySampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"NoiseTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"NoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"WeatherTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"WeatherSampler",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"CirrusTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"CirrusSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x124,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"TempATexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"TempASampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),L"TempBTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"TempBSampler",0);
  return param_1;
}



// FUNCTION 141b52a90 FUN_141b52a90 body=162 status=ok
// SIG undefined FUN_141b52a90(void)

undefined8 * FUN_141b52a90(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 4;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 141b52b40 FUN_141b52b40 body=828 status=ok
// SIG undefined FUN_141b52b40(void)

undefined8 * FUN_141b52b40(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 8;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 8;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  FAtmosphereShaderTextureParameters::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind(param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"CubeMapUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"CloudDensityTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"CloudDensitySampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"NoiseTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"NoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"WeatherTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"WeatherSampler",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"CirrusTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"CirrusSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x124,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"TempATexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"TempASampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),L"TempBTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"TempBSampler",0);
  return param_1;
}



// FUNCTION 141b52e80 FUN_141b52e80 body=162 status=ok
// SIG undefined FUN_141b52e80(void)

undefined8 * FUN_141b52e80(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 8;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 8;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 141b52f30 FUN_141b52f30 body=828 status=ok
// SIG undefined FUN_141b52f30(void)

undefined8 * FUN_141b52f30(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x10;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  FAtmosphereShaderTextureParameters::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18));
  FShaderResourceParameter::Bind(param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"CubeMapUAV",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"CubeDepthMapSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"CloudDensityTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"CloudDensitySampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"NoiseTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"NoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"CurlNoiseSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x114,*(undefined8 *)(param_2 + 0x18),L"WeatherTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"WeatherSampler",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"CirrusTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"CirrusSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x124,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"SceneDepthTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"TempATexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"TempASampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),L"TempBTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"TempBSampler",0);
  return param_1;
}



// FUNCTION 141b53270 FUN_141b53270 body=162 status=ok
// SIG undefined FUN_141b53270(void)

undefined8 * FUN_141b53270(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR_FUN_144deb0c0;
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x10;
  *(undefined4 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
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
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 141b53320 FUN_141b53320 body=489 status=ok
// SIG undefined FUN_141b53320(void)

undefined8 * FUN_141b53320(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9b88;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x126) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FGlobalDistanceFieldParameters::Bind((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18));
  FRWShaderParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"GlobalDistanceFieldTexture");
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),
             L"ParentGlobalDistanceFieldTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"CulledObjectGrid",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x13c,*(undefined8 *)(param_2 + 0x18),L"UpdateRegionSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x142,*(undefined8 *)(param_2 + 0x18),L"CullGridDimension",0);
  FShaderParameter::Bind(param_1 + 0x29,*(undefined8 *)(param_2 + 0x18),L"VolumeTexelSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x14e,*(undefined8 *)(param_2 + 0x18),L"UpdateRegionVolumeMin",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x154,*(undefined8 *)(param_2 + 0x18),L"ClipmapIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x15a,*(undefined8 *)(param_2 + 0x18),
             L"AOGlobalMaxSphereQueryRadius",0);
  return param_1;
}



// FUNCTION 141b53510 TCompositeObjectDistanceFieldsCS<1,1> body=175 status=ok
// SIG undefined TCompositeObjectDistanceFieldsCS<1,1>(void)

undefined8 *
TCompositeObjectDistanceFieldsCS<1,1>::TCompositeObjectDistanceFieldsCS<1,1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9b88;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 141b535c0 FUN_141b535c0 body=119 status=ok
// SIG undefined FUN_141b535c0(void)

undefined8 * FUN_141b535c0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a1deb0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141b53640 FCalculateHeightfieldIrradianceScreenGridCS body=538 status=ok
// SIG undefined FCalculateHeightfieldIrradianceScreenGridCS(void)

undefined8 *
FCalculateHeightfieldIrradianceScreenGridCS::FCalculateHeightfieldIrradianceScreenGridCS
          (undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144deaf50;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf6) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  FAOParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FScreenGridParameters::Bind((longlong)param_1 + 0xde,*(undefined8 *)(param_2 + 0x18));
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x1f,uVar1,L"HeightfieldDescriptions",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfc,uVar1,L"NumHeightfields",0);
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x102,*(undefined8 *)(param_2 + 0x18),L"HeightfieldIrradiance");
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"TanConeHalfAngle",0);
  FGlobalHeightfieldParameters::Bind(param_1 + 0x22,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            (param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"BentNormalNormalizeFactor",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x126,*(undefined8 *)(param_2 + 0x18),L"HeightfieldLighting",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x12a,*(undefined8 *)(param_2 + 0x18),L"HeightfieldLightingSampler"
             ,0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x12e,*(undefined8 *)(param_2 + 0x18),L"InnerLightTransferDistance"
             ,0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),
             L"OuterLightTransferDistanceScale",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x13a,*(undefined8 *)(param_2 + 0x18),L"RecordConeVisibility",0);
  return param_1;
}



// FUNCTION 141b53860 FUN_141b53860 body=153 status=ok
// SIG undefined FUN_141b53860(void)

undefined8 * FUN_141b53860(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144deaf50;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  return param_1;
}



// FUNCTION 141b53900 FCalculateHeightfieldOcclusionScreenGridCS body=351 status=ok
// SIG undefined FCalculateHeightfieldOcclusionScreenGridCS(void)

undefined8 *
FCalculateHeightfieldOcclusionScreenGridCS::FCalculateHeightfieldOcclusionScreenGridCS
          (undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144deaa30;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf6) = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x102) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11e) = 0;
  FAOParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FScreenGridParameters::Bind((longlong)param_1 + 0xde,*(undefined8 *)(param_2 + 0x18));
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x1f,uVar1,L"HeightfieldDescriptions",0);
  FShaderParameter::Bind((longlong)param_1 + 0xfc,uVar1,L"NumHeightfields",0);
  FHeightfieldTextureParameters::Bind((longlong)param_1 + 0x102,*(undefined8 *)(param_2 + 0x18));
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0x112,*(undefined8 *)(param_2 + 0x18),L"ScreenGridConeVisibility");
  FShaderParameter::Bind
            ((longlong)param_1 + 0x11a,*(undefined8 *)(param_2 + 0x18),L"TanConeHalfAngle",0);
  return param_1;
}



// FUNCTION 141b53a60 FCalculateHeightfieldOcclusionScreenGridCS body=119 status=ok
// SIG undefined FCalculateHeightfieldOcclusionScreenGridCS(void)

undefined8 *
FCalculateHeightfieldOcclusionScreenGridCS::FCalculateHeightfieldOcclusionScreenGridCS
          (undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144deaa30;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 141b53ae0 FCompositeHeightfieldsIntoGlobalDistanceFieldCS body=474 status=ok
// SIG undefined FCompositeHeightfieldsIntoGlobalDistanceFieldCS(void)

undefined8 *
FCompositeHeightfieldsIntoGlobalDistanceFieldCS::FCompositeHeightfieldsIntoGlobalDistanceFieldCS
          (undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9e78;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x106) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x112) = 0;
  *(undefined2 *)((longlong)param_1 + 0x116) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x122) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x136) = 0;
  FGlobalDistanceFieldParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0xfe,*(undefined8 *)(param_2 + 0x18),L"GlobalDistanceFieldTexture")
  ;
  FShaderParameter::Bind
            ((longlong)param_1 + 0x106,*(undefined8 *)(param_2 + 0x18),L"UpdateRegionSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10c,*(undefined8 *)(param_2 + 0x18),L"VolumeTexelSize",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x112,*(undefined8 *)(param_2 + 0x18),L"UpdateRegionVolumeMin",0);
  FShaderParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"ClipmapIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x11e,*(undefined8 *)(param_2 + 0x18),
             L"AOGlobalMaxSphereQueryRadius",0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind((longlong)param_1 + 0x124,uVar1,L"HeightfieldDescriptions",0);
  FShaderParameter::Bind(param_1 + 0x25,uVar1,L"NumHeightfields",0);
  FHeightfieldTextureParameters::Bind((longlong)param_1 + 0x12e,*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141b53cc0 FUN_141b53cc0 body=153 status=ok
// SIG undefined FUN_141b53cc0(void)

undefined8 * FUN_141b53cc0(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de9e78;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  return param_1;
}



// FUNCTION 141b53d60 FUN_141b53d60 body=417 status=ok
// SIG undefined FUN_141b53d60(void)

undefined8 * FUN_141b53d60(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de8ff0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xda) = 0;
  *(undefined4 *)((longlong)param_1 + 0xde) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x122) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FRWShaderParameter::Bind(param_1 + 0x18,uVar1,L"SceneObjectBounds");
  FRWShaderParameter::Bind(param_1 + 0x19,uVar1,L"SceneObjectData");
  FShaderParameter::Bind(param_1 + 0x1a,uVar1,L"NumSceneObjects",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xd6),uVar1,L"DistanceFieldTexture",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xda),uVar1,L"DistanceFieldSampler",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0xde),uVar1,L"DistanceFieldAtlasTexelSize",0);
  FDistanceFieldCulledObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xe4),*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x112,*(undefined8 *)(param_2 + 0x18),
             L"AOGlobalMaxSphereQueryRadius",0);
  FShaderParameter::Bind(param_1 + 0x23,*(undefined8 *)(param_2 + 0x18),L"VolumeBounds",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x11e,*(undefined8 *)(param_2 + 0x18),
             L"AcceptOftenMovingObjectsOnly",0);
  return param_1;
}



// FUNCTION 141b53f10 FCullObjectsForVolumeCS body=125 status=ok
// SIG undefined FCullObjectsForVolumeCS(void)

undefined8 * FCullObjectsForVolumeCS::FCullObjectsForVolumeCS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de8ff0;
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
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 141b53f90 FCullObjectsToGridCS body=390 status=ok
// SIG undefined FCullObjectsToGridCS(void)

undefined8 * FCullObjectsToGridCS::FCullObjectsToGridCS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144de96e8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x126) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  FDistanceFieldCulledObjectBufferParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FGlobalDistanceFieldParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xee),*(undefined8 *)(param_2 + 0x18));
  FRWShaderParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"CulledObjectGrid");
  FShaderParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),L"CullGridDimension",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x13a,*(undefined8 *)(param_2 + 0x18),L"VolumeTexelSize",0);
  FShaderParameter::Bind(param_1 + 0x28,*(undefined8 *)(param_2 + 0x18),L"UpdateRegionVolumeMin",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x146,*(undefined8 *)(param_2 + 0x18),L"ClipmapIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x14c,*(undefined8 *)(param_2 + 0x18),
             L"AOGlobalMaxSphereQueryRadius",0);
  return param_1;
}


