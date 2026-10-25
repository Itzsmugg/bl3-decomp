// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141a8e610 FUN_141a8e610 body=281 status=ok
// SIG undefined FUN_141a8e610(void)

undefined8
FUN_141a8e610(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,longlong *param_10)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_10 == 0) {
    (**(code **)(*DAT_146ab6358 + 0x208))
              (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  else {
    lVar2 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar2 = param_3;
    }
    (**(code **)(*DAT_146ab6358 + 0x208))
              (DAT_146ab6358,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    if (lVar2 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar2);
    }
  }
  return param_2;
}



// FUNCTION 141a8e730 FUN_141a8e730 body=96 status=ok
// SIG undefined FUN_141a8e730(void)

longlong *
FUN_141a8e730(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  
  lVar1 = FUN_141a846b0(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8e790 FUN_141a8e790 body=269 status=ok
// SIG undefined FUN_141a8e790(void)

undefined8
FUN_141a8e790(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,longlong *param_10)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_10 == 0) {
    (**(code **)(*param_1 + 0x248))
              (param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  else {
    lVar2 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar2 = param_3;
    }
    (**(code **)(*param_1 + 0x248))
              (param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    if (lVar2 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar2);
    }
  }
  return param_2;
}



// FUNCTION 141a8e8a0 FUN_141a8e8a0 body=102 status=ok
// SIG undefined FUN_141a8e8a0(void)

longlong *
FUN_141a8e8a0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_141a7fe80(param_1,param_3,param_3,6,0,1,param_4,param_5,1,param_6,param_7);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8e910 FUN_141a8e910 body=110 status=ok
// SIG undefined FUN_141a8e910(void)

longlong *
FUN_141a8e910(undefined8 param_1,longlong *param_2,undefined4 param_3,int param_4,undefined1 param_5
             ,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  
  lVar1 = FUN_141a7fe80(param_1,param_3,param_3,param_4 * 6,1,1,param_5,param_6,1,param_7,param_8);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8e980 FUN_141a8e980 body=244 status=ok
// SIG undefined FUN_141a8e980(void)

undefined8
FUN_141a8e980(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             longlong *param_9)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_9 == 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9)
    ;
  }
  else {
    lVar2 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar2 = param_3;
    }
    (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9)
    ;
    if (lVar2 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar2);
    }
  }
  return param_2;
}



// FUNCTION 141a8ea80 FUN_141a8ea80 body=222 status=ok
// SIG undefined FUN_141a8ea80(void)

undefined8
FUN_141a8ea80(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,longlong *param_8)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_8 == 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    lVar2 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar2 = param_3;
    }
    (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
    if (lVar2 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar2);
    }
  }
  return param_2;
}



// FUNCTION 141a8eb60 FUN_141a8eb60 body=181 status=ok
// SIG undefined FUN_141a8eb60(void)

undefined8 * FUN_141a8eb60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = puVar1 + 10;
    }
    puVar1[9] = param_3;
    puVar1[10] = 0xc7efffffe0000000;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144db4040;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8ec20 FUN_141a8ec20 body=800 status=ok
// SIG undefined FUN_141a8ec20(void)

void FUN_141a8ec20(longlong param_1,undefined8 *param_2,void *param_3,uint *param_4,int param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  void *_Dst;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined8 *local_res20;
  longlong local_58 [3];
  
  lVar5 = **(longlong **)(param_1 + 0x50);
  local_res20 = (undefined8 *)FUN_141a83b50(&DAT_1469fd258);
  lVar13 = 0;
  iVar11 = 0;
  if (local_res20 == (undefined8 *)0x0) {
    local_res20 = (undefined8 *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0xd50);
    *local_res20 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(local_res20 + 1) = 0;
    *local_res20 = &PTR_FUN_144d838e0;
    *(undefined4 *)((longlong)local_res20 + 0xc) = 0;
    *(undefined2 *)(local_res20 + 2) = 0x100;
    local_res20[3] = param_4;
    *(uint *)(local_res20 + 4) = *param_4;
    local_res20[6] = uVar6;
    *local_res20 = &PTR_FUN_144db3ef0;
    local_res20[5] = &PTR_LAB_144db3ef8;
    FUN_141a67840(local_res20 + 7);
    local_res20[0x17] = 0;
    local_res20[0x18] = 0;
  }
  uVar4 = *param_4;
  if (uVar4 != 0) {
    uVar10 = uVar4 + 0xff & 0xffffff00;
    lVar5 = **(longlong **)(param_1 + 0x50);
    if (param_5 == 2) {
      _Dst = (void *)FUN_141a4fd40(*(undefined8 *)(lVar5 + 0x708),uVar10,0x100,local_res20 + 7);
    }
    else {
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8);
      if (lVar9 == 0) {
        local_58[0] = lVar5;
        lVar9 = FUN_141a7de10(*(undefined8 *)(lVar5 + 0xd40),local_58);
      }
      _Dst = (void *)FUN_141a501d0(lVar9,uVar10,local_res20 + 7);
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,(ulonglong)uVar4);
  }
  uVar4 = param_4[8];
  if (uVar4 != 0) {
    plVar2 = local_res20 + 0x17;
    plVar14 = (longlong *)*plVar2;
    for (iVar12 = *(int *)(local_res20 + 0x18); iVar12 != 0; iVar12 = iVar12 + -1) {
      puVar7 = (undefined8 *)*plVar14;
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar7 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
            LOCK();
            bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
            if (bVar15) {
              *(int *)((longlong)puVar7 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar15) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar7)(puVar7);
          }
        }
      }
      plVar14 = plVar14 + 1;
    }
    *(undefined4 *)(local_res20 + 0x18) = 0;
    if (*(uint *)((longlong)local_res20 + 0xc4) != uVar4) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
      iVar11 = *(int *)(local_res20 + 0x18);
    }
    *(uint *)(local_res20 + 0x18) = iVar11 + uVar4;
    if (*(int *)((longlong)local_res20 + 0xc4) < (int)(iVar11 + uVar4)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar2 + (longlong)iVar11 * 8),0,(longlong)(int)uVar4 * 8);
    if (0 < (int)uVar4) {
      do {
        puVar7 = *(undefined8 **)(*plVar2 + lVar13 * 8);
        lVar5 = *(longlong *)
                 ((ulonglong)*(ushort *)(*(longlong *)(param_4 + 2) + lVar13 * 2) +
                 (longlong)param_3);
        *(longlong *)(*plVar2 + lVar13 * 8) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar7 + 1);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            if ((*(char *)(puVar7 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar7 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
              }
            }
            else {
              (**(code **)*puVar7)(puVar7,1);
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar4);
    }
  }
  *param_2 = local_res20;
  if (local_res20 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_res20 + 1) = *(int *)(local_res20 + 1) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141a8ef40 FUN_141a8ef40 body=475 status=ok
// SIG undefined FUN_141a8ef40(void)

longlong * FUN_141a8ef40(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_res10;
  undefined8 local_res18;
  int local_48 [2];
  ulonglong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  
  lVar7 = 0;
  local_24 = 0;
  local_48[1] = 1;
  lVar9 = param_3 + -8;
  if (param_3 == 0) {
    lVar9 = lVar7;
  }
  iVar1 = (&DAT_1464ca1cc)[(ulonglong)param_4 * 10];
  uVar8 = (ulonglong)(*(uint *)(lVar9 + 0x28) >> 5) & 0xffffffffffffff01;
  if (iVar1 == 0x1b) {
    local_48[0] = 0x1c;
  }
  else {
    local_48[0] = 0x57;
    if (iVar1 != 0x5a) {
      local_48[0] = iVar1;
    }
  }
  uVar2 = *(ulonglong *)(lVar9 + 0x88);
  local_30 = 0;
  local_34 = 0;
  bVar10 = (char)uVar8 == '\0';
  if (bVar10) {
    uVar8 = (ulonglong)(int)(&DAT_1464ca1c4)[(ulonglong)param_4 * 10];
    local_38 = (undefined4)(*(ulonglong *)(lVar9 + 0xa0) / uVar8);
    local_40 = uVar2 / uVar8;
    uVar8 = uVar2 % uVar8;
  }
  else {
    local_40 = uVar2 >> 2;
    local_48[0] = 0x27;
    local_38 = (undefined4)(*(ulonglong *)(lVar9 + 0xa0) >> 2);
  }
  local_28 = (uint)!bVar10;
  if (lVar9 == 0) {
    *param_2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar9 + 0x38);
    local_res18 = 0;
    lVar5 = operator_new(0x90,uVar8);
    lVar6 = lVar7;
    if (lVar5 != 0) {
      lVar6 = FUN_141a825c0(lVar5,uVar3,local_48,lVar9 + 0x40,local_res18);
    }
    *param_2 = lVar6;
    lVar7 = 0;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      lVar7 = *param_2;
    }
  }
  local_res10 = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0x1a0);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar1 = *(int *)(lVar9 + 0x1d8);
    *(int *)(lVar9 + 0x1d8) = iVar1 + 1;
    if (*(int *)(lVar9 + 0x1dc) < iVar1 + 1) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(lVar9 + 0x1c8,iVar1);
    }
    lVar7 = local_res10;
    lVar6 = *(longlong *)(lVar9 + 0x1d0);
    if (*(longlong *)(lVar9 + 0x1d0) == 0) {
      lVar6 = lVar9 + 0x1c8;
    }
    local_res10 = 0;
    *(longlong *)(lVar6 + (longlong)iVar1 * 8) = lVar7;
    LeaveCriticalSection(lpCriticalSection);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return param_2;
}



// FUNCTION 141a8f120 FUN_141a8f120 body=487 status=ok
// SIG undefined FUN_141a8f120(void)

longlong *
FUN_141a8f120(undefined8 param_1,longlong *param_2,longlong param_3,char param_4,char param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong local_res10;
  undefined8 local_res18;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  
  lVar5 = 0;
  local_24 = 0;
  local_48 = 0;
  lVar7 = param_3 + -8;
  if (param_3 == 0) {
    lVar7 = lVar5;
  }
  local_44 = 1;
  uVar8 = *(uint *)(lVar7 + 0x20);
  uVar9 = *(uint *)(lVar7 + 0x28) >> 5;
  if ((uVar9 & 1) == 0) {
    if ((*(uint *)(lVar7 + 0x28) >> 8 & 1) == 0) goto LAB_141a8f189;
    local_48 = 0x2a;
  }
  else {
    local_48 = 0x27;
  }
  uVar8 = 4;
LAB_141a8f189:
  local_40 = *(ulonglong *)(lVar7 + 0x88) / (ulonglong)uVar8;
  local_30 = 0;
  local_38 = (undefined4)(*(ulonglong *)(lVar7 + 0xa0) / (ulonglong)uVar8);
  local_34 = 0;
  if ((uVar9 & 1) == 0) {
    local_34 = uVar8;
  }
  local_28 = (uint)((uVar9 & 1) != 0);
  if (lVar7 == 0) {
    *param_2 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar7 + 0x38);
    local_res18 = 0;
    if (param_4 != '\0' || param_5 != '\0') {
      FUN_141a6e3f0(*(undefined8 *)(lVar6 + 0x10),1,4,&local_res18,4);
    }
    lVar3 = operator_new(0x90);
    lVar4 = lVar5;
    if (lVar3 != 0) {
      lVar4 = FUN_141a825c0(lVar3,lVar6,&local_48,lVar7 + 0x40,local_res18);
    }
    *param_2 = lVar4;
    lVar5 = 0;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      lVar5 = *param_2;
    }
  }
  local_res10 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar7 + 0x1a0);
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar1 = *(int *)(lVar7 + 0x1d8);
    *(int *)(lVar7 + 0x1d8) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x1dc) < iVar1 + 1) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(lVar7 + 0x1c8,iVar1);
    }
    lVar5 = local_res10;
    lVar6 = *(longlong *)(lVar7 + 0x1d0);
    if (*(longlong *)(lVar7 + 0x1d0) == 0) {
      lVar6 = lVar7 + 0x1c8;
    }
    local_res10 = 0;
    *(longlong *)(lVar6 + (longlong)iVar1 * 8) = lVar5;
    LeaveCriticalSection(lpCriticalSection);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return param_2;
}



// FUNCTION 141a8f310 FUN_141a8f310 body=862 status=ok
// SIG undefined FUN_141a8f310(void)

longlong * FUN_141a8f310(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_res10;
  undefined8 local_res18;
  int local_60 [3];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar5 = 0;
  if (param_3 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  }
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = (&DAT_1464ca1cc)[(longlong)*(int *)((longlong)param_3 + 0x3c) * 10];
  iVar1 = FUN_141a2ea30(uVar3,0);
  *param_2 = 0;
  local_60[0] = iVar1;
  lVar6 = (**(code **)(*param_3 + 0x18))(param_3);
  local_60[2] = param_4;
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_3 + 0x10))(param_3);
    if (lVar6 == 0) {
      lVar6 = lVar5 + -0x68;
      iVar2 = FUN_141a71f60(uVar3);
      lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar7 == 0) {
        local_60[1] = 4;
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        if (iVar2 == 0x13) {
          iVar1 = iVar1 + -0x15;
LAB_141a8f576:
          if ((iVar1 == 0) || (local_54 = 1, iVar1 != 1)) goto LAB_141a8f582;
        }
        else {
          if (iVar2 == 0x2c) {
            iVar1 = iVar1 + -0x2e;
            goto LAB_141a8f576;
          }
LAB_141a8f582:
          local_54 = 0;
        }
        if (lVar6 != 0) {
          uVar8 = *(undefined8 *)(lVar6 + 0x78);
          lVar7 = operator_new(0x90);
          if (lVar7 != 0) {
            uVar8 = FUN_141a825c0(lVar7,uVar8,local_60,lVar6 + 0x80,0);
            goto LAB_141a8f5c7;
          }
        }
        goto LAB_141a8f5c4;
      }
      local_60[1] = 5;
      local_54 = 0;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      if (iVar2 == 0x13) {
        iVar1 = iVar1 + -0x15;
LAB_141a8f4fe:
        if ((iVar1 == 0) || (uVar3 = 1, iVar1 != 1)) goto LAB_141a8f50a;
      }
      else {
        if (iVar2 == 0x2c) {
          iVar1 = iVar1 + -0x2e;
          goto LAB_141a8f4fe;
        }
LAB_141a8f50a:
        uVar3 = 0;
      }
      local_50 = CONCAT44(uVar3,6);
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x78);
        lVar7 = operator_new(0x90);
        if (lVar7 != 0) {
          uVar8 = FUN_141a825c0(lVar7,uVar8,local_60,lVar6 + 0x80,0);
          goto LAB_141a8f5c7;
        }
      }
    }
    else {
      local_60[1] = 5;
      lVar6 = lVar5 + -0x70;
      local_54 = 0;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar6 + 0x68));
      iVar2 = FUN_141a71f60(uVar3);
      if (iVar2 == 0x13) {
        iVar1 = iVar1 + -0x15;
LAB_141a8f44f:
        if ((iVar1 == 0) || (uVar3 = 1, iVar1 != 1)) goto LAB_141a8f45b;
      }
      else {
        if (iVar2 == 0x2c) {
          iVar1 = iVar1 + -0x2e;
          goto LAB_141a8f44f;
        }
LAB_141a8f45b:
        uVar3 = 0;
      }
      local_50 = CONCAT44(uVar3,(undefined4)local_50);
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x80);
        lVar7 = operator_new(0x90);
        if (lVar7 != 0) {
          uVar8 = FUN_141a825c0(lVar7,uVar8,local_60,lVar6 + 0x88,0);
          goto LAB_141a8f5c7;
        }
      }
    }
  }
  else {
    local_60[1] = 8;
    lVar6 = lVar5 + -0x70;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    local_54 = 0;
    local_50 = CONCAT44(local_50._4_4_,*(uint *)(lVar6 + 0x68) >> ((byte)param_4 & 0x1f));
    if (lVar6 != 0) {
      uVar8 = *(undefined8 *)(lVar6 + 0x80);
      local_res18 = 0;
      lVar7 = operator_new(0x90);
      if (lVar7 != 0) {
        uVar8 = FUN_141a825c0(lVar7,uVar8,local_60,lVar6 + 0x88,local_res18);
        goto LAB_141a8f5c7;
      }
    }
  }
LAB_141a8f5c4:
  uVar8 = 0;
LAB_141a8f5c7:
  TRefCountPtr<FRHITexture>::operator=(param_2,uVar8);
  local_res10 = *param_2;
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x128));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x128));
    }
    iVar1 = *(int *)(lVar5 + 0x158);
    *(int *)(lVar5 + 0x158) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x15c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x150,iVar1);
    }
    lVar6 = local_res10;
    local_res10 = 0;
    *(longlong *)(*(longlong *)(lVar5 + 0x150) + (longlong)iVar1 * 8) = lVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x128));
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return param_2;
}



// FUNCTION 141a8f670 FUN_141a8f670 body=475 status=ok
// SIG undefined FUN_141a8f670(void)

longlong * FUN_141a8f670(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_res10;
  undefined8 local_res18;
  int local_48 [2];
  ulonglong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  
  lVar7 = 0;
  local_24 = 0;
  local_48[1] = 1;
  lVar9 = param_3 + -8;
  if (param_3 == 0) {
    lVar9 = lVar7;
  }
  iVar1 = (&DAT_1464ca1cc)[(ulonglong)param_4 * 10];
  uVar8 = (ulonglong)(*(uint *)(lVar9 + 0x24) >> 5) & 0xffffffffffffff01;
  if (iVar1 == 0x1b) {
    local_48[0] = 0x1c;
  }
  else {
    local_48[0] = 0x57;
    if (iVar1 != 0x5a) {
      local_48[0] = iVar1;
    }
  }
  uVar2 = *(ulonglong *)(lVar9 + 0x80);
  local_30 = 0;
  local_34 = 0;
  bVar10 = (char)uVar8 == '\0';
  if (bVar10) {
    uVar8 = (ulonglong)(int)(&DAT_1464ca1c4)[(ulonglong)param_4 * 10];
    local_38 = (undefined4)(*(ulonglong *)(lVar9 + 0x98) / uVar8);
    local_40 = uVar2 / uVar8;
    uVar8 = uVar2 % uVar8;
  }
  else {
    local_40 = uVar2 >> 2;
    local_48[0] = 0x27;
    local_38 = (undefined4)(*(ulonglong *)(lVar9 + 0x98) >> 2);
  }
  local_28 = (uint)!bVar10;
  if (lVar9 == 0) {
    *param_2 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar9 + 0x30);
    local_res18 = 0;
    lVar5 = operator_new(0x90,uVar8);
    lVar6 = lVar7;
    if (lVar5 != 0) {
      lVar6 = FUN_141a825c0(lVar5,uVar3,local_48,lVar9 + 0x38,local_res18);
    }
    *param_2 = lVar6;
    lVar7 = 0;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      lVar7 = *param_2;
    }
  }
  local_res10 = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0x1a0);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar1 = *(int *)(lVar9 + 0x1d8);
    *(int *)(lVar9 + 0x1d8) = iVar1 + 1;
    if (*(int *)(lVar9 + 0x1dc) < iVar1 + 1) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(lVar9 + 0x1c8,iVar1);
    }
    lVar7 = local_res10;
    lVar6 = *(longlong *)(lVar9 + 0x1d0);
    if (*(longlong *)(lVar9 + 0x1d0) == 0) {
      lVar6 = lVar9 + 0x1c8;
    }
    local_res10 = 0;
    *(longlong *)(lVar6 + (longlong)iVar1 * 8) = lVar7;
    LeaveCriticalSection(lpCriticalSection);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return param_2;
}



// FUNCTION 141a8f850 FUN_141a8f850 body=183 status=ok
// SIG undefined FUN_141a8f850(void)

undefined8
FUN_141a8f850(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  
  pbVar2 = (byte *)(param_4 + 0x20);
  if (param_4 == 0) {
    pbVar2 = &DAT_00000028;
  }
  if ((*pbVar2 & 6) == 0) {
    FUN_141a8f120(param_1,param_2,param_4,param_5,param_6);
  }
  else {
    lVar3 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar3 = param_3;
    }
    FUN_141a8f120(param_1,param_2,param_4,param_5,param_6);
    if (lVar3 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar3);
    }
  }
  return param_2;
}



// FUNCTION 141a8f910 FUN_141a8f910 body=31 status=ok
// SIG undefined FUN_141a8f910(void)

undefined8
FUN_141a8f910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  FUN_141a8f310(param_1,param_2,param_4,param_5);
  return param_2;
}



// FUNCTION 141a8f930 FUN_141a8f930 body=165 status=ok
// SIG undefined FUN_141a8f930(void)

undefined8
FUN_141a8f930(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined1 param_5)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  
  pbVar2 = (byte *)(param_4 + 0x1c);
  if (param_4 == 0) {
    pbVar2 = &DAT_00000024;
  }
  if ((*pbVar2 & 6) == 0) {
    FUN_141a8f670(param_1,param_2,param_4,param_5);
  }
  else {
    lVar3 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar3 = param_3;
    }
    FUN_141a8f670(param_1,param_2,param_4,param_5);
    if (lVar3 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar3);
    }
  }
  return param_2;
}



// FUNCTION 141a8f9e0 FUN_141a8f9e0 body=232 status=ok
// SIG undefined FUN_141a8f9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a8f9e0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_a8 [56];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar1 = (undefined8 *)FUN_141a851d0(local_a8,param_3,param_4);
  local_b8 = 0;
  local_c0 = param_5;
  local_70 = *puVar1;
  uStack_68 = puVar1[1];
  local_d8 = 0;
  local_60 = puVar1[2];
  uStack_58 = puVar1[3];
  local_50 = *(undefined4 *)(puVar1 + 4);
  uStack_4c = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_48 = *(undefined4 *)(puVar1 + 5);
  uStack_44 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_40 = puVar1[6];
  local_d0 = param_3;
  local_c8 = param_4;
  lVar2 = FUN_141a452c0(**(undefined8 **)(param_1 + 0x50),0,&local_70,4);
  if (*(char *)(lVar2 + 0xb0) != '\0') {
    *(undefined1 *)(lVar2 + 0x19) = 0;
  }
  *param_2 = lVar2 + 8;
  if (lVar2 + 8 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8fad0 FUN_141a8fad0 body=893 status=ok
// SIG undefined FUN_141a8fad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a8fad0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_4c8 [32];
  int local_4a8 [2];
  longlong *local_4a0 [2];
  undefined1 *local_490;
  longlong **local_488;
  undefined1 local_480 [1024];
  int local_80;
  int local_78;
  longlong local_74;
  longlong lStack_6c;
  longlong local_64;
  longlong lStack_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  longlong local_44;
  longlong lStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  FUN_141a235c0(local_480,param_3);
  plVar4 = (longlong *)operator_new(0x568);
  plVar8 = (longlong *)0x0;
  local_4a0[0] = plVar8;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f3ece8;
    *(undefined4 *)(plVar4 + 1) = 0;
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144db3f18;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined2 *)(plVar4 + 2) = 0x100;
    lVar7 = (longlong)local_80;
    *(int *)(plVar4 + 0x83) = local_80;
    if (local_80 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0x41c) = 0;
    }
    else {
      FUN_141a42a00(plVar4 + 3,local_80,0);
      _guard_xfg_dispatch_icall_nop(plVar4 + 3,local_480,lVar7 << 5);
    }
    iVar9 = *(int *)(param_3 + 0x100);
    *(int *)(plVar4 + 0xac) = iVar9;
    if (iVar9 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0x564) = 0;
    }
    else {
      FUN_141a09aa0(plVar4 + 0x8c,iVar9,0);
      puVar6 = (undefined1 *)((longlong)plVar4 + 0x462);
      param_3 = param_3 - (longlong)(plVar4 + 0x8c);
      do {
        puVar6[-2] = puVar6[param_3 + -2];
        puVar6[-1] = puVar6[param_3 + -1];
        *puVar6 = puVar6[param_3];
        puVar6[1] = puVar6[param_3 + 1];
        *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar6 + param_3 + 2);
        *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(puVar6 + param_3 + 4);
        puVar6 = puVar6 + 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    plVar4[0x84] = local_74;
    plVar4[0x85] = lStack_6c;
    plVar4[0x86] = local_64;
    plVar4[0x87] = lStack_5c;
    *(undefined4 *)(plVar4 + 0x88) = local_54;
    *(undefined4 *)((longlong)plVar4 + 0x444) = uStack_50;
    *(undefined4 *)(plVar4 + 0x89) = uStack_4c;
    *(undefined4 *)((longlong)plVar4 + 0x44c) = uStack_48;
    plVar4[0x8a] = local_44;
    plVar4[0x8b] = lStack_3c;
    local_4a0[0] = plVar4;
  }
  if (local_4a0[0] != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a0[0] + 1) = (int)local_4a0[0][1] + 1;
    UNLOCK();
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd280);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd280);
  }
  lVar7 = DAT_1469fd2a8;
  if (DAT_1469fd2b0 != DAT_1469fd2dc) {
    puVar5 = DAT_1469fd2e8;
    if (DAT_1469fd2e8 == (undefined *)0x0) {
      puVar5 = &DAT_1469fd2e0;
    }
    iVar9 = *(int *)(puVar5 + ((longlong)DAT_1469fd2f0 - 1U & (longlong)local_78) * 4);
    while (iVar9 != -1) {
      plVar4 = (longlong *)((longlong)iVar9 * 0x460 + lVar7);
      if ((((int)plVar4[0x80] == local_80) &&
          (iVar3 = _guard_xfg_dispatch_icall_nop(plVar4,local_480,(longlong)(int)plVar4[0x80] << 5),
          iVar3 == 0)) &&
         (iVar3 = _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar4 + 0x40c),&local_74,0x40),
         iVar3 == 0)) {
        if (iVar9 != -1) goto LAB_141a8fd31;
        break;
      }
      iVar9 = (int)plVar4[0x8b];
    }
  }
  plVar4 = plVar8;
LAB_141a8fd31:
  plVar10 = plVar4 + 0x8a;
  if (plVar4 == (longlong *)0x0) {
    plVar10 = plVar8;
  }
  if (plVar10 == (longlong *)0x0) {
    local_490 = local_480;
    local_488 = local_4a0;
    FUN_141a813d0(&DAT_1469fd2a8,local_4a8,&local_490,0);
    plVar10 = (longlong *)(DAT_1469fd2a8 + 0x450 + (longlong)local_4a8[0] * 0x460);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd280);
  plVar4 = local_4a0[0];
  if (local_4a0[0] != (longlong *)0x0) {
    LOCK();
    plVar8 = local_4a0[0] + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      if (((char)local_4a0[0][2] == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar1 = FOutputDevice::CanBeUsedOnAnyThread(), cVar1 == '\0')))
         ) {
        LOCK();
        bVar11 = *(int *)((longlong)plVar4 + 0xc) == 0;
        if (bVar11) {
          *(int *)((longlong)plVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar11) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,plVar4);
        }
      }
      else {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  lVar7 = *plVar10;
  *param_2 = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8fe50 FUN_141a8fe50 body=337 status=ok
// SIG undefined FUN_141a8fe50(void)

undefined8 *
FUN_141a8fe50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,int param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)0x0;
  if (param_7 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469fd448) &&
       (_Init_thread_header(&DAT_1469fd448), DAT_1469fd448 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultBackBufferPixelFormat")
      ;
      puVar5 = puVar3;
      if (plVar4 != (longlong *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x38))(plVar4);
      }
      DAT_1469fd440 = puVar5;
      _Init_thread_footer(&DAT_1469fd448);
    }
    uVar1 = EDefaultBackBufferPixelFormat::FromInt(*DAT_1469fd440);
    param_7 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar1);
  }
  lVar2 = operator_new(0x1b0);
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)
             FUN_141a94af0(lVar2,**(undefined8 **)(param_1 + 0x50),param_3,param_4,param_5,param_6,
                           param_7);
  }
  FUN_141a97070(puVar3);
  *param_2 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[2] = puVar3[2] + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8ffb0 FUN_141a8ffb0 body=634 status=ok
// SIG undefined FUN_141a8ffb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a8ffb0(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  bool bVar10;
  LARGE_INTEGER local_res10;
  
  *(int *)(param_1 + 0x36) = (int)param_1[0x36] + -1;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_1469fd478) && (_Init_thread_header(&DAT_1469fd478), DAT_1469fd478 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469fd470 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHILogBeginEndScopes");
    _Init_thread_footer(&DAT_1469fd478);
  }
  if (DAT_1469fd470 != (longlong *)0x0) {
    (**(code **)(*DAT_1469fd470 + 0x68))();
  }
  lVar8 = 0;
  puVar3 = *(undefined8 **)(param_1[0x2e] + 0x720);
  *(undefined8 *)(param_1[0x2e] + 0x720) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar10) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar10) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((DAT_1469fd220 != 0) && (lVar5 = (**(code **)(*param_1 + 0x308))(param_1), lVar5 != 0)) {
    FUN_141a70af0(DAT_1469fd220,lVar5);
  }
  cVar4 = FUN_141a8aba0(param_2,param_4);
  if (cVar4 != '\0') {
    if ((*piVar9 < DAT_1469fd488) && (_Init_thread_header(&DAT_1469fd488), DAT_1469fd488 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FinishCurrentFrame");
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_1469fd480 = lVar8;
      _Init_thread_footer(&DAT_1469fd488);
    }
    if (*(int *)(DAT_1469fd480 + 4) == 0) {
      FUN_141a98990(param_2 + 0x118,*(undefined8 *)(param_2 + 0x198));
      uVar6 = FUN_141a7d100(param_2 + 0x118,0);
      *(undefined8 *)(param_2 + 0x198) = uVar6;
    }
    else {
      uVar6 = FUN_141a7d100(param_2 + 0x118,0);
      *(undefined8 *)(param_2 + 0x198) = uVar6;
      FUN_141a98990(param_2 + 0x118,uVar6);
    }
  }
  if (DAT_1464cabea != '\0') {
    FUN_141a98990(param_2 + 0x118,*(undefined8 *)(param_2 + 0x198));
    QueryPerformanceCounter(&local_res10);
    _DAT_1464cabf0 = local_res10.s.LowPart - _DAT_1464cabec;
    DAT_1464cabea = '\0';
  }
  return;
}



// FUNCTION 141a90230 FUN_141a90230 body=52 status=ok
// SIG undefined FUN_141a90230(void)

void FUN_141a90230(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  FUN_141a5e390(*(undefined8 *)(**(longlong **)(param_1 + 0x50) + 0xd50),0,0);
  return;
}



// FUNCTION 141a90270 FUN_141a90270 body=31 status=ok
// SIG undefined FUN_141a90270(void)

void FUN_141a90270(void)

{
  FUN_141a90290();
  return;
}



// FUNCTION 141a90290 FUN_141a90290 body=1025 status=ok
// SIG undefined FUN_141a90290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a90290(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  short *psVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined8 *local_210;
  char local_208;
  longlong *local_200;
  uint local_1f8 [2];
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  short local_1d8 [48];
  undefined1 local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  iVar16 = 0;
  local_1f0 = (longlong *)0x0;
  plVar3 = *(longlong **)(**(longlong **)(param_1 + 0x50) + 0x728);
  local_208 = param_3;
  iVar5 = (**(code **)(*plVar3 + 0x38))
                    (plVar3,*(undefined4 *)(**(longlong **)(param_1 + 0x50) + 0x48),&local_1f0);
  if (((iVar5 != -0x7785fffe) && (-1 < iVar5)) &&
     (iVar5 = (**(code **)(*local_1f0 + 0x40))(local_1f0,local_178), -1 < iVar5)) {
    if (1 < (int)param_4[1]) {
      do {
        local_200 = (longlong *)0x0;
        iVar5 = (**(code **)(*local_1f0 + 0x38))(local_1f0,iVar16,&local_200);
        if (iVar5 == -0x7785fffe) {
          iVar16 = 1;
          if (local_200 != (longlong *)0x0) {
            (**(code **)(*local_200 + 0x10))();
          }
          break;
        }
        if (iVar5 < 0) goto LAB_141a9060f;
        (**(code **)(*local_200 + 0x38))(local_200,local_1d8);
        iVar16 = iVar16 + 1;
        if (local_200 != (longlong *)0x0) {
          (**(code **)(*local_200 + 0x10))();
        }
        if ((int)param_4[1] == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*param_4;
        }
        psVar6 = local_1d8;
        lVar13 = (longlong)puVar12 - (longlong)psVar6;
        do {
          sVar1 = *psVar6;
          sVar2 = *(short *)((longlong)psVar6 + lVar13);
          if (sVar1 != sVar2) break;
          psVar6 = psVar6 + 1;
        } while (sVar2 != 0);
      } while (sVar1 != sVar2);
      iVar16 = iVar16 + -1;
    }
LAB_141a903e0:
    uVar10 = 0;
    local_200 = (longlong *)0x0;
    iVar5 = (**(code **)(*local_1f0 + 0x38))(local_1f0,iVar16);
    if (iVar5 == -0x7785fffe) {
      if (local_200 != (longlong *)0x0) {
        (**(code **)(*local_200 + 0x10))();
      }
      goto LAB_141a90647;
    }
    if (iVar5 < 0) goto LAB_141a9060f;
    local_1f8[0] = 0;
    local_218 = 0;
    iVar5 = (**(code **)(*local_200 + 0x40))(local_200,0x1c,0,local_1f8);
    if (iVar5 == -0x7785fffe) {
      if (local_200 != (longlong *)0x0) {
        (**(code **)(*local_200 + 0x10))();
      }
    }
    else {
      if (iVar5 == -0x7785ffde) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x364,
                   L"This application cannot be run over a remote desktop configuration");
        FDebug::AssertFailed
                  (&DAT_144daba7e,"Unknown",0x364,
                   L"This application cannot be run over a remote desktop configuration");
LAB_141a9060f:
        if (local_200 != (longlong *)0x0) {
          (**(code **)(*local_200 + 0x10))();
        }
        goto LAB_141a9061f;
      }
      uVar7 = SUB168(ZEXT816(0x1c) * ZEXT416(local_1f8[0]),0);
      if (SUB168(ZEXT816(0x1c) * ZEXT416(local_1f8[0]),8) != 0) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar13 = operator_new(uVar7);
      local_218 = lVar13;
      iVar5 = (**(code **)(*local_200 + 0x40))();
      if (iVar5 < 0) {
        local_210 = &local_1e8;
        local_1e8 = 0;
        local_1e0 = 0;
        local_218 = 0;
        FUN_141a94000(iVar5,"Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                      ,0x36b);
      }
      uVar14 = local_1f8[0];
      if (local_1f8[0] != 0) {
        do {
          puVar11 = (uint *)(uVar10 * 0x1c + lVar13);
          if ((*puVar11 < 0x28f1) && (puVar11[1] < 0x28f1)) {
            if (param_3 == '\0') {
              if (puVar11[3] * 0x28f0 < puVar11[2]) goto LAB_141a90596;
            }
            else {
              iVar5 = 0;
              if (0 < (int)param_2[1]) {
                puVar8 = (uint *)*param_2;
                do {
                  if ((*puVar8 == *puVar11) && (puVar8[1] == puVar11[1])) goto LAB_141a90596;
                  iVar5 = iVar5 + 1;
                  puVar8 = puVar8 + 3;
                } while (iVar5 < (int)param_2[1]);
              }
            }
            lVar9 = (longlong)(int)param_2[1];
            iVar5 = (int)param_2[1] + 1;
            *(int *)(param_2 + 1) = iVar5;
            if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
            }
            lVar4 = *param_2;
            *(undefined8 *)(lVar4 + lVar9 * 0xc) = 0;
            *(undefined4 *)(lVar4 + 8 + lVar9 * 0xc) = 0;
            puVar8 = (uint *)(*param_2 + lVar9 * 0xc);
            *puVar8 = *puVar11;
            puVar8[1] = puVar11[1];
            puVar8[2] = puVar11[2] / puVar11[3];
            param_3 = local_208;
            uVar14 = local_1f8[0];
          }
LAB_141a90596:
          uVar15 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar15;
        } while (uVar15 < uVar14);
      }
      FMemory::operator_delete(lVar13);
      iVar16 = iVar16 + 1;
      if (local_200 != (longlong *)0x0) {
        (**(code **)(*local_200 + 0x10))();
      }
    }
    if (0 < iVar16) {
LAB_141a90647:
      if (local_1f0 != (longlong *)0x0) {
        (**(code **)(*local_1f0 + 0x10))();
      }
      if (*param_4 != 0) {
        FMemory::Free();
      }
      return 1;
    }
    goto LAB_141a903e0;
  }
LAB_141a9061f:
  if (local_1f0 != (longlong *)0x0) {
    (**(code **)(*local_1f0 + 0x10))();
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 141a906c0 FUN_141a906c0 body=547 status=ok
// SIG undefined FUN_141a906c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a906c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_2 = DAT_1469fd200;
  param_2[1] = DAT_1469fd208;
  param_2[2] = DAT_1469fd210;
  lVar1 = -1;
  if (DAT_1469fd218 != 0) {
    lVar1 = DAT_1469fd218;
  }
  param_2[3] = lVar1;
  lVar1 = (longlong)DAT_146ab6300;
  param_2[4] = lVar1 << 10;
  param_2[5] = lVar1 << 10;
  param_2[6] = DAT_146ab6308;
  *(undefined4 *)(param_2 + 7) = 0;
  FUN_141a559a0(**(undefined8 **)(param_1 + 0x50),&local_38);
  param_2[10] = local_28;
  param_2[0xb] = local_20;
  param_2[8] = local_38;
  param_2[9] = local_30;
  if (DAT_1469fd1f0 != 0) {
    fVar5 = (float)(longlong)local_38;
    if ((longlong)local_38 < 0) {
      fVar5 = fVar5 + 1.8446744e+19;
    }
    lVar3 = (longlong)(fVar5 * 0.9);
    param_2[3] = lVar3;
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar1 = lVar3 - local_30;
    lVar4 = (longlong)((float)lVar3 * 0.05);
    if (lVar1 < 0) {
      lVar1 = (lVar2 - lVar4) + lVar1;
      lVar3 = 0x6400000;
      if (0x63fffff < lVar1) {
        lVar3 = lVar1;
      }
      param_2[6] = lVar3;
      if (((local_38 < local_30) && (lVar2 <= lVar3)) && (0x6400000 < lVar3)) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x2ec,
                   L"Video memory usage is overbudget by %llu MB and the texture pool size didn\'t shrink."
                   ,local_30 - local_38 >> 0x14);
        local_48 = local_30 - local_38 >> 0x14;
        FDebug::AssertFailed
                  (L"","Unknown",0x2ec,
                   L"Video memory usage is overbudget by %llu MB and the texture pool size didn\'t shrink."
                  );
      }
    }
    else {
      if (lVar4 < lVar1) {
        lVar1 = (lVar2 - lVar4) + lVar1;
        lVar4 = lVar1;
        if (0 < DAT_146ab6310) {
          lVar4 = (longlong)(float)(int)((float)DAT_146ab6310 * 9.536743e-09 * (float)lVar3) << 0x14
          ;
        }
        lVar2 = 0x7fffffffffffffff;
        if (0 < DAT_146ab6308) {
          lVar2 = DAT_146ab6308;
        }
        if (lVar1 <= lVar2) {
          lVar2 = lVar1;
        }
        if (lVar4 <= lVar2) {
          lVar2 = lVar4;
        }
      }
      param_2[6] = lVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = param_2[6];
  return;
}



// FUNCTION 141a90910 FUN_141a90910 body=70 status=ok
// SIG undefined FUN_141a90910(void)

longlong * FUN_141a90910(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread(param_3);
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(param_3 + 0xa8);
  }
  else {
    lVar2 = *(longlong *)(param_3 + 0x100);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a90970 FUN_141a90970 body=48 status=ok
// SIG undefined FUN_141a90970(void)

void FUN_141a90970(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = param_2 + -8;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141a46180(param_1,0,lVar1,param_3,param_4,param_5);
  return;
}



// FUNCTION 141a909f0 FUN_141a909f0 body=175 status=ok
// SIG undefined FUN_141a909f0(void)

void FUN_141a909f0(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  
  FUN_141a52eb0(**(undefined8 **)(*(longlong *)(**(longlong **)(param_1 + 0x50) + 0xd50) + 0x5d8),
                param_2 + 0x80);
  if (param_3 == 1) {
    iVar1 = 1;
  }
  else if (param_3 == 2) {
    iVar1 = 2;
  }
  else if (param_3 == 3) {
    iVar1 = 3;
  }
  else if (param_3 == 4) {
    iVar1 = 4;
  }
  else if (param_3 == 5) {
    iVar1 = 5;
  }
  else {
    iVar1 = 0;
  }
  FUN_141a89d10(param_2,0,param_5,iVar1 + param_4 * 6,param_6,param_7);
  return;
}



// FUNCTION 141a90aa0 FUN_141a90aa0 body=48 status=ok
// SIG undefined FUN_141a90aa0(void)

void FUN_141a90aa0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = param_2 + -8;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141a465c0(param_1,0,lVar1,param_3,param_4,param_5);
  return;
}



// FUNCTION 141a90ad0 FUN_141a90ad0 body=43 status=ok
// SIG undefined FUN_141a90ad0(void)

void FUN_141a90ad0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  FUN_141a914e0(param_2,param_3,param_4,param_5,0);
  return;
}



// FUNCTION 141a90b00 FUN_141a90b00 body=227 status=ok
// SIG undefined FUN_141a90b00(void)

void FUN_141a90b00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,int param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  if (param_6 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1469fd458) {
      _Init_thread_header(&DAT_1469fd458);
      if (DAT_1469fd458 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar2 = (longlong *)
                 (**(code **)(*DAT_1468b1f88 + 0x98))
                           (DAT_1468b1f88,L"r.DefaultBackBufferPixelFormat");
        puVar3 = (undefined4 *)0x0;
        if (plVar2 != (longlong *)0x0) {
          puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x38))(plVar2);
        }
        DAT_1469fd450 = puVar3;
        _Init_thread_footer(&DAT_1469fd458);
      }
    }
    uVar1 = EDefaultBackBufferPixelFormat::FromInt(*DAT_1469fd450);
    EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar1);
  }
  FUN_141a914e0(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 141a90bf0 FUN_141a90bf0 body=82 status=ok
// SIG undefined FUN_141a90bf0(void)

void FUN_141a90bf0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar1 = **(longlong **)(param_1 + 0x50);
  if (0 < *(int *)(lVar1 + 0x718)) {
    lVar3 = 0;
    do {
      FUN_141a95b50(*(undefined8 *)(*(longlong *)(lVar1 + 0x710) + lVar3),0);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(lVar1 + 0x718));
  }
  return;
}



// FUNCTION 141a90d20 RHIUpdateTexture3D body=396 status=ok
// SIG undefined RHIUpdateTexture3D(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FD3D12DynamicRHI::RHIUpdateTexture3D
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
               uint param_5,int param_6,longlong param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  void *_Src;
  ulonglong uVar7;
  void *_Dst;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  int local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  int iStack_e8;
  uint uStack_e4;
  uint local_e0;
  undefined1 local_d8 [48];
  uint local_a8;
  int local_a4;
  longlong local_a0;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = (longlong)*(int *)(param_2 + 0x3c);
  local_f0 = *(undefined8 *)(param_4 + 4);
  uVar1 = param_4[8];
  local_100 = *param_4;
  uStack_fc = param_4[1];
  uStack_f8 = param_4[2];
  uStack_f4 = param_4[3];
  iVar2 = (&DAT_1464ca1b8)[lVar5 * 10];
  local_118 = param_6;
  local_110 = param_7;
  iVar3 = (&DAT_1464ca1bc)[lVar5 * 10];
  uStack_e4 = (uint)((ulonglong)*(undefined8 *)(param_4 + 6) >> 0x20);
  local_128 = &local_100;
  uVar6 = ((int)(uStack_e4 + -1 + iVar3) / iVar3) * iVar3;
  _iStack_e8 = CONCAT44(uVar6,(((int)*(undefined8 *)(param_4 + 6) + -1 + iVar2) / iVar2) * iVar2);
  local_108 = param_1;
  local_e0 = uVar1;
  FUN_141a84140(param_1,local_d8,param_2,param_3);
  uVar4 = (ulonglong)uVar6 / (ulonglong)(uint)(&DAT_1464ca1bc)[lVar5 * 10];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      _Dst = (void *)((ulonglong)(local_a4 * uVar6) + local_a0);
      _Src = (void *)((ulonglong)(param_6 * uVar6) + param_7);
      uVar7 = uVar4;
      if ((int)uVar4 != 0) {
        do {
          ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)param_5);
          _Src = (void *)((longlong)_Src + (ulonglong)param_5);
          _Dst = (void *)((longlong)_Dst + (ulonglong)local_a8);
          uVar7 = uVar7 - 1;
          param_7 = local_110;
          param_6 = local_118;
        } while (uVar7 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  FUN_141a85e70(local_108,local_d8);
  return;
}



// FUNCTION 141a90eb0 RHIUpdateTextureReference body=151 status=ok
// SIG undefined RHIUpdateTextureReference(void)

void FNullDynamicRHI::RHIUpdateTextureReference
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    puVar3 = *(undefined8 **)(param_2 + 0x60);
    *(longlong *)(param_2 + 0x60) = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) != '\0') ||
           ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')
            ))) {
                    /* WARNING: Could not recover jumptable at 0x000141a90f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar3)(puVar3,1);
          return;
        }
        LOCK();
        bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar5) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar5) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141a90f50 FUN_141a90f50 body=440 status=ok
// SIG undefined FUN_141a90f50(void)

undefined8 FUN_141a90f50(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fd3a8) && (_Init_thread_header(&DAT_1469fd3a8), DAT_1469fd3a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.EnableHDROutput");
    lVar6 = 0;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fd3a0 = lVar6;
    _Init_thread_footer(&DAT_1469fd3a8);
  }
  if ((*piVar7 < DAT_1469fd3b8) && (_Init_thread_header(&DAT_1469fd3b8), DAT_1469fd3b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HardwareUpscaleAllowed");
    lVar6 = 0;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fd3b0 = lVar6;
    _Init_thread_footer(&DAT_1469fd3b8);
  }
  lVar6 = DAT_1469fd3a0;
  if (DAT_146ab632b == '\0') {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar8 = 4;
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar4 = 4;
  }
  else {
    lVar4 = 0;
  }
  lVar1 = DAT_1469fd3b0;
  if (*(int *)(lVar4 + lVar6) != 0) {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
    lVar8 = 0;
  }
  if (*(int *)(lVar8 + lVar1) == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 141a91110 FUN_141a91110 body=476 status=ok
// SIG undefined FUN_141a91110(void)

void FUN_141a91110(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x5c) == 1) {
      *(ulonglong *)(lVar1 + 0x68) =
           *(ulonglong *)(param_1 + 0x60) / (ulonglong)*(uint *)(lVar1 + 0x84);
    }
    FUN_141a75120(lVar1,lVar1 + 0x58,param_1 + 0x18);
  }
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (*(longlong **)(param_1 + 0xb8) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xb0);
  }
  plVar4 = plVar3 + *(int *)(param_1 + 0xc0);
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      FUN_141a85460(lVar1,lVar1 + 0x40,param_1 + 0x18);
    }
  }
  for (plVar3 = (longlong *)(param_1 + 0xd0); plVar3 != (longlong *)(param_1 + 0xf0);
      plVar3 = plVar3 + 1) {
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      FUN_141a853b0(lVar1,lVar1 + 0x40,param_1 + 0x18);
    }
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  }
  plVar4 = *(longlong **)(param_1 + 0x118);
  plVar3 = plVar4 + *(int *)(param_1 + 0x120);
  for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
    lVar1 = *plVar4;
    if (*(int *)(lVar1 + 0x5c) == 1) {
      *(ulonglong *)(lVar1 + 0x68) =
           *(ulonglong *)(param_1 + 0x60) / (ulonglong)*(uint *)(lVar1 + 0x84);
    }
    FUN_141a75120(lVar1,lVar1 + 0x58,param_1 + 0x18);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  }
  plVar4 = *(longlong **)(param_1 + 0x150);
  plVar3 = plVar4 + *(int *)(param_1 + 0x158);
  for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
    lVar1 = *plVar4;
    FUN_141a85510(lVar1 + 0x18,lVar1 + 0x58,param_1 + 0x18,*(undefined8 *)(lVar1 + 0x80));
  }
                    /* WARNING: Could not recover jumptable at 0x000141a912e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  return;
}



// FUNCTION 141a912f0 Release body=119 status=ok
// SIG undefined Release(void)

int TD3D12Texture2D<FD3D12BaseTexture2D>::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  puVar1 = (undefined8 *)(param_1 + -0x68);
  LOCK();
  piVar2 = (int *)(param_1 + -0x60);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x58) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar5 = *(int *)(param_1 + -0x5c) == 0;
      if (bVar5) {
        *(int *)(param_1 + -0x5c) = 1;
      }
      UNLOCK();
      if (bVar5) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar1);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141a91370 Release body=119 status=ok
// SIG undefined Release(void)

int TD3D12Texture2D<FD3D12BaseTexture2DArray>::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  puVar1 = (undefined8 *)(param_1 + -0x70);
  LOCK();
  piVar2 = (int *)(param_1 + -0x68);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x60) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar5 = *(int *)(param_1 + -100) == 0;
      if (bVar5) {
        *(int *)(param_1 + -100) = 1;
      }
      UNLOCK();
      if (bVar5) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar1);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141a913f0 Release body=118 status=ok
// SIG undefined Release(void)

int FFSR2State::Release(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    if ((*(char *)(param_1 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0'))))
    {
      LOCK();
      bVar4 = *(int *)((longlong)param_1 + 0xc) == 0;
      if (bVar4) {
        *(int *)((longlong)param_1 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar4) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,param_1);
        return 0;
      }
    }
    else {
      (**(code **)*param_1)(param_1,1);
    }
  }
  return iVar2 + -1;
}



// FUNCTION 141a91470 StopStream body=9 status=ok
// SIG undefined StopStream(void)

void CAkSrcBaseEx::StopStream(longlong param_1)

{
  FUN_141a7d3c0(param_1 + 0x40);
  return;
}



// FUNCTION 141a91480 FUN_141a91480 body=91 status=ok
// SIG undefined FUN_141a91480(void)

void FUN_141a91480(longlong param_1)

{
  longlong lVar1;
  
  FUN_141a7d3c0(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x5c) == 1) {
      *(ulonglong *)(lVar1 + 0x68) =
           *(ulonglong *)(param_1 + 0x80) / (ulonglong)*(uint *)(lVar1 + 0x84);
    }
    FUN_141a75120(lVar1,lVar1 + 0x58,param_1 + 0x38);
  }
  return;
}



// FUNCTION 141a914e0 FUN_141a914e0 body=805 status=ok
// SIG undefined FUN_141a914e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a914e0(longlong param_1,int param_2,int param_3,char param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  long lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar9 = 0;
  FUN_141ee24f0();
  AK::MemoryMgr::StartProfileThreadUsage(lVar9);
  FUN_141a50f00(lVar1);
  lVar1 = *(longlong *)(lVar1 + 0xd50);
  FUN_141a524e0(**(undefined8 **)(lVar1 + 0x5d8));
  if (DAT_1464c9c58 != '\0') {
    FUN_141a524e0(**(undefined8 **)(lVar1 + 0x620));
  }
  if (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 8))();
  }
  uVar10 = 0;
  uVar8 = uVar10;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x88);
      iVar4 = (int)uVar8;
      lVar1 = (longlong)iVar4 * 8;
      lVar2 = *(longlong *)(lVar6 + (longlong)iVar4 * 8);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x10) = 1;
        *(undefined1 *)(*(longlong *)(lVar2 + 0x90) + 0xb6) = 0;
        lVar6 = *(longlong *)(param_1 + 0x88);
      }
      lVar2 = *(longlong *)(lVar6 + lVar1);
      *(undefined8 *)(lVar6 + lVar1) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
      }
      lVar6 = *(longlong *)(param_1 + 0xc0);
      lVar2 = *(longlong *)(lVar6 + lVar1);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x10) = 1;
        *(undefined1 *)(*(longlong *)(lVar2 + 0x90) + 0xb6) = 0;
        lVar6 = *(longlong *)(param_1 + 0xc0);
      }
      lVar2 = *(longlong *)(lVar6 + lVar1);
      *(undefined8 *)(lVar6 + lVar1) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
      }
      lVar6 = *(longlong *)(param_1 + 0xf0);
      if (*(longlong *)(lVar6 + lVar1) != 0) {
        *(undefined1 *)(*(longlong *)(*(longlong *)(lVar6 + lVar1) + 0x90) + 0xb6) = 0;
        lVar6 = *(longlong *)(param_1 + 0xf0);
      }
      lVar2 = *(longlong *)(lVar6 + lVar1);
      *(undefined8 *)(lVar6 + lVar1) = 0;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
      }
      uVar8 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < *(uint *)(param_1 + 0x98));
  }
  if (param_5 == 0) {
    param_5 = *(int *)(param_1 + 0x60);
  }
  if (((*(int *)(param_1 + 0x54) != param_2) || (*(int *)(param_1 + 0x58) != param_3)) ||
     (*(int *)(param_1 + 0x60) != param_5)) {
    *(int *)(param_1 + 0x54) = param_2;
    *(int *)(param_1 + 0x58) = param_3;
    *(int *)(param_1 + 0x60) = param_5;
  }
  if (*(char *)(param_1 + 0x5c) != param_4) {
    *(char *)(param_1 + 0x5c) = param_4;
    *(undefined1 *)(param_1 + 100) = 0;
    if (DAT_1464c11c0 != '\0') {
      FUN_141a95b50(param_1,1);
    }
  }
  FUN_141a98070(param_1);
  if ((DAT_1464c11c0 != '\0') && (param_4 != '\0')) {
    local_68 = *(undefined4 *)(param_1 + 0x54);
    local_64 = *(undefined4 *)(param_1 + 0x58);
    local_60 = 0;
    local_58 = FUN_141a30560(*(undefined4 *)(param_1 + 0x60));
    local_54 = 0;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x70))
                      (*(longlong **)(param_1 + 0x68),&local_68);
    if (iVar4 < 0) {
      FUN_141a95b50(param_1,1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fd438) && (_Init_thread_header(&DAT_1469fd438), DAT_1469fd438 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    uVar8 = uVar10;
    if (plVar7 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_1469fd430 = uVar8;
    _Init_thread_footer(&DAT_1469fd438);
  }
  uVar8 = DAT_1469fd430;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    uVar10 = 4;
  }
  iVar4 = *(int *)(uVar8 + uVar10);
  if (((DAT_146ab632a == '\0') || (cVar3 = FUN_141ee41d0(), cVar3 == '\0')) || (iVar4 == 0)) {
    FUN_141a987f0(param_1);
  }
  else {
    FUN_141a960c0(param_1);
  }
  return;
}



// FUNCTION 141a91810 ResizeShrink body=144 status=ok
// SIG undefined ResizeShrink(void)

void TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar2 < 5) {
    uVar2 = 4;
    goto LAB_141a91879;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 2)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 2,0);
        uVar3 = *(uint *)(param_1 + 0x1c);
        uVar2 = (uint)(uVar1 >> 2);
      }
      goto LAB_141a91879;
    }
    if (uVar2 == 0) goto LAB_141a91879;
  }
  uVar2 = uVar3;
LAB_141a91879:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x1c) = uVar2;
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x18),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 141a918a0 SafeCreateDXGIFactory body=58 status=ok
// SIG undefined SafeCreateDXGIFactory(void)

void SafeCreateDXGIFactory(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FCommandLine::Get();
  DAT_1469fd22d = FParse::Param(uVar1,L"quad_buffer_stereo");
  _guard_xfg_dispatch_icall_nop(&DAT_144db4338,param_1);
  return;
}



// FUNCTION 141a918e0 FUN_141a918e0 body=538 status=ok
// SIG undefined FUN_141a918e0(void)

void FUN_141a918e0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_res18;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  uVar2 = (ulonglong)param_6;
  uVar5 = (param_7 & 0x40000 | 0x20000) >> 0x11;
  uVar6 = (ulonglong)(int)(&DAT_1464ca1b8)[uVar2 * 10];
  uVar7 = (ulonglong)(int)(&DAT_1464ca1bc)[uVar2 * 10];
  uVar3 = uVar6;
  if (uVar6 <= (ulonglong)param_3[2]) {
    uVar3 = param_3[2];
  }
  uVar4 = uVar7;
  if (uVar7 <= *(uint *)(param_3 + 3)) {
    uVar4 = (ulonglong)*(uint *)(param_3 + 3);
  }
  if (uVar5 == 1) {
    local_58 = *param_3;
    uStack_50 = param_3[1];
    local_48 = param_3[2];
    uStack_40 = param_3[3];
    local_38 = *(undefined4 *)(param_3 + 4);
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_30 = *(undefined4 *)(param_3 + 5);
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_28 = param_3[6];
    iVar1 = FUN_141a50bc0(param_1 + 0x6c0,param_7,&local_58,param_4,param_5,param_8);
    if (iVar1 < 0) {
      FUN_141a93aa0(iVar1,
                    "pDevice->GetTextureAllocator().AllocateTexture(Flags, TextureDesc, ClearValue, *OutTexture2D, InitialState)"
                    ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp",
                    0x36f,*(undefined4 *)(param_3 + 2),*(undefined4 *)(param_3 + 3),
                    *(undefined2 *)((longlong)param_3 + 0x1c),*(undefined1 *)(param_3 + 4),
                    *(undefined2 *)((longlong)param_3 + 0x1e),*(undefined4 *)(param_3 + 6));
    }
  }
  else if (uVar5 == 3) {
    local_res18 = 0;
    iVar1 = FUN_141a6e3f0(param_2,3,
                          ((((uVar3 - 1) + uVar6) / uVar6) *
                           (longlong)(int)(&DAT_1464ca1c4)[uVar2 * 10] + 0xff & 0xffffffffffffff00)
                          * (((uVar4 - 1) + uVar7) / uVar7) + 0x1ff & 0xfffffffffffffe00,
                          &local_res18,in_stack_ffffffffffffff78 & 0xffffffff00000000);
    if (iVar1 < 0) {
      FUN_141a93aa0(iVar1,"Adapter->CreateBuffer(heapType, MipBytesAligned, &Resource)",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp",
                    0x34f,*(undefined4 *)(param_3 + 2),*(undefined4 *)(param_3 + 3),
                    *(undefined2 *)((longlong)param_3 + 0x1c),*(undefined1 *)(param_3 + 4),
                    *(undefined2 *)((longlong)param_3 + 0x1e),*(undefined4 *)(param_3 + 6));
    }
    FUN_141a50de0(param_5,local_res18,0,0);
  }
  return;
}



// FUNCTION 141a91b00 SafeTestD3D12CreateDevice body=198 status=ok
// SIG undefined SafeTestD3D12CreateDevice(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
SafeTestD3D12CreateDevice
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = 0xc0000000c100;
  uStack_30 = 0xb0000000b100;
  local_60 = (longlong *)0x0;
  iVar1 = _guard_xfg_dispatch_icall_nop(0xc0000000c100,param_2,&DAT_144da61b8,&local_60);
  if (iVar1 < 0) {
    uVar3 = 0;
  }
  else {
    local_48 = 0;
    local_50 = &local_38;
    local_58 = 4;
    iVar1 = (**(code **)(*local_60 + 0x68))(local_60,2,&local_58);
    uVar2 = (int)param_2;
    if (-1 < iVar1) {
      uVar2 = (undefined4)local_48;
    }
    *param_3 = uVar2;
    uVar2 = (**(code **)(*local_60 + 0x38))();
    *param_4 = uVar2;
    (**(code **)(*local_60 + 0x10))();
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141a91bd0 SetCustomPresent body=132 status=ok
// SIG undefined SetCustomPresent(void)

void FD3D12Viewport::SetCustomPresent(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x1a0);
  *(longlong *)(param_1 + 0x1a0) = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')))
         ) {
                    /* WARNING: Could not recover jumptable at 0x000141a91c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      LOCK();
      bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar5) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar5) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141a91c60 FUN_141a91c60 body=105 status=ok
// SIG undefined FUN_141a91c60(void)

void FUN_141a91c60(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulonglong)param_2;
  FUN_141a85610();
  iVar1 = *(int *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xc0) = iVar1 + param_2;
  if (*(int *)(param_1 + 0xc4) < (int)(iVar1 + param_2)) {
    FUN_1407eebb0(param_1 + 0xb0,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    lVar2 = param_1 + 0xb0;
  }
  puVar4 = (undefined8 *)(lVar2 + (longlong)iVar1 * 8);
  if (param_2 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}



// FUNCTION 141a91cd0 FUN_141a91cd0 body=108 status=ok
// SIG undefined FUN_141a91cd0(void)

void FUN_141a91cd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0xb0;
  FUN_141a85610(lVar1,1);
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xc4) < iVar2 + 1) {
    FUN_1407eebb0(lVar1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    lVar3 = lVar1;
  }
  *(longlong *)(lVar3 + (longlong)iVar2 * 8) = param_2;
  return;
}



// FUNCTION 141a91d40 FUN_141a91d40 body=184 status=ok
// SIG undefined FUN_141a91d40(void)

void FUN_141a91d40(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_3 < *(uint *)(param_1 + 0xc0)) {
    lVar5 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar5 = param_1 + 0xb0;
    }
    lVar3 = *(longlong *)(lVar5 + (longlong)(int)param_3 * 8);
    *(longlong *)(lVar5 + (longlong)(int)param_3 * 8) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x60);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(lVar3 + 0x68) != '\0') ||
           ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')
            ))) {
                    /* WARNING: Could not recover jumptable at 0x000141a91deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)(lVar3 + 0x58))(lVar3 + 0x58,1);
          return;
        }
        LOCK();
        bVar6 = *(int *)(lVar3 + 100) == 0;
        if (bVar6) {
          *(int *)(lVar3 + 100) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,lVar3 + 0x58);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141a91e00 SetResourceState body=9 status=ok
// SIG undefined SetResourceState(void)

void CResourceState::SetResourceState(uint *param_1,uint param_2)

{
  *param_1 = param_2 | 0x80000000;
  return;
}



// FUNCTION 141a91e10 SetSubresourceState body=163 status=ok
// SIG undefined SetSubresourceState(void)

void CResourceState::SetSubresourceState(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  
  if ((param_2 != -1) && (uVar1 = param_1[8], uVar1 != 1)) {
    uVar2 = *param_1;
    uVar5 = 0;
    if ((int)uVar2 < 0) {
      if (uVar1 != 0) {
        do {
          puVar4 = *(uint **)(param_1 + 6);
          if (*(uint **)(param_1 + 6) == (uint *)0x0) {
            puVar4 = param_1 + 2;
          }
          lVar3 = (longlong)(int)uVar5;
          uVar5 = uVar5 + 1;
          puVar4[lVar3] = (int)(*param_1 * 2) >> 1;
        } while (uVar5 < uVar1);
        uVar2 = *param_1;
      }
      *param_1 = uVar2 & 0x7fffffff;
    }
    puVar4 = *(uint **)(param_1 + 6);
    if (*(uint **)(param_1 + 6) == (uint *)0x0) {
      puVar4 = param_1 + 2;
    }
    puVar4[param_2] = param_3;
    return;
  }
  *param_1 = param_3 | 0x80000000;
  return;
}



// FUNCTION 141a91ec0 FUN_141a91ec0 body=49 status=ok
// SIG undefined FUN_141a91ec0(void)

undefined4 * FUN_141a91ec0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  param_2[1] = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(param_2 + 2) = 0;
  uVar1 = FUN_141a30560(uVar1);
  param_2[4] = uVar1;
  *(undefined8 *)(param_2 + 5) = uVar2;
  return param_2;
}



// FUNCTION 141a91f00 FUN_141a91f00 body=25 status=ok
// SIG undefined FUN_141a91f00(void)

void FUN_141a91f00(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    return;
  }
  return;
}



// FUNCTION 141a91f60 FUN_141a91f60 body=834 status=ok
// SIG undefined FUN_141a91f60(void)

void FUN_141a91f60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  BOOL BVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong local_88 [2];
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fd420) {
    _Init_thread_header(&DAT_1469fd420);
    if (DAT_1469fd420 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd3f8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1469fd3f8,4000);
      atexit((_func_5014 *)&LAB_143e86530);
      _Init_thread_footer(&DAT_1469fd420);
    }
  }
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd3f8);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd3f8);
  }
  DAT_1468c2174 = 1;
  DAT_1468e222a = 1;
  if (DAT_146ab6358 != (longlong *)0x0) {
    (**(code **)(*DAT_146ab6358 + 0x6f0))();
  }
  lVar7 = *(longlong *)(**(longlong **)(DAT_1469fd070 + 0x50) + 0xd50);
  lVar3 = **(longlong **)(DAT_1469fd070 + 0x50) + 0xb30;
  cVar5 = FUN_141a8a2c0(lVar3,*(undefined8 *)(lVar7 + 0x30));
  if (cVar5 != '\0') {
    cVar5 = FUN_141a8a2c0(lVar3,*(undefined8 *)(lVar7 + 0x40));
    if (cVar5 != '\0') {
      FUN_141a8a2c0(lVar3,*(undefined8 *)(lVar7 + 0x38));
    }
  }
  lVar3 = DAT_1469fd070;
  uVar9 = *(undefined8 *)(**(longlong **)(DAT_1469fd070 + 0x50) + 0xd50);
  if (param_1 != 0) {
    lVar7 = mu::Mesh::GetFaceBuffers(uVar9);
    if (param_1 != lVar7) goto LAB_141a92076;
  }
  uVar8 = mu::Mesh::GetFaceBuffers(uVar9);
  cVar5 = FUN_141a81ac0(uVar8);
  if (cVar5 == '\0') {
    uVar9 = mu::Mesh::GetFaceBuffers(uVar9);
    FUN_141a81670(uVar9);
  }
LAB_141a92076:
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_70,L"GPU Crashed or D3D Device Removed.\n",L"Developer.MessageLog",
                     L"GPU Crashed");
  FUN_141a83db0(local_88,uVar9);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_68 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (*(char *)(**(longlong **)(lVar3 + 0x50) + 0x3d) == '\0') {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Use -d3ddebug to enable the D3D debug device.",
                       L"Developer.MessageLog",L"D3D Debug Device");
    FUN_141a83db0(local_88,uVar9);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  if (*(int *)(**(longlong **)(lVar3 + 0x50) + 0x40) == 0) {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Use -gpucrashdebugging to track current GPU state.",
                       L"Developer.MessageLog",L"GPU Crash Debugging disabled");
    FUN_141a83db0(local_88,uVar9);
    plVar10 = local_20;
  }
  else {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Check log for GPU state information.",L"Developer.MessageLog",
                       L"GPU Crash Debugging enabled");
    FUN_141a83db0(local_88,uVar9);
    plVar10 = local_38;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)FUN_141672640();
  (**(code **)(*plVar10 + 0x48))(plVar10);
  plVar10 = (longlong *)FUN_141672640();
  (**(code **)(*plVar10 + 0x18))(plVar10);
  IsDebuggerPresent();
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a922b0 FUN_141a922b0 body=230 status=ok
// SIG undefined FUN_141a922b0(void)

void FUN_141a922b0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_2 == '\0') {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,
                       L"Out of video memory trying to allocate a rendering resource. Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
                       ,L"D3D12RHI",L"OutOfMemory");
    puVar6 = (undefined8 *)FText::ToString(uVar5);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar6;
    }
    FUN_1416a4860(0,puVar7,L"Error");
  }
  else {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,
                       L"Out of video memory trying to allocate a texture! Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
                       ,L"Developer.MessageLog",L"OutOfVideoMemoryTextures");
    puVar6 = (undefined8 *)FText::ToString(uVar5);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar6;
    }
    FUN_1416a4860(0,puVar7,L"Error");
    local_18 = local_30;
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 141a923a0 FUN_141a923a0 body=826 status=ok
// SIG undefined FUN_141a923a0(void)

void FUN_141a923a0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong local_d8;
  longlong *plStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  iVar13 = *(int *)(param_1 + 0x34) * param_4 + param_3;
  uVar6 = *(uint *)(param_1 + 0x60) >> ((byte)param_3 & 0x1f);
  uVar4 = (&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar6) {
    uVar4 = uVar6;
  }
  uVar7 = *(uint *)(param_1 + 100) >> ((byte)param_3 & 0x1f);
  uVar6 = (&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar7) {
    uVar6 = uVar7;
  }
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar8 = *(longlong *)(param_1 + 0x210);
    if (*(longlong *)(param_1 + 0x210) == 0) {
      lVar8 = param_1 + 0x208;
    }
    iVar12 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x218) - 1U & (longlong)iVar13) * 4);
    if (iVar12 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x1d0);
      do {
        lVar9 = (longlong)iVar12 * 0x20;
        if (*(int *)(lVar9 + lVar8) == iVar13) {
          if (iVar12 == -1) {
            return;
          }
          plVar11 = (longlong *)(lVar8 + 8 + (longlong)iVar12 * 0x20);
          if (&local_d8 != plVar11) {
            local_d8 = *plVar11;
            *plVar11 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,plVar11 + 1);
          }
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x1d0),iVar12);
          uVar3 = *(undefined8 *)(param_1 + 0xc0);
          plVar11 = (longlong *)
                    FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                              (*(undefined8 *)(param_1 + 0x78));
          uVar15 = param_1 + 0x270;
          cVar5 = (**(code **)(*plVar11 + 0x798))
                            (plVar11,param_2,param_3,*(undefined4 *)(param_1 + 0x40),uVar15,uVar3);
          if ((cVar5 == '\0') && ((*(byte *)(local_d8 + 0x90) & 2) == 0)) {
            lVar8 = local_d8 + 8;
            uStack_98 = *(undefined4 *)(local_d8 + 0x8c);
            uStack_bc = 1;
            local_c8 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x50);
            local_b0 = *(undefined8 *)(local_d8 + 0x50);
            local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x18);
            uStack_94 = 0;
            uStack_88 = 0;
            uStack_9c = 1;
            uStack_c4 = uVar4;
            uStack_c0 = uVar6;
            uStack_a8 = local_c8;
            uStack_a4 = uVar4;
            uStack_a0 = uVar6;
            local_80 = iVar13;
            if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
              local_b0._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
              local_60 = *(undefined8 *)(*(longlong *)(local_d8 + 0x18) + 0x18);
              local_58 = 1;
              local_50 = (undefined4)local_b0;
              uStack_4c = local_b0._4_4_;
              uStack_3c = 1;
              uStack_34 = 0;
              uStack_48 = local_c8;
              uStack_44 = uVar4;
              local_40 = uVar6;
              uStack_38 = uStack_98;
              FUN_141a93960(param_1 + 0x68,&local_90,0,0,uVar15 & 0xffffffff00000000,&local_60);
            }
            else {
              puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar10 = puVar14 + 0x1f;
              if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x100);
                puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar10 = puVar14 + 0x1f;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar10;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar14;
              *(undefined8 **)(param_2 + 8) = puVar14 + 1;
              puVar14[1] = 0;
              *puVar14 = &PTR_FUN_144db42f8;
              puVar14[2] = param_1 + 0x68;
              puVar14[3] = local_90;
              puVar14[4] = CONCAT44(uStack_84,uStack_88);
              *(int *)(puVar14 + 5) = local_80;
              *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_7c;
              *(undefined4 *)(puVar14 + 6) = uStack_78;
              *(undefined4 *)((longlong)puVar14 + 0x34) = uStack_74;
              puVar14[9] = 0;
              *(undefined4 *)(puVar14 + 10) = 0;
              *(undefined4 *)(puVar14 + 7) = local_70;
              *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_6c;
              *(undefined4 *)(puVar14 + 8) = uStack_68;
              *(undefined4 *)((longlong)puVar14 + 0x44) = uStack_64;
              FUN_141a67840(puVar14 + 0xb,0);
              *(undefined4 *)(puVar14 + 0x1b) = (undefined4)local_b0;
              *(undefined4 *)((longlong)puVar14 + 0xdc) = local_b0._4_4_;
              *(undefined4 *)(puVar14 + 0x1c) = uStack_a8;
              *(uint *)((longlong)puVar14 + 0xe4) = uStack_a4;
              *(uint *)(puVar14 + 0x1d) = uStack_a0;
              *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_9c;
              *(undefined4 *)(puVar14 + 0x1e) = uStack_98;
              *(undefined4 *)((longlong)puVar14 + 0xf4) = uStack_94;
              (**(code **)(*(longlong *)puVar14[3] + 8))();
              FUN_141a7d3c0(puVar14 + 0xb,lVar8);
            }
          }
          plVar11 = plStack_d0;
          if (plStack_d0 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plStack_d0 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 != 1) {
            return;
          }
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 != 1) {
            return;
          }
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
          return;
        }
        iVar12 = *(int *)(lVar9 + 0x18 + lVar8);
      } while (iVar12 != -1);
    }
  }
  return;
}



// FUNCTION 141a926e0 FUN_141a926e0 body=829 status=ok
// SIG undefined FUN_141a926e0(void)

void FUN_141a926e0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong local_d8;
  longlong *plStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  iVar13 = *(int *)(param_1 + 0x34) * param_4 + param_3;
  uVar6 = *(uint *)(param_1 + 0x60) >> ((byte)param_3 & 0x1f);
  uVar4 = (&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar6) {
    uVar4 = uVar6;
  }
  uVar7 = *(uint *)(param_1 + 100) >> ((byte)param_3 & 0x1f);
  uVar6 = (&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar7) {
    uVar6 = uVar7;
  }
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
    lVar8 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar8 = param_1 + 0x210;
    }
    iVar12 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x220) - 1U & (longlong)iVar13) * 4);
    if (iVar12 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x1d8);
      do {
        lVar9 = (longlong)iVar12 * 0x20;
        if (*(int *)(lVar9 + lVar8) == iVar13) {
          if (iVar12 == -1) {
            return;
          }
          plVar11 = (longlong *)(lVar8 + 8 + (longlong)iVar12 * 0x20);
          if (&local_d8 != plVar11) {
            local_d8 = *plVar11;
            *plVar11 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,plVar11 + 1);
          }
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x1d8),iVar12);
          uVar3 = *(undefined8 *)(param_1 + 200);
          plVar11 = (longlong *)
                    FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                              (*(undefined8 *)(param_1 + 0x80));
          uVar15 = param_1 + 0x278;
          cVar5 = (**(code **)(*plVar11 + 0x798))
                            (plVar11,param_2,param_3,*(undefined4 *)(param_1 + 0x40),uVar15,uVar3);
          if ((cVar5 == '\0') && ((*(byte *)(local_d8 + 0x90) & 2) == 0)) {
            lVar8 = local_d8 + 8;
            uStack_98 = *(undefined4 *)(local_d8 + 0x8c);
            uStack_bc = 1;
            local_c8 = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x50);
            local_b0 = *(undefined8 *)(local_d8 + 0x50);
            local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18);
            uStack_94 = 0;
            uStack_88 = 0;
            uStack_9c = 1;
            uStack_c4 = uVar4;
            uStack_c0 = uVar6;
            uStack_a8 = local_c8;
            uStack_a4 = uVar4;
            uStack_a0 = uVar6;
            local_80 = iVar13;
            if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
              local_b0._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
              local_60 = *(undefined8 *)(*(longlong *)(local_d8 + 0x18) + 0x18);
              local_58 = 1;
              local_50 = (undefined4)local_b0;
              uStack_4c = local_b0._4_4_;
              uStack_3c = 1;
              uStack_34 = 0;
              uStack_48 = local_c8;
              uStack_44 = uVar4;
              local_40 = uVar6;
              uStack_38 = uStack_98;
              FUN_141a93960(param_1 + 0x70,&local_90,0,0,uVar15 & 0xffffffff00000000,&local_60);
            }
            else {
              puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar10 = puVar14 + 0x1f;
              if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x100);
                puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar10 = puVar14 + 0x1f;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar10;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar14;
              *(undefined8 **)(param_2 + 8) = puVar14 + 1;
              puVar14[1] = 0;
              *puVar14 = &PTR_FUN_144db42f8;
              puVar14[2] = param_1 + 0x70;
              puVar14[3] = local_90;
              puVar14[4] = CONCAT44(uStack_84,uStack_88);
              *(int *)(puVar14 + 5) = local_80;
              *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_7c;
              *(undefined4 *)(puVar14 + 6) = uStack_78;
              *(undefined4 *)((longlong)puVar14 + 0x34) = uStack_74;
              puVar14[9] = 0;
              *(undefined4 *)(puVar14 + 10) = 0;
              *(undefined4 *)(puVar14 + 7) = local_70;
              *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_6c;
              *(undefined4 *)(puVar14 + 8) = uStack_68;
              *(undefined4 *)((longlong)puVar14 + 0x44) = uStack_64;
              FUN_141a67840(puVar14 + 0xb,0);
              *(undefined4 *)(puVar14 + 0x1b) = (undefined4)local_b0;
              *(undefined4 *)((longlong)puVar14 + 0xdc) = local_b0._4_4_;
              *(undefined4 *)(puVar14 + 0x1c) = uStack_a8;
              *(uint *)((longlong)puVar14 + 0xe4) = uStack_a4;
              *(uint *)(puVar14 + 0x1d) = uStack_a0;
              *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_9c;
              *(undefined4 *)(puVar14 + 0x1e) = uStack_98;
              *(undefined4 *)((longlong)puVar14 + 0xf4) = uStack_94;
              (**(code **)(*(longlong *)puVar14[3] + 8))();
              FUN_141a7d3c0(puVar14 + 0xb,lVar8);
            }
          }
          plVar11 = plStack_d0;
          if (plStack_d0 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plStack_d0 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 != 1) {
            return;
          }
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 != 1) {
            return;
          }
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
          return;
        }
        iVar12 = *(int *)(lVar9 + 0x18 + lVar8);
      } while (iVar12 != -1);
    }
  }
  return;
}



// FUNCTION 141a92a20 FUN_141a92a20 body=826 status=ok
// SIG undefined FUN_141a92a20(void)

void FUN_141a92a20(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong local_d8;
  longlong *plStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar13 = *(int *)(param_1 + 0x34) * param_4 + param_3;
  uVar7 = *(uint *)(param_1 + 0x60) >> ((byte)param_3 & 0x1f);
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  uVar4 = (&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar7) {
    uVar4 = uVar7;
  }
  uVar5 = (&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar7) {
    uVar5 = uVar7;
  }
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar8 = *(longlong *)(param_1 + 0x210);
    if (*(longlong *)(param_1 + 0x210) == 0) {
      lVar8 = param_1 + 0x208;
    }
    iVar12 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x218) - 1U & (longlong)iVar13) * 4);
    if (iVar12 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x1d0);
      do {
        lVar9 = (longlong)iVar12 * 0x20;
        if (*(int *)(lVar9 + lVar8) == iVar13) {
          if (iVar12 == -1) {
            return;
          }
          plVar11 = (longlong *)(lVar8 + 8 + (longlong)iVar12 * 0x20);
          if (&local_d8 != plVar11) {
            local_d8 = *plVar11;
            *plVar11 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,plVar11 + 1);
          }
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x1d0),iVar12);
          uVar3 = *(undefined8 *)(param_1 + 0xc0);
          plVar11 = (longlong *)
                    FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                              (*(undefined8 *)(param_1 + 0x78));
          uVar15 = param_1 + 0x270;
          cVar6 = (**(code **)(*plVar11 + 0x798))
                            (plVar11,param_2,param_3,*(undefined4 *)(param_1 + 0x40),uVar15,uVar3);
          if ((cVar6 == '\0') && ((*(byte *)(local_d8 + 0x90) & 2) == 0)) {
            lVar8 = local_d8 + 8;
            uStack_98 = *(undefined4 *)(local_d8 + 0x8c);
            uStack_bc = 1;
            local_c8 = *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x50);
            local_b0 = *(undefined8 *)(local_d8 + 0x50);
            local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x18);
            uStack_94 = 0;
            uStack_88 = 0;
            uStack_9c = 1;
            uStack_c4 = uVar4;
            uStack_c0 = uVar5;
            uStack_a8 = local_c8;
            uStack_a4 = uVar4;
            uStack_a0 = uVar5;
            local_80 = iVar13;
            if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
              local_b0._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
              local_60 = *(undefined8 *)(*(longlong *)(local_d8 + 0x18) + 0x18);
              local_58 = 1;
              local_50 = (undefined4)local_b0;
              uStack_4c = local_b0._4_4_;
              uStack_3c = 1;
              uStack_34 = 0;
              uStack_48 = local_c8;
              uStack_44 = uVar4;
              local_40 = uVar5;
              uStack_38 = uStack_98;
              FUN_141a93960(param_1 + 0x68,&local_90,0,0,uVar15 & 0xffffffff00000000,&local_60);
            }
            else {
              puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar10 = puVar14 + 0x1f;
              if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x100);
                puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar10 = puVar14 + 0x1f;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar10;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar14;
              *(undefined8 **)(param_2 + 8) = puVar14 + 1;
              puVar14[1] = 0;
              *puVar14 = &PTR_FUN_144db42f8;
              puVar14[2] = param_1 + 0x68;
              puVar14[3] = local_90;
              puVar14[4] = CONCAT44(uStack_84,uStack_88);
              *(int *)(puVar14 + 5) = local_80;
              *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_7c;
              *(undefined4 *)(puVar14 + 6) = uStack_78;
              *(undefined4 *)((longlong)puVar14 + 0x34) = uStack_74;
              puVar14[9] = 0;
              *(undefined4 *)(puVar14 + 10) = 0;
              *(undefined4 *)(puVar14 + 7) = local_70;
              *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_6c;
              *(undefined4 *)(puVar14 + 8) = uStack_68;
              *(undefined4 *)((longlong)puVar14 + 0x44) = uStack_64;
              FUN_141a67840(puVar14 + 0xb,0);
              *(undefined4 *)(puVar14 + 0x1b) = (undefined4)local_b0;
              *(undefined4 *)((longlong)puVar14 + 0xdc) = local_b0._4_4_;
              *(undefined4 *)(puVar14 + 0x1c) = uStack_a8;
              *(uint *)((longlong)puVar14 + 0xe4) = uStack_a4;
              *(uint *)(puVar14 + 0x1d) = uStack_a0;
              *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_9c;
              *(undefined4 *)(puVar14 + 0x1e) = uStack_98;
              *(undefined4 *)((longlong)puVar14 + 0xf4) = uStack_94;
              (**(code **)(*(longlong *)puVar14[3] + 8))();
              FUN_141a7d3c0(puVar14 + 0xb,lVar8);
            }
          }
          plVar11 = plStack_d0;
          if (plStack_d0 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plStack_d0 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 != 1) {
            return;
          }
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 != 1) {
            return;
          }
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
          return;
        }
        iVar12 = *(int *)(lVar9 + 0x18 + lVar8);
      } while (iVar12 != -1);
    }
  }
  return;
}



// FUNCTION 141a92d60 FUN_141a92d60 body=760 status=ok
// SIG undefined FUN_141a92d60(void)

void FUN_141a92d60(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte bVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong local_d8;
  longlong *plStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  bVar10 = (byte)param_3;
  uVar4 = *(uint *)(param_1 + 0x60) >> (bVar10 & 0x1f);
  uVar3 = (&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1b8)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar4) {
    uVar3 = uVar4;
  }
  uVar5 = *(uint *)(param_1 + 100) >> (bVar10 & 0x1f);
  uVar4 = (&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10];
  if ((uint)(&DAT_1464ca1bc)[(longlong)*(int *)(param_1 + 0x3c) * 10] <= uVar5) {
    uVar4 = uVar5;
  }
  uVar6 = *(uint *)(param_1 + 0x68) >> (bVar10 & 0x1f);
  uVar5 = 1;
  if (uVar6 != 0) {
    uVar5 = uVar6;
  }
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
    lVar7 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar7 = param_1 + 0x210;
    }
    iVar12 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x220) - 1U & (longlong)param_3) * 4);
    if (iVar12 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x1d8);
      do {
        lVar8 = (longlong)iVar12 * 0x20;
        if (*(int *)(lVar8 + lVar7) == param_3) {
          if (iVar12 == -1) {
            return;
          }
          plVar11 = (longlong *)(lVar7 + 8 + (longlong)iVar12 * 0x20);
          if (&local_d8 != plVar11) {
            local_d8 = *plVar11;
            *plVar11 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,plVar11 + 1);
          }
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 0x1d8),iVar12);
          if ((*(byte *)(local_d8 + 0x90) & 2) == 0) {
            lVar7 = local_d8 + 8;
            uStack_98 = *(undefined4 *)(local_d8 + 0x8c);
            local_c8 = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x50);
            local_b0 = *(undefined8 *)(local_d8 + 0x50);
            local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18);
            uStack_94 = 0;
            uStack_88 = 0;
            uStack_c4 = uVar3;
            uStack_c0 = uVar4;
            uStack_bc = uVar5;
            uStack_a8 = local_c8;
            uStack_a4 = uVar3;
            uStack_a0 = uVar4;
            uStack_9c = uVar5;
            local_80 = param_3;
            if ((param_2 == 0) || (DAT_1468b5000 == 0)) {
              local_b0._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
              local_60 = *(undefined8 *)(*(longlong *)(local_d8 + 0x18) + 0x18);
              local_58 = 1;
              local_50 = (undefined4)local_b0;
              uStack_4c = local_b0._4_4_;
              uStack_34 = 0;
              uStack_48 = local_c8;
              uStack_44 = uVar3;
              local_40 = uVar4;
              uStack_3c = uVar5;
              uStack_38 = uStack_98;
              FUN_141a93960(param_1 + 0x70,&local_90,0,0,0,&local_60);
            }
            else {
              puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar9 = puVar13 + 0x1f;
              if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x100);
                puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar9 = puVar13 + 0x1f;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar9;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar13;
              *(undefined8 **)(param_2 + 8) = puVar13 + 1;
              puVar13[1] = 0;
              *puVar13 = &PTR_FUN_144db42f8;
              puVar13[2] = param_1 + 0x70;
              puVar13[3] = local_90;
              puVar13[4] = CONCAT44(uStack_84,uStack_88);
              *(int *)(puVar13 + 5) = local_80;
              *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_7c;
              *(undefined4 *)(puVar13 + 6) = uStack_78;
              *(undefined4 *)((longlong)puVar13 + 0x34) = uStack_74;
              puVar13[9] = 0;
              *(undefined4 *)(puVar13 + 10) = 0;
              *(undefined4 *)(puVar13 + 7) = local_70;
              *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_6c;
              *(undefined4 *)(puVar13 + 8) = uStack_68;
              *(undefined4 *)((longlong)puVar13 + 0x44) = uStack_64;
              FUN_141a67840(puVar13 + 0xb,0);
              *(undefined4 *)(puVar13 + 0x1b) = (undefined4)local_b0;
              *(undefined4 *)((longlong)puVar13 + 0xdc) = local_b0._4_4_;
              *(undefined4 *)(puVar13 + 0x1c) = uStack_a8;
              *(uint *)((longlong)puVar13 + 0xe4) = uStack_a4;
              *(uint *)(puVar13 + 0x1d) = uStack_a0;
              *(uint *)((longlong)puVar13 + 0xec) = uStack_9c;
              *(undefined4 *)(puVar13 + 0x1e) = uStack_98;
              *(undefined4 *)((longlong)puVar13 + 0xf4) = uStack_94;
              (**(code **)(*(longlong *)puVar13[3] + 8))();
              FUN_141a7d3c0(puVar13 + 0xb,lVar7);
            }
          }
          plVar11 = plStack_d0;
          if (plStack_d0 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plStack_d0 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 != 1) {
            return;
          }
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 != 1) {
            return;
          }
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
          return;
        }
        iVar12 = *(int *)(lVar8 + 0x18 + lVar7);
      } while (iVar12 != -1);
    }
  }
  return;
}



// FUNCTION 141a93060 FUN_141a93060 body=118 status=ok
// SIG undefined FUN_141a93060(void)

void FUN_141a93060(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,char param_6)

{
  if (param_6 != '\0') {
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    param_2 = 0;
  }
  FUN_141a923a0(param_3,param_2,param_4,0);
  return;
}



// FUNCTION 141a93100 UpdateD3D12TextureStats body=103 status=ok
// SIG undefined UpdateD3D12TextureStats(void)

void FD3D12TextureStats::UpdateD3D12TextureStats(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_2 < 1) {
      iVar1 = -(int)((longlong)
                     ((ulonglong)((uint)((longlong)(0x3ffU - param_2) >> 0x3f) & 0x3ff) +
                     (0x3ffU - param_2 & 0xfffffffffffffc00)) >> 10);
    }
    else {
      iVar1 = (int)((longlong)
                    ((ulonglong)((uint)((longlong)(param_2 + 0x3ffU) >> 0x3f) & 0x3ff) +
                    (param_2 + 0x3ffU & 0xfffffffffffffc00)) >> 10);
    }
    if ((*(uint *)(param_1 + 0x30) & 7) == 0) {
      LOCK();
      DAT_146ab6300 = DAT_146ab6300 + iVar1;
      UNLOCK();
      return;
    }
    LOCK();
    DAT_146ab6304 = DAT_146ab6304 + iVar1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141a93170 UpdateSubresources body=877 status=ok
// SIG undefined UpdateSubresources(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UpdateSubresources(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,
                           uint param_5,longlong param_6,longlong *param_7,uint *param_8,
                           size_t *param_9,longlong param_10)

{
  longlong lVar1;
  size_t _Size;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Dst;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  longlong **local_1a0;
  undefined8 local_198;
  int local_188;
  uint local_184;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  size_t *local_168;
  uint *local_160;
  uint *local_158;
  ulonglong local_150;
  longlong local_148;
  size_t local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 local_e0;
  int local_d8;
  int local_b8 [4];
  ulonglong local_a8;
  int local_80 [14];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_138 = param_7;
  local_160 = param_8;
  local_168 = param_9;
  local_188 = param_4;
  local_130 = param_3;
  local_128 = param_1;
  local_120 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_b8);
  (**(code **)(*param_2 + 0x50))(param_2,local_80);
  if ((((local_b8[0] == 1) && ((ulonglong)(*param_7 + param_6) <= local_a8)) &&
      ((local_80[0] != 1 || ((local_188 == 0 && (param_5 == 1)))))) &&
     (iVar2 = (**(code **)(*param_3 + 0x40))(param_3,0,0,&local_148), -1 < iVar2)) {
    if (param_5 != 0) {
      local_158 = (uint *)((longlong)param_7 + 0x14);
      plVar9 = (longlong *)(param_10 + 0x10);
      local_150 = (ulonglong)param_5;
      do {
        local_184 = *param_8;
        uVar6 = (ulonglong)local_184;
        uVar4 = local_158[1];
        pvVar8 = (void *)(local_148 + *(longlong *)(local_158 + -5));
        local_140 = *param_9;
        uVar3 = (ulonglong)(uVar4 * local_184);
        local_180 = uVar3;
        if (*local_158 != 0) {
          local_178 = 0;
          local_170 = (ulonglong)*local_158;
          do {
            _Size = local_140;
            lVar5 = local_178 * *plVar9;
            lVar1 = plVar9[-2];
            if ((int)uVar6 != 0) {
              lVar7 = 0;
              _Dst = pvVar8;
              do {
                _guard_xfg_dispatch_icall_nop
                          (_Dst,(void *)(plVar9[-1] * lVar7 + lVar5 + lVar1),_Size);
                lVar7 = lVar7 + 1;
                _Dst = (void *)((longlong)_Dst + (ulonglong)uVar4);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              uVar6 = (ulonglong)local_184;
              uVar3 = local_180;
            }
            local_178 = local_178 + 1;
            pvVar8 = (void *)((longlong)pvVar8 + uVar3);
            local_170 = local_170 - 1;
          } while (local_170 != 0);
          local_170 = 0;
          param_8 = local_160;
          param_9 = local_168;
        }
        param_9 = param_9 + 1;
        param_8 = param_8 + 1;
        local_158 = local_158 + 8;
        plVar9 = plVar9 + 3;
        local_150 = local_150 - 1;
        local_168 = param_9;
        local_160 = param_8;
      } while (local_150 != 0);
      local_150 = 0;
      param_7 = local_138;
      param_1 = local_128;
      param_2 = local_120;
      param_3 = local_130;
    }
    (**(code **)(*param_3 + 0x48))(param_3,0,0);
    if (local_80[0] == 1) {
      local_1a0 = (longlong **)(ulonglong)*(uint *)((longlong)param_7 + 0xc);
      local_1a8 = *param_7;
      (**(code **)(*param_1 + 0x78))(param_1,param_2,0,param_3);
    }
    else {
      uVar4 = 0;
      if (param_5 != 0) {
        do {
          local_108 = (undefined4)*param_7;
          uStack_104 = *(undefined4 *)((longlong)param_7 + 4);
          uStack_100 = (undefined4)param_7[1];
          uStack_fc = *(undefined4 *)((longlong)param_7 + 0xc);
          local_d8 = local_188 + uVar4;
          local_f8 = (undefined4)param_7[2];
          uStack_f4 = *(undefined4 *)((longlong)param_7 + 0x14);
          uStack_f0 = (undefined4)param_7[3];
          uStack_ec = *(undefined4 *)((longlong)param_7 + 0x1c);
          local_1a0 = &local_118;
          local_198 = 0;
          local_1a8 = local_1a8 & 0xffffffff00000000;
          local_e0 = 0;
          local_110 = 1;
          local_118 = param_3;
          local_e8 = param_2;
          (**(code **)(*param_1 + 0x80))(param_1,&local_e8,0,0);
          uVar4 = uVar4 + 1;
          param_7 = param_7 + 4;
        } while (uVar4 < param_5);
      }
    }
  }
  else {
    param_6 = 0;
  }
  return param_6;
}



// FUNCTION 141a934e0 UpdateSubresources body=381 status=ok
// SIG undefined UpdateSubresources(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UpdateSubresources(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,uint param_6,undefined8 param_7)

{
  LPVOID pvVar1;
  HANDLE pvVar2;
  LPVOID lpMem;
  undefined8 uVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  LPVOID local_d0;
  LPVOID local_c8;
  LPVOID local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar5 = (ulonglong)param_6;
  local_90 = param_7;
  local_a0 = 0;
  local_98 = param_4;
  pvVar2 = GetProcessHeap();
  lpMem = HeapAlloc(pvVar2,0,uVar5 * 0x2c);
  uVar3 = 0;
  if (lpMem != (LPVOID)0x0) {
    pvVar4 = (LPVOID)(uVar5 * 0x20 + (longlong)lpMem);
    pvVar1 = (LPVOID)((longlong)pvVar4 + uVar5 * 8);
    (**(code **)(*param_2 + 0x50))(param_2,local_88);
    (**(code **)(*param_2 + 0x38))(param_2,&DAT_144da61b8,&local_a8);
    local_b8 = &local_a0;
    local_d8 = local_98;
    local_d0 = lpMem;
    local_c8 = pvVar1;
    local_c0 = pvVar4;
    (**(code **)(*local_a8 + 0x130))(local_a8,local_88,param_5,uVar5);
    (**(code **)(*local_a8 + 0x10))();
    local_b0 = local_90;
    local_d0 = (LPVOID)local_a0;
    local_d8 = CONCAT44(local_d8._4_4_,param_6);
    local_c8 = lpMem;
    local_c0 = pvVar1;
    local_b8 = pvVar4;
    uVar3 = UpdateSubresources(param_1,param_2,param_3,param_5);
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,0,lpMem);
  }
  return uVar3;
}



// FUNCTION 141a93660 FUN_141a93660 body=710 status=ok
// SIG undefined FUN_141a93660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a93660(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
                  uint param_5,void *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Dst;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined8 *local_180;
  uint local_178;
  undefined4 local_174;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  int iStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined8 local_148;
  undefined4 uStack_140;
  int iStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
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
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_80;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  iVar9 = param_4[5];
  uVar8 = param_5 + 0x1ff & 0xfffffe00;
  local_178 = uVar8;
  local_174 = param_3;
  local_170 = param_1;
  local_168 = param_2;
  FUN_141a67840(local_c8,*(undefined8 *)(param_1 + 0x78));
  _Dst = (void *)FUN_141a44bf0(*(longlong *)(param_1 + 0x78) + 0x850,iVar9 * uVar8,0x200,local_c8);
  iVar9 = *(int *)(param_1 + 0x3c);
  iStack_15c = param_4[4];
  uVar8 = 0;
  iVar1 = (&DAT_1464ca1c4)[(longlong)iVar9 * 10];
  uStack_158 = 0;
  if (param_4[5] != 0) {
    uVar10 = (ulonglong)local_178;
    do {
      _guard_xfg_dispatch_icall_nop(_Dst,param_6,(ulonglong)(uint)(iVar1 * iStack_15c));
      uStack_158 = param_4[5];
      param_6 = (void *)((longlong)param_6 + (ulonglong)param_5);
      _Dst = (void *)((longlong)_Dst + uVar10);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uStack_158);
    iStack_15c = param_4[4];
    iVar9 = *(int *)(local_170 + 0x3c);
    param_2 = local_168;
    param_1 = local_170;
  }
  uStack_154 = 1;
  uStack_12c = 0;
  local_160 = (&DAT_1464ca1cc)[(longlong)iVar9 * 10];
  local_148 = local_80;
  uVar4 = local_148;
  uStack_130 = local_178;
  local_128 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x18);
  local_118 = local_174;
  uStack_120 = 0;
  uStack_134 = 1;
  uStack_140 = local_160;
  iStack_13c = iStack_15c;
  uStack_138 = uStack_158;
  if ((param_2 == 0) || (DAT_146ab6383 == '\0')) {
    local_148._0_4_ = (undefined4)local_80;
    local_148._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
    local_f8 = *(undefined8 *)(local_b8 + 0x18);
    local_180 = &local_f8;
    local_188 = 0;
    local_f0 = 1;
    local_e8 = (undefined4)local_148;
    uStack_e4 = local_148._4_4_;
    uStack_d4 = 1;
    uStack_d0 = local_178;
    uStack_cc = 0;
    local_148 = uVar4;
    uStack_e0 = local_160;
    iStack_dc = iStack_15c;
    local_d8 = uStack_158;
    FUN_141a93960(param_1 + 0x68,&local_128,*param_4,param_4[1]);
  }
  else {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x1f;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x100);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 0x1f;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    uVar2 = param_4[1];
    uVar3 = *param_4;
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_144db42f8;
    lVar6 = param_1 + 0x68;
    if (param_1 == 0) {
      lVar6 = 0;
    }
    puVar7[2] = lVar6;
    puVar7[3] = local_128;
    puVar7[4] = CONCAT44(uStack_11c,uStack_120);
    *(undefined4 *)(puVar7 + 5) = local_118;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_114;
    *(undefined4 *)(puVar7 + 6) = uStack_110;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_10c;
    *(undefined4 *)(puVar7 + 9) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar2;
    *(undefined4 *)(puVar7 + 7) = local_108;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_104;
    *(undefined4 *)(puVar7 + 8) = uStack_100;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uStack_fc;
    *(undefined4 *)(puVar7 + 10) = 0;
    FUN_141a67840(puVar7 + 0xb,0);
    *(undefined4 *)(puVar7 + 0x1b) = (undefined4)local_148;
    *(undefined4 *)((longlong)puVar7 + 0xdc) = local_148._4_4_;
    *(undefined4 *)(puVar7 + 0x1c) = uStack_140;
    *(int *)((longlong)puVar7 + 0xe4) = iStack_13c;
    *(uint *)(puVar7 + 0x1d) = uStack_138;
    *(undefined4 *)((longlong)puVar7 + 0xec) = uStack_134;
    *(uint *)(puVar7 + 0x1e) = uStack_130;
    *(undefined4 *)((longlong)puVar7 + 0xf4) = uStack_12c;
    (**(code **)(*(longlong *)puVar7[3] + 8))();
    FUN_141a7d3c0(puVar7 + 0xb,local_c8);
  }
  thunk_FUN_141a7bb70(local_c8);
  return;
}



// FUNCTION 141a93930 UpdateTexture2D_RenderThread body=46 status=ok
// SIG undefined UpdateTexture2D_RenderThread(void)

void FD3D12DynamicRHI::UpdateTexture2D_RenderThread
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_141a93660(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 141a93960 FUN_141a93960 body=310 status=ok
// SIG undefined FUN_141a93960(void)

void FUN_141a93960(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = 0xffffffff;
  cVar2 = *(char *)(lVar4 + 0xb4);
  lVar5 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x5d8);
  lVar1 = lVar5 + 0x460;
  if (cVar2 == '\0') {
    uVar6 = *(undefined4 *)(lVar4 + 0xa8);
    FUN_141a4f5b0(lVar1,lVar4,uVar6,0x400,uVar3);
  }
  else {
    FUN_141a60fb0(lVar1,lVar4,0x400,uVar3);
  }
  *(int *)(lVar5 + 0x2c54) = *(int *)(lVar5 + 0x2c54) + 1;
  lVar7 = *(longlong *)(lVar5 + 0x468);
  if (*(int *)(lVar7 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar7 + 0x28) + 0xd0))
              (*(longlong **)(lVar7 + 0x28),*(int *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0xf8));
    *(undefined4 *)(lVar7 + 0x100) = 0;
    lVar7 = *(longlong *)(lVar5 + 0x468);
  }
  (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x80))
            (*(longlong **)(lVar7 + 0x28),param_2,param_3,param_4,param_5,param_6,0);
  if (cVar2 == '\0') {
    FUN_141a4f5b0(lVar1,lVar4,0x400,uVar6,uVar3);
  }
  return;
}



// FUNCTION 141a93aa0 FUN_141a93aa0 body=1148 status=ok
// SIG undefined FUN_141a93aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a93aa0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,
                  undefined4 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_320;
  undefined2 *local_318;
  undefined2 *local_310;
  undefined4 local_308;
  undefined4 local_300;
  wchar_t *local_2f8;
  wchar_t *local_2f0;
  uint local_2e8;
  undefined2 *local_2e0;
  undefined2 *local_2d8;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined2 *local_2b0;
  int local_2a8;
  longlong local_2a0 [3];
  undefined1 local_288 [256];
  longlong local_188;
  undefined8 local_180;
  undefined1 local_168 [256];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_2c4 = param_10;
  local_2c8 = param_4;
  local_2c0 = param_3;
  local_2b8 = param_2;
  GetD3D12ErrorString(&local_2b0,param_1,0);
  switch(param_8) {
  case 0:
    pwVar5 = L"DXGI_FORMAT_UNKNOWN";
    break;
  default:
    pwVar5 = (wchar_t *)PTR_DAT_1464c11e0;
    break;
  case 2:
    pwVar5 = L"DXGI_FORMAT_R32G32B32A32_FLOAT";
    break;
  case 10:
    pwVar5 = L"DXGI_FORMAT_R16G16B16A16_FLOAT";
    break;
  case 0xc:
    pwVar5 = L"DXGI_FORMAT_R16G16B16A16_UINT";
    break;
  case 0x10:
    pwVar5 = L"DXGI_FORMAT_R32G32_FLOAT";
    break;
  case 0x13:
    pwVar5 = L"DXGI_FORMAT_R32G8X24_TYPELESS";
    break;
  case 0x14:
    pwVar5 = L"DXGI_FORMAT_D32_FLOAT_S8X24_UINT";
    break;
  case 0x15:
    pwVar5 = L"DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS";
    break;
  case 0x18:
    pwVar5 = L"DXGI_FORMAT_R10G10B10A2_UNORM";
    break;
  case 0x1b:
    pwVar5 = L"DXGI_FORMAT_R8G8B8A8_TYPELESS";
    break;
  case 0x1c:
    pwVar5 = L"DXGI_FORMAT_R8G8B8A8_UNORM";
    break;
  case 0x22:
    pwVar5 = L"DXGI_FORMAT_R16G16_FLOAT";
    break;
  case 0x23:
    pwVar5 = L"DXGI_FORMAT_R16G16_UNORM";
    break;
  case 0x24:
    pwVar5 = L"DXGI_FORMAT_R16G16_UINT";
    break;
  case 0x25:
    pwVar5 = L"DXGI_FORMAT_R16G16_SNORM";
    break;
  case 0x29:
    pwVar5 = L"DXGI_FORMAT_R32_FLOAT";
    break;
  case 0x2d:
    pwVar5 = L"DXGI_FORMAT_D24_UNORM_S8_UINT";
    break;
  case 0x2e:
    pwVar5 = L"DXGI_FORMAT_R24_UNORM_X8_TYPELESS";
    break;
  case 0x33:
    pwVar5 = L"DXGI_FORMAT_R8G8_SNORM";
    break;
  case 0x3d:
    pwVar5 = L"DXGI_FORMAT_R8_UNORM";
    break;
  case 0x42:
    pwVar5 = L"DXGI_FORMAT_R1_UNORM";
    break;
  case 0x47:
    pwVar5 = L"DXGI_FORMAT_BC1_UNORM";
    break;
  case 0x4a:
    pwVar5 = L"DXGI_FORMAT_BC2_UNORM";
    break;
  case 0x4d:
    pwVar5 = L"DXGI_FORMAT_BC3_UNORM";
    break;
  case 0x50:
    pwVar5 = L"DXGI_FORMAT_BC4_UNORM";
    break;
  case 0x53:
    pwVar5 = L"DXGI_FORMAT_BC5_UNORM";
    break;
  case 0x57:
    pwVar5 = L"DXGI_FORMAT_B8G8R8A8_UNORM";
    break;
  case 0x58:
    pwVar5 = L"DXGI_FORMAT_B8G8R8X8_UNORM";
    break;
  case 0x5a:
    pwVar5 = L"DXGI_FORMAT_B8G8R8A8_TYPELESS";
    break;
  case 0x5f:
    pwVar5 = L"DXGI_FORMAT_BC6H_UF16";
    break;
  case 0x62:
    pwVar5 = L"DXGI_FORMAT_BC7_UNORM";
  }
  if (param_1 + 0x7785fffbU < 2) {
    FUN_141a91f60(0,0,0);
  }
  else if (param_1 == -0x7ff8fff2) {
    FUN_141a922b0(0x8007000e,1);
  }
  plVar2 = (longlong *)FUN_141672640();
  (**(code **)(*plVar2 + 0x48))(plVar2);
  plVar2 = (longlong *)FUN_141672640();
  (**(code **)(*plVar2 + 0x18))(plVar2);
  puVar3 = (undefined8 *)GetD3D12TextureFlagString(local_2a0,param_10);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  puVar4 = &DAT_143f3eda8;
  if (local_2a8 != 0) {
    puVar4 = local_2b0;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,local_2c0);
  uVar1 = local_60;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,local_2b8);
  local_2e8 = param_9;
  local_2f0 = (wchar_t *)CONCAT44(local_2f0._4_4_,(uint)param_8);
  local_300 = param_7;
  local_308 = param_6;
  local_310 = (undefined2 *)CONCAT44(local_310._4_4_,param_5);
  local_320 = CONCAT44(local_320._4_4_,local_2c8);
  local_328 = uVar1;
  local_318 = puVar4;
  local_2f8 = pwVar5;
  local_2e0 = puVar6;
  LowLevelFatalErrorHandler
            ("Unknown",0x2f6,
             L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i Format=%s(0x%08X), NumMips=%i, Flags=%s"
             ,local_180);
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_2a0[0] != 0) {
    FMemory::Free();
  }
  puVar3 = (undefined8 *)GetD3D12TextureFlagString(local_2a0,local_2c4);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  puVar4 = &DAT_143f3eda8;
  if (local_2a8 != 0) {
    puVar4 = local_2b0;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,local_2c0);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,local_2b8);
  local_2e0 = (undefined2 *)CONCAT44(local_2e0._4_4_,param_9);
  local_2f8 = (wchar_t *)CONCAT44(local_2f8._4_4_,param_7);
  local_300 = param_6;
  local_308 = param_5;
  local_318 = (undefined2 *)CONCAT44(local_318._4_4_,local_2c8);
  local_320 = local_180;
  local_328 = local_60;
  local_310 = puVar4;
  local_2f0 = pwVar5;
  local_2e8 = (uint)param_8;
  local_2d8 = puVar6;
  FDebug::AssertFailed
            (&DAT_144dabaa7,"Unknown",0x2f6,
             L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i Format=%s(0x%08X), NumMips=%i, Flags=%s"
            );
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_2a0[0] != 0) {
    FMemory::Free();
  }
  FUN_1416a8180(1);
  if (local_2b0 != (undefined2 *)0x0) {
    FMemory::Free(local_2b0);
  }
  return;
}



// FUNCTION 141a94000 FUN_141a94000 body=662 status=ok
// SIG undefined FUN_141a94000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a94000(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_558 [32];
  undefined8 local_538;
  undefined8 local_530;
  undefined2 *local_528;
  undefined2 *local_520;
  undefined2 *local_518;
  undefined4 local_508;
  undefined8 local_500;
  undefined2 *local_4f8;
  int local_4f0;
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined1 local_4c8 [256];
  longlong local_3c8;
  undefined8 local_3c0;
  undefined1 local_3a8 [256];
  longlong local_2a8;
  undefined8 local_2a0;
  undefined1 local_288 [256];
  longlong local_188;
  undefined8 local_180;
  undefined1 local_168 [256];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  local_508 = param_4;
  local_500 = param_3;
  GetD3D12ErrorString(&local_4f8,param_1,param_5);
  if (param_1 == -0x7ff8fff2) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_4e8,
                       L"Out of video memory trying to allocate a rendering resource. Make sure your video card has the minimum required memory, try lowering the resolution and/or closing other applications that are running. Exiting..."
                       ,L"D3D12RHI",L"OutOfMemory");
    puVar6 = (undefined8 *)FText::ToString(uVar5);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar6;
    }
    FUN_1416a4860(0,puVar9,L"Error");
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_4e0 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar1 = (int *)((longlong)local_4e0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_4e0 + 8))(local_4e0,1);
        }
      }
    }
  }
  else {
    FUN_141a91f60(param_5,0,0);
  }
  plVar7 = (longlong *)FUN_141672640();
  (**(code **)(*plVar7 + 0x48))(plVar7);
  plVar7 = (longlong *)FUN_141672640();
  (**(code **)(*plVar7 + 0x18))(plVar7);
  if ((int)param_6[1] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_6;
  }
  puVar8 = &DAT_143f3eda8;
  if (local_4f0 != 0) {
    puVar8 = local_4f8;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_3a8,local_500);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_4c8,param_2);
  uVar4 = local_508;
  local_530 = CONCAT44(local_530._4_4_,local_508);
  local_538 = local_2a0;
  local_528 = puVar8;
  local_520 = puVar9;
  LowLevelFatalErrorHandler("Unknown",0x2b9,L"%s failed \n at %s:%u \n with error %s\n%s",local_3c0)
  ;
  if (local_3c8 != 0) {
    FMemory::Free();
  }
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  if ((int)param_6[1] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_6;
  }
  puVar8 = &DAT_143f3eda8;
  if (local_4f0 != 0) {
    puVar8 = local_4f8;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,local_500);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_288,param_2);
  local_528 = (undefined2 *)CONCAT44(local_528._4_4_,uVar4);
  local_530 = local_60;
  local_538 = local_180;
  local_520 = puVar8;
  local_518 = puVar9;
  FDebug::AssertFailed
            ((longlong)L"CopyBufferRegion" + 0x23,"Unknown",0x2b9,
             L"%s failed \n at %s:%u \n with error %s\n%s");
  if (local_188 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  FUN_1416a8180(1);
  if (local_4f8 != (undefined2 *)0x0) {
    FMemory::Free(local_4f8);
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141a942a0 FUN_141a942a0 body=12 status=ok
// SIG undefined FUN_141a942a0(void)

void FUN_141a942a0(undefined8 *param_1)

{
  FUN_141a98990(*param_1,param_1[1]);
  return;
}



// FUNCTION 141a942b0 FUN_141a942b0 body=19 status=ok
// SIG undefined FUN_141a942b0(void)

void FUN_141a942b0(longlong param_1)

{
  FUN_141a98990(param_1 + 0x118,*(undefined8 *)(param_1 + 0x198));
  return;
}



// FUNCTION 141a942d0 FUN_141a942d0 body=566 status=ok
// SIG undefined FUN_141a942d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a942d0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar5 = *param_3;
  FastHashName(local_48,*(undefined8 *)(lVar5 + 0x58));
  if (*(longlong *)(param_2 + 0x28) == 0) {
    puVar3 = (undefined8 *)
             FD3D12_COMPUTE_PIPELINE_STATE_DESC::ComputeDescV0((undefined8 *)(lVar5 + 8),&local_c8);
    plVar1 = (longlong *)param_3[1];
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    local_80 = *puVar3;
    uStack_78 = puVar3[1];
    local_70 = puVar3[2];
    uStack_68 = puVar3[3];
    local_60 = *(undefined4 *)(puVar3 + 4);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0x24);
    uStack_58 = *(undefined4 *)(puVar3 + 5);
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 0x2c);
    local_50 = puVar3[6];
    if (plVar1 == (longlong *)0x0) {
      iVar2 = FUN_141a94f60(uVar7,&local_80,&DAT_144db8058,param_1);
      if (-1 < iVar2) {
        return;
      }
      uVar7 = 0x2aa;
      pcVar6 = 
      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
      ;
      pcVar4 = 
      "(Device->*TPSOFunctionMap<TDesc>::GetCreatePipelineState())(Desc, IID_PPV_ARGS(&PSO))";
    }
    else {
      local_e8 = param_1;
      iVar2 = FUN_1404c2128(plVar1,local_48,&local_80,&DAT_144db8058);
      if (iVar2 == -0x7ff8ffa9) {
        iVar2 = FUN_141a94f60(uVar7,&local_80,&DAT_144db8058,param_1);
        if (iVar2 < 0) {
          local_e0 = &local_d8;
          local_d8 = 0;
          local_d0 = (undefined4 *)0x0;
          local_e8 = (undefined8 *)0x0;
          FUN_141a94000(iVar2,
                        "(Device->*TPSOFunctionMap<TDesc>::GetCreatePipelineState())(Desc, IID_PPV_ARGS(&PSO))"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                        ,0x295);
        }
        iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,local_48,*param_1);
        if ((iVar2 + 0x80000000U & 0x80000000) != 0) {
          return;
        }
        if (iVar2 == -0x7ff8ffa9) {
          return;
        }
        uVar7 = 0x29f;
        pcVar6 = 
        "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
        ;
        pcVar4 = "HResult";
      }
      else {
        if (-1 < iVar2) {
          return;
        }
        uVar7 = 0x2a4;
        pcVar6 = 
        "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
        ;
        pcVar4 = "HResult";
      }
    }
    local_e0 = &local_d8;
    local_d8 = 0;
    local_e8 = (undefined8 *)0x0;
    local_d0 = (undefined4 *)0x0;
    FUN_141a94000(iVar2,pcVar4,pcVar6,uVar7);
  }
  else {
    local_c0 = 0;
    local_b0 = 6;
    local_98 = 0x13;
    _local_c8 = CONCAT44(*(undefined4 *)(lVar5 + 0x20),0x12);
    local_b8 = *(undefined8 *)(lVar5 + 8);
    local_d0 = &local_c8;
    local_a8 = *(undefined8 *)(lVar5 + 0x10);
    uStack_a0 = *(undefined8 *)(lVar5 + 0x18);
    local_90 = *(undefined8 *)(lVar5 + 0x28);
    uStack_88 = *(undefined8 *)(lVar5 + 0x30);
    local_e8 = (undefined8 *)local_48;
    local_d8 = 0x48;
    FUN_141a95e00(param_1,*(longlong *)(param_2 + 0x28),&local_d8,param_3[1]);
  }
  return;
}



// FUNCTION 141a94510 FUN_141a94510 body=1421 status=ok
// SIG undefined FUN_141a94510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a94510(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  char *pcVar21;
  undefined8 *puVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined1 auStack_688 [32];
  undefined8 *local_668;
  undefined8 *local_660;
  undefined8 local_658;
  undefined8 *local_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined8 local_638;
  undefined4 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined4 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined4 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  undefined8 local_564 [41];
  undefined4 local_418;
  undefined8 local_414;
  undefined8 uStack_40c;
  undefined8 local_404;
  undefined8 uStack_3fc;
  undefined8 local_3f4;
  undefined8 uStack_3ec;
  undefined8 local_3e4;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined8 uStack_3c4;
  undefined8 local_3bc;
  undefined8 uStack_3b4;
  undefined8 local_3ac;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined8 uStack_394;
  undefined8 local_38c;
  undefined8 uStack_384;
  undefined4 local_37c;
  undefined4 local_378;
  undefined8 local_374;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348 [96];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  lVar20 = *param_3;
  FastHashName(local_48,*(undefined8 *)(lVar20 + 0x308));
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (lVar1 == 0) {
    puVar16 = (undefined8 *)
              FD3D12_GRAPHICS_PIPELINE_STATE_DESC::GraphicsDescV0(lVar20 + 8,&local_648);
    lVar20 = 5;
    puVar22 = local_348;
    do {
      puVar18 = puVar22;
      puVar17 = puVar16;
      uVar24 = puVar17[1];
      *puVar18 = *puVar17;
      puVar18[1] = uVar24;
      uVar24 = puVar17[3];
      puVar18[2] = puVar17[2];
      puVar18[3] = uVar24;
      uVar24 = puVar17[5];
      puVar18[4] = puVar17[4];
      puVar18[5] = uVar24;
      uVar24 = puVar17[7];
      puVar18[6] = puVar17[6];
      puVar18[7] = uVar24;
      uVar24 = puVar17[9];
      puVar18[8] = puVar17[8];
      puVar18[9] = uVar24;
      uVar24 = puVar17[0xb];
      puVar18[10] = puVar17[10];
      puVar18[0xb] = uVar24;
      uVar24 = puVar17[0xd];
      puVar18[0xc] = puVar17[0xc];
      puVar18[0xd] = uVar24;
      uVar3 = *(undefined4 *)((longlong)puVar17 + 0x74);
      uVar4 = *(undefined4 *)(puVar17 + 0xf);
      uVar5 = *(undefined4 *)((longlong)puVar17 + 0x7c);
      *(undefined4 *)(puVar18 + 0xe) = *(undefined4 *)(puVar17 + 0xe);
      *(undefined4 *)((longlong)puVar18 + 0x74) = uVar3;
      *(undefined4 *)(puVar18 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar18 + 0x7c) = uVar5;
      lVar20 = lVar20 + -1;
      puVar16 = puVar17 + 0x10;
      puVar22 = puVar18 + 0x10;
    } while (lVar20 != 0);
    uVar3 = *(undefined4 *)((longlong)puVar17 + 0x84);
    uVar4 = *(undefined4 *)(puVar17 + 0x11);
    uVar5 = *(undefined4 *)((longlong)puVar17 + 0x8c);
    plVar2 = (longlong *)param_3[1];
    uVar24 = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(puVar18 + 0x10) = *(undefined4 *)(puVar17 + 0x10);
    *(undefined4 *)((longlong)puVar18 + 0x84) = uVar3;
    *(undefined4 *)(puVar18 + 0x11) = uVar4;
    *(undefined4 *)((longlong)puVar18 + 0x8c) = uVar5;
    if (plVar2 == (longlong *)0x0) {
      iVar15 = FUN_1404c2128(uVar24,local_348,&DAT_144db8058,param_1);
      if (-1 < iVar15) {
        return;
      }
      uVar24 = 0x2aa;
      pcVar23 = 
      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
      ;
      pcVar21 = 
      "(Device->*TPSOFunctionMap<TDesc>::GetCreatePipelineState())(Desc, IID_PPV_ARGS(&PSO))";
    }
    else {
      local_668 = param_1;
      iVar15 = FUN_140623ed8(plVar2,local_48,local_348,&DAT_144db8058);
      if (iVar15 == -0x7ff8ffa9) {
        iVar15 = FUN_1404c2128(uVar24,local_348,&DAT_144db8058,param_1);
        if (iVar15 < 0) {
          local_660 = &local_658;
          local_658 = 0;
          local_650 = (undefined8 *)0x0;
          local_668 = (undefined8 *)0x0;
          FUN_141a94000(iVar15,
                        "(Device->*TPSOFunctionMap<TDesc>::GetCreatePipelineState())(Desc, IID_PPV_ARGS(&PSO))"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                        ,0x295);
        }
        iVar15 = (**(code **)(*plVar2 + 0x40))(plVar2,local_48,*param_1);
        if ((iVar15 + 0x80000000U & 0x80000000) != 0) {
          return;
        }
        if (iVar15 == -0x7ff8ffa9) {
          return;
        }
        uVar24 = 0x29f;
        pcVar23 = 
        "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
        ;
        pcVar21 = "HResult";
      }
      else {
        if (-1 < iVar15) {
          return;
        }
        uVar24 = 0x2a4;
        pcVar23 = 
        "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
        ;
        pcVar21 = "HResult";
      }
    }
    local_660 = &local_658;
    local_658 = 0;
    local_668 = (undefined8 *)0x0;
    local_650 = (undefined8 *)0x0;
    FUN_141a94000(iVar15,pcVar21,pcVar23,uVar24);
  }
  else {
    uStack_5f0 = 5;
    lVar19 = 2;
    local_628 = *(undefined8 *)(lVar20 + 0x230);
    uStack_620 = *(undefined8 *)(lVar20 + 0x238);
    uStack_644 = *(undefined4 *)(lVar20 + 0x278);
    local_638 = *(undefined8 *)(lVar20 + 8);
    uStack_600 = *(undefined8 *)(lVar20 + 0x10);
    uStack_5f8 = *(undefined8 *)(lVar20 + 0x18);
    uStack_614 = *(undefined4 *)(lVar20 + 0x240);
    local_5e8 = *(undefined8 *)(lVar20 + 0x50);
    uStack_5e0 = *(undefined8 *)(lVar20 + 0x58);
    uStack_60c = *(undefined4 *)(lVar20 + 0x244);
    local_648 = 0x12;
    uStack_5d0 = *(undefined8 *)(lVar20 + 0x60);
    uStack_5c8 = *(undefined8 *)(lVar20 + 0x68);
    uStack_640 = 0;
    uStack_630 = 0xc;
    local_5c0 = *(undefined8 *)(lVar20 + 0x70);
    uStack_5b8 = *(undefined8 *)(lVar20 + 0x78);
    local_618 = 0xd;
    uStack_610 = 0xe;
    local_5a8 = *(undefined8 *)(lVar20 + 0x40);
    uStack_5a0 = *(undefined8 *)(lVar20 + 0x48);
    local_608 = 1;
    local_5d8 = 7;
    local_5b0 = 4;
    local_578 = *(undefined8 *)(lVar20 + 0x20);
    uStack_570 = *(undefined8 *)(lVar20 + 0x28);
    local_598 = 3;
    local_580 = 2;
    local_568 = 8;
    local_418 = 0x15;
    local_3d8 = 0x10;
    local_3d0 = 10;
    local_3a0 = 0xf;
    local_378 = 0x11;
    local_368 = 9;
    local_360 = 0x13;
    local_590 = *(undefined8 *)(lVar20 + 0x30);
    uStack_588 = *(undefined8 *)(lVar20 + 0x38);
    puVar16 = (undefined8 *)(lVar20 + 0x80);
    puVar22 = local_564;
    do {
      puVar18 = puVar22;
      puVar17 = puVar16;
      uVar24 = puVar17[1];
      uVar11 = puVar17[2];
      uVar12 = puVar17[3];
      *puVar18 = *puVar17;
      puVar18[1] = uVar24;
      uVar24 = puVar17[4];
      uVar13 = puVar17[5];
      puVar18[2] = uVar11;
      puVar18[3] = uVar12;
      uVar11 = puVar17[6];
      uVar12 = puVar17[7];
      puVar18[4] = uVar24;
      puVar18[5] = uVar13;
      uVar24 = puVar17[8];
      uVar13 = puVar17[9];
      puVar18[6] = uVar11;
      puVar18[7] = uVar12;
      uVar11 = puVar17[10];
      uVar12 = puVar17[0xb];
      puVar18[8] = uVar24;
      puVar18[9] = uVar13;
      uVar24 = puVar17[0xc];
      uVar13 = puVar17[0xd];
      puVar18[10] = uVar11;
      puVar18[0xb] = uVar12;
      uVar11 = puVar17[0xe];
      uVar12 = puVar17[0xf];
      puVar18[0xc] = uVar24;
      puVar18[0xd] = uVar13;
      puVar18[0xe] = uVar11;
      puVar18[0xf] = uVar12;
      lVar19 = lVar19 + -1;
      puVar16 = puVar17 + 0x10;
      puVar22 = puVar18 + 0x10;
    } while (lVar19 != 0);
    uVar24 = puVar17[0x11];
    lVar19 = 6;
    uVar11 = puVar17[0x12];
    uVar12 = puVar17[0x13];
    puVar18[0x10] = puVar17[0x10];
    puVar18[0x11] = uVar24;
    uVar13 = puVar17[0x14];
    uVar14 = puVar17[0x15];
    puVar18[0x12] = uVar11;
    puVar18[0x13] = uVar12;
    uVar11 = puVar17[0x16];
    uVar12 = puVar17[0x17];
    uVar24 = puVar17[0x18];
    puVar18[0x14] = uVar13;
    puVar18[0x15] = uVar14;
    uVar13 = *(undefined8 *)(lVar20 + 0x1f8);
    uVar14 = *(undefined8 *)(lVar20 + 0x200);
    puVar18[0x16] = uVar11;
    puVar18[0x17] = uVar12;
    puVar18[0x18] = uVar24;
    local_3d4 = *(undefined4 *)(lVar20 + 0x26c);
    local_414 = uVar13;
    uStack_40c = uVar14;
    local_3a4 = *(undefined4 *)(lVar20 + 500);
    local_404 = *(undefined8 *)(lVar20 + 0x208);
    uStack_3fc = *(undefined8 *)(lVar20 + 0x210);
    local_37c = *(undefined4 *)(lVar20 + 0x268);
    local_3f4 = *(undefined8 *)(lVar20 + 0x218);
    uStack_3ec = *(undefined8 *)(lVar20 + 0x220);
    local_374 = *(undefined8 *)(lVar20 + 0x270);
    local_3e4 = *(undefined8 *)(lVar20 + 0x228);
    local_364 = *(undefined4 *)(lVar20 + 0x1c8);
    local_3cc = *(undefined8 *)(lVar20 + 0x1cc);
    uStack_3c4 = *(undefined8 *)(lVar20 + 0x1d4);
    local_3ac = *(undefined8 *)(lVar20 + 0x1ec);
    local_3bc = *(undefined8 *)(lVar20 + 0x1dc);
    uStack_3b4 = *(undefined8 *)(lVar20 + 0x1e4);
    local_39c = *(undefined8 *)(lVar20 + 0x248);
    uStack_394 = *(undefined8 *)(lVar20 + 0x250);
    local_38c = *(undefined8 *)(lVar20 + 600);
    uStack_384 = *(undefined8 *)(lVar20 + 0x260);
    local_358 = *(undefined8 *)(lVar20 + 0x280);
    uStack_350 = *(undefined8 *)(lVar20 + 0x288);
    puVar16 = local_348;
    puVar22 = (undefined8 *)&local_648;
    do {
      uVar24 = puVar22[1];
      uVar11 = puVar22[2];
      uVar12 = puVar22[3];
      *puVar16 = *puVar22;
      puVar16[1] = uVar24;
      uVar24 = puVar22[4];
      uVar13 = puVar22[5];
      puVar16[2] = uVar11;
      puVar16[3] = uVar12;
      uVar11 = puVar22[6];
      uVar12 = puVar22[7];
      puVar16[4] = uVar24;
      puVar16[5] = uVar13;
      uVar24 = puVar22[8];
      uVar13 = puVar22[9];
      puVar16[6] = uVar11;
      puVar16[7] = uVar12;
      uVar11 = puVar22[10];
      uVar12 = puVar22[0xb];
      puVar16[8] = uVar24;
      puVar16[9] = uVar13;
      uVar3 = *(undefined4 *)(puVar22 + 0xc);
      uVar4 = *(undefined4 *)((longlong)puVar22 + 100);
      uVar5 = *(undefined4 *)(puVar22 + 0xd);
      uVar6 = *(undefined4 *)((longlong)puVar22 + 0x6c);
      puVar16[10] = uVar11;
      puVar16[0xb] = uVar12;
      uVar7 = *(undefined4 *)(puVar22 + 0xe);
      uVar8 = *(undefined4 *)((longlong)puVar22 + 0x74);
      uVar9 = *(undefined4 *)(puVar22 + 0xf);
      uVar10 = *(undefined4 *)((longlong)puVar22 + 0x7c);
      *(undefined4 *)(puVar16 + 0xc) = uVar3;
      *(undefined4 *)((longlong)puVar16 + 100) = uVar4;
      *(undefined4 *)(puVar16 + 0xd) = uVar5;
      *(undefined4 *)((longlong)puVar16 + 0x6c) = uVar6;
      *(undefined4 *)(puVar16 + 0xe) = uVar7;
      *(undefined4 *)((longlong)puVar16 + 0x74) = uVar8;
      *(undefined4 *)(puVar16 + 0xf) = uVar9;
      *(undefined4 *)((longlong)puVar16 + 0x7c) = uVar10;
      lVar19 = lVar19 + -1;
      puVar16 = puVar16 + 0x10;
      puVar22 = puVar22 + 0x10;
    } while (lVar19 != 0);
    local_650 = local_348;
    local_668 = (undefined8 *)local_48;
    local_658 = 0x300;
    FUN_141a95e00(param_1,lVar1,&local_658,param_3[1]);
  }
  return;
}



// FUNCTION 141a94aa0 FUN_141a94aa0 body=77 status=ok
// SIG undefined FUN_141a94aa0(void)

undefined8 * FUN_141a94aa0(undefined8 *param_1)

{
  FUN_141a67050();
  *param_1 = &PTR_FUN_144db8000;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined1 *)(param_1 + 0x91) = 1;
  return param_1;
}



// FUNCTION 141a94af0 FUN_141a94af0 body=398 status=ok
// SIG undefined FUN_141a94af0(void)

undefined8 *
FUN_141a94af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144db40a8;
  *(undefined4 *)(param_1 + 0xb) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x5c) = param_6;
  param_1[9] = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 10) = 3;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_4;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FName::FName(local_res8,L"Viewport Fence",1);
  FUN_141a66d10(param_1 + 0x23,param_2,local_res8);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  lVar2 = param_1[3];
  *(undefined1 *)(param_1 + 0x35) = 0;
  iVar1 = *(int *)(lVar2 + 0x718);
  *(int *)(lVar2 + 0x718) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x71c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x710,iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x710) + (longlong)iVar1 * 8) = param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 141a94c80 FUN_141a94c80 body=62 status=ok
// SIG undefined FUN_141a94c80(void)

void FUN_141a94c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144db8000;
  if ((longlong *)param_1[0x90] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x90] + 0x10))();
  }
  FDiskCacheInterface::~FDiskCacheInterface(param_1 + 0x84);
  FUN_141a68980(param_1);
  return;
}



// FUNCTION 141a94cc0 FUN_141a94cc0 body=366 status=ok
// SIG undefined FUN_141a94cc0(void)

void FUN_141a94cc0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(*param_1 + 0x480);
  local_18 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fd4e4) && (_Init_thread_header(&DAT_1469fd4e4), DAT_1469fd4e4 == -1))
  {
    uVar4 = FCommandLine::Get();
    DAT_1469fd4e0 = FParse::Param(uVar4,L"DX12PSOInitNoAsync");
    _Init_thread_footer(&DAT_1469fd4e4);
  }
  if (DAT_1469fd4e0 == '\0') {
    puVar3 = (undefined8 *)operator_new(0x48);
    if (puVar3 != (undefined8 *)0x0) {
      uVar4 = *param_2;
      *puVar3 = &PTR_Abandon_144db8030;
      FUN_141a674e0(puVar3 + 1,uVar4,&local_18,param_2 + 1);
      *(undefined4 *)(puVar3 + 6) = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
    }
    param_2[2] = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_141a98920(puVar3,DAT_1468b5010);
    }
  }
  else {
    plVar2 = (longlong *)param_2[1];
    uVar4 = *param_2;
    param_2[1] = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_141a94510(param_2 + 1,uVar4,&local_18);
  }
  if (DAT_1469fd4c0 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 141a94e30 FUN_141a94e30 body=304 status=ok
// SIG undefined FUN_141a94e30(void)

void FUN_141a94e30(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(*param_1 + 0x480);
  local_18 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fd4dc) && (_Init_thread_header(&DAT_1469fd4dc), DAT_1469fd4dc == -1))
  {
    uVar3 = FCommandLine::Get();
    DAT_1469fd4d8 = FParse::Param(uVar3,L"DX12PSOInitNoAsync");
    _Init_thread_footer(&DAT_1469fd4dc);
  }
  if (DAT_1469fd4d8 == '\0') {
    puVar2 = (undefined8 *)operator_new(0x48);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *param_2;
      *puVar2 = &PTR_Abandon_144db8030;
      FUN_141a674b0(puVar2 + 1,uVar3,&local_18,param_2 + 1);
      *(undefined4 *)(puVar2 + 6) = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
    }
    param_2[2] = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_141a98920(puVar2,DAT_1468b5010);
    }
    return;
  }
  plVar1 = (longlong *)param_2[1];
  uVar3 = *param_2;
  param_2[1] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_141a942d0(param_2 + 1,uVar3,&local_18);
  return;
}



// FUNCTION 141a94f60 FUN_141a94f60 body=6 status=ok
// SIG undefined FUN_141a94f60(void)

void FUN_141a94f60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141a94f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}



// FUNCTION 141a94f70 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FAsyncRealtimeAudioTaskWorker<FXAudio2SoundBuffer>_>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_144db8030;
  FUN_1415b5910(param_1[7]);
  param_1[7] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141a94fd0 FUN_141a94fd0 body=96 status=ok
// SIG undefined FUN_141a94fd0(void)

undefined8 * FUN_141a94fd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144db8000;
  if ((longlong *)param_1[0x90] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x90] + 0x10))();
  }
  FDiskCacheInterface::~FDiskCacheInterface(param_1 + 0x84);
  FUN_141a68980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 141a95030 Abandon body=41 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::Abandon(longlong param_1)

{
  FUN_141a95fc0();
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141a9504f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141a95060 FUN_141a95060 body=524 status=ok
// SIG undefined FUN_141a95060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a95060(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  size_t _Size;
  void *_Src;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  }
  lVar1 = param_1 + 0x3c0;
  if (*(char *)(param_1 + 0x401) == '\0') {
    FUN_141a96ab0(lVar1,0x60);
    if (*(char *)(param_1 + 0x401) == '\0') {
      lVar7 = param_2[1];
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x3d0) + *(longlong *)(param_1 + 0x3f8));
      *plVar6 = *param_2;
      plVar6[1] = lVar7;
      lVar7 = param_2[3];
      plVar6[2] = param_2[2];
      plVar6[3] = lVar7;
      lVar7 = param_2[5];
      plVar6[4] = param_2[4];
      plVar6[5] = lVar7;
      lVar7 = param_2[7];
      plVar6[6] = param_2[6];
      plVar6[7] = lVar7;
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
      lVar7 = param_2[9];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
      *(int *)(plVar6 + 8) = (int)param_2[8];
      *(undefined4 *)((longlong)plVar6 + 0x44) = uVar3;
      *(int *)(plVar6 + 9) = (int)lVar7;
      *(undefined4 *)((longlong)plVar6 + 0x4c) = uVar4;
      lVar7 = param_2[0xb];
      plVar6[10] = param_2[10];
      plVar6[0xb] = lVar7;
      *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + 0x60;
    }
    if ((*param_2 == 0) || (plVar6 = *(longlong **)(*param_2 + 0x60), plVar6 == (longlong *)0x0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*plVar6 + 0x20))();
    }
    local_58 = lVar7;
    FUN_141a96ab0(lVar1,8);
    if (*(char *)(param_1 + 0x401) == '\0') {
      *(longlong *)(*(longlong *)(param_1 + 0x3d0) + *(longlong *)(param_1 + 0x3f8)) = local_58;
      *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + 8;
    }
    if (lVar7 != 0) {
      FD3D12RootSignatureManager::GetQuantizedBoundShaderState
                (*(longlong *)(param_1 + 8) + 400,&local_50,*param_2);
      FUN_141a96ab0(lVar1,0x19);
      if (*(char *)(param_1 + 0x401) == '\0') {
        puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x3d0) + *(longlong *)(param_1 + 0x3f8));
        *puVar9 = local_50;
        puVar9[1] = uStack_4c;
        puVar9[2] = uStack_48;
        puVar9[3] = uStack_44;
        *(undefined8 *)(puVar9 + 4) = local_40;
        *(undefined1 *)(puVar9 + 6) = local_38;
        *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + 0x19;
      }
    }
    _Size = param_2[3];
    if (_Size != 0) {
      _Src = (void *)param_2[2];
      FUN_141a96ab0(lVar1,_Size,0);
      if (*(char *)(param_1 + 0x401) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x3d0) + *(longlong *)(param_1 + 0x3f8)),_Src,
                   _Size);
        *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + _Size;
      }
    }
    uVar8 = FUN_141a73380(param_3);
    FUN_141a98a70(param_1,1,uVar8);
    *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
    *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x3f8) + -0xc;
    if ((*(longlong *)(param_1 + 1000) != 0) && (*(char *)(param_1 + 0x401) == '\0')) {
      puVar2 = *(undefined8 **)(param_1 + 0x3d0);
      *puVar2 = *(undefined8 *)(param_1 + 0x404);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x40c);
      FlushViewOfFile(*(LPCVOID *)(param_1 + 1000),*(SIZE_T *)(param_1 + 0x3f8));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  return;
}



// FUNCTION 141a95270 FUN_141a95270 body=1448 status=ok
// SIG undefined FUN_141a95270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a95270(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  BOOL BVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  size_t sVar17;
  ulonglong uVar18;
  ulonglong _Size;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  if (BVar10 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  }
  lVar1 = param_1 + 0x360;
  if (*(char *)(param_1 + 0x3a1) == '\0') {
    FUN_141a96ab0(lVar1,0x310,0);
    if (*(char *)(param_1 + 0x3a1) == '\0') {
      lVar15 = 6;
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398));
      plVar9 = param_2;
      do {
        plVar13 = plVar9;
        plVar12 = plVar2;
        lVar8 = plVar13[1];
        *plVar12 = *plVar13;
        plVar12[1] = lVar8;
        lVar8 = plVar13[3];
        plVar12[2] = plVar13[2];
        plVar12[3] = lVar8;
        lVar8 = plVar13[5];
        plVar12[4] = plVar13[4];
        plVar12[5] = lVar8;
        lVar8 = plVar13[7];
        plVar12[6] = plVar13[6];
        plVar12[7] = lVar8;
        lVar8 = plVar13[9];
        plVar12[8] = plVar13[8];
        plVar12[9] = lVar8;
        lVar8 = plVar13[0xb];
        plVar12[10] = plVar13[10];
        plVar12[0xb] = lVar8;
        lVar8 = plVar13[0xd];
        plVar12[0xc] = plVar13[0xc];
        plVar12[0xd] = lVar8;
        lVar8 = plVar13[0xf];
        plVar12[0xe] = plVar13[0xe];
        plVar12[0xf] = lVar8;
        lVar15 = lVar15 + -1;
        plVar2 = plVar12 + 0x10;
        plVar9 = plVar13 + 0x10;
      } while (lVar15 != 0);
      uVar6 = *(undefined4 *)((longlong)plVar13 + 0x84);
      lVar15 = plVar13[0x11];
      uVar7 = *(undefined4 *)((longlong)plVar13 + 0x8c);
      *(int *)(plVar12 + 0x10) = (int)plVar13[0x10];
      *(undefined4 *)((longlong)plVar12 + 0x84) = uVar6;
      *(int *)(plVar12 + 0x11) = (int)lVar15;
      *(undefined4 *)((longlong)plVar12 + 0x8c) = uVar7;
      *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 0x310;
    }
    if ((*param_2 == 0) || (plVar2 = *(longlong **)(*param_2 + 0x60), plVar2 == (longlong *)0x0)) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*plVar2 + 0x20))();
    }
    local_68 = lVar15;
    FUN_141a96ab0(lVar1,8);
    if (*(char *)(param_1 + 0x3a1) == '\0') {
      *(longlong *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)) = local_68;
      *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 8;
    }
    if (lVar15 != 0) {
      FD3D12RootSignatureManager::GetQuantizedBoundShaderState
                (*(longlong *)(param_1 + 8) + 400,&local_60,*param_2);
      FUN_141a96ab0(lVar1,0x19);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        puVar14 = (undefined4 *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398));
        *puVar14 = local_60;
        puVar14[1] = uStack_5c;
        puVar14[2] = uStack_58;
        puVar14[3] = uStack_54;
        *(undefined8 *)(puVar14 + 4) = local_50;
        *(undefined1 *)(puVar14 + 6) = local_48;
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 0x19;
      }
    }
    if (*(uint *)(param_2 + 0x47) != 0) {
      pvVar3 = (void *)param_2[0x46];
      sVar17 = (ulonglong)*(uint *)(param_2 + 0x47) * 0x20;
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),pvVar3,
                   sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
      uVar16 = 0;
      if ((int)param_2[0x47] != 0) {
        do {
          pcVar4 = *(char **)((ulonglong)uVar16 * 0x20 + param_2[0x46]);
          if (pcVar4 == (char *)0x0) {
            iVar11 = 0;
          }
          else {
            sVar17 = strnlen(pcVar4,0xff);
            iVar11 = (int)sVar17;
          }
          uVar18 = (ulonglong)(iVar11 + 1U);
          FUN_141a96ab0(lVar1,4);
          if (*(char *)(param_1 + 0x3a1) == '\0') {
            *(uint *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)) = iVar11 + 1U
            ;
            *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 4;
          }
          pvVar3 = *(void **)((ulonglong)uVar16 * 0x20 + param_2[0x46]);
          FUN_141a96ab0(lVar1,uVar18);
          if (*(char *)(param_1 + 0x3a1) == '\0') {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),
                       pvVar3,uVar18);
            *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + uVar18;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)(param_2 + 0x47));
      }
    }
    if (*(uint *)(param_2 + 0xd) != 0) {
      sVar17 = (ulonglong)*(uint *)(param_2 + 0xd) * 0x18;
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),
                   param_2 + 0xc,sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
      uVar18 = 0;
      if ((int)param_2[0xd] != 0) {
        do {
          pcVar4 = *(char **)(uVar18 * 0x18 + 8 + param_2[0xc]);
          if (pcVar4 == (char *)0x0) {
            iVar11 = 0;
          }
          else {
            sVar17 = strnlen(pcVar4,0xff);
            iVar11 = (int)sVar17;
          }
          _Size = (ulonglong)(iVar11 + 1U);
          FUN_141a96ab0(lVar1,4);
          if (*(char *)(param_1 + 0x3a1) == '\0') {
            *(uint *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)) = iVar11 + 1U
            ;
            *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 4;
          }
          pvVar3 = *(void **)(uVar18 * 0x18 + 8 + param_2[0xc]);
          FUN_141a96ab0(lVar1,_Size);
          if (*(char *)(param_1 + 0x3a1) == '\0') {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),
                       pvVar3,_Size);
            *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + _Size;
          }
          uVar16 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar16;
        } while (uVar16 < *(uint *)(param_2 + 0xd));
      }
    }
    if (*(uint *)(param_2 + 0xf) != 0) {
      sVar17 = (ulonglong)*(uint *)(param_2 + 0xf) * 4;
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),
                   param_2 + 0xe,sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
    }
    sVar17 = param_2[3];
    if (sVar17 != 0) {
      pvVar3 = (void *)param_2[2];
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),pvVar3,
                   sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
    }
    sVar17 = param_2[5];
    if (sVar17 != 0) {
      pvVar3 = (void *)param_2[4];
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),pvVar3,
                   sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
    }
    sVar17 = param_2[7];
    if (sVar17 != 0) {
      pvVar3 = (void *)param_2[6];
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),pvVar3,
                   sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
    }
    sVar17 = param_2[9];
    if (sVar17 != 0) {
      pvVar3 = (void *)param_2[8];
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),pvVar3,
                   sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
    }
    sVar17 = param_2[0xb];
    if (sVar17 != 0) {
      pvVar3 = (void *)param_2[10];
      FUN_141a96ab0(lVar1,sVar17,0);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)),pvVar3,
                   sVar17);
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + sVar17;
      }
    }
    FUN_141a73380(param_3);
    if ((*(char *)(param_1 + 0x3a1) == '\0') && (*(char *)(param_1 + 0x461) == '\0')) {
      local_68 = 0;
      FUN_141a96ab0(lVar1,8);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        *(longlong *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)) = local_68;
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 8;
      }
      FUN_141a96ab0(lVar1,8);
      if (*(char *)(param_1 + 0x3a1) == '\0') {
        *(longlong *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398)) = local_68;
        *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 8;
      }
    }
    *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
    *(int *)(param_1 + 0x3ac) = *(int *)(param_1 + 0x398) + -0xc;
    if ((*(longlong *)(param_1 + 0x388) != 0) && (*(char *)(param_1 + 0x3a1) == '\0')) {
      puVar5 = *(undefined8 **)(param_1 + 0x370);
      *puVar5 = *(undefined8 *)(param_1 + 0x3a4);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 0x3ac);
      FlushViewOfFile(*(LPCVOID *)(param_1 + 0x388),*(SIZE_T *)(param_1 + 0x398));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x280));
  return;
}



// FUNCTION 141a95820 AppendData body=100 status=ok
// SIG undefined AppendData(void)

undefined8 FDiskCacheInterface::AppendData(longlong param_1,void *param_2,size_t param_3)

{
  FUN_141a96ab0(param_1,param_3,0);
  if (*(char *)(param_1 + 0x41) != '\0') {
    return 0;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38)),param_2,param_3
            );
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + param_3;
  return 1;
}



// FUNCTION 141a958b0 ClearAndReinitialize body=47 status=ok
// SIG undefined ClearAndReinitialize(void)

void FDiskCacheInterface::ClearAndReinitialize(longlong param_1)

{
  if (1 < *(int *)(param_1 + 8)) {
    ClearDiskCache();
    Init(param_1,param_1,*(undefined1 *)(param_1 + 0x42));
    return;
  }
  return;
}



// FUNCTION 141a958e0 ClearDiskCache body=93 status=ok
// SIG undefined ClearDiskCache(void)

void FDiskCacheInterface::ClearDiskCache(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  *(undefined8 *)((longlong)param_1 + 0x44) = 8;
  if (*(char *)((longlong)param_1 + 0x42) != '\0') {
    if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
      UnmapViewOfFile((LPCVOID)param_1[5]);
    }
    if ((HANDLE)param_1[4] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[4]);
    }
    if ((HANDLE)param_1[3] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[3]);
    }
                    /* WARNING: Could not recover jumptable at 0x000141a95930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteFileW((LPCWSTR)*param_1);
    return;
  }
  return;
}



// FUNCTION 141a95940 FUN_141a95940 body=467 status=ok
// SIG undefined FUN_141a95940(void)

void FUN_141a95940(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  longlong *plVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_18;
  undefined8 local_10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar7 = 0;
  local_18 = 0;
  local_10 = 0;
  lVar6 = lVar7;
  if (((*(char *)(param_1 + 0x488) != '\0') &&
      (lVar6 = 0, *(longlong **)(param_1 + 0x480) != (longlong *)0x0)) &&
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x58))(), lVar6 = lVar7, lVar5 != 0))
  {
    local_10 = CONCAT44(local_10._4_4_,(int)lVar5);
    if (0 < (int)lVar5) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_18,0);
      lVar6 = local_18;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x480) + 0x60))
                      (*(longlong **)(param_1 + 0x480),lVar6,lVar5);
    if (iVar4 < 0) {
      local_18 = 0;
      local_10 = 0;
      FUN_141a94000(iVar4,"PipelineLibrary->Serialize(LibraryData.GetData(), LibrarySize)",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                    ,0x1fe,0,&local_18);
    }
    *(undefined8 *)(param_1 + 0x458) = 0xc;
    FDiskCacheInterface::AppendData(param_1 + 0x420,lVar6,lVar5);
  }
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x458) + -0xc;
  if (*(char *)(param_1 + 0x461) == '\0') {
    if (*(longlong *)(param_1 + 0x448) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x430);
      *puVar1 = *(undefined8 *)(param_1 + 0x464);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x46c);
      FlushViewOfFile(*(LPCVOID *)(param_1 + 0x448),*(SIZE_T *)(param_1 + 0x458));
      UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x448));
    }
    if (*(HANDLE *)(param_1 + 0x440) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x440));
    }
    if (*(HANDLE *)(param_1 + 0x438) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x438));
    }
  }
  FUN_141a6ba20(param_1);
  plVar2 = *(longlong **)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x480) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a95b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a95b20 ComputeDescV0 body=38 status=ok
// SIG undefined ComputeDescV0(void)

undefined8 *
FD3D12_COMPUTE_PIPELINE_STATE_DESC::ComputeDescV0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 3);
  uVar1 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  *param_2 = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  return param_2;
}



// FUNCTION 141a95b50 FUN_141a95b50 body=679 status=ok
// SIG undefined FUN_141a95b50(void)

void FUN_141a95b50(longlong param_1,char param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  HWND pHVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong in_stack_ffffffffffffffa8;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar7 = (longlong *)0x0;
  local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
  pHVar4 = GetFocus();
  bVar8 = pHVar4 == *(HWND *)(param_1 + 0x48);
  BVar2 = IsIconic(*(HWND *)(param_1 + 0x48));
  bVar9 = BVar2 != 0;
  if ((*(char *)(param_1 + 0x5c) == '\0') || (bVar8)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((*(char *)(param_1 + 0x5c) == '\0') || (bVar9)) || ((!bVar8 && (param_2 == '\0')))) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if ((*(char *)(param_1 + 100) == '\0') &&
     ((param_2 != '\0' || (((bVar8 && (!bVar9)) || (bVar10)))))) {
    FUN_141ee24f0(0);
    bVar10 = cVar1 == '\0';
    plVar6 = local_48;
    if (!bVar10) {
      plVar6 = plVar7;
      plVar7 = local_48;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x50))
                      (*(longlong **)(param_1 + 0x68),cVar1,0);
    if ((bVar10) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if ((!bVar10) && (plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    *(undefined1 *)(param_1 + 100) = 1;
    if (-1 < iVar3) {
      *(char *)(param_1 + 0x5c) = cVar1;
    }
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    if (bVar9) {
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        if (DAT_146ab632a != '\0') {
          if (DAT_1464c1184 != '\0') {
            lVar5 = (longlong)DAT_1464c117c * 0x70 + DAT_1464c1170;
            FUN_141a981e0(lVar5,(longlong)DAT_1464c1180 * 0x1d0 + *(longlong *)(lVar5 + 0x48),
                          (longlong)DAT_1464c117c,(longlong)DAT_1464c1180,
                          in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
          }
          if (*(char *)(param_1 + 0x70) != '\0') {
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x140))
                              (*(longlong **)(param_1 + 0x78),0,0,0);
            if (iVar3 < 0) {
              local_48 = (longlong *)0x0;
              local_40 = 0;
              FUN_141a94000(iVar3,
                            "SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_NONE, 0, nullptr)",
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                            ,0x292,0,&local_48);
            }
            *(undefined1 *)(param_1 + 0x70) = 0;
          }
          if (*(int *)(param_1 + 0x74) != 0) {
            local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x128))
                              (*(longlong **)(param_1 + 0x78),0,&local_48);
            if ((-1 < iVar3) && (((ulonglong)local_48 & 1) != 0)) {
              iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x130))
                                (*(longlong **)(param_1 + 0x78),0);
              if (iVar3 < 0) {
                local_38 = 0;
                local_30 = 0;
                FUN_141a94000(iVar3,"SwapChain4->SetColorSpace1(NewColorSpace)",
                              "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                              ,0x25e,0,&local_38);
              }
              *(undefined4 *)(param_1 + 0x74) = 0;
            }
          }
        }
        *(undefined1 *)(param_1 + 0x1a8) = 0;
        return;
      }
    }
    else if (((bVar8) && (*(char *)(param_1 + 0x1a8) == '\0')) &&
            (cVar1 = FUN_141ee42d0(), cVar1 != '\0')) {
      FUN_141a960c0(param_1);
      *(undefined1 *)(param_1 + 0x1a8) = 1;
    }
  }
  return;
}



// FUNCTION 141a95e00 FUN_141a95e00 body=395 status=ok
// SIG undefined FUN_141a95e00(void)

void FUN_141a95e00(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_4 == (longlong *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x178))(param_2,param_3,&DAT_144db8058,param_1);
    if (-1 < iVar1) {
      return;
    }
    local_40 = 0;
    local_38 = 0;
    uVar3 = UCheatManagerGunfire::GetAllCheats(&local_40);
    uVar6 = 0x2e8;
    pcVar5 = 
    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
    ;
    pcVar4 = "Device->CreatePipelineState(Desc, IID_PPV_ARGS(&PSO))";
  }
  else {
    iVar1 = (**(code **)(*param_4 + 0x68))(param_4,param_5,param_3,&DAT_144db8058,param_1);
    if (-1 < iVar1) {
      return;
    }
    iVar2 = (**(code **)(*param_2 + 0x178))(param_2,param_3,&DAT_144db8058,param_1);
    if (iVar2 < 0) {
      local_40 = 0;
      local_38 = 0;
      uVar3 = UCheatManagerGunfire::GetAllCheats(&local_40);
      FUN_141a94000(iVar2,"Device->CreatePipelineState(Desc, IID_PPV_ARGS(&PSO))",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                    ,0x2cf,0,uVar3,iVar1);
    }
    iVar1 = (**(code **)(*param_4 + 0x40))(param_4,param_5,*param_1);
    if ((iVar1 + 0x80000000U & 0x80000000) != 0) {
      return;
    }
    if (iVar1 == -0x7ff8ffa9) {
      return;
    }
    local_40 = 0;
    local_38 = 0;
    uVar3 = UCheatManagerGunfire::GetAllCheats(&local_40);
    uVar6 = 0x2d9;
    pcVar5 = 
    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
    ;
    pcVar4 = "HResult";
  }
  FUN_141a94000(iVar1,pcVar4,pcVar5,uVar6,0,uVar3);
  return;
}



// FUNCTION 141a95fc0 FUN_141a95fc0 body=116 status=ok
// SIG undefined FUN_141a95fc0(void)

void FUN_141a95fc0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x20);
  plVar4 = (longlong *)*plVar2;
  *plVar2 = 0;
  if (cVar1 == '\0') {
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    FUN_141a942d0(plVar2,uVar3,param_1 + 0x10);
  }
  else {
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    FUN_141a94510(plVar2,uVar3,param_1 + 0x10);
  }
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  UNLOCK();
  return;
}



// FUNCTION 141a96040 FUN_141a96040 body=123 status=ok
// SIG undefined FUN_141a96040(void)

void FUN_141a96040(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)param_1[4];
  uVar3 = *param_1;
  cVar1 = *(char *)(param_1 + 3);
  plVar4 = (longlong *)*plVar2;
  *plVar2 = 0;
  if (cVar1 != '\0') {
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    FUN_141a94510(plVar2,uVar3,param_1 + 1);
    return;
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_141a942d0(plVar2,uVar3,param_1 + 1);
  return;
}



// FUNCTION 141a960c0 FUN_141a960c0 body=1290 status=ok
// SIG undefined FUN_141a960c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a960c0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  longlong lVar9;
  char *pcVar11;
  longlong *plVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_168 [2];
  longlong *local_160;
  longlong local_158;
  short local_148 [32];
  int local_108;
  int local_104;
  char local_e8 [128];
  char *local_68;
  char *local_60;
  undefined4 local_58;
  ulonglong local_48;
  longlong lVar10;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_168[0] = 0;
  if (DAT_146ab632a == '\0') {
    return;
  }
  local_158 = param_1;
  cVar6 = FUN_141ee41d0();
  if (cVar6 == '\0') {
    return;
  }
  bVar3 = true;
  bVar4 = false;
  local_160 = (longlong *)0x0;
  local_168[0] = 0;
  if ((((DAT_1464c1178 != '\0') && (*(char *)(param_1 + 0x5c) != '\0')) &&
      (plVar12 = *(longlong **)(param_1 + 0x68), plVar12 != (longlong *)0x0)) &&
     (((iVar7 = (**(code **)(*plVar12 + 0x58))(plVar12,local_168,&local_160), -1 < iVar7 &&
       (iVar7 = (**(code **)(*local_160 + 0x38))(local_160,local_148), -1 < iVar7)) &&
      (uVar17 = 0, 0 < DAT_1464c1168)))) {
    do {
      if (bVar4) break;
      uVar14 = 0;
      lVar16 = uVar17 * 0x70 + DAT_1464c1170;
      if (0 < *(int *)(lVar16 + 0x40)) {
        do {
          local_68 = (char *)0x0;
          lVar15 = (ulonglong)uVar14 * 0x1d0 + *(longlong *)(lVar16 + 0x48);
          lVar9 = -1;
          do {
            lVar10 = lVar9;
            lVar9 = lVar10 + 1;
          } while (local_148[lVar9] != 0);
          uVar13 = (int)lVar10 + 2;
          local_58 = (undefined4)lVar9;
          if ((0x80 < uVar13) && (uVar13 != 0)) {
            local_68 = (char *)FMemory::Realloc(0,(longlong)(int)uVar13,0);
          }
          local_188 = CONCAT31(local_188._1_3_,0x3f);
          local_60 = local_e8;
          if (local_68 != (char *)0x0) {
            local_60 = local_68;
          }
          FGenericPlatformString::Convert<wchar_t,char>(local_60,uVar13,local_148,uVar13);
          pcVar11 = local_60;
          do {
            cVar6 = *pcVar11;
            cVar1 = pcVar11[(lVar15 + 0x100) - (longlong)local_60];
            if (cVar6 != cVar1) break;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          if (((cVar6 == cVar1) && (*(int *)(lVar15 + 0x130) == local_108)) &&
             (*(int *)(lVar15 + 0x134) == local_104)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (local_68 != (char *)0x0) {
            FMemory::Free();
          }
          if (bVar5) {
            if ((*(byte *)(lVar15 + 0x120) & 0x10) != 0) {
              local_188 = CONCAT31(local_188._1_3_,1);
              cVar6 = FUN_141a981e0(lVar16,lVar15,uVar17,uVar14);
              if (cVar6 != '\0') {
                bVar3 = false;
              }
            }
            bVar4 = true;
            break;
          }
          uVar14 = uVar14 + 1;
        } while ((int)(uint)uVar14 < *(int *)(lVar16 + 0x40));
      }
      uVar14 = (short)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while ((int)(uint)uVar14 < DAT_1464c1168);
    param_1 = local_158;
    if (!bVar3) goto LAB_141a96496;
  }
  lVar16 = 0;
  if (DAT_1464c1184 != '\0') {
    lVar9 = (longlong)DAT_1464c117c * 0x70 + DAT_1464c1170;
    local_188 = local_188 & 0xffffff00;
    FUN_141a981e0(lVar9,(longlong)DAT_1464c1180 * 0x1d0 + *(longlong *)(lVar9 + 0x48));
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar9 + 0x38) < DAT_1469fd520) &&
     (_Init_thread_header(&DAT_1469fd520), DAT_1469fd520 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    if (plVar12 != (longlong *)0x0) {
      lVar16 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    DAT_1469fd518 = lVar16;
    _Init_thread_footer(&DAT_1469fd520);
  }
  lVar16 = DAT_1469fd518;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
    lVar15 = 4;
  }
  else {
    lVar15 = 0;
  }
  iVar7 = *(int *)(lVar16 + lVar15);
  if ((iVar7 - 4U & 0xfffffffd) == 0) {
    uVar18 = 0x44fa0000;
  }
  else {
    uVar18 = 0x447a0000;
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_1469fd530) &&
     (_Init_thread_header(&DAT_1469fd530), DAT_1469fd530 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar16 = 0;
    if (plVar12 != (longlong *)0x0) {
      lVar16 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    DAT_1469fd528 = lVar16;
    _Init_thread_footer(&DAT_1469fd530);
  }
  lVar16 = DAT_1469fd528;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar8 = GetCurrentThreadId(), lVar9 = 4, DVar8 == DAT_1468c21c0)) {
    lVar9 = 0;
  }
  uVar2 = *(undefined4 *)(lVar16 + lVar9);
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  FUN_141a98500(param_1,1,uVar2,uVar18);
  FUN_141a965d0(param_1,uVar2,iVar7);
  *(undefined1 *)(param_1 + 0x1a8) = 1;
LAB_141a96496:
  if (local_160 != (longlong *)0x0) {
    (**(code **)(*local_160 + 0x10))();
  }
  return;
}



// FUNCTION 141a965d0 FUN_141a965d0 body=207 status=ok
// SIG undefined FUN_141a965d0(void)

void FUN_141a965d0(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint local_res10 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar2 = 0;
  switch(param_3) {
  case 0:
  case 1:
    if (param_2 == 2) {
      iVar2 = 0x11;
    }
    break;
  case 3:
  case 4:
    iVar2 = 0xc;
    break;
  case 5:
  case 6:
    iVar2 = 1;
  }
  if (*(int *)(param_1 + 0x74) != iVar2) {
    local_res10[0] = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x128))
                      (*(longlong **)(param_1 + 0x78),iVar2,local_res10);
    if ((-1 < iVar1) && ((local_res10[0] & 1) != 0)) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x130))
                        (*(longlong **)(param_1 + 0x78),iVar2);
      if (iVar1 < 0) {
        local_18 = 0;
        local_10 = 0;
        FUN_141a94000(iVar1,"SwapChain4->SetColorSpace1(NewColorSpace)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                      ,0x25e,0,&local_18);
      }
      *(int *)(param_1 + 0x74) = iVar2;
    }
  }
  return;
}



// FUNCTION 141a966c0 FastHashName body=299 status=ok
// SIG undefined FastHashName(void)

void FastHashName(short *param_1,ulonglong param_2)

{
  ushort uVar1;
  
  *param_1 = ((ushort)param_2 & 0xf) + 0x41;
  param_1[1] = ((ushort)(param_2 >> 4) & 0xf) + 0x41;
  param_1[2] = ((ushort)(param_2 >> 8) & 0xf) + 0x41;
  param_1[3] = ((ushort)(param_2 >> 0xc) & 0xf) + 0x41;
  param_1[4] = ((ushort)(param_2 >> 0x10) & 0xf) + 0x41;
  param_1[5] = ((ushort)(param_2 >> 0x14) & 0xf) + 0x41;
  param_1[6] = ((ushort)(param_2 >> 0x18) & 0xf) + 0x41;
  param_1[7] = ((ushort)(param_2 >> 0x1c) & 0xf) + 0x41;
  param_1[8] = ((ushort)(param_2 >> 0x20) & 0xf) + 0x41;
  param_1[9] = ((ushort)(param_2 >> 0x24) & 0xf) + 0x41;
  param_1[10] = ((ushort)(param_2 >> 0x28) & 0xf) + 0x41;
  param_1[0xb] = ((ushort)(param_2 >> 0x2c) & 0xf) + 0x41;
  uVar1 = (ushort)(param_2 >> 0x30);
  param_1[0xc] = (uVar1 & 0xf) + 0x41;
  param_1[0xd] = (uVar1 >> 4 & 0xf) + 0x41;
  param_1[0xe] = ((byte)(param_2 >> 0x38) & 0xf) + 0x41;
  param_1[0xf] = (uVar1 >> 0xc) + 0x41;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 141a967f0 GraphicsDescV0 body=695 status=ok
// SIG undefined GraphicsDescV0(void)

undefined8 *
FD3D12_GRAPHICS_PIPELINE_STATE_DESC::GraphicsDescV0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined2 uStack_66;
  undefined4 local_10;
  
  *(undefined4 *)(param_2 + 0x51) = *(undefined4 *)(param_1 + 0x51);
  *(undefined4 *)(param_2 + 0x4e) = *(undefined4 *)(param_1 + 0x4e);
  *param_2 = *param_1;
  uVar1 = param_1[0x46];
  param_2[0x45] = param_1[0x45];
  param_2[0x46] = uVar1;
  *(undefined4 *)(param_2 + 0x47) = *(undefined4 *)(param_1 + 0x47);
  *(undefined4 *)((longlong)param_2 + 0x23c) = *(undefined4 *)((longlong)param_1 + 0x23c);
  uVar1 = param_1[2];
  param_2[1] = param_1[1];
  param_2[2] = uVar1;
  uVar1 = param_1[10];
  param_2[9] = param_1[9];
  param_2[10] = uVar1;
  uVar1 = param_1[0xc];
  param_2[0xb] = param_1[0xb];
  param_2[0xc] = uVar1;
  uVar1 = param_1[0xe];
  param_2[0xd] = param_1[0xd];
  param_2[0xe] = uVar1;
  uVar1 = param_1[8];
  param_2[7] = param_1[7];
  param_2[8] = uVar1;
  uVar1 = param_1[6];
  param_2[5] = param_1[5];
  param_2[6] = uVar1;
  uVar1 = param_1[4];
  lVar14 = 2;
  param_2[3] = param_1[3];
  param_2[4] = uVar1;
  puVar11 = param_1 + 0xf;
  puVar12 = param_2 + 0xf;
  do {
    puVar15 = puVar12;
    puVar13 = puVar11;
    uVar1 = puVar13[1];
    *puVar15 = *puVar13;
    puVar15[1] = uVar1;
    uVar1 = puVar13[3];
    puVar15[2] = puVar13[2];
    puVar15[3] = uVar1;
    uVar1 = puVar13[5];
    puVar15[4] = puVar13[4];
    puVar15[5] = uVar1;
    uVar1 = puVar13[7];
    puVar15[6] = puVar13[6];
    puVar15[7] = uVar1;
    uVar1 = puVar13[9];
    puVar15[8] = puVar13[8];
    puVar15[9] = uVar1;
    uVar1 = puVar13[0xb];
    puVar15[10] = puVar13[10];
    puVar15[0xb] = uVar1;
    uVar1 = puVar13[0xd];
    puVar15[0xc] = puVar13[0xc];
    puVar15[0xd] = uVar1;
    uVar1 = puVar13[0xf];
    puVar15[0xe] = puVar13[0xe];
    puVar15[0xf] = uVar1;
    lVar14 = lVar14 + -1;
    puVar11 = puVar13 + 0x10;
    puVar12 = puVar15 + 0x10;
  } while (lVar14 != 0);
  uVar1 = puVar13[0x11];
  puVar15[0x10] = puVar13[0x10];
  puVar15[0x11] = uVar1;
  uVar1 = puVar13[0x13];
  puVar15[0x12] = puVar13[0x12];
  puVar15[0x13] = uVar1;
  uVar1 = puVar13[0x15];
  puVar15[0x14] = puVar13[0x14];
  puVar15[0x15] = uVar1;
  uVar1 = puVar13[0x17];
  puVar15[0x16] = puVar13[0x16];
  puVar15[0x17] = uVar1;
  puVar15[0x18] = puVar13[0x18];
  uVar6 = param_1[0x3f];
  uVar7 = *(undefined2 *)(param_1 + 0x40);
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x204);
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x205);
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x206);
  uVar5 = *(undefined1 *)((longlong)param_1 + 0x207);
  uVar8 = param_1[0x41];
  uVar9 = param_1[0x42];
  uVar10 = param_1[0x43];
  uVar1 = param_1[0x44];
  param_2[0x3e] = param_1[0x3e];
  param_2[0x3f] = uVar6;
  local_10 = (undefined4)uVar1;
  param_2[0x40] =
       CONCAT17(uVar5,CONCAT16(uVar4,CONCAT15(uVar3,CONCAT14(uVar2,CONCAT22(uStack_66,uVar7)))));
  param_2[0x41] = uVar8;
  param_2[0x42] = uVar9;
  param_2[0x43] = uVar10;
  *(undefined4 *)(param_2 + 0x44) = local_10;
  *(undefined4 *)((longlong)param_2 + 0x264) = *(undefined4 *)((longlong)param_1 + 0x264);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1cc);
  *(undefined8 *)((longlong)param_2 + 0x1c4) = *(undefined8 *)((longlong)param_1 + 0x1c4);
  *(undefined8 *)((longlong)param_2 + 0x1cc) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1dc);
  *(undefined8 *)((longlong)param_2 + 0x1d4) = *(undefined8 *)((longlong)param_1 + 0x1d4);
  *(undefined8 *)((longlong)param_2 + 0x1dc) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x1e4) = *(undefined8 *)((longlong)param_1 + 0x1e4);
  *(undefined4 *)((longlong)param_2 + 0x1ec) = *(undefined4 *)((longlong)param_1 + 0x1ec);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = param_1[0x49];
  *(undefined8 *)((longlong)param_2 + 0x244) = param_1[0x48];
  *(undefined8 *)((longlong)param_2 + 0x24c) = uVar1;
  uVar1 = param_1[0x4b];
  *(undefined8 *)((longlong)param_2 + 0x254) = param_1[0x4a];
  *(undefined8 *)((longlong)param_2 + 0x25c) = uVar1;
  param_2[0x4d] = param_1[0x4d];
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar1 = param_1[0x50];
  param_2[0x4f] = param_1[0x4f];
  param_2[0x50] = uVar1;
  return param_2;
}



// FUNCTION 141a96ab0 FUN_141a96ab0 body=449 status=ok
// SIG undefined FUN_141a96ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a96ab0(undefined8 *param_1,longlong param_2,char param_3)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined1 *hFile;
  HANDLE hFileMappingObject;
  LPVOID pvVar3;
  undefined1 auStackY_98 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_98;
  if (*(char *)((longlong)param_1 + 0x41) == '\0') {
    uVar2 = param_2 + param_1[7];
    if ((ulonglong)param_1[6] < uVar2) {
      param_1[6] = uVar2 + 0xfffff & 0xfffffffffff00000;
      if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
        FlushViewOfFile((LPCVOID)param_1[5],param_1[7]);
        UnmapViewOfFile((LPCVOID)param_1[5]);
      }
      if ((HANDLE)param_1[4] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[4]);
      }
      if ((HANDLE)param_1[3] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[3]);
      }
      DVar1 = 1;
      if (*(char *)(param_1 + 8) != '\0') {
        DVar1 = 3;
      }
      hFile = CreateFileW((LPCWSTR)*param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,DVar1,0x80,
                          (HANDLE)0x0);
      param_1[3] = hFile;
      if (hFile == &DAT_ffffffffffffffff) {
        *(undefined1 *)((longlong)param_1 + 0x41) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 8) = 1;
        DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
        if (DVar1 == 0) {
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          local_30 = 0;
          local_28 = 0;
          local_20 = 0;
          WriteFile((HANDLE)param_1[3],&local_58,0x40,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
        }
        else if (param_3 != '\0') {
          param_1[6] = (ulonglong)DVar1;
        }
        hFileMappingObject =
             CreateFileMappingW((HANDLE)param_1[3],(LPSECURITY_ATTRIBUTES)0x0,4,0,
                                *(DWORD *)(param_1 + 6),(LPCWSTR)0x0);
        param_1[4] = hFileMappingObject;
        if (hFileMappingObject != (HANDLE)0x0) {
          pvVar3 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,param_1[6]);
          param_1[5] = pvVar3;
          if (pvVar3 != (LPVOID)0x0) {
            param_1[2] = pvVar3;
            return;
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x41) = 1;
        FDiskCacheInterface::ClearDiskCache(param_1);
      }
    }
  }
  return;
}



// FUNCTION 141a96c80 FUN_141a96c80 body=1004 status=ok
// SIG undefined FUN_141a96c80(void)

void FUN_141a96c80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  BOOL BVar7;
  DWORD DVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined8 local_48;
  undefined8 local_40;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
  BVar7 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar7 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (*piVar12 < DAT_1469fd4cc) {
    _Init_thread_header(&DAT_1469fd4cc);
    if (DAT_1469fd4cc == -1) {
      uVar11 = FCommandLine::Get();
      DAT_1469fd4c8 = FParse::Param(uVar11,L"ForceDX12ShaderPrecache");
      _Init_thread_footer(&DAT_1469fd4cc);
    }
  }
  if (*piVar12 < DAT_1469fd4d4) {
    _Init_thread_header(&DAT_1469fd4d4);
    if (DAT_1469fd4d4 == -1) {
      uVar11 = FCommandLine::Get();
      DAT_1469fd4d0 = FParse::Param(uVar11,L"NoDX12ShaderPrecache");
      _Init_thread_footer(&DAT_1469fd4d4);
    }
  }
  lVar1 = DAT_1469fd4a0;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    uVar10 = 4;
    if (DVar8 == DAT_1468c21c0) goto LAB_141a96d31;
  }
  else {
LAB_141a96d31:
    uVar10 = 0;
  }
  lVar2 = DAT_1469fd4b8;
  if (DAT_1469fd4c8 == '\0') {
    uVar10 = (ulonglong)(*(int *)(uVar10 + lVar1) != 0);
    if (DAT_1469fd4d0 != '\0') {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 1;
  }
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    uVar13 = 4;
    if (DVar8 == DAT_1468c21c0) goto LAB_141a96d8a;
  }
  else {
LAB_141a96d8a:
    uVar13 = 0;
  }
  bVar16 = *(int *)(uVar13 + lVar2) != 0;
  lVar1 = param_1 + 0x360;
  *(bool *)(param_1 + 0x488) = bVar16;
  FDiskCacheInterface::Init(lVar1,param_2,uVar10);
  lVar2 = param_1 + 0x3c0;
  FDiskCacheInterface::Init(lVar2,param_3,uVar10);
  lVar3 = param_1 + 0x420;
  FDiskCacheInterface::Init(lVar3,param_4,bVar16);
  bVar16 = false;
  if (DAT_1469fd4d0 != '\0') {
    if (1 < *(int *)(param_1 + 0x368)) {
      FDiskCacheInterface::ClearDiskCache(lVar1);
      FDiskCacheInterface::Init(lVar1,lVar1,*(undefined1 *)(param_1 + 0x3a2));
    }
    if (1 < *(int *)(param_1 + 0x3c8)) {
      FDiskCacheInterface::ClearDiskCache(lVar2);
      FDiskCacheInterface::Init(lVar2,lVar2,*(undefined1 *)(param_1 + 0x402));
    }
    bVar16 = true;
  }
  *(undefined8 *)(param_1 + 0x398) = 0xc;
  *(undefined8 *)(param_1 + 0x3f8) = 0xc;
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x46c);
  *(ulonglong *)(param_1 + 0x458) = uVar10 + 0xc;
  if ((*(char *)(param_1 + 0x488) == '\0') ||
     (plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20), plVar4 == (longlong *)0x0))
  goto LAB_141a96fc3;
  if (uVar10 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0x430) + 0xc;
  }
  plVar15 = (longlong *)(param_1 + 0x480);
  plVar5 = (longlong *)*plVar15;
  *plVar15 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  iVar9 = (**(code **)(*plVar4 + 0x160))(plVar4,lVar14,uVar10,&DAT_144db8048,plVar15);
  if (((iVar9 + 0x80000000U & 0x80000000) == 0) && (iVar9 != -0x7785fffc)) {
    if (1 < *(int *)(param_1 + 0x368)) {
      FDiskCacheInterface::ClearDiskCache(lVar1);
      FDiskCacheInterface::Init(lVar1,lVar1,*(undefined1 *)(param_1 + 0x3a2));
    }
    if (1 < *(int *)(param_1 + 0x3c8)) {
      FDiskCacheInterface::ClearDiskCache(lVar2);
      FDiskCacheInterface::Init(lVar2,lVar2,*(undefined1 *)(param_1 + 0x402));
    }
LAB_141a96f2c:
    if (1 < *(int *)(param_1 + 0x428)) {
      FDiskCacheInterface::ClearDiskCache(lVar3);
      FDiskCacheInterface::Init(lVar3,lVar3,*(undefined1 *)(param_1 + 0x462));
    }
    plVar5 = (longlong *)*plVar15;
    *plVar15 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    iVar9 = (**(code **)(*plVar4 + 0x160))(plVar4,0,0,&DAT_144db8048,plVar15);
    if (iVar9 < 0) {
      local_48 = 0;
      local_40 = 0;
      FUN_141a94000(iVar9,
                    "pDevice1->CreatePipelineLibrary(nullptr, 0, IID_PPV_ARGS(PipelineLibrary.GetInitReference()))"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                    ,0x266,0,&local_48);
    }
  }
  else if (bVar16) goto LAB_141a96f2c;
  AK::MemoryMgr::StartProfileThreadUsage((long)*plVar15);
LAB_141a96fc3:
                    /* WARNING: Could not recover jumptable at 0x000141a96fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a97070 FUN_141a97070 body=1115 status=ok
// SIG undefined FUN_141a97070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a97070(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong **local_e0;
  undefined8 *local_d8;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x65) = 0;
  puVar2 = *(undefined8 **)(lVar1 + 0x730);
  if (puVar2 != (undefined8 *)0x0) {
    local_c0 = (longlong *)0x0;
    (**(code **)*puVar2)(puVar2,&DAT_144db8068,&local_c0);
    if (local_c0 != (longlong *)0x0) {
      iVar6 = (**(code **)(*local_c0 + 0xe0))(local_c0,0,&local_c8,4);
      if ((-1 < iVar6) && ((int)local_c8 != 0)) {
        *(undefined1 *)(param_1 + 0x65) = 1;
      }
      if (local_c0 != (longlong *)0x0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
  }
  FUN_141a6e860(param_1 + 0x118);
  FUN_141a84370(param_1,3);
  uVar8 = 0x802;
  if (*(char *)(param_1 + 0x65) == '\0') {
    uVar8 = 2;
  }
  FUN_141a91ec0(param_1,&local_58);
  cVar5 = FUN_141a88e30(*(undefined8 *)(lVar1 + 0x10));
  if (cVar5 != '\0') {
    local_c8 = (longlong *)0x0;
    (**(code **)*puVar2)(puVar2,&DAT_144da1e48,&local_c8);
    iVar6 = (**(code **)(*local_c8 + 0x70))();
    if (iVar6 == 0) {
      FUN_141a85600(*(undefined8 *)(lVar1 + 0x10));
    }
    else {
      local_84 = 4;
      uStack_9c = 1;
      local_98 = 1;
      uStack_a0 = FUN_141a30560(*(undefined4 *)(param_1 + 0x60));
      local_a8 = *(undefined4 *)(param_1 + 0x54);
      uStack_a4 = *(undefined4 *)(param_1 + 0x58);
      local_90 = 0x30;
      local_8c = CONCAT44(1,*(undefined4 *)(param_1 + 0x98));
      local_7c = uVar8;
      uVar7 = FUN_141a55960(*(undefined8 *)(lVar1 + 0xd50),0);
      plVar4 = local_c8;
      plVar3 = *(longlong **)(param_1 + 0x68);
      puVar2 = (undefined8 *)(param_1 + 0x68);
      *puVar2 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      local_e0 = (longlong **)0x0;
      local_e8 = 0;
      local_d8 = puVar2;
      iVar6 = (**(code **)(*plVar4 + 0x78))(plVar4,uVar7,*(undefined8 *)(param_1 + 0x48),&local_a8);
      if (iVar6 < 0) {
        local_e0 = &local_c0;
        local_c0 = (longlong *)0x0;
        local_b8 = 0;
        local_e8 = 0;
        FUN_141a94000(iVar6,
                      "(Factory2->CreateSwapChainForHwnd(pCommandQueue, WindowHandle, &SwapChainDesc1, nullptr, nullptr, SwapChain1.GetInitReference()))"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                      ,0x75);
      }
      plVar3 = *(longlong **)(param_1 + 0x78);
      puVar2 = (undefined8 *)*puVar2;
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar6 = (**(code **)*puVar2)(puVar2,&DAT_144da1fb0,param_1 + 0x78);
      if (iVar6 < 0) {
        local_e0 = &local_c0;
        local_c0 = (longlong *)0x0;
        local_b8 = 0;
        local_e8 = 0;
        FUN_141a94000(iVar6,
                      "SwapChain1->QueryInterface(IID_PPV_ARGS(SwapChain4.GetInitReference()))",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                      ,0x76);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x730) + 0x40))
                (*(longlong **)(lVar1 + 0x730),*(undefined8 *)(param_1 + 0x48),1);
      local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(param_1 + 0x60));
      FUN_141a914e0(param_1,local_a8,uStack_a4,*(undefined1 *)(param_1 + 0x5c));
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_90 = local_40;
    local_78 = *(undefined8 *)(param_1 + 0x48);
    local_7c = 0;
    local_70 = (uint)(*(char *)(param_1 + 0x5c) == '\0');
    local_64 = 0;
    local_a8 = local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    local_98 = local_48;
    local_8c = 1;
    local_84 = CONCAT44(*(undefined4 *)(param_1 + 0x98),0x30);
    local_6c = 4;
    local_68 = uVar8;
    uVar7 = FUN_141a55960(*(undefined8 *)(lVar1 + 0xd50),0);
    local_c8 = (longlong *)0x0;
    iVar6 = (**(code **)(**(longlong **)(lVar1 + 0x730) + 0x50))
                      (*(longlong **)(lVar1 + 0x730),uVar7,&local_a8,&local_c8);
    if (iVar6 < 0) {
      local_e0 = &local_c0;
      local_c0 = (longlong *)0x0;
      local_b8 = 0;
      local_e8 = 0;
      FUN_141a94000(iVar6,
                    "Adapter->GetDXGIFactory2()->CreateSwapChain(pCommandQueue, &SwapChainDesc, SwapChain.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                    ,0x9c);
    }
    plVar4 = local_c8;
    plVar3 = *(longlong **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    iVar6 = (**(code **)*plVar4)(plVar4,&DAT_144db8078,param_1 + 0x68);
    if (iVar6 < 0) {
      local_e0 = &local_c0;
      local_c0 = (longlong *)0x0;
      local_b8 = 0;
      local_e8 = 0;
      FUN_141a94000(iVar6,"SwapChain->QueryInterface(IID_PPV_ARGS(SwapChain1.GetInitReference()))",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                    ,0x9d);
    }
    plVar4 = local_c8;
    plVar3 = *(longlong **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)*plVar4)(plVar4,&DAT_144da1fb0,param_1 + 0x78);
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    (**(code **)(**(longlong **)(lVar1 + 0x730) + 0x40))
              (*(longlong **)(lVar1 + 0x730),*(undefined8 *)(param_1 + 0x48),1);
    local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(param_1 + 0x60));
    FUN_141a914e0(param_1,local_58,uStack_54,*(undefined1 *)(param_1 + 0x5c));
  }
  PostMessageW(*(HWND *)(param_1 + 0x48),0xf,0,0);
  return;
}



// FUNCTION 141a974d0 Init body=313 status=ok
// SIG undefined Init(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FDiskCacheInterface::Init(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  DWORD DVar4;
  undefined1 *hFindFile;
  undefined1 auStack_298 [32];
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = param_3;
  if (param_1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  if (*(char *)((longlong)param_1 + 0x42) == '\0') {
    *(undefined2 *)(param_1 + 8) = 0x100;
  }
  else {
    hFindFile = FindFirstFileW((LPCWSTR)*param_1,&local_278);
    if (hFindFile == &DAT_ffffffffffffffff) {
      DVar4 = GetLastError();
      if (DVar4 == 2) {
        *(undefined1 *)(param_1 + 8) = 0;
      }
    }
    else {
      FindClose(hFindFile);
    }
  }
  cVar1 = *(char *)(param_1 + 8);
  FUN_141a96ab0(param_1,0x10000,1);
  if ((cVar1 == '\0') || (puVar3 = (undefined8 *)param_1[2], puVar3 == (undefined8 *)0x0)) {
    *(undefined8 *)((longlong)param_1 + 0x44) = 8;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    *(undefined8 *)((longlong)param_1 + 0x44) = *puVar3;
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(puVar3 + 1);
    if (*(int *)((longlong)param_1 + 0x44) != 8) {
      ClearAndReinitialize(param_1);
    }
  }
  return;
}



// FUNCTION 141a97610 FUN_141a97610 body=124 status=ok
// SIG undefined FUN_141a97610(void)

void FUN_141a97610(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar2 = (longlong *)FUN_141a55960(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd50));
  iVar1 = (**(code **)(*plVar2 + 0x70))
                    (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x10),param_3);
  if (iVar1 < 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_141a94000(iVar1,"CommandQueue->Signal(FenceCore->GetFence(), FenceToSignal)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Fence.cpp"
                  ,0x15,0,&local_18);
  }
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



// FUNCTION 141a97690 FUN_141a97690 body=135 status=ok
// SIG undefined FUN_141a97690(void)

void FUN_141a97690(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + 0x480);
  plVar1 = (longlong *)param_2[1];
  uVar2 = *param_2;
  param_2[1] = 0;
  local_18 = param_3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_141a942d0(param_2 + 1,uVar2,&local_18);
  FUN_141a95060(param_1,param_3,param_2);
  return;
}



// FUNCTION 141a97720 FUN_141a97720 body=135 status=ok
// SIG undefined FUN_141a97720(void)

void FUN_141a97720(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + 0x480);
  plVar1 = (longlong *)param_2[1];
  uVar2 = *param_2;
  param_2[1] = 0;
  local_18 = param_3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_141a94510(param_2 + 1,uVar2,&local_18);
  FUN_141a95270(param_1,param_3,param_2);
  return;
}



// FUNCTION 141a977b0 FUN_141a977b0 body=37 status=ok
// SIG undefined FUN_141a977b0(void)

void FUN_141a977b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_2 == 0) && (*(char *)(param_1 + 0x5c) == '\0')) &&
     (uVar1 = 0, *(char *)(param_1 + 0x65) != '\0')) {
    uVar1 = 0x200;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a977d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))
            (*(longlong **)(param_1 + 0x68),param_2,uVar1);
  return;
}



// FUNCTION 141a977e0 FUN_141a977e0 body=2184 status=ok
// SIG undefined FUN_141a977e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a977e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined1 auStack_158 [32];
  uint local_138;
  uint local_134;
  ulonglong local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  LPCRITICAL_SECTION local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8 [2];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  QueryPerformanceCounter(&local_f0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
  local_108 = lpCriticalSection;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (((*(char *)(param_1 + 0x3a1) == '\0') && (*(char *)(param_1 + 0x401) == '\0')) &&
     ((*(char *)(param_1 + 0x488) == '\0' || (*(char *)(param_1 + 0x461) == '\0')))) {
    uVar11 = (ulonglong)_tls_index;
    *(undefined8 *)(param_1 + 0x398) = 0xc;
    *(undefined8 *)(param_1 + 0x3f8) = 0xc;
    *(ulonglong *)(param_1 + 0x458) = (ulonglong)*(uint *)(param_1 + 0x46c) + 0xc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
         DAT_1469fd4c4) && (_Init_thread_header(&DAT_1469fd4c4), DAT_1469fd4c4 == -1)) {
      uVar6 = FCommandLine::Get();
      DAT_1469fd4c0 = FParse::Param(uVar6);
      _Init_thread_footer(&DAT_1469fd4c4);
    }
    uVar8 = *(uint *)(param_1 + 0x3a8);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_134 = 0;
    local_138 = uVar8;
    if (uVar8 != 0) {
      lVar1 = param_1 + 0x360;
      do {
        puVar9 = (undefined8 *)0x0;
        FUN_141a96ab0(lVar1,0x310);
        if (*(char *)(param_1 + 0x3a1) == '\0') {
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398));
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 0x310;
        }
        uVar11 = 0;
        *puVar9 = 0;
        FUN_141a96ab0(lVar1,8);
        if (*(char *)(param_1 + 0x3a1) == '\0') {
          lVar4 = *(longlong *)(param_1 + 0x398);
          *(longlong *)(param_1 + 0x398) = lVar4 + 8;
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0x370) + lVar4);
          if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
            FUN_141a96ab0(lVar1,0x19);
            uVar12 = uVar11;
            if (*(char *)(param_1 + 0x3a1) == '\0') {
              uVar12 = *(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398);
              *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 0x19;
            }
            lVar4 = FD3D12RootSignatureManager::GetRootSignature
                              (*(longlong *)(param_1 + 8) + 400,uVar12);
            puVar9[1] = *(undefined8 *)(lVar4 + 8);
          }
        }
        if ((*(uint *)(puVar9 + 0x47) != 0) &&
           (FDiskCacheInterface::SetPointerAndAdvanceFilePosition
                      (lVar1,puVar9 + 0x46,(ulonglong)*(uint *)(puVar9 + 0x47) << 5,1),
           *(int *)(puVar9 + 0x47) != 0)) {
          do {
            FUN_141a96ab0(lVar1,4);
            puVar13 = (undefined4 *)0x0;
            if (*(char *)(param_1 + 0x3a1) == '\0') {
              puVar13 = (undefined4 *)
                        (*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398));
              *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 4;
            }
            FDiskCacheInterface::SetPointerAndAdvanceFilePosition
                      (lVar1,uVar11 * 0x20 + puVar9[0x46],*puVar13,1);
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            uVar8 = local_138;
          } while (uVar10 < *(uint *)(puVar9 + 0x47));
        }
        uVar11 = 0;
        if ((*(uint *)(puVar9 + 0xd) != 0) &&
           (FDiskCacheInterface::SetPointerAndAdvanceFilePosition
                      (lVar1,puVar9 + 0xc,(ulonglong)*(uint *)(puVar9 + 0xd) * 0x18,1),
           *(int *)(puVar9 + 0xd) != 0)) {
          do {
            FUN_141a96ab0(lVar1,4);
            puVar13 = (undefined4 *)0x0;
            if (*(char *)(param_1 + 0x3a1) == '\0') {
              puVar13 = (undefined4 *)
                        (*(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398));
              *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 4;
            }
            FDiskCacheInterface::SetPointerAndAdvanceFilePosition
                      (lVar1,puVar9[0xc] + (uVar11 * 3 + 1) * 8,*puVar13,1);
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            uVar8 = local_138;
          } while (uVar10 < *(uint *)(puVar9 + 0xd));
        }
        if (*(uint *)(puVar9 + 0xf) != 0) {
          FDiskCacheInterface::SetPointerAndAdvanceFilePosition
                    (lVar1,puVar9 + 0xe,(ulonglong)*(uint *)(puVar9 + 0xf) << 2,1);
        }
        lVar4 = puVar9[3];
        if ((lVar4 != 0) && (FUN_141a96ab0(lVar1,lVar4), *(char *)(param_1 + 0x3a1) == '\0')) {
          puVar9[2] = *(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398);
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + lVar4;
        }
        lVar4 = puVar9[5];
        if ((lVar4 != 0) && (FUN_141a96ab0(lVar1,lVar4), *(char *)(param_1 + 0x3a1) == '\0')) {
          puVar9[4] = *(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398);
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + lVar4;
        }
        lVar4 = puVar9[7];
        if ((lVar4 != 0) && (FUN_141a96ab0(lVar1,lVar4), *(char *)(param_1 + 0x3a1) == '\0')) {
          puVar9[6] = *(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398);
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + lVar4;
        }
        lVar4 = puVar9[9];
        if ((lVar4 != 0) && (FUN_141a96ab0(lVar1,lVar4), *(char *)(param_1 + 0x3a1) == '\0')) {
          puVar9[8] = *(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398);
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + lVar4;
        }
        lVar4 = puVar9[0xb];
        if ((lVar4 != 0) && (FUN_141a96ab0(lVar1,lVar4), *(char *)(param_1 + 0x3a1) == '\0')) {
          puVar9[10] = *(longlong *)(param_1 + 0x370) + *(longlong *)(param_1 + 0x398);
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + lVar4;
        }
        FUN_141a96ab0(lVar1,8);
        if (*(char *)(param_1 + 0x3a1) == '\0') {
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 8;
        }
        FUN_141a96ab0(lVar1);
        if (*(char *)(param_1 + 0x3a1) == '\0') {
          *(longlong *)(param_1 + 0x398) = *(longlong *)(param_1 + 0x398) + 8;
        }
        puVar9[0x51] = 0;
        puVar9[0x50] = 0;
        if (*(char *)(param_1 + 0x3a1) != '\0') break;
        local_118 = 0;
        uStack_f8 = &local_128;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        local_100 = param_1;
        puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar5 + 1) = (undefined4)local_100;
          *(undefined4 *)((longlong)puVar5 + 0xc) = local_100._4_4_;
          *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_f8;
          *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_f8._4_4_;
        }
        local_d8[0] = &LAB_141a95890;
        FUN_141a6a750(param_1,puVar9,&local_118,local_d8);
        if (local_98 != 0) {
          plVar7 = local_c8;
          if (local_a8 != (longlong *)0x0) {
            plVar7 = local_a8;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (DAT_1469fd4c0 != '\0') {
          uVar11 = 0;
          if (499 < (int)local_120) {
            uVar12 = (ulonglong)((longlong)(local_128 + (int)local_120) + (7 - (longlong)local_128))
                     >> 3;
            if (local_128 + (int)local_120 < local_128) {
              uVar12 = uVar11;
            }
            plVar7 = local_128;
            local_130 = uVar12;
            if (uVar12 != 0) {
              do {
                lVar4 = *plVar7;
                lVar2 = *(longlong *)(lVar4 + 0x10);
                while (lVar2 != 0) {
                  LOCK();
                  bVar14 = *(int *)(lVar2 + 0x30) == 0;
                  if (bVar14) {
                    *(int *)(lVar2 + 0x30) = 0;
                  }
                  UNLOCK();
                  if (bVar14) {
                    uVar12 = local_130;
                    if (*(longlong *)(lVar2 + 0x40) != 0) {
                      (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x20))();
                      *(undefined8 *)(lVar2 + 0x40) = 0;
                      uVar12 = local_130;
                    }
                    break;
                  }
                  FUN_1416b0750();
                  uVar12 = local_130;
                  lVar2 = *(longlong *)(lVar4 + 0x10);
                }
                uVar11 = uVar11 + 1;
                plVar7 = plVar7 + 1;
              } while (uVar11 != uVar12);
            }
            bVar14 = local_120._4_4_ != 0;
            local_120 = (ulonglong)local_120._4_4_ << 0x20;
            if (bVar14) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_128);
            }
          }
        }
        local_134 = local_134 + 1;
      } while (local_134 < uVar8);
    }
    uVar10 = 0;
    uVar8 = *(uint *)(param_1 + 0x408);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (uVar8 != 0) {
      lVar1 = param_1 + 0x3c0;
      do {
        puVar9 = (undefined8 *)0x0;
        FUN_141a96ab0(lVar1,0x60);
        if (*(char *)(param_1 + 0x401) == '\0') {
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x3d0) + *(longlong *)(param_1 + 0x3f8));
          *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + 0x60;
        }
        lVar4 = 0;
        *puVar9 = 0;
        FUN_141a96ab0(lVar1,8,0);
        if (*(char *)(param_1 + 0x401) == '\0') {
          lVar2 = *(longlong *)(param_1 + 0x3f8);
          *(longlong *)(param_1 + 0x3f8) = lVar2 + 8;
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0x3d0) + lVar2);
          if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
            FUN_141a96ab0(lVar1,0x19,0);
            if (*(char *)(param_1 + 0x401) == '\0') {
              lVar4 = *(longlong *)(param_1 + 0x3d0) + *(longlong *)(param_1 + 0x3f8);
              *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + 0x19;
            }
            lVar4 = FD3D12RootSignatureManager::GetRootSignature
                              (*(longlong *)(param_1 + 8) + 400,lVar4);
            puVar9[1] = *(undefined8 *)(lVar4 + 8);
          }
        }
        lVar4 = puVar9[3];
        if ((lVar4 != 0) && (FUN_141a96ab0(lVar1,lVar4,0), *(char *)(param_1 + 0x401) == '\0')) {
          puVar9[2] = *(longlong *)(param_1 + 0x3d0) + *(longlong *)(param_1 + 0x3f8);
          *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + lVar4;
        }
        FUN_141a96ab0(lVar1,8);
        if (*(char *)(param_1 + 0x401) == '\0') {
          *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + 8;
        }
        FUN_141a96ab0(lVar1,8);
        if (*(char *)(param_1 + 0x401) == '\0') {
          *(longlong *)(param_1 + 0x3f8) = *(longlong *)(param_1 + 0x3f8) + 8;
        }
        puVar9[6] = 0;
        puVar9[5] = 0;
        lpCriticalSection = local_108;
        if (*(char *)(param_1 + 0x401) != '\0') break;
        uVar6 = FD3D12PipelineStateCache::HashPSODesc(puVar9);
        puVar9[0xb] = uVar6;
        local_110 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_143f77b70;
          puVar5[1] = param_1;
        }
        local_88[0] = &LAB_141a958a0;
        FUN_141a6a4a0(param_1,puVar9,&local_110,local_88);
        if (local_48 != 0) {
          plVar7 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar7 = local_58;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        uVar10 = uVar10 + 1;
        lpCriticalSection = local_108;
      } while (uVar10 < uVar8);
    }
    QueryPerformanceCounter(local_e8);
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a98070 FUN_141a98070 body=363 status=ok
// SIG undefined FUN_141a98070(void)

void FUN_141a98070(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar11;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_141a84370(param_1,3);
  plVar9 = *(longlong **)(param_1 + 0x68);
  uVar7 = 0x802;
  if (*(char *)(param_1 + 0x65) == '\0') {
    uVar7 = 2;
  }
  lVar8 = *plVar9;
  uVar3 = FUN_141a30560(*(undefined4 *)(param_1 + 0x60));
  iVar4 = (**(code **)(lVar8 + 0x68))
                    (plVar9,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),CONCAT44(uVar10,uVar3),CONCAT44(uVar11,uVar7));
  uVar6 = 0;
  if (iVar4 < 0) {
    local_28 = 0;
    local_20 = 0;
    FUN_141a94000(iVar4,
                  "SwapChain1->ResizeBuffers(NumBackBuffers, SizeX, SizeY, GetRenderTargetFormat(PixelFormat), SwapChainFlags)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                  ,0x117,*(undefined8 *)(lVar1 + 0x18),&local_28);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0xd50);
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x88);
      lVar5 = FUN_141a87c80(uVar2,*(undefined4 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                            uVar6);
      lVar8 = *(longlong *)(lVar1 + (longlong)(int)uVar6 * 8);
      *(longlong *)(lVar1 + (longlong)(int)uVar6 * 8) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x68) + 8))(lVar5 + 0x68);
      }
      if (lVar8 != 0) {
        (**(code **)(*(longlong *)(lVar8 + 0x68) + 0x10))(lVar8 + 0x68);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = **(undefined8 **)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = **(undefined8 **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xd0) = **(undefined8 **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xd8) = **(undefined8 **)(param_1 + 0xc0);
  return;
}



// FUNCTION 141a981e0 FUN_141a981e0 body=790 status=ok
// SIG undefined FUN_141a981e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_141a981e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,char param_5
             )

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  int local_b0;
  uint local_a8;
  undefined1 local_a4 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  _guard_xfg_dispatch_icall_nop(local_a4,0,0x6c);
  local_a8 = -(uint)(param_5 != '\0') & 3;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_1469fd4f0) {
    _Init_thread_header(&DAT_1469fd4f0);
    if (DAT_1469fd4f0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd4e8 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMinNits");
      _Init_thread_footer(&DAT_1469fd4f0);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1469fd500) {
    _Init_thread_header(&DAT_1469fd500);
    if (DAT_1469fd500 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd4f8 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMaxNits");
      _Init_thread_footer(&DAT_1469fd500);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1469fd510) {
    _Init_thread_header(&DAT_1469fd510);
    if (DAT_1469fd510 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd508 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UseNativeNits");
      _Init_thread_footer(&DAT_1469fd510);
    }
  }
  if (param_5 != '\0') {
    local_a0 = *(undefined8 *)(param_2 + 0x160);
    uStack_98 = *(undefined8 *)(param_2 + 0x168);
    local_60 = *(double *)(param_2 + 0x1b0);
    local_40 = 0;
    local_90 = *(undefined8 *)(param_2 + 0x170);
    uStack_88 = *(undefined8 *)(param_2 + 0x178);
    local_80 = *(undefined8 *)(param_2 + 0x180);
    uStack_78 = *(undefined8 *)(param_2 + 0x188);
    local_70 = *(undefined8 *)(param_2 + 400);
    uStack_68 = *(undefined8 *)(param_2 + 0x198);
    local_58 = *(double *)(param_2 + 0x1b8);
    local_50 = 0;
    uStack_48 = 0;
    IConsoleVariable::SetWithCurrentPriority(DAT_1469fd4e8,(float)local_60);
    IConsoleVariable::SetWithCurrentPriority(DAT_1469fd4f8,(float)local_58);
  }
  plVar2 = DAT_1469fd508;
  uVar3 = (**(code **)(*DAT_1469fd508 + 0x18))(DAT_1469fd508);
  FString::PrintfImpl(&local_b8,&DAT_143f3edc0,param_5 != '\0');
  puVar6 = &DAT_143f3eda8;
  if (local_b0 != 0) {
    puVar6 = local_b8;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,puVar6,uVar3 & 0xff000000);
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = agsSetDisplayMode(DAT_1464c1140,param_3,param_4,&local_a8);
  if ((iVar4 == 0) || (iVar4 == 5)) {
    if (param_5 == '\0') {
      _DAT_1464c117c = 0xffffffffffffffff;
    }
    else {
      _DAT_1464c117c = CONCAT44(param_4,param_3);
    }
    DAT_1464c1184 = param_5 != '\0';
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 141a98500 FUN_141a98500 body=487 status=ok
// SIG undefined FUN_141a98500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a98500(longlong param_1,char param_2,int param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_2 != '\0') {
    lVar2 = (longlong)param_3 * 0x20;
    local_38 = (undefined2)(int)(*(float *)(&DAT_144db8090 + lVar2) * 50000.0);
    local_36 = (undefined2)(int)(*(float *)(&DAT_144db8094 + lVar2) * 50000.0);
    local_34 = (undefined2)(int)(*(float *)(&DAT_144db8098 + lVar2) * 50000.0);
    local_32 = (undefined2)(int)(*(float *)(&DAT_144db809c + lVar2) * 50000.0);
    local_30 = (undefined2)(int)(*(float *)(&DAT_144db80a0 + lVar2) * 50000.0);
    local_2e = (undefined2)(int)(*(float *)(&DAT_144db80a4 + lVar2) * 50000.0);
    local_2c = (undefined2)(int)(*(float *)(&DAT_144db80a8 + lVar2) * 50000.0);
    local_2a = (undefined2)(int)(*(float *)(&DAT_144db80ac + lVar2) * 50000.0);
    local_28 = (undefined4)(longlong)(param_4 * 10000.0);
    local_24 = (undefined4)(longlong)(param_5 * 10000.0);
    local_20 = (undefined2)(int)param_6;
    local_1e = (undefined2)(int)param_7;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x140))
                      (*(longlong **)(param_1 + 0x78),1,0x1c,&local_38);
    if (iVar1 < 0) {
      local_50 = &local_48;
      local_58 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_141a94000(iVar1,
                    "SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_HDR10, sizeof(HDR10MetaData), &HDR10MetaData)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                    ,0x285);
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x140))
                      (*(longlong **)(param_1 + 0x78),0,0,0);
    if (iVar1 < 0) {
      local_50 = &local_48;
      local_58 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_141a94000(iVar1,"SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_NONE, 0, nullptr)",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                    ,0x292);
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 141a986f0 SetPointerAndAdvanceFilePosition body=252 status=ok
// SIG undefined SetPointerAndAdvanceFilePosition(void)

undefined8
FDiskCacheInterface::SetPointerAndAdvanceFilePosition
          (longlong param_1,longlong *param_2,size_t param_3,char param_4)

{
  int iVar1;
  void *_Dst;
  longlong *plVar2;
  
  FUN_141a96ab0(param_1,param_3,0);
  if (*(char *)(param_1 + 0x41) == '\0') {
    if (param_4 == '\0') {
      *param_2 = *(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38);
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + param_3;
      return 1;
    }
    if (((param_3 == 10) &&
        (plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38)),
        *plVar2 == 0x5455424952545441)) && ((short)plVar2[1] == 0x45)) {
      *param_2 = (longlong)"ATTRIBUTE";
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 10;
      return 1;
    }
    _Dst = (void *)FMemory::Malloc(param_3,0);
    if (_Dst != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38)),
                 param_3);
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8) = _Dst;
      *param_2 = (longlong)_Dst;
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + param_3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141a987f0 FUN_141a987f0 body=303 status=ok
// SIG undefined FUN_141a987f0(void)

void FUN_141a987f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_stack_ffffffffffffffc8;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  if (DAT_146ab632a != '\0') {
    if (DAT_1464c1184 != '\0') {
      lVar2 = (longlong)DAT_1464c117c * 0x70 + DAT_1464c1170;
      FUN_141a981e0(lVar2,(longlong)DAT_1464c1180 * 0x1d0 + *(longlong *)(lVar2 + 0x48),
                    (longlong)DAT_1464c117c,(longlong)DAT_1464c1180,
                    in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    }
    if (*(char *)(param_1 + 0x70) != '\0') {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x140))
                        (*(longlong **)(param_1 + 0x78),0,0,0);
      if (iVar1 < 0) {
        local_20 = 0;
        local_18 = 0;
        FUN_141a94000(iVar1,"SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_NONE, 0, nullptr)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                      ,0x292,0,&local_20);
      }
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      local_28[0] = 0;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x128))
                        (*(longlong **)(param_1 + 0x78),0,local_28);
      if ((-1 < iVar1) && ((local_28[0] & 1) != 0)) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x130))
                          (*(longlong **)(param_1 + 0x78),0);
        if (iVar1 < 0) {
          local_20 = 0;
          local_18 = 0;
          FUN_141a94000(iVar1,"SwapChain4->SetColorSpace1(NewColorSpace)",
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Viewport.cpp"
                        ,0x25e,0,&local_20);
        }
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 141a98920 FUN_141a98920 body=99 status=ok
// SIG undefined FUN_141a98920(void)

void FUN_141a98920(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  UNLOCK();
  *(longlong *)(param_1 + 0x40) = param_2;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (param_2 != 0) {
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_1415ab270(1);
      *(longlong **)(param_1 + 0x38) = plVar1;
    }
    (**(code **)(*plVar1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000141a98965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_1);
    return;
  }
  FUN_1415b5910();
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_141a95fc0(param_1);
  return;
}



// FUNCTION 141a98990 FUN_141a98990 body=213 status=ok
// SIG undefined FUN_141a98990(void)

void FUN_141a98990(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar2 = FUN_141a75550();
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x78);
    uVar5 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x40))();
    if (uVar5 < param_2) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
      }
      iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x48))
                        (*(longlong **)(lVar1 + 0x10),param_2,*(undefined8 *)(lVar1 + 0x18));
      if (iVar4 < 0) {
        local_18 = 0;
        local_10 = 0;
        FUN_141a94000(iVar4,
                      "FenceCore->GetFence()->SetEventOnCompletion(FenceValue, FenceCore->GetCompletionEvent())"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Fence.cpp"
                      ,0x2c,0,&local_18);
      }
      WaitForSingleObject(*(HANDLE *)(lVar1 + 0x18),0xffffffff);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    }
    FUN_141a7d850(param_1);
  }
  return;
}



// FUNCTION 141a98a70 FUN_141a98a70 body=165 status=ok
// SIG undefined FUN_141a98a70(void)

void FUN_141a98a70(longlong param_1,int param_2)

{
  if ((*(char *)((longlong)param_2 * 0x60 + 0x3a1 + param_1) == '\0') &&
     (*(char *)(param_1 + 0x461) == '\0')) {
    param_1 = ((longlong)param_2 + 9) * 0x60 + param_1;
    FUN_141a96ab0(param_1,8);
    if (*(char *)(param_1 + 0x41) == '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38)) = 0;
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 8;
    }
    FUN_141a96ab0(param_1,8);
    if (*(char *)(param_1 + 0x41) == '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x38)) = 0;
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 8;
    }
  }
  return;
}



// FUNCTION 141a98b20 FUN_141a98b20 body=68 status=ok
// SIG undefined FUN_141a98b20(void)

undefined8 * FUN_141a98b20(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144db8510;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 141a98b70 UShaderPlatformQualitySettings body=64 status=ok
// SIG undefined UShaderPlatformQualitySettings(void)

undefined8 * UShaderPlatformQualitySettings::UShaderPlatformQualitySettings(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fce9d0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x20000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 2;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 141a98bb0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialShaderQualitySettings::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141a98c10 AppendToHashState body=31 status=ok
// SIG undefined AppendToHashState(void)

void UShaderPlatformQualitySettings::AppendToHashState
               (longlong param_1,int param_2,undefined8 param_3)

{
  FSHA1::Update(param_3,(longlong)param_2 * 7 + param_1 + 0x28,7);
  return;
}



// FUNCTION 141a98c30 Get body=306 status=ok
// SIG undefined Get(void)

longlong UMaterialShaderQualitySettings::Get(void)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  
  puVar3 = PTR_u_MaterialShaderQualitySettingsCon_1464c11f0;
  if (DAT_1469fd538 == 0) {
    uVar5 = GetTransientPackage();
    uVar6 = GetPrivateStaticClass();
    DAT_1469fd538 = FUN_141799410(uVar6,uVar5,puVar3,0);
    if (DAT_1469fd538 == 0) {
      uVar5 = GetPrivateStaticClass();
      plVar7 = (longlong *)
               FName::FName(local_res10,PTR_u_MaterialShaderQualitySettingsCon_1464c11f0,1);
      lVar2 = *plVar7;
      uVar6 = GetTransientPackage();
      lVar9 = 0;
      if (lVar2 == 0) {
        FUN_1417846f0(uVar6,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      DAT_1469fd538 = FUN_1417985e0(uVar5,uVar6,lVar2,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469fd538 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar8;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40000000;
    }
  }
  return DAT_1469fd538;
}



// FUNCTION 141a98d70 FUN_141a98d70 body=565 status=ok
// SIG undefined FUN_141a98d70(void)

undefined8 FUN_141a98d70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffff78;
  ulonglong uVar8;
  longlong *local_58;
  longlong *local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar2 = param_1 + 0x60;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_141a98df3;
          break;
        }
        iVar1 = *(int *)(puVar6 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_141a98df3:
  puVar3 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    return *puVar3;
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0x17;
  local_res10 = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  uVar8 = CONCAT62((int6)((ulonglong)in_stack_ffffffffffffff78 >> 0x10),0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0x17,"ForwardShadingQuality_",0x17,uVar8);
  FName::AppendString(&local_res10,&local_48);
  puVar7 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar7 = local_48;
  }
  uVar4 = UOculusHMDRuntimeSettings::GetPrivateStaticClass();
  local_res18 = FUN_141799410(uVar4,param_1,puVar7,0);
  if (local_res18 == 0) {
    puVar7 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar7 = local_48;
    }
    FName::FName(local_res20,puVar7,1);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar7 = local_48;
    }
    uVar4 = UOculusHMDRuntimeSettings::GetPrivateStaticClass();
    plVar5 = (longlong *)FName::FName(&local_58,puVar7,1);
    local_res8 = 0;
    lVar2 = *plVar5;
    if (lVar2 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    local_res18 = FUN_1417985e0(uVar4,param_1,lVar2,0,uVar8 & 0xffffffff00000000,0,0,0,0);
    FUN_14175be70(local_res18,0,0,0,0);
  }
  local_58 = &local_res10;
  local_50 = &local_res18;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (param_1 + 0x28,&local_res8,&local_58,0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)local_res8 * 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 141a98fb0 GetShaderPlatformQualitySettings body=38 status=ok
// SIG undefined GetShaderPlatformQualitySettings(void)

void UMaterialShaderQualitySettings::GetShaderPlatformQualitySettings(undefined8 param_1)

{
  undefined8 local_res18 [2];
  
  FUN_141eca160(local_res18);
  FUN_141a98d70(param_1,local_res18[0]);
  return;
}



// FUNCTION 141a98fe0 HasPlatformQualitySettings body=150 status=ok
// SIG undefined HasPlatformQualitySettings(void)

ulonglong UMaterialShaderQualitySettings::HasPlatformQualitySettings
                    (undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  FUN_141eca160(&local_res20);
  uVar1 = FUN_141a98d70(param_1,local_res20);
  lVar2 = (longlong)param_3 * 7 + uVar1;
  if ((*(char *)(lVar2 + 0x28) != '\0') &&
     ((((*(char *)(lVar2 + 0x2e) != DAT_1464c11fe || (*(char *)(lVar2 + 0x2b) != DAT_1464c11fb)) ||
       (*(char *)(lVar2 + 0x29) != DAT_1464c11f9)) ||
      (((*(char *)(lVar2 + 0x2a) != DAT_1464c11fa || (*(char *)(lVar2 + 0x2c) != DAT_1464c11fc)) ||
       (uVar1 = 0, *(char *)(lVar2 + 0x2d) != DAT_1464c11fd)))))) {
    return 1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141a99080 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialShaderQualitySettings::GetPrivateStaticClass(void)

{
  if (DAT_1469fd558 == 0) {
    FUN_14171ccd0(L"/Script/MaterialShaderQualitySettings",L"MaterialShaderQualitySettings",
                  &DAT_1469fd558,FUN_140447710,0x78,0x10000000,0,L"Engine",&LAB_141a99260,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469fd558;
}



// FUNCTION 141a99120 FUN_141a99120 body=47 status=ok
// SIG undefined FUN_141a99120(void)

longlong FUN_141a99120(void)

{
  if (DAT_1469fd568 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_1469fd568,&PTR_s__Script_MaterialShaderQualitySet_144db8f00);
  }
  return DAT_1469fd568;
}



// FUNCTION 141a99170 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UOculusHMDRuntimeSettings::GetPrivateStaticClass(void)

{
  if (DAT_1469fd590 == 0) {
    FUN_14171ccd0(L"/Script/MaterialShaderQualitySettings",L"ShaderPlatformQualitySettings",
                  &DAT_1469fd590,FUN_140447710,0x40,0x10000006,0,L"Engine",&LAB_141a99280,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469fd590;
}



// FUNCTION 141a99210 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &PTR_FUN_144db8f58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 141a992c0 EMobileCSMQuality_StaticEnum body=85 status=ok
// SIG undefined EMobileCSMQuality_StaticEnum(void)

void EMobileCSMQuality_StaticEnum(void)

{
  if (DAT_1469fd548 == 0) {
    if (DAT_1469fd568 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1469fd568,&PTR_s__Script_MaterialShaderQualitySet_144db8f00);
    }
    DAT_1469fd548 = GetStaticEnum(FUN_141a99410,DAT_1469fd568,L"EMobileCSMQuality");
  }
  return;
}



// FUNCTION 141a99320 FUN_141a99320 body=6 status=ok
// SIG undefined FUN_141a99320(void)

undefined8 FUN_141a99320(void)

{
  return 0x36347ac2;
}



// FUNCTION 141a99330 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTraceChannelTestBatchOptions::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1469fd578 == 0) {
    if (DAT_1469fd568 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_1469fd568,&PTR_s__Script_MaterialShaderQualitySet_144db8f00);
    }
    lVar1 = DAT_1469fd568;
    uVar2 = FUN_141a99320();
    DAT_1469fd578 = GetStaticStruct(FUN_141a99440,lVar1,L"MaterialQualityOverrides",7,uVar2);
  }
  return;
}



// FUNCTION 141a993b0 FUN_141a993b0 body=47 status=ok
// SIG undefined FUN_141a993b0(void)

longlong FUN_141a993b0(void)

{
  if (DAT_1469fd550 == 0) {
    FUN_141786440(&DAT_1469fd550,&PTR_GetPrivateStaticClass_144db87c0);
  }
  return DAT_1469fd550;
}



// FUNCTION 141a993e0 FUN_141a993e0 body=47 status=ok
// SIG undefined FUN_141a993e0(void)

longlong FUN_141a993e0(void)

{
  if (DAT_1469fd588 == 0) {
    FUN_141786440(&DAT_1469fd588,&PTR_GetPrivateStaticClass_144db8ce0);
  }
  return DAT_1469fd588;
}



// FUNCTION 141a99410 FUN_141a99410 body=47 status=ok
// SIG undefined FUN_141a99410(void)

longlong FUN_141a99410(void)

{
  if (DAT_1469fd570 == 0) {
    FUN_1417866a0(&DAT_1469fd570,&PTR_FUN_1464c15f0);
  }
  return DAT_1469fd570;
}



// FUNCTION 141a99440 FUN_141a99440 body=47 status=ok
// SIG undefined FUN_141a99440(void)

longlong FUN_141a99440(void)

{
  if (DAT_1469fd580 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469fd580,&PTR_FUN_1464c1560);
  }
  return DAT_1469fd580;
}



// FUNCTION 141a99480 FUN_141a99480 body=160 status=ok
// SIG undefined FUN_141a99480(void)

void FUN_141a99480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = param_8;
  uVar3 = (undefined1)param_8;
  FUN_141a9aac0();
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  param_8 = uVar2 & 0xff;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x1c8,&param_8,
             param_5 & 0xffffffff00000000,param_6,param_7,uVar3);
  return;
}



// FUNCTION 141a99520 FUN_141a99520 body=108 status=ok
// SIG undefined FUN_141a99520(void)

undefined1 FUN_141a99520(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FUN_141ab2020(param_2,param_1 + 0x158);
  FUN_141ad3f10(param_1 + 0x1c0,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x1c8);
  return uVar1;
}



// FUNCTION 141a99590 FUN_141a99590 body=95 status=ok
// SIG undefined FUN_141a99590(void)

longlong FUN_141a99590(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 141a99600 FUN_141a99600 body=95 status=ok
// SIG undefined FUN_141a99600(void)

longlong FUN_141a99600(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 141a99660 FUN_141a99660 body=95 status=ok
// SIG undefined FUN_141a99660(void)

longlong FUN_141a99660(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141a996e0 FUN_141a996e0 body=134 status=ok
// SIG undefined FUN_141a996e0(void)

undefined1 FUN_141a996e0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  FUN_1419e0b60(param_2,param_1 + 0xce);
  FUN_1419e0b60(param_2,param_1 + 0xd2);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  return 0;
}



// FUNCTION 141a99770 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCapsuleShadowingUpsamplePS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 141a997c0 Serialize body=172 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessAmbientOcclusionPSandCS<1,1,1,1>::Serialize
                    (longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = ::operator<<(uVar1,param_1 + 0xc6);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  FUN_141ad3f10(param_1 + 0x1cc,uVar1);
  FUN_1419e0a40(uVar1,param_1 + 0x1d4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1da);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1de);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1e2);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a99870 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessAmbientOcclusionPSandCS<1,1,1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 141a998b0 Serialize body=149 status=ok
// SIG undefined Serialize(void)

undefined1
FComputeLightDirectionFromVolumetricLightmapCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xca);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xe2);
  FUN_1419e0b60(uVar1,param_1 + 0xe6);
  return 0;
}



// FUNCTION 141a99950 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 TAtmosphericFogPS<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141a999a0 Serialize body=444 status=ok
// SIG undefined Serialize(void)

undefined1 TCapsuleShadowingBaseCS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(uVar1,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xd6);
  FUN_1419e0b60(uVar1,param_1 + 0xda);
  FUN_1419e0b60(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe2);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  FUN_1419e0a40(param_2,param_1 + 0xee);
  FUN_1419e0a40(param_2,param_1 + 0xf4);
  FUN_1419e0a40(param_2,param_1 + 0xfa);
  FUN_1419e0a40(param_2,param_1 + 0x100);
  FUN_1419e0a40(param_2,param_1 + 0x106);
  FUN_141ad3f10(param_1 + 0x10c,param_2);
  FUN_141ad3f10(param_1 + 0x114,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x11c);
  FUN_1419e0a40(param_2,param_1 + 0x122);
  FUN_1419e0b60(param_2,param_1 + 0x128);
  FUN_1419e0a40(param_2,param_1 + 300);
  FUN_1419e0b60(param_2,param_1 + 0x132);
  FUN_1419e0a40(param_2,param_1 + 0x136);
  FUN_1419e0a40(param_2,param_1 + 0x13c);
  FUN_1419e0b60(param_2,param_1 + 0x142);
  FUN_1419e0a40(param_2,param_1 + 0x146);
  ::operator<<(param_2,param_1 + 0x14c);
  return 0;
}



// FUNCTION 141a99b60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCapsuleShadowingBaseCS<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 141a99ba0 FUN_141a99ba0 body=154 status=ok
// SIG undefined FUN_141a99ba0(void)

undefined1 FUN_141a99ba0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int local_res8;
  undefined2 local_resc;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x158);
  FUN_1419e0a40(param_2,param_1 + 0x15e);
  FUN_1419e0a40(param_2,param_1 + 0x164);
  FUN_1419e0a40(param_2,param_1 + 0x16a);
  local_res8 = *(int *)(param_2 + 0x44) + -2;
  if (local_res8 == 0) {
    local_resc = 0;
    FUN_1419e0a40(param_2,&local_res8);
  }
  return uVar1;
}



// FUNCTION 141a99c40 FUN_141a99c40 body=95 status=ok
// SIG undefined FUN_141a99c40(void)

longlong FUN_141a99c40(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 141a99ca0 FUN_141a99ca0 body=89 status=ok
// SIG undefined FUN_141a99ca0(void)

undefined1 FUN_141a99ca0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd2);
  return 0;
}



// FUNCTION 141a99d00 Serialize body=126 status=ok
// SIG undefined Serialize(void)

undefined1 TCapsuleShadowingUpsamplePS<1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  return 0;
}



// FUNCTION 141a99d80 FUN_141a99d80 body=168 status=ok
// SIG undefined FUN_141a99d80(void)

void FUN_141a99d80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa87d0(param_1,param_2,uVar2,param_3,param_4,param_5,param_6 + 0x18,
                *(undefined8 *)(param_6 + 0x20));
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,uVar2,param_1 + 0x1e0,*(undefined8 *)(param_5 + 0x2fb0));
  return;
}



// FUNCTION 141a99e30 FUN_141a99e30 body=93 status=ok
// SIG undefined FUN_141a99e30(void)

undefined1 FUN_141a99e30(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FSelfShadowedTranslucencyPolicy::PixelParametersType::Serialize(param_1 + 0x150,param_2);
  FUN_141ab2020(param_2,param_1 + 0x178);
  FUN_141ad3f10(param_1 + 0x1e0,param_2);
  return uVar1;
}



// FUNCTION 141a99e90 FUN_141a99e90 body=95 status=ok
// SIG undefined FUN_141a99e90(void)

longlong FUN_141a99e90(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 141a99ef0 FUN_141a99ef0 body=160 status=ok
// SIG undefined FUN_141a99ef0(void)

void FUN_141a99ef0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = param_8;
  uVar3 = (undefined1)param_8;
  FUN_141a99d80();
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  param_8 = uVar2 & 0xff;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x1e8,&param_8,
             param_5 & 0xffffffff00000000,param_6,param_7,uVar3);
  return;
}



// FUNCTION 141a99f90 FUN_141a99f90 body=108 status=ok
// SIG undefined FUN_141a99f90(void)

undefined1 FUN_141a99f90(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FSelfShadowedTranslucencyPolicy::PixelParametersType::Serialize(param_1 + 0x150,param_2);
  FUN_141ab2020(param_2,param_1 + 0x178);
  FUN_141ad3f10(param_1 + 0x1e0,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x1e8);
  return uVar1;
}



// FUNCTION 141a9a000 FUN_141a9a000 body=95 status=ok
// SIG undefined FUN_141a9a000(void)

longlong FUN_141a9a000(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 141a9a060 FUN_141a9a060 body=267 status=ok
// SIG undefined FUN_141a9a060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a9a060(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 **local_78;
  undefined1 local_68 [8];
  undefined8 *local_60;
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
  local_60 = (undefined8 *)0x0;
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
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x20);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *local_60 = 0;
  *(undefined4 *)(local_60 + 1) = 0;
  *(undefined4 *)((longlong)local_60 + 0xc) = 0x3f800000;
  *(undefined4 *)(local_60 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x14) = 0x3f800000;
  local_60[3] = 0x3f800000;
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141a9a170 FUN_141a9a170 body=89 status=ok
// SIG undefined FUN_141a9a170(void)

undefined8 * FUN_141a9a170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dc8d08;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a9a1d0 FUN_141a9a1d0 body=426 status=ok
// SIG undefined FUN_141a9a1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a9a1d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 **local_90;
  longlong local_88;
  undefined4 *local_80 [3];
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
  lVar6 = 0;
  local_90 = local_80;
  local_80[0] = (undefined4 *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = &local_68;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_58 = 1;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_a0 = 1;
  local_a8 = 0xc;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,&local_88,&DAT_146ab6e78,2);
  plVar7 = (longlong *)(param_1 + 0x30);
  if (plVar7 != &local_88) {
    puVar3 = (undefined8 *)*plVar7;
    *plVar7 = local_88;
    local_88 = 0;
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
          bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
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
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  *local_80[0] = 0x10000;
  local_80[0][1] = 2;
  local_80[0][2] = 0x30002;
  (**(code **)(*DAT_146ab6358 + 0x500))(DAT_146ab6358,&DAT_146ab6e78,*plVar7);
  return;
}



// FUNCTION 141a9a380 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dc8d48;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141a9a3f0 FUN_141a9a3f0 body=168 status=ok
// SIG undefined FUN_141a9a3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a9a3f0(longlong param_1)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,0);
  local_128 = 0;
  local_126 = 0x80002;
  local_122 = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,&local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 141a9a4a0 FUN_141a9a4a0 body=74 status=ok
// SIG undefined FUN_141a9a4a0(void)

undefined8 * FUN_141a9a4a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dc8d88;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a9a4f0 FUN_141a9a4f0 body=89 status=ok
// SIG undefined FUN_141a9a4f0(void)

undefined8 * FUN_141a9a4f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dc8dc8;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144dc8d88;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141a9a550 FUN_141a9a550 body=168 status=ok
// SIG undefined FUN_141a9a550(void)

void FUN_141a9a550(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa87d0(param_1,param_2,uVar2,param_3,param_4,param_5,param_6 + 0x18,
                *(undefined8 *)(param_6 + 0x20));
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,uVar2,param_1 + 0x1e8,*(undefined8 *)(param_5 + 0x2fb0));
  return;
}



// FUNCTION 141a9a600 FUN_141a9a600 body=119 status=ok
// SIG undefined FUN_141a9a600(void)

undefined1 FUN_141a9a600(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FSelfShadowedTranslucencyPolicy::PixelParametersType::Serialize(param_1 + 0x158,param_2);
  FUN_141ab2020(param_2,param_1 + 0x180);
  FUN_141ad3f10(param_1 + 0x1e8,param_2);
  return uVar1;
}



// FUNCTION 141a9a690 FUN_141a9a690 body=160 status=ok
// SIG undefined FUN_141a9a690(void)

void FUN_141a9a690(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = param_8;
  uVar3 = (undefined1)param_8;
  FUN_141a9a550();
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  param_8 = uVar2 & 0xff;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x1f0,&param_8,
             param_5 & 0xffffffff00000000,param_6,param_7,uVar3);
  return;
}



// FUNCTION 141a9a730 FUN_141a9a730 body=63 status=ok
// SIG undefined FUN_141a9a730(void)

undefined1 FUN_141a9a730(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141a9a600();
  FUN_1419e0a40(param_2,param_1 + 0x1f0);
  return uVar1;
}



// FUNCTION 141a9a770 FUN_141a9a770 body=95 status=ok
// SIG undefined FUN_141a9a770(void)

longlong FUN_141a9a770(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 141a9a7e0 FUN_141a9a7e0 body=204 status=ok
// SIG undefined FUN_141a9a7e0(void)

undefined1 FUN_141a9a7e0(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  FUN_1419e0b60(param_2,param_1 + 0xec);
  FUN_1419e0b60(param_2,param_1 + 0xf0);
  FUN_1419e0b60(param_2,param_1 + 0xf4);
  return 0;
}



// FUNCTION 141a9a8b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRemoveObjectsFromBufferCS<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141a9a8f0 FUN_141a9a8f0 body=213 status=ok
// SIG undefined FUN_141a9a8f0(void)

ulonglong FUN_141a9a8f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar2 = FUN_1419e0b60(uVar2,param_1 + 0x1c8);
  uVar2 = FUN_1419e0b60(uVar2,param_1 + 0x1cc);
  FUN_1419e0a40(uVar2,param_1 + 0x1c2);
  FUN_1419e0b60(uVar1,param_1 + 0x1d0);
  FUN_1419e0b60(uVar1,param_1 + 0x1d4);
  FUN_141ad3f10(param_1 + 0x1d8,uVar1);
  FUN_141ad3f10(param_1 + 0x1e0,uVar1);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1e8);
  uVar3 = FUN_1419e0b60(uVar1,param_1 + 0x1ec);
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141a9a9d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurCS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 141a9aa10 FUN_141a9aa10 body=169 status=ok
// SIG undefined FUN_141a9aa10(void)

undefined1 FUN_141a9aa10(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int local_res8;
  undefined2 local_resc;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FUN_141ad3f10(param_1 + 0x158,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x160);
  FUN_1419e0a40(param_2,param_1 + 0x166);
  FUN_1419e0a40(param_2,param_1 + 0x16c);
  FUN_1419e0a40(param_2,param_1 + 0x172);
  local_res8 = *(int *)(param_2 + 0x44) + -2;
  if (local_res8 == 0) {
    local_resc = 0;
    FUN_1419e0a40(param_2,&local_res8);
  }
  return uVar1;
}



// FUNCTION 141a9aac0 FUN_141a9aac0 body=168 status=ok
// SIG undefined FUN_141a9aac0(void)

void FUN_141a9aac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa87d0(param_1,param_2,uVar2,param_3,param_4,param_5,param_6 + 0x18,
                *(undefined8 *)(param_6 + 0x20));
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,uVar2,param_1 + 0x1c0,*(undefined8 *)(param_5 + 0x2fb0));
  return;
}



// FUNCTION 141a9ab70 FUN_141a9ab70 body=93 status=ok
// SIG undefined FUN_141a9ab70(void)

undefined1 FUN_141a9ab70(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FUN_141ab2020(param_2,param_1 + 0x158);
  FUN_141ad3f10(param_1 + 0x1c0,param_2);
  return uVar1;
}



// FUNCTION 141a9abd0 FUN_141a9abd0 body=95 status=ok
// SIG undefined FUN_141a9abd0(void)

longlong FUN_141a9abd0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 141a9ac40 FUN_141a9ac40 body=102 status=ok
// SIG undefined FUN_141a9ac40(void)

ulonglong FUN_141a9ac40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141a9acb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessAmbientOcclusionSetupPS<1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 141a9acf0 FUN_141a9acf0 body=104 status=ok
// SIG undefined FUN_141a9acf0(void)

undefined1 FUN_141a9acf0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd2);
  FUN_1419e0b60(param_2,param_1 + 0xd6);
  return 0;
}



// FUNCTION 141a9ad60 Serialize body=89 status=ok
// SIG undefined Serialize(void)

undefined1 FUploadObjectsToBufferCS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  FUN_1419e0b60(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141a9adc0 FUN_141a9adc0 body=452 status=ok
// SIG undefined FUN_141a9adc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a9adc0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_ac = *(undefined4 *)(param_2 + 0x28);
  iVar4 = 0;
  local_e8 = *(undefined4 *)(param_4 + 2);
  uStack_e4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_e0 = *(undefined4 *)(param_4 + 3);
  uStack_dc = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_98 = 0;
  uStack_90 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_f8 = *param_4;
  uStack_f0 = param_4[1];
  local_d8 = *(undefined4 *)(param_4 + 4);
  uStack_d4 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_d0 = *(undefined4 *)(param_4 + 5);
  uStack_cc = *(undefined4 *)((longlong)param_4 + 0x2c);
  if ((((*(uint *)((longlong)param_3 + 0x2c) & 1) == 0) &&
      (iVar1 = *(int *)(param_2 + 0x24), iVar4 = iVar1,
      (*(uint *)((longlong)param_3 + 0x2c) >> 3 & 1) != 0)) && (iVar4 = 0, iVar1 != 0)) {
    iVar4 = (iVar1 != 2) + 1;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    if (iVar4 == 0) {
      local_c0 = FUN_141ac0a70();
    }
    else if (iVar4 == 2) {
      local_c0 = FUN_141ac0930();
    }
    else {
      local_c0 = FUN_141ac07f0();
    }
  }
  else if (*(int *)(param_2 + 0x20) == 1) {
    if (iVar4 == 0) {
      local_c0 = FUN_141ac0430();
    }
    else if (iVar4 == 2) {
      local_c0 = FUN_141ac02f0();
    }
    else {
      local_c0 = FUN_141ac01b0();
    }
  }
  else if (iVar4 == 0) {
    local_c0 = FUN_140985530();
  }
  else if (iVar4 == 2) {
    local_c0 = FUN_141ac06b0();
  }
  else {
    local_c0 = FUN_141ac0570();
  }
  local_c8 = *param_3;
  local_b8 = param_3[1];
  FUN_14049afe0(param_1,&local_f8);
  FUN_141ed6ac0(param_1,&local_f8,2,1);
  uVar2 = *(undefined4 *)(param_3 + 5);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  return;
}



// FUNCTION 141a9af90 FUN_141a9af90 body=658 status=ok
// SIG undefined FUN_141a9af90(void)

void FUN_141a9af90(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c5a0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9b230 FUN_141a9b230 body=658 status=ok
// SIG undefined FUN_141a9b230(void)

void FUN_141a9b230(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c5a0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9b4d0 FUN_141a9b4d0 body=658 status=ok
// SIG undefined FUN_141a9b4d0(void)

void FUN_141a9b4d0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d020;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9b770 FUN_141a9b770 body=658 status=ok
// SIG undefined FUN_141a9b770(void)

void FUN_141a9b770(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d020;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9ba10 FUN_141a9ba10 body=658 status=ok
// SIG undefined FUN_141a9ba10(void)

void FUN_141a9ba10(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0daa0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9bcb0 FUN_141a9bcb0 body=658 status=ok
// SIG undefined FUN_141a9bcb0(void)

void FUN_141a9bcb0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0daa0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9bf50 FUN_141a9bf50 body=658 status=ok
// SIG undefined FUN_141a9bf50(void)

void FUN_141a9bf50(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0e520;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9c1f0 FUN_141a9c1f0 body=658 status=ok
// SIG undefined FUN_141a9c1f0(void)

void FUN_141a9c1f0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0e520;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9c490 FUN_141a9c490 body=658 status=ok
// SIG undefined FUN_141a9c490(void)

void FUN_141a9c490(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0bb20;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9c730 FUN_141a9c730 body=658 status=ok
// SIG undefined FUN_141a9c730(void)

void FUN_141a9c730(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0bb20;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9c9d0 FUN_141a9c9d0 body=658 status=ok
// SIG undefined FUN_141a9c9d0(void)

void FUN_141a9c9d0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c300;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9cc70 FUN_141a9cc70 body=658 status=ok
// SIG undefined FUN_141a9cc70(void)

void FUN_141a9cc70(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c300;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9cf10 FUN_141a9cf10 body=658 status=ok
// SIG undefined FUN_141a9cf10(void)

void FUN_141a9cf10(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0cd80;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9d1b0 FUN_141a9d1b0 body=658 status=ok
// SIG undefined FUN_141a9d1b0(void)

void FUN_141a9d1b0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0cd80;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9d450 FUN_141a9d450 body=658 status=ok
// SIG undefined FUN_141a9d450(void)

void FUN_141a9d450(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d800;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9d6f0 FUN_141a9d6f0 body=658 status=ok
// SIG undefined FUN_141a9d6f0(void)

void FUN_141a9d6f0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d800;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9d990 FUN_141a9d990 body=658 status=ok
// SIG undefined FUN_141a9d990(void)

void FUN_141a9d990(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0e280;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9dc30 FUN_141a9dc30 body=658 status=ok
// SIG undefined FUN_141a9dc30(void)

void FUN_141a9dc30(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0e280;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9ded0 FUN_141a9ded0 body=658 status=ok
// SIG undefined FUN_141a9ded0(void)

void FUN_141a9ded0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0b880;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9e170 FUN_141a9e170 body=658 status=ok
// SIG undefined FUN_141a9e170(void)

void FUN_141a9e170(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0b880;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9e410 FUN_141a9e410 body=658 status=ok
// SIG undefined FUN_141a9e410(void)

void FUN_141a9e410(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c060;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9e6b0 FUN_141a9e6b0 body=658 status=ok
// SIG undefined FUN_141a9e6b0(void)

void FUN_141a9e6b0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c060;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9e950 FUN_141a9e950 body=658 status=ok
// SIG undefined FUN_141a9e950(void)

void FUN_141a9e950(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0cae0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9ebf0 FUN_141a9ebf0 body=658 status=ok
// SIG undefined FUN_141a9ebf0(void)

void FUN_141a9ebf0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0cae0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9ee90 FUN_141a9ee90 body=658 status=ok
// SIG undefined FUN_141a9ee90(void)

void FUN_141a9ee90(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d560;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9f130 FUN_141a9f130 body=658 status=ok
// SIG undefined FUN_141a9f130(void)

void FUN_141a9f130(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d560;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9f3d0 FUN_141a9f3d0 body=658 status=ok
// SIG undefined FUN_141a9f3d0(void)

void FUN_141a9f3d0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0dfe0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9f670 FUN_141a9f670 body=658 status=ok
// SIG undefined FUN_141a9f670(void)

void FUN_141a9f670(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0dfe0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9f910 FUN_141a9f910 body=658 status=ok
// SIG undefined FUN_141a9f910(void)

void FUN_141a9f910(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0b5e0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9fbb0 FUN_141a9fbb0 body=658 status=ok
// SIG undefined FUN_141a9fbb0(void)

void FUN_141a9fbb0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0b5e0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141a9fe50 FUN_141a9fe50 body=658 status=ok
// SIG undefined FUN_141a9fe50(void)

void FUN_141a9fe50(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0bdc0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa00f0 FUN_141aa00f0 body=658 status=ok
// SIG undefined FUN_141aa00f0(void)

void FUN_141aa00f0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0bdc0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa0390 FUN_141aa0390 body=658 status=ok
// SIG undefined FUN_141aa0390(void)

void FUN_141aa0390(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c840;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa0630 FUN_141aa0630 body=658 status=ok
// SIG undefined FUN_141aa0630(void)

void FUN_141aa0630(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0c840;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa08d0 FUN_141aa08d0 body=658 status=ok
// SIG undefined FUN_141aa08d0(void)

void FUN_141aa08d0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d2c0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa0b70 FUN_141aa0b70 body=658 status=ok
// SIG undefined FUN_141aa0b70(void)

void FUN_141aa0b70(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0d2c0;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa0e10 FUN_141aa0e10 body=658 status=ok
// SIG undefined FUN_141aa0e10(void)

void FUN_141aa0e10(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0dd40;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa10b0 FUN_141aa10b0 body=658 status=ok
// SIG undefined FUN_141aa10b0(void)

void FUN_141aa10b0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0dd40;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa1350 FUN_141aa1350 body=658 status=ok
// SIG undefined FUN_141aa1350(void)

void FUN_141aa1350(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0b340;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144dc9ce0;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9900(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144dc9cd0;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa15f0 FUN_141aa15f0 body=658 status=ok
// SIG undefined FUN_141aa15f0(void)

void FUN_141aa15f0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res18;
  int iStackX_1c;
  int local_res20;
  int iStackX_24;
  undefined *local_38;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = param_3[0xc];
  local_38 = &DAT_146a0b340;
  iStack_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_res18,&local_38);
  plVar9 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar9 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar9 + 2;
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar2 = *plVar11;
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar7 = FSceneRenderTargets::Get(param_3[8]);
  FUN_141aa9c30(lVar2,param_2,param_3,*(undefined8 *)param_4,param_5);
  lVar3 = *param_3;
  iVar5 = *(int *)(lVar7 + 0x378) / *param_4;
  local_38 = *(undefined **)(lVar3 + 0x1aa0);
  iStack_30 = *(int *)(lVar3 + 0x1aa8);
  iStack_2c = *(int *)(lVar3 + 0x1aac);
  local_res20 = (iStack_30 + -1 + iVar5) / iVar5;
  iStackX_24 = (iStack_2c + -1 + iVar5) / iVar5;
  iVar6 = (int)((longlong)
                ((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa0) >> 0x1f) << 0x20 |
                (ulonglong)local_38 & 0xffffffff) / (longlong)iVar5);
  iVar5 = *(int *)(lVar3 + 0x1aa4) / iVar5;
  _local_res18 = CONCAT44(iVar5,iVar6);
  iVar5 = (iStackX_24 - iVar5) + 0xf;
  iVar6 = (local_res20 - iVar6) + 0xf;
  DispatchComputeShader
            (param_2,lVar2,(int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4,
             (int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,1);
  lVar3 = *(longlong *)(lVar2 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = *(ushort *)(lVar2 + 0x1e4);
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
  *(uint *)(puVar10 + 3) = (uint)uVar1;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[2] = uVar4;
  puVar10[4] = 0;
  return;
}



// FUNCTION 141aa1890 FUN_141aa1890 body=1074 status=ok
// SIG undefined FUN_141aa1890(void)

int FUN_141aa1890(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
                 undefined8 *param_5,undefined8 *param_6,ulonglong param_7,longlong param_8,
                 char *param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff30;
  uint uVar15;
  longlong lVar13;
  undefined4 uVar16;
  ulonglong uVar14;
  ulonglong uVar17;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [56];
  
  uVar15 = (uint)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  iVar8 = *(int *)(param_5 + 5);
  lVar9 = param_5[1];
  FUN_141ab4f60(param_8 + 0x20,param_5,param_3,param_6[1],*(undefined1 *)(param_3 + 0x3099));
  if (lVar9 == param_5[1]) {
    cVar4 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar4 = '\0';
  }
  iVar1 = *(int *)(param_5 + 5);
  if (cVar4 != '\0') {
    if (iVar8 != iVar1) {
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f489c0;
      *(int *)(puVar7 + 2) = iVar1;
    }
    goto LAB_141aa1a56;
  }
  iVar8 = *(int *)(param_8 + 0x84);
  if (iVar8 == 2) {
    uVar5 = FUN_141abe630();
LAB_141aa1957:
    *param_5 = uVar5;
  }
  else {
    if (iVar8 == 3) {
      uVar5 = FUN_141abe270();
      goto LAB_141aa1957;
    }
    if (iVar8 == 4) {
      uVar5 = FUN_141abdd70();
      goto LAB_141aa1957;
    }
    if (iVar8 == 5) {
      uVar5 = FUN_141abe3b0();
      goto LAB_141aa1957;
    }
  }
  if (*(longlong *)(param_8 + 0x98) == 0) {
    puVar6 = (undefined8 *)FUN_141abc740(param_8 + 0x20,local_60,*(undefined4 *)(param_3 + 0x1a38));
    local_90 = *puVar6;
    uStack_88 = puVar6[1];
    local_80 = *(undefined4 *)(puVar6 + 2);
    uStack_7c = *(undefined4 *)((longlong)puVar6 + 0x14);
    uStack_78 = *(undefined4 *)(puVar6 + 3);
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x1c);
    local_70 = *(undefined4 *)(puVar6 + 4);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x24);
    uStack_68 = *(undefined4 *)(puVar6 + 5);
    uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x2c);
  }
  else {
    local_90 = *(undefined8 *)(param_8 + 0x90);
    uStack_88 = *(undefined8 *)(param_8 + 0x98);
    local_80 = *(undefined4 *)(param_8 + 0xa0);
    uStack_7c = *(undefined4 *)(param_8 + 0xa4);
    uStack_78 = *(undefined4 *)(param_8 + 0xa8);
    uStack_74 = *(undefined4 *)(param_8 + 0xac);
    local_70 = *(undefined4 *)(param_8 + 0xb0);
    uStack_6c = *(undefined4 *)(param_8 + 0xb4);
    uStack_68 = *(undefined4 *)(param_8 + 0xb8);
    uStack_64 = *(undefined4 *)(param_8 + 0xbc);
  }
  FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_90);
  FUN_141ad8710(param_8 + 0x20,param_2,param_5,param_3,param_4,(ulonglong)uVar15 << 0x20);
  *param_9 = '\x01';
LAB_141aa1a56:
  iVar8 = 0;
  param_9._0_4_ = 0;
  do {
    if ((param_7 & 1) != 0) {
      lVar2 = *(longlong *)(param_8 + 0x60);
      iVar8 = iVar8 + 1;
      lVar3 = *(longlong *)(param_8 + 0x78);
      lVar9 = lVar2 + 0x150;
      lVar13 = param_6[1];
      lVar10 = lVar3 + 0x150;
      uVar14 = *(ulonglong *)(*(longlong *)(lVar13 + 0xc0) + 8);
      lVar11 = *(longlong *)(lVar13 + 0x78);
      if (*(longlong *)(lVar13 + 0x78) == 0) {
        lVar11 = lVar13;
      }
      lVar11 = lVar11 + (longlong)(int)param_9 * 0x78;
      if (lVar3 == 0) {
        lVar10 = 0;
      }
      if (lVar2 == 0) {
        lVar9 = 0;
      }
      uVar17 = *(ulonglong *)(param_8 + 0x28);
      FUN_141bbd320(param_8 + 0x80,param_2,param_3,uVar14,lVar9,lVar10,lVar2,lVar3,uVar17,
                    *(undefined8 *)(param_8 + 0x30),*param_6);
      FUN_141ad4780(*(undefined8 *)(param_8 + 0x60),param_2,*(undefined8 *)(param_8 + 0x28),param_3,
                    uVar14,lVar13,lVar11,param_5);
      uVar16 = (undefined4)((ulonglong)lVar13 >> 0x20);
      if ((*(longlong *)(param_8 + 0x68) != 0) && (*(longlong *)(param_8 + 0x70) != 0)) {
        FBaseHS::SetMesh(*(longlong *)(param_8 + 0x68),param_2,*(undefined8 *)(param_8 + 0x28),
                         param_3,uVar14,lVar11,param_5);
        lVar9 = lVar11;
        FBaseDS::SetMesh(*(undefined8 *)(param_8 + 0x70),param_2,*(undefined8 *)(param_8 + 0x28),
                         param_3,uVar14,lVar11,param_5);
        uVar16 = (undefined4)((ulonglong)lVar9 >> 0x20);
      }
      uVar5 = *(undefined8 *)(param_8 + 0x28);
      lVar9 = *(longlong *)(param_8 + 0x78);
      iVar1 = *(int *)(param_3 + 0x1a38);
      if (1 < iVar1) {
        lVar10 = *(longlong *)(lVar9 + 0x48);
        if (*(char *)(lVar10 + 0x28) == '\0') {
          FUN_1419f3850(lVar10);
        }
        FUN_141ad4a90(lVar9 + 0x158,param_2,*(undefined8 *)(lVar10 + 0x40),param_3,uVar14,
                      CONCAT44(uVar16,iVar1));
      }
      lVar10 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      FUN_141d84bb0(lVar9,param_2,*(undefined8 *)(lVar10 + 0x40),uVar5,param_3,uVar14,lVar11,param_5
                    ,uVar17 & 0xffffffff00000000);
      FUN_141b315b0(param_8 + 0x20,param_2,param_3,param_6[1],(int)param_9,
                    uVar14 & 0xffffffffffffff00);
    }
    param_9._0_4_ = (int)param_9 + 1;
    bVar12 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar12);
  return iVar8;
}



// FUNCTION 141aa1cd0 FUN_141aa1cd0 body=1280 status=ok
// SIG undefined FUN_141aa1cd0(void)

int FUN_141aa1cd0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
                 undefined8 *param_5,undefined8 *param_6,ulonglong param_7,longlong param_8,
                 char *param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffff18;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 in_stack_ffffffffffffff20;
  longlong lVar16;
  undefined4 uVar17;
  longlong local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  lVar3 = param_8;
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  lVar9 = param_5[1];
  iVar10 = *(int *)(param_5 + 5);
  uVar14 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff18 >> 8),
                    *(undefined1 *)(param_3 + 0x3099));
  FUN_141ab4f60(param_8 + 0x20,param_5,param_3,param_6[1],uVar14);
  if (lVar9 == param_5[1]) {
    cVar4 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar4 = '\0';
  }
  iVar1 = *(int *)(param_5 + 5);
  if (cVar4 != '\0') {
    if (iVar10 != iVar1) {
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f489c0;
      *(int *)(puVar7 + 2) = iVar1;
    }
    goto LAB_141aa1e93;
  }
  iVar10 = *(int *)(param_8 + 0x84);
  if (iVar10 == 2) {
    uVar5 = FUN_141abe630();
LAB_141aa1d8d:
    *param_5 = uVar5;
  }
  else {
    if (iVar10 == 3) {
      uVar5 = FUN_141abe270();
      goto LAB_141aa1d8d;
    }
    if (iVar10 == 4) {
      uVar5 = FUN_141abdd70();
      goto LAB_141aa1d8d;
    }
    if (iVar10 == 5) {
      uVar5 = FUN_141abe3b0();
      goto LAB_141aa1d8d;
    }
  }
  if (*(longlong *)(param_8 + 0x98) == 0) {
    puVar6 = (undefined8 *)FUN_141abc740(param_8 + 0x20,local_58,*(undefined4 *)(param_3 + 0x1a38));
    local_88 = *puVar6;
    uStack_80 = puVar6[1];
    local_78 = *(undefined4 *)(puVar6 + 2);
    uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x14);
    uStack_70 = *(undefined4 *)(puVar6 + 3);
    uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x1c);
    local_68 = *(undefined4 *)(puVar6 + 4);
    uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x24);
    uStack_60 = *(undefined4 *)(puVar6 + 5);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0x2c);
  }
  else {
    local_88 = *(undefined8 *)(param_8 + 0x90);
    uStack_80 = *(undefined8 *)(param_8 + 0x98);
    local_78 = *(undefined4 *)(param_8 + 0xa0);
    uStack_74 = *(undefined4 *)(param_8 + 0xa4);
    uStack_70 = *(undefined4 *)(param_8 + 0xa8);
    uStack_6c = *(undefined4 *)(param_8 + 0xac);
    local_68 = *(undefined4 *)(param_8 + 0xb0);
    uStack_64 = *(undefined4 *)(param_8 + 0xb4);
    uStack_60 = *(undefined4 *)(param_8 + 0xb8);
    uStack_5c = *(undefined4 *)(param_8 + 0xbc);
  }
  FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_88);
  uVar14 = CONCAT71((int7)(uVar14 >> 8),param_4);
  FUN_141ad8710(param_8 + 0x20,param_2,param_5,param_3,uVar14,(ulonglong)uVar11 << 0x20);
  *param_9 = '\x01';
LAB_141aa1e93:
  iVar10 = 0;
  param_9._0_4_ = 0;
  local_a0 = 0;
  do {
    if ((param_7 & 1) != 0) {
      lVar9 = param_6[1];
      uVar5 = *(undefined8 *)(*(longlong *)(lVar9 + 0xc0) + 8);
      lVar8 = *(longlong *)(lVar9 + 0x78);
      if (*(longlong *)(lVar9 + 0x78) == 0) {
        lVar8 = lVar9;
      }
      param_8._0_4_ = 0;
      uVar11 = (*(char *)(lVar8 + 0x67 + local_a0) != '\0') + 1;
      iVar10 = iVar10 + uVar11;
      do {
        lVar9 = *(longlong *)(lVar3 + 0x60);
        local_res18 = CONCAT44(local_res18._4_4_,(uint)param_8);
        if (*(short *)(lVar9 + 0x170) != 0) {
          lVar8 = *(longlong *)(lVar9 + 0x48);
          if (*(char *)(lVar8 + 0x28) == '\0') {
            FUN_1419f3850(lVar8);
          }
          FUN_1404986d0(param_2,*(undefined8 *)(lVar8 + 0x38),lVar9 + 0x16c,&local_res18,
                        uVar14 & 0xffffffff00000000);
        }
        lVar15 = *(longlong *)(lVar3 + 0x78);
        lVar2 = *(longlong *)(lVar3 + 0x60);
        lVar16 = param_6[1];
        lVar9 = lVar15 + 0x150;
        lVar8 = lVar2 + 0x150;
        lVar12 = *(longlong *)(lVar16 + 0x78);
        if (*(longlong *)(lVar16 + 0x78) == 0) {
          lVar12 = lVar16;
        }
        lVar12 = lVar12 + (longlong)(int)param_9 * 0x78;
        if (lVar15 == 0) {
          lVar9 = 0;
        }
        if (lVar2 == 0) {
          lVar8 = 0;
        }
        uVar14 = *(ulonglong *)(lVar3 + 0x28);
        FUN_141bbd320(lVar3 + 0x80,param_2,param_3,uVar5,lVar8,lVar9,lVar2,lVar15,uVar14,
                      *(undefined8 *)(lVar3 + 0x30),*param_6);
        FUN_141ad4780(*(undefined8 *)(lVar3 + 0x60),param_2,*(undefined8 *)(lVar3 + 0x28),param_3,
                      uVar5,lVar16,lVar12,param_5);
        uVar17 = (undefined4)((ulonglong)lVar16 >> 0x20);
        if ((*(longlong *)(lVar3 + 0x68) != 0) && (*(longlong *)(lVar3 + 0x70) != 0)) {
          FBaseHS::SetMesh(*(longlong *)(lVar3 + 0x68),param_2,*(undefined8 *)(lVar3 + 0x28),param_3
                           ,uVar5,lVar12,param_5);
          lVar9 = lVar12;
          FBaseDS::SetMesh(*(undefined8 *)(lVar3 + 0x70),param_2,*(undefined8 *)(lVar3 + 0x28),
                           param_3,uVar5,lVar12,param_5);
          uVar17 = (undefined4)((ulonglong)lVar9 >> 0x20);
        }
        local_res18 = *(undefined8 *)(lVar3 + 0x28);
        iVar1 = *(int *)(param_3 + 0x1a38);
        lVar9 = *(longlong *)(lVar3 + 0x78);
        if (1 < iVar1) {
          lVar8 = *(longlong *)(lVar9 + 0x48);
          if (*(char *)(lVar8 + 0x28) == '\0') {
            FUN_1419f3850(lVar8);
          }
          FUN_141ad4a90(lVar9 + 0x158,param_2,*(undefined8 *)(lVar8 + 0x40),param_3,uVar5,
                        CONCAT44(uVar17,iVar1));
        }
        lVar8 = *(longlong *)(lVar9 + 0x48);
        if (*(char *)(lVar8 + 0x28) == '\0') {
          FUN_1419f3850(lVar8);
        }
        lVar15 = param_3;
        FUN_141d84bb0(lVar9,param_2,*(undefined8 *)(lVar8 + 0x40),local_res18,param_3,uVar5,lVar12,
                      param_5,uVar14 & 0xffffffff00000000);
        uVar14 = CONCAT44((int)((ulonglong)lVar15 >> 0x20),(int)param_9);
        FUN_141b315b0(lVar3 + 0x20,param_2,param_3,param_6[1],uVar14,1);
        param_8._0_4_ = (uint)param_8 + 1;
      } while ((uint)param_8 < uVar11);
    }
    param_9._0_4_ = (int)param_9 + 1;
    local_a0 = local_a0 + 0x78;
    bVar13 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar13);
  return iVar10;
}



// FUNCTION 141aa21d0 FUN_141aa21d0 body=579 status=ok
// SIG undefined FUN_141aa21d0(void)

char FUN_141aa21d0(longlong param_1,undefined *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  undefined8 *puVar9;
  char local_48;
  uint local_44;
  
  cVar7 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar5 = (longlong)param_10;
  lVar3 = (longlong)(int)param_9;
  if (lVar3 <= lVar5) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar9 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar3 * 4) * 0xf0 +
               *(longlong *)(param_1 + 0x40));
      puVar8 = (uint *)*puVar9;
      lVar4 = (longlong)*(int *)(puVar9 + 3);
      iVar6 = 0;
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_6 + 0x10);
          if (*(longlong *)(param_6 + 0x10) == 0) {
            lVar2 = param_6;
          }
          if ((*(uint *)(lVar2 + ((longlong)(int)*puVar8 >> 5) * 4) >> (*puVar8 & 0x1f) & 1) != 0) {
            lVar2 = *(longlong *)(puVar9[2] + lVar5 + 8);
            if ((*(uint *)(lVar2 + 0x8c) & 0x2000000) == 0) {
              lVar2 = (1L << ((byte)*(undefined4 *)(lVar2 + 0x80) & 0x3f)) + -1;
            }
            else {
              lVar2 = *(longlong *)(*param_7 + (longlong)*(int *)(lVar2 + 0xcc) * 8);
            }
            iVar1 = FUN_141aa1890(param_1,param_2,param_3,param_4,param_5,puVar9[2] + lVar5,lVar2,
                                  puVar9,&param_9);
            iVar6 = iVar6 + iVar1;
            local_44 = local_44 + 1;
            if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
               && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
              FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
            }
          }
          lVar5 = lVar5 + 0x38;
          puVar8 = puVar8 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar5 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar7 = local_48, iVar6 != 0)) {
        cVar7 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar9 + 0x1c) = iVar6;
      }
      lVar3 = lVar3 + 1;
      local_48 = cVar7;
    } while (lVar3 <= lVar5);
  }
  return cVar7;
}



// FUNCTION 141aa2420 FUN_141aa2420 body=612 status=ok
// SIG undefined FUN_141aa2420(void)

char FUN_141aa2420(longlong param_1,undefined *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  char local_48;
  uint local_44;
  
  cVar6 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar8 = (longlong)param_10;
  lVar4 = (longlong)(int)param_9;
  if (lVar4 <= lVar8) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4) * 0xf0 +
                *(longlong *)(param_1 + 0x40));
      piVar11 = (int *)*puVar12;
      lVar9 = (longlong)*(int *)(puVar12 + 3);
      iVar10 = 0;
      if (0 < lVar9) {
        lVar8 = 0;
        do {
          uVar7 = 1 << ((byte)*piVar11 & 0x1f);
          lVar3 = ((longlong)*piVar11 >> 5) * 4;
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_8 + 0x10);
          }
          if ((*(uint *)(lVar2 + lVar3) & uVar7) == 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x18) + 0x10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_8 + 0x18);
            }
            if ((*(uint *)(lVar2 + lVar3) & uVar7) != 0) {
              plVar5 = *(longlong **)(param_8 + 0x28);
              goto LAB_141aa2532;
            }
          }
          else {
            plVar5 = *(longlong **)(param_8 + 0x20);
LAB_141aa2532:
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar12[2] + lVar8 + 8);
              if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
                lVar3 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
              }
              else {
                lVar3 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar3 + 0xcc) * 8);
              }
              iVar1 = FUN_141aa1cd0(param_1,param_2,param_3,param_4,param_5,puVar12[2] + lVar8,lVar3
                                    ,puVar12,&param_9);
              iVar10 = iVar10 + iVar1;
              local_44 = local_44 + 1;
              if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
                 && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
                FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
              }
            }
          }
          lVar8 = lVar8 + 0x38;
          piVar11 = piVar11 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar8 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar6 = local_48, iVar10 != 0)) {
        cVar6 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar12 + 0x1c) = iVar10;
      }
      lVar4 = lVar4 + 1;
      local_48 = cVar6;
    } while (lVar4 <= lVar8);
  }
  return cVar6;
}



// FUNCTION 141aa2690 FUN_141aa2690 body=595 status=ok
// SIG undefined FUN_141aa2690(void)

uint * FUN_141aa2690(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  void *_Src;
  longlong *plVar9;
  bool bVar10;
  uint local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar6 + 1)) {
      TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1,uVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)(int)uVar6 * 0xf0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0xf0 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar6;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  _Src = (void *)((longlong)(int)uVar6 * 0xf0 + *param_1);
  TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink::
  FDrawingPolicyLink(_Src,param_3);
  *(undefined4 *)((longlong)_Src + 0xe8) = 0xffffffff;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar6 != 1) {
    TSet<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,(longlong)_Src + 0x20);
    uVar3 = local_res8[0];
    lVar5 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      plVar9 = (longlong *)(lVar5 * 0xf0 + *param_1);
      TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
      ::
      ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
                (plVar9 + 2);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar9,_Src,0xe8);
      TSparseArray<TSetElement<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_141aa28b5;
    }
  }
  if (3 < uVar6) {
    uVar3 = (uVar6 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar4 = 0x20;
    cVar8 = '\0';
    if (uVar3 != 0) {
      iVar4 = 0x1f - iVar7;
    }
    uVar3 = (uVar6 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar6 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar6 = FMeshDrawingPolicy::GetTypeHash((longlong)_Src + 0x20);
    uVar6 = uVar6 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xec) = uVar6;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xe8) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141aa28b5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141aa28f0 FUN_141aa28f0 body=2942 status=ok
// SIG undefined FUN_141aa28f0(void)

void FUN_141aa28f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  char param_5,undefined8 param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 *param_10)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  switch(param_3) {
  default:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a020d0,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a01f80;
      }
      else {
        puVar4 = &DAT_146a02370;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a02220;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a01e30;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a024c0;
    break;
  case 1:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a02a00,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a028b0;
      }
      else {
        puVar4 = &DAT_146a02ca0;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a02b50;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a02760;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a02df0;
    break;
  case 2:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a03330,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         ((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
          ((((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)) &&
            (((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)))) && ((bVar1 & 0xf8) != 0xd8))))))
      {
        puVar4 = &DAT_146a031e0;
      }
      else {
        puVar4 = &DAT_146a035d0;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a03480;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a03090;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a03720;
    break;
  case 3:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a03c60,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a03b10;
      }
      else {
        puVar4 = &DAT_146a03f00;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a03db0;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a039c0;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a04050;
    break;
  case 4:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a04590,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a04440;
      }
      else {
        puVar4 = &DAT_146a04830;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a046e0;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a042f0;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a04980;
    break;
  case 5:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a04ec0,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           (((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)) &&
            (((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)))))) && ((bVar1 & 0xf8) != 0xd8))))
      {
        puVar4 = &DAT_146a04d70;
      }
      else {
        puVar4 = &DAT_146a05160;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a05010;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a04c20;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a052b0;
    break;
  case 6:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a057f0,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a056a0;
      }
      else {
        puVar4 = &DAT_146a05a90;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a05940;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a05550;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a05be0;
    break;
  case 7:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a06120,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a05fd0;
      }
      else {
        puVar4 = &DAT_146a063c0;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a06270;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a05e80;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a06510;
    break;
  case 8:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a06a50,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           (((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)) &&
            (((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)))))) && ((bVar1 & 0xf8) != 0xd8))))
      {
        puVar4 = &DAT_146a06900;
      }
      else {
        puVar4 = &DAT_146a06cf0;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a06ba0;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a067b0;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a06e40;
    break;
  case 9:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a07380,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a07230;
      }
      else {
        puVar4 = &DAT_146a07620;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a074d0;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a070e0;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a07770;
    break;
  case 10:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a07cb0,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a07b60;
      }
      else {
        puVar4 = &DAT_146a07f50;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a07e00;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a07a10;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a080a0;
    break;
  case 0xb:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a085e0,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         ((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
          ((((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)) &&
            (((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)))) && ((bVar1 & 0xf8) != 0xd8))))))
      {
        puVar4 = &DAT_146a08490;
      }
      else {
        puVar4 = &DAT_146a08880;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a08730;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a08340;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a089d0;
    break;
  case 0xc:
    if (param_4 != '\0') {
      lVar2 = FUN_1425939a0(param_1,&DAT_146a08f10,param_2,1);
      *param_8 = lVar2;
      if (((param_5 == '\0') || (lVar2 == 0)) ||
         (((bVar1 = (byte)*(undefined4 *)(lVar2 + 0xb0), (bVar1 & 0xf8) != 0x58 &&
           ((((bVar1 & 0xf8) != 0x60 && ((bVar1 & 0xf8) != 0x90)) && ((bVar1 & 0xf8) != 0x80)))) &&
          ((((bVar1 & 0xf8) != 0xb0 && ((bVar1 & 0xf8) != 0xb8)) && ((bVar1 & 0xf8) != 0xd8)))))) {
        puVar4 = &DAT_146a08dc0;
      }
      else {
        puVar4 = &DAT_146a091b0;
      }
      uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
      *param_7 = uVar3;
    }
    puVar4 = &DAT_146a09060;
    if (param_5 == '\0') {
      puVar4 = &DAT_146a08c70;
    }
    uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
    puVar4 = &DAT_146a09300;
  }
  *param_9 = uVar3;
  uVar3 = FUN_1425939a0(param_1,puVar4,param_2,1);
  *param_10 = uVar3;
  return;
}



// FUNCTION 141aa34b0 HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_> body=500 status=ok
// SIG undefined HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
               (undefined4 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar7 = iVar5 * 2 + 1;
    iVar4 = iVar7;
    iVar8 = iVar5;
joined_r0x000141aa34f6:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar5 * 2;
        iVar9 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          local_40 = *(undefined4 *)(param_4 + 2);
          local_48 = param_4[1];
          iVar6 = TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                            (param_1[iVar7 + 2],param_1[iVar9],*param_4,&local_48);
          if (iVar6 < 0) {
            iVar9 = iVar7;
          }
          iVar9 = iVar9 + 1;
        }
        local_30 = *(undefined4 *)(param_4 + 2);
        local_38 = param_4[1];
        puVar10 = param_1 + iVar9;
        puVar1 = param_1 + iVar5;
        iVar5 = TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                          (param_1[iVar5],param_1[iVar9],*param_4,&local_38);
        if (iVar5 < 0) {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar7 = iVar9 * 2 + 1;
          iVar5 = iVar9;
          goto joined_r0x000141aa34f6;
        }
      }
      iVar7 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar7;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar7 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            local_30 = *(undefined4 *)(param_4 + 2);
            local_38 = param_4[1];
            iVar8 = TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                              (param_1[iVar4 + 2],param_1[iVar7],*param_4,&local_38);
            if (iVar8 < 0) {
              iVar7 = iVar4;
            }
            iVar7 = iVar7 + 1;
          }
          local_40 = *(undefined4 *)(param_4 + 2);
          local_48 = param_4[1];
          puVar1 = param_1 + iVar7;
          puVar2 = param_1 + iVar5;
          iVar5 = TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                            (param_1[iVar5],param_1[iVar7],*param_4,&local_48);
          if (-1 < iVar5) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141aa36b0 HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_> body=500 status=ok
// SIG undefined HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
               (undefined4 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar7 = iVar5 * 2 + 1;
    iVar4 = iVar7;
    iVar8 = iVar5;
joined_r0x000141aa36f6:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar5 * 2;
        iVar9 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          local_40 = *(undefined4 *)(param_4 + 2);
          local_48 = param_4[1];
          iVar6 = FUN_141ab5ea0(param_1[iVar7 + 2],param_1[iVar9],*param_4,&local_48);
          if (iVar6 < 0) {
            iVar9 = iVar7;
          }
          iVar9 = iVar9 + 1;
        }
        local_30 = *(undefined4 *)(param_4 + 2);
        local_38 = param_4[1];
        puVar10 = param_1 + iVar9;
        puVar1 = param_1 + iVar5;
        iVar5 = FUN_141ab5ea0(param_1[iVar5],param_1[iVar9],*param_4,&local_38);
        if (iVar5 < 0) {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar7 = iVar9 * 2 + 1;
          iVar5 = iVar9;
          goto joined_r0x000141aa36f6;
        }
      }
      iVar7 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar7;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar7 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            local_30 = *(undefined4 *)(param_4 + 2);
            local_38 = param_4[1];
            iVar8 = FUN_141ab5ea0(param_1[iVar4 + 2],param_1[iVar7],*param_4,&local_38);
            if (iVar8 < 0) {
              iVar7 = iVar4;
            }
            iVar7 = iVar7 + 1;
          }
          local_40 = *(undefined4 *)(param_4 + 2);
          local_48 = param_4[1];
          puVar1 = param_1 + iVar7;
          puVar2 = param_1 + iVar5;
          iVar5 = FUN_141ab5ea0(param_1[iVar5],param_1[iVar7],*param_4,&local_48);
          if (-1 < iVar5) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141aa38b0 IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_> body=794 status=ok
// SIG undefined IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
    lStack_340 = param_1 + (param_2 - 1) * 4;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar12);
    local_338 = (undefined4)(longlong)(fVar12 + fVar12);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar4 = (undefined4 *)*plVar8;
      puVar6 = (undefined4 *)plVar8[1];
      local_358 = plVar8[2];
      lVar5 = ((longlong)puVar6 - (longlong)puVar4 >> 2) + 1;
      puVar11 = puVar4;
      iVar9 = (int)local_358;
      local_3a8 = plVar8;
      if ((int)local_358 != 0) {
LAB_141aa39a0:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          puVar4 = puVar11 + (lVar5 >> 1);
          if (puVar4 != puVar11) {
            uVar1 = *puVar4;
            *puVar4 = *puVar11;
            *puVar11 = uVar1;
          }
          puVar7 = puVar6 + 1;
          puVar4 = puVar11;
LAB_141aa39d1:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar6) goto code_r0x000141aa39da;
          goto LAB_141aa3a02;
        }
        if (puVar11 < puVar6) {
          do {
            puVar4 = puVar11;
            if (puVar11 + 1 <= puVar6) {
              local_378 = param_4[1];
              local_370 = *(undefined4 *)(param_4 + 2);
              uVar2 = *param_4;
              puVar7 = puVar11;
              puVar10 = puVar11 + 1;
              do {
                iVar9 = TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
                        Compare(*puVar7,*puVar10,uVar2,&local_378);
                puVar4 = puVar10;
                if (-1 < iVar9) {
                  puVar4 = puVar7;
                }
                puVar10 = puVar10 + 1;
                puVar7 = puVar4;
              } while (puVar10 <= puVar6);
            }
            if (puVar4 != puVar6) {
              uVar1 = *puVar4;
              *puVar4 = *puVar6;
              *puVar6 = uVar1;
            }
            puVar6 = puVar6 + -1;
            plVar8 = local_3a8;
          } while (puVar11 < puVar6);
        }
        goto LAB_141aa3af4;
      }
LAB_141aa3ae5:
      HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
                (puVar4,lVar5,param_3,param_4);
LAB_141aa3af4:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000141aa39da:
  local_398 = param_4[1];
  local_390 = *(undefined4 *)(param_4 + 2);
  iVar3 = TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                    (*puVar11,*puVar4,*param_4,&local_398);
  if (-1 < iVar3) goto LAB_141aa39d1;
LAB_141aa3a02:
  do {
    puVar10 = puVar7;
    puVar7 = puVar10 + -1;
    if (puVar7 <= puVar11) break;
    local_388 = param_4[1];
    local_380 = *(undefined4 *)(param_4 + 2);
    iVar3 = TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                      (*puVar7,*puVar11,*param_4,&local_388);
  } while (-1 < iVar3);
  if (puVar4 <= puVar7) {
    if (puVar4 != puVar7) {
      uVar1 = *puVar4;
      *puVar4 = *puVar7;
      *puVar7 = uVar1;
    }
    goto LAB_141aa39d1;
  }
  if (puVar11 != puVar7) {
    uVar1 = *puVar11;
    *puVar11 = *puVar7;
    *puVar7 = uVar1;
  }
  iVar9 = iVar9 + -1;
  if ((longlong)((longlong)puVar7 + (-4 - (longlong)puVar11) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar6 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar6) {
      *plVar8 = (longlong)puVar4;
      plVar8[1] = (longlong)puVar6;
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
      local_3a8 = plVar8;
    }
    if (puVar7 <= puVar11 + 1) goto LAB_141aa3af4;
    puVar6 = puVar10 + -2;
    puVar4 = puVar11;
  }
  else {
    if (puVar11 + 1 < puVar7) {
      *plVar8 = (longlong)puVar11;
      plVar8[1] = (longlong)(puVar10 + -2);
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
      local_3a8 = plVar8;
    }
    if (puVar6 <= puVar4) goto LAB_141aa3af4;
  }
  lVar5 = ((longlong)puVar6 - (longlong)puVar4 >> 2) + 1;
  puVar11 = puVar4;
  if (iVar9 == 0) goto LAB_141aa3ae5;
  goto LAB_141aa39a0;
}



// FUNCTION 141aa3bd0 IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_> body=794 status=ok
// SIG undefined IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
    lStack_340 = param_1 + (param_2 - 1) * 4;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar12);
    local_338 = (undefined4)(longlong)(fVar12 + fVar12);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar4 = (undefined4 *)*plVar8;
      puVar6 = (undefined4 *)plVar8[1];
      local_358 = plVar8[2];
      lVar5 = ((longlong)puVar6 - (longlong)puVar4 >> 2) + 1;
      puVar11 = puVar4;
      iVar9 = (int)local_358;
      local_3a8 = plVar8;
      if ((int)local_358 != 0) {
LAB_141aa3cc0:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          puVar4 = puVar11 + (lVar5 >> 1);
          if (puVar4 != puVar11) {
            uVar1 = *puVar4;
            *puVar4 = *puVar11;
            *puVar11 = uVar1;
          }
          puVar7 = puVar6 + 1;
          puVar4 = puVar11;
LAB_141aa3cf1:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar6) goto code_r0x000141aa3cfa;
          goto LAB_141aa3d22;
        }
        if (puVar11 < puVar6) {
          do {
            puVar4 = puVar11;
            if (puVar11 + 1 <= puVar6) {
              local_378 = param_4[1];
              local_370 = *(undefined4 *)(param_4 + 2);
              uVar2 = *param_4;
              puVar7 = puVar11;
              puVar10 = puVar11 + 1;
              do {
                iVar9 = FUN_141ab5ea0(*puVar7,*puVar10,uVar2,&local_378);
                puVar4 = puVar10;
                if (-1 < iVar9) {
                  puVar4 = puVar7;
                }
                puVar10 = puVar10 + 1;
                puVar7 = puVar4;
              } while (puVar10 <= puVar6);
            }
            if (puVar4 != puVar6) {
              uVar1 = *puVar4;
              *puVar4 = *puVar6;
              *puVar6 = uVar1;
            }
            puVar6 = puVar6 + -1;
            plVar8 = local_3a8;
          } while (puVar11 < puVar6);
        }
        goto LAB_141aa3e14;
      }
LAB_141aa3e05:
      HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
                (puVar4,lVar5,param_3,param_4);
LAB_141aa3e14:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000141aa3cfa:
  local_398 = param_4[1];
  local_390 = *(undefined4 *)(param_4 + 2);
  iVar3 = FUN_141ab5ea0(*puVar11,*puVar4,*param_4,&local_398);
  if (-1 < iVar3) goto LAB_141aa3cf1;
LAB_141aa3d22:
  do {
    puVar10 = puVar7;
    puVar7 = puVar10 + -1;
    if (puVar7 <= puVar11) break;
    local_388 = param_4[1];
    local_380 = *(undefined4 *)(param_4 + 2);
    iVar3 = FUN_141ab5ea0(*puVar7,*puVar11,*param_4,&local_388);
  } while (-1 < iVar3);
  if (puVar4 <= puVar7) {
    if (puVar4 != puVar7) {
      uVar1 = *puVar4;
      *puVar4 = *puVar7;
      *puVar7 = uVar1;
    }
    goto LAB_141aa3cf1;
  }
  if (puVar11 != puVar7) {
    uVar1 = *puVar11;
    *puVar11 = *puVar7;
    *puVar7 = uVar1;
  }
  iVar9 = iVar9 + -1;
  if ((longlong)((longlong)puVar7 + (-4 - (longlong)puVar11) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar6 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar6) {
      *plVar8 = (longlong)puVar4;
      plVar8[1] = (longlong)puVar6;
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
      local_3a8 = plVar8;
    }
    if (puVar7 <= puVar11 + 1) goto LAB_141aa3e14;
    puVar6 = puVar10 + -2;
    puVar4 = puVar11;
  }
  else {
    if (puVar11 + 1 < puVar7) {
      *plVar8 = (longlong)puVar11;
      plVar8[1] = (longlong)(puVar10 + -2);
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
      local_3a8 = plVar8;
    }
    if (puVar6 <= puVar4) goto LAB_141aa3e14;
  }
  lVar5 = ((longlong)puVar6 - (longlong)puVar4 >> 2) + 1;
  puVar11 = puVar4;
  if (iVar9 == 0) goto LAB_141aa3e05;
  goto LAB_141aa3cc0;
}



// FUNCTION 141aa3ef0 FUN_141aa3ef0 body=1378 status=ok
// SIG undefined FUN_141aa3ef0(void)

void FUN_141aa3ef0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar16;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 in_stack_fffffffffffffeb0;
  undefined4 uVar18;
  undefined8 uVar17;
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar19;
  undefined8 in_stack_fffffffffffffed8;
  uint uVar20;
  undefined1 local_108 [4];
  uint local_104;
  ulonglong local_100;
  uint local_f8;
  int local_f4;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  ulonglong local_d0;
  undefined8 local_c8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_68 [48];
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  uVar20 = (uint)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar5 = 0;
  if (param_3[3] == 0) {
    lVar6 = 0;
LAB_141aa3f59:
    uVar10 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_3[3] + 0x140) + 0xd8);
    if (((lVar6 == 0) || (cVar4 = FUN_141ae2600(lVar6,(int)param_3[4]), cVar4 == '\0')) ||
       (*(int *)((longlong)param_3 + 0x24) == 0)) goto LAB_141aa3f59;
    uVar10 = 1;
  }
  if (((*(uint *)(param_3 + 4) < 2) || (lVar6 == 0)) ||
     ((*(longlong *)(lVar6 + 0x1908) == 0 ||
      ((*(char *)(*(longlong *)(lVar6 + 0x5ff8) + 2) == '\0' ||
       ((*(uint *)(*(longlong *)(*param_1 + 0x10) + 0x2c) & 0x200000) == 0)))))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  lVar3 = *param_3;
  uVar1 = *(uint *)(lVar3 + 0x8c);
  local_100 = CONCAT44(uVar1 >> 0xc,
                       ((uVar1 >> 0x13 & 0x80 | uVar1 & 0x100) >> 2 | uVar1 & 0x10) >> 4 | uVar1 & 8
                      ) & 0x3fffffffff;
  local_f0 = local_100;
  uVar17 = CONCAT44(uVar18,*param_4);
  uVar13 = CONCAT44(uVar16,*(undefined4 *)((longlong)param_3 + 0x2c));
  FUN_141aad9a0(local_d8,*(undefined8 *)(lVar3 + 0xa0),*(undefined8 *)(lVar3 + 0xa8),param_3[2],
                uVar13,uVar17,CONCAT44(uVar19,*(uint *)(param_3 + 4)),uVar10,uVar8,&local_f0,
                (ulonglong)uVar20 << 0x20,lVar6 != 0,0);
  uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
  lVar6 = param_3[3];
  lVar3 = *param_1;
  local_104 = 0;
  local_108[0] = 0;
  if ((*(byte *)(*param_3 + 0x8c) & 1) == 0) {
    if (lVar6 != 0) {
      uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x130) + 0x210))();
    }
    FUN_141b08550(*(undefined4 *)(lVar3 + 0x1a38),&local_104,local_108,uVar5);
    if (local_104 == 3) goto LAB_141aa40d6;
    lVar6 = FUN_141abf2b0();
  }
  else {
    if (lVar6 != 0) {
      uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x130) + 0x210))();
    }
    FUN_141b08550(*(undefined4 *)(lVar3 + 0x1a38),&local_104,local_108,uVar5);
    if (local_104 == 3) {
LAB_141aa40d6:
      lVar6 = FUN_141abfcb0();
    }
    else {
      lVar6 = FUN_141abf530();
    }
  }
  param_1[2] = lVar6;
  *(undefined4 *)(param_1 + 6) = 0;
  plVar12 = param_1 + 1;
  if (local_74 == 2) {
    lVar6 = FUN_141abe630();
  }
  else if (local_74 == 3) {
    lVar6 = FUN_141abe270();
  }
  else if (local_74 == 4) {
    lVar6 = FUN_141abdd70();
  }
  else {
    if (local_74 != 5) goto LAB_141aa411f;
    lVar6 = FUN_141abe3b0();
  }
  *plVar12 = lVar6;
LAB_141aa411f:
  uVar5 = FUN_141abc740(local_d8,local_68,*(undefined4 *)(*param_1 + 0x1a38));
  FUN_141a9adc0(param_2,local_d8,plVar12,uVar5);
  uVar14 = CONCAT71((int7)((ulonglong)uVar13 >> 8),*(undefined1 *)((longlong)param_3 + 0x34));
  FUN_141ad8710(local_d8,param_2,plVar12,*param_1,uVar14,CONCAT44(uVar16,(int)param_3[6]));
  local_f4 = 0;
  local_f0 = (ulonglong)*(int *)(*param_3 + 0x80);
  if (0 < (longlong)local_f0) {
    local_e8 = 0;
    do {
      lVar6 = *(longlong *)(*param_3 + 0x78);
      if (*(char *)((longlong)param_3 + 0x34) == '\0') {
LAB_141aa41ca:
        local_f8 = 1;
      }
      else {
        local_f8 = 2;
        if (lVar6 == 0) {
          lVar6 = *param_3;
        }
        if (*(char *)(lVar6 + 0x67 + local_e8) == '\0') goto LAB_141aa41ca;
      }
      local_e0 = (longlong)local_f4 * 0x78;
      local_104 = 0;
      do {
        lVar6 = local_98;
        plVar12 = param_1 + 1;
        local_100 = CONCAT44(local_100._4_4_,local_104);
        if (*(short *)(local_98 + 0x170) != 0) {
          lVar3 = *(longlong *)(local_98 + 0x48);
          if (*(char *)(lVar3 + 0x28) == '\0') {
            FUN_1419f3850(lVar3);
          }
          FUN_1404986d0(param_2,*(undefined8 *)(lVar3 + 0x38),lVar6 + 0x16c,&local_100,
                        uVar14 & 0xffffffff00000000);
        }
        lVar6 = *param_3;
        lVar3 = param_3[3];
        lVar15 = *param_1;
        lVar11 = *(longlong *)(lVar6 + 0x78);
        if (*(longlong *)(lVar6 + 0x78) == 0) {
          lVar11 = lVar6;
        }
        lVar11 = lVar11 + local_e0;
        lVar9 = local_80 + 0x150;
        if (local_80 == 0) {
          lVar9 = 0;
        }
        lVar7 = local_98 + 0x150;
        if (local_98 == 0) {
          lVar7 = 0;
        }
        uVar14 = local_d0;
        FUN_141bbd320(local_78,param_2,lVar15,lVar3,lVar7,lVar9,local_98,local_80,local_d0,local_c8,
                      *param_5);
        FUN_141ad4780(local_98,param_2,local_d0,lVar15,lVar3,lVar6,lVar11,plVar12);
        uVar16 = (undefined4)((ulonglong)lVar6 >> 0x20);
        if ((local_90 != 0) && (local_88 != 0)) {
          FBaseHS::SetMesh(local_90,param_2,local_d0,lVar15,lVar3,lVar11,plVar12);
          lVar6 = lVar11;
          FBaseDS::SetMesh(local_88,param_2,local_d0,lVar15,lVar3,lVar11,plVar12);
          uVar16 = (undefined4)((ulonglong)lVar6 >> 0x20);
        }
        lVar6 = local_80;
        iVar2 = *(int *)(lVar15 + 0x1a38);
        local_100 = local_d0;
        if (1 < iVar2) {
          lVar9 = *(longlong *)(local_80 + 0x48);
          if (*(char *)(lVar9 + 0x28) == '\0') {
            FUN_1419f3850(lVar9);
          }
          FUN_141ad4a90(lVar6 + 0x158,param_2,*(undefined8 *)(lVar9 + 0x40),lVar15,lVar3,
                        CONCAT44(uVar16,iVar2));
        }
        lVar9 = *(longlong *)(lVar6 + 0x48);
        if (*(char *)(lVar9 + 0x28) == '\0') {
          FUN_1419f3850(lVar9);
        }
        FUN_141d84bb0(lVar6,param_2,*(undefined8 *)(lVar9 + 0x40),local_100,lVar15,lVar3,lVar11,
                      param_1 + 1,uVar14 & 0xffffffff00000000);
        iVar2 = local_f4;
        uVar14 = CONCAT44((int)((ulonglong)lVar15 >> 0x20),local_f4);
        FUN_141b315b0(local_d8,param_2,*param_1,*param_3,uVar14,
                      *(undefined1 *)((longlong)param_3 + 0x34));
        local_104 = local_104 + 1;
      } while (local_104 < local_f8);
      local_f4 = iVar2 + 1;
      local_e8 = local_e8 + 0x78;
      local_f0 = local_f0 - 1;
    } while (local_f0 != 0);
  }
  return;
}



// FUNCTION 141aa4460 FUN_141aa4460 body=523 status=ok
// SIG undefined FUN_141aa4460(void)

void FUN_141aa4460(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  longlong *local_res8;
  undefined8 local_res18 [2];
  undefined1 local_98 [112];
  
  local_res8 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1[1] + 0xa8) + 0x40))
            (*(longlong **)(param_1[1] + 0xa8),*(undefined4 *)(param_3 + 0x2c),local_res18);
  cVar4 = (**(code **)(*local_res8 + 0x1d0))();
  if (cVar4 == '\0') {
    uVar7 = 0;
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1[1] + 0xc0) + 8) + 0x18) >> 0x1b & 1) != 0) {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  if (*param_1 == 0) {
    return;
  }
  uVar7 = FUN_141d0a010(*param_1,uVar7);
  cVar4 = FUN_141ae2600(*param_1,*(undefined4 *)(param_3 + 0x20));
  if ((cVar4 == '\0') || (*(int *)(param_3 + 0x24) == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  if (*(uint *)(param_3 + 0x20) < 2) {
    lVar6 = *param_1;
  }
  else {
    lVar6 = *param_1;
    if ((*(longlong *)(lVar6 + 0x1908) != 0) &&
       (*(char *)(*(longlong *)(lVar6 + 0x5ff8) + 2) != '\0')) {
      uVar8 = 1;
      goto LAB_141aa453a;
    }
  }
  uVar8 = 0;
LAB_141aa453a:
  lVar3 = param_1[1];
  uVar1 = *(uint *)(lVar3 + 0x8c);
  local_res8 = (longlong *)
               (CONCAT44(uVar1 >> 0xc,
                         ((uVar1 >> 0x13 & 0x80 | uVar1 & 0x100) >> 2 | uVar1 & 0x10) >> 4 |
                         uVar1 & 8) & 0x3fffffffff);
  uVar2 = *(undefined4 *)(lVar6 + 8);
  local_res18[0] = *param_5;
  uVar5 = FUN_141aad9a0(local_98,*(undefined8 *)(lVar3 + 0xa0),*(undefined8 *)(lVar3 + 0xa8),
                        *(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x2c),*param_4,
                        *(uint *)(param_3 + 0x20),uVar9,uVar8,&local_res8,0,1,0);
  FUN_141ab43c0(uVar7,param_1[1],local_res18,uVar5,uVar2);
  return;
}



// FUNCTION 141aa4670 FUN_141aa4670 body=1195 status=ok
// SIG undefined FUN_141aa4670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa4670(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  undefined8 *puVar16;
  char cVar17;
  DWORD DVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  char cVar28;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  char local_4d0;
  int local_4c8;
  undefined1 local_4c4;
  longlong local_4c0;
  undefined8 local_478 [37];
  char local_350;
  int local_348;
  undefined8 local_328 [3];
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2e8 [336];
  undefined1 local_198 [336];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  iVar1 = *(int *)((longlong)param_2 + 0x24);
  local_4c4 = iVar1 != 0;
  local_4c8 = iVar1;
  (**(code **)(*(longlong *)param_2[2] + 0x170))();
  uVar27 = 0;
  local_4c0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_4c0 + 0x38) < DAT_146a0e808) &&
     (_Init_thread_header(&DAT_146a0e808), DAT_146a0e808 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar22 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    uVar23 = uVar27;
    if (plVar22 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plVar22 + 0x38))(plVar22);
    }
    DAT_146a0e800 = uVar23;
    _Init_thread_footer(&DAT_146a0e808);
  }
  if ((DAT_146a0e800 == 0) || (*(int *)(DAT_146a0e800 + 4) != 0)) {
    cVar28 = '\x01';
    if ((*(longlong *)(*param_2 + 0x98) == 0) || (iVar1 == 0)) goto LAB_141aa4712;
    puVar19 = (undefined8 *)
              FUN_14274f0e0(*(longlong *)(*param_2 + 0x98),local_2e8,
                            *(undefined4 *)((longlong)param_2 + 0x2c));
  }
  else {
    cVar28 = '\0';
LAB_141aa4712:
    puVar19 = (undefined8 *)FUN_141aaf600(local_198);
  }
  lVar25 = 2;
  puVar16 = local_478;
  do {
    puVar24 = puVar16;
    puVar20 = puVar19;
    uVar10 = puVar20[1];
    uVar11 = puVar20[2];
    uVar12 = puVar20[3];
    *puVar24 = *puVar20;
    puVar24[1] = uVar10;
    uVar10 = puVar20[4];
    uVar13 = puVar20[5];
    puVar24[2] = uVar11;
    puVar24[3] = uVar12;
    uVar11 = puVar20[6];
    uVar12 = puVar20[7];
    puVar24[4] = uVar10;
    puVar24[5] = uVar13;
    uVar10 = puVar20[8];
    uVar13 = puVar20[9];
    puVar24[6] = uVar11;
    puVar24[7] = uVar12;
    uVar11 = puVar20[10];
    uVar12 = puVar20[0xb];
    puVar24[8] = uVar10;
    puVar24[9] = uVar13;
    uVar10 = puVar20[0xc];
    uVar13 = puVar20[0xd];
    puVar24[10] = uVar11;
    puVar24[0xb] = uVar12;
    uVar11 = puVar20[0xe];
    uVar12 = puVar20[0xf];
    puVar24[0xc] = uVar10;
    puVar24[0xd] = uVar13;
    puVar24[0xe] = uVar11;
    puVar24[0xf] = uVar12;
    lVar25 = lVar25 + -1;
    puVar19 = puVar20 + 0x10;
    puVar16 = puVar24 + 0x10;
  } while (lVar25 != 0);
  uVar10 = puVar20[0x11];
  uVar11 = puVar20[0x12];
  uVar12 = puVar20[0x13];
  puVar24[0x10] = puVar20[0x10];
  puVar24[0x11] = uVar10;
  uVar10 = puVar20[0x14];
  uVar13 = puVar20[0x15];
  puVar24[0x12] = uVar11;
  puVar24[0x13] = uVar12;
  uVar2 = *(undefined4 *)(puVar20 + 0x16);
  uVar3 = *(undefined4 *)((longlong)puVar20 + 0xb4);
  uVar4 = *(undefined4 *)(puVar20 + 0x17);
  uVar5 = *(undefined4 *)((longlong)puVar20 + 0xbc);
  puVar24[0x14] = uVar10;
  puVar24[0x15] = uVar13;
  uVar6 = *(undefined4 *)(puVar20 + 0x18);
  uVar7 = *(undefined4 *)((longlong)puVar20 + 0xc4);
  uVar8 = *(undefined4 *)(puVar20 + 0x19);
  uVar9 = *(undefined4 *)((longlong)puVar20 + 0xcc);
  *(undefined4 *)(puVar24 + 0x16) = uVar2;
  *(undefined4 *)((longlong)puVar24 + 0xb4) = uVar3;
  *(undefined4 *)(puVar24 + 0x17) = uVar4;
  *(undefined4 *)((longlong)puVar24 + 0xbc) = uVar5;
  *(undefined4 *)(puVar24 + 0x18) = uVar6;
  *(undefined4 *)((longlong)puVar24 + 0xc4) = uVar7;
  *(undefined4 *)(puVar24 + 0x19) = uVar8;
  *(undefined4 *)((longlong)puVar24 + 0xcc) = uVar9;
  cVar17 = FUN_142865d40(*(undefined4 *)((longlong)param_2 + 0x2c));
  if ((cVar17 == '\0') || (local_350 == '\0')) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  cVar17 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)((longlong)param_2 + 0x2c)]);
  if (cVar17 != '\0') {
    local_4d8 = CONCAT71(local_4d8._1_7_,local_4c4);
    local_4d0 = cVar28;
    FUN_141aa4fa0(param_1,param_2,param_3,local_478);
    return;
  }
  if ((*(int *)(local_4c0 + 0x38) < DAT_146a0e818) &&
     (_Init_thread_header(&DAT_146a0e818), DAT_146a0e818 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar22 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportLowQualityLightmaps");
    uVar23 = uVar27;
    if (plVar22 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plVar22 + 0x38))(plVar22);
    }
    DAT_146a0e810 = uVar23;
    _Init_thread_footer(&DAT_146a0e818);
  }
  uVar23 = DAT_146a0e810;
  if (DAT_146a0e810 == 0) {
LAB_141aa489f:
    bVar15 = true;
  }
  else {
    cVar17 = FUN_1415ad720();
    if ((cVar17 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar18 = GetCurrentThreadId();
      uVar21 = 4;
      if (DVar18 == DAT_1468c21c0) goto LAB_141aa4892;
    }
    else {
LAB_141aa4892:
      uVar21 = uVar27;
    }
    if (*(int *)(uVar23 + uVar21) != 0) goto LAB_141aa489f;
    bVar15 = false;
  }
  if (local_348 == 2) {
    if (bVar14) {
      if (((cVar28 == '\0') || (*(longlong *)(*param_2 + 0x98) == 0)) || (local_4c8 == 0)) {
        local_328[0] = 0;
        local_308 = 0;
        uStack_300 = 0;
        lVar25 = (longlong)&local_310 + 1;
        local_2f8 = 0;
        do {
          uVar26 = (int)uVar27 + 4;
          uVar27 = (ulonglong)uVar26;
          *(undefined4 *)(lVar25 + -1) = 0;
          lVar25 = lVar25 + 4;
        } while (uVar26 < 4);
        puVar19 = local_328;
      }
      else {
        puVar19 = (undefined8 *)
                  FLightCacheInterface::GetShadowMapInteraction
                            (*(longlong *)(*param_2 + 0x98),local_328);
      }
      local_4d8 = *param_2 + 0x98;
      if (*(int *)(puVar19 + 6) == 2) {
        local_4c8 = 0xc;
      }
      else {
        local_4c8 = 0xb;
      }
      goto LAB_141aa4a0f;
    }
    local_4d8 = *param_2 + 0x98;
    local_4c8 = 10;
    if (bVar15) goto LAB_141aa4a0f;
  }
  else {
    if (local_4c8 != 0) {
      if ((((cVar28 != '\0') && (*(int *)(*(longlong *)(*param_3 + 0x10) + 0x28) < 0)) &&
          ((lVar25 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + 0x20), lVar25 != 0 &&
           ((0 < *(int *)(lVar25 + 0x15e8) && (lVar25 = param_2[3], lVar25 != 0)))))) &&
         ((*(int *)(lVar25 + 0x10) - 1U < 2 ||
          ((*(int *)(lVar25 + 0x18) < 0 || (*(char *)(lVar25 + 0x14) == '\x02')))))) {
        local_4d8 = *param_2 + 0x98;
        local_4c8 = 1;
        goto LAB_141aa4a0f;
      }
      FUN_141b66cf0(*(undefined4 *)((longlong)param_2 + 0x2c));
    }
    local_4d8 = *param_2 + 0x98;
  }
  local_4c8 = 0;
LAB_141aa4a0f:
  FUN_141aa3ef0(param_3,param_1,param_2,&local_4c8);
  return;
}



// FUNCTION 141aa4b20 FUN_141aa4b20 body=1147 status=ok
// SIG undefined FUN_141aa4b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa4b20(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  undefined8 *puVar16;
  char cVar17;
  DWORD DVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  char cVar28;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  char local_4d0;
  int local_4c8;
  undefined1 local_4c4;
  longlong local_4c0;
  undefined8 local_478 [37];
  char local_350;
  int local_348;
  undefined8 local_328 [3];
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2e8 [336];
  undefined1 local_198 [336];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  iVar1 = *(int *)((longlong)param_2 + 0x24);
  local_4c4 = iVar1 != 0;
  local_4c8 = iVar1;
  (**(code **)(*(longlong *)param_2[2] + 0x170))();
  uVar27 = 0;
  local_4c0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_4c0 + 0x38) < DAT_146a0e7e8) &&
     (_Init_thread_header(&DAT_146a0e7e8), DAT_146a0e7e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar22 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    uVar23 = uVar27;
    if (plVar22 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plVar22 + 0x38))(plVar22);
    }
    DAT_146a0e7e0 = uVar23;
    _Init_thread_footer(&DAT_146a0e7e8);
  }
  if ((DAT_146a0e7e0 == 0) || (*(int *)(DAT_146a0e7e0 + 4) != 0)) {
    cVar28 = '\x01';
    if ((*(longlong *)(*param_2 + 0x98) == 0) || (iVar1 == 0)) goto LAB_141aa4bc2;
    puVar19 = (undefined8 *)
              FUN_14274f0e0(*(longlong *)(*param_2 + 0x98),local_2e8,
                            *(undefined4 *)((longlong)param_2 + 0x2c));
  }
  else {
    cVar28 = '\0';
LAB_141aa4bc2:
    puVar19 = (undefined8 *)FUN_141aaf600(local_198);
  }
  lVar25 = 2;
  puVar16 = local_478;
  do {
    puVar24 = puVar16;
    puVar20 = puVar19;
    uVar10 = puVar20[1];
    uVar11 = puVar20[2];
    uVar12 = puVar20[3];
    *puVar24 = *puVar20;
    puVar24[1] = uVar10;
    uVar10 = puVar20[4];
    uVar13 = puVar20[5];
    puVar24[2] = uVar11;
    puVar24[3] = uVar12;
    uVar11 = puVar20[6];
    uVar12 = puVar20[7];
    puVar24[4] = uVar10;
    puVar24[5] = uVar13;
    uVar10 = puVar20[8];
    uVar13 = puVar20[9];
    puVar24[6] = uVar11;
    puVar24[7] = uVar12;
    uVar11 = puVar20[10];
    uVar12 = puVar20[0xb];
    puVar24[8] = uVar10;
    puVar24[9] = uVar13;
    uVar10 = puVar20[0xc];
    uVar13 = puVar20[0xd];
    puVar24[10] = uVar11;
    puVar24[0xb] = uVar12;
    uVar11 = puVar20[0xe];
    uVar12 = puVar20[0xf];
    puVar24[0xc] = uVar10;
    puVar24[0xd] = uVar13;
    puVar24[0xe] = uVar11;
    puVar24[0xf] = uVar12;
    lVar25 = lVar25 + -1;
    puVar19 = puVar20 + 0x10;
    puVar16 = puVar24 + 0x10;
  } while (lVar25 != 0);
  uVar10 = puVar20[0x11];
  uVar11 = puVar20[0x12];
  uVar12 = puVar20[0x13];
  puVar24[0x10] = puVar20[0x10];
  puVar24[0x11] = uVar10;
  uVar10 = puVar20[0x14];
  uVar13 = puVar20[0x15];
  puVar24[0x12] = uVar11;
  puVar24[0x13] = uVar12;
  uVar2 = *(undefined4 *)(puVar20 + 0x16);
  uVar3 = *(undefined4 *)((longlong)puVar20 + 0xb4);
  uVar4 = *(undefined4 *)(puVar20 + 0x17);
  uVar5 = *(undefined4 *)((longlong)puVar20 + 0xbc);
  puVar24[0x14] = uVar10;
  puVar24[0x15] = uVar13;
  uVar6 = *(undefined4 *)(puVar20 + 0x18);
  uVar7 = *(undefined4 *)((longlong)puVar20 + 0xc4);
  uVar8 = *(undefined4 *)(puVar20 + 0x19);
  uVar9 = *(undefined4 *)((longlong)puVar20 + 0xcc);
  *(undefined4 *)(puVar24 + 0x16) = uVar2;
  *(undefined4 *)((longlong)puVar24 + 0xb4) = uVar3;
  *(undefined4 *)(puVar24 + 0x17) = uVar4;
  *(undefined4 *)((longlong)puVar24 + 0xbc) = uVar5;
  *(undefined4 *)(puVar24 + 0x18) = uVar6;
  *(undefined4 *)((longlong)puVar24 + 0xc4) = uVar7;
  *(undefined4 *)(puVar24 + 0x19) = uVar8;
  *(undefined4 *)((longlong)puVar24 + 0xcc) = uVar9;
  cVar17 = FUN_142865d40(*(undefined4 *)((longlong)param_2 + 0x2c));
  if ((cVar17 == '\0') || (local_350 == '\0')) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  cVar17 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)((longlong)param_2 + 0x2c)]);
  if (cVar17 != '\0') {
    local_4d8 = CONCAT71(local_4d8._1_7_,local_4c4);
    local_4d0 = cVar28;
    FUN_141aa51b0(param_1,param_2,param_3,local_478);
    return;
  }
  if ((*(int *)(local_4c0 + 0x38) < DAT_146a0e7f8) &&
     (_Init_thread_header(&DAT_146a0e7f8), DAT_146a0e7f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar22 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportLowQualityLightmaps");
    uVar23 = uVar27;
    if (plVar22 != (longlong *)0x0) {
      uVar23 = (**(code **)(*plVar22 + 0x38))(plVar22);
    }
    DAT_146a0e7f0 = uVar23;
    _Init_thread_footer(&DAT_146a0e7f8);
  }
  uVar23 = DAT_146a0e7f0;
  if (DAT_146a0e7f0 == 0) {
LAB_141aa4d4f:
    bVar15 = true;
  }
  else {
    cVar17 = FUN_1415ad720();
    if ((cVar17 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar18 = GetCurrentThreadId();
      uVar21 = 4;
      if (DVar18 == DAT_1468c21c0) goto LAB_141aa4d42;
    }
    else {
LAB_141aa4d42:
      uVar21 = uVar27;
    }
    if (*(int *)(uVar21 + uVar23) != 0) goto LAB_141aa4d4f;
    bVar15 = false;
  }
  if (local_348 == 2) {
    if (bVar14) {
      if (((cVar28 == '\0') || (*(longlong *)(*param_2 + 0x98) == 0)) || (local_4c8 == 0)) {
        local_328[0] = 0;
        local_308 = 0;
        uStack_300 = 0;
        lVar25 = (longlong)&local_310 + 1;
        local_2f8 = 0;
        do {
          uVar26 = (int)uVar27 + 4;
          uVar27 = (ulonglong)uVar26;
          *(undefined4 *)(lVar25 + -1) = 0;
          lVar25 = lVar25 + 4;
        } while (uVar26 < 4);
        puVar19 = local_328;
      }
      else {
        puVar19 = (undefined8 *)
                  FLightCacheInterface::GetShadowMapInteraction
                            (*(longlong *)(*param_2 + 0x98),local_328);
      }
      local_4d8 = *param_2 + 0x98;
      if (*(int *)(puVar19 + 6) == 2) {
        local_4c8 = 0xc;
      }
      else {
        local_4c8 = 0xb;
      }
      goto LAB_141aa4e8f;
    }
    local_4d8 = *param_2 + 0x98;
    local_4c8 = 10;
    if (bVar15) goto LAB_141aa4e8f;
  }
  else {
    if (local_4c8 != 0) {
      if ((((cVar28 != '\0') && (0 < *(int *)(*param_3 + 0x15e8))) &&
          (lVar25 = param_2[3], lVar25 != 0)) &&
         (((*(int *)(lVar25 + 0x10) - 1U < 2 || (*(int *)(lVar25 + 0x18) < 0)) ||
          (*(char *)(lVar25 + 0x14) == '\x02')))) {
        local_4d8 = *param_2 + 0x98;
        local_4c8 = 1;
        goto LAB_141aa4e8f;
      }
      FUN_141b66cf0(*(undefined4 *)((longlong)param_2 + 0x2c));
    }
    local_4d8 = *param_2 + 0x98;
  }
  local_4c8 = 0;
LAB_141aa4e8f:
  FUN_141aa4460(param_3,param_1,param_2,&local_4c8);
  return;
}



// FUNCTION 141aa4fa0 FUN_141aa4fa0 body=513 status=ok
// SIG undefined FUN_141aa4fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa4fa0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  char param_5,char param_6)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_b8 [20];
  undefined8 local_68 [3];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_28;
  
  lVar4 = (longlong)&local_50 + 1;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((param_6 != '\0') && (*(int *)(param_4 + 0x130) == 2)) {
    if ((*(longlong *)(*param_2 + 0x98) == 0) || (param_5 == '\0')) {
      uVar5 = 0;
      local_68[0] = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      do {
        uVar5 = uVar5 + 4;
        *(undefined4 *)(lVar4 + -1) = 0;
        lVar4 = lVar4 + 4;
      } while (uVar5 < 4);
      puVar3 = local_68;
    }
    else {
      puVar3 = (undefined8 *)
               FLightCacheInterface::GetShadowMapInteraction
                         (*(longlong *)(*param_2 + 0x98),local_68);
    }
    local_c8 = *param_2 + 0x98;
    if (*(int *)(puVar3 + 6) == 2) {
      local_b8[0] = 7;
    }
    else {
      local_b8[0] = 5;
    }
    goto LAB_141aa517d;
  }
  if (param_5 == '\0') {
LAB_141aa514e:
    local_c8 = *param_2 + 0x98;
    local_b8[0] = 6;
    if (param_5 != '\0') goto LAB_141aa517d;
  }
  else {
    if ((((param_6 != '\0') && (*(int *)(*(longlong *)(*param_3 + 0x10) + 0x28) < 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + 0x20), lVar4 != 0)) &&
       ((0 < *(int *)(lVar4 + 0x15e8) && (param_2[3] != 0)))) {
      local_c8 = *param_2 + 0x98;
      local_b8[0] = 9;
      goto LAB_141aa517d;
    }
    cVar2 = FUN_141b66cf0(*(undefined4 *)((longlong)param_2 + 0x2c));
    if ((((cVar2 == '\0') ||
         (((*(byte *)(*(longlong *)(*param_3 + 0x10) + 0x2c) & 1) == 0 ||
          (lVar4 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + 0x20), lVar4 == 0)))) ||
        (*(int *)(lVar4 + 0x13e0) < 1)) || (lVar4 = param_2[3], lVar4 == 0)) goto LAB_141aa514e;
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x50);
    if ((*(int *)(lVar4 + 0x74) != 0) &&
       (((((lVar1 != 0 && (-1 < *(int *)(lVar1 + 0x30))) && (-1 < *(int *)(lVar1 + 0x34))) &&
         ((-1 < *(int *)(lVar1 + 0x38) && (0 < *(int *)(lVar1 + 0x3c))))) ||
        (*(int *)(lVar4 + 0x10) - 1U < 2)))) {
      local_c8 = *param_2 + 0x98;
      local_b8[0] = 8;
      goto LAB_141aa517d;
    }
    local_c8 = *param_2 + 0x98;
  }
  local_b8[0] = 4;
LAB_141aa517d:
  FUN_141aa3ef0(param_3,param_1,param_2,local_b8);
  return;
}



// FUNCTION 141aa51b0 FUN_141aa51b0 body=517 status=ok
// SIG undefined FUN_141aa51b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa51b0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  char param_5,char param_6)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_a8 [20];
  undefined8 local_58 [3];
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((param_6 != '\0') && (*(int *)(param_4 + 0x130) == 2)) {
    if ((*(longlong *)(*param_2 + 0x98) == 0) || (param_5 == '\0')) {
      uVar5 = 0;
      lVar4 = (longlong)&local_40 + 1;
      local_58[0] = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      do {
        uVar5 = uVar5 + 4;
        *(undefined4 *)(lVar4 + -1) = 0;
        lVar4 = lVar4 + 4;
      } while (uVar5 < 4);
      puVar3 = local_58;
    }
    else {
      puVar3 = (undefined8 *)
               FLightCacheInterface::GetShadowMapInteraction
                         (*(longlong *)(*param_2 + 0x98),local_58);
    }
    local_b8 = *param_2 + 0x98;
    if (*(int *)(puVar3 + 6) == 2) {
      local_a8[0] = 7;
    }
    else {
      local_a8[0] = 5;
    }
    goto LAB_141aa538b;
  }
  if (param_5 == '\0') {
LAB_141aa5355:
    local_b8 = *param_2 + 0x98;
    local_a8[0] = 6;
    if (param_5 != '\0') goto LAB_141aa538b;
  }
  else {
    if (((param_6 != '\0') && (0 < *(int *)(*param_3 + 0x15e8))) && (param_2[3] != 0)) {
      local_b8 = *param_2 + 0x98;
      local_a8[0] = 9;
      goto LAB_141aa538b;
    }
    cVar2 = FUN_141b66cf0(*(undefined4 *)((longlong)param_2 + 0x2c));
    if ((cVar2 == '\0') || (lVar4 = param_2[3], lVar4 == 0)) goto LAB_141aa5355;
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x50);
    if ((*(int *)(lVar4 + 0x74) != 0) &&
       ((((lVar1 != 0 && (-1 < *(int *)(lVar1 + 0x30))) &&
         ((-1 < *(int *)(lVar1 + 0x34) &&
          ((-1 < *(int *)(lVar1 + 0x38) && (0 < *(int *)(lVar1 + 0x3c))))))) ||
        (*(int *)(lVar4 + 0x10) - 1U < 2)))) {
      local_b8 = *param_2 + 0x98;
      local_a8[0] = 8;
      goto LAB_141aa538b;
    }
    local_b8 = *param_2 + 0x98;
  }
  local_a8[0] = 4;
LAB_141aa538b:
  FUN_141aa4460(param_3,param_1,param_2,local_a8);
  return;
}



// FUNCTION 141aa53c0 RegisterPass<FRCPassPostProcessDeferredDecals> body=69 status=ok
// SIG undefined RegisterPass<FRCPassPostProcessDeferredDecals>(void)

undefined8
FRenderingCompositionGraph::RegisterPass<FRCPassPostProcessDeferredDecals>
          (longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  return param_2;
}



// FUNCTION 141aa5410 FUN_141aa5410 body=706 status=ok
// SIG undefined FUN_141aa5410(void)

void FUN_141aa5410(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,char param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_6 != '\0') {
    local_30 = *(undefined8 *)(param_4 + 0x38);
    local_38 = *(undefined8 *)(param_4 + 0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *puVar7 = local_38;
    puVar7[1] = local_30;
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
  }
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1,param_2,*param_3,param_4 + 8);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 8,param_2,*param_3,param_4 + 0x30);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,*param_3,param_1 + 0x10,&param_5,0);
  lVar3 = DAT_146532078;
  uVar4 = FUN_141a156e0();
  uVar2 = *param_3;
  if (*(short *)(param_1 + 0x18) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x16);
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
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = lVar3;
  }
  if (*(short *)(param_1 + 0x1c) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1a);
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
    *puVar7 = &PTR_LAB_144dcb3b8;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  local_40 = 1.0 / (float)*(int *)(DAT_146532078 + 0x68);
  local_48 = 1.0 / (float)*(int *)(DAT_146532078 + 0x60);
  local_44 = 1.0 / (float)*(int *)(DAT_146532078 + 100);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,*param_3,param_1 + 0x1e,&local_48,0);
  return;
}



// FUNCTION 141aa56e0 FUN_141aa56e0 body=466 status=ok
// SIG undefined FUN_141aa56e0(void)

void FUN_141aa56e0(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [2];
  
  if ((1 < param_4) && (cVar3 = *(char *)(param_1 + 6), cVar3 != '\0')) {
    if (((param_5 & 0x10) == 0) || ((param_5 != DAT_146a61370 || (DAT_146a632a8 == 0)))) {
      uVar4 = FUN_141c969f0(local_38,param_2,param_5);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
      DAT_146a61370 = param_5;
      cVar3 = *(char *)(param_1 + 6);
    }
    lVar2 = DAT_146a632a8;
    uVar4 = *param_3;
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_1 + 4);
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
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144dc9c90;
      puVar6[2] = uVar4;
      puVar6[4] = lVar2;
    }
  }
  if ((param_4 < 2) && (*(char *)(param_1 + 0xe) != '\0')) {
    CreateMobileSceneTextureUniformBufferSingleDraw<FRHIAsyncComputeCommandListImmediate>
              (local_38,param_2,param_4);
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0xe) != '\0') {
      uVar1 = *(ushort *)(param_1 + 0xc);
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
      *puVar6 = &PTR_LAB_144dc9c90;
      puVar6[2] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = local_38[0];
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return;
}



// FUNCTION 141aa58c0 FUN_141aa58c0 body=1466 status=ok
// SIG undefined FUN_141aa58c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa58c0(ushort *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *_Dst;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float _X;
  undefined4 uVar25;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  ulonglong uStack_170;
  float local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_160 = param_4;
  lVar10 = (**(code **)(*DAT_1464c3340 + 0x10))();
  uVar8 = *(undefined8 *)(lVar10 + 0x14);
  local_168 = (float)param_5._4_4_ / (float)(int)((ulonglong)uVar8 >> 0x20);
  lVar10 = FSceneRenderTargets::Get(param_2);
  uVar11 = *(ulonglong *)(param_3 + 0x1aa0);
  uStack_170 = *(undefined8 *)(param_3 + 0x1aa8);
  fVar24 = *(float *)(param_3 + 0x1668);
  uVar25 = 0x3f800000;
  uVar16 = (longlong)*(int *)(lVar10 + 0x378) / (longlong)(int)param_5;
  iVar15 = (int)uVar16;
  local_178._4_4_ = (int)(uVar11 >> 0x20);
  iVar14 = local_178._4_4_ / iVar15;
  if ((*(byte *)(param_3 + 0x166c) & 1) == 0) {
    fVar24 = fVar24 * 0.0025;
    uVar25 = 0;
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_178 = uVar11;
  if (*(int *)(lVar10 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    if ((*(int *)(lVar10 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  _X = (float)(uVar16 & 0xffffffff);
  fVar17 = _guard_xfg_dispatch_icall_nop(_X);
  fVar18 = _guard_xfg_dispatch_icall_nop(*(float *)(param_3 + 0x168c),fVar17 * DAT_1468509d8);
  iVar4 = *(int *)(param_3 + 0x370);
  iVar5 = *(int *)(param_3 + 0x368);
  fVar17 = *(float *)(param_3 + 0x1664);
  iVar6 = *(int *)(param_3 + 0x374);
  iVar7 = *(int *)(param_3 + 0x36c);
  local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(param_3 + 0x390));
  local_158 = 0;
  uStack_150 = 0x3f80000000000000;
  local_148 = 0;
  uStack_140 = 0x3f80000000000000;
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0x3f80000000000000;
  local_118 = 0;
  uStack_110 = 0x3f80000000000000;
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar23 = *(float *)(param_3 + 0x1674);
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  fVar19 = 0.0;
  fVar20 = 0.0;
  uVar21 = *(undefined4 *)(param_3 + 0x390);
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0) {
    uVar9 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x58))();
    fVar20 = (float)(uVar9 & 7) * 0.1175;
    fVar19 = (float)(uVar9 & 7) * 0.03875;
    uVar21 = (undefined4)local_178;
  }
  fVar1 = *(float *)(DAT_1469fe2b0 + 4);
  fVar22 = 0.0;
  if ((0.0 <= fVar1) && (fVar22 = fVar1, 100.0 <= fVar1)) {
    fVar22 = 100.0;
  }
  local_128 = CONCAT44(fVar20,fVar19);
  uStack_120 = CONCAT44(uVar21,fVar17);
  local_158 = CONCAT44(*(float *)(param_3 + 0x1680) * 0.001,*(undefined4 *)(param_3 + 0x167c));
  uStack_150 = CONCAT44(*(undefined4 *)(param_3 + 0x1660),1.0 / *(float *)(param_3 + 0x1678));
  local_178 = CONCAT44(fVar20,fVar19);
  uStack_170 = (ulonglong)(uint)fVar17;
  local_148 = CONCAT44(local_168,(float)(int)param_5 / (float)(int)uVar8);
  uStack_140 = CONCAT44((float)(iVar4 - iVar5) / (float)(iVar6 - iVar7),fVar24 * fVar18 * 0.25);
  local_138 = CONCAT44(*(float *)(param_3 + 0x1690) / _X,_X);
  uStack_130 = CONCAT44(*(undefined4 *)(param_3 + 0x1688),uVar25);
  local_118 = CONCAT44((fVar23 - *(float *)(param_3 + 0x1670)) * (1.0 / fVar23),1.0 / fVar23);
  uStack_110 = (ulonglong)(uint)fVar22;
  uVar9 = (uint)param_1[2];
  if (0x5f < param_1[2]) {
    uVar9 = 0x60;
  }
  uVar16 = (ulonglong)uVar9;
  local_108 = CONCAT44((float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)),
                       (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)));
  uStack_100 = CONCAT44((float)iVar14,
                        (float)(int)((longlong)
                                     ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 |
                                     uVar11 & 0xffffffff) / (longlong)iVar15));
  if (uVar9 != 0) {
    uVar2 = param_1[1];
    uVar3 = *param_1;
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar11 = uVar16 + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar9 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar11 = (longlong)_Dst + uVar16;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar11;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_158,uVar16);
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
    *puVar13 = &PTR_LAB_144dc9c80;
    puVar13[2] = local_160;
    puVar13[3] = _Dst;
    *(uint *)(puVar13 + 4) = (uint)uVar3;
    *(uint *)((longlong)puVar13 + 0x24) = (uint)uVar2;
    *(uint *)(puVar13 + 5) = uVar9;
  }
  return;
}



// FUNCTION 141aa5e80 FUN_141aa5e80 body=466 status=ok
// SIG undefined FUN_141aa5e80(void)

void FUN_141aa5e80(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [2];
  
  if ((1 < param_4) && (cVar3 = *(char *)(param_1 + 6), cVar3 != '\0')) {
    if (((param_5 & 0x10) == 0) || ((param_5 != DAT_146a61370 || (DAT_146a632a8 == 0)))) {
      uVar4 = FUN_141c96a70(local_38,param_2,param_5);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
      DAT_146a61370 = param_5;
      cVar3 = *(char *)(param_1 + 6);
    }
    lVar2 = DAT_146a632a8;
    uVar4 = *param_3;
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_1 + 4);
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
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144dcb3c8;
      puVar6[2] = uVar4;
      puVar6[4] = lVar2;
    }
  }
  if ((param_4 < 2) && (*(char *)(param_1 + 0xe) != '\0')) {
    CreateMobileSceneTextureUniformBufferSingleDraw<FRHICommandList>(local_38,param_2,param_4);
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0xe) != '\0') {
      uVar1 = *(ushort *)(param_1 + 0xc);
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
      *puVar6 = &PTR_LAB_144dcb3c8;
      puVar6[2] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = local_38[0];
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return;
}



// FUNCTION 141aa6060 FUN_141aa6060 body=466 status=ok
// SIG undefined FUN_141aa6060(void)

void FUN_141aa6060(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [2];
  
  if ((1 < param_4) && (cVar3 = *(char *)(param_1 + 6), cVar3 != '\0')) {
    if (((param_5 & 0x10) == 0) || ((param_5 != DAT_146a61370 || (DAT_146a632a8 == 0)))) {
      uVar4 = FUN_141c969f0(local_38,param_2,param_5);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
      DAT_146a61370 = param_5;
      cVar3 = *(char *)(param_1 + 6);
    }
    lVar2 = DAT_146a632a8;
    uVar4 = *param_3;
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_1 + 4);
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
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144dcb3c8;
      puVar6[2] = uVar4;
      puVar6[4] = lVar2;
    }
  }
  if ((param_4 < 2) && (*(char *)(param_1 + 0xe) != '\0')) {
    CreateMobileSceneTextureUniformBufferSingleDraw<FRHIAsyncComputeCommandListImmediate>
              (local_38,param_2,param_4);
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0xe) != '\0') {
      uVar1 = *(ushort *)(param_1 + 0xc);
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
      *puVar6 = &PTR_LAB_144dcb3c8;
      puVar6[2] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = local_38[0];
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return;
}



// FUNCTION 141aa6240 FUN_141aa6240 body=1466 status=ok
// SIG undefined FUN_141aa6240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa6240(ushort *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *_Dst;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float _X;
  undefined4 uVar25;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  ulonglong uStack_170;
  float local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_160 = param_4;
  lVar10 = (**(code **)(*DAT_1464c3340 + 0x10))();
  uVar8 = *(undefined8 *)(lVar10 + 0x14);
  local_168 = (float)param_5._4_4_ / (float)(int)((ulonglong)uVar8 >> 0x20);
  lVar10 = FSceneRenderTargets::Get(param_2);
  uVar11 = *(ulonglong *)(param_3 + 0x1aa0);
  uStack_170 = *(undefined8 *)(param_3 + 0x1aa8);
  fVar24 = *(float *)(param_3 + 0x1668);
  uVar25 = 0x3f800000;
  uVar16 = (longlong)*(int *)(lVar10 + 0x378) / (longlong)(int)param_5;
  iVar15 = (int)uVar16;
  local_178._4_4_ = (int)(uVar11 >> 0x20);
  iVar14 = local_178._4_4_ / iVar15;
  if ((*(byte *)(param_3 + 0x166c) & 1) == 0) {
    fVar24 = fVar24 * 0.0025;
    uVar25 = 0;
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_178 = uVar11;
  if (*(int *)(lVar10 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    if ((*(int *)(lVar10 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  _X = (float)(uVar16 & 0xffffffff);
  fVar17 = _guard_xfg_dispatch_icall_nop(_X);
  fVar18 = _guard_xfg_dispatch_icall_nop(*(float *)(param_3 + 0x168c),fVar17 * DAT_1468509d8);
  iVar4 = *(int *)(param_3 + 0x370);
  iVar5 = *(int *)(param_3 + 0x368);
  fVar17 = *(float *)(param_3 + 0x1664);
  iVar6 = *(int *)(param_3 + 0x374);
  iVar7 = *(int *)(param_3 + 0x36c);
  local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(param_3 + 0x390));
  local_158 = 0;
  uStack_150 = 0x3f80000000000000;
  local_148 = 0;
  uStack_140 = 0x3f80000000000000;
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0x3f80000000000000;
  local_118 = 0;
  uStack_110 = 0x3f80000000000000;
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar23 = *(float *)(param_3 + 0x1674);
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  fVar19 = 0.0;
  fVar20 = 0.0;
  uVar21 = *(undefined4 *)(param_3 + 0x390);
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0) {
    uVar9 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x58))();
    fVar20 = (float)(uVar9 & 7) * 0.1175;
    fVar19 = (float)(uVar9 & 7) * 0.03875;
    uVar21 = (undefined4)local_178;
  }
  fVar1 = *(float *)(DAT_1469fe2b0 + 4);
  fVar22 = 0.0;
  if ((0.0 <= fVar1) && (fVar22 = fVar1, 100.0 <= fVar1)) {
    fVar22 = 100.0;
  }
  local_128 = CONCAT44(fVar20,fVar19);
  uStack_120 = CONCAT44(uVar21,fVar17);
  local_158 = CONCAT44(*(float *)(param_3 + 0x1680) * 0.001,*(undefined4 *)(param_3 + 0x167c));
  uStack_150 = CONCAT44(*(undefined4 *)(param_3 + 0x1660),1.0 / *(float *)(param_3 + 0x1678));
  local_178 = CONCAT44(fVar20,fVar19);
  uStack_170 = (ulonglong)(uint)fVar17;
  local_148 = CONCAT44(local_168,(float)(int)param_5 / (float)(int)uVar8);
  uStack_140 = CONCAT44((float)(iVar4 - iVar5) / (float)(iVar6 - iVar7),fVar24 * fVar18 * 0.25);
  local_138 = CONCAT44(*(float *)(param_3 + 0x1690) / _X,_X);
  uStack_130 = CONCAT44(*(undefined4 *)(param_3 + 0x1688),uVar25);
  local_118 = CONCAT44((fVar23 - *(float *)(param_3 + 0x1670)) * (1.0 / fVar23),1.0 / fVar23);
  uStack_110 = (ulonglong)(uint)fVar22;
  uVar9 = (uint)param_1[2];
  if (0x5f < param_1[2]) {
    uVar9 = 0x60;
  }
  uVar16 = (ulonglong)uVar9;
  local_108 = CONCAT44((float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)),
                       (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)));
  uStack_100 = CONCAT44((float)iVar14,
                        (float)(int)((longlong)
                                     ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 |
                                     uVar11 & 0xffffffff) / (longlong)iVar15));
  if (uVar9 != 0) {
    uVar2 = param_1[1];
    uVar3 = *param_1;
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar11 = uVar16 + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar9 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar11 = (longlong)_Dst + uVar16;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar11;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_158,uVar16);
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
    *puVar13 = &PTR_LAB_144d92080;
    puVar13[2] = local_160;
    puVar13[3] = _Dst;
    *(uint *)(puVar13 + 4) = (uint)uVar3;
    *(uint *)((longlong)puVar13 + 0x24) = (uint)uVar2;
    *(uint *)(puVar13 + 5) = uVar9;
  }
  return;
}



// FUNCTION 141aa6800 FUN_141aa6800 body=466 status=ok
// SIG undefined FUN_141aa6800(void)

void FUN_141aa6800(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [2];
  
  if ((1 < param_4) && (cVar3 = *(char *)(param_1 + 6), cVar3 != '\0')) {
    if (((param_5 & 0x10) == 0) || ((param_5 != DAT_146a61370 || (DAT_146a632a8 == 0)))) {
      uVar4 = FUN_141c96a70(local_38,param_2,param_5);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
      DAT_146a61370 = param_5;
      cVar3 = *(char *)(param_1 + 6);
    }
    lVar2 = DAT_146a632a8;
    uVar4 = *param_3;
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_1 + 4);
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
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144d920a0;
      puVar6[2] = uVar4;
      puVar6[4] = lVar2;
    }
  }
  if ((param_4 < 2) && (*(char *)(param_1 + 0xe) != '\0')) {
    CreateMobileSceneTextureUniformBufferSingleDraw<FRHICommandList>(local_38,param_2,param_4);
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0xe) != '\0') {
      uVar1 = *(ushort *)(param_1 + 0xc);
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
      *puVar6 = &PTR_LAB_144d920a0;
      puVar6[2] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = local_38[0];
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return;
}



// FUNCTION 141aa69e0 FUN_141aa69e0 body=1466 status=ok
// SIG undefined FUN_141aa69e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa69e0(ushort *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *_Dst;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float _X;
  undefined4 uVar25;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  ulonglong uStack_170;
  float local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_160 = param_4;
  lVar10 = (**(code **)(*DAT_1464c3340 + 0x10))();
  uVar8 = *(undefined8 *)(lVar10 + 0x14);
  local_168 = (float)param_5._4_4_ / (float)(int)((ulonglong)uVar8 >> 0x20);
  lVar10 = FSceneRenderTargets::Get(param_2);
  uVar11 = *(ulonglong *)(param_3 + 0x1aa0);
  uStack_170 = *(undefined8 *)(param_3 + 0x1aa8);
  fVar24 = *(float *)(param_3 + 0x1668);
  uVar25 = 0x3f800000;
  uVar16 = (longlong)*(int *)(lVar10 + 0x378) / (longlong)(int)param_5;
  iVar15 = (int)uVar16;
  local_178._4_4_ = (int)(uVar11 >> 0x20);
  iVar14 = local_178._4_4_ / iVar15;
  if ((*(byte *)(param_3 + 0x166c) & 1) == 0) {
    fVar24 = fVar24 * 0.0025;
    uVar25 = 0;
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_178 = uVar11;
  if (*(int *)(lVar10 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    if ((*(int *)(lVar10 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  _X = (float)(uVar16 & 0xffffffff);
  fVar17 = _guard_xfg_dispatch_icall_nop(_X);
  fVar18 = _guard_xfg_dispatch_icall_nop(*(float *)(param_3 + 0x168c),fVar17 * DAT_1468509d8);
  iVar4 = *(int *)(param_3 + 0x370);
  iVar5 = *(int *)(param_3 + 0x368);
  fVar17 = *(float *)(param_3 + 0x1664);
  iVar6 = *(int *)(param_3 + 0x374);
  iVar7 = *(int *)(param_3 + 0x36c);
  local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(param_3 + 0x390));
  local_158 = 0;
  uStack_150 = 0x3f80000000000000;
  local_148 = 0;
  uStack_140 = 0x3f80000000000000;
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0x3f80000000000000;
  local_118 = 0;
  uStack_110 = 0x3f80000000000000;
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar23 = *(float *)(param_3 + 0x1674);
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  fVar19 = 0.0;
  fVar20 = 0.0;
  uVar21 = *(undefined4 *)(param_3 + 0x390);
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0) {
    uVar9 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x58))();
    fVar20 = (float)(uVar9 & 7) * 0.1175;
    fVar19 = (float)(uVar9 & 7) * 0.03875;
    uVar21 = (undefined4)local_178;
  }
  fVar1 = *(float *)(DAT_1469fe2b0 + 4);
  fVar22 = 0.0;
  if ((0.0 <= fVar1) && (fVar22 = fVar1, 100.0 <= fVar1)) {
    fVar22 = 100.0;
  }
  local_128 = CONCAT44(fVar20,fVar19);
  uStack_120 = CONCAT44(uVar21,fVar17);
  local_158 = CONCAT44(*(float *)(param_3 + 0x1680) * 0.001,*(undefined4 *)(param_3 + 0x167c));
  uStack_150 = CONCAT44(*(undefined4 *)(param_3 + 0x1660),1.0 / *(float *)(param_3 + 0x1678));
  local_178 = CONCAT44(fVar20,fVar19);
  uStack_170 = (ulonglong)(uint)fVar17;
  local_148 = CONCAT44(local_168,(float)(int)param_5 / (float)(int)uVar8);
  uStack_140 = CONCAT44((float)(iVar4 - iVar5) / (float)(iVar6 - iVar7),fVar24 * fVar18 * 0.25);
  local_138 = CONCAT44(*(float *)(param_3 + 0x1690) / _X,_X);
  uStack_130 = CONCAT44(*(undefined4 *)(param_3 + 0x1688),uVar25);
  local_118 = CONCAT44((fVar23 - *(float *)(param_3 + 0x1670)) * (1.0 / fVar23),1.0 / fVar23);
  uStack_110 = (ulonglong)(uint)fVar22;
  uVar9 = (uint)param_1[2];
  if (0x5f < param_1[2]) {
    uVar9 = 0x60;
  }
  uVar16 = (ulonglong)uVar9;
  local_108 = CONCAT44((float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)),
                       (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)));
  uStack_100 = CONCAT44((float)iVar14,
                        (float)(int)((longlong)
                                     ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 |
                                     uVar11 & 0xffffffff) / (longlong)iVar15));
  if (uVar9 != 0) {
    uVar2 = param_1[1];
    uVar3 = *param_1;
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar11 = uVar16 + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar9 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar11 = (longlong)_Dst + uVar16;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar11;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_158,uVar16);
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
    *puVar13 = &PTR_LAB_143f594b0;
    puVar13[2] = local_160;
    puVar13[3] = _Dst;
    *(uint *)(puVar13 + 4) = (uint)uVar3;
    *(uint *)((longlong)puVar13 + 0x24) = (uint)uVar2;
    *(uint *)(puVar13 + 5) = uVar9;
  }
  return;
}



// FUNCTION 141aa6fa0 FUN_141aa6fa0 body=466 status=ok
// SIG undefined FUN_141aa6fa0(void)

void FUN_141aa6fa0(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [2];
  
  if ((1 < param_4) && (cVar3 = *(char *)(param_1 + 6), cVar3 != '\0')) {
    if (((param_5 & 0x10) == 0) || ((param_5 != DAT_146a61370 || (DAT_146a632a8 == 0)))) {
      uVar4 = FUN_141c969f0(local_38,param_2,param_5);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
      DAT_146a61370 = param_5;
      cVar3 = *(char *)(param_1 + 6);
    }
    lVar2 = DAT_146a632a8;
    uVar4 = *param_3;
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_1 + 4);
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
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144d920a0;
      puVar6[2] = uVar4;
      puVar6[4] = lVar2;
    }
  }
  if ((param_4 < 2) && (*(char *)(param_1 + 0xe) != '\0')) {
    CreateMobileSceneTextureUniformBufferSingleDraw<FRHIAsyncComputeCommandListImmediate>
              (local_38,param_2,param_4);
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0xe) != '\0') {
      uVar1 = *(ushort *)(param_1 + 0xc);
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
      *puVar6 = &PTR_LAB_144d920a0;
      puVar6[2] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = local_38[0];
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return;
}



// FUNCTION 141aa7180 FUN_141aa7180 body=1466 status=ok
// SIG undefined FUN_141aa7180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141aa7180(ushort *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *_Dst;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float _X;
  undefined4 uVar25;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  ulonglong uStack_170;
  float local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_160 = param_4;
  lVar10 = (**(code **)(*DAT_1464c3340 + 0x10))();
  uVar8 = *(undefined8 *)(lVar10 + 0x14);
  local_168 = (float)param_5._4_4_ / (float)(int)((ulonglong)uVar8 >> 0x20);
  lVar10 = FSceneRenderTargets::Get(param_2);
  uVar11 = *(ulonglong *)(param_3 + 0x1aa0);
  uStack_170 = *(undefined8 *)(param_3 + 0x1aa8);
  fVar24 = *(float *)(param_3 + 0x1668);
  uVar25 = 0x3f800000;
  uVar16 = (longlong)*(int *)(lVar10 + 0x378) / (longlong)(int)param_5;
  iVar15 = (int)uVar16;
  local_178._4_4_ = (int)(uVar11 >> 0x20);
  iVar14 = local_178._4_4_ / iVar15;
  if ((*(byte *)(param_3 + 0x166c) & 1) == 0) {
    fVar24 = fVar24 * 0.0025;
    uVar25 = 0;
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_178 = uVar11;
  if (*(int *)(lVar10 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    if ((*(int *)(lVar10 + 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  _X = (float)(uVar16 & 0xffffffff);
  fVar17 = _guard_xfg_dispatch_icall_nop(_X);
  fVar18 = _guard_xfg_dispatch_icall_nop(*(float *)(param_3 + 0x168c),fVar17 * DAT_1468509d8);
  iVar4 = *(int *)(param_3 + 0x370);
  iVar5 = *(int *)(param_3 + 0x368);
  fVar17 = *(float *)(param_3 + 0x1664);
  iVar6 = *(int *)(param_3 + 0x374);
  iVar7 = *(int *)(param_3 + 0x36c);
  local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(param_3 + 0x390));
  local_158 = 0;
  uStack_150 = 0x3f80000000000000;
  local_148 = 0;
  uStack_140 = 0x3f80000000000000;
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0x3f80000000000000;
  local_118 = 0;
  uStack_110 = 0x3f80000000000000;
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar23 = *(float *)(param_3 + 0x1674);
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  fVar19 = 0.0;
  fVar20 = 0.0;
  uVar21 = *(undefined4 *)(param_3 + 0x390);
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0) {
    uVar9 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x58))();
    fVar20 = (float)(uVar9 & 7) * 0.1175;
    fVar19 = (float)(uVar9 & 7) * 0.03875;
    uVar21 = (undefined4)local_178;
  }
  fVar1 = *(float *)(DAT_1469fe2b0 + 4);
  fVar22 = 0.0;
  if ((0.0 <= fVar1) && (fVar22 = fVar1, 100.0 <= fVar1)) {
    fVar22 = 100.0;
  }
  local_128 = CONCAT44(fVar20,fVar19);
  uStack_120 = CONCAT44(uVar21,fVar17);
  local_158 = CONCAT44(*(float *)(param_3 + 0x1680) * 0.001,*(undefined4 *)(param_3 + 0x167c));
  uStack_150 = CONCAT44(*(undefined4 *)(param_3 + 0x1660),1.0 / *(float *)(param_3 + 0x1678));
  local_178 = CONCAT44(fVar20,fVar19);
  uStack_170 = (ulonglong)(uint)fVar17;
  local_148 = CONCAT44(local_168,(float)(int)param_5 / (float)(int)uVar8);
  uStack_140 = CONCAT44((float)(iVar4 - iVar5) / (float)(iVar6 - iVar7),fVar24 * fVar18 * 0.25);
  local_138 = CONCAT44(*(float *)(param_3 + 0x1690) / _X,_X);
  uStack_130 = CONCAT44(*(undefined4 *)(param_3 + 0x1688),uVar25);
  local_118 = CONCAT44((fVar23 - *(float *)(param_3 + 0x1670)) * (1.0 / fVar23),1.0 / fVar23);
  uStack_110 = (ulonglong)(uint)fVar22;
  uVar9 = (uint)param_1[2];
  if (0x5f < param_1[2]) {
    uVar9 = 0x60;
  }
  uVar16 = (ulonglong)uVar9;
  local_108 = CONCAT44((float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4)),
                       (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0)));
  uStack_100 = CONCAT44((float)iVar14,
                        (float)(int)((longlong)
                                     ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 |
                                     uVar11 & 0xffffffff) / (longlong)iVar15));
  if (uVar9 != 0) {
    uVar2 = param_1[1];
    uVar3 = *param_1;
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar11 = uVar16 + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar9 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar11 = (longlong)_Dst + uVar16;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar11;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_158,uVar16);
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
    *puVar13 = &PTR_LAB_143f594b0;
    puVar13[2] = local_160;
    puVar13[3] = _Dst;
    *(uint *)(puVar13 + 4) = (uint)uVar3;
    *(uint *)((longlong)puVar13 + 0x24) = (uint)uVar2;
    *(uint *)(puVar13 + 5) = uVar9;
  }
  return;
}



// FUNCTION 141aa7740 FUN_141aa7740 body=841 status=ok
// SIG undefined FUN_141aa7740(void)

void FUN_141aa7740(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  
  bVar3 = false;
  local_res10[0] = 0;
  local_d0 = &DAT_1469fd5d0;
  plVar8 = (longlong *)(*(longlong *)(param_4 + 0x3090) + 0x38);
  local_c8 = 0;
  uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x1908) + 0x80);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar8,local_res10);
  if (local_res10[0] == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)local_res10[0] * 0x20 + *plVar8;
  }
  plVar5 = (longlong *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    plVar5 = (longlong *)0x0;
  }
  lVar7 = *plVar5;
  switch(uVar1) {
  default:
    local_48 = 0;
    local_50 = &DAT_1469fed90;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_f4,&local_50);
    lVar4 = (longlong)local_f4;
    break;
  case 1:
    local_b8 = 0;
    local_c0 = &DAT_1469ff030;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,local_res18,&local_c0);
    lVar4 = (longlong)local_res18[0];
    break;
  case 2:
    local_a8 = 0;
    local_b0 = &DAT_1469ff2d0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,local_res20,&local_b0);
    lVar4 = (longlong)local_res20[0];
    break;
  case 3:
    local_98 = 0;
    local_a0 = &DAT_1469ff570;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_108,&local_a0);
    lVar4 = (longlong)local_108;
    break;
  case 4:
    local_88 = 0;
    local_90 = &DAT_1469ff810;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_104,&local_90);
    lVar4 = (longlong)local_104;
    break;
  case 5:
    local_78 = 0;
    local_80 = &DAT_1469ffab0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_100,&local_80);
    lVar4 = (longlong)local_100;
    break;
  case 6:
    local_68 = 0;
    local_70 = &DAT_1469ffd50;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_fc,&local_70);
    lVar4 = (longlong)local_fc;
    break;
  case 7:
    local_58 = 0;
    local_60 = &DAT_1469ffff0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_f8,&local_60);
    lVar4 = (longlong)local_f8;
  }
  if ((int)lVar4 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 * 0x20 + *plVar8;
  }
  plVar8 = (longlong *)0x0;
  plVar5 = (longlong *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    plVar5 = plVar8;
  }
  lVar4 = *plVar5;
  *param_2 = DAT_1464c1698;
  if (lVar7 == 0) {
    local_f0 = 0;
    bVar3 = true;
  }
  else {
    lVar2 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar8 = *(longlong **)(lVar2 + 0x38);
  }
  param_2[1] = plVar8;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f0);
  }
  bVar3 = false;
  if (lVar4 == 0) {
    bVar3 = true;
    local_e8 = 0;
    uVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
  }
  param_2[4] = uVar6;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e8);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar2 = *(longlong *)(lVar7 + 0x48);
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141aa9800(lVar7,param_1,*(undefined8 *)(lVar2 + 0x38),uVar6);
  local_d8 = 0;
  if ((char)param_6[1] != '\0') {
    local_e0 = *param_6;
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = 1;
  }
  FUN_141ad6320(lVar4,param_1,param_4,param_5,&local_e0);
  if ((char)param_6[1] != '\0') {
    *(undefined1 *)(param_6 + 1) = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_6);
  }
  return;
}



// FUNCTION 141aa7ab0 FUN_141aa7ab0 body=841 status=ok
// SIG undefined FUN_141aa7ab0(void)

void FUN_141aa7ab0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined4 local_48;
  
  bVar3 = false;
  local_res10[0] = 0;
  local_d0 = &DAT_1469fd5d0;
  plVar8 = (longlong *)(*(longlong *)(param_4 + 0x3090) + 0x38);
  local_c8 = 0;
  uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x1908) + 0x80);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar8,local_res10);
  if (local_res10[0] == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)local_res10[0] * 0x20 + *plVar8;
  }
  plVar5 = (longlong *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    plVar5 = (longlong *)0x0;
  }
  lVar7 = *plVar5;
  switch(uVar1) {
  default:
    local_48 = 0;
    local_50 = &DAT_1469feee0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_f4,&local_50);
    lVar4 = (longlong)local_f4;
    break;
  case 1:
    local_b8 = 0;
    local_c0 = &DAT_1469ff180;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,local_res18,&local_c0);
    lVar4 = (longlong)local_res18[0];
    break;
  case 2:
    local_a8 = 0;
    local_b0 = &DAT_1469ff420;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,local_res20,&local_b0);
    lVar4 = (longlong)local_res20[0];
    break;
  case 3:
    local_98 = 0;
    local_a0 = &DAT_1469ff6c0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_108,&local_a0);
    lVar4 = (longlong)local_108;
    break;
  case 4:
    local_88 = 0;
    local_90 = &DAT_1469ff960;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_104,&local_90);
    lVar4 = (longlong)local_104;
    break;
  case 5:
    local_78 = 0;
    local_80 = &DAT_1469ffc00;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_100,&local_80);
    lVar4 = (longlong)local_100;
    break;
  case 6:
    local_68 = 0;
    local_70 = &DAT_1469ffea0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_fc,&local_70);
    lVar4 = (longlong)local_fc;
    break;
  case 7:
    local_58 = 0;
    local_60 = &DAT_146a00140;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,&local_f8,&local_60);
    lVar4 = (longlong)local_f8;
  }
  if ((int)lVar4 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 * 0x20 + *plVar8;
  }
  plVar8 = (longlong *)0x0;
  plVar5 = (longlong *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    plVar5 = plVar8;
  }
  lVar4 = *plVar5;
  *param_2 = DAT_1464c1698;
  if (lVar7 == 0) {
    local_f0 = 0;
    bVar3 = true;
  }
  else {
    lVar2 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar8 = *(longlong **)(lVar2 + 0x38);
  }
  param_2[1] = plVar8;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f0);
  }
  bVar3 = false;
  if (lVar4 == 0) {
    bVar3 = true;
    local_e8 = 0;
    uVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
  }
  param_2[4] = uVar6;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_e8);
  }
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  FUN_141ed6ac0(param_1,param_2,2,1);
  lVar2 = *(longlong *)(lVar7 + 0x48);
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141aa9800(lVar7,param_1,*(undefined8 *)(lVar2 + 0x38),uVar6);
  local_d8 = 0;
  if ((char)param_6[1] != '\0') {
    local_e0 = *param_6;
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = 1;
  }
  FUN_141ad6320(lVar4,param_1,param_4,param_5,&local_e0);
  if ((char)param_6[1] != '\0') {
    *(undefined1 *)(param_6 + 1) = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_6);
  }
  return;
}



// FUNCTION 141aa7e20 SetBuffer<FRHIComputeShader_*,FRHICommandList> body=204 status=ok
// SIG undefined SetBuffer<FRHIComputeShader_*,FRHICommandList>(void)

void FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
               (ushort *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar3 = SetUAVParameterIfCS<FRHICommandList>
                    (param_2,param_3,param_1 + 2,*(undefined8 *)(param_4 + 8));
  if ((cVar3 == '\0') && (uVar2 = *(undefined8 *)(param_4 + 0x10), param_1[1] != 0)) {
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
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    *puVar5 = &PTR_LAB_144dcb360;
    puVar5[2] = param_3;
    puVar5[4] = uVar2;
  }
  return;
}


